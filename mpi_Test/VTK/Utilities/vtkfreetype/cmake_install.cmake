# Install script for directory: /home/lakers/Downloads/VTK/Utilities/vtkfreetype

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkfreetype.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkfreetype.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkfreetype.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkfreetype.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkfreetype.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkfreetype.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkfreetype.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkfreetype.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkfreetype.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      IF(CMAKE_INSTALL_DO_STRIP)
        EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "${file}")
      ENDIF(CMAKE_INSTALL_DO_STRIP)
    ENDIF()
  ENDFOREACH()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkfreetype/include" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/ft2build.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/vtk_freetype_mangle.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/vtk_ftmodule.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/vtkFreeTypeConfig.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkfreetype/include/freetype" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftlcdfil.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftmodapi.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftcid.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftadvanc.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftgzip.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftoutln.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftincrem.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftbdf.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftpfr.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/fttypes.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftchapters.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/fterrors.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftmm.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftsizes.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftsnames.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftgasp.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ttunpat.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/t1tables.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftbbox.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/fterrdef.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftglyph.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftotval.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftbitmap.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftmac.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftimage.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftwinfnt.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/tttables.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ttnameid.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftgxval.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftrender.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftlist.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftcache.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/fttrigon.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftmoderr.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftxf86.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/freetype.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftsystem.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/tttags.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftstroke.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftsynth.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/ftlzw.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkfreetype/include/freetype/config" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/config/ftconfig.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/config/ftoption.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/config/ftheader.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/config/ftmodule.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/config/ftstdlib.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkfreetype/include/freetype/internal" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/ftmemory.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/ftcalc.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/psaux.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/ftdriver.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/pcftypes.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/internal.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/tttypes.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/fttrace.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/autohint.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/t1types.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/ftobjs.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/ftdebug.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/ftpic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/pshints.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/ftstream.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/ftgloadr.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/sfnt.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/ftrfork.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/ftserv.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include/freetype/internal/ftvalid.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

