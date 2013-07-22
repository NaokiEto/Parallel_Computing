# Install script for directory: /home/lakers/Downloads/VTK/Charts

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkChartsPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkChartsPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkChartsPythonD.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkChartsPythonD.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkChartsPythonD.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkChartsPythonD.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkChartsPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkChartsPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkChartsPythonD.so"
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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCharts.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCharts.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCharts.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkCharts.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkCharts.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkCharts.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCharts.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCharts.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCharts.so"
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
    "/home/lakers/Downloads/VTK/Charts/vtkAbstractContextBufferId.h"
    "/home/lakers/Downloads/VTK/Charts/vtkAbstractContextItem.h"
    "/home/lakers/Downloads/VTK/Charts/vtkAxis.h"
    "/home/lakers/Downloads/VTK/Charts/vtkBlockItem.h"
    "/home/lakers/Downloads/VTK/Charts/vtkBrush.h"
    "/home/lakers/Downloads/VTK/Charts/vtkChart.h"
    "/home/lakers/Downloads/VTK/Charts/vtkChartLegend.h"
    "/home/lakers/Downloads/VTK/Charts/vtkChartHistogram2D.h"
    "/home/lakers/Downloads/VTK/Charts/vtkChartParallelCoordinates.h"
    "/home/lakers/Downloads/VTK/Charts/vtkChartXY.h"
    "/home/lakers/Downloads/VTK/Charts/vtkChartPie.h"
    "/home/lakers/Downloads/VTK/Charts/vtkColorLegend.h"
    "/home/lakers/Downloads/VTK/Charts/vtkPlotPie.h"
    "/home/lakers/Downloads/VTK/Charts/vtkColorSeries.h"
    "/home/lakers/Downloads/VTK/Charts/vtkColorTransferFunctionItem.h"
    "/home/lakers/Downloads/VTK/Charts/vtkColorTransferControlPointsItem.h"
    "/home/lakers/Downloads/VTK/Charts/vtkCompositeControlPointsItem.h"
    "/home/lakers/Downloads/VTK/Charts/vtkCompositeTransferFunctionItem.h"
    "/home/lakers/Downloads/VTK/Charts/vtkContext2D.h"
    "/home/lakers/Downloads/VTK/Charts/vtkContextActor.h"
    "/home/lakers/Downloads/VTK/Charts/vtkContextBufferId.h"
    "/home/lakers/Downloads/VTK/Charts/vtkContextClip.h"
    "/home/lakers/Downloads/VTK/Charts/vtkContextDevice2D.h"
    "/home/lakers/Downloads/VTK/Charts/vtkContextInteractorStyle.h"
    "/home/lakers/Downloads/VTK/Charts/vtkContextItem.h"
    "/home/lakers/Downloads/VTK/Charts/vtkContextMapper2D.h"
    "/home/lakers/Downloads/VTK/Charts/vtkContextMouseEvent.h"
    "/home/lakers/Downloads/VTK/Charts/vtkContextScene.h"
    "/home/lakers/Downloads/VTK/Charts/vtkContextTransform.h"
    "/home/lakers/Downloads/VTK/Charts/vtkContextView.h"
    "/home/lakers/Downloads/VTK/Charts/vtkControlPointsItem.h"
    "/home/lakers/Downloads/VTK/Charts/vtkImageItem.h"
    "/home/lakers/Downloads/VTK/Charts/vtkLookupTableItem.h"
    "/home/lakers/Downloads/VTK/Charts/vtkOpenGLContextBufferId.h"
    "/home/lakers/Downloads/VTK/Charts/vtkOpenGL2ContextDevice2D.h"
    "/home/lakers/Downloads/VTK/Charts/vtkOpenGLContextDevice2D.h"
    "/home/lakers/Downloads/VTK/Charts/vtkPen.h"
    "/home/lakers/Downloads/VTK/Charts/vtkPiecewiseControlPointsItem.h"
    "/home/lakers/Downloads/VTK/Charts/vtkPiecewiseFunctionItem.h"
    "/home/lakers/Downloads/VTK/Charts/vtkPlot.h"
    "/home/lakers/Downloads/VTK/Charts/vtkPlotBar.h"
    "/home/lakers/Downloads/VTK/Charts/vtkPlotGrid.h"
    "/home/lakers/Downloads/VTK/Charts/vtkPlotHistogram2D.h"
    "/home/lakers/Downloads/VTK/Charts/vtkPlotLine.h"
    "/home/lakers/Downloads/VTK/Charts/vtkPlotStacked.h"
    "/home/lakers/Downloads/VTK/Charts/vtkPlotParallelCoordinates.h"
    "/home/lakers/Downloads/VTK/Charts/vtkPlotPoints.h"
    "/home/lakers/Downloads/VTK/Charts/vtkScalarsToColorsItem.h"
    "/home/lakers/Downloads/VTK/Charts/vtkTooltipItem.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE FILE FILES "/home/lakers/Downloads/VTK/Utilities/InstallOnly/vtkChartsKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

