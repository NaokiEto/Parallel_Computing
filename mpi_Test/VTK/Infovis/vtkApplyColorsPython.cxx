// python wrapper for vtkApplyColors
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
#include "vtkApplyColors.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkApplyColors(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkApplyColors(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkApplyColorsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkApplyColorsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkApplyColors_Doc();


static PyObject *
PyvtkApplyColors_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

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
      tempr = op->vtkApplyColors::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

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
      tempr = op->vtkApplyColors::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  vtkApplyColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkApplyColors::NewInstance();
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
PyvtkApplyColors_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkApplyColors *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkApplyColors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetPointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetPointLookupTable(temp0);
      }
    else
      {
      op->vtkApplyColors::SetPointLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_GetPointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  vtkScalarsToColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointLookupTable();
      }
    else
      {
      tempr = op->vtkApplyColors::GetPointLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetUsePointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUsePointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUsePointLookupTable(temp0);
      }
    else
      {
      op->vtkApplyColors::SetUsePointLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_GetUsePointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsePointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUsePointLookupTable();
      }
    else
      {
      tempr = op->vtkApplyColors::GetUsePointLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_UsePointLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsePointLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UsePointLookupTableOn();
      }
    else
      {
      op->vtkApplyColors::UsePointLookupTableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_UsePointLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsePointLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UsePointLookupTableOff();
      }
    else
      {
      op->vtkApplyColors::UsePointLookupTableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetScalePointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalePointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalePointLookupTable(temp0);
      }
    else
      {
      op->vtkApplyColors::SetScalePointLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_GetScalePointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalePointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalePointLookupTable();
      }
    else
      {
      tempr = op->vtkApplyColors::GetScalePointLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_ScalePointLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalePointLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalePointLookupTableOn();
      }
    else
      {
      op->vtkApplyColors::ScalePointLookupTableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_ScalePointLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalePointLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalePointLookupTableOff();
      }
    else
      {
      op->vtkApplyColors::ScalePointLookupTableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetDefaultPointColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

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
      op->SetDefaultPointColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkApplyColors::SetDefaultPointColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkApplyColors_SetDefaultPointColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultPointColor(temp0);
      }
    else
      {
      op->vtkApplyColors::SetDefaultPointColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkApplyColors_SetDefaultPointColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkApplyColors_SetDefaultPointColor_s1(self, args);
    case 1:
      return PyvtkApplyColors_SetDefaultPointColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDefaultPointColor");
  return NULL;
}



static PyObject *
PyvtkApplyColors_GetDefaultPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultPointColor();
      }
    else
      {
      tempr = op->vtkApplyColors::GetDefaultPointColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetDefaultPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultPointOpacity(temp0);
      }
    else
      {
      op->vtkApplyColors::SetDefaultPointOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_GetDefaultPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultPointOpacity();
      }
    else
      {
      tempr = op->vtkApplyColors::GetDefaultPointOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetSelectedPointColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

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
      op->SetSelectedPointColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkApplyColors::SetSelectedPointColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkApplyColors_SetSelectedPointColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSelectedPointColor(temp0);
      }
    else
      {
      op->vtkApplyColors::SetSelectedPointColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkApplyColors_SetSelectedPointColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkApplyColors_SetSelectedPointColor_s1(self, args);
    case 1:
      return PyvtkApplyColors_SetSelectedPointColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectedPointColor");
  return NULL;
}



static PyObject *
PyvtkApplyColors_GetSelectedPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedPointColor();
      }
    else
      {
      tempr = op->vtkApplyColors::GetSelectedPointColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetSelectedPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectedPointOpacity(temp0);
      }
    else
      {
      op->vtkApplyColors::SetSelectedPointOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_GetSelectedPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedPointOpacity();
      }
    else
      {
      tempr = op->vtkApplyColors::GetSelectedPointOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetPointColorOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointColorOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointColorOutputArrayName(temp0);
      }
    else
      {
      op->vtkApplyColors::SetPointColorOutputArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_GetPointColorOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointColorOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointColorOutputArrayName();
      }
    else
      {
      tempr = op->vtkApplyColors::GetPointColorOutputArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetCellLookupTable(temp0);
      }
    else
      {
      op->vtkApplyColors::SetCellLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_GetCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  vtkScalarsToColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellLookupTable();
      }
    else
      {
      tempr = op->vtkApplyColors::GetCellLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetUseCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseCellLookupTable(temp0);
      }
    else
      {
      op->vtkApplyColors::SetUseCellLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_GetUseCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseCellLookupTable();
      }
    else
      {
      tempr = op->vtkApplyColors::GetUseCellLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_UseCellLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCellLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCellLookupTableOn();
      }
    else
      {
      op->vtkApplyColors::UseCellLookupTableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_UseCellLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCellLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCellLookupTableOff();
      }
    else
      {
      op->vtkApplyColors::UseCellLookupTableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetScaleCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleCellLookupTable(temp0);
      }
    else
      {
      op->vtkApplyColors::SetScaleCellLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_GetScaleCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleCellLookupTable();
      }
    else
      {
      tempr = op->vtkApplyColors::GetScaleCellLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_ScaleCellLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleCellLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaleCellLookupTableOn();
      }
    else
      {
      op->vtkApplyColors::ScaleCellLookupTableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_ScaleCellLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleCellLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaleCellLookupTableOff();
      }
    else
      {
      op->vtkApplyColors::ScaleCellLookupTableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetDefaultCellColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

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
      op->SetDefaultCellColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkApplyColors::SetDefaultCellColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkApplyColors_SetDefaultCellColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultCellColor(temp0);
      }
    else
      {
      op->vtkApplyColors::SetDefaultCellColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkApplyColors_SetDefaultCellColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkApplyColors_SetDefaultCellColor_s1(self, args);
    case 1:
      return PyvtkApplyColors_SetDefaultCellColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDefaultCellColor");
  return NULL;
}



static PyObject *
PyvtkApplyColors_GetDefaultCellColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultCellColor();
      }
    else
      {
      tempr = op->vtkApplyColors::GetDefaultCellColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetDefaultCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultCellOpacity(temp0);
      }
    else
      {
      op->vtkApplyColors::SetDefaultCellOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_GetDefaultCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultCellOpacity();
      }
    else
      {
      tempr = op->vtkApplyColors::GetDefaultCellOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetSelectedCellColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

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
      op->SetSelectedCellColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkApplyColors::SetSelectedCellColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkApplyColors_SetSelectedCellColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSelectedCellColor(temp0);
      }
    else
      {
      op->vtkApplyColors::SetSelectedCellColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkApplyColors_SetSelectedCellColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkApplyColors_SetSelectedCellColor_s1(self, args);
    case 1:
      return PyvtkApplyColors_SetSelectedCellColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectedCellColor");
  return NULL;
}



static PyObject *
PyvtkApplyColors_GetSelectedCellColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedCellColor();
      }
    else
      {
      tempr = op->vtkApplyColors::GetSelectedCellColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetSelectedCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectedCellOpacity(temp0);
      }
    else
      {
      op->vtkApplyColors::SetSelectedCellOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_GetSelectedCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedCellOpacity();
      }
    else
      {
      tempr = op->vtkApplyColors::GetSelectedCellOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetCellColorOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellColorOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellColorOutputArrayName(temp0);
      }
    else
      {
      op->vtkApplyColors::SetCellColorOutputArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_GetCellColorOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellColorOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellColorOutputArrayName();
      }
    else
      {
      tempr = op->vtkApplyColors::GetCellColorOutputArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_SetUseCurrentAnnotationColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCurrentAnnotationColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseCurrentAnnotationColor(temp0);
      }
    else
      {
      op->vtkApplyColors::SetUseCurrentAnnotationColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_GetUseCurrentAnnotationColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCurrentAnnotationColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseCurrentAnnotationColor();
      }
    else
      {
      tempr = op->vtkApplyColors::GetUseCurrentAnnotationColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_UseCurrentAnnotationColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCurrentAnnotationColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCurrentAnnotationColorOn();
      }
    else
      {
      op->vtkApplyColors::UseCurrentAnnotationColorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyColors_UseCurrentAnnotationColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCurrentAnnotationColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCurrentAnnotationColorOff();
      }
    else
      {
      op->vtkApplyColors::UseCurrentAnnotationColorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkApplyColors_Methods[] = {
  {(char*)"GetClassName", PyvtkApplyColors_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkApplyColors_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkApplyColors_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkApplyColors\nC++: vtkApplyColors *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkApplyColors_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkApplyColors\nC++: vtkApplyColors *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPointLookupTable", PyvtkApplyColors_SetPointLookupTable, 1,
   (char*)"V.SetPointLookupTable(vtkScalarsToColors)\nC++: virtual void SetPointLookupTable(vtkScalarsToColors *lut)\n\nThe lookup table to use for point colors. This is only used if\ninput array 0 is set and UsePointLookupTable is on.\n"},
  {(char*)"GetPointLookupTable", PyvtkApplyColors_GetPointLookupTable, 1,
   (char*)"V.GetPointLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetPointLookupTable()\n\nThe lookup table to use for point colors. This is only used if\ninput array 0 is set and UsePointLookupTable is on.\n"},
  {(char*)"SetUsePointLookupTable", PyvtkApplyColors_SetUsePointLookupTable, 1,
   (char*)"V.SetUsePointLookupTable(bool)\nC++: void SetUsePointLookupTable(bool a)\n\nIf on, uses the point lookup table to set the colors of\nunannotated, unselected elements of the data.\n"},
  {(char*)"GetUsePointLookupTable", PyvtkApplyColors_GetUsePointLookupTable, 1,
   (char*)"V.GetUsePointLookupTable() -> bool\nC++: bool GetUsePointLookupTable()\n\nIf on, uses the point lookup table to set the colors of\nunannotated, unselected elements of the data.\n"},
  {(char*)"UsePointLookupTableOn", PyvtkApplyColors_UsePointLookupTableOn, 1,
   (char*)"V.UsePointLookupTableOn()\nC++: void UsePointLookupTableOn()\n\nIf on, uses the point lookup table to set the colors of\nunannotated, unselected elements of the data.\n"},
  {(char*)"UsePointLookupTableOff", PyvtkApplyColors_UsePointLookupTableOff, 1,
   (char*)"V.UsePointLookupTableOff()\nC++: void UsePointLookupTableOff()\n\nIf on, uses the point lookup table to set the colors of\nunannotated, unselected elements of the data.\n"},
  {(char*)"SetScalePointLookupTable", PyvtkApplyColors_SetScalePointLookupTable, 1,
   (char*)"V.SetScalePointLookupTable(bool)\nC++: void SetScalePointLookupTable(bool a)\n\nIf on, uses the range of the data to scale the lookup table\nrange. Otherwise, uses the range defined in the lookup table.\n"},
  {(char*)"GetScalePointLookupTable", PyvtkApplyColors_GetScalePointLookupTable, 1,
   (char*)"V.GetScalePointLookupTable() -> bool\nC++: bool GetScalePointLookupTable()\n\nIf on, uses the range of the data to scale the lookup table\nrange. Otherwise, uses the range defined in the lookup table.\n"},
  {(char*)"ScalePointLookupTableOn", PyvtkApplyColors_ScalePointLookupTableOn, 1,
   (char*)"V.ScalePointLookupTableOn()\nC++: void ScalePointLookupTableOn()\n\nIf on, uses the range of the data to scale the lookup table\nrange. Otherwise, uses the range defined in the lookup table.\n"},
  {(char*)"ScalePointLookupTableOff", PyvtkApplyColors_ScalePointLookupTableOff, 1,
   (char*)"V.ScalePointLookupTableOff()\nC++: void ScalePointLookupTableOff()\n\nIf on, uses the range of the data to scale the lookup table\nrange. Otherwise, uses the range defined in the lookup table.\n"},
  {(char*)"SetDefaultPointColor", PyvtkApplyColors_SetDefaultPointColor, 1,
   (char*)"V.SetDefaultPointColor(float, float, float)\nC++: void SetDefaultPointColor(double, double, double)\nV.SetDefaultPointColor((float, float, float))\nC++: void SetDefaultPointColor(double a[3])\n\n"},
  {(char*)"GetDefaultPointColor", PyvtkApplyColors_GetDefaultPointColor, 1,
   (char*)"V.GetDefaultPointColor() -> (float, float, float)\nC++: double *GetDefaultPointColor()\n\n"},
  {(char*)"SetDefaultPointOpacity", PyvtkApplyColors_SetDefaultPointOpacity, 1,
   (char*)"V.SetDefaultPointOpacity(float)\nC++: void SetDefaultPointOpacity(double a)\n\nThe default point opacity for all unannotated, unselected\nelements of the data. This is used if UsePointLookupTable is off.\n"},
  {(char*)"GetDefaultPointOpacity", PyvtkApplyColors_GetDefaultPointOpacity, 1,
   (char*)"V.GetDefaultPointOpacity() -> float\nC++: double GetDefaultPointOpacity()\n\nThe default point opacity for all unannotated, unselected\nelements of the data. This is used if UsePointLookupTable is off.\n"},
  {(char*)"SetSelectedPointColor", PyvtkApplyColors_SetSelectedPointColor, 1,
   (char*)"V.SetSelectedPointColor(float, float, float)\nC++: void SetSelectedPointColor(double, double, double)\nV.SetSelectedPointColor((float, float, float))\nC++: void SetSelectedPointColor(double a[3])\n\n"},
  {(char*)"GetSelectedPointColor", PyvtkApplyColors_GetSelectedPointColor, 1,
   (char*)"V.GetSelectedPointColor() -> (float, float, float)\nC++: double *GetSelectedPointColor()\n\n"},
  {(char*)"SetSelectedPointOpacity", PyvtkApplyColors_SetSelectedPointOpacity, 1,
   (char*)"V.SetSelectedPointOpacity(float)\nC++: void SetSelectedPointOpacity(double a)\n\nThe point opacity for all selected elements of the data. This is\nused if the selection input is available.\n"},
  {(char*)"GetSelectedPointOpacity", PyvtkApplyColors_GetSelectedPointOpacity, 1,
   (char*)"V.GetSelectedPointOpacity() -> float\nC++: double GetSelectedPointOpacity()\n\nThe point opacity for all selected elements of the data. This is\nused if the selection input is available.\n"},
  {(char*)"SetPointColorOutputArrayName", PyvtkApplyColors_SetPointColorOutputArrayName, 1,
   (char*)"V.SetPointColorOutputArrayName(string)\nC++: void SetPointColorOutputArrayName(char *)\n\nThe output array name for the point color RGBA array. Default is \"vtkApplyColors\ncolor\".\n"},
  {(char*)"GetPointColorOutputArrayName", PyvtkApplyColors_GetPointColorOutputArrayName, 1,
   (char*)"V.GetPointColorOutputArrayName() -> string\nC++: char *GetPointColorOutputArrayName()\n\nThe output array name for the point color RGBA array. Default is \"vtkApplyColors\ncolor\".\n"},
  {(char*)"SetCellLookupTable", PyvtkApplyColors_SetCellLookupTable, 1,
   (char*)"V.SetCellLookupTable(vtkScalarsToColors)\nC++: virtual void SetCellLookupTable(vtkScalarsToColors *lut)\n\nThe lookup table to use for cell colors. This is only used if\ninput array 1 is set and UseCellLookupTable is on.\n"},
  {(char*)"GetCellLookupTable", PyvtkApplyColors_GetCellLookupTable, 1,
   (char*)"V.GetCellLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetCellLookupTable()\n\nThe lookup table to use for cell colors. This is only used if\ninput array 1 is set and UseCellLookupTable is on.\n"},
  {(char*)"SetUseCellLookupTable", PyvtkApplyColors_SetUseCellLookupTable, 1,
   (char*)"V.SetUseCellLookupTable(bool)\nC++: void SetUseCellLookupTable(bool a)\n\nIf on, uses the cell lookup table to set the colors of\nunannotated, unselected elements of the data.\n"},
  {(char*)"GetUseCellLookupTable", PyvtkApplyColors_GetUseCellLookupTable, 1,
   (char*)"V.GetUseCellLookupTable() -> bool\nC++: bool GetUseCellLookupTable()\n\nIf on, uses the cell lookup table to set the colors of\nunannotated, unselected elements of the data.\n"},
  {(char*)"UseCellLookupTableOn", PyvtkApplyColors_UseCellLookupTableOn, 1,
   (char*)"V.UseCellLookupTableOn()\nC++: void UseCellLookupTableOn()\n\nIf on, uses the cell lookup table to set the colors of\nunannotated, unselected elements of the data.\n"},
  {(char*)"UseCellLookupTableOff", PyvtkApplyColors_UseCellLookupTableOff, 1,
   (char*)"V.UseCellLookupTableOff()\nC++: void UseCellLookupTableOff()\n\nIf on, uses the cell lookup table to set the colors of\nunannotated, unselected elements of the data.\n"},
  {(char*)"SetScaleCellLookupTable", PyvtkApplyColors_SetScaleCellLookupTable, 1,
   (char*)"V.SetScaleCellLookupTable(bool)\nC++: void SetScaleCellLookupTable(bool a)\n\nIf on, uses the range of the data to scale the lookup table\nrange. Otherwise, uses the range defined in the lookup table.\n"},
  {(char*)"GetScaleCellLookupTable", PyvtkApplyColors_GetScaleCellLookupTable, 1,
   (char*)"V.GetScaleCellLookupTable() -> bool\nC++: bool GetScaleCellLookupTable()\n\nIf on, uses the range of the data to scale the lookup table\nrange. Otherwise, uses the range defined in the lookup table.\n"},
  {(char*)"ScaleCellLookupTableOn", PyvtkApplyColors_ScaleCellLookupTableOn, 1,
   (char*)"V.ScaleCellLookupTableOn()\nC++: void ScaleCellLookupTableOn()\n\nIf on, uses the range of the data to scale the lookup table\nrange. Otherwise, uses the range defined in the lookup table.\n"},
  {(char*)"ScaleCellLookupTableOff", PyvtkApplyColors_ScaleCellLookupTableOff, 1,
   (char*)"V.ScaleCellLookupTableOff()\nC++: void ScaleCellLookupTableOff()\n\nIf on, uses the range of the data to scale the lookup table\nrange. Otherwise, uses the range defined in the lookup table.\n"},
  {(char*)"SetDefaultCellColor", PyvtkApplyColors_SetDefaultCellColor, 1,
   (char*)"V.SetDefaultCellColor(float, float, float)\nC++: void SetDefaultCellColor(double, double, double)\nV.SetDefaultCellColor((float, float, float))\nC++: void SetDefaultCellColor(double a[3])\n\n"},
  {(char*)"GetDefaultCellColor", PyvtkApplyColors_GetDefaultCellColor, 1,
   (char*)"V.GetDefaultCellColor() -> (float, float, float)\nC++: double *GetDefaultCellColor()\n\n"},
  {(char*)"SetDefaultCellOpacity", PyvtkApplyColors_SetDefaultCellOpacity, 1,
   (char*)"V.SetDefaultCellOpacity(float)\nC++: void SetDefaultCellOpacity(double a)\n\nThe default cell opacity for all unannotated, unselected elements\nof the data. This is used if UseCellLookupTable is off.\n"},
  {(char*)"GetDefaultCellOpacity", PyvtkApplyColors_GetDefaultCellOpacity, 1,
   (char*)"V.GetDefaultCellOpacity() -> float\nC++: double GetDefaultCellOpacity()\n\nThe default cell opacity for all unannotated, unselected elements\nof the data. This is used if UseCellLookupTable is off.\n"},
  {(char*)"SetSelectedCellColor", PyvtkApplyColors_SetSelectedCellColor, 1,
   (char*)"V.SetSelectedCellColor(float, float, float)\nC++: void SetSelectedCellColor(double, double, double)\nV.SetSelectedCellColor((float, float, float))\nC++: void SetSelectedCellColor(double a[3])\n\n"},
  {(char*)"GetSelectedCellColor", PyvtkApplyColors_GetSelectedCellColor, 1,
   (char*)"V.GetSelectedCellColor() -> (float, float, float)\nC++: double *GetSelectedCellColor()\n\n"},
  {(char*)"SetSelectedCellOpacity", PyvtkApplyColors_SetSelectedCellOpacity, 1,
   (char*)"V.SetSelectedCellOpacity(float)\nC++: void SetSelectedCellOpacity(double a)\n\nThe cell opacity for all selected elements of the data. This is\nused if the selection input is available.\n"},
  {(char*)"GetSelectedCellOpacity", PyvtkApplyColors_GetSelectedCellOpacity, 1,
   (char*)"V.GetSelectedCellOpacity() -> float\nC++: double GetSelectedCellOpacity()\n\nThe cell opacity for all selected elements of the data. This is\nused if the selection input is available.\n"},
  {(char*)"SetCellColorOutputArrayName", PyvtkApplyColors_SetCellColorOutputArrayName, 1,
   (char*)"V.SetCellColorOutputArrayName(string)\nC++: void SetCellColorOutputArrayName(char *)\n\nThe output array name for the cell color RGBA array. Default is \"vtkApplyColors\ncolor\".\n"},
  {(char*)"GetCellColorOutputArrayName", PyvtkApplyColors_GetCellColorOutputArrayName, 1,
   (char*)"V.GetCellColorOutputArrayName() -> string\nC++: char *GetCellColorOutputArrayName()\n\nThe output array name for the cell color RGBA array. Default is \"vtkApplyColors\ncolor\".\n"},
  {(char*)"SetUseCurrentAnnotationColor", PyvtkApplyColors_SetUseCurrentAnnotationColor, 1,
   (char*)"V.SetUseCurrentAnnotationColor(bool)\nC++: void SetUseCurrentAnnotationColor(bool a)\n\nUse the annotation to color the current annotation (i.e. the\ncurrent selection). Otherwise use the selection color attributes\nof this filter.\n"},
  {(char*)"GetUseCurrentAnnotationColor", PyvtkApplyColors_GetUseCurrentAnnotationColor, 1,
   (char*)"V.GetUseCurrentAnnotationColor() -> bool\nC++: bool GetUseCurrentAnnotationColor()\n\nUse the annotation to color the current annotation (i.e. the\ncurrent selection). Otherwise use the selection color attributes\nof this filter.\n"},
  {(char*)"UseCurrentAnnotationColorOn", PyvtkApplyColors_UseCurrentAnnotationColorOn, 1,
   (char*)"V.UseCurrentAnnotationColorOn()\nC++: void UseCurrentAnnotationColorOn()\n\nUse the annotation to color the current annotation (i.e. the\ncurrent selection). Otherwise use the selection color attributes\nof this filter.\n"},
  {(char*)"UseCurrentAnnotationColorOff", PyvtkApplyColors_UseCurrentAnnotationColorOff, 1,
   (char*)"V.UseCurrentAnnotationColorOff()\nC++: void UseCurrentAnnotationColorOff()\n\nUse the annotation to color the current annotation (i.e. the\ncurrent selection). Otherwise use the selection color attributes\nof this filter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkApplyColors_StaticNew()
{
  return vtkApplyColors::New();
}

PyObject *PyVTKClass_vtkApplyColorsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkApplyColors_StaticNew,
    PyvtkApplyColors_Methods,
    "vtkApplyColors", modulename,
    NULL, NULL,
    PyvtkApplyColors_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkApplyColors_Doc()
{
  static const char *docstring[] = {
    "vtkApplyColors - apply colors to a data set.\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "vtkApplyColors performs a coloring of the dataset using default\ncolors, lookup tables, annotations, and/or a selection. The output is\na four-component vtkUnsignedCharArray containing RGBA tuples for each\nelement in the dataset. The first input is the dataset to be colored,\nwhich may be a vtkTable, vtkGraph subclass, or vtkDataSet subclass.\nThe API of this algorithm refers to \"points\" and \"cells\". ",
    "For\nvtkGraph, the \"points\" refer to the graph vertices and \"cells\" refer\nto graph edges. For vtkTable, \"points\" refer to table rows. For\nvtkDataSet subclasses, the meaning is obvious.\n\nThe second (optional) input is a vtkAnnotationLayers object, which\nstores a list of annotation layers, with each layer holding a list of\nvtkAnnotation objects. The annotation specifies a subset of data\nalong with ot",
    "her properties, including color. For annotations with\ncolor properties, this algorithm will use the color to color\nelements, using a \"top one wins\" strategy.\n\nThe third (optional) input is a vtkSelection object, meant for\nspecifying the current selection. You can control the color of the\nselection.\n\nThe algorithm takes two input arrays, specified with\nSetInputArrayToProcess(0, 0, 0,\nvtkDataObject:",
    ":FIELD_ASSOCIATION_POINTS, name) and\nSetInputArrayToProcess(1, 0, 0,\nvtkDataObject::FIELD_ASSOCIATION_CELLS, name). These set the point\nand cell data arrays to use to color the data with the associated\nlookup table. For vtkGraph, vtkTable inputs, you would use\nFIELD_ASSOCIATION_VERTICES, FIELD_ASSOCIATION_EDGES, or\nFIELD_ASSOCIATION_ROWS as appropriate.\n\nTo use the color array generated here, you ",
    "should do the following:\n\n\n mapper->SetScalarModeToUseCellFieldData();\n mapper->SelectColorArray(\"vtkApplyColors color\");\n mapper->SetScalarVisibility(true);\n\nColors are assigned with the following priorities:  If an item is\npart of the selection, it is colored with that color. Otherwise, if\nthe item is part of an annotation, it is colored\n     with the color of the final (top) annotation in the s",
    "et of\nlayers. Otherwise, if the lookup table is used, it is colored using\nthe\n     lookup table color for the data value of the element. Otherwise\nit will be colored with the default color. \n\nNote: The opacity of an unselected item is defined by the\nmultiplication of default opacity, lookup table opacity, and\nannotation opacity, where opacity is taken as a number from 0 to 1.\nSo items will never b",
    "e more opaque than any of these three opacities.\nSelected items are always given the selection opacity directly.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkApplyColors(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkApplyColorsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkApplyColors", o) != 0)
    {
    Py_DECREF(o);
    }

}

