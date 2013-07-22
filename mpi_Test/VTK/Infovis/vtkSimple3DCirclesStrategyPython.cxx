// python wrapper for vtkSimple3DCirclesStrategy
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
#include "vtkVariant.h"
#include "vtkSimple3DCirclesStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSimple3DCirclesStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSimple3DCirclesStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSimple3DCirclesStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSimple3DCirclesStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkGraphLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
#endif

static const char **PyvtkSimple3DCirclesStrategy_Doc();


static PyObject *
PyvtkSimple3DCirclesStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

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
      tempr = op->vtkSimple3DCirclesStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

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
      tempr = op->vtkSimple3DCirclesStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  vtkSimple3DCirclesStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSimple3DCirclesStrategy::NewInstance();
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
PyvtkSimple3DCirclesStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSimple3DCirclesStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSimple3DCirclesStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMethod(temp0);
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::SetMethod(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMethod();
      }
    else
      {
      tempr = op->vtkSimple3DCirclesStrategy::GetMethod();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadius();
      }
    else
      {
      tempr = op->vtkSimple3DCirclesStrategy::GetRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeight(temp0);
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::SetHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeight();
      }
    else
      {
      tempr = op->vtkSimple3DCirclesStrategy::GetHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSimple3DCirclesStrategy_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSimple3DCirclesStrategy_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSimple3DCirclesStrategy_SetOrigin_s1(self, args);
    case 1:
      return PyvtkSimple3DCirclesStrategy_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkSimple3DCirclesStrategy_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrigin();
      }
    else
      {
      tempr = op->vtkSimple3DCirclesStrategy::GetOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

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
      op->SetDirection(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::SetDirection(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSimple3DCirclesStrategy_SetDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetDirection(temp0);
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::SetDirection(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSimple3DCirclesStrategy_SetDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSimple3DCirclesStrategy_SetDirection_s1(self, args);
    case 1:
      return PyvtkSimple3DCirclesStrategy_SetDirection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDirection");
  return NULL;
}



static PyObject *
PyvtkSimple3DCirclesStrategy_GetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDirection();
      }
    else
      {
      tempr = op->vtkSimple3DCirclesStrategy::GetDirection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetMarkedStartVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkedStartVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      op->SetMarkedStartVertices(temp0);
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::SetMarkedStartVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetMarkedStartVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkedStartVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  vtkAbstractArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMarkedStartVertices();
      }
    else
      {
      tempr = op->vtkSimple3DCirclesStrategy::GetMarkedStartVertices();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetMarkedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetMarkedValue(*temp0);
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::SetMarkedValue(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetMarkedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  vtkVariant tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMarkedValue();
      }
    else
      {
      tempr = op->vtkSimple3DCirclesStrategy::GetMarkedValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetForceToUseUniversalStartPointsFinder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceToUseUniversalStartPointsFinder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForceToUseUniversalStartPointsFinder(temp0);
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::SetForceToUseUniversalStartPointsFinder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetForceToUseUniversalStartPointsFinder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceToUseUniversalStartPointsFinder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetForceToUseUniversalStartPointsFinder();
      }
    else
      {
      tempr = op->vtkSimple3DCirclesStrategy::GetForceToUseUniversalStartPointsFinder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_ForceToUseUniversalStartPointsFinderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceToUseUniversalStartPointsFinderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceToUseUniversalStartPointsFinderOn();
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::ForceToUseUniversalStartPointsFinderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_ForceToUseUniversalStartPointsFinderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceToUseUniversalStartPointsFinderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceToUseUniversalStartPointsFinderOff();
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::ForceToUseUniversalStartPointsFinderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetAutoHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoHeight(temp0);
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::SetAutoHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetAutoHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutoHeight();
      }
    else
      {
      tempr = op->vtkSimple3DCirclesStrategy::GetAutoHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_AutoHeightOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoHeightOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoHeightOn();
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::AutoHeightOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_AutoHeightOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoHeightOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoHeightOff();
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::AutoHeightOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetMinimumRadian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumRadian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumRadian(temp0);
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::SetMinimumRadian(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetMinimumRadian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumRadian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumRadian();
      }
    else
      {
      tempr = op->vtkSimple3DCirclesStrategy::GetMinimumRadian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetMinimumDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumDegree(temp0);
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::SetMinimumDegree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetMinimumDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumDegree();
      }
    else
      {
      tempr = op->vtkSimple3DCirclesStrategy::GetMinimumDegree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetHierarchicalLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  vtkIntArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIntArray"))
    {
    if (ap.IsBound())
      {
      op->SetHierarchicalLayers(temp0);
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::SetHierarchicalLayers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetHierarchicalLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  vtkIntArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHierarchicalLayers();
      }
    else
      {
      tempr = op->vtkSimple3DCirclesStrategy::GetHierarchicalLayers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetHierarchicalOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->SetHierarchicalOrder(temp0);
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::SetHierarchicalOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetHierarchicalOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  vtkIdTypeArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHierarchicalOrder();
      }
    else
      {
      tempr = op->vtkSimple3DCirclesStrategy::GetHierarchicalOrder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Layout();
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::Layout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  vtkGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    if (ap.IsBound())
      {
      op->SetGraph(temp0);
      }
    else
      {
      op->vtkSimple3DCirclesStrategy::SetGraph(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSimple3DCirclesStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkSimple3DCirclesStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSimple3DCirclesStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSimple3DCirclesStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSimple3DCirclesStrategy\nC++: vtkSimple3DCirclesStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSimple3DCirclesStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSimple3DCirclesStrategy\nC++: vtkSimple3DCirclesStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMethod", PyvtkSimple3DCirclesStrategy_SetMethod, 1,
   (char*)"V.SetMethod(int)\nC++: void SetMethod(int a)\n\nSet or get cicrle generating method\n(FixedRadiusMethod/FixedDistanceMethod). Default is\nFixedRadiusMethod.\n"},
  {(char*)"GetMethod", PyvtkSimple3DCirclesStrategy_GetMethod, 1,
   (char*)"V.GetMethod() -> int\nC++: int GetMethod()\n\nSet or get cicrle generating method\n(FixedRadiusMethod/FixedDistanceMethod). Default is\nFixedRadiusMethod.\n"},
  {(char*)"SetRadius", PyvtkSimple3DCirclesStrategy_SetRadius, 1,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double a)\n\nIf Method is FixedRadiusMethod: Set or get the radius of the\ncircles. If Method is FixedDistanceMethod: Set or get the\ndistance of the points in the circle.\n"},
  {(char*)"GetRadius", PyvtkSimple3DCirclesStrategy_GetRadius, 1,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nIf Method is FixedRadiusMethod: Set or get the radius of the\ncircles. If Method is FixedDistanceMethod: Set or get the\ndistance of the points in the circle.\n"},
  {(char*)"SetHeight", PyvtkSimple3DCirclesStrategy_SetHeight, 1,
   (char*)"V.SetHeight(float)\nC++: void SetHeight(double a)\n\nSet or get the vertical (local z) distance between the circles.\nIf AutoHeight is on, this is the minimal height between the\ncircle layers\n"},
  {(char*)"GetHeight", PyvtkSimple3DCirclesStrategy_GetHeight, 1,
   (char*)"V.GetHeight() -> float\nC++: double GetHeight()\n\nSet or get the vertical (local z) distance between the circles.\nIf AutoHeight is on, this is the minimal height between the\ncircle layers\n"},
  {(char*)"SetOrigin", PyvtkSimple3DCirclesStrategy_SetOrigin, 1,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {(char*)"GetOrigin", PyvtkSimple3DCirclesStrategy_GetOrigin, 1,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {(char*)"SetDirection", PyvtkSimple3DCirclesStrategy_SetDirection, 1,
   (char*)"V.SetDirection(float, float, float)\nC++: virtual void SetDirection(double dx, double dy, double dz)\nV.SetDirection([float, float, float])\nC++: virtual void SetDirection(double d[3])\n\nSet or get the normal vector of the circles plain. The height is\ngrowing in this direction. The direction must not be zero vector.\nThe default vector is (0.0,0.0,1.0)\n"},
  {(char*)"GetDirection", PyvtkSimple3DCirclesStrategy_GetDirection, 1,
   (char*)"V.GetDirection() -> (float, float, float)\nC++: double *GetDirection()\n\n"},
  {(char*)"SetMarkedStartVertices", PyvtkSimple3DCirclesStrategy_SetMarkedStartVertices, 1,
   (char*)"V.SetMarkedStartVertices(vtkAbstractArray)\nC++: virtual void SetMarkedStartVertices(vtkAbstractArray *_arg)\n\nSet or get initial vertices. If MarkedStartVertices is added,\nloop is accepted in the graph. (If all of the loop start vertices\nare marked in MarkedStartVertices array.) MarkedStartVertices\nsize must be equal with the number of the vertices in the graph.\nStart vertices must be marked by MarkedValue. (E.g.: if\nMarkedValue=3 and MarkedStartPoints is { 0, 3, 5, 3 }, the start\npoints ids will be {1,3}.) )\n"},
  {(char*)"GetMarkedStartVertices", PyvtkSimple3DCirclesStrategy_GetMarkedStartVertices, 1,
   (char*)"V.GetMarkedStartVertices() -> vtkAbstractArray\nC++: vtkAbstractArray *GetMarkedStartVertices()\n\nSet or get initial vertices. If MarkedStartVertices is added,\nloop is accepted in the graph. (If all of the loop start vertices\nare marked in MarkedStartVertices array.) MarkedStartVertices\nsize must be equal with the number of the vertices in the graph.\nStart vertices must be marked by MarkedValue. (E.g.: if\nMarkedValue=3 and MarkedStartPoints is { 0, 3, 5, 3 }, the start\npoints ids will be {1,3}.) )\n"},
  {(char*)"SetMarkedValue", PyvtkSimple3DCirclesStrategy_SetMarkedValue, 1,
   (char*)"V.SetMarkedValue(vtkVariant)\nC++: virtual void SetMarkedValue(vtkVariant _arg)\n\nSet or get MarkedValue. See: MarkedStartVertices.\n"},
  {(char*)"GetMarkedValue", PyvtkSimple3DCirclesStrategy_GetMarkedValue, 1,
   (char*)"V.GetMarkedValue() -> vtkVariant\nC++: virtual vtkVariant GetMarkedValue(void)\n\nSet or get MarkedValue. See: MarkedStartVertices.\n"},
  {(char*)"SetForceToUseUniversalStartPointsFinder", PyvtkSimple3DCirclesStrategy_SetForceToUseUniversalStartPointsFinder, 1,
   (char*)"V.SetForceToUseUniversalStartPointsFinder(int)\nC++: void SetForceToUseUniversalStartPointsFinder(int a)\n\nSet or get ForceToUseUniversalStartPointsFinder. If\nForceToUseUniversalStartPointsFinder is true, MarkedStartVertices\nwon't be used. In this case the input graph must be\nvtkDirectedAcyclicGraph (Defualt: false).\n"},
  {(char*)"GetForceToUseUniversalStartPointsFinder", PyvtkSimple3DCirclesStrategy_GetForceToUseUniversalStartPointsFinder, 1,
   (char*)"V.GetForceToUseUniversalStartPointsFinder() -> int\nC++: int GetForceToUseUniversalStartPointsFinder()\n\nSet or get ForceToUseUniversalStartPointsFinder. If\nForceToUseUniversalStartPointsFinder is true, MarkedStartVertices\nwon't be used. In this case the input graph must be\nvtkDirectedAcyclicGraph (Defualt: false).\n"},
  {(char*)"ForceToUseUniversalStartPointsFinderOn", PyvtkSimple3DCirclesStrategy_ForceToUseUniversalStartPointsFinderOn, 1,
   (char*)"V.ForceToUseUniversalStartPointsFinderOn()\nC++: void ForceToUseUniversalStartPointsFinderOn()\n\nSet or get ForceToUseUniversalStartPointsFinder. If\nForceToUseUniversalStartPointsFinder is true, MarkedStartVertices\nwon't be used. In this case the input graph must be\nvtkDirectedAcyclicGraph (Defualt: false).\n"},
  {(char*)"ForceToUseUniversalStartPointsFinderOff", PyvtkSimple3DCirclesStrategy_ForceToUseUniversalStartPointsFinderOff, 1,
   (char*)"V.ForceToUseUniversalStartPointsFinderOff()\nC++: void ForceToUseUniversalStartPointsFinderOff()\n\nSet or get ForceToUseUniversalStartPointsFinder. If\nForceToUseUniversalStartPointsFinder is true, MarkedStartVertices\nwon't be used. In this case the input graph must be\nvtkDirectedAcyclicGraph (Defualt: false).\n"},
  {(char*)"SetAutoHeight", PyvtkSimple3DCirclesStrategy_SetAutoHeight, 1,
   (char*)"V.SetAutoHeight(int)\nC++: void SetAutoHeight(int a)\n\nSet or get auto height (Default: false). If AutoHeight is true,\n(r(i+1) - r(i-1))/Height will be smaller than tan(MinimumRadian).\nIf you want equal distances and parallel circles, you should turn\noff AutoHeight.\n"},
  {(char*)"GetAutoHeight", PyvtkSimple3DCirclesStrategy_GetAutoHeight, 1,
   (char*)"V.GetAutoHeight() -> int\nC++: int GetAutoHeight()\n\nSet or get auto height (Default: false). If AutoHeight is true,\n(r(i+1) - r(i-1))/Height will be smaller than tan(MinimumRadian).\nIf you want equal distances and parallel circles, you should turn\noff AutoHeight.\n"},
  {(char*)"AutoHeightOn", PyvtkSimple3DCirclesStrategy_AutoHeightOn, 1,
   (char*)"V.AutoHeightOn()\nC++: void AutoHeightOn()\n\nSet or get auto height (Default: false). If AutoHeight is true,\n(r(i+1) - r(i-1))/Height will be smaller than tan(MinimumRadian).\nIf you want equal distances and parallel circles, you should turn\noff AutoHeight.\n"},
  {(char*)"AutoHeightOff", PyvtkSimple3DCirclesStrategy_AutoHeightOff, 1,
   (char*)"V.AutoHeightOff()\nC++: void AutoHeightOff()\n\nSet or get auto height (Default: false). If AutoHeight is true,\n(r(i+1) - r(i-1))/Height will be smaller than tan(MinimumRadian).\nIf you want equal distances and parallel circles, you should turn\noff AutoHeight.\n"},
  {(char*)"SetMinimumRadian", PyvtkSimple3DCirclesStrategy_SetMinimumRadian, 1,
   (char*)"V.SetMinimumRadian(float)\nC++: void SetMinimumRadian(double a)\n\nSet or get minimum radian (used by auto height).\n"},
  {(char*)"GetMinimumRadian", PyvtkSimple3DCirclesStrategy_GetMinimumRadian, 1,
   (char*)"V.GetMinimumRadian() -> float\nC++: double GetMinimumRadian()\n\nSet or get minimum radian (used by auto height).\n"},
  {(char*)"SetMinimumDegree", PyvtkSimple3DCirclesStrategy_SetMinimumDegree, 1,
   (char*)"V.SetMinimumDegree(float)\nC++: virtual void SetMinimumDegree(double degree)\n\nSet or get minimum degree (used by auto height). There is no\nseparated minimum degree, so minimum radian will be changed.\n"},
  {(char*)"GetMinimumDegree", PyvtkSimple3DCirclesStrategy_GetMinimumDegree, 1,
   (char*)"V.GetMinimumDegree() -> float\nC++: virtual double GetMinimumDegree(void)\n\nSet or get minimum degree (used by auto height). There is no\nseparated minimum degree, so minimum radian will be changed.\n"},
  {(char*)"SetHierarchicalLayers", PyvtkSimple3DCirclesStrategy_SetHierarchicalLayers, 1,
   (char*)"V.SetHierarchicalLayers(vtkIntArray)\nC++: virtual void SetHierarchicalLayers(vtkIntArray *_arg)\n\nSet or get hierarchical layers id by vertices (An usual vertex's\nlayer id is greater or equal to zero. If a vertex is standalone,\nits layer id is -2.) If no HierarchicalLayers array is defined,\nvtkSimple3DCirclesStrategy will generate it automatically\n(default).\n"},
  {(char*)"GetHierarchicalLayers", PyvtkSimple3DCirclesStrategy_GetHierarchicalLayers, 1,
   (char*)"V.GetHierarchicalLayers() -> vtkIntArray\nC++: vtkIntArray *GetHierarchicalLayers()\n\nSet or get hierarchical layers id by vertices (An usual vertex's\nlayer id is greater or equal to zero. If a vertex is standalone,\nits layer id is -2.) If no HierarchicalLayers array is defined,\nvtkSimple3DCirclesStrategy will generate it automatically\n(default).\n"},
  {(char*)"SetHierarchicalOrder", PyvtkSimple3DCirclesStrategy_SetHierarchicalOrder, 1,
   (char*)"V.SetHierarchicalOrder(vtkIdTypeArray)\nC++: virtual void SetHierarchicalOrder(vtkIdTypeArray *_arg)\n\nSet or get hierarchical ordering of vertices (The array starts\nfrom the first vertex's id. All id must be greater or equal to\nzero!) If no HierarchicalOrder is defined,\nvtkSimple3DCirclesStrategy will generate it automatically\n(default).\n"},
  {(char*)"GetHierarchicalOrder", PyvtkSimple3DCirclesStrategy_GetHierarchicalOrder, 1,
   (char*)"V.GetHierarchicalOrder() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetHierarchicalOrder()\n\nSet or get hierarchical ordering of vertices (The array starts\nfrom the first vertex's id. All id must be greater or equal to\nzero!) If no HierarchicalOrder is defined,\nvtkSimple3DCirclesStrategy will generate it automatically\n(default).\n"},
  {(char*)"Layout", PyvtkSimple3DCirclesStrategy_Layout, 1,
   (char*)"V.Layout()\nC++: virtual void Layout(void)\n\nStandard layout method\n"},
  {(char*)"SetGraph", PyvtkSimple3DCirclesStrategy_SetGraph, 1,
   (char*)"V.SetGraph(vtkGraph)\nC++: virtual void SetGraph(vtkGraph *graph)\n\nSet graph (warning: HierarchicalOrder and HierarchicalLayers will\nset to zero. These reference counts will be decreased!)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSimple3DCirclesStrategy_StaticNew()
{
  return vtkSimple3DCirclesStrategy::New();
}

PyObject *PyVTKClass_vtkSimple3DCirclesStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSimple3DCirclesStrategy_StaticNew,
    PyvtkSimple3DCirclesStrategy_Methods,
    "vtkSimple3DCirclesStrategy", modulename,
    NULL, NULL,
    PyvtkSimple3DCirclesStrategy_Doc(),
    PyVTKClass_vtkGraphLayoutStrategyNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"FixedRadiusMethod", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"FixedDistanceMethod", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkSimple3DCirclesStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkSimple3DCirclesStrategy - places vertices on circles in 3D\n\n",
    "Superclass: vtkGraphLayoutStrategy\n\n",
    "Places vertices on circles depending on the graph vertices hierarchy\nlevel. The source graph could be vtkDirectedAcyclicGraph or\nvtkDirectedGraph if MarkedStartPoints array was added. The algorithm\ncollects the standalone points, too and take them to a separated\ncircle. If method is FixedRadiusMethod, the radius of the circles\nwill be equal. If method is FixedDistanceMethod, the distance beetwen\nt",
    "he points on circles will be equal.\n\nIn first step initial points are searched. A point is initial, if its\nin degree equal zero and out degree is greater than zero (or marked\nby MarkedStartVertices and out degree is greater than zero).\nIndependent vertices (in and out degree equal zero) are collected\nseparatelly. In second step the hierarchical level is generated for\nevery vertex. In third step th",
    "e hierarchical order is generated. If a\nvertex has no hierarchical level and it is not independent, the graph\nhas loop so the algorithm exit with error message. Finally the\nvertices positions are calculated by the hierarchical order and by\nthe vertices hierarchy levels.\n\nThanks:\n\nFerenc Nasztanovics, naszta\n\naszta.hu, Budapest University of Technology and Economics, Department\nof Structural Mechan",
    "ics\n\nReferences:\n\nin 3D rotation was used:\nhttp://en.citizendium.org/wiki/Rotation_matrix\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSimple3DCirclesStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSimple3DCirclesStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSimple3DCirclesStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

