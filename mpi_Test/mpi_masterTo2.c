#include <mpi.h>  
#include <stdio.h>  
#define MASTER (processorID == 0)  
#define NODE (processorID != 0)  
#define WORLD MPI_COMM_WORLD  
  
int processorID;  
int numberOfProcessors;  
  
int main (int argc, char* argv[]) {  
  int someVariable = 0;  
  MPI_Init(&argc, &argv);  
  MPI_Comm_size(WORLD,&numberOfProcessors);  
  MPI_Comm_rank(WORLD,&processorID);  
  // set the value of someVarialbe on the Master node only  
  if (MASTER) someVariable = 10;  
  // print the value of someVariable on all processors - this should be zero for all  
  //nodes except the master  
  printf("Before Send - Processor %i - someVariable = %i  \n",processorID,someVariable);  
  if (MASTER) {  
    // send someVariable to processor 1, with the tag being  
    //the rank of the source processor, i.e. 0  
    MPI_Send(&someVariable,1,MPI_INT,1,0,WORLD);  
  }  
  if (processorID == 1) {  
    // allocate a status variable  
    MPI_Status theStatus;  
    // initiate the receive operation from proccor 0.  
    MPI_Recv(&someVariable,1,MPI_INT,0,0,WORLD,&theStatus);  
  }  

  printf("After Send - Processor %i - someVariable = %i \n",processorID,someVariable);  
  MPI_Finalize();  
  return 0;  
}  