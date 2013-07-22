# Install script for directory: /home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/TclTk/internals/tk8.5" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tkUnixDefault.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tkIntDecls.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tkWin.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tclIntPlatDecls.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tclPort.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tkMacOSXPort.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tclInt.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tkMacOSXInt.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tkPort.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tkMacOSXDefault.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tkWinPort.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tkUnixPort.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tclUnixPort.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tkIntPlatDecls.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tkPlatDecls.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tclWinPort.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tkInt.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tkWinDefault.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/default.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tkWinInt.h"
    "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5/tclIntDecls.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

