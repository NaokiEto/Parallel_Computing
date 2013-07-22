// python wrapper for vtkMaskPoints
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
#include "vtkMaskPoints.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMaskPoints(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMaskPoints(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMaskPointsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMaskPointsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkMaskPoints_Doc();


static PyObject *
PyvtkMaskPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

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
      tempr = op->vtkMaskPoints::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

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
      tempr = op->vtkMaskPoints::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  vtkMaskPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMaskPoints::NewInstance();
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
PyvtkMaskPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMaskPoints *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMaskPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOnRatio(temp0);
      }
    else
      {
      op->vtkMaskPoints::SetOnRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOnRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOnRatioMinValue();
      }
    else
      {
      tempr = op->vtkMaskPoints::GetOnRatioMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOnRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOnRatioMaxValue();
      }
    else
      {
      tempr = op->vtkMaskPoints::GetOnRatioMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOnRatio();
      }
    else
      {
      tempr = op->vtkMaskPoints::GetOnRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfPoints(temp0);
      }
    else
      {
      op->vtkMaskPoints::SetMaximumNumberOfPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetMaximumNumberOfPointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfPointsMinValue();
      }
    else
      {
      tempr = op->vtkMaskPoints::GetMaximumNumberOfPointsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetMaximumNumberOfPointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfPointsMaxValue();
      }
    else
      {
      tempr = op->vtkMaskPoints::GetMaximumNumberOfPointsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfPoints();
      }
    else
      {
      tempr = op->vtkMaskPoints::GetMaximumNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOffset(temp0);
      }
    else
      {
      op->vtkMaskPoints::SetOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffsetMinValue();
      }
    else
      {
      tempr = op->vtkMaskPoints::GetOffsetMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffsetMaxValue();
      }
    else
      {
      tempr = op->vtkMaskPoints::GetOffsetMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffset();
      }
    else
      {
      tempr = op->vtkMaskPoints::GetOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRandomMode(temp0);
      }
    else
      {
      op->vtkMaskPoints::SetRandomMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRandomMode();
      }
    else
      {
      tempr = op->vtkMaskPoints::GetRandomMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_RandomModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RandomModeOn();
      }
    else
      {
      op->vtkMaskPoints::RandomModeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_RandomModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RandomModeOff();
      }
    else
      {
      op->vtkMaskPoints::RandomModeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateVertices(temp0);
      }
    else
      {
      op->vtkMaskPoints::SetGenerateVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateVertices();
      }
    else
      {
      tempr = op->vtkMaskPoints::GetGenerateVertices();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GenerateVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVerticesOn();
      }
    else
      {
      op->vtkMaskPoints::GenerateVerticesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GenerateVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateVerticesOff();
      }
    else
      {
      op->vtkMaskPoints::GenerateVerticesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetSingleVertexPerCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleVertexPerCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSingleVertexPerCell(temp0);
      }
    else
      {
      op->vtkMaskPoints::SetSingleVertexPerCell(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetSingleVertexPerCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleVertexPerCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSingleVertexPerCell();
      }
    else
      {
      tempr = op->vtkMaskPoints::GetSingleVertexPerCell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SingleVertexPerCellOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleVertexPerCellOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SingleVertexPerCellOn();
      }
    else
      {
      op->vtkMaskPoints::SingleVertexPerCellOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMaskPoints_SingleVertexPerCellOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleVertexPerCellOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SingleVertexPerCellOff();
      }
    else
      {
      op->vtkMaskPoints::SingleVertexPerCellOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMaskPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkMaskPoints_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMaskPoints_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMaskPoints_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMaskPoints\nC++: vtkMaskPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMaskPoints_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMaskPoints\nC++: vtkMaskPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOnRatio", PyvtkMaskPoints_SetOnRatio, 1,
   (char*)"V.SetOnRatio(int)\nC++: void SetOnRatio(int)\n\nTurn on every nth point.\n"},
  {(char*)"GetOnRatioMinValue", PyvtkMaskPoints_GetOnRatioMinValue, 1,
   (char*)"V.GetOnRatioMinValue() -> int\nC++: int GetOnRatioMinValue()\n\nTurn on every nth point.\n"},
  {(char*)"GetOnRatioMaxValue", PyvtkMaskPoints_GetOnRatioMaxValue, 1,
   (char*)"V.GetOnRatioMaxValue() -> int\nC++: int GetOnRatioMaxValue()\n\nTurn on every nth point.\n"},
  {(char*)"GetOnRatio", PyvtkMaskPoints_GetOnRatio, 1,
   (char*)"V.GetOnRatio() -> int\nC++: int GetOnRatio()\n\nTurn on every nth point.\n"},
  {(char*)"SetMaximumNumberOfPoints", PyvtkMaskPoints_SetMaximumNumberOfPoints, 1,
   (char*)"V.SetMaximumNumberOfPoints(int)\nC++: void SetMaximumNumberOfPoints(vtkIdType)\n\nLimit the number of points that can be passed through.\n"},
  {(char*)"GetMaximumNumberOfPointsMinValue", PyvtkMaskPoints_GetMaximumNumberOfPointsMinValue, 1,
   (char*)"V.GetMaximumNumberOfPointsMinValue() -> int\nC++: vtkIdType GetMaximumNumberOfPointsMinValue()\n\nLimit the number of points that can be passed through.\n"},
  {(char*)"GetMaximumNumberOfPointsMaxValue", PyvtkMaskPoints_GetMaximumNumberOfPointsMaxValue, 1,
   (char*)"V.GetMaximumNumberOfPointsMaxValue() -> int\nC++: vtkIdType GetMaximumNumberOfPointsMaxValue()\n\nLimit the number of points that can be passed through.\n"},
  {(char*)"GetMaximumNumberOfPoints", PyvtkMaskPoints_GetMaximumNumberOfPoints, 1,
   (char*)"V.GetMaximumNumberOfPoints() -> int\nC++: vtkIdType GetMaximumNumberOfPoints()\n\nLimit the number of points that can be passed through.\n"},
  {(char*)"SetOffset", PyvtkMaskPoints_SetOffset, 1,
   (char*)"V.SetOffset(int)\nC++: void SetOffset(vtkIdType)\n\nStart with this point.\n"},
  {(char*)"GetOffsetMinValue", PyvtkMaskPoints_GetOffsetMinValue, 1,
   (char*)"V.GetOffsetMinValue() -> int\nC++: vtkIdType GetOffsetMinValue()\n\nStart with this point.\n"},
  {(char*)"GetOffsetMaxValue", PyvtkMaskPoints_GetOffsetMaxValue, 1,
   (char*)"V.GetOffsetMaxValue() -> int\nC++: vtkIdType GetOffsetMaxValue()\n\nStart with this point.\n"},
  {(char*)"GetOffset", PyvtkMaskPoints_GetOffset, 1,
   (char*)"V.GetOffset() -> int\nC++: vtkIdType GetOffset()\n\nStart with this point.\n"},
  {(char*)"SetRandomMode", PyvtkMaskPoints_SetRandomMode, 1,
   (char*)"V.SetRandomMode(int)\nC++: void SetRandomMode(int a)\n\nSpecial flag causes randomization of point selection. If this\nmode is on, statistically every nth point (i.e., OnRatio) will be\ndisplayed.\n"},
  {(char*)"GetRandomMode", PyvtkMaskPoints_GetRandomMode, 1,
   (char*)"V.GetRandomMode() -> int\nC++: int GetRandomMode()\n\nSpecial flag causes randomization of point selection. If this\nmode is on, statistically every nth point (i.e., OnRatio) will be\ndisplayed.\n"},
  {(char*)"RandomModeOn", PyvtkMaskPoints_RandomModeOn, 1,
   (char*)"V.RandomModeOn()\nC++: void RandomModeOn()\n\nSpecial flag causes randomization of point selection. If this\nmode is on, statistically every nth point (i.e., OnRatio) will be\ndisplayed.\n"},
  {(char*)"RandomModeOff", PyvtkMaskPoints_RandomModeOff, 1,
   (char*)"V.RandomModeOff()\nC++: void RandomModeOff()\n\nSpecial flag causes randomization of point selection. If this\nmode is on, statistically every nth point (i.e., OnRatio) will be\ndisplayed.\n"},
  {(char*)"SetGenerateVertices", PyvtkMaskPoints_SetGenerateVertices, 1,
   (char*)"V.SetGenerateVertices(int)\nC++: void SetGenerateVertices(int a)\n\nGenerate output polydata vertices as well as points. A useful\nconvenience method because vertices are drawn (they are topology)\nwhile points are not (they are geometry). By default this method\nis off.\n"},
  {(char*)"GetGenerateVertices", PyvtkMaskPoints_GetGenerateVertices, 1,
   (char*)"V.GetGenerateVertices() -> int\nC++: int GetGenerateVertices()\n\nGenerate output polydata vertices as well as points. A useful\nconvenience method because vertices are drawn (they are topology)\nwhile points are not (they are geometry). By default this method\nis off.\n"},
  {(char*)"GenerateVerticesOn", PyvtkMaskPoints_GenerateVerticesOn, 1,
   (char*)"V.GenerateVerticesOn()\nC++: void GenerateVerticesOn()\n\nGenerate output polydata vertices as well as points. A useful\nconvenience method because vertices are drawn (they are topology)\nwhile points are not (they are geometry). By default this method\nis off.\n"},
  {(char*)"GenerateVerticesOff", PyvtkMaskPoints_GenerateVerticesOff, 1,
   (char*)"V.GenerateVerticesOff()\nC++: void GenerateVerticesOff()\n\nGenerate output polydata vertices as well as points. A useful\nconvenience method because vertices are drawn (they are topology)\nwhile points are not (they are geometry). By default this method\nis off.\n"},
  {(char*)"SetSingleVertexPerCell", PyvtkMaskPoints_SetSingleVertexPerCell, 1,
   (char*)"V.SetSingleVertexPerCell(int)\nC++: void SetSingleVertexPerCell(int a)\n\nWhen vertex generation is enabled, by default vertices are\nproduced as multi-vertex cells (more than one per cell), if you\nwish to have a single vertex per cell, enable this flag.\n"},
  {(char*)"GetSingleVertexPerCell", PyvtkMaskPoints_GetSingleVertexPerCell, 1,
   (char*)"V.GetSingleVertexPerCell() -> int\nC++: int GetSingleVertexPerCell()\n\nWhen vertex generation is enabled, by default vertices are\nproduced as multi-vertex cells (more than one per cell), if you\nwish to have a single vertex per cell, enable this flag.\n"},
  {(char*)"SingleVertexPerCellOn", PyvtkMaskPoints_SingleVertexPerCellOn, 1,
   (char*)"V.SingleVertexPerCellOn()\nC++: void SingleVertexPerCellOn()\n\nWhen vertex generation is enabled, by default vertices are\nproduced as multi-vertex cells (more than one per cell), if you\nwish to have a single vertex per cell, enable this flag.\n"},
  {(char*)"SingleVertexPerCellOff", PyvtkMaskPoints_SingleVertexPerCellOff, 1,
   (char*)"V.SingleVertexPerCellOff()\nC++: void SingleVertexPerCellOff()\n\nWhen vertex generation is enabled, by default vertices are\nproduced as multi-vertex cells (more than one per cell), if you\nwish to have a single vertex per cell, enable this flag.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMaskPoints_StaticNew()
{
  return vtkMaskPoints::New();
}

PyObject *PyVTKClass_vtkMaskPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMaskPoints_StaticNew,
    PyvtkMaskPoints_Methods,
    "vtkMaskPoints", modulename,
    NULL, NULL,
    PyvtkMaskPoints_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMaskPoints_Doc()
{
  static const char *docstring[] = {
    "vtkMaskPoints - selectively filter points\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkMaskPoints is a filter that passes through points and point\nattributes from input dataset. (Other geometry is not passed\nthrough.) It is possible to mask every nth point, and to specify an\ninitial offset to begin masking from. A special random mode feature\nenables random selection of points. The filter can also generate\nvertices (topological primitives) as well as points. This is useful\nbecause",
    " vertices are rendered while points are not.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMaskPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMaskPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMaskPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

