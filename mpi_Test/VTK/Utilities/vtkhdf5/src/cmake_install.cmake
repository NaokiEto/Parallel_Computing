# Install script for directory: /home/lakers/Downloads/VTK/Utilities/vtkhdf5/src

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtkhdf5" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/hdf5.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5api_adpt.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5public.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5version.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5overflow.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/vtk_libhdf5_mangle.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Apkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Apublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5ACpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5ACpublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5B2pkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5B2public.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Bpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Bpublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Dpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Dpublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Edefin.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Einit.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Epkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Epubgen.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Epublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Eterm.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Fpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Fpublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FDcore.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FDdirect.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FDfamily.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FDlog.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FDmpi.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FDmpio.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FDmpiposix.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FDmulti.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FDpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FDpublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FDsec2.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FDstdio.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FSpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FSpublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Gpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Gpublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5HFpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5HFpublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5HGpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5HGpublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5HLpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5HLpublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5MPpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Opkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Opublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Oshared.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Ppkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Ppublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Spkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Spublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5SMpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Tpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Tpublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Zpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Zpublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Cpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Cpublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Ipkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Ipublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Lpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Lpublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5MMpublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Rpkg.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Rpublic.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5private.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Aprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5ACprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5B2private.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Bprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5CSprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Dprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Eprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FDprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Fprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FLprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FOprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5MFprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5MMprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Cprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5FSprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Gprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5HFprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5HGprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5HLprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5HPprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Iprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Lprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5MPprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Oprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Pprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5RCprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Rprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5RSprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5SLprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5SMprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Sprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5STprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Tprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5TSprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Vprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5WBprivate.h"
    "/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src/H5Zprivate.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkhdf5.so.1.8.5"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkhdf5.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkhdf5.so.1.8.5"
    "/home/lakers/Downloads/VTK/bin/libvtkhdf5.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkhdf5.so.1.8.5"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkhdf5.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_REMOVE
           FILE "${file}")
      IF(CMAKE_INSTALL_DO_STRIP)
        EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "${file}")
      ENDIF(CMAKE_INSTALL_DO_STRIP)
    ENDIF()
  ENDFOREACH()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")

