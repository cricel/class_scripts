#include <stdio.h>        // Standard I/O functions for input/output
#include <stdlib.h>       // Standard library functions (e.g., exit)
#include <mqueue.h>       // POSIX message queue functions
#include <string.h>       // String handling functions (e.g., snprintf)

#define QUEUE_NAME "/my_message_queue"  // Define the name of the message queue
#define MAX_SIZE 1024                   // Define the maximum size for messages

int main() {
    mqd_t mq;                           // Message queue descriptor
    char message[MAX_SIZE];             // Buffer to hold the message to be sent

    // Define and set the attributes for the message queue
    struct mq_attr attr;
    attr.mq_flags = 0;                  // 0 means the queue will block if full
    attr.mq_maxmsg = 10;                // Maximum number of messages allowed in the queue
    attr.mq_msgsize = MAX_SIZE;         // Maximum size of each message
    attr.mq_curmsgs = 0;                // Current number of messages in the queue (initially 0)

    // Open or create the message queue with the specified attributes
    mq = mq_open(QUEUE_NAME, O_CREAT | O_WRONLY, 0644, &attr);
    if (mq == -1) {
        perror("mq_open");              // Print an error message if mq_open fails
        exit(EXIT_FAILURE);             // Exit the program with a failure status
    }

    // Display the attributes of the message queue for debugging purposes
    mq_getattr(mq, &attr);
    printf("Message queue attributes:\n");
    printf("Max messages: %ld, Max message size: %ld\n", attr.mq_maxmsg, attr.mq_msgsize);

    // Format a message to be sent
    snprintf(message, MAX_SIZE, "Hello from the sender!");

    // Send the formatted message to the queue
    if (mq_send(mq, message, strlen(message) + 1, 0) == -1) {
        perror("mq_send");              // Print an error if mq_send fails
        exit(EXIT_FAILURE);             // Exit the program with a failure status
    }

    printf("Message sent: %s\n", message);  // Confirm that the message was sent successfully

    // Close the message queue to release resources
    mq_close(mq);

    return 0;                           // Exit the program successfully
}


// gcc -o message_sender message_sender.c -lrt
// gcc -o message_receiver message_receiver.c -lrt