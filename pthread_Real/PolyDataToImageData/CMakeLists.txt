
cmake_minimum_required(VERSION 2.8)

PROJECT(PolyDataToImageData C CXX)

find_package(VTK REQUIRED)
include(${VTK_USE_FILE})

find_package (Threads)

add_executable(PolyDataToImageData PolyDataToImageData.cxx)

target_link_libraries (PolyDataToImageData ${CMAKE_THREAD_LIBS_INIT})

if(VTK_LIBRARIES)
  target_link_libraries(PolyDataToImageData ${VTK_LIBRARIES})
else()
  target_link_libraries(PolyDataToImageData vtkHybrid)
endif()
