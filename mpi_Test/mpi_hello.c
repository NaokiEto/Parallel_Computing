/* MPI Hello World stuff */
#include <mpi.h>
#include <stdio.h>
 
int main (int argc, char* argv[])
{
  int rank, size;
 
  MPI_Init (&argc, &argv);
  MPI_Comm_size (MPI_COMM_WORLD, &size);
  MPI_Comm_rank (MPI_COMM_WORLD, &rank);
  printf( "Hello world from process %d of %d\n", rank, size );
  MPI_Wtime();
  double wick = MPI_Wtick();
  printf("Here's the tick! %f \n", wick);
  MPI_Finalize();
  return 0;
}
