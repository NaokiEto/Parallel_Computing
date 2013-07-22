// python wrapper for vtkCubeAxesActor
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
#include "vtkCubeAxesActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCubeAxesActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCubeAxesActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCubeAxesActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCubeAxesActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkActorNew
extern "C" { PyObject *PyVTKClass_vtkActorNew(const char *); }
#define DECLARED_PyVTKClass_vtkActorNew
#endif

static const char **PyvtkCubeAxesActor_Doc();


static PyObject *
PyvtkCubeAxesActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      tempr = op->vtkCubeAxesActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      tempr = op->vtkCubeAxesActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkCubeAxesActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::NewInstance();
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
PyvtkCubeAxesActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCubeAxesActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCubeAxesActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOpaqueGeometry(temp0);
      }
    else
      {
      tempr = op->vtkCubeAxesActor::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_RenderTranslucentGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderTranslucentGeometry(temp0);
      }
    else
      {
      tempr = op->vtkCubeAxesActor::RenderTranslucentGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkCubeAxesActor::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkCubeAxesActor_SetBounds_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBounds();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkCubeAxesActor::GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
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
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_GetBounds_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::GetBounds(temp0);
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
PyvtkCubeAxesActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkCubeAxesActor_GetBounds_s1(self, args);
    case 6:
      return PyvtkCubeAxesActor_GetBounds_s2(self, args);
    case 1:
      return PyvtkCubeAxesActor_GetBounds_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor_SetXAxisRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetXAxisRange(temp0, temp1);
      }
    else
      {
      op->vtkCubeAxesActor::SetXAxisRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetXAxisRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisRange(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXAxisRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetXAxisRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCubeAxesActor_SetXAxisRange_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetXAxisRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetXAxisRange");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor_SetYAxisRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetYAxisRange(temp0, temp1);
      }
    else
      {
      op->vtkCubeAxesActor::SetYAxisRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetYAxisRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisRange(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYAxisRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetYAxisRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCubeAxesActor_SetYAxisRange_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetYAxisRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetYAxisRange");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor_SetZAxisRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetZAxisRange(temp0, temp1);
      }
    else
      {
      op->vtkCubeAxesActor::SetZAxisRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetZAxisRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisRange(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZAxisRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetZAxisRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkCubeAxesActor_SetZAxisRange_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetZAxisRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetZAxisRange");
  return NULL;
}



static PyObject *
PyvtkCubeAxesActor_GetXAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXAxisRange();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetXAxisRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYAxisRange();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetYAxisRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZAxisRange();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetZAxisRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkCamera *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->SetCamera(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkCamera *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCamera();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFlyMode(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetFlyMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetFlyModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFlyModeMinValue();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetFlyModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetFlyModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFlyModeMaxValue();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetFlyModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetFlyMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFlyMode();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetFlyMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToOuterEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToOuterEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFlyModeToOuterEdges();
      }
    else
      {
      op->vtkCubeAxesActor::SetFlyModeToOuterEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToClosestTriad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToClosestTriad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFlyModeToClosestTriad();
      }
    else
      {
      op->vtkCubeAxesActor::SetFlyModeToClosestTriad();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToFurthestTriad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToFurthestTriad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFlyModeToFurthestTriad();
      }
    else
      {
      op->vtkCubeAxesActor::SetFlyModeToFurthestTriad();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToStaticTriad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToStaticTriad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFlyModeToStaticTriad();
      }
    else
      {
      op->vtkCubeAxesActor::SetFlyModeToStaticTriad();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToStaticEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToStaticEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFlyModeToStaticEdges();
      }
    else
      {
      op->vtkCubeAxesActor::SetFlyModeToStaticEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXTitle(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXTitle();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetXTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXUnits(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXUnits(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXUnits();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetXUnits();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYTitle(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYTitle();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetYTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYUnits(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYUnits(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYUnits();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetYUnits();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZTitle(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZTitle();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetZTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZUnits(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZUnits(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZUnits();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetZUnits();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXLabelFormat(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXLabelFormat();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetXLabelFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYLabelFormat(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYLabelFormat();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetYLabelFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZLabelFormat(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZLabelFormat();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetZLabelFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetInertia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInertia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInertia(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetInertia(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetInertiaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertiaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInertiaMinValue();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetInertiaMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetInertiaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertiaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInertiaMaxValue();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetInertiaMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetInertia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInertia();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetInertia();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCornerOffset(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetCornerOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerOffset();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetCornerOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXAxisVisibility();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetXAxisVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::XAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::XAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYAxisVisibility();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetYAxisVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::YAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::YAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZAxisVisibility();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetZAxisVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::ZAxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::ZAxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisLabelVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXAxisLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXAxisLabelVisibility();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetXAxisLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisLabelVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::XAxisLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisLabelVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::XAxisLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisLabelVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYAxisLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYAxisLabelVisibility();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetYAxisLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisLabelVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::YAxisLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisLabelVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::YAxisLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisLabelVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZAxisLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZAxisLabelVisibility();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetZAxisLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisLabelVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::ZAxisLabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisLabelVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::ZAxisLabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXAxisTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXAxisTickVisibility();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetXAxisTickVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisTickVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::XAxisTickVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisTickVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::XAxisTickVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYAxisTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYAxisTickVisibility();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetYAxisTickVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisTickVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::YAxisTickVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisTickVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::YAxisTickVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZAxisTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZAxisTickVisibility();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetZAxisTickVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisTickVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::ZAxisTickVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisTickVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::ZAxisTickVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAxisMinorTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetXAxisMinorTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXAxisMinorTickVisibility();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetXAxisMinorTickVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisMinorTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisMinorTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisMinorTickVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::XAxisMinorTickVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisMinorTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisMinorTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->XAxisMinorTickVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::XAxisMinorTickVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAxisMinorTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetYAxisMinorTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYAxisMinorTickVisibility();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetYAxisMinorTickVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisMinorTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisMinorTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisMinorTickVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::YAxisMinorTickVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisMinorTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisMinorTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->YAxisMinorTickVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::YAxisMinorTickVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZAxisMinorTickVisibility(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetZAxisMinorTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZAxisMinorTickVisibility();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetZAxisMinorTickVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisMinorTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisMinorTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisMinorTickVisibilityOn();
      }
    else
      {
      op->vtkCubeAxesActor::ZAxisMinorTickVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisMinorTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisMinorTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ZAxisMinorTickVisibilityOff();
      }
    else
      {
      op->vtkCubeAxesActor::ZAxisMinorTickVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawXGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawXGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawXGridlines(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetDrawXGridlines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawXGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawXGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDrawXGridlines();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetDrawXGridlines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawXGridlinesOn();
      }
    else
      {
      op->vtkCubeAxesActor::DrawXGridlinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawXGridlinesOff();
      }
    else
      {
      op->vtkCubeAxesActor::DrawXGridlinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawYGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawYGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawYGridlines(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetDrawYGridlines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawYGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawYGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDrawYGridlines();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetDrawYGridlines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawYGridlinesOn();
      }
    else
      {
      op->vtkCubeAxesActor::DrawYGridlinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawYGridlinesOff();
      }
    else
      {
      op->vtkCubeAxesActor::DrawYGridlinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawZGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawZGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawZGridlines(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetDrawZGridlines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawZGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawZGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDrawZGridlines();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetDrawZGridlines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawZGridlinesOn();
      }
    else
      {
      op->vtkCubeAxesActor::DrawZGridlinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawZGridlinesOff();
      }
    else
      {
      op->vtkCubeAxesActor::DrawZGridlinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTickLocation(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::SetTickLocation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTickLocationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickLocationMinValue();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetTickLocationMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTickLocationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickLocationMaxValue();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetTickLocationMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickLocation();
      }
    else
      {
      tempr = op->vtkCubeAxesActor::GetTickLocation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTickLocationToInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTickLocationToInside();
      }
    else
      {
      op->vtkCubeAxesActor::SetTickLocationToInside();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTickLocationToOutside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToOutside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTickLocationToOutside();
      }
    else
      {
      op->vtkCubeAxesActor::SetTickLocationToOutside();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTickLocationToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTickLocationToBoth();
      }
    else
      {
      op->vtkCubeAxesActor::SetTickLocationToBoth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetLabelScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetLabelScaling(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkCubeAxesActor::SetLabelScaling(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkCubeAxesActor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCubeAxesActor"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkCubeAxesActor::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCubeAxesActor_Methods[] = {
  {(char*)"GetClassName", PyvtkCubeAxesActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCubeAxesActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCubeAxesActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCubeAxesActor\nC++: vtkCubeAxesActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCubeAxesActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCubeAxesActor\nC++: vtkCubeAxesActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkCubeAxesActor_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {(char*)"RenderTranslucentGeometry", PyvtkCubeAxesActor_RenderTranslucentGeometry, 1,
   (char*)"V.RenderTranslucentGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentGeometry(vtkViewport *)\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {(char*)"SetBounds", PyvtkCubeAxesActor_SetBounds, 1,
   (char*)"V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {(char*)"GetBounds", PyvtkCubeAxesActor_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\nV.GetBounds(float, float, float, float, float, float)\nC++: void GetBounds(double &xmin, double &xmax, double &ymin,\n    double &ymax, double &zmin, double &zmax)\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nExplicitly specify the region in space around which to draw the\nbounds. The bounds is used only when no Input or Prop is\nspecified. The bounds are specified according to (xmin,xmax,\nymin,ymax, zmin,zmax), making sure that the min's are less than the\nmax's.\n"},
  {(char*)"SetXAxisRange", PyvtkCubeAxesActor_SetXAxisRange, 1,
   (char*)"V.SetXAxisRange(float, float)\nC++: void SetXAxisRange(double, double)\nV.SetXAxisRange((float, float))\nC++: void SetXAxisRange(double a[2])\n\n"},
  {(char*)"SetYAxisRange", PyvtkCubeAxesActor_SetYAxisRange, 1,
   (char*)"V.SetYAxisRange(float, float)\nC++: void SetYAxisRange(double, double)\nV.SetYAxisRange((float, float))\nC++: void SetYAxisRange(double a[2])\n\n"},
  {(char*)"SetZAxisRange", PyvtkCubeAxesActor_SetZAxisRange, 1,
   (char*)"V.SetZAxisRange(float, float)\nC++: void SetZAxisRange(double, double)\nV.SetZAxisRange((float, float))\nC++: void SetZAxisRange(double a[2])\n\n"},
  {(char*)"GetXAxisRange", PyvtkCubeAxesActor_GetXAxisRange, 1,
   (char*)"V.GetXAxisRange() -> (float, float)\nC++: double *GetXAxisRange()\n\n"},
  {(char*)"GetYAxisRange", PyvtkCubeAxesActor_GetYAxisRange, 1,
   (char*)"V.GetYAxisRange() -> (float, float)\nC++: double *GetYAxisRange()\n\n"},
  {(char*)"GetZAxisRange", PyvtkCubeAxesActor_GetZAxisRange, 1,
   (char*)"V.GetZAxisRange() -> (float, float)\nC++: double *GetZAxisRange()\n\n"},
  {(char*)"SetCamera", PyvtkCubeAxesActor_SetCamera, 1,
   (char*)"V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSet/Get the camera to perform scaling and translation of the\nvtkCubeAxesActor.\n"},
  {(char*)"GetCamera", PyvtkCubeAxesActor_GetCamera, 1,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nSet/Get the camera to perform scaling and translation of the\nvtkCubeAxesActor.\n"},
  {(char*)"SetFlyMode", PyvtkCubeAxesActor_SetFlyMode, 1,
   (char*)"V.SetFlyMode(int)\nC++: void SetFlyMode(int)\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"GetFlyModeMinValue", PyvtkCubeAxesActor_GetFlyModeMinValue, 1,
   (char*)"V.GetFlyModeMinValue() -> int\nC++: int GetFlyModeMinValue()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"GetFlyModeMaxValue", PyvtkCubeAxesActor_GetFlyModeMaxValue, 1,
   (char*)"V.GetFlyModeMaxValue() -> int\nC++: int GetFlyModeMaxValue()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"GetFlyMode", PyvtkCubeAxesActor_GetFlyMode, 1,
   (char*)"V.GetFlyMode() -> int\nC++: int GetFlyMode()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"SetFlyModeToOuterEdges", PyvtkCubeAxesActor_SetFlyModeToOuterEdges, 1,
   (char*)"V.SetFlyModeToOuterEdges()\nC++: void SetFlyModeToOuterEdges()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"SetFlyModeToClosestTriad", PyvtkCubeAxesActor_SetFlyModeToClosestTriad, 1,
   (char*)"V.SetFlyModeToClosestTriad()\nC++: void SetFlyModeToClosestTriad()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"SetFlyModeToFurthestTriad", PyvtkCubeAxesActor_SetFlyModeToFurthestTriad, 1,
   (char*)"V.SetFlyModeToFurthestTriad()\nC++: void SetFlyModeToFurthestTriad()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"SetFlyModeToStaticTriad", PyvtkCubeAxesActor_SetFlyModeToStaticTriad, 1,
   (char*)"V.SetFlyModeToStaticTriad()\nC++: void SetFlyModeToStaticTriad()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"SetFlyModeToStaticEdges", PyvtkCubeAxesActor_SetFlyModeToStaticEdges, 1,
   (char*)"V.SetFlyModeToStaticEdges()\nC++: void SetFlyModeToStaticEdges()\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position.\n"},
  {(char*)"SetXTitle", PyvtkCubeAxesActor_SetXTitle, 1,
   (char*)"V.SetXTitle(string)\nC++: void SetXTitle(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"GetXTitle", PyvtkCubeAxesActor_GetXTitle, 1,
   (char*)"V.GetXTitle() -> string\nC++: char *GetXTitle()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"SetXUnits", PyvtkCubeAxesActor_SetXUnits, 1,
   (char*)"V.SetXUnits(string)\nC++: void SetXUnits(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"GetXUnits", PyvtkCubeAxesActor_GetXUnits, 1,
   (char*)"V.GetXUnits() -> string\nC++: char *GetXUnits()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"SetYTitle", PyvtkCubeAxesActor_SetYTitle, 1,
   (char*)"V.SetYTitle(string)\nC++: void SetYTitle(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"GetYTitle", PyvtkCubeAxesActor_GetYTitle, 1,
   (char*)"V.GetYTitle() -> string\nC++: char *GetYTitle()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"SetYUnits", PyvtkCubeAxesActor_SetYUnits, 1,
   (char*)"V.SetYUnits(string)\nC++: void SetYUnits(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"GetYUnits", PyvtkCubeAxesActor_GetYUnits, 1,
   (char*)"V.GetYUnits() -> string\nC++: char *GetYUnits()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"SetZTitle", PyvtkCubeAxesActor_SetZTitle, 1,
   (char*)"V.SetZTitle(string)\nC++: void SetZTitle(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"GetZTitle", PyvtkCubeAxesActor_GetZTitle, 1,
   (char*)"V.GetZTitle() -> string\nC++: char *GetZTitle()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"SetZUnits", PyvtkCubeAxesActor_SetZUnits, 1,
   (char*)"V.SetZUnits(string)\nC++: void SetZUnits(char *)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"GetZUnits", PyvtkCubeAxesActor_GetZUnits, 1,
   (char*)"V.GetZUnits() -> string\nC++: char *GetZUnits()\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {(char*)"SetXLabelFormat", PyvtkCubeAxesActor_SetXLabelFormat, 1,
   (char*)"V.SetXLabelFormat(string)\nC++: void SetXLabelFormat(char *)\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {(char*)"GetXLabelFormat", PyvtkCubeAxesActor_GetXLabelFormat, 1,
   (char*)"V.GetXLabelFormat() -> string\nC++: char *GetXLabelFormat()\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {(char*)"SetYLabelFormat", PyvtkCubeAxesActor_SetYLabelFormat, 1,
   (char*)"V.SetYLabelFormat(string)\nC++: void SetYLabelFormat(char *)\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {(char*)"GetYLabelFormat", PyvtkCubeAxesActor_GetYLabelFormat, 1,
   (char*)"V.GetYLabelFormat() -> string\nC++: char *GetYLabelFormat()\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {(char*)"SetZLabelFormat", PyvtkCubeAxesActor_SetZLabelFormat, 1,
   (char*)"V.SetZLabelFormat(string)\nC++: void SetZLabelFormat(char *)\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {(char*)"GetZLabelFormat", PyvtkCubeAxesActor_GetZLabelFormat, 1,
   (char*)"V.GetZLabelFormat() -> string\nC++: char *GetZLabelFormat()\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {(char*)"SetInertia", PyvtkCubeAxesActor_SetInertia, 1,
   (char*)"V.SetInertia(int)\nC++: void SetInertia(int)\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {(char*)"GetInertiaMinValue", PyvtkCubeAxesActor_GetInertiaMinValue, 1,
   (char*)"V.GetInertiaMinValue() -> int\nC++: int GetInertiaMinValue()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {(char*)"GetInertiaMaxValue", PyvtkCubeAxesActor_GetInertiaMaxValue, 1,
   (char*)"V.GetInertiaMaxValue() -> int\nC++: int GetInertiaMaxValue()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {(char*)"GetInertia", PyvtkCubeAxesActor_GetInertia, 1,
   (char*)"V.GetInertia() -> int\nC++: int GetInertia()\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother).\n"},
  {(char*)"SetCornerOffset", PyvtkCubeAxesActor_SetCornerOffset, 1,
   (char*)"V.SetCornerOffset(float)\nC++: void SetCornerOffset(double a)\n\nSpecify an offset value to \"pull back\" the axes from the corner\nat which they are joined to avoid overlap of axes labels. The\n\"CornerOffset\" is the fraction of the axis length to pull back.\n"},
  {(char*)"GetCornerOffset", PyvtkCubeAxesActor_GetCornerOffset, 1,
   (char*)"V.GetCornerOffset() -> float\nC++: double GetCornerOffset()\n\nSpecify an offset value to \"pull back\" the axes from the corner\nat which they are joined to avoid overlap of axes labels. The\n\"CornerOffset\" is the fraction of the axis length to pull back.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkCubeAxesActor_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"SetXAxisVisibility", PyvtkCubeAxesActor_SetXAxisVisibility, 1,
   (char*)"V.SetXAxisVisibility(int)\nC++: void SetXAxisVisibility(int a)\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"GetXAxisVisibility", PyvtkCubeAxesActor_GetXAxisVisibility, 1,
   (char*)"V.GetXAxisVisibility() -> int\nC++: int GetXAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"XAxisVisibilityOn", PyvtkCubeAxesActor_XAxisVisibilityOn, 1,
   (char*)"V.XAxisVisibilityOn()\nC++: void XAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"XAxisVisibilityOff", PyvtkCubeAxesActor_XAxisVisibilityOff, 1,
   (char*)"V.XAxisVisibilityOff()\nC++: void XAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"SetYAxisVisibility", PyvtkCubeAxesActor_SetYAxisVisibility, 1,
   (char*)"V.SetYAxisVisibility(int)\nC++: void SetYAxisVisibility(int a)\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"GetYAxisVisibility", PyvtkCubeAxesActor_GetYAxisVisibility, 1,
   (char*)"V.GetYAxisVisibility() -> int\nC++: int GetYAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"YAxisVisibilityOn", PyvtkCubeAxesActor_YAxisVisibilityOn, 1,
   (char*)"V.YAxisVisibilityOn()\nC++: void YAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"YAxisVisibilityOff", PyvtkCubeAxesActor_YAxisVisibilityOff, 1,
   (char*)"V.YAxisVisibilityOff()\nC++: void YAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"SetZAxisVisibility", PyvtkCubeAxesActor_SetZAxisVisibility, 1,
   (char*)"V.SetZAxisVisibility(int)\nC++: void SetZAxisVisibility(int a)\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"GetZAxisVisibility", PyvtkCubeAxesActor_GetZAxisVisibility, 1,
   (char*)"V.GetZAxisVisibility() -> int\nC++: int GetZAxisVisibility()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"ZAxisVisibilityOn", PyvtkCubeAxesActor_ZAxisVisibilityOn, 1,
   (char*)"V.ZAxisVisibilityOn()\nC++: void ZAxisVisibilityOn()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"ZAxisVisibilityOff", PyvtkCubeAxesActor_ZAxisVisibilityOff, 1,
   (char*)"V.ZAxisVisibilityOff()\nC++: void ZAxisVisibilityOff()\n\nTurn on and off the visibility of each axis.\n"},
  {(char*)"SetXAxisLabelVisibility", PyvtkCubeAxesActor_SetXAxisLabelVisibility, 1,
   (char*)"V.SetXAxisLabelVisibility(int)\nC++: void SetXAxisLabelVisibility(int a)\n\nTurn on and off the visibility of labels for each axis.\n"},
  {(char*)"GetXAxisLabelVisibility", PyvtkCubeAxesActor_GetXAxisLabelVisibility, 1,
   (char*)"V.GetXAxisLabelVisibility() -> int\nC++: int GetXAxisLabelVisibility()\n\nTurn on and off the visibility of labels for each axis.\n"},
  {(char*)"XAxisLabelVisibilityOn", PyvtkCubeAxesActor_XAxisLabelVisibilityOn, 1,
   (char*)"V.XAxisLabelVisibilityOn()\nC++: void XAxisLabelVisibilityOn()\n\nTurn on and off the visibility of labels for each axis.\n"},
  {(char*)"XAxisLabelVisibilityOff", PyvtkCubeAxesActor_XAxisLabelVisibilityOff, 1,
   (char*)"V.XAxisLabelVisibilityOff()\nC++: void XAxisLabelVisibilityOff()\n\nTurn on and off the visibility of labels for each axis.\n"},
  {(char*)"SetYAxisLabelVisibility", PyvtkCubeAxesActor_SetYAxisLabelVisibility, 1,
   (char*)"V.SetYAxisLabelVisibility(int)\nC++: void SetYAxisLabelVisibility(int a)\n\n"},
  {(char*)"GetYAxisLabelVisibility", PyvtkCubeAxesActor_GetYAxisLabelVisibility, 1,
   (char*)"V.GetYAxisLabelVisibility() -> int\nC++: int GetYAxisLabelVisibility()\n\n"},
  {(char*)"YAxisLabelVisibilityOn", PyvtkCubeAxesActor_YAxisLabelVisibilityOn, 1,
   (char*)"V.YAxisLabelVisibilityOn()\nC++: void YAxisLabelVisibilityOn()\n\n"},
  {(char*)"YAxisLabelVisibilityOff", PyvtkCubeAxesActor_YAxisLabelVisibilityOff, 1,
   (char*)"V.YAxisLabelVisibilityOff()\nC++: void YAxisLabelVisibilityOff()\n\n"},
  {(char*)"SetZAxisLabelVisibility", PyvtkCubeAxesActor_SetZAxisLabelVisibility, 1,
   (char*)"V.SetZAxisLabelVisibility(int)\nC++: void SetZAxisLabelVisibility(int a)\n\n"},
  {(char*)"GetZAxisLabelVisibility", PyvtkCubeAxesActor_GetZAxisLabelVisibility, 1,
   (char*)"V.GetZAxisLabelVisibility() -> int\nC++: int GetZAxisLabelVisibility()\n\n"},
  {(char*)"ZAxisLabelVisibilityOn", PyvtkCubeAxesActor_ZAxisLabelVisibilityOn, 1,
   (char*)"V.ZAxisLabelVisibilityOn()\nC++: void ZAxisLabelVisibilityOn()\n\n"},
  {(char*)"ZAxisLabelVisibilityOff", PyvtkCubeAxesActor_ZAxisLabelVisibilityOff, 1,
   (char*)"V.ZAxisLabelVisibilityOff()\nC++: void ZAxisLabelVisibilityOff()\n\n"},
  {(char*)"SetXAxisTickVisibility", PyvtkCubeAxesActor_SetXAxisTickVisibility, 1,
   (char*)"V.SetXAxisTickVisibility(int)\nC++: void SetXAxisTickVisibility(int a)\n\nTurn on and off the visibility of ticks for each axis.\n"},
  {(char*)"GetXAxisTickVisibility", PyvtkCubeAxesActor_GetXAxisTickVisibility, 1,
   (char*)"V.GetXAxisTickVisibility() -> int\nC++: int GetXAxisTickVisibility()\n\nTurn on and off the visibility of ticks for each axis.\n"},
  {(char*)"XAxisTickVisibilityOn", PyvtkCubeAxesActor_XAxisTickVisibilityOn, 1,
   (char*)"V.XAxisTickVisibilityOn()\nC++: void XAxisTickVisibilityOn()\n\nTurn on and off the visibility of ticks for each axis.\n"},
  {(char*)"XAxisTickVisibilityOff", PyvtkCubeAxesActor_XAxisTickVisibilityOff, 1,
   (char*)"V.XAxisTickVisibilityOff()\nC++: void XAxisTickVisibilityOff()\n\nTurn on and off the visibility of ticks for each axis.\n"},
  {(char*)"SetYAxisTickVisibility", PyvtkCubeAxesActor_SetYAxisTickVisibility, 1,
   (char*)"V.SetYAxisTickVisibility(int)\nC++: void SetYAxisTickVisibility(int a)\n\n"},
  {(char*)"GetYAxisTickVisibility", PyvtkCubeAxesActor_GetYAxisTickVisibility, 1,
   (char*)"V.GetYAxisTickVisibility() -> int\nC++: int GetYAxisTickVisibility()\n\n"},
  {(char*)"YAxisTickVisibilityOn", PyvtkCubeAxesActor_YAxisTickVisibilityOn, 1,
   (char*)"V.YAxisTickVisibilityOn()\nC++: void YAxisTickVisibilityOn()\n\n"},
  {(char*)"YAxisTickVisibilityOff", PyvtkCubeAxesActor_YAxisTickVisibilityOff, 1,
   (char*)"V.YAxisTickVisibilityOff()\nC++: void YAxisTickVisibilityOff()\n\n"},
  {(char*)"SetZAxisTickVisibility", PyvtkCubeAxesActor_SetZAxisTickVisibility, 1,
   (char*)"V.SetZAxisTickVisibility(int)\nC++: void SetZAxisTickVisibility(int a)\n\n"},
  {(char*)"GetZAxisTickVisibility", PyvtkCubeAxesActor_GetZAxisTickVisibility, 1,
   (char*)"V.GetZAxisTickVisibility() -> int\nC++: int GetZAxisTickVisibility()\n\n"},
  {(char*)"ZAxisTickVisibilityOn", PyvtkCubeAxesActor_ZAxisTickVisibilityOn, 1,
   (char*)"V.ZAxisTickVisibilityOn()\nC++: void ZAxisTickVisibilityOn()\n\n"},
  {(char*)"ZAxisTickVisibilityOff", PyvtkCubeAxesActor_ZAxisTickVisibilityOff, 1,
   (char*)"V.ZAxisTickVisibilityOff()\nC++: void ZAxisTickVisibilityOff()\n\n"},
  {(char*)"SetXAxisMinorTickVisibility", PyvtkCubeAxesActor_SetXAxisMinorTickVisibility, 1,
   (char*)"V.SetXAxisMinorTickVisibility(int)\nC++: void SetXAxisMinorTickVisibility(int a)\n\nTurn on and off the visibility of minor ticks for each axis.\n"},
  {(char*)"GetXAxisMinorTickVisibility", PyvtkCubeAxesActor_GetXAxisMinorTickVisibility, 1,
   (char*)"V.GetXAxisMinorTickVisibility() -> int\nC++: int GetXAxisMinorTickVisibility()\n\nTurn on and off the visibility of minor ticks for each axis.\n"},
  {(char*)"XAxisMinorTickVisibilityOn", PyvtkCubeAxesActor_XAxisMinorTickVisibilityOn, 1,
   (char*)"V.XAxisMinorTickVisibilityOn()\nC++: void XAxisMinorTickVisibilityOn()\n\nTurn on and off the visibility of minor ticks for each axis.\n"},
  {(char*)"XAxisMinorTickVisibilityOff", PyvtkCubeAxesActor_XAxisMinorTickVisibilityOff, 1,
   (char*)"V.XAxisMinorTickVisibilityOff()\nC++: void XAxisMinorTickVisibilityOff()\n\nTurn on and off the visibility of minor ticks for each axis.\n"},
  {(char*)"SetYAxisMinorTickVisibility", PyvtkCubeAxesActor_SetYAxisMinorTickVisibility, 1,
   (char*)"V.SetYAxisMinorTickVisibility(int)\nC++: void SetYAxisMinorTickVisibility(int a)\n\n"},
  {(char*)"GetYAxisMinorTickVisibility", PyvtkCubeAxesActor_GetYAxisMinorTickVisibility, 1,
   (char*)"V.GetYAxisMinorTickVisibility() -> int\nC++: int GetYAxisMinorTickVisibility()\n\n"},
  {(char*)"YAxisMinorTickVisibilityOn", PyvtkCubeAxesActor_YAxisMinorTickVisibilityOn, 1,
   (char*)"V.YAxisMinorTickVisibilityOn()\nC++: void YAxisMinorTickVisibilityOn()\n\n"},
  {(char*)"YAxisMinorTickVisibilityOff", PyvtkCubeAxesActor_YAxisMinorTickVisibilityOff, 1,
   (char*)"V.YAxisMinorTickVisibilityOff()\nC++: void YAxisMinorTickVisibilityOff()\n\n"},
  {(char*)"SetZAxisMinorTickVisibility", PyvtkCubeAxesActor_SetZAxisMinorTickVisibility, 1,
   (char*)"V.SetZAxisMinorTickVisibility(int)\nC++: void SetZAxisMinorTickVisibility(int a)\n\n"},
  {(char*)"GetZAxisMinorTickVisibility", PyvtkCubeAxesActor_GetZAxisMinorTickVisibility, 1,
   (char*)"V.GetZAxisMinorTickVisibility() -> int\nC++: int GetZAxisMinorTickVisibility()\n\n"},
  {(char*)"ZAxisMinorTickVisibilityOn", PyvtkCubeAxesActor_ZAxisMinorTickVisibilityOn, 1,
   (char*)"V.ZAxisMinorTickVisibilityOn()\nC++: void ZAxisMinorTickVisibilityOn()\n\n"},
  {(char*)"ZAxisMinorTickVisibilityOff", PyvtkCubeAxesActor_ZAxisMinorTickVisibilityOff, 1,
   (char*)"V.ZAxisMinorTickVisibilityOff()\nC++: void ZAxisMinorTickVisibilityOff()\n\n"},
  {(char*)"SetDrawXGridlines", PyvtkCubeAxesActor_SetDrawXGridlines, 1,
   (char*)"V.SetDrawXGridlines(int)\nC++: void SetDrawXGridlines(int a)\n\n"},
  {(char*)"GetDrawXGridlines", PyvtkCubeAxesActor_GetDrawXGridlines, 1,
   (char*)"V.GetDrawXGridlines() -> int\nC++: int GetDrawXGridlines()\n\n"},
  {(char*)"DrawXGridlinesOn", PyvtkCubeAxesActor_DrawXGridlinesOn, 1,
   (char*)"V.DrawXGridlinesOn()\nC++: void DrawXGridlinesOn()\n\n"},
  {(char*)"DrawXGridlinesOff", PyvtkCubeAxesActor_DrawXGridlinesOff, 1,
   (char*)"V.DrawXGridlinesOff()\nC++: void DrawXGridlinesOff()\n\n"},
  {(char*)"SetDrawYGridlines", PyvtkCubeAxesActor_SetDrawYGridlines, 1,
   (char*)"V.SetDrawYGridlines(int)\nC++: void SetDrawYGridlines(int a)\n\n"},
  {(char*)"GetDrawYGridlines", PyvtkCubeAxesActor_GetDrawYGridlines, 1,
   (char*)"V.GetDrawYGridlines() -> int\nC++: int GetDrawYGridlines()\n\n"},
  {(char*)"DrawYGridlinesOn", PyvtkCubeAxesActor_DrawYGridlinesOn, 1,
   (char*)"V.DrawYGridlinesOn()\nC++: void DrawYGridlinesOn()\n\n"},
  {(char*)"DrawYGridlinesOff", PyvtkCubeAxesActor_DrawYGridlinesOff, 1,
   (char*)"V.DrawYGridlinesOff()\nC++: void DrawYGridlinesOff()\n\n"},
  {(char*)"SetDrawZGridlines", PyvtkCubeAxesActor_SetDrawZGridlines, 1,
   (char*)"V.SetDrawZGridlines(int)\nC++: void SetDrawZGridlines(int a)\n\n"},
  {(char*)"GetDrawZGridlines", PyvtkCubeAxesActor_GetDrawZGridlines, 1,
   (char*)"V.GetDrawZGridlines() -> int\nC++: int GetDrawZGridlines()\n\n"},
  {(char*)"DrawZGridlinesOn", PyvtkCubeAxesActor_DrawZGridlinesOn, 1,
   (char*)"V.DrawZGridlinesOn()\nC++: void DrawZGridlinesOn()\n\n"},
  {(char*)"DrawZGridlinesOff", PyvtkCubeAxesActor_DrawZGridlinesOff, 1,
   (char*)"V.DrawZGridlinesOff()\nC++: void DrawZGridlinesOff()\n\n"},
  {(char*)"SetTickLocation", PyvtkCubeAxesActor_SetTickLocation, 1,
   (char*)"V.SetTickLocation(int)\nC++: void SetTickLocation(int)\n\nSet/Get the location of ticks marks.\n"},
  {(char*)"GetTickLocationMinValue", PyvtkCubeAxesActor_GetTickLocationMinValue, 1,
   (char*)"V.GetTickLocationMinValue() -> int\nC++: int GetTickLocationMinValue()\n\nSet/Get the location of ticks marks.\n"},
  {(char*)"GetTickLocationMaxValue", PyvtkCubeAxesActor_GetTickLocationMaxValue, 1,
   (char*)"V.GetTickLocationMaxValue() -> int\nC++: int GetTickLocationMaxValue()\n\nSet/Get the location of ticks marks.\n"},
  {(char*)"GetTickLocation", PyvtkCubeAxesActor_GetTickLocation, 1,
   (char*)"V.GetTickLocation() -> int\nC++: int GetTickLocation()\n\nSet/Get the location of ticks marks.\n"},
  {(char*)"SetTickLocationToInside", PyvtkCubeAxesActor_SetTickLocationToInside, 1,
   (char*)"V.SetTickLocationToInside()\nC++: void SetTickLocationToInside(void)\n\n"},
  {(char*)"SetTickLocationToOutside", PyvtkCubeAxesActor_SetTickLocationToOutside, 1,
   (char*)"V.SetTickLocationToOutside()\nC++: void SetTickLocationToOutside(void)\n\n"},
  {(char*)"SetTickLocationToBoth", PyvtkCubeAxesActor_SetTickLocationToBoth, 1,
   (char*)"V.SetTickLocationToBoth()\nC++: void SetTickLocationToBoth(void)\n\n"},
  {(char*)"SetLabelScaling", PyvtkCubeAxesActor_SetLabelScaling, 1,
   (char*)"V.SetLabelScaling(bool, int, int, int)\nC++: void SetLabelScaling(bool, int, int, int)\n\n"},
  {(char*)"ShallowCopy", PyvtkCubeAxesActor_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkCubeAxesActor)\nC++: void ShallowCopy(vtkCubeAxesActor *actor)\n\nShallow copy of a KatCubeAxesActor.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCubeAxesActor_StaticNew()
{
  return vtkCubeAxesActor::New();
}

PyObject *PyVTKClass_vtkCubeAxesActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCubeAxesActor_StaticNew,
    PyvtkCubeAxesActor_Methods,
    "vtkCubeAxesActor", modulename,
    NULL, NULL,
    PyvtkCubeAxesActor_Doc(),
    PyVTKClass_vtkActorNew(modulename));
  return cls;
}

const char **PyvtkCubeAxesActor_Doc()
{
  static const char *docstring[] = {
    "vtkCubeAxesActor - create a  plot of a bounding box edges -\n\n",
    "Superclass: vtkActor\n\n",
    "vtkCubeAxesActor is a composite actor that draws axes of the bounding\nbox of an input dataset. The axes include labels and titles for the\nx-y-z axes. The algorithm selects which axes to draw based on the\nuser-defined 'fly' mode.  (STATIC is default). 'STATIC' constructs\naxes from all edges of the bounding box. 'CLOSEST_TRIAD' consists of\nthe three axes x-y-z forming a triad that lies closest to th",
    "e\nspecified camera. 'FURTHEST_TRIAD' consists of the three axes x-y-z\nforming a triad that lies furthest from the specified camera.\n'OUTER_EDGES' is constructed from edges that are on the \"exterior\" of\nthe bounding box, exterior as determined from examining outer edges\nof the bounding box in projection (display) space.\n\nTo use this object you must define a bounding box and the camera used\nto rende",
    "r the vtkCubeAxesActor. You can optionally turn on/off\nlabels, ticks, gridlines, and set tick location, number of labels,\nand text to use for axis-titles.  A 'corner offset' can also be set. \nThis allows the axes to be set partially away from the actual\nbounding box to perhaps prevent overlap of labels between the various\naxes.\n\nThe Bounds instance variable (an array of six doubles) is used to\ndet",
    "ermine the bounding box.\n\nSee Also:\n\nvtkActor vtkAxisActor vtkCubeAxesActor2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCubeAxesActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCubeAxesActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCubeAxesActor", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_FLY_OUTER_EDGES", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_FLY_CLOSEST_TRIAD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_FLY_FURTHEST_TRIAD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_FLY_STATIC_TRIAD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_FLY_STATIC_EDGES", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TICKS_INSIDE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TICKS_OUTSIDE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TICKS_BOTH", o) != 0)
    {
    Py_DECREF(o);
    }

}

