// python wrapper for vtkRenderWindowInteractor
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
#include "vtkRenderWindowInteractor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRenderWindowInteractor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRenderWindowInteractor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRenderWindowInteractorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRenderWindowInteractorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkRenderWindowInteractor_Doc();


static PyObject *
PyvtkRenderWindowInteractor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

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
      tempr = op->vtkRenderWindowInteractor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

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
      tempr = op->vtkRenderWindowInteractor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderWindowInteractor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::NewInstance();
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
PyvtkRenderWindowInteractor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRenderWindowInteractor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRenderWindowInteractor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkRenderWindowInteractor::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ReInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReInitialize();
      }
    else
      {
      op->vtkRenderWindowInteractor::ReInitialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Start();
      }
    else
      {
      op->vtkRenderWindowInteractor::Start();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Enable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Enable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Enable();
      }
    else
      {
      op->vtkRenderWindowInteractor::Enable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Disable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Disable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Disable();
      }
    else
      {
      op->vtkRenderWindowInteractor::Disable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnabled();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetEnabled();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EnableRenderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableRenderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableRenderOn();
      }
    else
      {
      op->vtkRenderWindowInteractor::EnableRenderOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EnableRenderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableRenderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableRenderOff();
      }
    else
      {
      op->vtkRenderWindowInteractor::EnableRenderOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetEnableRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableRender(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEnableRender(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetEnableRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnableRender();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetEnableRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetRenderWindow(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetRenderWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderWindow();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetRenderWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_UpdateSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->UpdateSize(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::UpdateSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_CreateTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->CreateTimer(temp0);
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::CreateTimer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_DestroyTimer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DestroyTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->DestroyTimer();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::DestroyTimer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_DestroyTimer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DestroyTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->DestroyTimer(temp0);
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::DestroyTimer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_DestroyTimer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRenderWindowInteractor_DestroyTimer_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_DestroyTimer_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DestroyTimer");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_CreateRepeatingTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateRepeatingTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  unsigned long temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->CreateRepeatingTimer(temp0);
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::CreateRepeatingTimer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_CreateOneShotTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOneShotTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  unsigned long temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->CreateOneShotTimer(temp0);
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::CreateOneShotTimer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_IsOneShotTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOneShotTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsOneShotTimer(temp0);
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::IsOneShotTimer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerDuration_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimerDuration(temp0);
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetTimerDuration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_GetTimerDuration_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimerDuration();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetTimerDuration();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_GetTimerDuration(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkRenderWindowInteractor_GetTimerDuration_s1(self, args);
    case 0:
      return PyvtkRenderWindowInteractor_GetTimerDuration_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTimerDuration");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_ResetTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->ResetTimer(temp0);
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::ResetTimer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetVTKTimerId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKTimerId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVTKTimerId(temp0);
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetVTKTimerId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimerDuration(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetTimerDuration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerDurationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDurationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimerDurationMinValue();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetTimerDurationMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerDurationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDurationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimerDurationMaxValue();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetTimerDurationMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerEventId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimerEventId(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetTimerEventId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerEventId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimerEventId();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetTimerEventId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerEventType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimerEventType(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetTimerEventType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerEventType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimerEventType();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetTimerEventType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerEventDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimerEventDuration(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetTimerEventDuration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerEventDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimerEventDuration();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetTimerEventDuration();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetTimerEventPlatformId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventPlatformId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimerEventPlatformId(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetTimerEventPlatformId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetTimerEventPlatformId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventPlatformId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimerEventPlatformId();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetTimerEventPlatformId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_TerminateApp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TerminateApp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TerminateApp();
      }
    else
      {
      op->vtkRenderWindowInteractor::TerminateApp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkInteractorObserver *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInteractorObserver"))
    {
    if (ap.IsBound())
      {
      op->SetInteractorStyle(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetInteractorStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkInteractorObserver *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteractorStyle();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetInteractorStyle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetLightFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLightFollowCamera(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetLightFollowCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLightFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLightFollowCamera();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetLightFollowCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LightFollowCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightFollowCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LightFollowCameraOn();
      }
    else
      {
      op->vtkRenderWindowInteractor::LightFollowCameraOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LightFollowCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightFollowCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LightFollowCameraOff();
      }
    else
      {
      op->vtkRenderWindowInteractor::LightFollowCameraOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetDesiredUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDesiredUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDesiredUpdateRate(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetDesiredUpdateRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDesiredUpdateRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredUpdateRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDesiredUpdateRateMinValue();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetDesiredUpdateRateMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDesiredUpdateRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredUpdateRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDesiredUpdateRateMaxValue();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetDesiredUpdateRateMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDesiredUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDesiredUpdateRate();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetDesiredUpdateRate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetStillUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStillUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStillUpdateRate(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetStillUpdateRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetStillUpdateRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillUpdateRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStillUpdateRateMinValue();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetStillUpdateRateMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetStillUpdateRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillUpdateRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStillUpdateRateMaxValue();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetStillUpdateRateMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetStillUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStillUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStillUpdateRate();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetStillUpdateRate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInitialized();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetInitialized();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkAbstractPicker *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPicker"))
    {
    if (ap.IsBound())
      {
      op->SetPicker(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetPicker(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkAbstractPicker *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPicker();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetPicker();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_CreateDefaultPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkAbstractPropPicker *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->CreateDefaultPicker();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::CreateDefaultPicker();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ExitCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExitCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExitCallback();
      }
    else
      {
      op->vtkRenderWindowInteractor::ExitCallback();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_UserCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UserCallback();
      }
    else
      {
      op->vtkRenderWindowInteractor::UserCallback();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_StartPickCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPickCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartPickCallback();
      }
    else
      {
      op->vtkRenderWindowInteractor::StartPickCallback();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EndPickCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPickCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndPickCallback();
      }
    else
      {
      op->vtkRenderWindowInteractor::EndPickCallback();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_HideCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HideCursor();
      }
    else
      {
      op->vtkRenderWindowInteractor::HideCursor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ShowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowCursor();
      }
    else
      {
      op->vtkRenderWindowInteractor::ShowCursor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkRenderWindowInteractor::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FlyTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlyTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->FlyTo(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkRenderWindowInteractor::FlyTo(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FlyToImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlyToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->FlyToImage(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRenderWindowInteractor::FlyToImage(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetNumberOfFlyFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFlyFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfFlyFrames(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetNumberOfFlyFrames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFlyFramesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFlyFramesMinValue();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetNumberOfFlyFramesMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFlyFramesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFlyFramesMaxValue();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetNumberOfFlyFramesMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetNumberOfFlyFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFlyFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFlyFrames();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetNumberOfFlyFrames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetDolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDolly(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetDolly(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetDolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDolly();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetDolly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetEventPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEventPosition();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetEventPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetLastEventPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastEventPosition();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetLastEventPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetLastEventPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLastEventPosition(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetLastEventPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetLastEventPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetLastEventPosition(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetLastEventPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetLastEventPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkRenderWindowInteractor_SetLastEventPosition_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_SetLastEventPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLastEventPosition");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_SetEventPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetEventPosition(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetEventPosition(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventPosition(temp0);
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
PyvtkRenderWindowInteractor_SetEventPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkRenderWindowInteractor_SetEventPosition_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_SetEventPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetEventPosition");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_SetEventPositionFlipY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPositionFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetEventPositionFlipY(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventPositionFlipY(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventPositionFlipY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventPositionFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetEventPositionFlipY(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventPositionFlipY(temp0);
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
PyvtkRenderWindowInteractor_SetEventPositionFlipY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkRenderWindowInteractor_SetEventPositionFlipY_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_SetEventPositionFlipY_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetEventPositionFlipY");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_SetAltKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAltKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAltKey(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetAltKey(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetAltKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAltKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAltKey();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetAltKey();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetControlKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetControlKey(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetControlKey(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetControlKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetControlKey();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetControlKey();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetShiftKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShiftKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShiftKey(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetShiftKey(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetShiftKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShiftKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShiftKey();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetShiftKey();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyCode(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetKeyCode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  char tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyCode();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetKeyCode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepeatCount(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetRepeatCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRepeatCount();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetRepeatCount();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeySym(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetKeySym(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeySym();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetKeySym();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetEventInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  int temp3 = 0;
  char temp4 = 0;
  int temp5 = 0;
  char *temp6 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
    {
    if (ap.IsBound())
      {
      op->SetEventInformation(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventInformation(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetEventInformationFlipY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventInformationFlipY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  int temp3 = 0;
  char temp4 = 0;
  int temp5 = 0;
  char *temp6 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
    {
    if (ap.IsBound())
      {
      op->SetEventInformationFlipY(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventInformationFlipY(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetKeyEventInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyEventInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0 = 0;
  int temp1 = 0;
  char temp2 = 0;
  int temp3 = 0;
  char *temp4 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    if (ap.IsBound())
      {
      op->SetKeyEventInformation(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetKeyEventInformation(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkRenderWindowInteractor_SetSize_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_SetSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

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
      tempr = op->vtkRenderWindowInteractor::GetSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetEventSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetEventSize(temp0, temp1);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetEventSize(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetEventSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor_SetEventSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkRenderWindowInteractor_SetEventSize_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor_SetEventSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetEventSize");
  return NULL;
}



static PyObject *
PyvtkRenderWindowInteractor_GetEventSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEventSize();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetEventSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_FindPokedRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPokedRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  vtkRenderer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->FindPokedRenderer(temp0, temp1);
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::FindPokedRenderer(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetObserverMediator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObserverMediator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  vtkObserverMediator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetObserverMediator();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetObserverMediator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_SetUseTDx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTDx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseTDx(temp0);
      }
    else
      {
      op->vtkRenderWindowInteractor::SetUseTDx(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_GetUseTDx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTDx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseTDx();
      }
    else
      {
      tempr = op->vtkRenderWindowInteractor::GetUseTDx();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MouseMoveEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::MouseMoveEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_RightButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RightButtonPressEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::RightButtonPressEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_RightButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RightButtonReleaseEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::RightButtonReleaseEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LeftButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeftButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LeftButtonPressEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::LeftButtonPressEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LeftButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeftButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LeftButtonReleaseEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::LeftButtonReleaseEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MiddleButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MiddleButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MiddleButtonPressEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::MiddleButtonPressEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MiddleButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MiddleButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MiddleButtonReleaseEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::MiddleButtonReleaseEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MouseWheelForwardEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelForwardEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MouseWheelForwardEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::MouseWheelForwardEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_MouseWheelBackwardEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelBackwardEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MouseWheelBackwardEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::MouseWheelBackwardEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ExposeEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExposeEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExposeEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::ExposeEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ConfigureEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConfigureEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConfigureEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::ConfigureEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_EnterEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnterEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnterEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::EnterEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_LeaveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeaveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LeaveEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::LeaveEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_KeyPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->KeyPressEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::KeyPressEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_KeyReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->KeyReleaseEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::KeyReleaseEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_CharEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CharEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CharEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::CharEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor_ExitEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExitEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor *op = static_cast<vtkRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExitEvent();
      }
    else
      {
      op->vtkRenderWindowInteractor::ExitEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderWindowInteractor_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderWindowInteractor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderWindowInteractor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderWindowInteractor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderWindowInteractor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkRenderWindowInteractor_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nPrepare for handling events. This must be called before the\ninteractor will work.\n"},
  {(char*)"ReInitialize", PyvtkRenderWindowInteractor_ReInitialize, 1,
   (char*)"V.ReInitialize()\nC++: void ReInitialize()\n\nPrepare for handling events. This must be called before the\ninteractor will work.\n"},
  {(char*)"Start", PyvtkRenderWindowInteractor_Start, 1,
   (char*)"V.Start()\nC++: virtual void Start()\n\nStart the event loop. This is provided so that you do not have to\nimplement your own event loop. You still can use your own event\nloop if you want. Initialize should be called before Start.\n"},
  {(char*)"Enable", PyvtkRenderWindowInteractor_Enable, 1,
   (char*)"V.Enable()\nC++: virtual void Enable()\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {(char*)"Disable", PyvtkRenderWindowInteractor_Disable, 1,
   (char*)"V.Disable()\nC++: virtual void Disable()\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {(char*)"GetEnabled", PyvtkRenderWindowInteractor_GetEnabled, 1,
   (char*)"V.GetEnabled() -> int\nC++: int GetEnabled()\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {(char*)"EnableRenderOn", PyvtkRenderWindowInteractor_EnableRenderOn, 1,
   (char*)"V.EnableRenderOn()\nC++: void EnableRenderOn()\n\nEnable/Disable whether vtkRenderWindowInteractor::Render() calls\nthis->RenderWindow->Render().\n"},
  {(char*)"EnableRenderOff", PyvtkRenderWindowInteractor_EnableRenderOff, 1,
   (char*)"V.EnableRenderOff()\nC++: void EnableRenderOff()\n\nEnable/Disable whether vtkRenderWindowInteractor::Render() calls\nthis->RenderWindow->Render().\n"},
  {(char*)"SetEnableRender", PyvtkRenderWindowInteractor_SetEnableRender, 1,
   (char*)"V.SetEnableRender(bool)\nC++: void SetEnableRender(bool a)\n\nEnable/Disable whether vtkRenderWindowInteractor::Render() calls\nthis->RenderWindow->Render().\n"},
  {(char*)"GetEnableRender", PyvtkRenderWindowInteractor_GetEnableRender, 1,
   (char*)"V.GetEnableRender() -> bool\nC++: bool GetEnableRender()\n\nEnable/Disable whether vtkRenderWindowInteractor::Render() calls\nthis->RenderWindow->Render().\n"},
  {(char*)"SetRenderWindow", PyvtkRenderWindowInteractor_SetRenderWindow, 1,
   (char*)"V.SetRenderWindow(vtkRenderWindow)\nC++: void SetRenderWindow(vtkRenderWindow *aren)\n\nSet/Get the rendering window being controlled by this object.\n"},
  {(char*)"GetRenderWindow", PyvtkRenderWindowInteractor_GetRenderWindow, 1,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\nSet/Get the rendering window being controlled by this object.\n"},
  {(char*)"UpdateSize", PyvtkRenderWindowInteractor_UpdateSize, 1,
   (char*)"V.UpdateSize(int, int)\nC++: virtual void UpdateSize(int x, int y)\n\nEvent loop notification member for window size change. Window\nsize is measured in pixels.\n"},
  {(char*)"CreateTimer", PyvtkRenderWindowInteractor_CreateTimer, 1,
   (char*)"V.CreateTimer(int) -> int\nC++: virtual int CreateTimer(int timerType)\n\nThis class provides two groups of methods for manipulating\ntimers.  The first group (CreateTimer(timerType) and\nDestroyTimer()) implicitly use an internal timer id (and are\npresent for backward compatibility). The second group\n(CreateRepeatingTimer(long),CreateOneShotTimer(long),\nResetTimer(int),DestroyTimer(int)) use timer ids so multiple\ntimers can be independently managed. In the first group, the\nCreateTimer() method takes an argument indicating whether the\ntimer is created the first time (timerType==VTKI_TIMER_FIRST) or\nwhether it is being reset (timerType==VTKI_TIMER_UPDATE). (In\ninitial implementations of VTK this was how one shot and\nrepeating timers were managed.) In the second group, the create\nmethods take a timer duration argument (in milliseconds) and\nreturn a timer id. Thus the ResetTimer(timerId) and\nDestroyTimer(timerId) methods take this timer id and operate on\nthe timer as appropriate. Methods are also available for\ndetermining\n"},
  {(char*)"DestroyTimer", PyvtkRenderWindowInteractor_DestroyTimer, 1,
   (char*)"V.DestroyTimer() -> int\nC++: virtual int DestroyTimer()\nV.DestroyTimer(int) -> int\nC++: int DestroyTimer(int timerId)\n\nThis class provides two groups of methods for manipulating\ntimers.  The first group (CreateTimer(timerType) and\nDestroyTimer()) implicitly use an internal timer id (and are\npresent for backward compatibility). The second group\n(CreateRepeatingTimer(long),CreateOneShotTimer(long),\nResetTimer(int),DestroyTimer(int)) use timer ids so multiple\ntimers can be independently managed. In the first group, the\nCreateTimer() method takes an argument indicating whether the\ntimer is created the first time (timerType==VTKI_TIMER_FIRST) or\nwhether it is being reset (timerType==VTKI_TIMER_UPDATE). (In\ninitial implementations of VTK this was how one shot and\nrepeating timers were managed.) In the second group, the create\nmethods take a timer duration argument (in milliseconds) and\nreturn a timer id. Thus the ResetTimer(timerId) and\nDestroyTimer(timerId) methods take this timer id and operate on\nthe timer as appropriate. Methods are also available for\ndetermining\n"},
  {(char*)"CreateRepeatingTimer", PyvtkRenderWindowInteractor_CreateRepeatingTimer, 1,
   (char*)"V.CreateRepeatingTimer(int) -> int\nC++: int CreateRepeatingTimer(unsigned long duration)\n\nThis class provides two groups of methods for manipulating\ntimers.  The first group (CreateTimer(timerType) and\nDestroyTimer()) implicitly use an internal timer id (and are\npresent for backward compatibility). The second group\n(CreateRepeatingTimer(long),CreateOneShotTimer(long),\nResetTimer(int),DestroyTimer(int)) use timer ids so multiple\ntimers can be independently managed. In the first group, the\nCreateTimer() method takes an argument indicating whether the\ntimer is created the first time (timerType==VTKI_TIMER_FIRST) or\nwhether it is being reset (timerType==VTKI_TIMER_UPDATE). (In\ninitial implementations of VTK this was how one shot and\nrepeating timers were managed.) In the second group, the create\nmethods take a timer duration argument (in milliseconds) and\nreturn a timer id. Thus the ResetTimer(timerId) and\nDestroyTimer(timerId) methods take this timer id and operate on\nthe timer as appropriate. Methods are also available for\ndetermining\n"},
  {(char*)"CreateOneShotTimer", PyvtkRenderWindowInteractor_CreateOneShotTimer, 1,
   (char*)"V.CreateOneShotTimer(int) -> int\nC++: int CreateOneShotTimer(unsigned long duration)\n\nThis class provides two groups of methods for manipulating\ntimers.  The first group (CreateTimer(timerType) and\nDestroyTimer()) implicitly use an internal timer id (and are\npresent for backward compatibility). The second group\n(CreateRepeatingTimer(long),CreateOneShotTimer(long),\nResetTimer(int),DestroyTimer(int)) use timer ids so multiple\ntimers can be independently managed. In the first group, the\nCreateTimer() method takes an argument indicating whether the\ntimer is created the first time (timerType==VTKI_TIMER_FIRST) or\nwhether it is being reset (timerType==VTKI_TIMER_UPDATE). (In\ninitial implementations of VTK this was how one shot and\nrepeating timers were managed.) In the second group, the create\nmethods take a timer duration argument (in milliseconds) and\nreturn a timer id. Thus the ResetTimer(timerId) and\nDestroyTimer(timerId) methods take this timer id and operate on\nthe timer as appropriate. Methods are also available for\ndetermining\n"},
  {(char*)"IsOneShotTimer", PyvtkRenderWindowInteractor_IsOneShotTimer, 1,
   (char*)"V.IsOneShotTimer(int) -> int\nC++: int IsOneShotTimer(int timerId)\n\nThis class provides two groups of methods for manipulating\ntimers.  The first group (CreateTimer(timerType) and\nDestroyTimer()) implicitly use an internal timer id (and are\npresent for backward compatibility). The second group\n(CreateRepeatingTimer(long),CreateOneShotTimer(long),\nResetTimer(int),DestroyTimer(int)) use timer ids so multiple\ntimers can be independently managed. In the first group, the\nCreateTimer() method takes an argument indicating whether the\ntimer is created the first time (timerType==VTKI_TIMER_FIRST) or\nwhether it is being reset (timerType==VTKI_TIMER_UPDATE). (In\ninitial implementations of VTK this was how one shot and\nrepeating timers were managed.) In the second group, the create\nmethods take a timer duration argument (in milliseconds) and\nreturn a timer id. Thus the ResetTimer(timerId) and\nDestroyTimer(timerId) methods take this timer id and operate on\nthe timer as appropriate. Methods are also available for\ndetermining\n"},
  {(char*)"GetTimerDuration", PyvtkRenderWindowInteractor_GetTimerDuration, 1,
   (char*)"V.GetTimerDuration(int) -> int\nC++: unsigned long GetTimerDuration(int timerId)\nV.GetTimerDuration() -> int\nC++: unsigned long GetTimerDuration()\n\nThis class provides two groups of methods for manipulating\ntimers.  The first group (CreateTimer(timerType) and\nDestroyTimer()) implicitly use an internal timer id (and are\npresent for backward compatibility). The second group\n(CreateRepeatingTimer(long),CreateOneShotTimer(long),\nResetTimer(int),DestroyTimer(int)) use timer ids so multiple\ntimers can be independently managed. In the first group, the\nCreateTimer() method takes an argument indicating whether the\ntimer is created the first time (timerType==VTKI_TIMER_FIRST) or\nwhether it is being reset (timerType==VTKI_TIMER_UPDATE). (In\ninitial implementations of VTK this was how one shot and\nrepeating timers were managed.) In the second group, the create\nmethods take a timer duration argument (in milliseconds) and\nreturn a timer id. Thus the ResetTimer(timerId) and\nDestroyTimer(timerId) methods take this timer id and operate on\nthe timer as appropriate. Methods are also available for\ndetermining\n"},
  {(char*)"ResetTimer", PyvtkRenderWindowInteractor_ResetTimer, 1,
   (char*)"V.ResetTimer(int) -> int\nC++: int ResetTimer(int timerId)\n\nThis class provides two groups of methods for manipulating\ntimers.  The first group (CreateTimer(timerType) and\nDestroyTimer()) implicitly use an internal timer id (and are\npresent for backward compatibility). The second group\n(CreateRepeatingTimer(long),CreateOneShotTimer(long),\nResetTimer(int),DestroyTimer(int)) use timer ids so multiple\ntimers can be independently managed. In the first group, the\nCreateTimer() method takes an argument indicating whether the\ntimer is created the first time (timerType==VTKI_TIMER_FIRST) or\nwhether it is being reset (timerType==VTKI_TIMER_UPDATE). (In\ninitial implementations of VTK this was how one shot and\nrepeating timers were managed.) In the second group, the create\nmethods take a timer duration argument (in milliseconds) and\nreturn a timer id. Thus the ResetTimer(timerId) and\nDestroyTimer(timerId) methods take this timer id and operate on\nthe timer as appropriate. Methods are also available for\ndetermining\n"},
  {(char*)"GetVTKTimerId", PyvtkRenderWindowInteractor_GetVTKTimerId, 1,
   (char*)"V.GetVTKTimerId(int) -> int\nC++: virtual int GetVTKTimerId(int platformTimerId)\n\nThis class provides two groups of methods for manipulating\ntimers.  The first group (CreateTimer(timerType) and\nDestroyTimer()) implicitly use an internal timer id (and are\npresent for backward compatibility). The second group\n(CreateRepeatingTimer(long),CreateOneShotTimer(long),\nResetTimer(int),DestroyTimer(int)) use timer ids so multiple\ntimers can be independently managed. In the first group, the\nCreateTimer() method takes an argument indicating whether the\ntimer is created the first time (timerType==VTKI_TIMER_FIRST) or\nwhether it is being reset (timerType==VTKI_TIMER_UPDATE). (In\ninitial implementations of VTK this was how one shot and\nrepeating timers were managed.) In the second group, the create\nmethods take a timer duration argument (in milliseconds) and\nreturn a timer id. Thus the ResetTimer(timerId) and\nDestroyTimer(timerId) methods take this timer id and operate on\nthe timer as appropriate. Methods are also available for\ndetermining\n"},
  {(char*)"SetTimerDuration", PyvtkRenderWindowInteractor_SetTimerDuration, 1,
   (char*)"V.SetTimerDuration(int)\nC++: void SetTimerDuration(unsigned long)\n\nSpecify the default timer interval (in milliseconds). (This is\nused in conjunction with the timer methods described previously,\ne.g., CreateTimer() uses this value; and\nCreateRepeatingTimer(duration) and CreateOneShotTimer(duration)\nuse the default value if the parameter \"duration\" is less than or\nequal to zero.) Care must be taken when adjusting the timer\ninterval from the default value of 10 milliseconds--it may\nadversely affect the interactors.\n"},
  {(char*)"GetTimerDurationMinValue", PyvtkRenderWindowInteractor_GetTimerDurationMinValue, 1,
   (char*)"V.GetTimerDurationMinValue() -> int\nC++: unsigned long GetTimerDurationMinValue()\n\nSpecify the default timer interval (in milliseconds). (This is\nused in conjunction with the timer methods described previously,\ne.g., CreateTimer() uses this value; and\nCreateRepeatingTimer(duration) and CreateOneShotTimer(duration)\nuse the default value if the parameter \"duration\" is less than or\nequal to zero.) Care must be taken when adjusting the timer\ninterval from the default value of 10 milliseconds--it may\nadversely affect the interactors.\n"},
  {(char*)"GetTimerDurationMaxValue", PyvtkRenderWindowInteractor_GetTimerDurationMaxValue, 1,
   (char*)"V.GetTimerDurationMaxValue() -> int\nC++: unsigned long GetTimerDurationMaxValue()\n\nSpecify the default timer interval (in milliseconds). (This is\nused in conjunction with the timer methods described previously,\ne.g., CreateTimer() uses this value; and\nCreateRepeatingTimer(duration) and CreateOneShotTimer(duration)\nuse the default value if the parameter \"duration\" is less than or\nequal to zero.) Care must be taken when adjusting the timer\ninterval from the default value of 10 milliseconds--it may\nadversely affect the interactors.\n"},
  {(char*)"SetTimerEventId", PyvtkRenderWindowInteractor_SetTimerEventId, 1,
   (char*)"V.SetTimerEventId(int)\nC++: void SetTimerEventId(int a)\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {(char*)"GetTimerEventId", PyvtkRenderWindowInteractor_GetTimerEventId, 1,
   (char*)"V.GetTimerEventId() -> int\nC++: int GetTimerEventId()\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {(char*)"SetTimerEventType", PyvtkRenderWindowInteractor_SetTimerEventType, 1,
   (char*)"V.SetTimerEventType(int)\nC++: void SetTimerEventType(int a)\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {(char*)"GetTimerEventType", PyvtkRenderWindowInteractor_GetTimerEventType, 1,
   (char*)"V.GetTimerEventType() -> int\nC++: int GetTimerEventType()\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {(char*)"SetTimerEventDuration", PyvtkRenderWindowInteractor_SetTimerEventDuration, 1,
   (char*)"V.SetTimerEventDuration(int)\nC++: void SetTimerEventDuration(int a)\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {(char*)"GetTimerEventDuration", PyvtkRenderWindowInteractor_GetTimerEventDuration, 1,
   (char*)"V.GetTimerEventDuration() -> int\nC++: int GetTimerEventDuration()\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {(char*)"SetTimerEventPlatformId", PyvtkRenderWindowInteractor_SetTimerEventPlatformId, 1,
   (char*)"V.SetTimerEventPlatformId(int)\nC++: void SetTimerEventPlatformId(int a)\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {(char*)"GetTimerEventPlatformId", PyvtkRenderWindowInteractor_GetTimerEventPlatformId, 1,
   (char*)"V.GetTimerEventPlatformId() -> int\nC++: int GetTimerEventPlatformId()\n\nThese methods are used to communicate information about the\ncurrently firing CreateTimerEvent or DestroyTimerEvent. The\ncaller of CreateTimerEvent sets up TimerEventId, TimerEventType\nand TimerEventDuration. The observer of CreateTimerEvent should\nset up an appropriate platform specific timer based on those\nvalues and set the TimerEventPlatformId before returning. The\ncaller of DestroyTimerEvent sets up TimerEventPlatformId. The\nobserver of DestroyTimerEvent should simply destroy the platform\nspecific timer created by CreateTimerEvent. See\nvtkGenericRenderWindowInteractor's InternalCreateTimer and\nInternalDestroyTimer for an example.\n"},
  {(char*)"TerminateApp", PyvtkRenderWindowInteractor_TerminateApp, 1,
   (char*)"V.TerminateApp()\nC++: virtual void TerminateApp(void)\n\nThis function is called on 'q','e' keypress if exitmethod is not\nspecified and should be overridden by platform dependent\nsubclasses to provide a termination procedure if one is required.\n"},
  {(char*)"SetInteractorStyle", PyvtkRenderWindowInteractor_SetInteractorStyle, 1,
   (char*)"V.SetInteractorStyle(vtkInteractorObserver)\nC++: virtual void SetInteractorStyle(vtkInteractorObserver *)\n\nExternal switching between joystick/trackball/new? modes. Initial\nvalue is a vtkInteractorStyleSwitch object.\n"},
  {(char*)"GetInteractorStyle", PyvtkRenderWindowInteractor_GetInteractorStyle, 1,
   (char*)"V.GetInteractorStyle() -> vtkInteractorObserver\nC++: vtkInteractorObserver *GetInteractorStyle()\n\nExternal switching between joystick/trackball/new? modes. Initial\nvalue is a vtkInteractorStyleSwitch object.\n"},
  {(char*)"SetLightFollowCamera", PyvtkRenderWindowInteractor_SetLightFollowCamera, 1,
   (char*)"V.SetLightFollowCamera(int)\nC++: void SetLightFollowCamera(int a)\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. Default is On.\n"},
  {(char*)"GetLightFollowCamera", PyvtkRenderWindowInteractor_GetLightFollowCamera, 1,
   (char*)"V.GetLightFollowCamera() -> int\nC++: int GetLightFollowCamera()\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. Default is On.\n"},
  {(char*)"LightFollowCameraOn", PyvtkRenderWindowInteractor_LightFollowCameraOn, 1,
   (char*)"V.LightFollowCameraOn()\nC++: void LightFollowCameraOn()\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. Default is On.\n"},
  {(char*)"LightFollowCameraOff", PyvtkRenderWindowInteractor_LightFollowCameraOff, 1,
   (char*)"V.LightFollowCameraOff()\nC++: void LightFollowCameraOff()\n\nTurn on/off the automatic repositioning of lights as the camera\nmoves. Default is On.\n"},
  {(char*)"SetDesiredUpdateRate", PyvtkRenderWindowInteractor_SetDesiredUpdateRate, 1,
   (char*)"V.SetDesiredUpdateRate(float)\nC++: void SetDesiredUpdateRate(double)\n\nSet/Get the desired update rate. This is used by vtkLODActor's to\ntell them how quickly they need to render.  This update is in\neffect only when the camera is being rotated, or zoomed.  When\nthe interactor is still, the StillUpdateRate is used instead. The\ndefault is 15.\n"},
  {(char*)"GetDesiredUpdateRateMinValue", PyvtkRenderWindowInteractor_GetDesiredUpdateRateMinValue, 1,
   (char*)"V.GetDesiredUpdateRateMinValue() -> float\nC++: double GetDesiredUpdateRateMinValue()\n\nSet/Get the desired update rate. This is used by vtkLODActor's to\ntell them how quickly they need to render.  This update is in\neffect only when the camera is being rotated, or zoomed.  When\nthe interactor is still, the StillUpdateRate is used instead. The\ndefault is 15.\n"},
  {(char*)"GetDesiredUpdateRateMaxValue", PyvtkRenderWindowInteractor_GetDesiredUpdateRateMaxValue, 1,
   (char*)"V.GetDesiredUpdateRateMaxValue() -> float\nC++: double GetDesiredUpdateRateMaxValue()\n\nSet/Get the desired update rate. This is used by vtkLODActor's to\ntell them how quickly they need to render.  This update is in\neffect only when the camera is being rotated, or zoomed.  When\nthe interactor is still, the StillUpdateRate is used instead. The\ndefault is 15.\n"},
  {(char*)"GetDesiredUpdateRate", PyvtkRenderWindowInteractor_GetDesiredUpdateRate, 1,
   (char*)"V.GetDesiredUpdateRate() -> float\nC++: double GetDesiredUpdateRate()\n\nSet/Get the desired update rate. This is used by vtkLODActor's to\ntell them how quickly they need to render.  This update is in\neffect only when the camera is being rotated, or zoomed.  When\nthe interactor is still, the StillUpdateRate is used instead. The\ndefault is 15.\n"},
  {(char*)"SetStillUpdateRate", PyvtkRenderWindowInteractor_SetStillUpdateRate, 1,
   (char*)"V.SetStillUpdateRate(float)\nC++: void SetStillUpdateRate(double)\n\nSet/Get the desired update rate when movement has stopped. For\nthe non-still update rate, see the SetDesiredUpdateRate method.\nThe default is 0.0001\n"},
  {(char*)"GetStillUpdateRateMinValue", PyvtkRenderWindowInteractor_GetStillUpdateRateMinValue, 1,
   (char*)"V.GetStillUpdateRateMinValue() -> float\nC++: double GetStillUpdateRateMinValue()\n\nSet/Get the desired update rate when movement has stopped. For\nthe non-still update rate, see the SetDesiredUpdateRate method.\nThe default is 0.0001\n"},
  {(char*)"GetStillUpdateRateMaxValue", PyvtkRenderWindowInteractor_GetStillUpdateRateMaxValue, 1,
   (char*)"V.GetStillUpdateRateMaxValue() -> float\nC++: double GetStillUpdateRateMaxValue()\n\nSet/Get the desired update rate when movement has stopped. For\nthe non-still update rate, see the SetDesiredUpdateRate method.\nThe default is 0.0001\n"},
  {(char*)"GetStillUpdateRate", PyvtkRenderWindowInteractor_GetStillUpdateRate, 1,
   (char*)"V.GetStillUpdateRate() -> float\nC++: double GetStillUpdateRate()\n\nSet/Get the desired update rate when movement has stopped. For\nthe non-still update rate, see the SetDesiredUpdateRate method.\nThe default is 0.0001\n"},
  {(char*)"GetInitialized", PyvtkRenderWindowInteractor_GetInitialized, 1,
   (char*)"V.GetInitialized() -> int\nC++: int GetInitialized()\n\nSee whether interactor has been initialized yet. Default is 0.\n"},
  {(char*)"SetPicker", PyvtkRenderWindowInteractor_SetPicker, 1,
   (char*)"V.SetPicker(vtkAbstractPicker)\nC++: virtual void SetPicker(vtkAbstractPicker *)\n\nSet/Get the object used to perform pick operations. In order to\npick instances of vtkProp, the picker must be a subclass of\nvtkAbstractPropPicker, meaning that it can identify a particular\ninstance of vtkProp.\n"},
  {(char*)"GetPicker", PyvtkRenderWindowInteractor_GetPicker, 1,
   (char*)"V.GetPicker() -> vtkAbstractPicker\nC++: vtkAbstractPicker *GetPicker()\n\nSet/Get the object used to perform pick operations. In order to\npick instances of vtkProp, the picker must be a subclass of\nvtkAbstractPropPicker, meaning that it can identify a particular\ninstance of vtkProp.\n"},
  {(char*)"CreateDefaultPicker", PyvtkRenderWindowInteractor_CreateDefaultPicker, 1,
   (char*)"V.CreateDefaultPicker() -> vtkAbstractPropPicker\nC++: virtual vtkAbstractPropPicker *CreateDefaultPicker()\n\nCreate default picker. Used to create one when none is specified.\nDefault is an instance of vtkPropPicker.\n"},
  {(char*)"ExitCallback", PyvtkRenderWindowInteractor_ExitCallback, 1,
   (char*)"V.ExitCallback()\nC++: virtual void ExitCallback()\n\nThese methods correspond to the the Exit, User and Pick\ncallbacks. They allow for the Style to invoke them.\n"},
  {(char*)"UserCallback", PyvtkRenderWindowInteractor_UserCallback, 1,
   (char*)"V.UserCallback()\nC++: virtual void UserCallback()\n\nThese methods correspond to the the Exit, User and Pick\ncallbacks. They allow for the Style to invoke them.\n"},
  {(char*)"StartPickCallback", PyvtkRenderWindowInteractor_StartPickCallback, 1,
   (char*)"V.StartPickCallback()\nC++: virtual void StartPickCallback()\n\nThese methods correspond to the the Exit, User and Pick\ncallbacks. They allow for the Style to invoke them.\n"},
  {(char*)"EndPickCallback", PyvtkRenderWindowInteractor_EndPickCallback, 1,
   (char*)"V.EndPickCallback()\nC++: virtual void EndPickCallback()\n\nThese methods correspond to the the Exit, User and Pick\ncallbacks. They allow for the Style to invoke them.\n"},
  {(char*)"HideCursor", PyvtkRenderWindowInteractor_HideCursor, 1,
   (char*)"V.HideCursor()\nC++: void HideCursor()\n\nHide or show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\n"},
  {(char*)"ShowCursor", PyvtkRenderWindowInteractor_ShowCursor, 1,
   (char*)"V.ShowCursor()\nC++: void ShowCursor()\n\nHide or show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\n"},
  {(char*)"Render", PyvtkRenderWindowInteractor_Render, 1,
   (char*)"V.Render()\nC++: virtual void Render()\n\nRender the scene. Just pass the render call on to the associated\nvtkRenderWindow.\n"},
  {(char*)"FlyTo", PyvtkRenderWindowInteractor_FlyTo, 1,
   (char*)"V.FlyTo(vtkRenderer, float, float, float)\nC++: void FlyTo(vtkRenderer *ren, double x, double y, double z)\n\nGiven a position x, move the current camera's focal point to x.\nThe movement is animated over the number of frames specified in\nNumberOfFlyFrames. The LOD desired frame rate is used.\n"},
  {(char*)"FlyToImage", PyvtkRenderWindowInteractor_FlyToImage, 1,
   (char*)"V.FlyToImage(vtkRenderer, float, float)\nC++: void FlyToImage(vtkRenderer *ren, double x, double y)\n\nGiven a position x, move the current camera's focal point to x.\nThe movement is animated over the number of frames specified in\nNumberOfFlyFrames. The LOD desired frame rate is used.\n"},
  {(char*)"SetNumberOfFlyFrames", PyvtkRenderWindowInteractor_SetNumberOfFlyFrames, 1,
   (char*)"V.SetNumberOfFlyFrames(int)\nC++: void SetNumberOfFlyFrames(int)\n\nSet the number of frames to fly to when FlyTo is invoked.\n"},
  {(char*)"GetNumberOfFlyFramesMinValue", PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMinValue, 1,
   (char*)"V.GetNumberOfFlyFramesMinValue() -> int\nC++: int GetNumberOfFlyFramesMinValue()\n\nSet the number of frames to fly to when FlyTo is invoked.\n"},
  {(char*)"GetNumberOfFlyFramesMaxValue", PyvtkRenderWindowInteractor_GetNumberOfFlyFramesMaxValue, 1,
   (char*)"V.GetNumberOfFlyFramesMaxValue() -> int\nC++: int GetNumberOfFlyFramesMaxValue()\n\nSet the number of frames to fly to when FlyTo is invoked.\n"},
  {(char*)"GetNumberOfFlyFrames", PyvtkRenderWindowInteractor_GetNumberOfFlyFrames, 1,
   (char*)"V.GetNumberOfFlyFrames() -> int\nC++: int GetNumberOfFlyFrames()\n\nSet the number of frames to fly to when FlyTo is invoked.\n"},
  {(char*)"SetDolly", PyvtkRenderWindowInteractor_SetDolly, 1,
   (char*)"V.SetDolly(float)\nC++: void SetDolly(double a)\n\nSet the total Dolly value to use when flying to (FlyTo()) a\nspecified point. Negative values fly away from the point.\n"},
  {(char*)"GetDolly", PyvtkRenderWindowInteractor_GetDolly, 1,
   (char*)"V.GetDolly() -> float\nC++: double GetDolly()\n\nSet the total Dolly value to use when flying to (FlyTo()) a\nspecified point. Negative values fly away from the point.\n"},
  {(char*)"GetEventPosition", PyvtkRenderWindowInteractor_GetEventPosition, 1,
   (char*)"V.GetEventPosition() -> (int, int)\nC++: int *GetEventPosition()\n\n"},
  {(char*)"GetLastEventPosition", PyvtkRenderWindowInteractor_GetLastEventPosition, 1,
   (char*)"V.GetLastEventPosition() -> (int, int)\nC++: int *GetLastEventPosition()\n\n"},
  {(char*)"SetLastEventPosition", PyvtkRenderWindowInteractor_SetLastEventPosition, 1,
   (char*)"V.SetLastEventPosition(int, int)\nC++: void SetLastEventPosition(int, int)\nV.SetLastEventPosition((int, int))\nC++: void SetLastEventPosition(int a[2])\n\n"},
  {(char*)"SetEventPosition", PyvtkRenderWindowInteractor_SetEventPosition, 1,
   (char*)"V.SetEventPosition(int, int)\nC++: virtual void SetEventPosition(int x, int y)\nV.SetEventPosition([int, int])\nC++: virtual void SetEventPosition(int pos[2])\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {(char*)"SetEventPositionFlipY", PyvtkRenderWindowInteractor_SetEventPositionFlipY, 1,
   (char*)"V.SetEventPositionFlipY(int, int)\nC++: virtual void SetEventPositionFlipY(int x, int y)\nV.SetEventPositionFlipY([int, int])\nC++: virtual void SetEventPositionFlipY(int pos[2])\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {(char*)"SetAltKey", PyvtkRenderWindowInteractor_SetAltKey, 1,
   (char*)"V.SetAltKey(int)\nC++: void SetAltKey(int a)\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {(char*)"GetAltKey", PyvtkRenderWindowInteractor_GetAltKey, 1,
   (char*)"V.GetAltKey() -> int\nC++: int GetAltKey()\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {(char*)"SetControlKey", PyvtkRenderWindowInteractor_SetControlKey, 1,
   (char*)"V.SetControlKey(int)\nC++: void SetControlKey(int a)\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {(char*)"GetControlKey", PyvtkRenderWindowInteractor_GetControlKey, 1,
   (char*)"V.GetControlKey() -> int\nC++: int GetControlKey()\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {(char*)"SetShiftKey", PyvtkRenderWindowInteractor_SetShiftKey, 1,
   (char*)"V.SetShiftKey(int)\nC++: void SetShiftKey(int a)\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {(char*)"GetShiftKey", PyvtkRenderWindowInteractor_GetShiftKey, 1,
   (char*)"V.GetShiftKey() -> int\nC++: int GetShiftKey()\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {(char*)"SetKeyCode", PyvtkRenderWindowInteractor_SetKeyCode, 1,
   (char*)"V.SetKeyCode(char)\nC++: void SetKeyCode(char a)\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {(char*)"GetKeyCode", PyvtkRenderWindowInteractor_GetKeyCode, 1,
   (char*)"V.GetKeyCode() -> char\nC++: char GetKeyCode()\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {(char*)"SetRepeatCount", PyvtkRenderWindowInteractor_SetRepeatCount, 1,
   (char*)"V.SetRepeatCount(int)\nC++: void SetRepeatCount(int a)\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {(char*)"GetRepeatCount", PyvtkRenderWindowInteractor_GetRepeatCount, 1,
   (char*)"V.GetRepeatCount() -> int\nC++: int GetRepeatCount()\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {(char*)"SetKeySym", PyvtkRenderWindowInteractor_SetKeySym, 1,
   (char*)"V.SetKeySym(string)\nC++: void SetKeySym(char *)\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {(char*)"GetKeySym", PyvtkRenderWindowInteractor_GetKeySym, 1,
   (char*)"V.GetKeySym() -> string\nC++: char *GetKeySym()\n\nSet/Get information about the current event. The current x,y\nposition is in the EventPosition, and the previous event position\nis in LastEventPosition, updated automatically each time\nEventPosition is set using its Set() method. Mouse positions are\nmeasured in pixels. The other information is about key board\ninput.\n"},
  {(char*)"SetEventInformation", PyvtkRenderWindowInteractor_SetEventInformation, 1,
   (char*)"V.SetEventInformation(int, int, int, int, char, int, string)\nC++: void SetEventInformation(int x, int y, int ctrl=0,\n    int shift=0, char keycode=0, int repeatcount=0,\n    const char *keysym=0)\n\nSet all the event information in one call.\n"},
  {(char*)"SetEventInformationFlipY", PyvtkRenderWindowInteractor_SetEventInformationFlipY, 1,
   (char*)"V.SetEventInformationFlipY(int, int, int, int, char, int, string)\nC++: void SetEventInformationFlipY(int x, int y, int ctrl=0,\n    int shift=0, char keycode=0, int repeatcount=0,\n    const char *keysym=0)\n\nCalls SetEventInformation, but flips the Y based on the current\nSize[1] value (i.e. y = this->Size[1] - y - 1).\n"},
  {(char*)"SetKeyEventInformation", PyvtkRenderWindowInteractor_SetKeyEventInformation, 1,
   (char*)"V.SetKeyEventInformation(int, int, char, int, string)\nC++: void SetKeyEventInformation(int ctrl=0, int shift=0,\n    char keycode=0, int repeatcount=0, const char *keysym=0)\n\nSet all the keyboard-related event information in one call.\n"},
  {(char*)"SetSize", PyvtkRenderWindowInteractor_SetSize, 1,
   (char*)"V.SetSize(int, int)\nC++: void SetSize(int, int)\nV.SetSize((int, int))\nC++: void SetSize(int a[2])\n\n"},
  {(char*)"GetSize", PyvtkRenderWindowInteractor_GetSize, 1,
   (char*)"V.GetSize() -> (int, int)\nC++: int *GetSize()\n\n"},
  {(char*)"SetEventSize", PyvtkRenderWindowInteractor_SetEventSize, 1,
   (char*)"V.SetEventSize(int, int)\nC++: void SetEventSize(int, int)\nV.SetEventSize((int, int))\nC++: void SetEventSize(int a[2])\n\n"},
  {(char*)"GetEventSize", PyvtkRenderWindowInteractor_GetEventSize, 1,
   (char*)"V.GetEventSize() -> (int, int)\nC++: int *GetEventSize()\n\n"},
  {(char*)"FindPokedRenderer", PyvtkRenderWindowInteractor_FindPokedRenderer, 1,
   (char*)"V.FindPokedRenderer(int, int) -> vtkRenderer\nC++: virtual vtkRenderer *FindPokedRenderer(int, int)\n\nWhen an event occurs, we must determine which Renderer the event\noccurred within, since one RenderWindow may contain multiple\nrenderers.\n"},
  {(char*)"GetObserverMediator", PyvtkRenderWindowInteractor_GetObserverMediator, 1,
   (char*)"V.GetObserverMediator() -> vtkObserverMediator\nC++: vtkObserverMediator *GetObserverMediator()\n\nReturn the object used to mediate between vtkInteractorObservers\ncontending for resources. Multiple interactor observers will\noften request different resources (e.g., cursor shape); the\nmediator uses a strategy to provide the resource based on\npriority of the observer plus the particular request (default\nversus non-default cursor shape).\n"},
  {(char*)"SetUseTDx", PyvtkRenderWindowInteractor_SetUseTDx, 1,
   (char*)"V.SetUseTDx(bool)\nC++: void SetUseTDx(bool a)\n\nUse a 3DConnexion device. Initial value is false. If VTK is not\nbuild with the TDx option, this is no-op. If VTK is build with\nthe TDx option, and a device is not connected, a warning is\nemitted. It is must be called before the first Render to be\neffective, otherwise it is ignored.\n"},
  {(char*)"GetUseTDx", PyvtkRenderWindowInteractor_GetUseTDx, 1,
   (char*)"V.GetUseTDx() -> bool\nC++: bool GetUseTDx()\n\nUse a 3DConnexion device. Initial value is false. If VTK is not\nbuild with the TDx option, this is no-op. If VTK is build with\nthe TDx option, and a device is not connected, a warning is\nemitted. It is must be called before the first Render to be\neffective, otherwise it is ignored.\n"},
  {(char*)"MouseMoveEvent", PyvtkRenderWindowInteractor_MouseMoveEvent, 1,
   (char*)"V.MouseMoveEvent()\nC++: virtual void MouseMoveEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"RightButtonPressEvent", PyvtkRenderWindowInteractor_RightButtonPressEvent, 1,
   (char*)"V.RightButtonPressEvent()\nC++: virtual void RightButtonPressEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"RightButtonReleaseEvent", PyvtkRenderWindowInteractor_RightButtonReleaseEvent, 1,
   (char*)"V.RightButtonReleaseEvent()\nC++: virtual void RightButtonReleaseEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"LeftButtonPressEvent", PyvtkRenderWindowInteractor_LeftButtonPressEvent, 1,
   (char*)"V.LeftButtonPressEvent()\nC++: virtual void LeftButtonPressEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"LeftButtonReleaseEvent", PyvtkRenderWindowInteractor_LeftButtonReleaseEvent, 1,
   (char*)"V.LeftButtonReleaseEvent()\nC++: virtual void LeftButtonReleaseEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"MiddleButtonPressEvent", PyvtkRenderWindowInteractor_MiddleButtonPressEvent, 1,
   (char*)"V.MiddleButtonPressEvent()\nC++: virtual void MiddleButtonPressEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"MiddleButtonReleaseEvent", PyvtkRenderWindowInteractor_MiddleButtonReleaseEvent, 1,
   (char*)"V.MiddleButtonReleaseEvent()\nC++: virtual void MiddleButtonReleaseEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"MouseWheelForwardEvent", PyvtkRenderWindowInteractor_MouseWheelForwardEvent, 1,
   (char*)"V.MouseWheelForwardEvent()\nC++: virtual void MouseWheelForwardEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"MouseWheelBackwardEvent", PyvtkRenderWindowInteractor_MouseWheelBackwardEvent, 1,
   (char*)"V.MouseWheelBackwardEvent()\nC++: virtual void MouseWheelBackwardEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"ExposeEvent", PyvtkRenderWindowInteractor_ExposeEvent, 1,
   (char*)"V.ExposeEvent()\nC++: virtual void ExposeEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"ConfigureEvent", PyvtkRenderWindowInteractor_ConfigureEvent, 1,
   (char*)"V.ConfigureEvent()\nC++: virtual void ConfigureEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"EnterEvent", PyvtkRenderWindowInteractor_EnterEvent, 1,
   (char*)"V.EnterEvent()\nC++: virtual void EnterEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"LeaveEvent", PyvtkRenderWindowInteractor_LeaveEvent, 1,
   (char*)"V.LeaveEvent()\nC++: virtual void LeaveEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"KeyPressEvent", PyvtkRenderWindowInteractor_KeyPressEvent, 1,
   (char*)"V.KeyPressEvent()\nC++: virtual void KeyPressEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"KeyReleaseEvent", PyvtkRenderWindowInteractor_KeyReleaseEvent, 1,
   (char*)"V.KeyReleaseEvent()\nC++: virtual void KeyReleaseEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"CharEvent", PyvtkRenderWindowInteractor_CharEvent, 1,
   (char*)"V.CharEvent()\nC++: virtual void CharEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {(char*)"ExitEvent", PyvtkRenderWindowInteractor_ExitEvent, 1,
   (char*)"V.ExitEvent()\nC++: virtual void ExitEvent()\n\nFire various events. SetEventInformation should be called just\nprior to calling any of these methods. These methods will Invoke\nthe corresponding vtk event.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderWindowInteractor_StaticNew()
{
  return vtkRenderWindowInteractor::New();
}

PyObject *PyVTKClass_vtkRenderWindowInteractorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderWindowInteractor_StaticNew,
    PyvtkRenderWindowInteractor_Methods,
    "vtkRenderWindowInteractor", modulename,
    NULL, NULL,
    PyvtkRenderWindowInteractor_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"OneShotTimer", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"RepeatingTimer", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkRenderWindowInteractor_Doc()
{
  static const char *docstring[] = {
    "vtkRenderWindowInteractor - platform-independent render window\ninteraction including picking and frame rate control.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkRenderWindowInteractor provides a platform-independent interaction\nmechanism for mouse/key/time events. It serves as a base class for\nplatform-dependent implementations that handle routing of\nmouse/key/timer messages to vtkInteractorObserver and its subclasses.\nvtkRenderWindowInteractor also provides controls for picking,\nrendering frame rate, and headlights.\n\nvtkRenderWindowInteractor has chan",
    "ged from previous implementations\nand now serves only as a shell to hold user preferences and route\nmessages to vtkInteractorStyle. Callbacks are available for many\nevents.  Platform specific subclasses should provide methods for\nmanipulating timers, TerminateApp, and an event loop if required via\nInitialize/Start/Enable/Disable.\n\nCaveats:\n\nvtkRenderWindowInteractor routes events through VTK's\ncom",
    "mand/observer design pattern. That is, when\nvtkRenderWindowInteractor (actually, one of its subclasses) sees a\nplatform-dependent event, it translates this into a VTK event using\nthe InvokeEvent() method. Then any vtkInteractorObservers registered\nfor that event are expected to respond as appropriate.\n\nSee Also:\n\nvtkInteractorObserver\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderWindowInteractor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderWindowInteractorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderWindowInteractor", o) != 0)
    {
    Py_DECREF(o);
    }

}

