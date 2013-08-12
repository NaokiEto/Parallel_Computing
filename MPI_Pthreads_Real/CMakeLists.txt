cmake_minimum_required(VERSION 2.8)

PROJECT(ApplyingVtkMarchingCubes C CXX)

find_package(VTK REQUIRED)
include(${VTK_USE_FILE})

find_package (Threads)

add_executable(ApplyingVtkMarchingCubes ApplyingVtkMarchingCubes.cxx)

SET(CMAKE_C_COMPILER mpicc)
SET(CMAKE_CXX_COMPILER mpicxx)

target_link_libraries(ApplyingVtkMarchingCubes mpi)

target_link_libraries (ApplyingVtkMarchingCubes ${CMAKE_THREAD_LIBS_INIT})

if(VTK_LIBRARIES)
  target_link_libraries(ApplyingVtkMarchingCubes ${VTK_LIBRARIES})
else()
  target_link_libraries(ApplyingVtkMarchingCubes vtkHybrid)
endif()
