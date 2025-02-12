#include <stdio.h>        // Standard I/O functions for input/output
#include <stdlib.h>       // Standard library functions (e.g., exit)
#include <mqueue.h>       // POSIX message queue functions

#define QUEUE_NAME "/my_message_queue"  // Define the name of the message queue (must match the sender)
#define MAX_SIZE 1024                   // Define the maximum size for the message buffer

int main() {
    mqd_t mq;                           // Message queue descriptor
    char message[MAX_SIZE];             // Buffer to hold the received message
    struct mq_attr attr;                // Structure to hold message queue attributes

    // Open the message queue for reading only
    mq = mq_open(QUEUE_NAME, O_RDONLY);
    if (mq == -1) {
        perror("mq_open");              // Print an error message if mq_open fails
        exit(EXIT_FAILURE);             // Exit the program with a failure status
    }

    // Get and display the attributes of the message queue for debugging purposes
    mq_getattr(mq, &attr);
    printf("Message queue attributes:\n");
    printf("Max messages: %ld, Max message size: %ld\n", attr.mq_maxmsg, attr.mq_msgsize);

    // Ensure the buffer size matches the maximum message size
    if (MAX_SIZE < attr.mq_msgsize) {
        fprintf(stderr, "Buffer size is smaller than the message size. Increase MAX_SIZE.\n");
        exit(EXIT_FAILURE);             // Exit the program with a failure status if sizes don't match
    }

    // Receive a message from the queue
    if (mq_receive(mq, message, MAX_SIZE, NULL) == -1) {
        perror("mq_receive");           // Print an error if mq_receive fails
        exit(EXIT_FAILURE);             // Exit the program with a failure status
    }

    printf("Message received: %s\n", message);  // Print the received message

    // Close the message queue to release resources
    mq_close(mq);

    // Unlink (delete) the message queue from the system
    mq_unlink(QUEUE_NAME);

    return 0;                           // Exit the program successfully
}
