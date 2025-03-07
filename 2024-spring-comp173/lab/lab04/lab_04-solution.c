#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>

#define YES 1
#define NO 0

int main() {
    int num_voters, max_rounds;

    // Step 1: Ask user to input number of voters and max number of rounds
    printf("Enter the number of voters: ");
    scanf("%d", &num_voters);
    if (num_voters < 3) {
        printf("Number of voters should be at least 3.\n");
        return 1;
    }

    printf("Enter the number of rounds: ");
    scanf("%d", &max_rounds);

    // Step 2: Judge creates N pipes
    int pipes[num_voters][2];
    for (int i = 0; i < num_voters; i++) {
        if (pipe(pipes[i]) == -1) {
            perror("Pipe creation failed");
            return 1;
        }
    }

    // Step 3: Judge creates N child processes (voters)
    pid_t pids[num_voters];
    for (int i = 0; i < num_voters; i++) {
        pids[i] = fork();
        if (pids[i] < 0) {
            perror("Fork failed");
            return 1;
        } else if (pids[i] == 0) {
            // Voter process
            srand(time(NULL) + getpid()); // Seed random generator

            close(pipes[i][0]); // Close read end in voter

            for (int round = 1; round <= max_rounds; round++) {
                int vote = rand() % 2; // Random vote: 0 = NO, 1 = YES
                write(pipes[i][1], &vote, sizeof(int)); // Send vote to judge
            }

            close(pipes[i][1]); // Close write end after sending votes
            exit(0); // Voter process ends
        } else {
            // Judge process closes write end
            close(pipes[i][1]);
        }
    }

    // Step 4: Judge collects votes and determines majority for each round
    for (int round = 1; round <= max_rounds; round++) {
        int yes_count = 0, no_count = 0;

        printf("\n------- Round %d -------\n", round);

        // Collect votes from all voters
        for (int i = 0; i < num_voters; i++) {
            int vote;
            read(pipes[i][0], &vote, sizeof(int));
            printf("Round %d: Voter %d votes: %s\n", round, i, (vote == YES) ? "YES" : "NO");

            if (vote == YES) {
                yes_count++;
            } else {
                no_count++;
            }
        }

        // Display majority result
        if (yes_count > no_count) {
            printf("--- Round %d: The voting result is a YES.\n", round);
        } else if (no_count > yes_count) {
            printf("--- Round %d: The voting result is a NO.\n", round);
        } else {
            printf("--- Round %d: The voting result is a TIE.\n", round);
        }
    }

    // Wait for all child processes to terminate
    for (int i = 0; i < num_voters; i++) {
        wait(NULL);
    }

    printf("\nVoting completed. All processes terminated.\n");
    return 0;
}
