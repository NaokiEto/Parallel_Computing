#include "mpi.h" 
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

/*  
This structure has number of threads per node
*/

typedef struct 
 {
   double      *a;
   double      *b;
   int     veclen; 
   int   numthrds;
 } DOTDATA;

/* Define globally accessible variables */

#define MAXTHRDS 8
#define VECLEN 100
DOTDATA dotstr; 
pthread_t callThd[MAXTHRDS];

/*
The function dotprod has only minor changes from the code 
that used threads or MPI.  
*/

void *HelloWorld(void *arg)
{

   /* Define and use local variables for convenience */

   int i, start, end, len, numthrds, myid;
   long mythrd;

   /* The number of threads and nodes */

   mythrd = (long)arg;
   MPI_Comm_rank (MPI_COMM_WORLD, &myid);

   /*
   Lock a mutex prior to updating the value in the structure, and unlock it 
   upon updating.
   */
   printf("Task %d thread %ld says Hello World! :D \n",
           myid, mythrd);

   pthread_exit((void*)0);
}

/* 
As before,the main program does very little computation. It creates
threads on each node and the main thread does all the MPI calls. 
*/

int main(int argc, char* argv[])
{
int len=VECLEN, myid, numprocs; 
long i;
int nump1, numthrds;
double *a, *b;
void *status;
pthread_attr_t attr;

/* MPI Initialization */
MPI_Init (&argc, &argv);
MPI_Comm_size (MPI_COMM_WORLD, &numprocs);
MPI_Comm_rank (MPI_COMM_WORLD, &myid);

/* Assign storage and initialize values */
numthrds=MAXTHRDS;
a = (double*) malloc (numprocs*numthrds*len*sizeof(double));
b = (double*) malloc (numprocs*numthrds*len*sizeof(double));
  
for (i=0; i<len*numprocs*numthrds; i++) {
  a[i]=1;
  b[i]=a[i];
  }

dotstr.veclen = len; 
dotstr.a = a; 
dotstr.b = b; 
dotstr.numthrds=MAXTHRDS;
  
/* 
Create thread attribute to specify that the main thread needs
to join with the threads it creates.
*/
pthread_attr_init(&attr );
pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

/* Create threads within this node to perform the dotproduct  */
for(i=0;i<numthrds;i++) {
  pthread_create( &callThd[i], &attr, HelloWorld, (void *)i); 
  }

/* Release the thread attribute handle as it is no longer needed */
pthread_attr_destroy(&attr );

/* Wait on the other threads within this node */
for(i=0;i<numthrds;i++) {
  pthread_join( callThd[i], &status);
  }

MPI_Finalize();
free (a);
free (b);
exit (0);
}   
