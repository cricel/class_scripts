#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    printf("PID of exec1.c = %d\n", getpid());
    char *args[] = {"Hello", "Operating", "System", NULL};
    fork();
    printf("first fork\n");
    execvp("./exec2", args);
    printf("Back to exec1.c\n");
    fork();
    printf("second fork\n");
    return 0;
}