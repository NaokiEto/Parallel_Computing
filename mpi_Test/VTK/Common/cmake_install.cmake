# Install script for directory: /home/lakers/Downloads/VTK/Common

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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCommonPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCommonPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCommonPythonD.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkCommonPythonD.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkCommonPythonD.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkCommonPythonD.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCommonPythonD.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCommonPythonD.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCommonPythonD.so"
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
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCommon.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCommon.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCommon.so"
      )
    IF(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      FILE(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    ENDIF()
  ENDFOREACH()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE SHARED_LIBRARY FILES
    "/home/lakers/Downloads/VTK/bin/libvtkCommon.so.5.8.0"
    "/home/lakers/Downloads/VTK/bin/libvtkCommon.so.5.8"
    "/home/lakers/Downloads/VTK/bin/libvtkCommon.so"
    )
  FOREACH(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCommon.so.5.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCommon.so.5.8"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/libvtkCommon.so"
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
    "/home/lakers/Downloads/VTK/Common/vtkAbstractArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkAbstractTransform.h"
    "/home/lakers/Downloads/VTK/Common/vtkAmoebaMinimizer.h"
    "/home/lakers/Downloads/VTK/Common/vtkAnimationCue.h"
    "/home/lakers/Downloads/VTK/Common/vtkAnimationScene.h"
    "/home/lakers/Downloads/VTK/Common/vtkArrayIterator.h"
    "/home/lakers/Downloads/VTK/Common/vtkAssemblyNode.h"
    "/home/lakers/Downloads/VTK/Common/vtkAssemblyPath.h"
    "/home/lakers/Downloads/VTK/Common/vtkAssemblyPaths.h"
    "/home/lakers/Downloads/VTK/Common/vtkBitArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkBitArrayIterator.h"
    "/home/lakers/Downloads/VTK/Common/vtkBoundingBox.h"
    "/home/lakers/Downloads/VTK/Common/vtkBox.h"
    "/home/lakers/Downloads/VTK/Common/vtkBoxMuellerRandomSequence.h"
    "/home/lakers/Downloads/VTK/Common/vtkBreakPoint.h"
    "/home/lakers/Downloads/VTK/Common/vtkByteSwap.h"
    "/home/lakers/Downloads/VTK/Common/vtkCallbackCommand.h"
    "/home/lakers/Downloads/VTK/Common/vtkCharArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkClientSocket.h"
    "/home/lakers/Downloads/VTK/Common/vtkCollection.h"
    "/home/lakers/Downloads/VTK/Common/vtkCollectionIterator.h"
    "/home/lakers/Downloads/VTK/Common/vtkColor.h"
    "/home/lakers/Downloads/VTK/Common/vtkCommand.h"
    "/home/lakers/Downloads/VTK/Common/vtkCommonInformationKeyManager.h"
    "/home/lakers/Downloads/VTK/Common/vtkConditionVariable.h"
    "/home/lakers/Downloads/VTK/Common/vtkContourValues.h"
    "/home/lakers/Downloads/VTK/Common/vtkCriticalSection.h"
    "/home/lakers/Downloads/VTK/Common/vtkCylindricalTransform.h"
    "/home/lakers/Downloads/VTK/Common/vtkDataArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkDataArrayCollection.h"
    "/home/lakers/Downloads/VTK/Common/vtkDataArrayCollectionIterator.h"
    "/home/lakers/Downloads/VTK/Common/vtkDataArraySelection.h"
    "/home/lakers/Downloads/VTK/Common/vtkDebugLeaks.h"
    "/home/lakers/Downloads/VTK/Common/vtkDebugLeaksManager.h"
    "/home/lakers/Downloads/VTK/Common/vtkDirectory.h"
    "/home/lakers/Downloads/VTK/Common/vtkDoubleArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkDynamicLoader.h"
    "/home/lakers/Downloads/VTK/Common/vtkEdgeTable.h"
    "/home/lakers/Downloads/VTK/Common/vtkErrorCode.h"
    "/home/lakers/Downloads/VTK/Common/vtkEventForwarderCommand.h"
    "/home/lakers/Downloads/VTK/Common/vtkExtentSplitter.h"
    "/home/lakers/Downloads/VTK/Common/vtkExtentTranslator.h"
    "/home/lakers/Downloads/VTK/Common/vtkFastNumericConversion.h"
    "/home/lakers/Downloads/VTK/Common/vtkFileOutputWindow.h"
    "/home/lakers/Downloads/VTK/Common/vtkFloatArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkFloatingPointExceptions.h"
    "/home/lakers/Downloads/VTK/Common/vtkFunctionParser.h"
    "/home/lakers/Downloads/VTK/Common/vtkFunctionSet.h"
    "/home/lakers/Downloads/VTK/Common/vtkGarbageCollector.h"
    "/home/lakers/Downloads/VTK/Common/vtkGarbageCollectorManager.h"
    "/home/lakers/Downloads/VTK/Common/vtkGaussianRandomSequence.h"
    "/home/lakers/Downloads/VTK/Common/vtkGeneralTransform.h"
    "/home/lakers/Downloads/VTK/Common/vtkHeap.h"
    "/home/lakers/Downloads/VTK/Common/vtkHomogeneousTransform.h"
    "/home/lakers/Downloads/VTK/Common/vtkIOStream.h"
    "/home/lakers/Downloads/VTK/Common/vtkIdList.h"
    "/home/lakers/Downloads/VTK/Common/vtkIdListCollection.h"
    "/home/lakers/Downloads/VTK/Common/vtkIdTypeArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkIdentityTransform.h"
    "/home/lakers/Downloads/VTK/Common/vtkImplicitFunction.h"
    "/home/lakers/Downloads/VTK/Common/vtkImplicitFunctionCollection.h"
    "/home/lakers/Downloads/VTK/Common/vtkIndent.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformation.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationDataObjectKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationDoubleKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationDoubleVectorKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationIdTypeKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationInformationKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationInformationVectorKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationIntegerKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationIntegerPointerKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationIntegerVectorKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationIterator.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationKeyVectorKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationObjectBaseKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationObjectBaseVectorKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationQuadratureSchemeDefinitionVectorKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationRequestKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationStringKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationStringVectorKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationUnsignedLongKey.h"
    "/home/lakers/Downloads/VTK/Common/vtkInformationVector.h"
    "/home/lakers/Downloads/VTK/Common/vtkInitialValueProblemSolver.h"
    "/home/lakers/Downloads/VTK/Common/vtkInstantiator.h"
    "/home/lakers/Downloads/VTK/Common/vtkIntArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkLargeInteger.h"
    "/home/lakers/Downloads/VTK/Common/vtkLinearTransform.h"
    "/home/lakers/Downloads/VTK/Common/vtkLogLookupTable.h"
    "/home/lakers/Downloads/VTK/Common/vtkLongArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkLookupTable.h"
    "/home/lakers/Downloads/VTK/Common/vtkLookupTableWithEnabling.h"
    "/home/lakers/Downloads/VTK/Common/vtkMath.h"
    "/home/lakers/Downloads/VTK/Common/vtkMatrix3x3.h"
    "/home/lakers/Downloads/VTK/Common/vtkMatrix4x4.h"
    "/home/lakers/Downloads/VTK/Common/vtkMatrixToHomogeneousTransform.h"
    "/home/lakers/Downloads/VTK/Common/vtkMatrixToLinearTransform.h"
    "/home/lakers/Downloads/VTK/Common/vtkMinimalStandardRandomSequence.h"
    "/home/lakers/Downloads/VTK/Common/vtkMultiThreader.h"
    "/home/lakers/Downloads/VTK/Common/vtkMutexLock.h"
    "/home/lakers/Downloads/VTK/Common/vtkOStrStreamWrapper.h"
    "/home/lakers/Downloads/VTK/Common/vtkOStreamWrapper.h"
    "/home/lakers/Downloads/VTK/Common/vtkObject.h"
    "/home/lakers/Downloads/VTK/Common/vtkObjectBase.h"
    "/home/lakers/Downloads/VTK/Common/vtkObjectFactory.h"
    "/home/lakers/Downloads/VTK/Common/vtkObjectFactoryCollection.h"
    "/home/lakers/Downloads/VTK/Common/vtkOldStyleCallbackCommand.h"
    "/home/lakers/Downloads/VTK/Common/vtkOnePieceExtentTranslator.h"
    "/home/lakers/Downloads/VTK/Common/vtkOutputWindow.h"
    "/home/lakers/Downloads/VTK/Common/vtkOverrideInformation.h"
    "/home/lakers/Downloads/VTK/Common/vtkOverrideInformationCollection.h"
    "/home/lakers/Downloads/VTK/Common/vtkParametricBoy.h"
    "/home/lakers/Downloads/VTK/Common/vtkParametricConicSpiral.h"
    "/home/lakers/Downloads/VTK/Common/vtkParametricCrossCap.h"
    "/home/lakers/Downloads/VTK/Common/vtkParametricDini.h"
    "/home/lakers/Downloads/VTK/Common/vtkParametricEllipsoid.h"
    "/home/lakers/Downloads/VTK/Common/vtkParametricEnneper.h"
    "/home/lakers/Downloads/VTK/Common/vtkParametricFigure8Klein.h"
    "/home/lakers/Downloads/VTK/Common/vtkParametricFunction.h"
    "/home/lakers/Downloads/VTK/Common/vtkParametricKlein.h"
    "/home/lakers/Downloads/VTK/Common/vtkParametricMobius.h"
    "/home/lakers/Downloads/VTK/Common/vtkParametricRandomHills.h"
    "/home/lakers/Downloads/VTK/Common/vtkParametricRoman.h"
    "/home/lakers/Downloads/VTK/Common/vtkParametricSuperEllipsoid.h"
    "/home/lakers/Downloads/VTK/Common/vtkParametricSuperToroid.h"
    "/home/lakers/Downloads/VTK/Common/vtkParametricTorus.h"
    "/home/lakers/Downloads/VTK/Common/vtkPerspectiveTransform.h"
    "/home/lakers/Downloads/VTK/Common/vtkPlane.h"
    "/home/lakers/Downloads/VTK/Common/vtkPlaneCollection.h"
    "/home/lakers/Downloads/VTK/Common/vtkPlanes.h"
    "/home/lakers/Downloads/VTK/Common/vtkPoints.h"
    "/home/lakers/Downloads/VTK/Common/vtkPoints2D.h"
    "/home/lakers/Downloads/VTK/Common/vtkPolynomialSolversUnivariate.h"
    "/home/lakers/Downloads/VTK/Common/vtkPriorityQueue.h"
    "/home/lakers/Downloads/VTK/Common/vtkProp.h"
    "/home/lakers/Downloads/VTK/Common/vtkPropCollection.h"
    "/home/lakers/Downloads/VTK/Common/vtkProperty2D.h"
    "/home/lakers/Downloads/VTK/Common/vtkQuadratureSchemeDefinition.h"
    "/home/lakers/Downloads/VTK/Common/vtkQuadric.h"
    "/home/lakers/Downloads/VTK/Common/vtkRandomSequence.h"
    "/home/lakers/Downloads/VTK/Common/vtkRect.h"
    "/home/lakers/Downloads/VTK/Common/vtkReferenceCount.h"
    "/home/lakers/Downloads/VTK/Common/vtkRungeKutta2.h"
    "/home/lakers/Downloads/VTK/Common/vtkRungeKutta4.h"
    "/home/lakers/Downloads/VTK/Common/vtkRungeKutta45.h"
    "/home/lakers/Downloads/VTK/Common/vtkScalarsToColors.h"
    "/home/lakers/Downloads/VTK/Common/vtkServerSocket.h"
    "/home/lakers/Downloads/VTK/Common/vtkShortArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkSignedCharArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkSmartPointerBase.h"
    "/home/lakers/Downloads/VTK/Common/vtkSocket.h"
    "/home/lakers/Downloads/VTK/Common/vtkSocketCollection.h"
    "/home/lakers/Downloads/VTK/Common/vtkSortDataArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkSphericalTransform.h"
    "/home/lakers/Downloads/VTK/Common/vtkStdString.h"
    "/home/lakers/Downloads/VTK/Common/vtkStringArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkStructuredData.h"
    "/home/lakers/Downloads/VTK/Common/vtkStructuredExtent.h"
    "/home/lakers/Downloads/VTK/Common/vtkStructuredVisibilityConstraint.h"
    "/home/lakers/Downloads/VTK/Common/vtkTableExtentTranslator.h"
    "/home/lakers/Downloads/VTK/Common/vtkTensor.h"
    "/home/lakers/Downloads/VTK/Common/vtkThreadMessager.h"
    "/home/lakers/Downloads/VTK/Common/vtkTimePointUtility.h"
    "/home/lakers/Downloads/VTK/Common/vtkTimeStamp.h"
    "/home/lakers/Downloads/VTK/Common/vtkTimerLog.h"
    "/home/lakers/Downloads/VTK/Common/vtkTransform2D.h"
    "/home/lakers/Downloads/VTK/Common/vtkTransform.h"
    "/home/lakers/Downloads/VTK/Common/vtkTransformCollection.h"
    "/home/lakers/Downloads/VTK/Common/vtkUnicodeString.h"
    "/home/lakers/Downloads/VTK/Common/vtkUnicodeStringArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkUnsignedCharArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkUnsignedIntArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkUnsignedLongArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkUnsignedShortArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkVariant.h"
    "/home/lakers/Downloads/VTK/Common/vtkVariantArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkVector.h"
    "/home/lakers/Downloads/VTK/Common/vtkVersion.h"
    "/home/lakers/Downloads/VTK/Common/vtkVoidArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkWarpTransform.h"
    "/home/lakers/Downloads/VTK/Common/vtkWeakPointerBase.h"
    "/home/lakers/Downloads/VTK/Common/vtkWindow.h"
    "/home/lakers/Downloads/VTK/Common/vtkWindowLevelLookupTable.h"
    "/home/lakers/Downloads/VTK/Common/vtkXMLDataElement.h"
    "/home/lakers/Downloads/VTK/Common/vtkXMLFileOutputWindow.h"
    "/home/lakers/Downloads/VTK/Common/vtkLongLongArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkUnsignedLongLongArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkTypeInt8Array.h"
    "/home/lakers/Downloads/VTK/Common/vtkTypeInt16Array.h"
    "/home/lakers/Downloads/VTK/Common/vtkTypeInt32Array.h"
    "/home/lakers/Downloads/VTK/Common/vtkTypeInt64Array.h"
    "/home/lakers/Downloads/VTK/Common/vtkTypeUInt8Array.h"
    "/home/lakers/Downloads/VTK/Common/vtkTypeUInt16Array.h"
    "/home/lakers/Downloads/VTK/Common/vtkTypeUInt32Array.h"
    "/home/lakers/Downloads/VTK/Common/vtkTypeUInt64Array.h"
    "/home/lakers/Downloads/VTK/Common/vtkTypeFloat32Array.h"
    "/home/lakers/Downloads/VTK/Common/vtkTypeFloat64Array.h"
    "/home/lakers/Downloads/VTK/Common/vtkArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkArrayCoordinates.h"
    "/home/lakers/Downloads/VTK/Common/vtkArrayExtents.h"
    "/home/lakers/Downloads/VTK/Common/vtkArrayExtentsList.h"
    "/home/lakers/Downloads/VTK/Common/vtkArrayRange.h"
    "/home/lakers/Downloads/VTK/Common/vtkArraySort.h"
    "/home/lakers/Downloads/VTK/Common/vtkArrayWeights.h"
    "/home/lakers/Downloads/VTK/Common/vtkDenseArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkSparseArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkTypedArray.h"
    "/home/lakers/Downloads/VTK/Common/vtkTypeTemplate.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8" TYPE FILE FILES "/home/lakers/Downloads/VTK/Utilities/InstallOnly/vtkCommonKit.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/vtk-5.8" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Common/vtkABI.h"
    "/home/lakers/Downloads/VTK/Common/vtkArrayIteratorTemplate.h"
    "/home/lakers/Downloads/VTK/Common/vtkDataArrayTemplate.h"
    "/home/lakers/Downloads/VTK/Common/vtkIOStream.h"
    "/home/lakers/Downloads/VTK/Common/vtkIOStreamFwd.h"
    "/home/lakers/Downloads/VTK/Common/vtkNew.h"
    "/home/lakers/Downloads/VTK/Common/vtkSetGet.h"
    "/home/lakers/Downloads/VTK/Common/vtkSmartPointer.h"
    "/home/lakers/Downloads/VTK/Common/vtkSystemIncludes.h"
    "/home/lakers/Downloads/VTK/Common/vtkTemplateAliasMacro.h"
    "/home/lakers/Downloads/VTK/Common/vtkType.h"
    "/home/lakers/Downloads/VTK/Common/vtkTypeTraits.h"
    "/home/lakers/Downloads/VTK/Common/vtkVariantCast.h"
    "/home/lakers/Downloads/VTK/Common/vtkVariantInlineOperators.h"
    "/home/lakers/Downloads/VTK/Common/vtkVariantCreate.h"
    "/home/lakers/Downloads/VTK/Common/vtkWeakPointer.h"
    "/home/lakers/Downloads/VTK/Common/vtkWin32Header.h"
    "/home/lakers/Downloads/VTK/Common/vtkWindows.h"
    "/home/lakers/Downloads/VTK/Common/Testing/Cxx/vtkTestDriver.h"
    "/home/lakers/Downloads/VTK/Common/vtkPythonCommand.h"
    "/home/lakers/Downloads/VTK/Common/vtkArrayIteratorTemplate.txx"
    "/home/lakers/Downloads/VTK/Common/vtkArrayIteratorTemplateImplicit.txx"
    "/home/lakers/Downloads/VTK/Common/vtkDataArrayTemplate.txx"
    "/home/lakers/Downloads/VTK/Common/vtkDataArrayTemplateImplicit.txx"
    "/home/lakers/Downloads/VTK/Common/vtkDenseArray.txx"
    "/home/lakers/Downloads/VTK/Common/vtkTypedArray.txx"
    "/home/lakers/Downloads/VTK/Common/Testing/Cxx/vtkTestUtilities.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/vtk-5.8/testing" TYPE FILE FILES
    "/home/lakers/Downloads/VTK/Common/Testing/HeaderTesting.py"
    "/home/lakers/Downloads/VTK/Common/Testing/WindowsMangleList.py"
    "/home/lakers/Downloads/VTK/Common/Testing/Tcl/FindString.tcl"
    "/home/lakers/Downloads/VTK/Common/Testing/Tcl/PrintSelfCheck.tcl"
    "/home/lakers/Downloads/VTK/Common/Testing/Tcl/rtImageTest.tcl"
    "/home/lakers/Downloads/VTK/Common/Testing/Tcl/TestSetGet.tcl"
    "/home/lakers/Downloads/VTK/Common/Testing/Tcl/prtImageTest.tcl"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

