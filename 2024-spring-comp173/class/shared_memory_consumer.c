#include <stdio.h>        // Standard I/O functions
#include <stdlib.h>       // Standard library functions
#include <sys/shm.h>      // Shared memory functions

#define SHM_KEY 12345     // Unique key to identify the shared memory segment
#define SHM_SIZE 1024     // Size of the shared memory segment in bytes

int main() {
    int shmid;                          // Shared memory ID
    char *shared_memory;                // Pointer to shared memory

    // Get the shared memory segment created by the producer
    shmid = shmget(SHM_KEY, SHM_SIZE, 0666);
    if (shmid == -1) {
        perror("shmget");               // Print an error if the segment cannot be found
        exit(EXIT_FAILURE);             // Exit with failure status
    }

    // Attach the shared memory segment to the process's address space
    shared_memory = (char *)shmat(shmid, NULL, 0);
    if (shared_memory == (char *)-1) {
        perror("shmat");                // Print an error if attaching fails
        exit(EXIT_FAILURE);             // Exit with failure status
    }

    // Read and print the message from shared memory
    printf("Data read from shared memory: %s\n", shared_memory);

    // Detach the shared memory segment
    shmdt(shared_memory);

    // Remove the shared memory segment
    shmctl(shmid, IPC_RMID, NULL);

    return 0;                           // Exit successfully
}
