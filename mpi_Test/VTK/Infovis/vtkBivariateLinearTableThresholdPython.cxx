// python wrapper for vtkBivariateLinearTableThreshold
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
#include "vtkBivariateLinearTableThreshold.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBivariateLinearTableThreshold(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBivariateLinearTableThreshold(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBivariateLinearTableThresholdNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBivariateLinearTableThresholdNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkBivariateLinearTableThreshold_Doc();


static PyObject *
PyvtkBivariateLinearTableThreshold_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

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
      tempr = op->vtkBivariateLinearTableThreshold::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

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
      tempr = op->vtkBivariateLinearTableThreshold::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  vtkBivariateLinearTableThreshold *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBivariateLinearTableThreshold::NewInstance();
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
PyvtkBivariateLinearTableThreshold_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBivariateLinearTableThreshold *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBivariateLinearTableThreshold::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetInclusive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInclusive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInclusive(temp0);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetInclusive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetInclusive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInclusive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInclusive();
      }
    else
      {
      tempr = op->vtkBivariateLinearTableThreshold::GetInclusive();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_AddColumnToThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumnToThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddColumnToThreshold(temp0, temp1);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::AddColumnToThreshold(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetNumberOfColumnsToThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumnsToThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfColumnsToThreshold();
      }
    else
      {
      tempr = op->vtkBivariateLinearTableThreshold::GetNumberOfColumnsToThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetColumnToThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnToThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->GetColumnToThreshold(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::GetColumnToThreshold(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_ClearColumnsToThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearColumnsToThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearColumnsToThreshold();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::ClearColumnsToThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetSelectedRowIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedRowIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int temp0 = 0;
  vtkIdTypeArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedRowIds(temp0);
      }
    else
      {
      tempr = op->vtkBivariateLinearTableThreshold::GetSelectedRowIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_AddLineEquation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLineEquation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->AddLineEquation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::AddLineEquation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_ClearLineEquations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLineEquations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLineEquations();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::ClearLineEquations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetLinearThresholdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinearThresholdType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLinearThresholdType();
      }
    else
      {
      tempr = op->vtkBivariateLinearTableThreshold::GetLinearThresholdType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetLinearThresholdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearThresholdType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLinearThresholdType(temp0);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetLinearThresholdType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToAbove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearThresholdTypeToAbove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLinearThresholdTypeToAbove();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetLinearThresholdTypeToAbove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToBelow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearThresholdTypeToBelow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLinearThresholdTypeToBelow();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetLinearThresholdTypeToBelow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToNear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearThresholdTypeToNear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLinearThresholdTypeToNear();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetLinearThresholdTypeToNear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearThresholdTypeToBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLinearThresholdTypeToBetween();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetLinearThresholdTypeToBetween();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetColumnRanges_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetColumnRanges(temp0, temp1);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetColumnRanges(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBivariateLinearTableThreshold_SetColumnRanges_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetColumnRanges(temp0);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetColumnRanges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBivariateLinearTableThreshold_SetColumnRanges(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBivariateLinearTableThreshold_SetColumnRanges_s1(self, args);
    case 1:
      return PyvtkBivariateLinearTableThreshold_SetColumnRanges_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColumnRanges");
  return NULL;
}



static PyObject *
PyvtkBivariateLinearTableThreshold_GetColumnRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColumnRanges();
      }
    else
      {
      tempr = op->vtkBivariateLinearTableThreshold::GetColumnRanges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetDistanceThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistanceThreshold(temp0);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetDistanceThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetDistanceThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistanceThreshold();
      }
    else
      {
      tempr = op->vtkBivariateLinearTableThreshold::GetDistanceThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_SetUseNormalizedDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNormalizedDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseNormalizedDistance(temp0);
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::SetUseNormalizedDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_GetUseNormalizedDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseNormalizedDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseNormalizedDistance();
      }
    else
      {
      tempr = op->vtkBivariateLinearTableThreshold::GetUseNormalizedDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_UseNormalizedDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNormalizedDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseNormalizedDistanceOn();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::UseNormalizedDistanceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateLinearTableThreshold_UseNormalizedDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNormalizedDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateLinearTableThreshold *op = static_cast<vtkBivariateLinearTableThreshold *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseNormalizedDistanceOff();
      }
    else
      {
      op->vtkBivariateLinearTableThreshold::UseNormalizedDistanceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBivariateLinearTableThreshold_Methods[] = {
  {(char*)"GetClassName", PyvtkBivariateLinearTableThreshold_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBivariateLinearTableThreshold_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBivariateLinearTableThreshold_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBivariateLinearTableThreshold\nC++: vtkBivariateLinearTableThreshold *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBivariateLinearTableThreshold_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBivariateLinearTableThreshold\nC++: vtkBivariateLinearTableThreshold *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInclusive", PyvtkBivariateLinearTableThreshold_SetInclusive, 1,
   (char*)"V.SetInclusive(int)\nC++: void SetInclusive(int a)\n\nInclude the line in the threshold.  Essentially whether the\nthreshold operation uses > versus >=.\n"},
  {(char*)"GetInclusive", PyvtkBivariateLinearTableThreshold_GetInclusive, 1,
   (char*)"V.GetInclusive() -> int\nC++: int GetInclusive()\n\nInclude the line in the threshold.  Essentially whether the\nthreshold operation uses > versus >=.\n"},
  {(char*)"AddColumnToThreshold", PyvtkBivariateLinearTableThreshold_AddColumnToThreshold, 1,
   (char*)"V.AddColumnToThreshold(int, int)\nC++: void AddColumnToThreshold(vtkIdType column,\n    vtkIdType component)\n\nAdd a numeric column to the pair of columns to be thresholded. \nCall twice.\n"},
  {(char*)"GetNumberOfColumnsToThreshold", PyvtkBivariateLinearTableThreshold_GetNumberOfColumnsToThreshold, 1,
   (char*)"V.GetNumberOfColumnsToThreshold() -> int\nC++: int GetNumberOfColumnsToThreshold()\n\nReturn how many columns have been added.  Hopefully 2.\n"},
  {(char*)"GetColumnToThreshold", PyvtkBivariateLinearTableThreshold_GetColumnToThreshold, 1,
   (char*)"V.GetColumnToThreshold(int, int, int)\nC++: void GetColumnToThreshold(vtkIdType idx, vtkIdType &column,\n    vtkIdType &component)\n\nReturn the column number from the input table for the idx'th\nadded column.\n"},
  {(char*)"ClearColumnsToThreshold", PyvtkBivariateLinearTableThreshold_ClearColumnsToThreshold, 1,
   (char*)"V.ClearColumnsToThreshold()\nC++: void ClearColumnsToThreshold()\n\nReset the columns to be thresholded.\n"},
  {(char*)"GetSelectedRowIds", PyvtkBivariateLinearTableThreshold_GetSelectedRowIds, 1,
   (char*)"V.GetSelectedRowIds(int) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetSelectedRowIds(int selection=0)\n\nGet the output as a table of row ids.\n"},
  {(char*)"Initialize", PyvtkBivariateLinearTableThreshold_Initialize, 1,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nReset the columns to threshold, column ranges, etc.\n"},
  {(char*)"AddLineEquation", PyvtkBivariateLinearTableThreshold_AddLineEquation, 1,
   (char*)"V.AddLineEquation(float, float, float)\nC++: void AddLineEquation(double a, double b, double c)\n\nAdd a line for thresholding in implicit form (ax + by + c = 0)\n"},
  {(char*)"ClearLineEquations", PyvtkBivariateLinearTableThreshold_ClearLineEquations, 1,
   (char*)"V.ClearLineEquations()\nC++: void ClearLineEquations()\n\nReset the list of line equations.\n"},
  {(char*)"GetLinearThresholdType", PyvtkBivariateLinearTableThreshold_GetLinearThresholdType, 1,
   (char*)"V.GetLinearThresholdType() -> int\nC++: int GetLinearThresholdType()\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {(char*)"SetLinearThresholdType", PyvtkBivariateLinearTableThreshold_SetLinearThresholdType, 1,
   (char*)"V.SetLinearThresholdType(int)\nC++: void SetLinearThresholdType(int a)\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {(char*)"SetLinearThresholdTypeToAbove", PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToAbove, 1,
   (char*)"V.SetLinearThresholdTypeToAbove()\nC++: void SetLinearThresholdTypeToAbove()\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {(char*)"SetLinearThresholdTypeToBelow", PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToBelow, 1,
   (char*)"V.SetLinearThresholdTypeToBelow()\nC++: void SetLinearThresholdTypeToBelow()\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {(char*)"SetLinearThresholdTypeToNear", PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToNear, 1,
   (char*)"V.SetLinearThresholdTypeToNear()\nC++: void SetLinearThresholdTypeToNear()\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {(char*)"SetLinearThresholdTypeToBetween", PyvtkBivariateLinearTableThreshold_SetLinearThresholdTypeToBetween, 1,
   (char*)"V.SetLinearThresholdTypeToBetween()\nC++: void SetLinearThresholdTypeToBetween()\n\nSet the threshold type.  Above: find all rows that are above the\nspecified lines.  Below: find all rows that are below the\nspecified lines.  Near: find all rows that are near the specified\nlines.  Between: find all rows that are between the specified\nlines.\n"},
  {(char*)"SetColumnRanges", PyvtkBivariateLinearTableThreshold_SetColumnRanges, 1,
   (char*)"V.SetColumnRanges(float, float)\nC++: void SetColumnRanges(double, double)\nV.SetColumnRanges((float, float))\nC++: void SetColumnRanges(double a[2])\n\n"},
  {(char*)"GetColumnRanges", PyvtkBivariateLinearTableThreshold_GetColumnRanges, 1,
   (char*)"V.GetColumnRanges() -> (float, float)\nC++: double *GetColumnRanges()\n\n"},
  {(char*)"SetDistanceThreshold", PyvtkBivariateLinearTableThreshold_SetDistanceThreshold, 1,
   (char*)"V.SetDistanceThreshold(float)\nC++: void SetDistanceThreshold(double a)\n\nThe Cartesian distance within which a point will pass the near\nthreshold.\n"},
  {(char*)"GetDistanceThreshold", PyvtkBivariateLinearTableThreshold_GetDistanceThreshold, 1,
   (char*)"V.GetDistanceThreshold() -> float\nC++: double GetDistanceThreshold()\n\nThe Cartesian distance within which a point will pass the near\nthreshold.\n"},
  {(char*)"SetUseNormalizedDistance", PyvtkBivariateLinearTableThreshold_SetUseNormalizedDistance, 1,
   (char*)"V.SetUseNormalizedDistance(int)\nC++: void SetUseNormalizedDistance(int a)\n\nRenormalize the space of the data such that the X and Y axes are\n\"square\" over the specified ColumnRanges.  This essentially\nscales the data space so that ColumnRanges[1]-ColumnRanges[0] =\n1.0 and ColumnRanges[3]-ColumnRanges[2] = 1.0.  Used for scatter\nplot distance calculations.  Be sure to set DistanceThreshold\naccordingly, when used.\n"},
  {(char*)"GetUseNormalizedDistance", PyvtkBivariateLinearTableThreshold_GetUseNormalizedDistance, 1,
   (char*)"V.GetUseNormalizedDistance() -> int\nC++: int GetUseNormalizedDistance()\n\nRenormalize the space of the data such that the X and Y axes are\n\"square\" over the specified ColumnRanges.  This essentially\nscales the data space so that ColumnRanges[1]-ColumnRanges[0] =\n1.0 and ColumnRanges[3]-ColumnRanges[2] = 1.0.  Used for scatter\nplot distance calculations.  Be sure to set DistanceThreshold\naccordingly, when used.\n"},
  {(char*)"UseNormalizedDistanceOn", PyvtkBivariateLinearTableThreshold_UseNormalizedDistanceOn, 1,
   (char*)"V.UseNormalizedDistanceOn()\nC++: void UseNormalizedDistanceOn()\n\nRenormalize the space of the data such that the X and Y axes are\n\"square\" over the specified ColumnRanges.  This essentially\nscales the data space so that ColumnRanges[1]-ColumnRanges[0] =\n1.0 and ColumnRanges[3]-ColumnRanges[2] = 1.0.  Used for scatter\nplot distance calculations.  Be sure to set DistanceThreshold\naccordingly, when used.\n"},
  {(char*)"UseNormalizedDistanceOff", PyvtkBivariateLinearTableThreshold_UseNormalizedDistanceOff, 1,
   (char*)"V.UseNormalizedDistanceOff()\nC++: void UseNormalizedDistanceOff()\n\nRenormalize the space of the data such that the X and Y axes are\n\"square\" over the specified ColumnRanges.  This essentially\nscales the data space so that ColumnRanges[1]-ColumnRanges[0] =\n1.0 and ColumnRanges[3]-ColumnRanges[2] = 1.0.  Used for scatter\nplot distance calculations.  Be sure to set DistanceThreshold\naccordingly, when used.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBivariateLinearTableThreshold_StaticNew()
{
  return vtkBivariateLinearTableThreshold::New();
}

PyObject *PyVTKClass_vtkBivariateLinearTableThresholdNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBivariateLinearTableThreshold_StaticNew,
    PyvtkBivariateLinearTableThreshold_Methods,
    "vtkBivariateLinearTableThreshold", modulename,
    NULL, NULL,
    PyvtkBivariateLinearTableThreshold_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"OUTPUT_ROW_IDS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"OUTPUT_ROW_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"BLT_ABOVE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"BLT_BELOW", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"BLT_NEAR", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"BLT_BETWEEN", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkBivariateLinearTableThreshold_Doc()
{
  static const char *docstring[] = {
    "vtkBivariateLinearTableThreshold - performs line-based thresholding\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "Class for filtering the rows of a two numeric columns of a vtkTable. \nThe columns are treated as the two variables of a line.  This filter\nwill then iterate through the rows of the table determining if X,Y\nvalues pairs are above/below/between/near one or more lines.\n\nThe \"between\" mode checks to see if a row is contained within the\nconvex hull of all of the specified lines.  The \"near\" mode checks",
    " if\na row is within a distance threshold two one of the specified lines. \nThis class is used in conjunction with various plotting classes, so\nit is useful to rescale the X,Y axes to a particular range of values.\n Distance comparisons can be performed in the scaled space by setting\nthe CustomRanges ivar and enabling UseNormalizedDistance.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBivariateLinearTableThreshold(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBivariateLinearTableThresholdNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBivariateLinearTableThreshold", o) != 0)
    {
    Py_DECREF(o);
    }

}

