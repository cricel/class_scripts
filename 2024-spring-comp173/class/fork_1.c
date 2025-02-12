#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>

int main(){
    // fork();

    time_t now;

    printf("bye\n");
    printf("bye\n");
    
    fork();

    printf("hello world! \n ^^PID = %d\n ^^Current time = %d\n", getpid(), time(&now));

    printf("bye\n");

    return 0;
}