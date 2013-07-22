#-----------------------------------------------------------------------------
#
# VTKConfig.cmake - VTK CMake configuration file for external projects.
#
# This file is configured by VTK and used by the UseVTK.cmake module
# to load VTK's settings for an external project.


# The set of VTK libraries
SET(VTK_LIBRARIES "vtkCommon;vtkFiltering;vtkImaging;vtkGraphics;vtkGenericFiltering;vtkIO;vtkRendering;vtkVolumeRendering;vtkHybrid;vtkWidgets;vtkParallel;vtkInfovis;vtkGeovis;vtkViews;vtkCharts")

# The VTK include file directories.
SET(VTK_INCLUDE_DIRS "/home/lakers/Downloads/VTK;/home/lakers/Downloads/VTK/Common;/home/lakers/Downloads/VTK/Utilities;/home/lakers/Downloads/VTK/VolumeRendering;/home/lakers/Downloads/VTK/Rendering;/home/lakers/Downloads/VTK/Charts;/home/lakers/Downloads/VTK/Utilities/vtkalglib;/home/lakers/Downloads/VTK/Wrapping/Python;/home/lakers/Downloads/VTK/Wrapping/Python;/home/lakers/Downloads/VTK/Infovis;/home/lakers/Downloads/VTK/Geovis;/home/lakers/Downloads/VTK/Views;/home/lakers/Downloads/VTK/Parallel;/home/lakers/Downloads/VTK/VolumeRendering;/home/lakers/Downloads/VTK/Hybrid;/home/lakers/Downloads/VTK/Widgets;/home/lakers/Downloads/VTK/Rendering;/home/lakers/Downloads/VTK/Charts;/home/lakers/Downloads/VTK/Rendering/Testing/Cxx;/home/lakers/Downloads/VTK/IO;/home/lakers/Downloads/VTK/Imaging;/home/lakers/Downloads/VTK/Graphics;/home/lakers/Downloads/VTK/GenericFiltering;/home/lakers/Downloads/VTK/Filtering;/home/lakers/Downloads/VTK/Common;/home/lakers/Downloads/VTK/Utilities;/home/lakers/Downloads/VTK/Common/Testing/Cxx;/home/lakers/Downloads/VTK/Utilities/vtklibproj4;/home/lakers/Downloads/VTK/Utilities/vtklibproj4;/home/lakers/Downloads/VTK/Utilities/DICOMParser;/home/lakers/Downloads/VTK/Utilities/DICOMParser;/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include;/home/lakers/Downloads/VTK/Utilities/vtkfreetype/include;/home/lakers/Downloads/VTK/Utilities/MaterialLibrary;/home/lakers/Downloads/VTK/Utilities/MaterialLibrary;/home/lakers/Downloads/VTK/Utilities/verdict;/home/lakers/Downloads/VTK/Utilities/verdict;/home/lakers/Downloads/VTK/Utilities/vtkhdf5;/home/lakers/Downloads/VTK/Utilities/vtkhdf5;/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src;/home/lakers/Downloads/VTK/Utilities/vtkhdf5/src;/home/lakers/Downloads/VTK/Utilities/Cosmo;/home/lakers/Downloads/VTK/Utilities/Cosmo;/home/lakers/Downloads/VTK/Utilities/VPIC;/home/lakers/Downloads/VTK/Utilities/VPIC;/home/lakers/Downloads/VTK/Utilities/utf8/source;/home/lakers/Downloads/VTK/Infovis;/home/lakers/Downloads/VTK/Utilities/vtkalglib;/home/lakers/Downloads/VTK/Geovis;/home/lakers/Downloads/VTK/Views")

# The VTK library directories.
SET(VTK_LIBRARY_DIRS "/home/lakers/Downloads/VTK/bin")

# The VTK binary executable directories.  Note that if
# VTK_CONFIGURATION_TYPES is set (see below) then these directories
# will be the parent directories under which there will be a directory
# of runtime binaries for each configuration type.
SET(VTK_EXECUTABLE_DIRS "/home/lakers/Downloads/VTK/bin")

# The VTK runtime library directories.  Note that if
# VTK_CONFIGURATION_TYPES is set (see below) then these directories
# will be the parent directories under which there will be a directory
# of runtime libraries for each configuration type.
SET(VTK_RUNTIME_LIBRARY_DIRS "/home/lakers/Downloads/VTK/bin")

# The runtime library path variable name e.g. LD_LIBRARY_PATH,
# this environment variable should be set to VTK_RUNTIME_LIBRARY_DIRS
SET(VTK_RUNTIME_PATH_VAR_NAME "LD_LIBRARY_PATH")

# The C and C++ flags added by VTK to the cmake-configured flags.
SET(VTK_REQUIRED_C_FLAGS "")
SET(VTK_REQUIRED_CXX_FLAGS " -Wno-deprecated")
SET(VTK_REQUIRED_EXE_LINKER_FLAGS "")
SET(VTK_REQUIRED_SHARED_LINKER_FLAGS "")
SET(VTK_REQUIRED_MODULE_LINKER_FLAGS "")

# The VTK version number
SET(VTK_MAJOR_VERSION "5")
SET(VTK_MINOR_VERSION "8")
SET(VTK_BUILD_VERSION "0")

# The location of the UseVTK.cmake file.
SET(VTK_USE_FILE "/home/lakers/Downloads/VTK/UseVTK.cmake")

# The build settings file.
SET(VTK_BUILD_SETTINGS_FILE "/home/lakers/Downloads/VTK/VTKBuildSettings.cmake")

# The directory containing class list files for each kit.
SET(VTK_KITS_DIR "/home/lakers/Downloads/VTK/Utilities")

# The wrapping hints file.
SET(VTK_WRAP_HINTS "/home/lakers/Downloads/VTK/Wrapping/hints")

# CMake extension module directory and macro file.
SET(VTK_LOAD_CMAKE_EXTENSIONS_MACRO "/home/lakers/Downloads/VTK/CMake/vtkLoadCMakeExtensions.cmake")
SET(VTK_CMAKE_DIR "/home/lakers/Downloads/VTK/CMake")
SET(VTK_CMAKE_EXTENSIONS_DIR "/home/lakers/Downloads/VTK/CMake")

# The list of available kits.
SET(VTK_KITS "COMMON;FILTERING;IO;GRAPHICS;GENERIC_FILTERING;IMAGING;RENDERING;VOLUMERENDERING;HYBRID;WIDGETS;PARALLEL;INFOVIS;GEOVIS;VIEWS;CHARTS")

# The list of available languages.
SET(VTK_LANGUAGES "PYTHON")

# VTK Configuration options.
SET(VTK_BUILD_SHARED_LIBS "ON")
SET(VTK_DEBUG_LEAKS "ON")
SET(VTK_HAVE_VP1000 "")
SET(VTK_LEGACY_REMOVE "OFF")
SET(VTK_LEGACY_SILENT "OFF")
SET(VTK_OPENGL_HAS_OSMESA "OFF")
SET(VTK_USE_64BIT_IDS "ON")
SET(VTK_USE_ANSI_STDLIB "ON")
SET(VTK_USE_BOOST "OFF")
SET(VTK_USE_QT "OFF")
SET(VTK_USE_CARBON "OFF")
SET(VTK_USE_CG_SHADERS "OFF")
SET(VTK_USE_CHARTS "ON")
SET(VTK_USE_COCOA "OFF")
SET(VTK_USE_GEOVIS "ON")
SET(VTK_USE_GL2PS "OFF")
SET(VTK_USE_GLSL_SHADERS "ON")
SET(VTK_USE_GNU_R "OFF")
SET(VTK_USE_GUISUPPORT "OFF")
SET(VTK_USE_INFOVIS "ON")
SET(VTK_USE_MANGLED_MESA "OFF")
SET(VTK_USE_MATLAB_MEX "OFF")
SET(VTK_USE_MATROX_IMAGING "OFF")
SET(VTK_USE_METAIO "ON")
SET(VTK_USE_MFC "")
SET(VTK_USE_MPI "ON")
SET(VTK_USE_MYSQL "OFF")
SET(VTK_USE_N_WAY_ARRAYS "ON")
SET(VTK_USE_ODBC "OFF")
SET(VTK_USE_PARALLEL "ON")
SET(VTK_USE_PARALLEL_BGL "OFF")
SET(VTK_USE_POSTGRES "OFF") 
SET(VTK_USE_QVTK "OFF")
SET(VTK_USE_QVTK_OPENGL "")
SET(VTK_USE_RENDERING "ON")
SET(VTK_USE_TDX "OFF")
SET(VTK_USE_TEXT_ANALYSIS "OFF")
SET(VTK_USE_TK "OFF")
SET(VTK_USE_TK "OFF")
SET(VTK_USE_VIDEO_FOR_WINDOWS "")
SET(VTK_USE_VIEWS "ON")
SET(VTK_USE_VOLUMEPRO_1000 "OFF")
SET(VTK_USE_X "ON")
SET(VTK_WRAP_JAVA "OFF")
SET(VTK_WRAP_PYTHON "ON")
SET(VTK_WRAP_TCL "OFF")
SET(VTK_WRAP_PYTHON_SIP "OFF")

# The Hybrid and VolumeRendering kits are now switched with Rendering.
SET(VTK_USE_HYBRID "ON")
SET(VTK_USE_VOLUMERENDERING "ON")

# The MPI configuration
SET(VTK_MPIRUN_EXE "/usr/bin/mpiexec")
SET(VTK_MPI_CLIENT_POSTFLAGS "")
SET(VTK_MPI_CLIENT_PREFLAGS "")
SET(VTK_MPI_MAX_NUMPROCS "256")
SET(VTK_MPI_PRENUMPROC_FLAGS "")
SET(VTK_MPI_NUMPROC_FLAG "-np")
SET(VTK_MPI_POSTFLAGS "")
SET(VTK_MPI_PREFLAGS "")
SET(VTK_MPI_SERVER_POSTFLAGS "")
SET(VTK_MPI_SERVER_PREFLAGS "")
SET(VTK_MPI_INCLUDE_DIR "/usr/lib/openmpi/include;/usr/lib/openmpi/include/openmpi")
SET(VTK_MPI_LIBRARIES "/usr/lib/openmpi/lib/libmpi_cxx.so;/usr/lib/openmpi/lib/libmpi.so;/usr/lib/openmpi/lib/libopen-rte.so;/usr/lib/openmpi/lib/libopen-pal.so;/usr/lib/x86_64-linux-gnu/libdl.so;/usr/lib/x86_64-linux-gnu/libnsl.so;/usr/lib/x86_64-linux-gnu/libutil.so;/usr/lib/x86_64-linux-gnu/libm.so;/usr/lib/x86_64-linux-gnu/libdl.so")

# The Tcl/Tk configuration.
SET(VTK_TCL_TK_STATIC "")
SET(VTK_TCL_TK_COPY_SUPPORT_LIBRARY "")
SET(VTK_TCL_SUPPORT_LIBRARY_PATH "")
SET(VTK_TK_SUPPORT_LIBRARY_PATH "")
SET(VTK_TCL_TK_MACROS_MODULE "/home/lakers/Downloads/VTK/CMake/vtkTclTkMacros.cmake")
SET(VTK_TCL_HOME "")
SET(VTK_WRAP_TCL_EXE "")
SET(VTK_WRAP_TCL_INIT_EXE "")
SET(VTK_TK_INTERNAL_DIR "/home/lakers/Downloads/VTK/Utilities/TclTk/internals/tk8.5")
SET(VTK_TK_RESOURCES_DIR "")
SET(VTK_TCL_INCLUDE_DIR "/usr/include/tcl8.5")
SET(VTK_TCL_LIBRARY "/usr/lib/libtcl8.5.so")
SET(VTK_TK_INCLUDE_DIR "/usr/include/tcl8.5")
SET(VTK_TK_LIBRARY "/usr/lib/libtk8.5.so")

# The Java configuration.
SET(VTK_JAVA_JAR "")
SET(VTK_PARSE_JAVA_EXE "")
SET(VTK_WRAP_JAVA_EXE "")
SET(VTK_JAVA_INCLUDE_DIR ";")
SET(VTK_JAVA_AWT_LIBRARY "")
SET(VTK_JVM_LIBRARY "")

# The Matlab configuration.
SET(VTK_MATLAB_ROOT_DIR "")
SET(VTK_MATLAB_INCLUDE_DIR "")
SET(VTK_MATLAB_LIB_DIR "")

# The Python configuration.
# If VTK_CONFIGURATION_TYPES is set (see below) then the VTK_PYTHONPATH_DIRS
# will have subdirectories for each configuration type.
SET(VTK_PYTHONPATH_DIRS "/home/lakers/Downloads/VTK/Wrapping/Python;/home/lakers/Downloads/VTK/bin")
SET(VTK_WRAP_PYTHON_EXE "/home/lakers/Downloads/VTK/bin/vtkWrapPython")
SET(VTK_WRAP_PYTHON_INIT_EXE "/home/lakers/Downloads/VTK/bin/vtkWrapPythonInit")
SET(VTK_PYTHON_INCLUDE_DIR "/usr/include/python2.6")
SET(VTK_PYTHON_LIBRARY "/usr/lib/python2.7/config/libpython2.7.so")

# Other executables
SET(VTK_ENCODESTRING_EXE "/home/lakers/Downloads/VTK/bin/vtkEncodeString")

# The Doxygen configuration.
SET(VTK_DOXYGEN_HOME "/home/lakers/Downloads/VTK/Utilities/Doxygen")

# The VTK test script locations.
SET(VTK_HEADER_TESTING_PY "/home/lakers/Downloads/VTK/Common/Testing/HeaderTesting.py")
SET(VTK_FIND_STRING_TCL "/home/lakers/Downloads/VTK/Common/Testing/Tcl/FindString.tcl")
SET(VTK_PRINT_SELF_CHECK_TCL "/home/lakers/Downloads/VTK/Common/Testing/Tcl/PrintSelfCheck.tcl")
SET(VTK_RT_IMAGE_TEST_TCL "/home/lakers/Downloads/VTK/Common/Testing/Tcl/rtImageTest.tcl")
SET(VTK_PRT_IMAGE_TEST_TCL "/home/lakers/Downloads/VTK/Common/Testing/Tcl/prtImageTest.tcl")

# The names of utility libraries used by VTK.
SET(VTK_PNG_LIBRARIES      "vtkpng")
SET(VTK_ZLIB_LIBRARIES     "vtkzlib")
SET(VTK_JPEG_LIBRARIES     "vtkjpeg")
SET(VTK_TIFF_LIBRARIES     "vtktiff")
SET(VTK_EXPAT_LIBRARIES    "vtkexpat")
SET(VTK_FREETYPE_LIBRARIES "vtkfreetype")
SET(VTK_LIBXML2_LIBRARIES  "vtklibxml2")
SET(VTK_LIBPROJ4_LIBRARIES "vtkproj4")
SET(VTK_HDF5_LIBRARIES     "vtkhdf5")

# The VTK Qt configuration.
IF(VTK_USE_QVTK)
  INCLUDE(${VTK_DIR}/VTKConfigQt.cmake)
ENDIF(VTK_USE_QVTK)

# Relative install paths in the VTK install tree
SET(VTK_INSTALL_BIN_DIR "/bin")
SET(VTK_INSTALL_INCLUDE_DIR "/include/vtk-5.8")
SET(VTK_INSTALL_LIB_DIR "/lib/vtk-5.8")
SET(VTK_INSTALL_PACKAGE_DIR "/lib/vtk-5.8")

# A VTK install tree always provides one build configuration.  A VTK
# build tree may provide either one or multiple build configurations
# depending on the CMake generator used.  Since VTK can be used either
# from a build tree or an install tree it is useful for outside
# projects to know the configurations available.  If this
# VTKConfig.cmake is in a VTK install tree VTK_CONFIGURATION_TYPES
# will be empty and VTK_BUILD_TYPE will be set to the value of
# CMAKE_BUILD_TYPE used to build VTK.  If VTKConfig.cmake is in a VTK
# build tree then VTK_CONFIGURATION_TYPES and VTK_BUILD_TYPE will have
# values matching CMAKE_CONFIGURATION_TYPES and CMAKE_BUILD_TYPE for
# that build tree (only one will ever be set).
SET(VTK_CONFIGURATION_TYPES )
SET(VTK_BUILD_TYPE Release)

# The VTK targets file.
IF(NOT VTK_INSTALL_EXPORT_NAME AND NOT TARGET vtkCommon
   AND EXISTS "/home/lakers/Downloads/VTK/VTKTargets.cmake")
  INCLUDE("/home/lakers/Downloads/VTK/VTKTargets.cmake")
ENDIF()

# The old, less clear name for VTK_RUNTIME_LIBRARY_DIRS.  Kept here
# for compatibility.
SET(VTK_RUNTIME_DIRS ${VTK_RUNTIME_LIBRARY_DIRS})

# The name of the encoders used by VTK
SET( VTK_USE_FFMPEG_ENCODER "OFF" )
SET( VTK_USE_OGGTHEORA_ENCODER "OFF")


# For backward compatability.  DO NOT USE.
SET(VTK_SOURCE_DIR "/home/lakers/Downloads/VTK")
IF(NOT TCL_LIBRARY)
  SET(TCL_LIBRARY "/usr/lib/libtcl8.5.so" CACHE FILEPATH "Location of Tcl library imported from VTK.  This may mean your project is depending on VTK to get this setting.  Consider using FindTCL.cmake.")
ENDIF(NOT TCL_LIBRARY)
IF(NOT TK_LIBRARY)
  SET(TK_LIBRARY "/usr/lib/libtk8.5.so" CACHE FILEPATH "Location of Tk library imported from VTK.  This may mean your project is depending on VTK to get this setting.  Consider using FindTCL.cmake.")
ENDIF(NOT TK_LIBRARY)
MARK_AS_ADVANCED(TCL_LIBRARY TK_LIBRARY)

