# Install script for directory: /home/lakers/Downloads/VTK/Widgets

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkWidgetsPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkWidgetsPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkWidgetsPythonD.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkWidgetsPythonD.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkWidgetsPythonD.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkWidgetsPythonD.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkWidgetsPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkWidgetsPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkWidgetsPythonD.so"
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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkWidgets.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkWidgets.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkWidgets.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkWidgets.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkWidgets.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkWidgets.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkWidgets.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkWidgets.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkWidgets.so"
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
    "/home/lakers/Downloads/VTK/Widgets/vtk3DWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkAbstractWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkAffineRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkAffineRepresentation2D.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkAffineWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkAngleRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkAngleRepresentation2D.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkAngleRepresentation3D.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkAngleWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkAxesTransformWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkAxesTransformRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkBalloonRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkBalloonWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkBezierContourLineInterpolator.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkBiDimensionalRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkBiDimensionalRepresentation2D.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkBiDimensionalWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkBorderRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkBorderWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkBoundedPlanePointPlacer.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkBoxRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkBoxWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkBoxWidget2.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkButtonRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkButtonWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkCameraRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkCameraWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkCaptionRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkCaptionWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkCenteredSliderRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkCenteredSliderWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkContinuousValueWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkContinuousValueWidgetRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkContourLineInterpolator.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkContourRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkFocalPlaneContourRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkContourWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkCheckerboardRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkCheckerboardWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkConstrainedPointHandleRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkDijkstraImageContourLineInterpolator.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkDistanceWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkDistanceRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkDistanceRepresentation2D.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkDistanceRepresentation3D.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkEllipsoidTensorProbeRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkEvent.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkFocalPlanePointPlacer.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkHandleRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkHandleWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkHoverWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkImageActorPointPlacer.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkImageOrthoPlanes.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkImagePlaneWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkImageTracerWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkImplicitPlaneRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkImplicitPlaneWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkImplicitPlaneWidget2.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkLinearContourLineInterpolator.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkLineRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkLineWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkLineWidget2.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkLogoRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkLogoWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkOrientationMarkerWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkOrientedGlyphContourRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkOrientedGlyphFocalPlaneContourRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkParallelopipedRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkParallelopipedWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkClosedSurfacePointPlacer.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkPlaneWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkPlaybackRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkPlaybackWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkPointHandleRepresentation2D.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkPointHandleRepresentation3D.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkPointPlacer.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkPointWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkPolyDataSourceWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkPolyDataPointPlacer.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkAbstractPolygonalHandleRepresentation3D.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkPolygonalHandleRepresentation3D.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkOrientedPolygonalHandleRepresentation3D.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkPolygonalSurfacePointPlacer.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkPolyDataContourLineInterpolator.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkPolygonalSurfaceContourLineInterpolator.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkProp3DButtonRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkRectilinearWipeRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkRectilinearWipeWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkScalarBarRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkScalarBarWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkSeedRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkSeedWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkSliderRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkSliderRepresentation2D.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkSliderRepresentation3D.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkSliderWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkSphereHandleRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkSphereRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkSphereWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkSphereWidget2.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkSplineRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkSplineWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkSplineWidget2.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkTensorProbeWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkTensorProbeRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkTerrainDataPointPlacer.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkTerrainContourLineInterpolator.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkTextRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkTexturedButtonRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkTexturedButtonRepresentation2D.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkTextWidget.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkWidgetCallbackMapper.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkWidgetEvent.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkWidgetEventTranslator.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkWidgetRepresentation.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkWidgetSet.h"
    "/home/lakers/Downloads/VTK/Widgets/vtkXYPlotWidget.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE FILE FILES "/home/lakers/Downloads/VTK/Utilities/InstallOnly/vtkWidgetsKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

