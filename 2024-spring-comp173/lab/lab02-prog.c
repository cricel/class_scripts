#include <stdio.h>
#include <unistd.h>
#define MAX_LINE 80
/** setup() reads in the next command line, separating it into
distinct tokens using whitespace as delimiters.
setup() modifies the args parameter so that it holds pointers
to the null-terminated strings that are the tokens in the most
recent user command line as well as a NULL pointer, indicating
the end of the argument list, which comes after the string
pointers that have been assigned to args. */
void setup(char inputBuffer[], char *args[],int *background)
{
    int length, /* # of characters in the command line */
        i, /* loop index for accessing inputBuffer array */
        start, /* index where beginning of next command parameter is */
        ct; /* index of where to place the next parameter into args[] */

    ct = 0;

    /* read what the user enters on the command line */
    length = read(STDIN_FILENO, inputBuffer, MAX_LINE);
    start = -1;
    if (length == 0){
        _exit(0); /* ^d was entered, end of user command stream */
    }
    if (length < 0){
        perror("error reading the command");
        _exit(-1); /* terminate with error code of -1 */
    }

    /* examine every character in the inputBuffer */
    for (i = 0; i < length; i++) {
        switch (inputBuffer[i]){
            case ' ':
            case '\t' : /* argument separators */
                if(start != -1){
                    args[ct] = &inputBuffer[start]; /* set up pointer */
                    ct++;
                }
                inputBuffer[i] = '\0'; /* add a null char; make a C string */
                start = -1;
                break;

            case '\n': /* should be the final char examined */
                if (start != -1){
                    args[ct] = &inputBuffer[start];
                    ct++;
                }
                inputBuffer[i] = '\0';
                args[ct] = NULL; /* no more arguments to this command */
                break;
                
            case '&':
                *background = 1;
                inputBuffer[i] = '\0';
                break;

            default : /* some other character */
                if (start == -1){
                    start = i;
                }
        }
    }
    args[ct] = NULL; /* just in case the input line was > 80 */
}

int main(void)
{
    char inputBuffer[MAX_LINE]; /* buffer to hold command entered */
    int background; /* equals 1 if a command is followed by '&' */
    char *args[MAX_LINE/2 + 1]; /* command line arguments */
    while (1) {
        background = 0;
        printf(" COMMAND->");
        fflush(stdout);
        /* setup() calls exit() when Control-D is entered */
        setup(inputBuffer, args, &background);
        /** the steps are:
         (1) fork a child process using fork()
        (2) the child process will invoke execvp()
        (3) if background == 0, the parent will wait,
        otherwise the parent will continue to the next iteration. */
    }
}
