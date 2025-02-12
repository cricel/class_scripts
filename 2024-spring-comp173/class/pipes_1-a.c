#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>


void reverse_case(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

int main(int argc, char* argv[]){
    int fd_s[2];
    int fd_r[2];
    // fd[0] - Read
    // fd[1] - Write
    if(pipe(fd_s) == -1){
        printf("An Error while opening");
    }
    if(pipe(fd_r) == -1){
        printf("An Error while opening");
    }

    int id = fork();
    if(id == 0){
        close(fd_s[0]);
        close(fd_r[1]);

        char input_text[100]; 
        printf("Input some text: ");
        fgets(input_text, sizeof(input_text), stdin);
        write(fd_s[1], input_text, strlen(input_text) + 1);

        close(fd_s[1]);

        char message[100];
        read(fd_r[0], message, sizeof(message));

        close(fd_r[0]);

        printf("from child process: %s\n", message);

        
    }
    else{
        close(fd_s[1]);
        close(fd_r[0]);
        
        char output_text[100];
        read(fd_s[0], output_text, sizeof(output_text));

        close(fd_s[0]);

        reverse_case(output_text);

        write(fd_r[1], output_text, strlen(output_text) + 1);

        close(fd_r[1]);

        wait(NULL);
        printf("final message: %s\n", output_text);
    }

    return 0;
}