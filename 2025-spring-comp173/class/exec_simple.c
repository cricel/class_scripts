#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    execvp("python3 test.py",NULL);
    return 0;
}