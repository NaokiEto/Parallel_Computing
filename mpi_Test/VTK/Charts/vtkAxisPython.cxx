// python wrapper for vtkAxis
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
#include "vtkVector.h"
#include "vtkStdString.h"
#include "vtkRect.h"
#include "vtkAxis.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAxis(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAxis(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAxisNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAxisNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkAxis_Doc();


static PyObject *
PyvtkAxis_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

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
      tempr = op->vtkAxis::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

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
      tempr = op->vtkAxis::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkAxis *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAxis::NewInstance();
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
PyvtkAxis_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAxis *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAxis::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkAxis::SetPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPosition();
      }
    else
      {
      tempr = op->vtkAxis::GetPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    if (ap.IsBound())
      {
      op->SetPoint1(*temp0);
      }
    else
      {
      op->vtkAxis::SetPoint1(*temp0);
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
PyvtkAxis_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPoint1(temp0, temp1);
      }
    else
      {
      op->vtkAxis::SetPoint1(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxis_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxis_SetPoint1_s1(self, args);
    case 2:
      return PyvtkAxis_SetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return NULL;
}



static PyObject *
PyvtkAxis_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  float *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint1();
      }
    else
      {
      tempr = op->vtkAxis::GetPoint1();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetPosition1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkVector2f tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPosition1();
      }
    else
      {
      tempr = op->vtkAxis::GetPosition1();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
    {
    if (ap.IsBound())
      {
      op->SetPoint2(*temp0);
      }
    else
      {
      op->vtkAxis::SetPoint2(*temp0);
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
PyvtkAxis_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  float temp0;
  float temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPoint2(temp0, temp1);
      }
    else
      {
      op->vtkAxis::SetPoint2(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxis_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxis_SetPoint2_s1(self, args);
    case 2:
      return PyvtkAxis_SetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return NULL;
}



static PyObject *
PyvtkAxis_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  float *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint2();
      }
    else
      {
      tempr = op->vtkAxis::GetPoint2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetPosition2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkVector2f tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPosition2();
      }
    else
      {
      tempr = op->vtkAxis::GetPosition2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetNumberOfTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfTicks(temp0);
      }
    else
      {
      op->vtkAxis::SetNumberOfTicks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetNumberOfTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTicks();
      }
    else
      {
      tempr = op->vtkAxis::GetNumberOfTicks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetLabelProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelProperties();
      }
    else
      {
      tempr = op->vtkAxis::GetLabelProperties();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimum(temp0);
      }
    else
      {
      op->vtkAxis::SetMinimum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimum();
      }
    else
      {
      tempr = op->vtkAxis::GetMinimum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximum(temp0);
      }
    else
      {
      op->vtkAxis::SetMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximum();
      }
    else
      {
      tempr = op->vtkAxis::GetMaximum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRange(temp0, temp1);
      }
    else
      {
      op->vtkAxis::SetRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetMinimumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumLimit(temp0);
      }
    else
      {
      op->vtkAxis::SetMinimumLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetMinimumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumLimit();
      }
    else
      {
      tempr = op->vtkAxis::GetMinimumLimit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetMaximumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLimit(temp0);
      }
    else
      {
      op->vtkAxis::SetMaximumLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetMaximumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumLimit();
      }
    else
      {
      tempr = op->vtkAxis::GetMaximumLimit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitle(temp0);
      }
    else
      {
      op->vtkAxis::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitle();
      }
    else
      {
      tempr = op->vtkAxis::GetTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetTitleProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitleProperties();
      }
    else
      {
      tempr = op->vtkAxis::GetTitleProperties();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLogScale(temp0);
      }
    else
      {
      op->vtkAxis::SetLogScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLogScale();
      }
    else
      {
      tempr = op->vtkAxis::GetLogScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetGridVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGridVisible(temp0);
      }
    else
      {
      op->vtkAxis::SetGridVisible(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetGridVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGridVisible();
      }
    else
      {
      tempr = op->vtkAxis::GetGridVisible();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetLabelsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelsVisible(temp0);
      }
    else
      {
      op->vtkAxis::SetLabelsVisible(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetLabelsVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelsVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelsVisible();
      }
    else
      {
      tempr = op->vtkAxis::GetLabelsVisible();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPrecision(temp0);
      }
    else
      {
      op->vtkAxis::SetPrecision(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPrecision();
      }
    else
      {
      tempr = op->vtkAxis::GetPrecision();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNotation(temp0);
      }
    else
      {
      op->vtkAxis::SetNotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNotation();
      }
    else
      {
      tempr = op->vtkAxis::GetNotation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetBehavior(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBehavior");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBehavior(temp0);
      }
    else
      {
      op->vtkAxis::SetBehavior(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetBehavior(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBehavior");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBehavior();
      }
    else
      {
      tempr = op->vtkAxis::GetBehavior();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkPen *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPen();
      }
    else
      {
      tempr = op->vtkAxis::GetPen();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetGridPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkPen *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGridPen();
      }
    else
      {
      tempr = op->vtkAxis::GetGridPen();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkAxis::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkContext2D *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    if (ap.IsBound())
      {
      tempr = op->Paint(temp0);
      }
    else
      {
      tempr = op->vtkAxis::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_AutoScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoScale();
      }
    else
      {
      op->vtkAxis::AutoScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_RecalculateTickSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecalculateTickSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RecalculateTickSpacing();
      }
    else
      {
      op->vtkAxis::RecalculateTickSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetTickPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkDoubleArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickPositions();
      }
    else
      {
      tempr = op->vtkAxis::GetTickPositions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetTickPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkDoubleArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
    {
    if (ap.IsBound())
      {
      op->SetTickPositions(temp0);
      }
    else
      {
      op->vtkAxis::SetTickPositions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetTickScenePositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickScenePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkFloatArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickScenePositions();
      }
    else
      {
      tempr = op->vtkAxis::GetTickScenePositions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetTickLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickLabels();
      }
    else
      {
      tempr = op->vtkAxis::GetTickLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_SetTickLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetTickLabels(temp0);
      }
    else
      {
      op->vtkAxis::SetTickLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxis_GetBoundingRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxis *op = static_cast<vtkAxis *>(vp);

  vtkContext2D *temp0 = NULL;
  vtkRectf tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBoundingRect(temp0);
      }
    else
      {
      tempr = op->vtkAxis::GetBoundingRect(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
      }
    }

  return result;
}

static PyMethodDef PyvtkAxis_Methods[] = {
  {(char*)"GetClassName", PyvtkAxis_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAxis_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAxis_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAxis\nC++: vtkAxis *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAxis_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAxis\nC++: vtkAxis *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPosition", PyvtkAxis_SetPosition, 1,
   (char*)"V.SetPosition(int)\nC++: virtual void SetPosition(int position)\n\nGet/set the position of the axis (LEFT, BOTTOM, RIGHT, TOP,\nPARALLEL).\n"},
  {(char*)"GetPosition", PyvtkAxis_GetPosition, 1,
   (char*)"V.GetPosition() -> int\nC++: int GetPosition()\n\nGet/set the position of the axis (LEFT, BOTTOM, RIGHT, TOP,\nPARALLEL).\n"},
  {(char*)"SetPoint1", PyvtkAxis_SetPoint1, 1,
   (char*)"V.SetPoint1(vtkVector2f)\nC++: void SetPoint1(const vtkVector2f &pos)\nV.SetPoint1(float, float)\nC++: void SetPoint1(float x, float y)\n\nSet point 1 of the axis (in pixels), this is usually the origin.\n"},
  {(char*)"GetPoint1", PyvtkAxis_GetPoint1, 1,
   (char*)"V.GetPoint1() -> (float, float)\nC++: float *GetPoint1()\n\n"},
  {(char*)"GetPosition1", PyvtkAxis_GetPosition1, 1,
   (char*)"V.GetPosition1() -> vtkVector2f\nC++: vtkVector2f GetPosition1()\n\nGet point 1 of the axis (in pixels), this is usually the origin.\n"},
  {(char*)"SetPoint2", PyvtkAxis_SetPoint2, 1,
   (char*)"V.SetPoint2(vtkVector2f)\nC++: void SetPoint2(const vtkVector2f &pos)\nV.SetPoint2(float, float)\nC++: void SetPoint2(float x, float y)\n\nSet point 2 of the axis (in pixels), this is usually the\nterminus.\n"},
  {(char*)"GetPoint2", PyvtkAxis_GetPoint2, 1,
   (char*)"V.GetPoint2() -> (float, float)\nC++: float *GetPoint2()\n\n"},
  {(char*)"GetPosition2", PyvtkAxis_GetPosition2, 1,
   (char*)"V.GetPosition2() -> vtkVector2f\nC++: vtkVector2f GetPosition2()\n\nGet point 2 of the axis (in pixels), this is usually the\nterminus.\n"},
  {(char*)"SetNumberOfTicks", PyvtkAxis_SetNumberOfTicks, 1,
   (char*)"V.SetNumberOfTicks(int)\nC++: void SetNumberOfTicks(int a)\n\nSet the number of tick marks for this axis. Default is -1, which\nleads to automatic calculation of nicely spaced tick marks.\n"},
  {(char*)"GetNumberOfTicks", PyvtkAxis_GetNumberOfTicks, 1,
   (char*)"V.GetNumberOfTicks() -> int\nC++: int GetNumberOfTicks()\n\nGet the number of tick marks for this axis.\n"},
  {(char*)"GetLabelProperties", PyvtkAxis_GetLabelProperties, 1,
   (char*)"V.GetLabelProperties() -> vtkTextProperty\nC++: vtkTextProperty *GetLabelProperties()\n\nGet the vtkTextProperty that governs how the axis lables are\ndisplayed. Note that the alignment properties are not used.\n"},
  {(char*)"SetMinimum", PyvtkAxis_SetMinimum, 1,
   (char*)"V.SetMinimum(float)\nC++: virtual void SetMinimum(double minimum)\n\nSet the logical minimum value of the axis, in plot coordinates.\n"},
  {(char*)"GetMinimum", PyvtkAxis_GetMinimum, 1,
   (char*)"V.GetMinimum() -> float\nC++: double GetMinimum()\n\nGet the logical minimum value of the axis, in plot coordinates.\n"},
  {(char*)"SetMaximum", PyvtkAxis_SetMaximum, 1,
   (char*)"V.SetMaximum(float)\nC++: virtual void SetMaximum(double maximum)\n\nSet the logical maximum value of the axis, in plot coordinates.\n"},
  {(char*)"GetMaximum", PyvtkAxis_GetMaximum, 1,
   (char*)"V.GetMaximum() -> float\nC++: double GetMaximum()\n\nGet the logical maximum value of the axis, in plot coordinates.\n"},
  {(char*)"SetRange", PyvtkAxis_SetRange, 1,
   (char*)"V.SetRange(float, float)\nC++: virtual void SetRange(double minimum, double maximum)\n\nGet the logical range of the axis, in plot coordinates.\n"},
  {(char*)"SetMinimumLimit", PyvtkAxis_SetMinimumLimit, 1,
   (char*)"V.SetMinimumLimit(float)\nC++: virtual void SetMinimumLimit(double lowest)\n\nSet the logical lowest possible value for Minimum, in plot\ncoordinates.\n"},
  {(char*)"GetMinimumLimit", PyvtkAxis_GetMinimumLimit, 1,
   (char*)"V.GetMinimumLimit() -> float\nC++: double GetMinimumLimit()\n\nGet the logical lowest possible value for Minimum, in plot\ncoordinates.\n"},
  {(char*)"SetMaximumLimit", PyvtkAxis_SetMaximumLimit, 1,
   (char*)"V.SetMaximumLimit(float)\nC++: virtual void SetMaximumLimit(double highest)\n\nSet the logical highest possible value for Maximum, in plot\ncoordinates.\n"},
  {(char*)"GetMaximumLimit", PyvtkAxis_GetMaximumLimit, 1,
   (char*)"V.GetMaximumLimit() -> float\nC++: double GetMaximumLimit()\n\nGet the logical highest possible value for Maximum, in plot\ncoordinates.\n"},
  {(char*)"SetTitle", PyvtkAxis_SetTitle, 1,
   (char*)"V.SetTitle(string)\nC++: virtual void SetTitle(const vtkStdString &title)\n\nGet/set the title text of the axis.\n"},
  {(char*)"GetTitle", PyvtkAxis_GetTitle, 1,
   (char*)"V.GetTitle() -> string\nC++: virtual vtkStdString GetTitle()\n\nGet/set the title text of the axis.\n"},
  {(char*)"GetTitleProperties", PyvtkAxis_GetTitleProperties, 1,
   (char*)"V.GetTitleProperties() -> vtkTextProperty\nC++: vtkTextProperty *GetTitleProperties()\n\nGet the vtkTextProperty that governs how the axis title is\ndisplayed.\n"},
  {(char*)"SetLogScale", PyvtkAxis_SetLogScale, 1,
   (char*)"V.SetLogScale(bool)\nC++: void SetLogScale(bool a)\n\nGet/set whether the axis should use a log scale, default is\nfalse.\n"},
  {(char*)"GetLogScale", PyvtkAxis_GetLogScale, 1,
   (char*)"V.GetLogScale() -> bool\nC++: bool GetLogScale()\n\nGet/set whether the axis should use a log scale, default is\nfalse.\n"},
  {(char*)"SetGridVisible", PyvtkAxis_SetGridVisible, 1,
   (char*)"V.SetGridVisible(bool)\nC++: void SetGridVisible(bool a)\n\nGet/set whether the axis grid lines should be drawn, default is\ntrue.\n"},
  {(char*)"GetGridVisible", PyvtkAxis_GetGridVisible, 1,
   (char*)"V.GetGridVisible() -> bool\nC++: bool GetGridVisible()\n\nGet/set whether the axis grid lines should be drawn, default is\ntrue.\n"},
  {(char*)"SetLabelsVisible", PyvtkAxis_SetLabelsVisible, 1,
   (char*)"V.SetLabelsVisible(bool)\nC++: void SetLabelsVisible(bool a)\n\nGet/set whether the axis labels should be visible.\n"},
  {(char*)"GetLabelsVisible", PyvtkAxis_GetLabelsVisible, 1,
   (char*)"V.GetLabelsVisible() -> bool\nC++: bool GetLabelsVisible()\n\nGet/set whether the axis labels should be visible.\n"},
  {(char*)"SetPrecision", PyvtkAxis_SetPrecision, 1,
   (char*)"V.SetPrecision(int)\nC++: virtual void SetPrecision(int precision)\n\nGet/set the numerical precision to use, default is 2.\n"},
  {(char*)"GetPrecision", PyvtkAxis_GetPrecision, 1,
   (char*)"V.GetPrecision() -> int\nC++: int GetPrecision()\n\nGet/set the numerical precision to use, default is 2.\n"},
  {(char*)"SetNotation", PyvtkAxis_SetNotation, 1,
   (char*)"V.SetNotation(int)\nC++: virtual void SetNotation(int notation)\n\nGet/set the numerical notation, standard, scientific or mixed (0,\n1, 2).\n"},
  {(char*)"GetNotation", PyvtkAxis_GetNotation, 1,
   (char*)"V.GetNotation() -> int\nC++: int GetNotation()\n\nGet/set the numerical notation, standard, scientific or mixed (0,\n1, 2).\n"},
  {(char*)"SetBehavior", PyvtkAxis_SetBehavior, 1,
   (char*)"V.SetBehavior(int)\nC++: void SetBehavior(int a)\n\nGet/set the behavior of the axis (auto, fixed, custom). Default\nis 0 (auto).\n"},
  {(char*)"GetBehavior", PyvtkAxis_GetBehavior, 1,
   (char*)"V.GetBehavior() -> int\nC++: int GetBehavior()\n\nGet/set the behavior of the axis (auto, fixed, custom). Default\nis 0 (auto).\n"},
  {(char*)"GetPen", PyvtkAxis_GetPen, 1,
   (char*)"V.GetPen() -> vtkPen\nC++: vtkPen *GetPen()\n\nGet a pointer to the vtkPen object that controls the way this\naxis is drawn.\n"},
  {(char*)"GetGridPen", PyvtkAxis_GetGridPen, 1,
   (char*)"V.GetGridPen() -> vtkPen\nC++: vtkPen *GetGridPen()\n\nGet a pointer to the vtkPen object that controls the way this\naxis is drawn.\n"},
  {(char*)"Update", PyvtkAxis_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nUpdate the geometry of the axis. Takes care of setting up the\ntick mark locations etc. Should be called by the scene before\nrendering.\n"},
  {(char*)"Paint", PyvtkAxis_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the axis, called whenever the axis needs to be\ndrawn.\n"},
  {(char*)"AutoScale", PyvtkAxis_AutoScale, 1,
   (char*)"V.AutoScale()\nC++: virtual void AutoScale()\n\nUse this function to autoscale the axes after setting the minimum\nand maximum values. This will cause the axes to select the nicest\nnumbers that enclose the minimum and maximum values, and to\nselect an appropriate number of tick marks.\n"},
  {(char*)"RecalculateTickSpacing", PyvtkAxis_RecalculateTickSpacing, 1,
   (char*)"V.RecalculateTickSpacing()\nC++: virtual void RecalculateTickSpacing()\n\nRecalculate the spacing of the tick marks - typically useful to\ndo after scaling the axis.\n"},
  {(char*)"GetTickPositions", PyvtkAxis_GetTickPositions, 1,
   (char*)"V.GetTickPositions() -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetTickPositions()\n\nAn array with the positions of the tick marks along the axis\nline. The positions are specified in the plot coordinates of the\naxis.\n"},
  {(char*)"SetTickPositions", PyvtkAxis_SetTickPositions, 1,
   (char*)"V.SetTickPositions(vtkDoubleArray)\nC++: virtual void SetTickPositions(vtkDoubleArray *positions)\n\nSet the tick positions (in plot coordinates).\n"},
  {(char*)"GetTickScenePositions", PyvtkAxis_GetTickScenePositions, 1,
   (char*)"V.GetTickScenePositions() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetTickScenePositions()\n\nAn array with the positions of the tick marks along the axis\nline. The positions are specified in scene coordinates.\n"},
  {(char*)"GetTickLabels", PyvtkAxis_GetTickLabels, 1,
   (char*)"V.GetTickLabels() -> vtkStringArray\nC++: virtual vtkStringArray *GetTickLabels()\n\nA string array containing the tick labels for the axis.\n"},
  {(char*)"SetTickLabels", PyvtkAxis_SetTickLabels, 1,
   (char*)"V.SetTickLabels(vtkStringArray)\nC++: virtual void SetTickLabels(vtkStringArray *labels)\n\nSet the tick labels for the axis.\n"},
  {(char*)"GetBoundingRect", PyvtkAxis_GetBoundingRect, 1,
   (char*)"V.GetBoundingRect(vtkContext2D) -> vtkRectf\nC++: vtkRectf GetBoundingRect(vtkContext2D *painter)\n\nRequest the space the axes require to be drawn. This is returned\nas a vtkRectf, with the corner being the offset from Point1, and\nthe width/ height being the total width/height required by the\naxis. In order to ensure the numbers are correct, Update() should\nbe called on the axis.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAxis_StaticNew()
{
  return vtkAxis::New();
}

PyObject *PyVTKClass_vtkAxisNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAxis_StaticNew,
    PyvtkAxis_Methods,
    "vtkAxis", modulename,
    NULL, NULL,
    PyvtkAxis_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"LEFT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"BOTTOM", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"RIGHT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"TOP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"PARALLEL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"STANDARD", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"SCIENTIFIC", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"MIXED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"AUTO", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"FIXED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"CUSTOM", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkAxis_Doc()
{
  static const char *docstring[] = {
    "vtkAxis - takes care of drawing 2D axes\n\n",
    "Superclass: vtkContextItem\n\n",
    "The vtkAxis is drawn in screen coordinates. It is usually one of the\nlast elements of a chart to be drawn. It renders the axis label, tick\nmarks and tick labels.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAxis(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAxisNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAxis", o) != 0)
    {
    Py_DECREF(o);
    }

}

