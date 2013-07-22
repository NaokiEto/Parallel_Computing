# CMake generated Testfile for 
# Source directory: /home/lakers/Downloads/VTK/Parallel/Testing/Cxx
# Build directory: /home/lakers/Downloads/VTK/Parallel/Testing/Cxx
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(DummyController "/home/lakers/Downloads/VTK/bin/ParallelCxxTests" "DummyController")
ADD_TEST(TestTemporalCacheTemporal "/home/lakers/Downloads/VTK/bin/ParallelCxxTests" "TestTemporalCacheTemporal")
ADD_TEST(TestTemporalCacheSimple "/home/lakers/Downloads/VTK/bin/ParallelCxxTests" "TestTemporalCacheSimple")
ADD_TEST(MPIController "/usr/bin/mpiexec" "-np" "256" "/home/lakers/Downloads/VTK/bin/./TestMPIController")
ADD_TEST(TestProcess "/usr/bin/mpiexec" "-np" "2" "/home/lakers/Downloads/VTK/bin/./TestProcess")
ADD_TEST(GenericCommunicator-image "/usr/bin/mpiexec" "-np" "2" "/home/lakers/Downloads/VTK/bin/./GenericCommunicator")
ADD_TEST(TestCommunicator "/usr/bin/mpiexec" "-np" "2" "/home/lakers/Downloads/VTK/bin/./GenericCommunicator")
