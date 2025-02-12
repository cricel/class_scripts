#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    int value = 5;
    printf("testttt");
    pid_t pid;
    pid = fork();

    if(pid == 0){
        value += 15;
        printf("child: value = %d\n", value);
        return 0;
    }
    else if (pid > 0){
        wait(NULL);
        printf("parent: value = %d\n", value);
        return 0;
    }
}