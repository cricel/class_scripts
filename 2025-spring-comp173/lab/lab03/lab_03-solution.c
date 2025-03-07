/**
 * This program demonstrates the usage of shared memory and the `ipcs` command on POSIX systems.
 *
 * sm.c
 *
 * Usage:
 *      gcc -o sm sm.c
 *      ./sm <segment id>
 */

 #include <stdio.h>
 #include <unistd.h>
 #include <sys/shm.h>
 #include <sys/stat.h>
 #include <sys/types.h>
 #include <sys/wait.h>
 
 /** 
  * Define which operating system you are targeting.
  * Uncomment the appropriate line. This affects how the shared memory key is accessed.
  */
 #define HOSTOS_OS_X    // Uncomment this for macOS (Darwin)
 // #define HOSTOS_LINUX  // Uncomment this for Linux
 
 int main(int argc, char *argv[])
 {
     /* The segment ID returned by shmget(), used to identify the shared memory segment */
     int segment_id;
 
     /* Variable to hold the permission mode bits of the shared memory segment */
     unsigned short mode;
 
     /* Structure to store metadata information about the shared memory segment */
     struct shmid_ds shmbuffer;
 
     // 1. Create a new shared memory segment
     //    - IPC_PRIVATE: Creates a new private segment.
     //    - 100 * sizeof(int): Allocates space for 100 integers.
     //    - IPC_CREAT: Create segment if it doesn't exist.
     //    - S_IRUSR | S_IWUSR: Read and write permissions for the owner.
     segment_id = shmget(IPC_PRIVATE, 100 * sizeof(int), IPC_CREAT | S_IRUSR | S_IWUSR);
     if (segment_id == -1) {
         perror("Failed to create shared memory segment");
         return -1;
     }
     printf("New shared memory segment created: %d\n", segment_id);
 
     // 2. Retrieve and display information about the shared memory segment
     if (shmctl(segment_id, IPC_STAT, &shmbuffer) == -1) {
         fprintf(stderr, "Unable to access segment %d\n", segment_id);
         return -1;
     }
 
     /** 
      * Display column headers for the shared memory segment information.
      * Fields:
      * - ID: Shared memory ID
      * - KEY: Key associated with the segment
      * - MODE: Permission bits
      * - OWNER: User ID of the owner
      * - SIZE: Size of the segment in bytes
      * - ATTACHES: Number of processes attached to the segment
      */
     printf("ID \t\t KEY \t MODE \t\t OWNER \t SIZE \t ATTACHES \n");
     printf("-- \t\t --- \t ---- \t\t ----- \t ---- \t --------- \n");
 
     // Display the key associated with the shared memory segment based on OS
     #ifdef HOSTOS_LINUX
         printf("%d \t %d \t", segment_id, shmbuffer.shm_perm.__key);  // Linux uses __key
     #endif
 
     #ifdef HOSTOS_OS_X
         printf("%d \t\t %d \t", segment_id, shmbuffer.shm_perm._key);  // macOS uses _key
     #endif
 
     // Extract and display the permission bits (mode)
     mode = shmbuffer.shm_perm.mode;
 
     /** 
      * Display permissions in UNIX-like format (rwx for owner, group, and world):
      * - r: read permission
      * - w: write permission
      * - a: execute/attach permission
      */
 
     // OWNER permissions
     printf("%c", (mode & 0400) ? 'r' : '-');
     printf("%c", (mode & 0200) ? 'w' : '-');
     printf("%c", (mode & 0100) ? 'a' : '-');
 
     // GROUP permissions
     printf("%c", (mode & 0040) ? 'r' : '-');
     printf("%c", (mode & 0020) ? 'w' : '-');
     printf("%c", (mode & 0010) ? 'a' : '-');
 
     // WORLD permissions
     printf("%c", (mode & 0004) ? 'r' : '-');
     printf("%c", (mode & 0002) ? 'w' : '-');
     printf("%c", (mode & 0001) ? 'a' : '-');
 
     // Display the user ID of the owner
     printf("\t%d\t", shmbuffer.shm_perm.uid);
 
     // Display the size of the shared memory segment and the number of attached processes
     printf(" %d\t", (int)(shmbuffer.shm_segsz));  // Segment size in bytes
     printf(" %d\t", shmbuffer.shm_nattch);        // Number of current attaches
 
     printf("\n");
 
     // 3. Demonstrate inter-process communication (IPC) using shared memory and fork()
 
     // Create a child process using fork()
     int ret = fork();
 
     // Attach the shared memory segment to the process's address space
     char* shared_memory = (char*)shmat(segment_id, NULL, 0);
     if (shared_memory == (char *)-1) {
         perror("Failed to attach shared memory");
         return -1;
     }
 
     if (ret == 0)  // Child process
     {
         // Write a message to the shared memory
         sprintf(shared_memory, "Hello parent process!");
     }
     else if (ret > 0)  // Parent process
     {
         // Wait for the child process to complete
         wait(NULL);
 
         // Read and display the message from the shared memory
         printf("\nParent received message from Child: %s\n\n", shared_memory);
 
         // Optionally remove the shared memory segment after use:
         // shmctl(segment_id, IPC_RMID, NULL);  
     }
     else
     {
         perror("fork failed");
         return -1;
     }
 
     // Detach the shared memory segment from the process
     shmdt(shared_memory);

    // Remove memory segment
    //  shmctl(segment_id, IPC_RMID, NULL)
 
     return 0;
 }
 