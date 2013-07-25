#include <mpi.h>  
#include <stdio.h>  
#include <stdlib.h>  
#define MASTER (processorID == 0)  
#define NODE (processorID != 0)  
#define WORLD MPI_COMM_WORLD  
  
int processorID;  
int numberOfProcessors;  

  
int main (int argc, char* argv[]) {

    double t1, t2, t3;

    int arraySize = 0; /* the arraySize variable will be entered at the command line */  
    MPI_Init(&argc, &argv);
    //t1 = MPI_Wtime();  
    MPI_Comm_size(WORLD,&numberOfProcessors);  
    MPI_Comm_rank(WORLD,&processorID);  
    /* only one node (usually the master node) should read from the command line */  
    if (MASTER) {  
        printf("Please enter the array size: \n");  
        fflush(stdout);  
        scanf("%i",&arraySize);  
    }  
    /* after the arraySize is read on the master node, the other nodes need to  
    have that value locally. at this point, the arraySize = 0 on all nodes  
    except the master node where it is equal to the value entered at the cmd.  
    a simple broadcast call will send the arraySize from the root to all other nodes  */

    MPI_Bcast(&arraySize,1,MPI_INT,0,WORLD);  
    /* declare a new array using malloc */  
    float* someArray = (float*) malloc(arraySize*sizeof(float));  
    /* initialize the newly declared array*/  
    for (int i = 0; i < arraySize; i++) someArray[i] = 0.0;  
  
    /* print the newly declared array */  
    if(processorID == 1) {  
        for (int i = 0; i < arraySize; i++)  
        printf("someArray[%i] = %f \n", i, someArray[i]);  
        printf("------------------------------------------\n");  
    }

    t1 = MPI_Wtime();
    printf("howdy \n");    
  
    /* change the values on the master node */  
    if (MASTER)  
        for (int i = 0; i < arraySize; i++) someArray[i] = 1.0*(i+1);  

    if (MASTER) {  
        /* send someArray to processor 1, with the tag being the 
        rank of the source processor, i.e. 0 */  
        MPI_Send(someArray,arraySize,MPI_FLOAT,1,0,WORLD);  
    }  
    if (processorID == 1) {  
        // allocate a status variable  
        MPI_Status theStatus;  
        // initiate the receive operation from proccor 0.  
        MPI_Recv(someArray,arraySize,MPI_FLOAT,0,0,WORLD,&theStatus);  
        t2 = MPI_Wtime();
        printf( "Elapsed time is %f (from sending to receiving) \n", t2 - t1 ); 
    }  
  
    /* print the values to make sure the array was correctly received */  
    if(processorID == 1) for (int i = 0; i < arraySize; i++)  
        printf("someArray[%i] = %f \n", i, someArray[i]);  

    if(processorID == 1) {
        t3 = MPI_Wtime();
        printf("Elapsed time is %f (from sending to all printed) \n", t3 - t1);
    }

    MPI_Finalize();    
    return 0;  
}
