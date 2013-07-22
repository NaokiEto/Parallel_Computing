# Install script for directory: /home/lakers/Downloads/VTK/Rendering

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkRenderingPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkRenderingPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkRenderingPythonD.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkRenderingPythonD.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkRenderingPythonD.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkRenderingPythonD.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkRenderingPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkRenderingPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkRenderingPythonD.so"
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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkRendering.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkRendering.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkRendering.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkRendering.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkRendering.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkRendering.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkRendering.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkRendering.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkRendering.so"
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
    "/home/lakers/Downloads/VTK/Rendering/vtkAbstractMapper3D.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkAbstractPicker.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkAbstractPropPicker.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkAbstractVolumeMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkActorCollection.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkActor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkAreaPicker.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkMapArrayValues.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkAssembly.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkAxisActor2D.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkCamera.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkCameraActor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkCameraInterpolator.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkCellCenterDepthSort.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkCellPicker.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkChooserPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkClipPlanesPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkCoincidentTopologyResolutionPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkColorMaterialHelper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkCompositePainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkCompositePolyDataMapper2.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkCompositePolyDataMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkCullerCollection.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkCuller.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkDataSetMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkDataTransferHelper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkDefaultPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkDisplayListPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkDistanceToCamera.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkDynamic2DLabelMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkDummyGPUInfoList.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkExporter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkFollower.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkFrameBufferObject.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkFreeTypeStringToImage.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkFrustumCoverageCuller.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkGenericRenderWindowInteractor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkGenericVertexAttributeMapping.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkGlyph3DMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkGPUInfo.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkGPUInfoList.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkGraphicsFactory.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkGraphMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkGraphToGlyphs.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkHardwareSelector.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkHardwareSelectionPolyDataPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkHierarchicalPolyDataMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkImageActor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkImageMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkImageViewer2.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkImageViewer.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkImagingFactory.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkImporter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorEventRecorder.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorObserver.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorStyle.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorStyleFlight.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorStyleImage.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorStyleJoystickActor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorStyleJoystickCamera.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorStyleRubberBand2D.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorStyleRubberBand3D.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorStyleRubberBandPick.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorStyleRubberBandZoom.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorStyleSwitch.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorStyleTerrain.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorStyleTrackballActor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorStyleTrackballCamera.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorStyleTrackball.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorStyleUnicam.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkInteractorStyleUser.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkIVExporter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLabeledDataMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLabeledTreeMapDataMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLabelHierarchy.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLabelHierarchyAlgorithm.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLabelHierarchyIterator.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLabelHierarchyCompositeIterator.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLabelPlacer.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLabelPlacementMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLabelRenderStrategy.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLabelSizeCalculator.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLeaderActor2D.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLightActor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLightCollection.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLight.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLightingHelper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLightingPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLightKit.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLineIntegralConvolution2D.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLinesPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLODActor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLODProp3D.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkMapperCollection.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOBJExporter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkObserverMediator.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOOGLExporter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkPainterDeviceAdapter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkPainterPolyDataMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkParallelCoordinatesActor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkParallelCoordinatesInteractorStyle.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkPicker.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkPixelBufferObject.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkPointPicker.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkPointSetToLabelHierarchy.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkPointsPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkPOVExporter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkPolyDataMapper2D.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkPolyDataMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkPolyDataPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkPolygonsPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkPrimitivePainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkProp3DCollection.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkProp3D.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkProp3DFollower.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkProperty.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkPropPicker.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkQuadricLODActor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkQuaternionInterpolator.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkRenderedAreaPicker.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkRendererCollection.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkRenderer.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkRendererDelegate.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkRendererSource.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkRenderPass.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkRenderState.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkRenderWindowCollection.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkRenderWindow.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkRenderWindowInteractor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkRepresentationPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkScalarBarActor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkScalarsToColorsPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkScaledTextActor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkScenePicker.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkSelectVisiblePoints.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkShader.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkShaderDeviceAdapter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkShaderProgram.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkStandardPolyDataPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkStringToImage.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkSurfaceLICDefaultPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkSurfaceLICPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTDxInteractorStyle.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTDxInteractorStyleCamera.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTDxInteractorStyleGeo.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTDxInteractorStyleSettings.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTesting.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTestingInteractor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTestingObjectFactory.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTextActor3D.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTextActor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTextMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTextProperty.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTexture.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTexturedActor2D.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTextureObject.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTransformInterpolator.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTStripsPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTupleInterpolator.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkViewTheme.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkVisibilitySort.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkVolumeCollection.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkVolume.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkVolumeProperty.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkVRMLExporter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkWindowToImageFilter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkWorldPointPicker.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkVisibleCellSelector.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkIdentColoredPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkXGPUInfoList.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkFreeTypeUtilities.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkFreeTypeTools.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkXRenderWindowInteractor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkCameraPass.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkClearZPass.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkDefaultPass.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkDepthPeelingPass.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkGaussianBlurPass.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkImageProcessingPass.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkLightsPass.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkGLSLShaderDeviceAdapter2.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpaquePass.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLActor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLCamera.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLClipPlanesPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLCoincidentTopologyResolutionPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLDisplayListPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLExtensionManager.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLGlyph3DMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLHardwareSupport.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLImageActor.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLImageMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLLight.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLLightingPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLPainterDeviceAdapter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLPolyDataMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLPolyDataMapper2D.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLProperty.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLRenderWindow.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLRenderer.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLRepresentationPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLScalarsToColorsPainter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLState.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLTexture.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOverlayPass.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkRenderPassCollection.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkSequencePass.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkShader2.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkShader2Collection.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkShaderProgram2.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkShadowMapBakerPass.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkShadowMapPass.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkSobelGradientMagnitudePass.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTextureUnitManager.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTranslucentPass.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkUniformVariables.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkVolumetricPass.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkGLSLShader.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkGLSLShaderDeviceAdapter.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkGLSLShaderProgram.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkFreeTypeLabelRenderStrategy.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGLFreeTypeTextMapper.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkgl.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkGenericOpenGLRenderWindow.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkXOpenGLRenderWindow.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE FILE FILES "/home/lakers/Downloads/VTK/Utilities/InstallOnly/vtkRenderingKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Rendering/vtkOpenGL.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkgl.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/CMake" TYPE FILE FILES "/home/lakers/Downloads/VTK/Rendering/vtkTestingObjectFactory.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Rendering/Testing/Cxx/vtkRegressionTestImage.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTDxConfigure.h"
    "/home/lakers/Downloads/VTK/Rendering/vtkTDxMotionEventInfo.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

