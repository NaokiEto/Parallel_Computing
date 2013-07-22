// python wrapper for vtkHandleRepresentation
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
#include "vtkHandleRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHandleRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHandleRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHandleRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHandleRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkHandleRepresentation_Doc();


static PyObject *
PyvtkHandleRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      tempr = op->vtkHandleRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      tempr = op->vtkHandleRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkHandleRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHandleRepresentation::NewInstance();
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
PyvtkHandleRepresentation_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->SetDisplayPosition(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::SetDisplayPosition(temp0);
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
PyvtkHandleRepresentation_GetDisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->GetDisplayPosition(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::GetDisplayPosition(temp0);
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
PyvtkHandleRepresentation_GetDisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDisplayPosition();
      }
    else
      {
      tempr = op->vtkHandleRepresentation::GetDisplayPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkHandleRepresentation_GetDisplayPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkHandleRepresentation_GetDisplayPosition_s1(self, args);
    case 0:
      return PyvtkHandleRepresentation_GetDisplayPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDisplayPosition");
  return NULL;
}



static PyObject *
PyvtkHandleRepresentation_SetWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->SetWorldPosition(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::SetWorldPosition(temp0);
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
PyvtkHandleRepresentation_GetWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->GetWorldPosition(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::GetWorldPosition(temp0);
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
PyvtkHandleRepresentation_GetWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWorldPosition();
      }
    else
      {
      tempr = op->vtkHandleRepresentation::GetWorldPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkHandleRepresentation_GetWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkHandleRepresentation_GetWorldPosition_s1(self, args);
    case 0:
      return PyvtkHandleRepresentation_GetWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetWorldPosition");
  return NULL;
}



static PyObject *
PyvtkHandleRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMinValue();
      }
    else
      {
      tempr = op->vtkHandleRepresentation::GetToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkHandleRepresentation::GetToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTolerance();
      }
    else
      {
      tempr = op->vtkHandleRepresentation::GetTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetActiveRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetActiveRepresentation(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::SetActiveRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetActiveRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActiveRepresentation();
      }
    else
      {
      tempr = op->vtkHandleRepresentation::GetActiveRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ActiveRepresentationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActiveRepresentationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ActiveRepresentationOn();
      }
    else
      {
      op->vtkHandleRepresentation::ActiveRepresentationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ActiveRepresentationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActiveRepresentationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ActiveRepresentationOff();
      }
    else
      {
      op->vtkHandleRepresentation::ActiveRepresentationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionState(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::SetInteractionState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteractionStateMinValue();
      }
    else
      {
      tempr = op->vtkHandleRepresentation::GetInteractionStateMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteractionStateMaxValue();
      }
    else
      {
      tempr = op->vtkHandleRepresentation::GetInteractionStateMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetConstrained(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstrained");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConstrained(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::SetConstrained(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetConstrained(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrained");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConstrained();
      }
    else
      {
      tempr = op->vtkHandleRepresentation::GetConstrained();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ConstrainedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConstrainedOn();
      }
    else
      {
      op->vtkHandleRepresentation::ConstrainedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ConstrainedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConstrainedOff();
      }
    else
      {
      op->vtkHandleRepresentation::ConstrainedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_CheckConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->CheckConstraint(temp0, temp1);
      }
    else
      {
      tempr = op->vtkHandleRepresentation::CheckConstraint(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkHandleRepresentation::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkPointPlacer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointPlacer"))
    {
    if (ap.IsBound())
      {
      op->SetPointPlacer(temp0);
      }
    else
      {
      op->vtkHandleRepresentation::SetPointPlacer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkPointPlacer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointPlacer();
      }
    else
      {
      tempr = op->vtkHandleRepresentation::GetPointPlacer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHandleRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkHandleRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkHandleRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkHandleRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SetDisplayPosition", PyvtkHandleRepresentation_SetDisplayPosition, 1,
   (char*)"V.SetDisplayPosition([float, float, float])\nC++: virtual void SetDisplayPosition(double pos[3])\n\nHandles usually have their coordinates set in display coordinates\n(generally by an associated widget) and internally maintain the\nposition in world coordinates. (Using world coordinates insures\nthat handles are rendered in the right position when the camera\nview changes.) These methods are often subclassed because special\nconstraint operations can be used to control the actual\npositioning.\n"},
  {(char*)"GetDisplayPosition", PyvtkHandleRepresentation_GetDisplayPosition, 1,
   (char*)"V.GetDisplayPosition([float, float, float])\nC++: virtual void GetDisplayPosition(double pos[3])\nV.GetDisplayPosition() -> (float, float, float)\nC++: virtual double *GetDisplayPosition()\n\nHandles usually have their coordinates set in display coordinates\n(generally by an associated widget) and internally maintain the\nposition in world coordinates. (Using world coordinates insures\nthat handles are rendered in the right position when the camera\nview changes.) These methods are often subclassed because special\nconstraint operations can be used to control the actual\npositioning.\n"},
  {(char*)"SetWorldPosition", PyvtkHandleRepresentation_SetWorldPosition, 1,
   (char*)"V.SetWorldPosition([float, float, float])\nC++: virtual void SetWorldPosition(double pos[3])\n\nHandles usually have their coordinates set in display coordinates\n(generally by an associated widget) and internally maintain the\nposition in world coordinates. (Using world coordinates insures\nthat handles are rendered in the right position when the camera\nview changes.) These methods are often subclassed because special\nconstraint operations can be used to control the actual\npositioning.\n"},
  {(char*)"GetWorldPosition", PyvtkHandleRepresentation_GetWorldPosition, 1,
   (char*)"V.GetWorldPosition([float, float, float])\nC++: virtual void GetWorldPosition(double pos[3])\nV.GetWorldPosition() -> (float, float, float)\nC++: virtual double *GetWorldPosition()\n\nHandles usually have their coordinates set in display coordinates\n(generally by an associated widget) and internally maintain the\nposition in world coordinates. (Using world coordinates insures\nthat handles are rendered in the right position when the camera\nview changes.) These methods are often subclassed because special\nconstraint operations can be used to control the actual\npositioning.\n"},
  {(char*)"SetTolerance", PyvtkHandleRepresentation_SetTolerance, 1,
   (char*)"V.SetTolerance(int)\nC++: void SetTolerance(int)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {(char*)"GetToleranceMinValue", PyvtkHandleRepresentation_GetToleranceMinValue, 1,
   (char*)"V.GetToleranceMinValue() -> int\nC++: int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkHandleRepresentation_GetToleranceMaxValue, 1,
   (char*)"V.GetToleranceMaxValue() -> int\nC++: int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {(char*)"GetTolerance", PyvtkHandleRepresentation_GetTolerance, 1,
   (char*)"V.GetTolerance() -> int\nC++: int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {(char*)"SetActiveRepresentation", PyvtkHandleRepresentation_SetActiveRepresentation, 1,
   (char*)"V.SetActiveRepresentation(int)\nC++: void SetActiveRepresentation(int a)\n\nFlag controls whether the widget becomes visible when the mouse\npointer moves close to it (i.e., the widget becomes active). By\ndefault, ActiveRepresentation is off and the representation is\nalways visible.\n"},
  {(char*)"GetActiveRepresentation", PyvtkHandleRepresentation_GetActiveRepresentation, 1,
   (char*)"V.GetActiveRepresentation() -> int\nC++: int GetActiveRepresentation()\n\nFlag controls whether the widget becomes visible when the mouse\npointer moves close to it (i.e., the widget becomes active). By\ndefault, ActiveRepresentation is off and the representation is\nalways visible.\n"},
  {(char*)"ActiveRepresentationOn", PyvtkHandleRepresentation_ActiveRepresentationOn, 1,
   (char*)"V.ActiveRepresentationOn()\nC++: void ActiveRepresentationOn()\n\nFlag controls whether the widget becomes visible when the mouse\npointer moves close to it (i.e., the widget becomes active). By\ndefault, ActiveRepresentation is off and the representation is\nalways visible.\n"},
  {(char*)"ActiveRepresentationOff", PyvtkHandleRepresentation_ActiveRepresentationOff, 1,
   (char*)"V.ActiveRepresentationOff()\nC++: void ActiveRepresentationOff()\n\nFlag controls whether the widget becomes visible when the mouse\npointer moves close to it (i.e., the widget becomes active). By\ndefault, ActiveRepresentation is off and the representation is\nalways visible.\n"},
  {(char*)"SetInteractionState", PyvtkHandleRepresentation_SetInteractionState, 1,
   (char*)"V.SetInteractionState(int)\nC++: void SetInteractionState(int)\n\nThe interaction state may be set from a widget (e.g.,\nHandleWidget) or other object. This controls how the interaction\nwith the widget proceeds. Normally this method is used as part of\na handshaking processwith the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"GetInteractionStateMinValue", PyvtkHandleRepresentation_GetInteractionStateMinValue, 1,
   (char*)"V.GetInteractionStateMinValue() -> int\nC++: int GetInteractionStateMinValue()\n\nThe interaction state may be set from a widget (e.g.,\nHandleWidget) or other object. This controls how the interaction\nwith the widget proceeds. Normally this method is used as part of\na handshaking processwith the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"GetInteractionStateMaxValue", PyvtkHandleRepresentation_GetInteractionStateMaxValue, 1,
   (char*)"V.GetInteractionStateMaxValue() -> int\nC++: int GetInteractionStateMaxValue()\n\nThe interaction state may be set from a widget (e.g.,\nHandleWidget) or other object. This controls how the interaction\nwith the widget proceeds. Normally this method is used as part of\na handshaking processwith the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"SetConstrained", PyvtkHandleRepresentation_SetConstrained, 1,
   (char*)"V.SetConstrained(int)\nC++: void SetConstrained(int a)\n\nSpecify whether any motions (such as scale, translate, etc.) are\nconstrained in some way (along an axis, etc.) Widgets can use\nthis to control the resulting motion.\n"},
  {(char*)"GetConstrained", PyvtkHandleRepresentation_GetConstrained, 1,
   (char*)"V.GetConstrained() -> int\nC++: int GetConstrained()\n\nSpecify whether any motions (such as scale, translate, etc.) are\nconstrained in some way (along an axis, etc.) Widgets can use\nthis to control the resulting motion.\n"},
  {(char*)"ConstrainedOn", PyvtkHandleRepresentation_ConstrainedOn, 1,
   (char*)"V.ConstrainedOn()\nC++: void ConstrainedOn()\n\nSpecify whether any motions (such as scale, translate, etc.) are\nconstrained in some way (along an axis, etc.) Widgets can use\nthis to control the resulting motion.\n"},
  {(char*)"ConstrainedOff", PyvtkHandleRepresentation_ConstrainedOff, 1,
   (char*)"V.ConstrainedOff()\nC++: void ConstrainedOff()\n\nSpecify whether any motions (such as scale, translate, etc.) are\nconstrained in some way (along an axis, etc.) Widgets can use\nthis to control the resulting motion.\n"},
  {(char*)"CheckConstraint", PyvtkHandleRepresentation_CheckConstraint, 1,
   (char*)"V.CheckConstraint(vtkRenderer, [float, float]) -> int\nC++: virtual int CheckConstraint(vtkRenderer *renderer,\n    double pos[2])\n\nMethod has to be overridden in the subclasses which has\nconstraints on placing the handle (Ex.\nvtkConstrainedPointHandleRepresentation). It should return 1 if\nthe position is within the constraint, else it should return\n0. By default it returns 1.\n"},
  {(char*)"ShallowCopy", PyvtkHandleRepresentation_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {(char*)"DeepCopy", PyvtkHandleRepresentation_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkProp)\nC++: virtual void DeepCopy(vtkProp *prop)\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {(char*)"SetRenderer", PyvtkHandleRepresentation_SetRenderer, 1,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {(char*)"GetMTime", PyvtkHandleRepresentation_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nOverload the superclasses' GetMTime() because the internal\nvtkCoordinates are used to keep the state of the representation.\n"},
  {(char*)"SetPointPlacer", PyvtkHandleRepresentation_SetPointPlacer, 1,
   (char*)"V.SetPointPlacer(vtkPointPlacer)\nC++: virtual void SetPointPlacer(vtkPointPlacer *)\n\nSet/Get the point placer. Point placers can be used to dictate\nconstraints on the placement of handles. As an example, see\nvtkBoundedPlanePointPlacer (constrains the placement of handles\nto a set of bounded planes) vtkFocalPlanePointPlacer (constrains\nplacement on the focal plane) etc. The default point placer is\nvtkPointPlacer (which does not apply any constraints, so the\nhandles are free to move anywhere).\n"},
  {(char*)"GetPointPlacer", PyvtkHandleRepresentation_GetPointPlacer, 1,
   (char*)"V.GetPointPlacer() -> vtkPointPlacer\nC++: vtkPointPlacer *GetPointPlacer()\n\nSet/Get the point placer. Point placers can be used to dictate\nconstraints on the placement of handles. As an example, see\nvtkBoundedPlanePointPlacer (constrains the placement of handles\nto a set of bounded planes) vtkFocalPlanePointPlacer (constrains\nplacement on the focal plane) etc. The default point placer is\nvtkPointPlacer (which does not apply any constraints, so the\nhandles are free to move anywhere).\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkHandleRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkHandleRepresentation_Methods,
    "vtkHandleRepresentation", modulename,
    NULL, NULL,
    PyvtkHandleRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"Outside", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"Nearby", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"Selecting", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"Translating", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"Scaling", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkHandleRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkHandleRepresentation - abstract class for representing widget\nhandles\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This class defines an API for widget handle representations. These\nrepresentations interact with vtkHandleWidget. Various\nrepresentations can be used depending on the nature of the handle.\nThe basic functionality of the handle representation is to maintain a\nposition. The position is represented via a vtkCoordinate, meaning\nthat the position can be easily obtained in a variety of coordinate\nsystem",
    "s.\n\nOptional features for this representation include an active mode (the\nwidget appears only when the mouse pointer is close to it). The\nactive distance is expressed in pixels and represents a circle in\ndisplay space.\n\nThe class may be subclassed so that alternative representations can\nbe created.  The class defines an API and a default implementation\nthat the vtkHandleWidget interacts with to re",
    "nder itself in the\nscene.\n\nCaveats:\n\nThe separation of the widget event handling and representation\nenables users and developers to create new appearances for the\nwidget. It also facilitates parallel processing, where the client\napplication handles events, and remote representations of the widget\nare slaves to the client (and do not handle events).\n\nSee Also:\n\nvtkRectilinearWipeWidget vtkWidgetRep",
    "resentation vtkAbstractWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHandleRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHandleRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHandleRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

