#include <stdio.h>        // Standard I/O functions
#include <stdlib.h>       // Standard library functions
#include <sys/shm.h>      // Shared memory functions (e.g., shmget, shmat)
#include <string.h>       // String handling functions

#define SHM_KEY 12345     // Unique key to identify the shared memory segment
#define SHM_SIZE 1024     // Size of the shared memory segment in bytes

int main() {
    int shmid;                          // Shared memory ID
    char *shared_memory;                // Pointer to shared memory

    // Create a shared memory segment with read-write permissions
    shmid = shmget(SHM_KEY, SHM_SIZE, IPC_CREAT | 0666);
    if (shmid == -1) {
        perror("shmget");               // Print an error if the segment cannot be created
        exit(EXIT_FAILURE);             // Exit with failure status
    }

    // Attach the shared memory segment to the process's address space
    shared_memory = (char *)shmat(shmid, NULL, 0);
    if (shared_memory == (char *)-1) {
        perror("shmat");                // Print an error if attaching fails
        exit(EXIT_FAILURE);             // Exit with failure status
    }

    // Write a message to the shared memory
    snprintf(shared_memory, SHM_SIZE, "Hello from the producer!");
    printf("Data written to shared memory: %s\n", shared_memory);

    // Detach the shared memory segment from the process
    shmdt(shared_memory);

    return 0;                           // Exit successfully
}


// gcc -o shared_memory_producer shared_memory_producer.c
// gcc -o shared_memory_consumer shared_memory_consumer.c