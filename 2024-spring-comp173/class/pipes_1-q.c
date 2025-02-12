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
    int fd[2];
    // fd[0] - Read
    // fd[1] - Write
    if(pipe(fd) == -1){
        printf("An Error while opening");
    }

    char input_text[100]; 
    char output_text[100];

    int id = fork();
    if(id == 0){
        close(fd[0]);

        printf("Input some text: ");
        fgets(input_text, sizeof(input_text), stdin);
        write(fd[1], input_text, strlen(input_text) + 1);
        close(fd[1]);
    }
    else{
        close(fd[1]);
        
        read(fd[0], output_text, sizeof(output_text));

        close(fd[0]);

        printf("got from child process %s\n", output_text);
    }

    return 0;
}