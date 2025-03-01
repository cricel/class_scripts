#include <pthread.h> 
#include <stdio.h>

int sum; /* this data is shared by the thread(s) */ 
void *runner(void *param); /* the thread */

int main(int argc, char *argv[]){
    pthread_t tid; /* the thread identifier */
    pthread_attr_t attr; /* set of attributes for the thread */

    if (argc != 2) {
        fprintf(stderr,"usage: a.out <integer value>\n"); return -1;
    }
    if (atoi(argv[1]) < 0) {
        fprintf(stderr,"Argument %d must be non-negative\n",atoi(argv[1]));
        return -1;
    }

    /* get the default attributes */ 
    pthread_attr_init(&attr);

    /* create the thread */ 
    pthread_create(&tid,&attr,runner,argv[1]);
    
    /* now wait for the thread to exit */ 
    pthread_join(tid,NULL);
    printf("sum = %d\n",sum);
}
