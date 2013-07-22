# Install script for directory: /home/lakers/Downloads/VTK/Utilities/Doxygen

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "$HOME/Documents")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/doxygen" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Utilities/Doxygen/vtk-logo.gif"
    "/home/lakers/Downloads/VTK/Utilities/Doxygen/paper-clip.gif"
    "/home/lakers/Downloads/VTK/Utilities/Doxygen/pic.gif"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/doxygen" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Utilities/Doxygen/doc_class2example.pl"
    "/home/lakers/Downloads/VTK/Utilities/Doxygen/doc_rmpath.pl"
    "/home/lakers/Downloads/VTK/Utilities/Doxygen/doc_header2doxygen.pl"
    "/home/lakers/Downloads/VTK/Utilities/Doxygen/doc_index.pl"
    "/home/lakers/Downloads/VTK/Utilities/Doxygen/doc_contributors.pl"
    "/home/lakers/Downloads/VTK/Utilities/Doxygen/doc_codematch.pl"
    "/home/lakers/Downloads/VTK/Utilities/Doxygen/doc_cleanhtml.pl"
    "/home/lakers/Downloads/VTK/Utilities/Doxygen/doc_version.pl"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/doxygen" TYPE FILE FILES "/home/lakers/Downloads/VTK/Utilities/Doxygen/doc_index.stop")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/doxygen" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Utilities/Doxygen/authors.txt"
    "/home/lakers/Downloads/VTK/Utilities/Doxygen/doc_readme.txt"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

