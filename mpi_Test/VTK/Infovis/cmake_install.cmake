# Install script for directory: /home/lakers/Downloads/VTK/Infovis

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkInfovisPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkInfovisPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkInfovisPythonD.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkInfovisPythonD.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkInfovisPythonD.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkInfovisPythonD.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkInfovisPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkInfovisPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkInfovisPythonD.so"
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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "RuntimeLibraries")
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkInfovis.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkInfovis.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkInfovis.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkInfovis.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkInfovis.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkInfovis.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkInfovis.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkInfovis.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkInfovis.so"
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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Infovis/vtkAddMembershipArray.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkAppendPoints.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkApplyColors.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkApplyIcons.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkArcParallelEdgeStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkAreaLayout.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkAreaLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkAssignCoordinates.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkAssignCoordinatesLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkBivariateLinearTableThreshold.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkBivariateStatisticsAlgorithm.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkBoxLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkChacoGraphReader.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkCircularLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkClustering2DLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkCollapseGraph.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkCollapseVerticesByArray.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkCommunity2DLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkConeLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkConstrained2DLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkContingencyStatistics.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkCorrelativeStatistics.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkCosmicTreeLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkDataObjectToTable.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkDelimitedTextReader.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkDescriptiveStatistics.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkDIMACSGraphReader.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkDIMACSGraphWriter.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkEdgeCenters.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkEdgeLayout.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkEdgeLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkExpandSelectedGraph.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkExtractSelectedGraph.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkFast2DLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkFixedWidthTextReader.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkForceDirectedLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkGenerateIndexArray.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkGeoEdgeStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkGeoMath.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkGraphHierarchicalBundle.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkGraphHierarchicalBundleEdges.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkGraphLayout.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkGraphLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkGroupLeafVertices.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkISIReader.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkKMeansDistanceFunctor.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkKMeansDistanceFunctorCalculator.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkKMeansStatistics.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkMergeColumns.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkMergeGraphs.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkMergeTables.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkMultiCorrelativeStatistics.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkMutableGraphHelper.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkNetworkHierarchy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkOrderStatistics.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPassArrays.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPassThrough.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPassThroughEdgeStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPassThroughLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPerturbCoincidentVertices.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPCAStatistics.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPruneTreeFilter.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkRISReader.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkRandomGraphSource.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkRandomLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkRemoveIsolatedVertices.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkRemoveHiddenData.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkSCurveSpline.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkSimple2DLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkSimple3DCirclesStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkSliceAndDiceLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkSplineGraphEdges.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkSplitColumnComponents.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkSquarifyLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkSpanTreeLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkStackedTreeLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkStatisticsAlgorithm.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkStrahlerMetric.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkStreamGraph.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkStreamingStatistics.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkStringToCategory.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkStringToNumeric.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkTableToGraph.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkTableToTreeFilter.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkThresholdGraph.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkThresholdTable.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkTransferAttributes.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkTreeFieldAggregator.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkTreeLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkTreeOrbitLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkTreeLevelsFilter.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkTreeMapLayout.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkTreeMapLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkTreeMapToPolyData.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkTreeRingToPolyData.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkTulipReader.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkUnivariateStatisticsAlgorithm.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkAttributeClustering2DLayoutStrategy.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkVertexDegree.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkXGMLReader.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkXMLTreeReader.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkAdjacencyMatrixToEdgeTable.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkArrayNorm.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkArrayToTable.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkComputeHistogram2DOutliers.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkDiagonalMatrixSource.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkDotProductSimilarity.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkExtractArray.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkExtractHistogram2D.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkMatricizeArray.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkNormalizeMatrixVectors.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPairwiseExtractHistogram2D.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkSparseArrayToTable.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkTableToArray.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkTableToSparseArray.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkTransposeMatrix.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPBivariateLinearTableThreshold.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPCorrelativeStatistics.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPContingencyStatistics.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPDescriptiveStatistics.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPKMeansStatistics.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPMultiCorrelativeStatistics.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPOrderStatistics.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPPCAStatistics.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPComputeHistogram2DOutliers.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPExtractHistogram2D.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkPPairwiseExtractHistogram2D.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkSQLDatabaseGraphSource.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkSQLDatabaseTableSource.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkSQLGraphReader.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkStringToTimePoint.h"
    "/home/lakers/Downloads/VTK/Infovis/vtkTimePointToString.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE FILE FILES "/home/lakers/Downloads/VTK/Utilities/InstallOnly/vtkInfovisKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

