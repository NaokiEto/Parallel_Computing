#include <mpi.h>  
#include <stdio.h>  
int processorID;  
int numberOfProcessors;  
  
int main (int argc, char* argv[]) {  
  MPI_Init(&argc, &argv);  
  // get the size of the cluster and store in numberOfProcessors  
  MPI_Comm_size(MPI_COMM_WORLD,&numberOfProcessors);  
  // get the rank or the number of the current process and store it in processorID  
  MPI_Comm_rank(MPI_COMM_WORLD,&processorID);  
  printf("I am processor %d - Bonjour Y'all! \n", processorID);  
  MPI_Finalize();  
  return 0;  
} 
