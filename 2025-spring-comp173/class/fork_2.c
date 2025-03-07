#include <sys/types.h> /* pid_t */
#include <stdio.h>    /* printf, stderr, fprintf */ 
#include <unistd.h>    /* _exit, fork */ 
int main()
{
	pid_t  pid;
	/* fork another process */
	pid = fork();  

	printf("MyPID: %d\n", getpid());
	printf("PID: %d\n", pid);

	if (pid < 0) { 		/* error occurred */
		fprintf(stderr, "Fork Failed");
		return 1;
	}
	else if (pid == 0) { 	/* child process */
		/* overlays address space with the UNIX command /bin/ls */
		execlp("/bin/ls", "ls", NULL);
	}
	else { 			/* parent process if pid > 0 */
		/* parent will wait for the child */
		wait(NULL);
		printf ("Child Complete\n");
	}
	return 0;
}