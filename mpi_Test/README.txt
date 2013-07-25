Compile command:

mpicc mpi_hello.c -o mpi_hello

sudo mpic++ -I $HOME/Downloads/VTK/Parallel -lvtkParallel mpi_vtk_Hello_World.cpp -I $HOME/Downloads/VTK -I $HOME/Downloads/VTK/Common -o mpi_vtk_Hello_World

sudo mpic++ -I VTK/Parallel -lvtkParallel mpi_vtk_Hello_World.cpp -I VTK -I VTK/Common -o mpi_vtk_Hello_World

Run command:

sudo mpirun -np 2 ./mpi_hello if want 2 threads

sudo mpirun -np 5 ./mpi_hello if want 5 threads

for mpi_vtk_Hello_World,

do not add a sudo in front b/c of root privileges
