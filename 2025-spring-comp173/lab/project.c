#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <pthread.h>
#include <string.h>
#include <time.h>

#define GRID_SIZE 3
#define NUM_TURNS 10

typedef struct {
    char dungeon[GRID_SIZE][GRID_SIZE];
    int player_pos[2][2]; // [player][row,col]
    int gold_collected[2];
    pthread_mutex_t lock;
} SharedState;

void create_dungeon(SharedState *state) {
    for (int i = 0; i < GRID_SIZE; i++)
        for (int j = 0; j < GRID_SIZE; j++)
            state->dungeon[i][j] = '.';

    state->dungeon[0][1] = 'G';
    state->dungeon[1][1] = 'G';
    state->dungeon[2][2] = 'G';
}

void display_dungeon(SharedState *state) {
    char display[GRID_SIZE][GRID_SIZE];
    memcpy(display, state->dungeon, sizeof(display));

    for (int i = 0; i < 2; i++) {
        int r = state->player_pos[i][0];
        int c = state->player_pos[i][1];
        display[r][c] = '1' + i; // '1' or '2'
    }

    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++)
            printf("%c ", display[i][j]);
        printf("\n");
    }
    printf("\n");
}

void player_process(int id, int read_fd, int write_fd, SharedState *state) {
    while (1) {
        char msg[10];
        read(read_fd, msg, sizeof(msg));
        if (strcmp(msg, "your_turn") == 0) {
            int r = state->player_pos[id][0];
            int c = state->player_pos[id][1];

            int new_r, new_c;
            while (1) {
                printf("Player %d's turn. You are at (%d,%d)\n", id + 1, r, c);
                printf("Enter row and column to move to (adjacent cell): ");
                fflush(stdout);

                if (scanf("%d %d", &new_r, &new_c) != 2) {
                    while (getchar() != '\n'); // clear invalid input
                    printf("Invalid input. Try again.\n");
                    continue;
                }

                int dr = abs(new_r - r);
                int dc = abs(new_c - c);

                if ((dr + dc == 1) && new_r >= 0 && new_r < GRID_SIZE && new_c >= 0 && new_c < GRID_SIZE) {
                    break;
                } else {
                    printf("Invalid move. You can only move to adjacent cells.\n");
                }
            }

            state->player_pos[id][0] = new_r;
            state->player_pos[id][1] = new_c;

            pthread_mutex_lock(&state->lock);
            if (state->dungeon[new_r][new_c] == 'G') {
                state->dungeon[new_r][new_c] = '.';
                state->gold_collected[id]++;
                printf("Player %d collected gold at (%d,%d)\n", id + 1, new_r, new_c);
            }
            pthread_mutex_unlock(&state->lock);

            write(write_fd, "done", 5);
        } else if (strcmp(msg, "quit") == 0) {
            break;
        }
    }
}


int main() {
    // Create shared memory
    SharedState *state = mmap(NULL, sizeof(SharedState),
                              PROT_READ | PROT_WRITE,
                              MAP_SHARED | MAP_ANONYMOUS, -1, 0);
    if (state == MAP_FAILED) {
        perror("mmap failed");
        exit(1);
    }

    // Init shared state
    create_dungeon(state);
    state->player_pos[0][0] = 0; state->player_pos[0][1] = 0;
    state->player_pos[1][0] = 2; state->player_pos[1][1] = 2;
    state->gold_collected[0] = 0;
    state->gold_collected[1] = 0;

    pthread_mutexattr_t attr;
    pthread_mutexattr_init(&attr);
    pthread_mutexattr_setpshared(&attr, PTHREAD_PROCESS_SHARED);
    pthread_mutex_init(&state->lock, &attr);

    // Pipes for communication
    int p1_in[2], p1_out[2];
    int p2_in[2], p2_out[2];
    pipe(p1_in); pipe(p1_out);
    pipe(p2_in); pipe(p2_out);

    pid_t pid1 = fork();
    if (pid1 == 0) {
        close(p1_in[1]); close(p1_out[0]);
        player_process(0, p1_in[0], p1_out[1], state);
        exit(0);
    }

    pid_t pid2 = fork();
    if (pid2 == 0) {
        close(p2_in[1]); close(p2_out[0]);
        player_process(1, p2_in[0], p2_out[1], state);
        exit(0);
    }

    // Game master logic
    close(p1_in[0]); close(p1_out[1]);
    close(p2_in[0]); close(p2_out[1]);

    for (int turn = 0; turn < NUM_TURNS; turn++) {
        printf("Turn %d:\n", turn + 1);
        display_dungeon(state);

        write(p1_in[1], "your_turn", 10);
        char buf[10]; read(p1_out[0], buf, sizeof(buf));

        write(p2_in[1], "your_turn", 10);
        read(p2_out[0], buf, sizeof(buf));
    }

    // Final state
    printf("Final Dungeon:\n");
    display_dungeon(state);
    printf("Player 1 Gold: %d\n", state->gold_collected[0]);
    printf("Player 2 Gold: %d\n", state->gold_collected[1]);

    write(p1_in[1], "quit", 5);
    write(p2_in[1], "quit", 5);

    return 0;
}
