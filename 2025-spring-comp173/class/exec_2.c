#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    printf("we are in exec2.c\n");
    printf("args: %d\n", argc);
    printf("PID of exec2.c = %d\n", getpid());
    return 0;
}