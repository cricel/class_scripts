#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>

// Structure to pass data to the thread
typedef struct {
    int num;
} ThreadData;

// Thread function to compute the square of a number
void* compute_square(void* arg) {
    ThreadData* data = (ThreadData*)arg;
    int square = data->num * data->num;
    printf("Thread: Square of %d is %d\n", data->num, square);
    pthread_exit(NULL);
}

int main() {
    int fd[2];  // Pipe file descriptors
    pid_t pid;

    // Create a pipe
    if (pipe(fd) == -1) {
        perror("Pipe failed");
        exit(1);
    }

    // Create a child process
    pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    }
    else if (pid == 0) {  // Child process
        close(fd[1]);  // Close unused write end

        int num;
        read(fd[0], &num, sizeof(num));  // Read number from the pipe
        close(fd[0]);  // Close read end after reading

        printf("Child: Received number %d\n", num);

        // Create a thread to compute the square
        pthread_t thread;
        ThreadData data;
        data.num = num;

        if (pthread_create(&thread, NULL, compute_square, (void*)&data) != 0) {
            perror("Thread creation failed");
            exit(1);
        }

        // Wait for the thread to finish
        pthread_join(thread, NULL);
        exit(0);
    }
    else {  // Parent process
        close(fd[0]);  // Close unused read end

        int num = 5;  // Number to send to the child
        printf("Parent: Sending number %d to child...\n", num);
        write(fd[1], &num, sizeof(num));  // Write number to the pipe
        close(fd[1]);  // Close write end after writing

        wait(NULL);  // Wait for child process to finish
        printf("Parent: Everything Done");
    }

    return 0;
}
