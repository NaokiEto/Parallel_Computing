// python wrapper for vtkProjectedTerrainPath
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
#include "vtkProjectedTerrainPath.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProjectedTerrainPath(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProjectedTerrainPath(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProjectedTerrainPathNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProjectedTerrainPathNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkProjectedTerrainPath_Doc();


static PyObject *
PyvtkProjectedTerrainPath_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

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
      tempr = op->vtkProjectedTerrainPath::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

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
      tempr = op->vtkProjectedTerrainPath::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  vtkProjectedTerrainPath *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProjectedTerrainPath::NewInstance();
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
PyvtkProjectedTerrainPath_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkProjectedTerrainPath *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkProjectedTerrainPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetSource(temp0);
      }
    else
      {
      op->vtkProjectedTerrainPath::SetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSource();
      }
    else
      {
      tempr = op->vtkProjectedTerrainPath::GetSource();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetProjectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionMode(temp0);
      }
    else
      {
      op->vtkProjectedTerrainPath::SetProjectionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetProjectionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjectionModeMinValue();
      }
    else
      {
      tempr = op->vtkProjectedTerrainPath::GetProjectionModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetProjectionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjectionModeMaxValue();
      }
    else
      {
      tempr = op->vtkProjectedTerrainPath::GetProjectionModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetProjectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjectionMode();
      }
    else
      {
      tempr = op->vtkProjectedTerrainPath::GetProjectionMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetProjectionModeToSimple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionModeToSimple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionModeToSimple();
      }
    else
      {
      op->vtkProjectedTerrainPath::SetProjectionModeToSimple();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetProjectionModeToNonOccluded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionModeToNonOccluded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionModeToNonOccluded();
      }
    else
      {
      op->vtkProjectedTerrainPath::SetProjectionModeToNonOccluded();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetProjectionModeToHug(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionModeToHug");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionModeToHug();
      }
    else
      {
      op->vtkProjectedTerrainPath::SetProjectionModeToHug();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetHeightOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeightOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeightOffset(temp0);
      }
    else
      {
      op->vtkProjectedTerrainPath::SetHeightOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetHeightOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeightOffset();
      }
    else
      {
      tempr = op->vtkProjectedTerrainPath::GetHeightOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetHeightTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeightTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeightTolerance(temp0);
      }
    else
      {
      op->vtkProjectedTerrainPath::SetHeightTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetHeightToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeightToleranceMinValue();
      }
    else
      {
      tempr = op->vtkProjectedTerrainPath::GetHeightToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetHeightToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeightToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkProjectedTerrainPath::GetHeightToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetHeightTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeightTolerance();
      }
    else
      {
      tempr = op->vtkProjectedTerrainPath::GetHeightTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_SetMaximumNumberOfLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfLines(temp0);
      }
    else
      {
      op->vtkProjectedTerrainPath::SetMaximumNumberOfLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetMaximumNumberOfLinesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfLinesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfLinesMinValue();
      }
    else
      {
      tempr = op->vtkProjectedTerrainPath::GetMaximumNumberOfLinesMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetMaximumNumberOfLinesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfLinesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfLinesMaxValue();
      }
    else
      {
      tempr = op->vtkProjectedTerrainPath::GetMaximumNumberOfLinesMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTerrainPath_GetMaximumNumberOfLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTerrainPath *op = static_cast<vtkProjectedTerrainPath *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfLines();
      }
    else
      {
      tempr = op->vtkProjectedTerrainPath::GetMaximumNumberOfLines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProjectedTerrainPath_Methods[] = {
  {(char*)"GetClassName", PyvtkProjectedTerrainPath_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"IsA", PyvtkProjectedTerrainPath_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"NewInstance", PyvtkProjectedTerrainPath_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProjectedTerrainPath\nC++: vtkProjectedTerrainPath *NewInstance()\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"SafeDownCast", PyvtkProjectedTerrainPath_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProjectedTerrainPath\nC++: vtkProjectedTerrainPath *SafeDownCast(vtkObject* o)\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"SetSource", PyvtkProjectedTerrainPath_SetSource, 1,
   (char*)"V.SetSource(vtkImageData)\nC++: void SetSource(vtkImageData *source)\n\nSpecify the second input (the terrain) onto which the polyline(s)\nshould be projected.\n"},
  {(char*)"GetSource", PyvtkProjectedTerrainPath_GetSource, 1,
   (char*)"V.GetSource() -> vtkImageData\nC++: vtkImageData *GetSource()\n\nSpecify the second input (the terrain) onto which the polyline(s)\nshould be projected.\n"},
  {(char*)"SetProjectionMode", PyvtkProjectedTerrainPath_SetProjectionMode, 1,
   (char*)"V.SetProjectionMode(int)\nC++: void SetProjectionMode(int)\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {(char*)"GetProjectionModeMinValue", PyvtkProjectedTerrainPath_GetProjectionModeMinValue, 1,
   (char*)"V.GetProjectionModeMinValue() -> int\nC++: int GetProjectionModeMinValue()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {(char*)"GetProjectionModeMaxValue", PyvtkProjectedTerrainPath_GetProjectionModeMaxValue, 1,
   (char*)"V.GetProjectionModeMaxValue() -> int\nC++: int GetProjectionModeMaxValue()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {(char*)"GetProjectionMode", PyvtkProjectedTerrainPath_GetProjectionMode, 1,
   (char*)"V.GetProjectionMode() -> int\nC++: int GetProjectionMode()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {(char*)"SetProjectionModeToSimple", PyvtkProjectedTerrainPath_SetProjectionModeToSimple, 1,
   (char*)"V.SetProjectionModeToSimple()\nC++: void SetProjectionModeToSimple()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {(char*)"SetProjectionModeToNonOccluded", PyvtkProjectedTerrainPath_SetProjectionModeToNonOccluded, 1,
   (char*)"V.SetProjectionModeToNonOccluded()\nC++: void SetProjectionModeToNonOccluded()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {(char*)"SetProjectionModeToHug", PyvtkProjectedTerrainPath_SetProjectionModeToHug, 1,
   (char*)"V.SetProjectionModeToHug()\nC++: void SetProjectionModeToHug()\n\nDetermine how to control the projection process. Simple\nprojection just projects the original polyline points.\nNon-occluded projection insures that the polyline does not\nintersect the terrain surface. Hug projection is similar to\nnon-occulded projection except that produces a path that is\nnearly parallel to the terrain (within the user specified height\ntolerance).\n"},
  {(char*)"SetHeightOffset", PyvtkProjectedTerrainPath_SetHeightOffset, 1,
   (char*)"V.SetHeightOffset(float)\nC++: void SetHeightOffset(double a)\n\nThis is the height above (or below) the terrain that the\nprojected path should be. Positive values indicate distances\nabove the terrain; negative values indicate distances below the\nterrain.\n"},
  {(char*)"GetHeightOffset", PyvtkProjectedTerrainPath_GetHeightOffset, 1,
   (char*)"V.GetHeightOffset() -> float\nC++: double GetHeightOffset()\n\nThis is the height above (or below) the terrain that the\nprojected path should be. Positive values indicate distances\nabove the terrain; negative values indicate distances below the\nterrain.\n"},
  {(char*)"SetHeightTolerance", PyvtkProjectedTerrainPath_SetHeightTolerance, 1,
   (char*)"V.SetHeightTolerance(float)\nC++: void SetHeightTolerance(double)\n\nThis is the allowable variation in the altitude of the path with\nrespect to the variation in the terrain. It only comes into play\nif the hug projection mode is enabled.\n"},
  {(char*)"GetHeightToleranceMinValue", PyvtkProjectedTerrainPath_GetHeightToleranceMinValue, 1,
   (char*)"V.GetHeightToleranceMinValue() -> float\nC++: double GetHeightToleranceMinValue()\n\nThis is the allowable variation in the altitude of the path with\nrespect to the variation in the terrain. It only comes into play\nif the hug projection mode is enabled.\n"},
  {(char*)"GetHeightToleranceMaxValue", PyvtkProjectedTerrainPath_GetHeightToleranceMaxValue, 1,
   (char*)"V.GetHeightToleranceMaxValue() -> float\nC++: double GetHeightToleranceMaxValue()\n\nThis is the allowable variation in the altitude of the path with\nrespect to the variation in the terrain. It only comes into play\nif the hug projection mode is enabled.\n"},
  {(char*)"GetHeightTolerance", PyvtkProjectedTerrainPath_GetHeightTolerance, 1,
   (char*)"V.GetHeightTolerance() -> float\nC++: double GetHeightTolerance()\n\nThis is the allowable variation in the altitude of the path with\nrespect to the variation in the terrain. It only comes into play\nif the hug projection mode is enabled.\n"},
  {(char*)"SetMaximumNumberOfLines", PyvtkProjectedTerrainPath_SetMaximumNumberOfLines, 1,
   (char*)"V.SetMaximumNumberOfLines(int)\nC++: void SetMaximumNumberOfLines(vtkIdType)\n\nThis instance variable can be used to limit the total number of\nline segments created during subdivision. Note that the number of\ninput line segments will be the minimum number that cab be\noutput.\n"},
  {(char*)"GetMaximumNumberOfLinesMinValue", PyvtkProjectedTerrainPath_GetMaximumNumberOfLinesMinValue, 1,
   (char*)"V.GetMaximumNumberOfLinesMinValue() -> int\nC++: vtkIdType GetMaximumNumberOfLinesMinValue()\n\nThis instance variable can be used to limit the total number of\nline segments created during subdivision. Note that the number of\ninput line segments will be the minimum number that cab be\noutput.\n"},
  {(char*)"GetMaximumNumberOfLinesMaxValue", PyvtkProjectedTerrainPath_GetMaximumNumberOfLinesMaxValue, 1,
   (char*)"V.GetMaximumNumberOfLinesMaxValue() -> int\nC++: vtkIdType GetMaximumNumberOfLinesMaxValue()\n\nThis instance variable can be used to limit the total number of\nline segments created during subdivision. Note that the number of\ninput line segments will be the minimum number that cab be\noutput.\n"},
  {(char*)"GetMaximumNumberOfLines", PyvtkProjectedTerrainPath_GetMaximumNumberOfLines, 1,
   (char*)"V.GetMaximumNumberOfLines() -> int\nC++: vtkIdType GetMaximumNumberOfLines()\n\nThis instance variable can be used to limit the total number of\nline segments created during subdivision. Note that the number of\ninput line segments will be the minimum number that cab be\noutput.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProjectedTerrainPath_StaticNew()
{
  return vtkProjectedTerrainPath::New();
}

PyObject *PyVTKClass_vtkProjectedTerrainPathNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProjectedTerrainPath_StaticNew,
    PyvtkProjectedTerrainPath_Methods,
    "vtkProjectedTerrainPath", modulename,
    NULL, NULL,
    PyvtkProjectedTerrainPath_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"SIMPLE_PROJECTION", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"NONOCCLUDED_PROJECTION", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"HUG_PROJECTION", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkProjectedTerrainPath_Doc()
{
  static const char *docstring[] = {
    "vtkProjectedTerrainPath - project a polyline onto a terrain\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkProjectedTerrainPath projects an input polyline onto a terrain.\n(The terrain is defined by a 2D height image and is the second input\nto the filter.) The polyline projection is controlled via several\nmodes as follows. 1) Simple mode projects the polyline points onto\nthe terrain, taking into account the height offset instance variable.\n2) Non-occluded mode insures that no parts of the polyline ar",
    "e\noccluded by the terrain (e.g. a line passes through a mountain). This\nmay require recursive subdivision of the polyline. 3) Hug mode\ninsures that the polyine points remain within a constant distance\nfrom the surface. This may also require recursive subdivision of the\npolyline. Note that both non-occluded mode and hug mode also take\ninto account the height offset, so it is possible to create path",
    "s\nthat hug terrain a certain distance above it. To use this filter,\ndefine two inputs: 1) a polyline, and 2) an image whose scalar values\nrepresent a height field. Then specify the mode, and the height\noffset to use.\n\nAn description of the algorithm is as follows. The filter begins by\nprojecting the polyline points to the image (offset by the specified\nheight offset).  If the mode is non-occluded ",
    "or hug, then the maximum\nerror along each line segment is computed and placed into a priority\nqueue. Each line segment is then split at the point of maximum error,\nand the two new line segments are evaluated for maximum error. This\nprocess continues until the line is not occluded by the terrain\n(non-occluded mode) or satisfies the error on variation from the\nsurface (hug mode). (Note this process ",
    "is repeated for each polyline\nin the input. Also, the maximum error is computed in two parts: a\nmaximum positive error and maximum negative error. If the polyline is\nabove the terrain--i.e., the height offset is positive--in\nnon-occluded or hug mode all negative errors are eliminated. If the\npolyline is below the terrain--i.e., the height offset is\nnegative--in non-occluded or hug mode all positiv",
    "e errors are\neliminated.)\n\nCaveats:\n\nThis algorithm requires the entire input image to be in memory, hence\nit may not work for extremely large images.\n\nThe input height image is assumed to be positioned in the x-y plane\nso the scalar value is the z-coordinate, height value.\n\nA priority queue is used so that the 1) the total number of line\nsegments can be controlled, and 2) the algorithm can termin",
    "ate when\nthe errors in the queue are less than the specified error tolerance.\n\nSee Also:\n\nvtkGreedyTerrainDecimation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProjectedTerrainPath(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProjectedTerrainPathNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProjectedTerrainPath", o) != 0)
    {
    Py_DECREF(o);
    }

}

