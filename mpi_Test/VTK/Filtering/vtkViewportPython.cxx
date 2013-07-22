// python wrapper for vtkViewport
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
#include "vtkViewport.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkViewport(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkViewport(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkViewportNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkViewportNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkViewport_Doc();


static PyObject *
PyvtkViewport_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      tempr = op->vtkViewport::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      tempr = op->vtkViewport::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkViewport *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkViewport::NewInstance();
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
PyvtkViewport_AddViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->AddViewProp(temp0);
      }
    else
      {
      op->vtkViewport::AddViewProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetViewProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkPropCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetViewProps();
      }
    else
      {
      tempr = op->vtkViewport::GetViewProps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_HasViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkProp *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      tempr = op->HasViewProp(temp0);
      }
    else
      {
      tempr = op->vtkViewport::HasViewProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_RemoveViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->RemoveViewProp(temp0);
      }
    else
      {
      op->vtkViewport::RemoveViewProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_RemoveAllViewProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllViewProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllViewProps();
      }
    else
      {
      op->vtkViewport::RemoveAllViewProps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_AddActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->AddActor2D(temp0);
      }
    else
      {
      op->vtkViewport::AddActor2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_RemoveActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->RemoveActor2D(temp0);
      }
    else
      {
      op->vtkViewport::RemoveActor2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkActor2DCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActors2D();
      }
    else
      {
      tempr = op->vtkViewport::GetActors2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_SetBackground_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->SetBackground(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewport::SetBackground(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_SetBackground_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBackground(temp0);
      }
    else
      {
      op->vtkViewport::SetBackground(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_SetBackground(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkViewport_SetBackground_s1(self, args);
    case 1:
      return PyvtkViewport_SetBackground_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBackground");
  return NULL;
}



static PyObject *
PyvtkViewport_GetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackground();
      }
    else
      {
      tempr = op->vtkViewport::GetBackground();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_SetBackground2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->SetBackground2(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewport::SetBackground2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_SetBackground2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBackground2(temp0);
      }
    else
      {
      op->vtkViewport::SetBackground2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_SetBackground2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkViewport_SetBackground2_s1(self, args);
    case 1:
      return PyvtkViewport_SetBackground2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBackground2");
  return NULL;
}



static PyObject *
PyvtkViewport_GetBackground2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackground2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackground2();
      }
    else
      {
      tempr = op->vtkViewport::GetBackground2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_SetGradientBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGradientBackground(temp0);
      }
    else
      {
      op->vtkViewport::SetGradientBackground(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetGradientBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientBackground();
      }
    else
      {
      tempr = op->vtkViewport::GetGradientBackground();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GradientBackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientBackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GradientBackgroundOn();
      }
    else
      {
      op->vtkViewport::GradientBackgroundOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GradientBackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientBackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GradientBackgroundOff();
      }
    else
      {
      op->vtkViewport::GradientBackgroundOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_SetAspect_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAspect(temp0, temp1);
      }
    else
      {
      op->vtkViewport::SetAspect(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_SetAspect_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAspect(temp0);
      }
    else
      {
      op->vtkViewport::SetAspect(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_SetAspect(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewport_SetAspect_s1(self, args);
    case 1:
      return PyvtkViewport_SetAspect_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAspect");
  return NULL;
}



static PyObject *
PyvtkViewport_GetAspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAspect();
      }
    else
      {
      tempr = op->vtkViewport::GetAspect();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_ComputeAspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeAspect();
      }
    else
      {
      op->vtkViewport::ComputeAspect();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_SetPixelAspect_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPixelAspect(temp0, temp1);
      }
    else
      {
      op->vtkViewport::SetPixelAspect(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_SetPixelAspect_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPixelAspect(temp0);
      }
    else
      {
      op->vtkViewport::SetPixelAspect(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_SetPixelAspect(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewport_SetPixelAspect_s1(self, args);
    case 1:
      return PyvtkViewport_SetPixelAspect_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPixelAspect");
  return NULL;
}



static PyObject *
PyvtkViewport_GetPixelAspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPixelAspect();
      }
    else
      {
      tempr = op->vtkViewport::GetPixelAspect();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_SetViewport_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetViewport(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkViewport::SetViewport(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_SetViewport_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetViewport(temp0);
      }
    else
      {
      op->vtkViewport::SetViewport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_SetViewport(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkViewport_SetViewport_s1(self, args);
    case 1:
      return PyvtkViewport_SetViewport_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetViewport");
  return NULL;
}



static PyObject *
PyvtkViewport_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetViewport();
      }
    else
      {
      tempr = op->vtkViewport::GetViewport();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_SetDisplayPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->SetDisplayPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewport::SetDisplayPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_SetDisplayPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDisplayPoint(temp0);
      }
    else
      {
      op->vtkViewport::SetDisplayPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_SetDisplayPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkViewport_SetDisplayPoint_s1(self, args);
    case 1:
      return PyvtkViewport_SetDisplayPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDisplayPoint");
  return NULL;
}



static PyObject *
PyvtkViewport_GetDisplayPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDisplayPoint();
      }
    else
      {
      tempr = op->vtkViewport::GetDisplayPoint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_SetViewPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->SetViewPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewport::SetViewPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_SetViewPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetViewPoint(temp0);
      }
    else
      {
      op->vtkViewport::SetViewPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_SetViewPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkViewport_SetViewPoint_s1(self, args);
    case 1:
      return PyvtkViewport_SetViewPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetViewPoint");
  return NULL;
}



static PyObject *
PyvtkViewport_GetViewPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetViewPoint();
      }
    else
      {
      tempr = op->vtkViewport::GetViewPoint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_SetWorldPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetWorldPoint(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkViewport::SetWorldPoint(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_SetWorldPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetWorldPoint(temp0);
      }
    else
      {
      op->vtkViewport::SetWorldPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_SetWorldPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkViewport_SetWorldPoint_s1(self, args);
    case 1:
      return PyvtkViewport_SetWorldPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWorldPoint");
  return NULL;
}



static PyObject *
PyvtkViewport_GetWorldPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWorldPoint();
      }
    else
      {
      tempr = op->vtkViewport::GetWorldPoint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCenter();
      }
    else
      {
      tempr = op->vtkViewport::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_IsInViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->IsInViewport(temp0, temp1);
      }
    else
      {
      tempr = op->vtkViewport::IsInViewport(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetVTKWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkWindow *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetVTKWindow();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_DisplayToView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisplayToView();
      }
    else
      {
      op->vtkViewport::DisplayToView();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_ViewToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ViewToDisplay();
      }
    else
      {
      op->vtkViewport::ViewToDisplay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_WorldToView_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WorldToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WorldToView();
      }
    else
      {
      op->vtkViewport::WorldToView();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_WorldToView_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WorldToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->WorldToView(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewport::WorldToView(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
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
PyvtkViewport_WorldToView(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkViewport_WorldToView_s1(self, args);
    case 3:
      return PyvtkViewport_WorldToView_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "WorldToView");
  return NULL;
}



static PyObject *
PyvtkViewport_ViewToWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ViewToWorld();
      }
    else
      {
      op->vtkViewport::ViewToWorld();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewport_ViewToWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->ViewToWorld(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewport::ViewToWorld(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
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
PyvtkViewport_ViewToWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkViewport_ViewToWorld_s1(self, args);
    case 3:
      return PyvtkViewport_ViewToWorld_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ViewToWorld");
  return NULL;
}



static PyObject *
PyvtkViewport_DisplayToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisplayToWorld();
      }
    else
      {
      op->vtkViewport::DisplayToWorld();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_WorldToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WorldToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WorldToDisplay();
      }
    else
      {
      op->vtkViewport::WorldToDisplay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_LocalDisplayToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LocalDisplayToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->LocalDisplayToDisplay(temp0, temp1);
      }
    else
      {
      op->vtkViewport::LocalDisplayToDisplay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_DisplayToNormalizedDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayToNormalizedDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->DisplayToNormalizedDisplay(temp0, temp1);
      }
    else
      {
      op->vtkViewport::DisplayToNormalizedDisplay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_NormalizedDisplayToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizedDisplayToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->NormalizedDisplayToViewport(temp0, temp1);
      }
    else
      {
      op->vtkViewport::NormalizedDisplayToViewport(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_ViewportToNormalizedViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewportToNormalizedViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ViewportToNormalizedViewport(temp0, temp1);
      }
    else
      {
      op->vtkViewport::ViewportToNormalizedViewport(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_NormalizedViewportToView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizedViewportToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->NormalizedViewportToView(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewport::NormalizedViewportToView(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
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
PyvtkViewport_DisplayToLocalDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayToLocalDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->DisplayToLocalDisplay(temp0, temp1);
      }
    else
      {
      op->vtkViewport::DisplayToLocalDisplay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_NormalizedDisplayToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizedDisplayToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->NormalizedDisplayToDisplay(temp0, temp1);
      }
    else
      {
      op->vtkViewport::NormalizedDisplayToDisplay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_ViewportToNormalizedDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewportToNormalizedDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ViewportToNormalizedDisplay(temp0, temp1);
      }
    else
      {
      op->vtkViewport::ViewportToNormalizedDisplay(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_NormalizedViewportToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizedViewportToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->NormalizedViewportToViewport(temp0, temp1);
      }
    else
      {
      op->vtkViewport::NormalizedViewportToViewport(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_ViewToNormalizedViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewToNormalizedViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

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
      op->ViewToNormalizedViewport(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewport::ViewToNormalizedViewport(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
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
PyvtkViewport_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSize();
      }
    else
      {
      tempr = op->vtkViewport::GetSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrigin();
      }
    else
      {
      tempr = op->vtkViewport::GetOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_PickProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  vtkAssemblyPath *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    tempr = op->PickProp(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_PickPropFrom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickPropFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double temp0;
  double temp1;
  vtkPropCollection *temp2 = NULL;
  vtkAssemblyPath *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      tempr = op->PickPropFrom(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkViewport::PickPropFrom(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetPickX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPickX();
      }
    else
      {
      tempr = op->vtkViewport::GetPickX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetPickY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPickY();
      }
    else
      {
      tempr = op->vtkViewport::GetPickY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetPickWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPickWidth();
      }
    else
      {
      tempr = op->vtkViewport::GetPickWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetPickHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPickHeight();
      }
    else
      {
      tempr = op->vtkViewport::GetPickHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetPickX1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickX1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPickX1();
      }
    else
      {
      tempr = op->vtkViewport::GetPickX1();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetPickY1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickY1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPickY1();
      }
    else
      {
      tempr = op->vtkViewport::GetPickY1();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetPickX2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickX2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPickX2();
      }
    else
      {
      tempr = op->vtkViewport::GetPickX2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetPickY2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickY2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPickY2();
      }
    else
      {
      tempr = op->vtkViewport::GetPickY2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetIsPicking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsPicking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIsPicking();
      }
    else
      {
      tempr = op->vtkViewport::GetIsPicking();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetPickResultProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickResultProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkPropCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPickResultProps();
      }
    else
      {
      tempr = op->vtkViewport::GetPickResultProps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewport_GetPickedZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetPickedZ();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkViewport_RemoveProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->RemoveProp(temp0);
      }
    else
      {
      op->vtkViewport::RemoveProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkViewport_AddProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->AddProp(temp0);
      }
    else
      {
      op->vtkViewport::AddProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkViewport_GetProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkPropCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProps();
      }
    else
      {
      tempr = op->vtkViewport::GetProps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkViewport_HasProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  vtkProp *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      tempr = op->HasProp(temp0);
      }
    else
      {
      tempr = op->vtkViewport::HasProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkViewport_RemoveAllProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewport *op = static_cast<vtkViewport *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllProps();
      }
    else
      {
      op->vtkViewport::RemoveAllProps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkViewport_Methods[] = {
  {(char*)"GetClassName", PyvtkViewport_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkViewport_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkViewport_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkViewport\nC++: vtkViewport *NewInstance()\n\n"},
  {(char*)"AddViewProp", PyvtkViewport_AddViewProp, 1,
   (char*)"V.AddViewProp(vtkProp)\nC++: void AddViewProp(vtkProp *)\n\nAdd a prop to the list of props. Prop is the superclass of all\nactors, volumes, 2D actors, composite props etc.\n"},
  {(char*)"GetViewProps", PyvtkViewport_GetViewProps, 1,
   (char*)"V.GetViewProps() -> vtkPropCollection\nC++: vtkPropCollection *GetViewProps()\n\nReturn any props in this viewport.\n"},
  {(char*)"HasViewProp", PyvtkViewport_HasViewProp, 1,
   (char*)"V.HasViewProp(vtkProp) -> int\nC++: int HasViewProp(vtkProp *)\n\nQuery if a prop is in the list of props.\n"},
  {(char*)"RemoveViewProp", PyvtkViewport_RemoveViewProp, 1,
   (char*)"V.RemoveViewProp(vtkProp)\nC++: void RemoveViewProp(vtkProp *)\n\nRemove an actor from the list of actors.\n"},
  {(char*)"RemoveAllViewProps", PyvtkViewport_RemoveAllViewProps, 1,
   (char*)"V.RemoveAllViewProps()\nC++: void RemoveAllViewProps(void)\n\nRemove all actors from the list of actors.\n"},
  {(char*)"AddActor2D", PyvtkViewport_AddActor2D, 1,
   (char*)"V.AddActor2D(vtkProp)\nC++: void AddActor2D(vtkProp *p)\n\nAdd/Remove different types of props to the renderer. These\nmethods are all synonyms to AddViewProp and RemoveViewProp. They\nare here for convenience and backwards compatibility.\n"},
  {(char*)"RemoveActor2D", PyvtkViewport_RemoveActor2D, 1,
   (char*)"V.RemoveActor2D(vtkProp)\nC++: void RemoveActor2D(vtkProp *p)\n\nAdd/Remove different types of props to the renderer. These\nmethods are all synonyms to AddViewProp and RemoveViewProp. They\nare here for convenience and backwards compatibility.\n"},
  {(char*)"GetActors2D", PyvtkViewport_GetActors2D, 1,
   (char*)"V.GetActors2D() -> vtkActor2DCollection\nC++: vtkActor2DCollection *GetActors2D()\n\nAdd/Remove different types of props to the renderer. These\nmethods are all synonyms to AddViewProp and RemoveViewProp. They\nare here for convenience and backwards compatibility.\n"},
  {(char*)"SetBackground", PyvtkViewport_SetBackground, 1,
   (char*)"V.SetBackground(float, float, float)\nC++: void SetBackground(double, double, double)\nV.SetBackground((float, float, float))\nC++: void SetBackground(double a[3])\n\n"},
  {(char*)"GetBackground", PyvtkViewport_GetBackground, 1,
   (char*)"V.GetBackground() -> (float, float, float)\nC++: double *GetBackground()\n\n"},
  {(char*)"SetBackground2", PyvtkViewport_SetBackground2, 1,
   (char*)"V.SetBackground2(float, float, float)\nC++: void SetBackground2(double, double, double)\nV.SetBackground2((float, float, float))\nC++: void SetBackground2(double a[3])\n\n"},
  {(char*)"GetBackground2", PyvtkViewport_GetBackground2, 1,
   (char*)"V.GetBackground2() -> (float, float, float)\nC++: double *GetBackground2()\n\n"},
  {(char*)"SetGradientBackground", PyvtkViewport_SetGradientBackground, 1,
   (char*)"V.SetGradientBackground(bool)\nC++: void SetGradientBackground(bool a)\n\nSet/Get whether this viewport should have a gradient background\nusing the Background (top) and Background2 (bottom) colors.\nDefault is off.\n"},
  {(char*)"GetGradientBackground", PyvtkViewport_GetGradientBackground, 1,
   (char*)"V.GetGradientBackground() -> bool\nC++: bool GetGradientBackground()\n\nSet/Get whether this viewport should have a gradient background\nusing the Background (top) and Background2 (bottom) colors.\nDefault is off.\n"},
  {(char*)"GradientBackgroundOn", PyvtkViewport_GradientBackgroundOn, 1,
   (char*)"V.GradientBackgroundOn()\nC++: void GradientBackgroundOn()\n\nSet/Get whether this viewport should have a gradient background\nusing the Background (top) and Background2 (bottom) colors.\nDefault is off.\n"},
  {(char*)"GradientBackgroundOff", PyvtkViewport_GradientBackgroundOff, 1,
   (char*)"V.GradientBackgroundOff()\nC++: void GradientBackgroundOff()\n\nSet/Get whether this viewport should have a gradient background\nusing the Background (top) and Background2 (bottom) colors.\nDefault is off.\n"},
  {(char*)"SetAspect", PyvtkViewport_SetAspect, 1,
   (char*)"V.SetAspect(float, float)\nC++: void SetAspect(double, double)\nV.SetAspect((float, float))\nC++: void SetAspect(double a[2])\n\n"},
  {(char*)"GetAspect", PyvtkViewport_GetAspect, 1,
   (char*)"V.GetAspect() -> (float, float)\nC++: double *GetAspect()\n\nSet the aspect ratio of the rendered image. This is computed\nautomatically and should not be set by the user.\n"},
  {(char*)"ComputeAspect", PyvtkViewport_ComputeAspect, 1,
   (char*)"V.ComputeAspect()\nC++: virtual void ComputeAspect()\n\nSet the aspect ratio of the rendered image. This is computed\nautomatically and should not be set by the user.\n"},
  {(char*)"SetPixelAspect", PyvtkViewport_SetPixelAspect, 1,
   (char*)"V.SetPixelAspect(float, float)\nC++: void SetPixelAspect(double, double)\nV.SetPixelAspect((float, float))\nC++: void SetPixelAspect(double a[2])\n\n"},
  {(char*)"GetPixelAspect", PyvtkViewport_GetPixelAspect, 1,
   (char*)"V.GetPixelAspect() -> (float, float)\nC++: double *GetPixelAspect()\n\nSet the aspect ratio of a pixel in the rendered image. This\nfactor permits the image to rendered anisotropically (i.e.,\nstretched in one direction or the other).\n"},
  {(char*)"SetViewport", PyvtkViewport_SetViewport, 1,
   (char*)"V.SetViewport(float, float, float, float)\nC++: void SetViewport(double, double, double, double)\nV.SetViewport((float, float, float, float))\nC++: void SetViewport(double a[4])\n\n"},
  {(char*)"GetViewport", PyvtkViewport_GetViewport, 1,
   (char*)"V.GetViewport() -> (float, float, float, float)\nC++: double *GetViewport()\n\nSpecify the viewport for the Viewport to draw in the rendering\nwindow. Coordinates are expressed as (xmin,ymin,xmax,ymax), where\neach coordinate is 0 <= coordinate <= 1.0.\n"},
  {(char*)"SetDisplayPoint", PyvtkViewport_SetDisplayPoint, 1,
   (char*)"V.SetDisplayPoint(float, float, float)\nC++: void SetDisplayPoint(double, double, double)\nV.SetDisplayPoint((float, float, float))\nC++: void SetDisplayPoint(double a[3])\n\n"},
  {(char*)"GetDisplayPoint", PyvtkViewport_GetDisplayPoint, 1,
   (char*)"V.GetDisplayPoint() -> (float, float, float)\nC++: double *GetDisplayPoint()\n\nSet/get a point location in display (or screen) coordinates. The\nlower left corner of the window is the origin and y increases as\nyou go up the screen.\n"},
  {(char*)"SetViewPoint", PyvtkViewport_SetViewPoint, 1,
   (char*)"V.SetViewPoint(float, float, float)\nC++: void SetViewPoint(double, double, double)\nV.SetViewPoint((float, float, float))\nC++: void SetViewPoint(double a[3])\n\n"},
  {(char*)"GetViewPoint", PyvtkViewport_GetViewPoint, 1,
   (char*)"V.GetViewPoint() -> (float, float, float)\nC++: double *GetViewPoint()\n\nSpecify a point location in view coordinates. The origin is in\nthe middle of the viewport and it extends from -1 to 1 in all\nthree dimensions.\n"},
  {(char*)"SetWorldPoint", PyvtkViewport_SetWorldPoint, 1,
   (char*)"V.SetWorldPoint(float, float, float, float)\nC++: void SetWorldPoint(double, double, double, double)\nV.SetWorldPoint((float, float, float, float))\nC++: void SetWorldPoint(double a[4])\n\n"},
  {(char*)"GetWorldPoint", PyvtkViewport_GetWorldPoint, 1,
   (char*)"V.GetWorldPoint() -> (float, float, float, float)\nC++: double *GetWorldPoint()\n\nSpecify a point location in world coordinates. This method takes\nhomogeneous coordinates.\n"},
  {(char*)"GetCenter", PyvtkViewport_GetCenter, 1,
   (char*)"V.GetCenter() -> (float, float)\nC++: virtual double *GetCenter()\n\nReturn the center of this viewport in display coordinates.\n"},
  {(char*)"IsInViewport", PyvtkViewport_IsInViewport, 1,
   (char*)"V.IsInViewport(int, int) -> int\nC++: virtual int IsInViewport(int x, int y)\n\nIs a given display point in this Viewport's viewport.\n"},
  {(char*)"GetVTKWindow", PyvtkViewport_GetVTKWindow, 1,
   (char*)"V.GetVTKWindow() -> vtkWindow\nC++: virtual vtkWindow *GetVTKWindow()\n\nReturn the vtkWindow that owns this vtkViewport.\n"},
  {(char*)"DisplayToView", PyvtkViewport_DisplayToView, 1,
   (char*)"V.DisplayToView()\nC++: virtual void DisplayToView()\n\nConvert display coordinates to view coordinates.\n"},
  {(char*)"ViewToDisplay", PyvtkViewport_ViewToDisplay, 1,
   (char*)"V.ViewToDisplay()\nC++: virtual void ViewToDisplay()\n\nConvert view coordinates to display coordinates.\n"},
  {(char*)"WorldToView", PyvtkViewport_WorldToView, 1,
   (char*)"V.WorldToView()\nC++: virtual void WorldToView()\nV.WorldToView(float, float, float)\nC++: virtual void WorldToView(double &, double &, double &)\n\nConvert world point coordinates to view coordinates.\n"},
  {(char*)"ViewToWorld", PyvtkViewport_ViewToWorld, 1,
   (char*)"V.ViewToWorld()\nC++: virtual void ViewToWorld()\nV.ViewToWorld(float, float, float)\nC++: virtual void ViewToWorld(double &, double &, double &)\n\nConvert view point coordinates to world coordinates.\n"},
  {(char*)"DisplayToWorld", PyvtkViewport_DisplayToWorld, 1,
   (char*)"V.DisplayToWorld()\nC++: void DisplayToWorld()\n\nConvert display (or screen) coordinates to world coordinates.\n"},
  {(char*)"WorldToDisplay", PyvtkViewport_WorldToDisplay, 1,
   (char*)"V.WorldToDisplay()\nC++: void WorldToDisplay()\n\nConvert world point coordinates to display (or screen)\ncoordinates.\n"},
  {(char*)"LocalDisplayToDisplay", PyvtkViewport_LocalDisplayToDisplay, 1,
   (char*)"V.LocalDisplayToDisplay(float, float)\nC++: virtual void LocalDisplayToDisplay(double &x, double &y)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {(char*)"DisplayToNormalizedDisplay", PyvtkViewport_DisplayToNormalizedDisplay, 1,
   (char*)"V.DisplayToNormalizedDisplay(float, float)\nC++: virtual void DisplayToNormalizedDisplay(double &u, double &v)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {(char*)"NormalizedDisplayToViewport", PyvtkViewport_NormalizedDisplayToViewport, 1,
   (char*)"V.NormalizedDisplayToViewport(float, float)\nC++: virtual void NormalizedDisplayToViewport(double &x,\n    double &y)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {(char*)"ViewportToNormalizedViewport", PyvtkViewport_ViewportToNormalizedViewport, 1,
   (char*)"V.ViewportToNormalizedViewport(float, float)\nC++: virtual void ViewportToNormalizedViewport(double &u,\n    double &v)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {(char*)"NormalizedViewportToView", PyvtkViewport_NormalizedViewportToView, 1,
   (char*)"V.NormalizedViewportToView(float, float, float)\nC++: virtual void NormalizedViewportToView(double &x, double &y,\n    double &z)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {(char*)"DisplayToLocalDisplay", PyvtkViewport_DisplayToLocalDisplay, 1,
   (char*)"V.DisplayToLocalDisplay(float, float)\nC++: virtual void DisplayToLocalDisplay(double &x, double &y)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {(char*)"NormalizedDisplayToDisplay", PyvtkViewport_NormalizedDisplayToDisplay, 1,
   (char*)"V.NormalizedDisplayToDisplay(float, float)\nC++: virtual void NormalizedDisplayToDisplay(double &u, double &v)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {(char*)"ViewportToNormalizedDisplay", PyvtkViewport_ViewportToNormalizedDisplay, 1,
   (char*)"V.ViewportToNormalizedDisplay(float, float)\nC++: virtual void ViewportToNormalizedDisplay(double &x,\n    double &y)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {(char*)"NormalizedViewportToViewport", PyvtkViewport_NormalizedViewportToViewport, 1,
   (char*)"V.NormalizedViewportToViewport(float, float)\nC++: virtual void NormalizedViewportToViewport(double &u,\n    double &v)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {(char*)"ViewToNormalizedViewport", PyvtkViewport_ViewToNormalizedViewport, 1,
   (char*)"V.ViewToNormalizedViewport(float, float, float)\nC++: virtual void ViewToNormalizedViewport(double &x, double &y,\n    double &z)\n\nThese methods map from one coordinate system to another. They are\nprimarily used by the vtkCoordinate object and are often strung\ntogether. These methods return valid information only if the\nwindow has been realized (e.g., GetSize() returns something other\nthan (0,0)).\n"},
  {(char*)"GetSize", PyvtkViewport_GetSize, 1,
   (char*)"V.GetSize() -> (int, int)\nC++: virtual int *GetSize()\n\nGet the size and origin of the viewport in display coordinates.\nNote: if the window has not yet been realized, GetSize() and\nGetOrigin() return (0,0).\n"},
  {(char*)"GetOrigin", PyvtkViewport_GetOrigin, 1,
   (char*)"V.GetOrigin() -> (int, int)\nC++: virtual int *GetOrigin()\n\nGet the size and origin of the viewport in display coordinates.\nNote: if the window has not yet been realized, GetSize() and\nGetOrigin() return (0,0).\n"},
  {(char*)"PickProp", PyvtkViewport_PickProp, 1,
   (char*)"V.PickProp(float, float) -> vtkAssemblyPath\nC++: virtual vtkAssemblyPath *PickProp(double selectionX,\n    double selectionY)\n\nReturn the Prop that has the highest z value at the given x, y\nposition in the viewport.  Basically, the top most prop that\nrenders the pixel at selectionX, selectionY will be returned.  If\nno Props are there NULL is returned.  This method selects from\nthe Viewports Prop list.\n"},
  {(char*)"PickPropFrom", PyvtkViewport_PickPropFrom, 1,
   (char*)"V.PickPropFrom(float, float, vtkPropCollection) -> vtkAssemblyPath\nC++: vtkAssemblyPath *PickPropFrom(double selectionX,\n    double selectionY, vtkPropCollection *)\n\nSame as PickProp with two arguments, but selects from the given\ncollection of Props instead of the Renderers props.  Make sure\nthe Props in the collection are in this renderer.\n"},
  {(char*)"GetPickX", PyvtkViewport_GetPickX, 1,
   (char*)"V.GetPickX() -> float\nC++: double GetPickX()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {(char*)"GetPickY", PyvtkViewport_GetPickY, 1,
   (char*)"V.GetPickY() -> float\nC++: double GetPickY()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {(char*)"GetPickWidth", PyvtkViewport_GetPickWidth, 1,
   (char*)"V.GetPickWidth() -> float\nC++: double GetPickWidth()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {(char*)"GetPickHeight", PyvtkViewport_GetPickHeight, 1,
   (char*)"V.GetPickHeight() -> float\nC++: double GetPickHeight()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {(char*)"GetPickX1", PyvtkViewport_GetPickX1, 1,
   (char*)"V.GetPickX1() -> float\nC++: double GetPickX1()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {(char*)"GetPickY1", PyvtkViewport_GetPickY1, 1,
   (char*)"V.GetPickY1() -> float\nC++: double GetPickY1()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {(char*)"GetPickX2", PyvtkViewport_GetPickX2, 1,
   (char*)"V.GetPickX2() -> float\nC++: double GetPickX2()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {(char*)"GetPickY2", PyvtkViewport_GetPickY2, 1,
   (char*)"V.GetPickY2() -> float\nC++: double GetPickY2()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {(char*)"GetIsPicking", PyvtkViewport_GetIsPicking, 1,
   (char*)"V.GetIsPicking() -> int\nC++: int GetIsPicking()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {(char*)"GetPickResultProps", PyvtkViewport_GetPickResultProps, 1,
   (char*)"V.GetPickResultProps() -> vtkPropCollection\nC++: vtkPropCollection *GetPickResultProps()\n\nMethods used to return the pick (x,y) in local display\ncoordinates (i.e., it's that same as selectionX and selectionY).\n"},
  {(char*)"GetPickedZ", PyvtkViewport_GetPickedZ, 1,
   (char*)"V.GetPickedZ() -> float\nC++: virtual double GetPickedZ()\n\nReturn the Z value for the last picked Prop.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"RemoveProp", PyvtkViewport_RemoveProp, 1,
   (char*)"V.RemoveProp(vtkProp)\nC++: void RemoveProp(vtkProp *)\n\n@deprecated Replaced by vtkViewport::RemoveViewProp() as of VTK\n5.0.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"AddProp", PyvtkViewport_AddProp, 1,
   (char*)"V.AddProp(vtkProp)\nC++: void AddProp(vtkProp *)\n\n@deprecated Replaced by vtkViewport::AddViewProp() as of VTK 5.0.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetProps", PyvtkViewport_GetProps, 1,
   (char*)"V.GetProps() -> vtkPropCollection\nC++: vtkPropCollection *GetProps()\n\n@deprecated Replaced by vtkViewport::GetViewProps() as of VTK\n5.0.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"HasProp", PyvtkViewport_HasProp, 1,
   (char*)"V.HasProp(vtkProp) -> int\nC++: int HasProp(vtkProp *)\n\n@deprecated Replaced by vtkViewport::HasViewProp() as of VTK 5.0.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"RemoveAllProps", PyvtkViewport_RemoveAllProps, 1,
   (char*)"V.RemoveAllProps()\nC++: void RemoveAllProps()\n\n@deprecated Replaced by vtkViewport::RemoveAllViewProps() as of\nVTK 5.0.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkViewportNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkViewport_Methods,
    "vtkViewport", modulename,
    NULL, NULL,
    PyvtkViewport_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkViewport_Doc()
{
  static const char *docstring[] = {
    "vtkViewport - abstract specification for Viewports\n\n",
    "Superclass: vtkObject\n\n",
    "vtkViewport provides an abstract specification for Viewports. A\nViewport is an object that controls the rendering process for\nobjects. Rendering is the process of converting geometry, a\nspecification for lights, and a camera view into an image.\nvtkViewport also performs coordinate transformation between world\ncoordinates, view coordinates (the computer graphics rendering\ncoordinate system), and di",
    "splay coordinates (the actual screen\ncoordinates on the display device). Certain advanced rendering\nfeatures such as two-sided lighting can also be controlled.\n\nSee Also:\n\nvtkWindow vtkRenderer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkViewport(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkViewportNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkViewport", o) != 0)
    {
    Py_DECREF(o);
    }

}

