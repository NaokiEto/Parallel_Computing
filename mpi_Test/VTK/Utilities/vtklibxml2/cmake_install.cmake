# Install script for directory: /home/lakers/Downloads/VTK/Utilities/vtklibxml2

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtklibxml2.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtklibxml2.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtklibxml2.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtklibxml2.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtklibxml2.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtklibxml2.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtklibxml2.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtklibxml2.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtklibxml2.so"
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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8/vtklibxml2/libxml" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xmlversion.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/entities.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/schematron.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/pattern.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xmlunicode.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xmlerror.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xmlstring.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/debugXML.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/parser.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xmlmodule.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/valid.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/globals.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xmlreader.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xmlschemastypes.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/HTMLtree.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xpointer.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/uri.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xmlmemory.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xinclude.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/hash.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/tree.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/relaxng.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xmlschemas.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/HTMLparser.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/SAX2.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xmlsave.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/nanoftp.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xlink.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xmlautomata.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/vtk_libxml2_mangle.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/dict.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xmlregexp.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/list.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/schemasInternals.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xpathInternals.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/catalog.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/encoding.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xpath.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xmlwriter.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/DOCBparser.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/parserInternals.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/threads.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/nanohttp.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/chvalid.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/SAX.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xmlexports.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/xmlIO.h"
    "/home/lakers/Downloads/VTK/Utilities/vtklibxml2/libxml/c14n.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

