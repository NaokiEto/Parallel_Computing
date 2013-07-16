/* Hello World C file using pthreads */
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM	2

void *PrintHello(void *threadid)
{
    long tid = (long)threadid;
    printf("Hello World! Thread #%ld\n", tid);
    pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
    pthread_t threads[NUM];
    int rc;
    long t;
    for(t = 0;t < NUM; t++){
        printf("Creating thread %ld\n", t);
        rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);
        if (rc){
            printf("ERROR; return code from pthread_create() is %d\n", rc);
            exit(-1);
        }
    }

    pthread_exit(NULL);
}
