Compile command:

mpicc mpi_hello.c -o mpi_hello

sudo mpic++ -I $HOME/Downloads/VTK6.0.0Attempt2/Parallel/MPI mpi_vtk_Hello_World.cpp -I $HOME/Downloads/VTK6.0.0Attempt2/Parallel/Core -I $HOME/Downloads/VTK6.0.0Attempt2/Common/Core -o mpi_vtk_Hello_World

Run command:

mpirun -np 2 ./mpi_hello 
