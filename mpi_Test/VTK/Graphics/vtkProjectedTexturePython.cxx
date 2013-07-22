// python wrapper for vtkProjectedTexture
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
#include "vtkProjectedTexture.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProjectedTexture(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProjectedTexture(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProjectedTextureNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProjectedTextureNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkProjectedTexture_Doc();


static PyObject *
PyvtkProjectedTexture_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      tempr = op->vtkProjectedTexture::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      tempr = op->vtkProjectedTexture::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  vtkProjectedTexture *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProjectedTexture::NewInstance();
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
PyvtkProjectedTexture_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkProjectedTexture *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkProjectedTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkProjectedTexture::SetPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkProjectedTexture::SetPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkProjectedTexture_SetPosition_s1(self, args);
    case 1:
      return PyvtkProjectedTexture_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkProjectedTexture_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPosition();
      }
    else
      {
      tempr = op->vtkProjectedTexture::GetPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetFocalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      op->SetFocalPoint(temp0);
      }
    else
      {
      op->vtkProjectedTexture::SetFocalPoint(temp0);
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
PyvtkProjectedTexture_SetFocalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      op->SetFocalPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkProjectedTexture::SetFocalPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetFocalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkProjectedTexture_SetFocalPoint_s1(self, args);
    case 3:
      return PyvtkProjectedTexture_SetFocalPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetFocalPoint");
  return NULL;
}



static PyObject *
PyvtkProjectedTexture_GetFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFocalPoint();
      }
    else
      {
      tempr = op->vtkProjectedTexture::GetFocalPoint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetCameraMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCameraMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCameraMode(temp0);
      }
    else
      {
      op->vtkProjectedTexture::SetCameraMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTexture_GetCameraMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCameraMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCameraMode();
      }
    else
      {
      tempr = op->vtkProjectedTexture::GetCameraMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetCameraModeToPinhole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCameraModeToPinhole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCameraModeToPinhole();
      }
    else
      {
      op->vtkProjectedTexture::SetCameraModeToPinhole();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetCameraModeToTwoMirror(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCameraModeToTwoMirror");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCameraModeToTwoMirror();
      }
    else
      {
      op->vtkProjectedTexture::SetCameraModeToTwoMirror();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetMirrorSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMirrorSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMirrorSeparation(temp0);
      }
    else
      {
      op->vtkProjectedTexture::SetMirrorSeparation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTexture_GetMirrorSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMirrorSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMirrorSeparation();
      }
    else
      {
      tempr = op->vtkProjectedTexture::GetMirrorSeparation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTexture_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientation();
      }
    else
      {
      tempr = op->vtkProjectedTexture::GetOrientation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetUp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      op->SetUp(temp0, temp1, temp2);
      }
    else
      {
      op->vtkProjectedTexture::SetUp(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetUp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetUp(temp0);
      }
    else
      {
      op->vtkProjectedTexture::SetUp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetUp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkProjectedTexture_SetUp_s1(self, args);
    case 1:
      return PyvtkProjectedTexture_SetUp_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUp");
  return NULL;
}



static PyObject *
PyvtkProjectedTexture_GetUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUp();
      }
    else
      {
      tempr = op->vtkProjectedTexture::GetUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetAspectRatio_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      op->SetAspectRatio(temp0, temp1, temp2);
      }
    else
      {
      op->vtkProjectedTexture::SetAspectRatio(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetAspectRatio_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAspectRatio(temp0);
      }
    else
      {
      op->vtkProjectedTexture::SetAspectRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetAspectRatio(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkProjectedTexture_SetAspectRatio_s1(self, args);
    case 1:
      return PyvtkProjectedTexture_SetAspectRatio_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAspectRatio");
  return NULL;
}



static PyObject *
PyvtkProjectedTexture_GetAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAspectRatio();
      }
    else
      {
      tempr = op->vtkProjectedTexture::GetAspectRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetSRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSRange(temp0, temp1);
      }
    else
      {
      op->vtkProjectedTexture::SetSRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetSRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSRange(temp0);
      }
    else
      {
      op->vtkProjectedTexture::SetSRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetSRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkProjectedTexture_SetSRange_s1(self, args);
    case 1:
      return PyvtkProjectedTexture_SetSRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSRange");
  return NULL;
}



static PyObject *
PyvtkProjectedTexture_GetSRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSRange();
      }
    else
      {
      tempr = op->vtkProjectedTexture::GetSRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetTRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTRange(temp0, temp1);
      }
    else
      {
      op->vtkProjectedTexture::SetTRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetTRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTRange(temp0);
      }
    else
      {
      op->vtkProjectedTexture::SetTRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetTRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkProjectedTexture_SetTRange_s1(self, args);
    case 1:
      return PyvtkProjectedTexture_SetTRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTRange");
  return NULL;
}



static PyObject *
PyvtkProjectedTexture_GetTRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTRange();
      }
    else
      {
      tempr = op->vtkProjectedTexture::GetTRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkProjectedTexture_Methods[] = {
  {(char*)"GetClassName", PyvtkProjectedTexture_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProjectedTexture_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProjectedTexture_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProjectedTexture\nC++: vtkProjectedTexture *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProjectedTexture_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProjectedTexture\nC++: vtkProjectedTexture *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPosition", PyvtkProjectedTexture_SetPosition, 1,
   (char*)"V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\nV.SetPosition((float, float, float))\nC++: void SetPosition(double a[3])\n\n"},
  {(char*)"GetPosition", PyvtkProjectedTexture_GetPosition, 1,
   (char*)"V.GetPosition() -> (float, float, float)\nC++: double *GetPosition()\n\nSet/Get the position of the focus of the projector.\n"},
  {(char*)"SetFocalPoint", PyvtkProjectedTexture_SetFocalPoint, 1,
   (char*)"V.SetFocalPoint([float, float, float])\nC++: void SetFocalPoint(double focalPoint[3])\nV.SetFocalPoint(float, float, float)\nC++: void SetFocalPoint(double x, double y, double z)\n\nSet/Get the focal point of the projector (a point that lies along\nthe center axis of the projector's frustum).\n"},
  {(char*)"GetFocalPoint", PyvtkProjectedTexture_GetFocalPoint, 1,
   (char*)"V.GetFocalPoint() -> (float, float, float)\nC++: double *GetFocalPoint()\n\nSet/Get the focal point of the projector (a point that lies along\nthe center axis of the projector's frustum).\n"},
  {(char*)"SetCameraMode", PyvtkProjectedTexture_SetCameraMode, 1,
   (char*)"V.SetCameraMode(int)\nC++: void SetCameraMode(int a)\n\nSet/Get the camera mode of the projection -- pinhole projection\nor two mirror projection.\n"},
  {(char*)"GetCameraMode", PyvtkProjectedTexture_GetCameraMode, 1,
   (char*)"V.GetCameraMode() -> int\nC++: int GetCameraMode()\n\nSet/Get the camera mode of the projection -- pinhole projection\nor two mirror projection.\n"},
  {(char*)"SetCameraModeToPinhole", PyvtkProjectedTexture_SetCameraModeToPinhole, 1,
   (char*)"V.SetCameraModeToPinhole()\nC++: void SetCameraModeToPinhole()\n\nSet/Get the camera mode of the projection -- pinhole projection\nor two mirror projection.\n"},
  {(char*)"SetCameraModeToTwoMirror", PyvtkProjectedTexture_SetCameraModeToTwoMirror, 1,
   (char*)"V.SetCameraModeToTwoMirror()\nC++: void SetCameraModeToTwoMirror()\n\nSet/Get the camera mode of the projection -- pinhole projection\nor two mirror projection.\n"},
  {(char*)"SetMirrorSeparation", PyvtkProjectedTexture_SetMirrorSeparation, 1,
   (char*)"V.SetMirrorSeparation(float)\nC++: void SetMirrorSeparation(double a)\n\nSet/Get the mirror separation for the two mirror system.\n"},
  {(char*)"GetMirrorSeparation", PyvtkProjectedTexture_GetMirrorSeparation, 1,
   (char*)"V.GetMirrorSeparation() -> float\nC++: double GetMirrorSeparation()\n\nSet/Get the mirror separation for the two mirror system.\n"},
  {(char*)"GetOrientation", PyvtkProjectedTexture_GetOrientation, 1,
   (char*)"V.GetOrientation() -> (float, float, float)\nC++: double *GetOrientation()\n\nGet the normalized orientation vector of the projector.\n"},
  {(char*)"SetUp", PyvtkProjectedTexture_SetUp, 1,
   (char*)"V.SetUp(float, float, float)\nC++: void SetUp(double, double, double)\nV.SetUp((float, float, float))\nC++: void SetUp(double a[3])\n\n"},
  {(char*)"GetUp", PyvtkProjectedTexture_GetUp, 1,
   (char*)"V.GetUp() -> (float, float, float)\nC++: double *GetUp()\n\n"},
  {(char*)"SetAspectRatio", PyvtkProjectedTexture_SetAspectRatio, 1,
   (char*)"V.SetAspectRatio(float, float, float)\nC++: void SetAspectRatio(double, double, double)\nV.SetAspectRatio((float, float, float))\nC++: void SetAspectRatio(double a[3])\n\n"},
  {(char*)"GetAspectRatio", PyvtkProjectedTexture_GetAspectRatio, 1,
   (char*)"V.GetAspectRatio() -> (float, float, float)\nC++: double *GetAspectRatio()\n\n"},
  {(char*)"SetSRange", PyvtkProjectedTexture_SetSRange, 1,
   (char*)"V.SetSRange(float, float)\nC++: void SetSRange(double, double)\nV.SetSRange((float, float))\nC++: void SetSRange(double a[2])\n\n"},
  {(char*)"GetSRange", PyvtkProjectedTexture_GetSRange, 1,
   (char*)"V.GetSRange() -> (float, float)\nC++: double *GetSRange()\n\nSpecify s-coordinate range for texture s-t coordinate pair.\n"},
  {(char*)"SetTRange", PyvtkProjectedTexture_SetTRange, 1,
   (char*)"V.SetTRange(float, float)\nC++: void SetTRange(double, double)\nV.SetTRange((float, float))\nC++: void SetTRange(double a[2])\n\n"},
  {(char*)"GetTRange", PyvtkProjectedTexture_GetTRange, 1,
   (char*)"V.GetTRange() -> (float, float)\nC++: double *GetTRange()\n\nSpecify t-coordinate range for texture s-t coordinate pair.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProjectedTexture_StaticNew()
{
  return vtkProjectedTexture::New();
}

PyObject *PyVTKClass_vtkProjectedTextureNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProjectedTexture_StaticNew,
    PyvtkProjectedTexture_Methods,
    "vtkProjectedTexture", modulename,
    NULL, NULL,
    PyvtkProjectedTexture_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkProjectedTexture_Doc()
{
  static const char *docstring[] = {
    "vtkProjectedTexture - assign texture coordinates for a projected\ntexture\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkProjectedTexture assigns texture coordinates to a dataset as if\nthe texture was projected from a slide projected located somewhere in\nthe scene.  Methods are provided to position the projector and aim it\nat a location, to set the width of the projector's frustum, and to\nset the range of texture coordinates assigned to the dataset.\n\nObjects in the scene that appear behind the projector are also\n",
    "assigned texture coordinates; the projected image is left-right and\ntop-bottom flipped, much as a lens' focus flips the rays of light\nthat pass through it.  A warning is issued if a point in the dataset\nfalls at the focus of the projector.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProjectedTexture(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProjectedTextureNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProjectedTexture", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PROJECTED_TEXTURE_USE_PINHOLE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PROJECTED_TEXTURE_USE_TWO_MIRRORS", o) != 0)
    {
    Py_DECREF(o);
    }

}

