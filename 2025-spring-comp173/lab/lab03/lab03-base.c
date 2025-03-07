#include <stdio.h>
#include <unistd.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(int argc, char *argv[]) {
    int segment_id; // identifier of the shared memory segment
    unsigned short mode; // permissions of the segment
    struct shmid_ds shmbuffer; // the shared memory segment
    
    // Step 1: Create a new shared memory segment using shmget
    ////
    // [Your code goes here. Check course slides to see how to use shmget.]
    ////

    // Step 2: Retrieve the information of the segment
    if (shmctl(segment_id, IPC_STAT, &shmbuffer) == -1) {
        printf("Unable to access segment %d\n",segment_id);
        return 0;
    }

    // Step 3: output information about the segment in the required format
    ////
    // [Your code that outputs Segment ID, Key, Owner UID, size, Number of Attaches goes here.]
    ////

    // Output mode in the right format
    mode = shmbuffer.shm_perm.mode;

    /** OWNER */
    if (mode & 0400)
        printf("r");
    else
        printf("-");
    if (mode & 0200)
        printf("w");
    else
        printf("-");
    if (mode & 0100)
        printf("a");
    else
        printf("-");

    /** GROUP */
    if (mode & 0040)
        printf("r");
    else
        printf("-");
    if (mode & 0020)
        printf("w");
    else
        printf("-");
    if (mode & 0010)
        printf("a");
    else
        printf("-");
        
    /** WORLD */
    if (mode & 0004)
        printf("r");
    else
        printf("-");
    if (mode & 0002)
        printf("w");
    else
        printf("-");
    if (mode & 0001)
        printf("a");
    else
        printf("-");

    // …
    // Step 4: Create a new process using fork
    ////
    // [Your code goes here.]
    ////

    // Step 5: The child process sends a message to the parent process via the shared memory segment created in Step 1 and the parent prints out the message it received from the child process
    ////
    // [Your code goes here.]
    ////
}