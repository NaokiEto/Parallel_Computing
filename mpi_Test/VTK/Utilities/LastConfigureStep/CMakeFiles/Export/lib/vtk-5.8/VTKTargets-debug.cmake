#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
SET(CMAKE_IMPORT_FILE_VERSION 1)

# Compute the installation prefix relative to this file.
GET_FILENAME_COMPONENT(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
GET_FILENAME_COMPONENT(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
GET_FILENAME_COMPONENT(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)

# Import target "vtksys" for configuration "Debug"
SET_PROPERTY(TARGET vtksys APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtksys PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C;CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "dl"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtksys.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtksys )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtksys "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtksys.a" )

# Import target "vtkzlib" for configuration "Debug"
SET_PROPERTY(TARGET vtkzlib APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkzlib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkzlib.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkzlib )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkzlib "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkzlib.a" )

# Import target "vtkhdf5" for configuration "Debug"
SET_PROPERTY(TARGET vtkhdf5 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkhdf5 PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "m;vtkzlib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkhdf5.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkhdf5 )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkhdf5 "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkhdf5.a" )

# Import target "vtkjpeg" for configuration "Debug"
SET_PROPERTY(TARGET vtkjpeg APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkjpeg PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkjpeg.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkjpeg )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkjpeg "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkjpeg.a" )

# Import target "vtkpng" for configuration "Debug"
SET_PROPERTY(TARGET vtkpng APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkpng PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkzlib;-lm"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkpng.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkpng )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkpng "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkpng.a" )

# Import target "vtktiff" for configuration "Debug"
SET_PROPERTY(TARGET vtktiff APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtktiff PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkzlib;vtkjpeg;-lm"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtktiff.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtktiff )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtktiff "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtktiff.a" )

# Import target "vtkexpat" for configuration "Debug"
SET_PROPERTY(TARGET vtkexpat APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkexpat PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkexpat.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkexpat )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkexpat "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkexpat.a" )

# Import target "vtkfreetype" for configuration "Debug"
SET_PROPERTY(TARGET vtkfreetype APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkfreetype PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkfreetype.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkfreetype )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkfreetype "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkfreetype.a" )

# Import target "vtklibxml2" for configuration "Debug"
SET_PROPERTY(TARGET vtklibxml2 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtklibxml2 PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkzlib;dl;-lpthread;dl;m"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtklibxml2.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtklibxml2 )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtklibxml2 "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtklibxml2.a" )

# Import target "vtkDICOMParser" for configuration "Debug"
SET_PROPERTY(TARGET vtkDICOMParser APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkDICOMParser PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkDICOMParser.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkDICOMParser )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkDICOMParser "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkDICOMParser.a" )

# Import target "vtkproj4" for configuration "Debug"
SET_PROPERTY(TARGET vtkproj4 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkproj4 PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "m"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkproj4.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkproj4 )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkproj4 "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkproj4.a" )

# Import target "MapReduceMPI" for configuration "Debug"
SET_PROPERTY(TARGET MapReduceMPI APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(MapReduceMPI PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "/usr/lib/openmpi/lib/libmpi_cxx.so;/usr/lib/openmpi/lib/libmpi.so;/usr/lib/openmpi/lib/libopen-rte.so;/usr/lib/openmpi/lib/libopen-pal.so;/usr/lib/x86_64-linux-gnu/libdl.so;/usr/lib/x86_64-linux-gnu/libnsl.so;/usr/lib/x86_64-linux-gnu/libutil.so;/usr/lib/x86_64-linux-gnu/libm.so;/usr/lib/x86_64-linux-gnu/libdl.so"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libMapReduceMPI.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS MapReduceMPI )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_MapReduceMPI "${_IMPORT_PREFIX}/lib/vtk-5.8/libMapReduceMPI.a" )

# Import target "vtkverdict" for configuration "Debug"
SET_PROPERTY(TARGET vtkverdict APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkverdict PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkverdict.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkverdict )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkverdict "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkverdict.a" )

# Import target "vtkNetCDF" for configuration "Debug"
SET_PROPERTY(TARGET vtkNetCDF APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkNetCDF PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkNetCDF.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkNetCDF )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkNetCDF "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkNetCDF.a" )

# Import target "vtkNetCDF_cxx" for configuration "Debug"
SET_PROPERTY(TARGET vtkNetCDF_cxx APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkNetCDF_cxx PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkNetCDF"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkNetCDF_cxx.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkNetCDF_cxx )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkNetCDF_cxx "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkNetCDF_cxx.a" )

# Import target "vtkmetaio" for configuration "Debug"
SET_PROPERTY(TARGET vtkmetaio APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkmetaio PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkzlib;vtksys"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkmetaio.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkmetaio )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkmetaio "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkmetaio.a" )

# Import target "vtksqlite" for configuration "Debug"
SET_PROPERTY(TARGET vtksqlite APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtksqlite PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "-lpthread"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtksqlite.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtksqlite )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtksqlite "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtksqlite.a" )

# Import target "vtkexoIIc" for configuration "Debug"
SET_PROPERTY(TARGET vtkexoIIc APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkexoIIc PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkNetCDF"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkexoIIc.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkexoIIc )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkexoIIc "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkexoIIc.a" )

# Import target "vtkalglib" for configuration "Debug"
SET_PROPERTY(TARGET vtkalglib APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkalglib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkalglib.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkalglib )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkalglib "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkalglib.a" )

# Import target "vtkEncodeString" for configuration "Debug"
SET_PROPERTY(TARGET vtkEncodeString APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkEncodeString PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/vtkEncodeString"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkEncodeString )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkEncodeString "${_IMPORT_PREFIX}/bin/vtkEncodeString" )

# Import target "VPIC" for configuration "Debug"
SET_PROPERTY(TARGET VPIC APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(VPIC PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtksys;/usr/lib/openmpi/lib/libmpi_cxx.so;/usr/lib/openmpi/lib/libmpi.so;/usr/lib/openmpi/lib/libopen-rte.so;/usr/lib/openmpi/lib/libopen-pal.so;/usr/lib/x86_64-linux-gnu/libdl.so;/usr/lib/x86_64-linux-gnu/libnsl.so;/usr/lib/x86_64-linux-gnu/libutil.so;/usr/lib/x86_64-linux-gnu/libm.so;/usr/lib/x86_64-linux-gnu/libdl.so"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libVPIC.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS VPIC )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_VPIC "${_IMPORT_PREFIX}/lib/vtk-5.8/libVPIC.a" )

# Import target "Cosmo" for configuration "Debug"
SET_PROPERTY(TARGET Cosmo APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(Cosmo PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtksys;vtkCommon;/usr/lib/openmpi/lib/libmpi_cxx.so;/usr/lib/openmpi/lib/libmpi.so;/usr/lib/openmpi/lib/libopen-rte.so;/usr/lib/openmpi/lib/libopen-pal.so;/usr/lib/x86_64-linux-gnu/libdl.so;/usr/lib/x86_64-linux-gnu/libnsl.so;/usr/lib/x86_64-linux-gnu/libutil.so;/usr/lib/x86_64-linux-gnu/libm.so;/usr/lib/x86_64-linux-gnu/libdl.so"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libCosmo.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS Cosmo )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_Cosmo "${_IMPORT_PREFIX}/lib/vtk-5.8/libCosmo.a" )

# Import target "vtkftgl" for configuration "Debug"
SET_PROPERTY(TARGET vtkftgl APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkftgl PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "/usr/lib/x86_64-linux-gnu/libGL.so;vtkfreetype"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkftgl.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkftgl )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkftgl "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkftgl.a" )

# Import target "vtkCommon" for configuration "Debug"
SET_PROPERTY(TARGET vtkCommon APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkCommon PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtksys;-lm;-lpthread;dl"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkCommon.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkCommon )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkCommon "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkCommon.a" )

# Import target "vtkFiltering" for configuration "Debug"
SET_PROPERTY(TARGET vtkFiltering APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkFiltering PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkCommon"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkFiltering.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkFiltering )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkFiltering "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkFiltering.a" )

# Import target "vtkImaging" for configuration "Debug"
SET_PROPERTY(TARGET vtkImaging APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkImaging PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkFiltering"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkImaging.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkImaging )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkImaging "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkImaging.a" )

# Import target "vtkGraphics" for configuration "Debug"
SET_PROPERTY(TARGET vtkGraphics APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkGraphics PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkFiltering;vtkverdict"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkGraphics.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkGraphics )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkGraphics "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkGraphics.a" )

# Import target "vtkGenericFiltering" for configuration "Debug"
SET_PROPERTY(TARGET vtkGenericFiltering APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkGenericFiltering PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkFiltering;vtkGraphics"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkGenericFiltering.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkGenericFiltering )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkGenericFiltering "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkGenericFiltering.a" )

# Import target "vtkIO" for configuration "Debug"
SET_PROPERTY(TARGET vtkIO APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkIO PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkFiltering;vtkDICOMParser;vtkNetCDF;vtkNetCDF_cxx;vtkmetaio;vtksqlite;vtkpng;vtkzlib;vtkjpeg;vtktiff;vtkexpat;vtksys"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkIO.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkIO )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkIO "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkIO.a" )

# Import target "vtkRendering" for configuration "Debug"
SET_PROPERTY(TARGET vtkRendering APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkRendering PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkGraphics;vtkImaging;vtkIO;vtkftgl;vtkfreetype;/usr/lib/x86_64-linux-gnu/libGL.so;/usr/lib/x86_64-linux-gnu/libXt.so;/usr/lib/x86_64-linux-gnu/libSM.so;/usr/lib/x86_64-linux-gnu/libICE.so;/usr/lib/x86_64-linux-gnu/libX11.so;/usr/lib/x86_64-linux-gnu/libXext.so"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkRendering.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkRendering )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkRendering "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkRendering.a" )

# Import target "vtkVolumeRendering" for configuration "Debug"
SET_PROPERTY(TARGET vtkVolumeRendering APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkVolumeRendering PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkRendering;vtkIO;/usr/lib/x86_64-linux-gnu/libGL.so"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkVolumeRendering.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkVolumeRendering )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkVolumeRendering "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkVolumeRendering.a" )

# Import target "vtkHybrid" for configuration "Debug"
SET_PROPERTY(TARGET vtkHybrid APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkHybrid PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkRendering;vtkIO;vtkParallel;vtkexoIIc;vtkftgl"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkHybrid.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkHybrid )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkHybrid "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkHybrid.a" )

# Import target "vtkWidgets" for configuration "Debug"
SET_PROPERTY(TARGET vtkWidgets APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkWidgets PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkRendering;vtkHybrid;vtkVolumeRendering;/usr/lib/x86_64-linux-gnu/libGL.so"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkWidgets.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkWidgets )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkWidgets "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkWidgets.a" )

# Import target "vtkParallel" for configuration "Debug"
SET_PROPERTY(TARGET vtkParallel APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkParallel PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkRendering;vtkIO;VPIC;Cosmo;/usr/lib/x86_64-linux-gnu/libGL.so;vtkexoIIc;/usr/lib/openmpi/lib/libmpi_cxx.so;/usr/lib/openmpi/lib/libmpi.so;/usr/lib/openmpi/lib/libopen-rte.so;/usr/lib/openmpi/lib/libopen-pal.so;/usr/lib/x86_64-linux-gnu/libdl.so;/usr/lib/x86_64-linux-gnu/libnsl.so;/usr/lib/x86_64-linux-gnu/libutil.so;/usr/lib/x86_64-linux-gnu/libm.so;/usr/lib/x86_64-linux-gnu/libdl.so"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkParallel.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkParallel )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkParallel "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkParallel.a" )

# Import target "vtkInfovis" for configuration "Debug"
SET_PROPERTY(TARGET vtkInfovis APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkInfovis PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkWidgets;vtkParallel;vtklibxml2;vtkalglib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkInfovis.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkInfovis )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkInfovis "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkInfovis.a" )

# Import target "vtkGeovis" for configuration "Debug"
SET_PROPERTY(TARGET vtkGeovis APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkGeovis PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkWidgets;vtkViews;vtkproj4"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkGeovis.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkGeovis )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkGeovis "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkGeovis.a" )

# Import target "vtkViews" for configuration "Debug"
SET_PROPERTY(TARGET vtkViews APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkViews PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkInfovis"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkViews.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkViews )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkViews "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkViews.a" )

# Import target "vtkCharts" for configuration "Debug"
SET_PROPERTY(TARGET vtkCharts APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
SET_TARGET_PROPERTIES(vtkCharts PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LINK_INTERFACE_LIBRARIES_DEBUG "vtkViews;vtkftgl"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkCharts.a"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS vtkCharts )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_vtkCharts "${_IMPORT_PREFIX}/lib/vtk-5.8/libvtkCharts.a" )

# Loop over all imported files and verify that they actually exist
FOREACH(target ${_IMPORT_CHECK_TARGETS} )
  FOREACH(file ${_IMPORT_CHECK_FILES_FOR_${target}} )
    IF(NOT EXISTS "${file}" )
      MESSAGE(FATAL_ERROR "The imported target \"${target}\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    ENDIF()
  ENDFOREACH()
  UNSET(_IMPORT_CHECK_FILES_FOR_${target})
ENDFOREACH()
UNSET(_IMPORT_CHECK_TARGETS)

# Cleanup temporary variables.
SET(_IMPORT_PREFIX)

# Commands beyond this point should not need to know the version.
SET(CMAKE_IMPORT_FILE_VERSION)
