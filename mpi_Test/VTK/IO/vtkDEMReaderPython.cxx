// python wrapper for vtkDEMReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#if !defined(__APPLE__)
#include "vtkPython.h"
#undef _XOPEN_SOURCE /* Conflicts with standards.h.  */
#undef _THREAD_SAFE /* Conflicts with pthread.h.  */
#endif
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <vtksys/ios/sstream>
#include "vtkDEMReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDEMReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDEMReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDEMReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDEMReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkDEMReader_Doc();


static PyObject *
PyvtkDEMReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClassName();
      }
    else
      {
      tempr = op->vtkDEMReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsA(temp0);
      }
    else
      {
      tempr = op->vtkDEMReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  vtkDEMReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDEMReader::NewInstance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
        {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
        }
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDEMReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDEMReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkDEMReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkDEMReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_SetElevationReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElevationReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetElevationReference(temp0);
      }
    else
      {
      op->vtkDEMReader::SetElevationReference(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetElevationReferenceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElevationReferenceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElevationReferenceMinValue();
      }
    else
      {
      tempr = op->vtkDEMReader::GetElevationReferenceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetElevationReferenceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElevationReferenceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElevationReferenceMaxValue();
      }
    else
      {
      tempr = op->vtkDEMReader::GetElevationReferenceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetElevationReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElevationReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElevationReference();
      }
    else
      {
      tempr = op->vtkDEMReader::GetElevationReference();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_SetElevationReferenceToSeaLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElevationReferenceToSeaLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetElevationReferenceToSeaLevel();
      }
    else
      {
      op->vtkDEMReader::SetElevationReferenceToSeaLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_SetElevationReferenceToElevationBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElevationReferenceToElevationBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetElevationReferenceToElevationBounds();
      }
    else
      {
      op->vtkDEMReader::SetElevationReferenceToElevationBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetElevationReferenceAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElevationReferenceAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElevationReferenceAsString();
      }
    else
      {
      tempr = op->vtkDEMReader::GetElevationReferenceAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetMapLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMapLabel();
      }
    else
      {
      tempr = op->vtkDEMReader::GetMapLabel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetDEMLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDEMLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDEMLevel();
      }
    else
      {
      tempr = op->vtkDEMReader::GetDEMLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetElevationPattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElevationPattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElevationPattern();
      }
    else
      {
      tempr = op->vtkDEMReader::GetElevationPattern();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetGroundSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroundSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGroundSystem();
      }
    else
      {
      tempr = op->vtkDEMReader::GetGroundSystem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetGroundZone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroundZone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGroundZone();
      }
    else
      {
      tempr = op->vtkDEMReader::GetGroundZone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetProjectionParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  float *tempr;
  int sizer = 15;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjectionParameters();
      }
    else
      {
      tempr = op->vtkDEMReader::GetProjectionParameters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetPlaneUnitOfMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneUnitOfMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlaneUnitOfMeasure();
      }
    else
      {
      tempr = op->vtkDEMReader::GetPlaneUnitOfMeasure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetElevationUnitOfMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElevationUnitOfMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElevationUnitOfMeasure();
      }
    else
      {
      tempr = op->vtkDEMReader::GetElevationUnitOfMeasure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetPolygonSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPolygonSize();
      }
    else
      {
      tempr = op->vtkDEMReader::GetPolygonSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetElevationBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElevationBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  float *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElevationBounds();
      }
    else
      {
      tempr = op->vtkDEMReader::GetElevationBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetLocalRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLocalRotation();
      }
    else
      {
      tempr = op->vtkDEMReader::GetLocalRotation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetAccuracyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccuracyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAccuracyCode();
      }
    else
      {
      tempr = op->vtkDEMReader::GetAccuracyCode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetSpatialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpatialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  float *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpatialResolution();
      }
    else
      {
      tempr = op->vtkDEMReader::GetSpatialResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkDEMReader_GetProfileDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProfileDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDEMReader *op = static_cast<vtkDEMReader *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProfileDimension();
      }
    else
      {
      tempr = op->vtkDEMReader::GetProfileDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkDEMReader_Methods[] = {
  {(char*)"GetClassName", PyvtkDEMReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDEMReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDEMReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDEMReader\nC++: vtkDEMReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDEMReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDEMReader\nC++: vtkDEMReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkDEMReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of Digital Elevation Model (DEM) file\n"},
  {(char*)"GetFileName", PyvtkDEMReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of Digital Elevation Model (DEM) file\n"},
  {(char*)"SetElevationReference", PyvtkDEMReader_SetElevationReference, 1,
   (char*)"V.SetElevationReference(int)\nC++: void SetElevationReference(int)\n\nSpecify the elevation origin to use. By default, the elevation\norigin is equal to ElevationBounds[0]. A more convenient origin\nis to use sea level (i.e., a value of 0.0).\n"},
  {(char*)"GetElevationReferenceMinValue", PyvtkDEMReader_GetElevationReferenceMinValue, 1,
   (char*)"V.GetElevationReferenceMinValue() -> int\nC++: int GetElevationReferenceMinValue()\n\nSpecify the elevation origin to use. By default, the elevation\norigin is equal to ElevationBounds[0]. A more convenient origin\nis to use sea level (i.e., a value of 0.0).\n"},
  {(char*)"GetElevationReferenceMaxValue", PyvtkDEMReader_GetElevationReferenceMaxValue, 1,
   (char*)"V.GetElevationReferenceMaxValue() -> int\nC++: int GetElevationReferenceMaxValue()\n\nSpecify the elevation origin to use. By default, the elevation\norigin is equal to ElevationBounds[0]. A more convenient origin\nis to use sea level (i.e., a value of 0.0).\n"},
  {(char*)"GetElevationReference", PyvtkDEMReader_GetElevationReference, 1,
   (char*)"V.GetElevationReference() -> int\nC++: int GetElevationReference()\n\nSpecify the elevation origin to use. By default, the elevation\norigin is equal to ElevationBounds[0]. A more convenient origin\nis to use sea level (i.e., a value of 0.0).\n"},
  {(char*)"SetElevationReferenceToSeaLevel", PyvtkDEMReader_SetElevationReferenceToSeaLevel, 1,
   (char*)"V.SetElevationReferenceToSeaLevel()\nC++: void SetElevationReferenceToSeaLevel()\n\nSpecify the elevation origin to use. By default, the elevation\norigin is equal to ElevationBounds[0]. A more convenient origin\nis to use sea level (i.e., a value of 0.0).\n"},
  {(char*)"SetElevationReferenceToElevationBounds", PyvtkDEMReader_SetElevationReferenceToElevationBounds, 1,
   (char*)"V.SetElevationReferenceToElevationBounds()\nC++: void SetElevationReferenceToElevationBounds()\n\nSpecify the elevation origin to use. By default, the elevation\norigin is equal to ElevationBounds[0]. A more convenient origin\nis to use sea level (i.e., a value of 0.0).\n"},
  {(char*)"GetElevationReferenceAsString", PyvtkDEMReader_GetElevationReferenceAsString, 1,
   (char*)"V.GetElevationReferenceAsString() -> string\nC++: const char *GetElevationReferenceAsString(void)\n\nSpecify the elevation origin to use. By default, the elevation\norigin is equal to ElevationBounds[0]. A more convenient origin\nis to use sea level (i.e., a value of 0.0).\n"},
  {(char*)"GetMapLabel", PyvtkDEMReader_GetMapLabel, 1,
   (char*)"V.GetMapLabel() -> string\nC++: char *GetMapLabel()\n\nAn ASCII description of the map\n"},
  {(char*)"GetDEMLevel", PyvtkDEMReader_GetDEMLevel, 1,
   (char*)"V.GetDEMLevel() -> int\nC++: int GetDEMLevel()\n\nCode 1=DEM-1, 2=DEM_2, ...\n"},
  {(char*)"GetElevationPattern", PyvtkDEMReader_GetElevationPattern, 1,
   (char*)"V.GetElevationPattern() -> int\nC++: int GetElevationPattern()\n\nCode 1=regular, 2=random, reserved for future use\n"},
  {(char*)"GetGroundSystem", PyvtkDEMReader_GetGroundSystem, 1,
   (char*)"V.GetGroundSystem() -> int\nC++: int GetGroundSystem()\n\nGround planimetric reference system\n"},
  {(char*)"GetGroundZone", PyvtkDEMReader_GetGroundZone, 1,
   (char*)"V.GetGroundZone() -> int\nC++: int GetGroundZone()\n\nZone in ground planimetric reference system\n"},
  {(char*)"GetProjectionParameters", PyvtkDEMReader_GetProjectionParameters, 1,
   (char*)"V.GetProjectionParameters() -> (float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float)\nC++: float *GetProjectionParameters()\n\nMap Projection parameters. All are zero.\n"},
  {(char*)"GetPlaneUnitOfMeasure", PyvtkDEMReader_GetPlaneUnitOfMeasure, 1,
   (char*)"V.GetPlaneUnitOfMeasure() -> int\nC++: int GetPlaneUnitOfMeasure()\n\nDefining unit of measure for ground planimetric coordinates\nthroughout the file. 0 = radians, 1 = feet, 2 = meters, 3 =\narc-seconds.\n"},
  {(char*)"GetElevationUnitOfMeasure", PyvtkDEMReader_GetElevationUnitOfMeasure, 1,
   (char*)"V.GetElevationUnitOfMeasure() -> int\nC++: int GetElevationUnitOfMeasure()\n\nDefining unit of measure for elevation coordinates throughout the\nfile. 1 = feet, 2 = meters\n"},
  {(char*)"GetPolygonSize", PyvtkDEMReader_GetPolygonSize, 1,
   (char*)"V.GetPolygonSize() -> int\nC++: int GetPolygonSize()\n\nNumber of sides in the polygon which defines the coverage of the\nDEM file. Set to 4.\n"},
  {(char*)"GetElevationBounds", PyvtkDEMReader_GetElevationBounds, 1,
   (char*)"V.GetElevationBounds() -> (float, float)\nC++: float *GetElevationBounds()\n\nMinimum and maximum elevation for the DEM. The units in the file\nare in ElevationUnitOfMeasure. This class converts them to\nmeters.\n"},
  {(char*)"GetLocalRotation", PyvtkDEMReader_GetLocalRotation, 1,
   (char*)"V.GetLocalRotation() -> float\nC++: float GetLocalRotation()\n\nCounterclockwise angle (in radians) from the primary axis of the\nplanimetric reference to the primary axis of the DEM local\nreference system. IGNORED BY THIS IMPLEMENTATION.\n"},
  {(char*)"GetAccuracyCode", PyvtkDEMReader_GetAccuracyCode, 1,
   (char*)"V.GetAccuracyCode() -> int\nC++: int GetAccuracyCode()\n\nAccuracy code for elevations. 0=unknown accuracy\n"},
  {(char*)"GetSpatialResolution", PyvtkDEMReader_GetSpatialResolution, 1,
   (char*)"V.GetSpatialResolution() -> (float, float, float)\nC++: float *GetSpatialResolution()\n\nDEM spatial resolution for x,y,z. Values are expressed in units\nof resolution. Since elevations are read as integers, this\npermits fractional elevations.\n"},
  {(char*)"GetProfileDimension", PyvtkDEMReader_GetProfileDimension, 1,
   (char*)"V.GetProfileDimension() -> (int, int)\nC++: int *GetProfileDimension()\n\nThe number of rows and columns in the DEM.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDEMReader_StaticNew()
{
  return vtkDEMReader::New();
}

PyObject *PyVTKClass_vtkDEMReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDEMReader_StaticNew,
    PyvtkDEMReader_Methods,
    "vtkDEMReader", modulename,
    NULL, NULL,
    PyvtkDEMReader_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"REFERENCE_SEA_LEVEL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"REFERENCE_ELEVATION_BOUNDS", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkDEMReader_Doc()
{
  static const char *docstring[] = {
    "vtkDEMReader - read a digital elevation model (DEM) file\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkDEMReader reads digital elevation files and creates image data.\nDigital elevation files are produced by the <A\nHREF=\"http://www.usgs.gov\">US Geological Survey</A>. A complete\ndescription of the DEM file is located at the USGS site. The reader\nreads the entire dem file and create a vtkImageData that contains a\nsingle scalar component that is the elevation in meters. The spacing\nis also expressed",
    " in meters. A number of get methods provide access\nto fields on the header.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDEMReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDEMReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDEMReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

