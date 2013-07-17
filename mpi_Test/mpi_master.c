#include <mpi.h>  
#include <stdio.h>  
#define MASTER (processorID == 0)  
#define NODE (processorID != 0)  
#define WORLD MPI_COMM_WORLD  
  
int processorID;  
int numberOfProcessors;  
  
int main (int argc, char* argv[]) {  
  MPI_Init(&argc, &argv);  
  MPI_Comm_size(WORLD,&numberOfProcessors);  
  MPI_Comm_rank(WORLD,&processorID);  
  if (MASTER)  
    printf("Master node says: Bonjour Y'all! \n");  
  else  
    printf("Compute node says: Chillax! \n");  
  MPI_Finalize();  
  return 0;  
}  
