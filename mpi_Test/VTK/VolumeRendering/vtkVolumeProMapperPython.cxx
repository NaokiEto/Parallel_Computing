// python wrapper for vtkVolumeProMapper
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
#include "vtkVolumeProMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVolumeProMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVolumeProMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVolumeProMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVolumeProMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeMapperNew
#endif

static const char **PyvtkVolumeProMapper_Doc();


static PyObject *
PyvtkVolumeProMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

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
      tempr = op->vtkVolumeProMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

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
      tempr = op->vtkVolumeProMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  vtkVolumeProMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::NewInstance();
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
PyvtkVolumeProMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVolumeProMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVolumeProMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkVolumeProMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBlendMode(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetBlendMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetBlendModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlendModeMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetBlendModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetBlendModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlendModeMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetBlendModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlendMode();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetBlendMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetBlendModeToComposite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToComposite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBlendModeToComposite();
      }
    else
      {
      op->vtkVolumeProMapper::SetBlendModeToComposite();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetBlendModeToMaximumIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToMaximumIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBlendModeToMaximumIntensity();
      }
    else
      {
      op->vtkVolumeProMapper::SetBlendModeToMaximumIntensity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetBlendModeToMinimumIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToMinimumIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBlendModeToMinimumIntensity();
      }
    else
      {
      op->vtkVolumeProMapper::SetBlendModeToMinimumIntensity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetBlendModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlendModeAsString();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetBlendModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetSubVolume_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetSubVolume(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkVolumeProMapper::SetSubVolume(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProMapper_SetSubVolume_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSubVolume(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetSubVolume(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProMapper_SetSubVolume(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkVolumeProMapper_SetSubVolume_s1(self, args);
    case 1:
      return PyvtkVolumeProMapper_SetSubVolume_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSubVolume");
  return NULL;
}



static PyObject *
PyvtkVolumeProMapper_GetSubVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSubVolume();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetSubVolume();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCursor(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetCursor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetCursorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCursorMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCursorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetCursorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCursorMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCursorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCursor();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCursor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_CursorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CursorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CursorOn();
      }
    else
      {
      op->vtkVolumeProMapper::CursorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_CursorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CursorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CursorOff();
      }
    else
      {
      op->vtkVolumeProMapper::CursorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetCursorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCursorType(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetCursorType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetCursorTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCursorTypeMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCursorTypeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetCursorTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCursorTypeMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCursorTypeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetCursorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCursorType();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCursorType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetCursorTypeToCrossHair(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorTypeToCrossHair");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCursorTypeToCrossHair();
      }
    else
      {
      op->vtkVolumeProMapper::SetCursorTypeToCrossHair();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetCursorTypeToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorTypeToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCursorTypeToPlane();
      }
    else
      {
      op->vtkVolumeProMapper::SetCursorTypeToPlane();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetCursorTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCursorTypeAsString();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCursorTypeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetCursorPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

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
      op->SetCursorPosition(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVolumeProMapper::SetCursorPosition(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProMapper_SetCursorPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCursorPosition(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetCursorPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProMapper_SetCursorPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVolumeProMapper_SetCursorPosition_s1(self, args);
    case 1:
      return PyvtkVolumeProMapper_SetCursorPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCursorPosition");
  return NULL;
}



static PyObject *
PyvtkVolumeProMapper_GetCursorPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCursorPosition();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCursorPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetCursorXAxisColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorXAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

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
      op->SetCursorXAxisColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVolumeProMapper::SetCursorXAxisColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProMapper_SetCursorXAxisColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorXAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCursorXAxisColor(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetCursorXAxisColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProMapper_SetCursorXAxisColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVolumeProMapper_SetCursorXAxisColor_s1(self, args);
    case 1:
      return PyvtkVolumeProMapper_SetCursorXAxisColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCursorXAxisColor");
  return NULL;
}



static PyObject *
PyvtkVolumeProMapper_GetCursorXAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorXAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCursorXAxisColor();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCursorXAxisColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetCursorYAxisColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorYAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

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
      op->SetCursorYAxisColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVolumeProMapper::SetCursorYAxisColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProMapper_SetCursorYAxisColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorYAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCursorYAxisColor(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetCursorYAxisColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProMapper_SetCursorYAxisColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVolumeProMapper_SetCursorYAxisColor_s1(self, args);
    case 1:
      return PyvtkVolumeProMapper_SetCursorYAxisColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCursorYAxisColor");
  return NULL;
}



static PyObject *
PyvtkVolumeProMapper_GetCursorYAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorYAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCursorYAxisColor();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCursorYAxisColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetCursorZAxisColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorZAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

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
      op->SetCursorZAxisColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVolumeProMapper::SetCursorZAxisColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProMapper_SetCursorZAxisColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorZAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCursorZAxisColor(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetCursorZAxisColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProMapper_SetCursorZAxisColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVolumeProMapper_SetCursorZAxisColor_s1(self, args);
    case 1:
      return PyvtkVolumeProMapper_SetCursorZAxisColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCursorZAxisColor");
  return NULL;
}



static PyObject *
PyvtkVolumeProMapper_GetCursorZAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorZAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCursorZAxisColor();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCursorZAxisColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetSuperSampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuperSampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSuperSampling(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetSuperSampling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetSuperSamplingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperSamplingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSuperSamplingMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetSuperSamplingMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetSuperSamplingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperSamplingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSuperSamplingMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetSuperSamplingMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetSuperSampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperSampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSuperSampling();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetSuperSampling();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SuperSamplingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SuperSamplingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SuperSamplingOn();
      }
    else
      {
      op->vtkVolumeProMapper::SuperSamplingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SuperSamplingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SuperSamplingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SuperSamplingOff();
      }
    else
      {
      op->vtkVolumeProMapper::SuperSamplingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetSuperSamplingFactor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuperSamplingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

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
      op->SetSuperSamplingFactor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVolumeProMapper::SetSuperSamplingFactor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProMapper_SetSuperSamplingFactor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuperSamplingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

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
      op->SetSuperSamplingFactor(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetSuperSamplingFactor(temp0);
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
PyvtkVolumeProMapper_SetSuperSamplingFactor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVolumeProMapper_SetSuperSamplingFactor_s1(self, args);
    case 1:
      return PyvtkVolumeProMapper_SetSuperSamplingFactor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSuperSamplingFactor");
  return NULL;
}



static PyObject *
PyvtkVolumeProMapper_GetSuperSamplingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperSamplingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSuperSamplingFactor();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetSuperSamplingFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetCutPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCutPlane(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetCutPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetCutPlaneMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutPlaneMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCutPlaneMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCutPlaneMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetCutPlaneMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutPlaneMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCutPlaneMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCutPlaneMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetCutPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCutPlane();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCutPlane();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_CutPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CutPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CutPlaneOn();
      }
    else
      {
      op->vtkVolumeProMapper::CutPlaneOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_CutPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CutPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CutPlaneOff();
      }
    else
      {
      op->vtkVolumeProMapper::CutPlaneOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetCutPlaneEquation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutPlaneEquation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

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
      op->SetCutPlaneEquation(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkVolumeProMapper::SetCutPlaneEquation(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProMapper_SetCutPlaneEquation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutPlaneEquation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCutPlaneEquation(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetCutPlaneEquation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeProMapper_SetCutPlaneEquation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkVolumeProMapper_SetCutPlaneEquation_s1(self, args);
    case 1:
      return PyvtkVolumeProMapper_SetCutPlaneEquation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCutPlaneEquation");
  return NULL;
}



static PyObject *
PyvtkVolumeProMapper_GetCutPlaneEquation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutPlaneEquation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCutPlaneEquation();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCutPlaneEquation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetCutPlaneThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutPlaneThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCutPlaneThickness(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetCutPlaneThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetCutPlaneThicknessMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutPlaneThicknessMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCutPlaneThicknessMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCutPlaneThicknessMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetCutPlaneThicknessMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutPlaneThicknessMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCutPlaneThicknessMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCutPlaneThicknessMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetCutPlaneThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutPlaneThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCutPlaneThickness();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCutPlaneThickness();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetCutPlaneFallOffDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutPlaneFallOffDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCutPlaneFallOffDistance(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetCutPlaneFallOffDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetCutPlaneFallOffDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutPlaneFallOffDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCutPlaneFallOffDistanceMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCutPlaneFallOffDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetCutPlaneFallOffDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutPlaneFallOffDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCutPlaneFallOffDistanceMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCutPlaneFallOffDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetCutPlaneFallOffDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutPlaneFallOffDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCutPlaneFallOffDistance();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetCutPlaneFallOffDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetGradientOpacityModulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientOpacityModulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGradientOpacityModulation(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetGradientOpacityModulation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetGradientOpacityModulationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityModulationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientOpacityModulationMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetGradientOpacityModulationMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetGradientOpacityModulationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityModulationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientOpacityModulationMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetGradientOpacityModulationMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetGradientOpacityModulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityModulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientOpacityModulation();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetGradientOpacityModulation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GradientOpacityModulationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientOpacityModulationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GradientOpacityModulationOn();
      }
    else
      {
      op->vtkVolumeProMapper::GradientOpacityModulationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GradientOpacityModulationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientOpacityModulationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GradientOpacityModulationOff();
      }
    else
      {
      op->vtkVolumeProMapper::GradientOpacityModulationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetGradientDiffuseModulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientDiffuseModulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGradientDiffuseModulation(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetGradientDiffuseModulation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetGradientDiffuseModulationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientDiffuseModulationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientDiffuseModulationMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetGradientDiffuseModulationMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetGradientDiffuseModulationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientDiffuseModulationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientDiffuseModulationMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetGradientDiffuseModulationMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetGradientDiffuseModulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientDiffuseModulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientDiffuseModulation();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetGradientDiffuseModulation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GradientDiffuseModulationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientDiffuseModulationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GradientDiffuseModulationOn();
      }
    else
      {
      op->vtkVolumeProMapper::GradientDiffuseModulationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GradientDiffuseModulationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientDiffuseModulationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GradientDiffuseModulationOff();
      }
    else
      {
      op->vtkVolumeProMapper::GradientDiffuseModulationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetGradientSpecularModulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientSpecularModulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGradientSpecularModulation(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetGradientSpecularModulation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetGradientSpecularModulationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientSpecularModulationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientSpecularModulationMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetGradientSpecularModulationMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetGradientSpecularModulationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientSpecularModulationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientSpecularModulationMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetGradientSpecularModulationMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetGradientSpecularModulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientSpecularModulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientSpecularModulation();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetGradientSpecularModulation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GradientSpecularModulationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientSpecularModulationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GradientSpecularModulationOn();
      }
    else
      {
      op->vtkVolumeProMapper::GradientSpecularModulationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GradientSpecularModulationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientSpecularModulationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GradientSpecularModulationOff();
      }
    else
      {
      op->vtkVolumeProMapper::GradientSpecularModulationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetNoHardware(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoHardware");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNoHardware();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetNoHardware();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetWrongVLIVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrongVLIVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWrongVLIVersion();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetWrongVLIVersion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetNumberOfBoards(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBoards");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfBoards();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetNumberOfBoards();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetMajorBoardVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMajorBoardVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMajorBoardVersion();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetMajorBoardVersion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetMinorBoardVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorBoardVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinorBoardVersion();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetMinorBoardVersion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetAvailableBoardMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAvailableBoardMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAvailableBoardMemory();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetAvailableBoardMemory();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIntermixIntersectingGeometry(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetIntermixIntersectingGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetIntermixIntersectingGeometryMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntermixIntersectingGeometryMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetIntermixIntersectingGeometryMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetIntermixIntersectingGeometryMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntermixIntersectingGeometryMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetIntermixIntersectingGeometryMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIntermixIntersectingGeometry();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetIntermixIntersectingGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_IntermixIntersectingGeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntermixIntersectingGeometryOn();
      }
    else
      {
      op->vtkVolumeProMapper::IntermixIntersectingGeometryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_IntermixIntersectingGeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntermixIntersectingGeometryOff();
      }
    else
      {
      op->vtkVolumeProMapper::IntermixIntersectingGeometryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetAutoAdjustMipmapLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustMipmapLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoAdjustMipmapLevels(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetAutoAdjustMipmapLevels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetAutoAdjustMipmapLevelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustMipmapLevelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutoAdjustMipmapLevelsMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetAutoAdjustMipmapLevelsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetAutoAdjustMipmapLevelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustMipmapLevelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutoAdjustMipmapLevelsMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetAutoAdjustMipmapLevelsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetAutoAdjustMipmapLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustMipmapLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutoAdjustMipmapLevels();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetAutoAdjustMipmapLevels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_AutoAdjustMipmapLevelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustMipmapLevelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustMipmapLevelsOn();
      }
    else
      {
      op->vtkVolumeProMapper::AutoAdjustMipmapLevelsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_AutoAdjustMipmapLevelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustMipmapLevelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustMipmapLevelsOff();
      }
    else
      {
      op->vtkVolumeProMapper::AutoAdjustMipmapLevelsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetMinimumMipmapLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumMipmapLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumMipmapLevel(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetMinimumMipmapLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetMinimumMipmapLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumMipmapLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumMipmapLevelMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetMinimumMipmapLevelMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetMinimumMipmapLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumMipmapLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumMipmapLevelMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetMinimumMipmapLevelMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetMinimumMipmapLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumMipmapLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumMipmapLevel();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetMinimumMipmapLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetMaximumMipmapLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumMipmapLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumMipmapLevel(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetMaximumMipmapLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetMaximumMipmapLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumMipmapLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumMipmapLevelMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetMaximumMipmapLevelMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetMaximumMipmapLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumMipmapLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumMipmapLevelMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetMaximumMipmapLevelMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetMaximumMipmapLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumMipmapLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumMipmapLevel();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetMaximumMipmapLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_SetMipmapLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMipmapLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMipmapLevel(temp0);
      }
    else
      {
      op->vtkVolumeProMapper::SetMipmapLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetMipmapLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMipmapLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMipmapLevelMinValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetMipmapLevelMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetMipmapLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMipmapLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMipmapLevelMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetMipmapLevelMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeProMapper_GetMipmapLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMipmapLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProMapper *op = static_cast<vtkVolumeProMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMipmapLevel();
      }
    else
      {
      tempr = op->vtkVolumeProMapper::GetMipmapLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeProMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeProMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeProMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeProMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVolumeProMapper\nC++: vtkVolumeProMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeProMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeProMapper\nC++: vtkVolumeProMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkVolumeProMapper_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *, vtkVolume *)\n\nRender the image using the hardware and place it in the frame\nbuffer\n"},
  {(char*)"SetBlendMode", PyvtkVolumeProMapper_SetBlendMode, 1,
   (char*)"V.SetBlendMode(int)\nC++: void SetBlendMode(int)\n\nSet the blend mode\n"},
  {(char*)"GetBlendModeMinValue", PyvtkVolumeProMapper_GetBlendModeMinValue, 1,
   (char*)"V.GetBlendModeMinValue() -> int\nC++: int GetBlendModeMinValue()\n\nSet the blend mode\n"},
  {(char*)"GetBlendModeMaxValue", PyvtkVolumeProMapper_GetBlendModeMaxValue, 1,
   (char*)"V.GetBlendModeMaxValue() -> int\nC++: int GetBlendModeMaxValue()\n\nSet the blend mode\n"},
  {(char*)"GetBlendMode", PyvtkVolumeProMapper_GetBlendMode, 1,
   (char*)"V.GetBlendMode() -> int\nC++: int GetBlendMode()\n\nSet the blend mode\n"},
  {(char*)"SetBlendModeToComposite", PyvtkVolumeProMapper_SetBlendModeToComposite, 1,
   (char*)"V.SetBlendModeToComposite()\nC++: void SetBlendModeToComposite()\n\nSet the blend mode\n"},
  {(char*)"SetBlendModeToMaximumIntensity", PyvtkVolumeProMapper_SetBlendModeToMaximumIntensity, 1,
   (char*)"V.SetBlendModeToMaximumIntensity()\nC++: void SetBlendModeToMaximumIntensity()\n\nSet the blend mode\n"},
  {(char*)"SetBlendModeToMinimumIntensity", PyvtkVolumeProMapper_SetBlendModeToMinimumIntensity, 1,
   (char*)"V.SetBlendModeToMinimumIntensity()\nC++: void SetBlendModeToMinimumIntensity()\n\nSet the blend mode\n"},
  {(char*)"GetBlendModeAsString", PyvtkVolumeProMapper_GetBlendModeAsString, 1,
   (char*)"V.GetBlendModeAsString() -> string\nC++: const char *GetBlendModeAsString(void)\n\nSet the blend mode\n"},
  {(char*)"SetSubVolume", PyvtkVolumeProMapper_SetSubVolume, 1,
   (char*)"V.SetSubVolume(int, int, int, int, int, int)\nC++: void SetSubVolume(int, int, int, int, int, int)\nV.SetSubVolume((int, int, int, int, int, int))\nC++: void SetSubVolume(int a[6])\n\n"},
  {(char*)"GetSubVolume", PyvtkVolumeProMapper_GetSubVolume, 1,
   (char*)"V.GetSubVolume() -> (int, int, int, int, int, int)\nC++: int *GetSubVolume()\n\nSet the subvolume\n"},
  {(char*)"SetCursor", PyvtkVolumeProMapper_SetCursor, 1,
   (char*)"V.SetCursor(int)\nC++: void SetCursor(int)\n\nTurn the cursor on / off\n"},
  {(char*)"GetCursorMinValue", PyvtkVolumeProMapper_GetCursorMinValue, 1,
   (char*)"V.GetCursorMinValue() -> int\nC++: int GetCursorMinValue()\n\nTurn the cursor on / off\n"},
  {(char*)"GetCursorMaxValue", PyvtkVolumeProMapper_GetCursorMaxValue, 1,
   (char*)"V.GetCursorMaxValue() -> int\nC++: int GetCursorMaxValue()\n\nTurn the cursor on / off\n"},
  {(char*)"GetCursor", PyvtkVolumeProMapper_GetCursor, 1,
   (char*)"V.GetCursor() -> int\nC++: int GetCursor()\n\nTurn the cursor on / off\n"},
  {(char*)"CursorOn", PyvtkVolumeProMapper_CursorOn, 1,
   (char*)"V.CursorOn()\nC++: void CursorOn()\n\nTurn the cursor on / off\n"},
  {(char*)"CursorOff", PyvtkVolumeProMapper_CursorOff, 1,
   (char*)"V.CursorOff()\nC++: void CursorOff()\n\nTurn the cursor on / off\n"},
  {(char*)"SetCursorType", PyvtkVolumeProMapper_SetCursorType, 1,
   (char*)"V.SetCursorType(int)\nC++: void SetCursorType(int)\n\nSet the type of the cursor\n"},
  {(char*)"GetCursorTypeMinValue", PyvtkVolumeProMapper_GetCursorTypeMinValue, 1,
   (char*)"V.GetCursorTypeMinValue() -> int\nC++: int GetCursorTypeMinValue()\n\nSet the type of the cursor\n"},
  {(char*)"GetCursorTypeMaxValue", PyvtkVolumeProMapper_GetCursorTypeMaxValue, 1,
   (char*)"V.GetCursorTypeMaxValue() -> int\nC++: int GetCursorTypeMaxValue()\n\nSet the type of the cursor\n"},
  {(char*)"GetCursorType", PyvtkVolumeProMapper_GetCursorType, 1,
   (char*)"V.GetCursorType() -> int\nC++: int GetCursorType()\n\nSet the type of the cursor\n"},
  {(char*)"SetCursorTypeToCrossHair", PyvtkVolumeProMapper_SetCursorTypeToCrossHair, 1,
   (char*)"V.SetCursorTypeToCrossHair()\nC++: void SetCursorTypeToCrossHair()\n\nSet the type of the cursor\n"},
  {(char*)"SetCursorTypeToPlane", PyvtkVolumeProMapper_SetCursorTypeToPlane, 1,
   (char*)"V.SetCursorTypeToPlane()\nC++: void SetCursorTypeToPlane()\n\nSet the type of the cursor\n"},
  {(char*)"GetCursorTypeAsString", PyvtkVolumeProMapper_GetCursorTypeAsString, 1,
   (char*)"V.GetCursorTypeAsString() -> string\nC++: const char *GetCursorTypeAsString(void)\n\nSet the type of the cursor\n"},
  {(char*)"SetCursorPosition", PyvtkVolumeProMapper_SetCursorPosition, 1,
   (char*)"V.SetCursorPosition(float, float, float)\nC++: void SetCursorPosition(double, double, double)\nV.SetCursorPosition((float, float, float))\nC++: void SetCursorPosition(double a[3])\n\n"},
  {(char*)"GetCursorPosition", PyvtkVolumeProMapper_GetCursorPosition, 1,
   (char*)"V.GetCursorPosition() -> (float, float, float)\nC++: double *GetCursorPosition()\n\nSet/Get the cursor position\n"},
  {(char*)"SetCursorXAxisColor", PyvtkVolumeProMapper_SetCursorXAxisColor, 1,
   (char*)"V.SetCursorXAxisColor(float, float, float)\nC++: void SetCursorXAxisColor(double, double, double)\nV.SetCursorXAxisColor((float, float, float))\nC++: void SetCursorXAxisColor(double a[3])\n\n"},
  {(char*)"GetCursorXAxisColor", PyvtkVolumeProMapper_GetCursorXAxisColor, 1,
   (char*)"V.GetCursorXAxisColor() -> (float, float, float)\nC++: double *GetCursorXAxisColor()\n\nSet/Get the cursor color\n"},
  {(char*)"SetCursorYAxisColor", PyvtkVolumeProMapper_SetCursorYAxisColor, 1,
   (char*)"V.SetCursorYAxisColor(float, float, float)\nC++: void SetCursorYAxisColor(double, double, double)\nV.SetCursorYAxisColor((float, float, float))\nC++: void SetCursorYAxisColor(double a[3])\n\n"},
  {(char*)"GetCursorYAxisColor", PyvtkVolumeProMapper_GetCursorYAxisColor, 1,
   (char*)"V.GetCursorYAxisColor() -> (float, float, float)\nC++: double *GetCursorYAxisColor()\n\nSet/Get the cursor color\n"},
  {(char*)"SetCursorZAxisColor", PyvtkVolumeProMapper_SetCursorZAxisColor, 1,
   (char*)"V.SetCursorZAxisColor(float, float, float)\nC++: void SetCursorZAxisColor(double, double, double)\nV.SetCursorZAxisColor((float, float, float))\nC++: void SetCursorZAxisColor(double a[3])\n\n"},
  {(char*)"GetCursorZAxisColor", PyvtkVolumeProMapper_GetCursorZAxisColor, 1,
   (char*)"V.GetCursorZAxisColor() -> (float, float, float)\nC++: double *GetCursorZAxisColor()\n\nSet/Get the cursor color\n"},
  {(char*)"SetSuperSampling", PyvtkVolumeProMapper_SetSuperSampling, 1,
   (char*)"V.SetSuperSampling(int)\nC++: void SetSuperSampling(int)\n\nTurn supersampling on/off\n"},
  {(char*)"GetSuperSamplingMinValue", PyvtkVolumeProMapper_GetSuperSamplingMinValue, 1,
   (char*)"V.GetSuperSamplingMinValue() -> int\nC++: int GetSuperSamplingMinValue()\n\nTurn supersampling on/off\n"},
  {(char*)"GetSuperSamplingMaxValue", PyvtkVolumeProMapper_GetSuperSamplingMaxValue, 1,
   (char*)"V.GetSuperSamplingMaxValue() -> int\nC++: int GetSuperSamplingMaxValue()\n\nTurn supersampling on/off\n"},
  {(char*)"GetSuperSampling", PyvtkVolumeProMapper_GetSuperSampling, 1,
   (char*)"V.GetSuperSampling() -> int\nC++: int GetSuperSampling()\n\nTurn supersampling on/off\n"},
  {(char*)"SuperSamplingOn", PyvtkVolumeProMapper_SuperSamplingOn, 1,
   (char*)"V.SuperSamplingOn()\nC++: void SuperSamplingOn()\n\nTurn supersampling on/off\n"},
  {(char*)"SuperSamplingOff", PyvtkVolumeProMapper_SuperSamplingOff, 1,
   (char*)"V.SuperSamplingOff()\nC++: void SuperSamplingOff()\n\nTurn supersampling on/off\n"},
  {(char*)"SetSuperSamplingFactor", PyvtkVolumeProMapper_SetSuperSamplingFactor, 1,
   (char*)"V.SetSuperSamplingFactor(float, float, float)\nC++: virtual void SetSuperSamplingFactor(double x, double y,\n    double z)\nV.SetSuperSamplingFactor([float, float, float])\nC++: void SetSuperSamplingFactor(double f[3])\n\nSet the supersampling factors\n"},
  {(char*)"GetSuperSamplingFactor", PyvtkVolumeProMapper_GetSuperSamplingFactor, 1,
   (char*)"V.GetSuperSamplingFactor() -> (float, float, float)\nC++: double *GetSuperSamplingFactor()\n\nSet the supersampling factors\n"},
  {(char*)"SetCutPlane", PyvtkVolumeProMapper_SetCutPlane, 1,
   (char*)"V.SetCutPlane(int)\nC++: void SetCutPlane(int)\n\nTurn on / off the cut plane\n"},
  {(char*)"GetCutPlaneMinValue", PyvtkVolumeProMapper_GetCutPlaneMinValue, 1,
   (char*)"V.GetCutPlaneMinValue() -> int\nC++: int GetCutPlaneMinValue()\n\nTurn on / off the cut plane\n"},
  {(char*)"GetCutPlaneMaxValue", PyvtkVolumeProMapper_GetCutPlaneMaxValue, 1,
   (char*)"V.GetCutPlaneMaxValue() -> int\nC++: int GetCutPlaneMaxValue()\n\nTurn on / off the cut plane\n"},
  {(char*)"GetCutPlane", PyvtkVolumeProMapper_GetCutPlane, 1,
   (char*)"V.GetCutPlane() -> int\nC++: int GetCutPlane()\n\nTurn on / off the cut plane\n"},
  {(char*)"CutPlaneOn", PyvtkVolumeProMapper_CutPlaneOn, 1,
   (char*)"V.CutPlaneOn()\nC++: void CutPlaneOn()\n\nTurn on / off the cut plane\n"},
  {(char*)"CutPlaneOff", PyvtkVolumeProMapper_CutPlaneOff, 1,
   (char*)"V.CutPlaneOff()\nC++: void CutPlaneOff()\n\nTurn on / off the cut plane\n"},
  {(char*)"SetCutPlaneEquation", PyvtkVolumeProMapper_SetCutPlaneEquation, 1,
   (char*)"V.SetCutPlaneEquation(float, float, float, float)\nC++: void SetCutPlaneEquation(double, double, double, double)\nV.SetCutPlaneEquation((float, float, float, float))\nC++: void SetCutPlaneEquation(double a[4])\n\n"},
  {(char*)"GetCutPlaneEquation", PyvtkVolumeProMapper_GetCutPlaneEquation, 1,
   (char*)"V.GetCutPlaneEquation() -> (float, float, float, float)\nC++: double *GetCutPlaneEquation()\n\nSet/Get the cut plane equation\n"},
  {(char*)"SetCutPlaneThickness", PyvtkVolumeProMapper_SetCutPlaneThickness, 1,
   (char*)"V.SetCutPlaneThickness(float)\nC++: void SetCutPlaneThickness(double)\n\nSet / Get the cut plane thickness\n"},
  {(char*)"GetCutPlaneThicknessMinValue", PyvtkVolumeProMapper_GetCutPlaneThicknessMinValue, 1,
   (char*)"V.GetCutPlaneThicknessMinValue() -> float\nC++: double GetCutPlaneThicknessMinValue()\n\nSet / Get the cut plane thickness\n"},
  {(char*)"GetCutPlaneThicknessMaxValue", PyvtkVolumeProMapper_GetCutPlaneThicknessMaxValue, 1,
   (char*)"V.GetCutPlaneThicknessMaxValue() -> float\nC++: double GetCutPlaneThicknessMaxValue()\n\nSet / Get the cut plane thickness\n"},
  {(char*)"GetCutPlaneThickness", PyvtkVolumeProMapper_GetCutPlaneThickness, 1,
   (char*)"V.GetCutPlaneThickness() -> float\nC++: double GetCutPlaneThickness()\n\nSet / Get the cut plane thickness\n"},
  {(char*)"SetCutPlaneFallOffDistance", PyvtkVolumeProMapper_SetCutPlaneFallOffDistance, 1,
   (char*)"V.SetCutPlaneFallOffDistance(int)\nC++: void SetCutPlaneFallOffDistance(int)\n\nSet / Get the cut plane falloff value for intensities\n"},
  {(char*)"GetCutPlaneFallOffDistanceMinValue", PyvtkVolumeProMapper_GetCutPlaneFallOffDistanceMinValue, 1,
   (char*)"V.GetCutPlaneFallOffDistanceMinValue() -> int\nC++: int GetCutPlaneFallOffDistanceMinValue()\n\nSet / Get the cut plane falloff value for intensities\n"},
  {(char*)"GetCutPlaneFallOffDistanceMaxValue", PyvtkVolumeProMapper_GetCutPlaneFallOffDistanceMaxValue, 1,
   (char*)"V.GetCutPlaneFallOffDistanceMaxValue() -> int\nC++: int GetCutPlaneFallOffDistanceMaxValue()\n\nSet / Get the cut plane falloff value for intensities\n"},
  {(char*)"GetCutPlaneFallOffDistance", PyvtkVolumeProMapper_GetCutPlaneFallOffDistance, 1,
   (char*)"V.GetCutPlaneFallOffDistance() -> int\nC++: int GetCutPlaneFallOffDistance()\n\nSet / Get the cut plane falloff value for intensities\n"},
  {(char*)"SetGradientOpacityModulation", PyvtkVolumeProMapper_SetGradientOpacityModulation, 1,
   (char*)"V.SetGradientOpacityModulation(int)\nC++: void SetGradientOpacityModulation(int)\n\nSet/Get the gradient magnitude opacity modulation\n"},
  {(char*)"GetGradientOpacityModulationMinValue", PyvtkVolumeProMapper_GetGradientOpacityModulationMinValue, 1,
   (char*)"V.GetGradientOpacityModulationMinValue() -> int\nC++: int GetGradientOpacityModulationMinValue()\n\nSet/Get the gradient magnitude opacity modulation\n"},
  {(char*)"GetGradientOpacityModulationMaxValue", PyvtkVolumeProMapper_GetGradientOpacityModulationMaxValue, 1,
   (char*)"V.GetGradientOpacityModulationMaxValue() -> int\nC++: int GetGradientOpacityModulationMaxValue()\n\nSet/Get the gradient magnitude opacity modulation\n"},
  {(char*)"GetGradientOpacityModulation", PyvtkVolumeProMapper_GetGradientOpacityModulation, 1,
   (char*)"V.GetGradientOpacityModulation() -> int\nC++: int GetGradientOpacityModulation()\n\nSet/Get the gradient magnitude opacity modulation\n"},
  {(char*)"GradientOpacityModulationOn", PyvtkVolumeProMapper_GradientOpacityModulationOn, 1,
   (char*)"V.GradientOpacityModulationOn()\nC++: void GradientOpacityModulationOn()\n\nSet/Get the gradient magnitude opacity modulation\n"},
  {(char*)"GradientOpacityModulationOff", PyvtkVolumeProMapper_GradientOpacityModulationOff, 1,
   (char*)"V.GradientOpacityModulationOff()\nC++: void GradientOpacityModulationOff()\n\nSet/Get the gradient magnitude opacity modulation\n"},
  {(char*)"SetGradientDiffuseModulation", PyvtkVolumeProMapper_SetGradientDiffuseModulation, 1,
   (char*)"V.SetGradientDiffuseModulation(int)\nC++: void SetGradientDiffuseModulation(int)\n\nSet/Get the gradient magnitude diffuse modulation\n"},
  {(char*)"GetGradientDiffuseModulationMinValue", PyvtkVolumeProMapper_GetGradientDiffuseModulationMinValue, 1,
   (char*)"V.GetGradientDiffuseModulationMinValue() -> int\nC++: int GetGradientDiffuseModulationMinValue()\n\nSet/Get the gradient magnitude diffuse modulation\n"},
  {(char*)"GetGradientDiffuseModulationMaxValue", PyvtkVolumeProMapper_GetGradientDiffuseModulationMaxValue, 1,
   (char*)"V.GetGradientDiffuseModulationMaxValue() -> int\nC++: int GetGradientDiffuseModulationMaxValue()\n\nSet/Get the gradient magnitude diffuse modulation\n"},
  {(char*)"GetGradientDiffuseModulation", PyvtkVolumeProMapper_GetGradientDiffuseModulation, 1,
   (char*)"V.GetGradientDiffuseModulation() -> int\nC++: int GetGradientDiffuseModulation()\n\nSet/Get the gradient magnitude diffuse modulation\n"},
  {(char*)"GradientDiffuseModulationOn", PyvtkVolumeProMapper_GradientDiffuseModulationOn, 1,
   (char*)"V.GradientDiffuseModulationOn()\nC++: void GradientDiffuseModulationOn()\n\nSet/Get the gradient magnitude diffuse modulation\n"},
  {(char*)"GradientDiffuseModulationOff", PyvtkVolumeProMapper_GradientDiffuseModulationOff, 1,
   (char*)"V.GradientDiffuseModulationOff()\nC++: void GradientDiffuseModulationOff()\n\nSet/Get the gradient magnitude diffuse modulation\n"},
  {(char*)"SetGradientSpecularModulation", PyvtkVolumeProMapper_SetGradientSpecularModulation, 1,
   (char*)"V.SetGradientSpecularModulation(int)\nC++: void SetGradientSpecularModulation(int)\n\nSet/Get the gradient magnitude specular modulation\n"},
  {(char*)"GetGradientSpecularModulationMinValue", PyvtkVolumeProMapper_GetGradientSpecularModulationMinValue, 1,
   (char*)"V.GetGradientSpecularModulationMinValue() -> int\nC++: int GetGradientSpecularModulationMinValue()\n\nSet/Get the gradient magnitude specular modulation\n"},
  {(char*)"GetGradientSpecularModulationMaxValue", PyvtkVolumeProMapper_GetGradientSpecularModulationMaxValue, 1,
   (char*)"V.GetGradientSpecularModulationMaxValue() -> int\nC++: int GetGradientSpecularModulationMaxValue()\n\nSet/Get the gradient magnitude specular modulation\n"},
  {(char*)"GetGradientSpecularModulation", PyvtkVolumeProMapper_GetGradientSpecularModulation, 1,
   (char*)"V.GetGradientSpecularModulation() -> int\nC++: int GetGradientSpecularModulation()\n\nSet/Get the gradient magnitude specular modulation\n"},
  {(char*)"GradientSpecularModulationOn", PyvtkVolumeProMapper_GradientSpecularModulationOn, 1,
   (char*)"V.GradientSpecularModulationOn()\nC++: void GradientSpecularModulationOn()\n\nSet/Get the gradient magnitude specular modulation\n"},
  {(char*)"GradientSpecularModulationOff", PyvtkVolumeProMapper_GradientSpecularModulationOff, 1,
   (char*)"V.GradientSpecularModulationOff()\nC++: void GradientSpecularModulationOff()\n\nSet/Get the gradient magnitude specular modulation\n"},
  {(char*)"GetNoHardware", PyvtkVolumeProMapper_GetNoHardware, 1,
   (char*)"V.GetNoHardware() -> int\nC++: int GetNoHardware()\n\nConveniece methods for debugging\n"},
  {(char*)"GetWrongVLIVersion", PyvtkVolumeProMapper_GetWrongVLIVersion, 1,
   (char*)"V.GetWrongVLIVersion() -> int\nC++: int GetWrongVLIVersion()\n\nConveniece methods for debugging\n"},
  {(char*)"GetNumberOfBoards", PyvtkVolumeProMapper_GetNumberOfBoards, 1,
   (char*)"V.GetNumberOfBoards() -> int\nC++: int GetNumberOfBoards()\n\nAccess methods for some board info\n"},
  {(char*)"GetMajorBoardVersion", PyvtkVolumeProMapper_GetMajorBoardVersion, 1,
   (char*)"V.GetMajorBoardVersion() -> int\nC++: int GetMajorBoardVersion()\n\nAccess methods for some board info\n"},
  {(char*)"GetMinorBoardVersion", PyvtkVolumeProMapper_GetMinorBoardVersion, 1,
   (char*)"V.GetMinorBoardVersion() -> int\nC++: int GetMinorBoardVersion()\n\nAccess methods for some board info\n"},
  {(char*)"GetAvailableBoardMemory", PyvtkVolumeProMapper_GetAvailableBoardMemory, 1,
   (char*)"V.GetAvailableBoardMemory() -> int\nC++: virtual int GetAvailableBoardMemory()\n\nAccess methods for some board info\n"},
  {(char*)"SetIntermixIntersectingGeometry", PyvtkVolumeProMapper_SetIntermixIntersectingGeometry, 1,
   (char*)"V.SetIntermixIntersectingGeometry(int)\nC++: void SetIntermixIntersectingGeometry(int)\n\nSpecify whether any geometry intersects the volume.\n"},
  {(char*)"GetIntermixIntersectingGeometryMinValue", PyvtkVolumeProMapper_GetIntermixIntersectingGeometryMinValue, 1,
   (char*)"V.GetIntermixIntersectingGeometryMinValue() -> int\nC++: int GetIntermixIntersectingGeometryMinValue()\n\nSpecify whether any geometry intersects the volume.\n"},
  {(char*)"GetIntermixIntersectingGeometryMaxValue", PyvtkVolumeProMapper_GetIntermixIntersectingGeometryMaxValue, 1,
   (char*)"V.GetIntermixIntersectingGeometryMaxValue() -> int\nC++: int GetIntermixIntersectingGeometryMaxValue()\n\nSpecify whether any geometry intersects the volume.\n"},
  {(char*)"GetIntermixIntersectingGeometry", PyvtkVolumeProMapper_GetIntermixIntersectingGeometry, 1,
   (char*)"V.GetIntermixIntersectingGeometry() -> int\nC++: int GetIntermixIntersectingGeometry()\n\nSpecify whether any geometry intersects the volume.\n"},
  {(char*)"IntermixIntersectingGeometryOn", PyvtkVolumeProMapper_IntermixIntersectingGeometryOn, 1,
   (char*)"V.IntermixIntersectingGeometryOn()\nC++: void IntermixIntersectingGeometryOn()\n\nSpecify whether any geometry intersects the volume.\n"},
  {(char*)"IntermixIntersectingGeometryOff", PyvtkVolumeProMapper_IntermixIntersectingGeometryOff, 1,
   (char*)"V.IntermixIntersectingGeometryOff()\nC++: void IntermixIntersectingGeometryOff()\n\nSpecify whether any geometry intersects the volume.\n"},
  {(char*)"SetAutoAdjustMipmapLevels", PyvtkVolumeProMapper_SetAutoAdjustMipmapLevels, 1,
   (char*)"V.SetAutoAdjustMipmapLevels(int)\nC++: void SetAutoAdjustMipmapLevels(int)\n\nIf set to 1, this mapper will select a mipmap level to use based\non the AllocatedRenderTime of the volume and the amount of time\nused by the previous render.\n"},
  {(char*)"GetAutoAdjustMipmapLevelsMinValue", PyvtkVolumeProMapper_GetAutoAdjustMipmapLevelsMinValue, 1,
   (char*)"V.GetAutoAdjustMipmapLevelsMinValue() -> int\nC++: int GetAutoAdjustMipmapLevelsMinValue()\n\nIf set to 1, this mapper will select a mipmap level to use based\non the AllocatedRenderTime of the volume and the amount of time\nused by the previous render.\n"},
  {(char*)"GetAutoAdjustMipmapLevelsMaxValue", PyvtkVolumeProMapper_GetAutoAdjustMipmapLevelsMaxValue, 1,
   (char*)"V.GetAutoAdjustMipmapLevelsMaxValue() -> int\nC++: int GetAutoAdjustMipmapLevelsMaxValue()\n\nIf set to 1, this mapper will select a mipmap level to use based\non the AllocatedRenderTime of the volume and the amount of time\nused by the previous render.\n"},
  {(char*)"GetAutoAdjustMipmapLevels", PyvtkVolumeProMapper_GetAutoAdjustMipmapLevels, 1,
   (char*)"V.GetAutoAdjustMipmapLevels() -> int\nC++: int GetAutoAdjustMipmapLevels()\n\nIf set to 1, this mapper will select a mipmap level to use based\non the AllocatedRenderTime of the volume and the amount of time\nused by the previous render.\n"},
  {(char*)"AutoAdjustMipmapLevelsOn", PyvtkVolumeProMapper_AutoAdjustMipmapLevelsOn, 1,
   (char*)"V.AutoAdjustMipmapLevelsOn()\nC++: void AutoAdjustMipmapLevelsOn()\n\nIf set to 1, this mapper will select a mipmap level to use based\non the AllocatedRenderTime of the volume and the amount of time\nused by the previous render.\n"},
  {(char*)"AutoAdjustMipmapLevelsOff", PyvtkVolumeProMapper_AutoAdjustMipmapLevelsOff, 1,
   (char*)"V.AutoAdjustMipmapLevelsOff()\nC++: void AutoAdjustMipmapLevelsOff()\n\nIf set to 1, this mapper will select a mipmap level to use based\non the AllocatedRenderTime of the volume and the amount of time\nused by the previous render.\n"},
  {(char*)"SetMinimumMipmapLevel", PyvtkVolumeProMapper_SetMinimumMipmapLevel, 1,
   (char*)"V.SetMinimumMipmapLevel(int)\nC++: void SetMinimumMipmapLevel(int)\n\nSpecify the minimum mipmap level to use -- the highest\nresolution. Defaults to 0. This is the mipmap level that is used\nwhen interaction stops.\n"},
  {(char*)"GetMinimumMipmapLevelMinValue", PyvtkVolumeProMapper_GetMinimumMipmapLevelMinValue, 1,
   (char*)"V.GetMinimumMipmapLevelMinValue() -> int\nC++: int GetMinimumMipmapLevelMinValue()\n\nSpecify the minimum mipmap level to use -- the highest\nresolution. Defaults to 0. This is the mipmap level that is used\nwhen interaction stops.\n"},
  {(char*)"GetMinimumMipmapLevelMaxValue", PyvtkVolumeProMapper_GetMinimumMipmapLevelMaxValue, 1,
   (char*)"V.GetMinimumMipmapLevelMaxValue() -> int\nC++: int GetMinimumMipmapLevelMaxValue()\n\nSpecify the minimum mipmap level to use -- the highest\nresolution. Defaults to 0. This is the mipmap level that is used\nwhen interaction stops.\n"},
  {(char*)"GetMinimumMipmapLevel", PyvtkVolumeProMapper_GetMinimumMipmapLevel, 1,
   (char*)"V.GetMinimumMipmapLevel() -> int\nC++: int GetMinimumMipmapLevel()\n\nSpecify the minimum mipmap level to use -- the highest\nresolution. Defaults to 0. This is the mipmap level that is used\nwhen interaction stops.\n"},
  {(char*)"SetMaximumMipmapLevel", PyvtkVolumeProMapper_SetMaximumMipmapLevel, 1,
   (char*)"V.SetMaximumMipmapLevel(int)\nC++: void SetMaximumMipmapLevel(int)\n\nSpecify the maximum mipmap level to use -- the lowest resolution.\nDefaults to 4. It will not help to set the level larger than this\nunless your volume is very large because for each successive\nmipmap level, the number of voxels along each axis is cut in\nhalf.\n"},
  {(char*)"GetMaximumMipmapLevelMinValue", PyvtkVolumeProMapper_GetMaximumMipmapLevelMinValue, 1,
   (char*)"V.GetMaximumMipmapLevelMinValue() -> int\nC++: int GetMaximumMipmapLevelMinValue()\n\nSpecify the maximum mipmap level to use -- the lowest resolution.\nDefaults to 4. It will not help to set the level larger than this\nunless your volume is very large because for each successive\nmipmap level, the number of voxels along each axis is cut in\nhalf.\n"},
  {(char*)"GetMaximumMipmapLevelMaxValue", PyvtkVolumeProMapper_GetMaximumMipmapLevelMaxValue, 1,
   (char*)"V.GetMaximumMipmapLevelMaxValue() -> int\nC++: int GetMaximumMipmapLevelMaxValue()\n\nSpecify the maximum mipmap level to use -- the lowest resolution.\nDefaults to 4. It will not help to set the level larger than this\nunless your volume is very large because for each successive\nmipmap level, the number of voxels along each axis is cut in\nhalf.\n"},
  {(char*)"GetMaximumMipmapLevel", PyvtkVolumeProMapper_GetMaximumMipmapLevel, 1,
   (char*)"V.GetMaximumMipmapLevel() -> int\nC++: int GetMaximumMipmapLevel()\n\nSpecify the maximum mipmap level to use -- the lowest resolution.\nDefaults to 4. It will not help to set the level larger than this\nunless your volume is very large because for each successive\nmipmap level, the number of voxels along each axis is cut in\nhalf.\n"},
  {(char*)"SetMipmapLevel", PyvtkVolumeProMapper_SetMipmapLevel, 1,
   (char*)"V.SetMipmapLevel(int)\nC++: void SetMipmapLevel(int)\n\nChoose a mipmap level. If AutoAdjustMipmapLevels is off, then\nthis specifies the mipmap level to use during interaction. If\nAutoAdjustMipmapLevels is on, then this specifies the initial\nmipmap level to use.\n"},
  {(char*)"GetMipmapLevelMinValue", PyvtkVolumeProMapper_GetMipmapLevelMinValue, 1,
   (char*)"V.GetMipmapLevelMinValue() -> int\nC++: int GetMipmapLevelMinValue()\n\nChoose a mipmap level. If AutoAdjustMipmapLevels is off, then\nthis specifies the mipmap level to use during interaction. If\nAutoAdjustMipmapLevels is on, then this specifies the initial\nmipmap level to use.\n"},
  {(char*)"GetMipmapLevelMaxValue", PyvtkVolumeProMapper_GetMipmapLevelMaxValue, 1,
   (char*)"V.GetMipmapLevelMaxValue() -> int\nC++: int GetMipmapLevelMaxValue()\n\nChoose a mipmap level. If AutoAdjustMipmapLevels is off, then\nthis specifies the mipmap level to use during interaction. If\nAutoAdjustMipmapLevels is on, then this specifies the initial\nmipmap level to use.\n"},
  {(char*)"GetMipmapLevel", PyvtkVolumeProMapper_GetMipmapLevel, 1,
   (char*)"V.GetMipmapLevel() -> int\nC++: int GetMipmapLevel()\n\nChoose a mipmap level. If AutoAdjustMipmapLevels is off, then\nthis specifies the mipmap level to use during interaction. If\nAutoAdjustMipmapLevels is on, then this specifies the initial\nmipmap level to use.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeProMapper_StaticNew()
{
  return vtkVolumeProMapper::New();
}

PyObject *PyVTKClass_vtkVolumeProMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeProMapper_StaticNew,
    PyvtkVolumeProMapper_Methods,
    "vtkVolumeProMapper", modulename,
    NULL, NULL,
    PyvtkVolumeProMapper_Doc(),
    PyVTKClass_vtkVolumeMapperNew(modulename));
  return cls;
}

const char **PyvtkVolumeProMapper_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeProMapper - Superclass for VolumePRO volume rendering mappers\n\n",
    "Superclass: vtkVolumeMapper\n\n",
    "vtkVolumeProMapper is the superclass for VolumePRO volume rendering\nmappers. Any functionality that is general across all VolumePRO\nimplementations is placed here in this class. Subclasses of this\nclass are for the specific board implementations. Subclasses of that\nare for underlying graphics languages. Users should not create\nsubclasses directly - a vtkVolumeProMapper will automatically create\nth",
    "e object of the right type.\n\nIf you do not have the VolumePRO libraries when building this object,\nthen the New method will create a default renderer that will not\nrender. You can check the NumberOfBoards ivar to see if it is a real\nrendering class. To build with the VolumePRO board see\nvtkVolumeProVP1000Mapper.h for instructions.\n\nFor more information on the VolumePRO hardware, please see:\n\n\n  ht",
    "tp://www.terarecon.com/products/volumepro_prod.html\n\nIf you encounter any problems with this class, please inform Kitware,\nInc. at kitware@kitware.com.\n\nSee Also:\n\nvtkVolumeMapper vtkVolumeProVP1000Mapper\nvtkOpenGLVolumeProVP1000Mapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeProMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeProMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeProMapper", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BLEND_MODE_COMPOSITE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BLEND_MODE_MAX_INTENSITY", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BLEND_MODE_MIN_INTENSITY", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CURSOR_TYPE_CROSSHAIR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CURSOR_TYPE_PLANE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VOLUME_8BIT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VOLUME_12BIT_UPPER", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VOLUME_12BIT_LOWER", o) != 0)
    {
    Py_DECREF(o);
    }


}

