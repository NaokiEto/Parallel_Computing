// python wrapper for vtkFixedPointVolumeRayCastMapper
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
#include "vtkFixedPointVolumeRayCastMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFixedPointVolumeRayCastMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFixedPointVolumeRayCastMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFixedPointVolumeRayCastMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFixedPointVolumeRayCastMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeMapperNew
#endif

static const char **PyvtkFixedPointVolumeRayCastMapper_Doc();


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkFixedPointVolumeRayCastMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkFixedPointVolumeRayCastMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::NewInstance();
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
PyvtkFixedPointVolumeRayCastMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkFixedPointVolumeRayCastMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkFixedPointVolumeRayCastMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSampleDistance(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSampleDistance();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetSampleDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetInteractiveSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractiveSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractiveSampleDistance(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetInteractiveSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetInteractiveSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteractiveSampleDistance();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetInteractiveSampleDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageSampleDistance(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageSampleDistanceMinValue();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetImageSampleDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageSampleDistanceMaxValue();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetImageSampleDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageSampleDistance();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetImageSampleDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumImageSampleDistance(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetMinimumImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumImageSampleDistanceMinValue();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetMinimumImageSampleDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumImageSampleDistanceMaxValue();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetMinimumImageSampleDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumImageSampleDistance();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetMinimumImageSampleDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumImageSampleDistance(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetMaximumImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumImageSampleDistanceMinValue();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetMaximumImageSampleDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumImageSampleDistanceMaxValue();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetMaximumImageSampleDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumImageSampleDistance();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetMaximumImageSampleDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoAdjustSampleDistances(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetAutoAdjustSampleDistances(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutoAdjustSampleDistancesMinValue();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetAutoAdjustSampleDistancesMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutoAdjustSampleDistancesMaxValue();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetAutoAdjustSampleDistancesMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutoAdjustSampleDistances();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetAutoAdjustSampleDistances();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_AutoAdjustSampleDistancesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustSampleDistancesOn();
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::AutoAdjustSampleDistancesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_AutoAdjustSampleDistancesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustSampleDistancesOff();
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::AutoAdjustSampleDistancesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetLockSampleDistanceToInputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockSampleDistanceToInputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLockSampleDistanceToInputSpacing(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetLockSampleDistanceToInputSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockSampleDistanceToInputSpacingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLockSampleDistanceToInputSpacingMinValue();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetLockSampleDistanceToInputSpacingMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockSampleDistanceToInputSpacingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLockSampleDistanceToInputSpacingMaxValue();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetLockSampleDistanceToInputSpacingMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockSampleDistanceToInputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLockSampleDistanceToInputSpacing();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetLockSampleDistanceToInputSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_LockSampleDistanceToInputSpacingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockSampleDistanceToInputSpacingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LockSampleDistanceToInputSpacingOn();
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::LockSampleDistanceToInputSpacingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_LockSampleDistanceToInputSpacingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockSampleDistanceToInputSpacingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LockSampleDistanceToInputSpacingOff();
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::LockSampleDistanceToInputSpacingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfThreads(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetNumberOfThreads(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfThreads();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetNumberOfThreads();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

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
      op->vtkFixedPointVolumeRayCastMapper::SetIntermixIntersectingGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometryMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetIntermixIntersectingGeometryMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometryMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetIntermixIntersectingGeometryMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetIntermixIntersectingGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_IntermixIntersectingGeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntermixIntersectingGeometryOn();
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::IntermixIntersectingGeometryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_IntermixIntersectingGeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntermixIntersectingGeometryOff();
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::IntermixIntersectingGeometryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeRequiredImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  vtkRenderer *temp1 = NULL;
  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      tempr = op->ComputeRequiredImageSampleDistance(temp0, temp1);
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::ComputeRequiredImageSampleDistance(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeRequiredImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  vtkRenderer *temp1 = NULL;
  vtkVolume *temp2 = NULL;
  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      tempr = op->ComputeRequiredImageSampleDistance(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::ComputeRequiredImageSampleDistance(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance_s1(self, args);
    case 3:
      return PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeRequiredImageSampleDistance");
  return NULL;
}



static PyObject *
PyvtkFixedPointVolumeRayCastMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

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
      op->vtkFixedPointVolumeRayCastMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToFixedPointPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->ToFixedPointPosition(temp0);
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::ToFixedPointPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToFixedPointPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0[3];
  float save0[3];
  const int size0 = 3;
  unsigned int temp1[3];
  unsigned int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->ToFixedPointPosition(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::ToFixedPointPosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition_s1(self, args);
    case 2:
      return PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ToFixedPointPosition");
  return NULL;
}



static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToFixedPointDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->ToFixedPointDirection(temp0);
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::ToFixedPointDirection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToFixedPointDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0[3];
  float save0[3];
  const int size0 = 3;
  unsigned int temp1[3];
  unsigned int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->ToFixedPointDirection(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::ToFixedPointDirection(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection_s1(self, args);
    case 2:
      return PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ToFixedPointDirection");
  return NULL;
}



static PyObject *
PyvtkFixedPointVolumeRayCastMapper_FixedPointIncrement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FixedPointIncrement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  unsigned int temp0[3];
  unsigned int save0[3];
  const int size0 = 3;
  unsigned int temp1[3];
  unsigned int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->FixedPointIncrement(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::FixedPointIncrement(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ShiftVectorDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShiftVectorDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  unsigned int temp0[3];
  unsigned int save0[3];
  const int size0 = 3;
  unsigned int temp1[3];
  unsigned int save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->ShiftVectorDown(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::ShiftVectorDown(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_CheckMinMaxVolumeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckMinMaxVolumeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  unsigned int temp0[3];
  unsigned int save0[3];
  const int size0 = 3;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->CheckMinMaxVolumeFlag(temp0, temp1);
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::CheckMinMaxVolumeFlag(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_CheckMIPMinMaxVolumeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckMIPMinMaxVolumeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  unsigned int temp0[3];
  unsigned int save0[3];
  const int size0 = 3;
  int temp1;
  unsigned short temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->CheckMIPMinMaxVolumeFlag(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::CheckMIPMinMaxVolumeFlag(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_CheckIfCropped(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckIfCropped");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  unsigned int temp0[3];
  unsigned int save0[3];
  const int size0 = 3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->CheckIfCropped(temp0);
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::CheckIfCropped(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetRenderWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetMIPHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMIPHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkFixedPointVolumeRayCastMIPHelper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMIPHelper();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetMIPHelper();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetCompositeHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkFixedPointVolumeRayCastCompositeHelper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompositeHelper();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetCompositeHelper();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetCompositeGOHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeGOHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkFixedPointVolumeRayCastCompositeGOHelper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompositeGOHelper();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetCompositeGOHelper();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetCompositeGOShadeHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeGOShadeHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkFixedPointVolumeRayCastCompositeGOShadeHelper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompositeGOShadeHelper();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetCompositeGOShadeHelper();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetCompositeShadeHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeShadeHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkFixedPointVolumeRayCastCompositeShadeHelper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompositeShadeHelper();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetCompositeShadeHelper();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetTableShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTableShift();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetTableShift();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetTableScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTableScale();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetTableScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetShadingRequired(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadingRequired");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShadingRequired();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetShadingRequired();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetGradientOpacityRequired(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityRequired");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientOpacityRequired();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetGradientOpacityRequired();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetCurrentScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentScalars();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetCurrentScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetPreviousScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreviousScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPreviousScalars();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetPreviousScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkVolume *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVolume();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetVolume();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_InitializeRayInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeRayInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkVolume *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->InitializeRayInfo(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::InitializeRayInfo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_ShouldUseNearestNeighborInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShouldUseNearestNeighborInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkVolume *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      tempr = op->ShouldUseNearestNeighborInterpolation(temp0);
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::ShouldUseNearestNeighborInterpolation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetRayCastImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRayCastImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkFixedPointRayCastImage *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFixedPointRayCastImage"))
    {
    if (ap.IsBound())
      {
      op->SetRayCastImage(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetRayCastImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetRayCastImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRayCastImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkFixedPointRayCastImage *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRayCastImage();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetRayCastImage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_PerVolumeInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerVolumeInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->PerVolumeInitialization(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::PerVolumeInitialization(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_PerSubVolumeInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerSubVolumeInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->PerSubVolumeInitialization(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::PerSubVolumeInitialization(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_RenderSubVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderSubVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderSubVolume();
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::RenderSubVolume();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_DisplayRenderedImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayRenderedImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->DisplayRenderedImage(temp0, temp1);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::DisplayRenderedImage(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_AbortRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AbortRender();
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::AbortRender();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_CreateCanonicalView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCanonicalView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkVolume *temp0 = NULL;
  vtkImageData *temp1 = NULL;
  int temp2;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4[3];
  double save4[3];
  const int size4 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      op->CreateCanonicalView(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::CreateCanonicalView(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEstimatedRenderTime(temp0, temp1);
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetEstimatedRenderTime(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEstimatedRenderTime(temp0);
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetEstimatedRenderTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime_s1(self, args);
    case 1:
      return PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetEstimatedRenderTime");
  return NULL;
}



static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFinalColorWindow(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetFinalColorWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFinalColorWindow();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetFinalColorWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_SetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFinalColorLevel(temp0);
      }
    else
      {
      op->vtkFixedPointVolumeRayCastMapper::SetFinalColorLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFinalColorLevel();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetFinalColorLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastMapper_GetFlipMIPComparison(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipMIPComparison");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastMapper *op = static_cast<vtkFixedPointVolumeRayCastMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFlipMIPComparison();
      }
    else
      {
      tempr = op->vtkFixedPointVolumeRayCastMapper::GetFlipMIPComparison();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFixedPointVolumeRayCastMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkFixedPointVolumeRayCastMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFixedPointVolumeRayCastMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFixedPointVolumeRayCastMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFixedPointVolumeRayCastMapper\nC++: vtkFixedPointVolumeRayCastMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFixedPointVolumeRayCastMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFixedPointVolumeRayCastMapper\nC++: vtkFixedPointVolumeRayCastMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSampleDistance", PyvtkFixedPointVolumeRayCastMapper_SetSampleDistance, 1,
   (char*)"V.SetSampleDistance(float)\nC++: void SetSampleDistance(float a)\n\nSet/Get the distance between samples used for rendering when\nAutoAdjustSampleDistances is off, or when this mapper has more\nthan 1 second allocated to it for rendering.\n"},
  {(char*)"GetSampleDistance", PyvtkFixedPointVolumeRayCastMapper_GetSampleDistance, 1,
   (char*)"V.GetSampleDistance() -> float\nC++: float GetSampleDistance()\n\nSet/Get the distance between samples used for rendering when\nAutoAdjustSampleDistances is off, or when this mapper has more\nthan 1 second allocated to it for rendering.\n"},
  {(char*)"SetInteractiveSampleDistance", PyvtkFixedPointVolumeRayCastMapper_SetInteractiveSampleDistance, 1,
   (char*)"V.SetInteractiveSampleDistance(float)\nC++: void SetInteractiveSampleDistance(float a)\n\nSet/Get the distance between samples when interactive rendering\nis happening. In this case, interactive is defined as this volume\nmapper having less than 1 second allocated for rendering. When\nAutoAdjustSampleDistance is On, and the allocated render time is\nless than 1 second, then this InteractiveSampleDistance will be\nused instead of the SampleDistance above.\n"},
  {(char*)"GetInteractiveSampleDistance", PyvtkFixedPointVolumeRayCastMapper_GetInteractiveSampleDistance, 1,
   (char*)"V.GetInteractiveSampleDistance() -> float\nC++: float GetInteractiveSampleDistance()\n\nSet/Get the distance between samples when interactive rendering\nis happening. In this case, interactive is defined as this volume\nmapper having less than 1 second allocated for rendering. When\nAutoAdjustSampleDistance is On, and the allocated render time is\nless than 1 second, then this InteractiveSampleDistance will be\nused instead of the SampleDistance above.\n"},
  {(char*)"SetImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_SetImageSampleDistance, 1,
   (char*)"V.SetImageSampleDistance(float)\nC++: void SetImageSampleDistance(float)\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {(char*)"GetImageSampleDistanceMinValue", PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistanceMinValue, 1,
   (char*)"V.GetImageSampleDistanceMinValue() -> float\nC++: float GetImageSampleDistanceMinValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {(char*)"GetImageSampleDistanceMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistanceMaxValue, 1,
   (char*)"V.GetImageSampleDistanceMaxValue() -> float\nC++: float GetImageSampleDistanceMaxValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {(char*)"GetImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_GetImageSampleDistance, 1,
   (char*)"V.GetImageSampleDistance() -> float\nC++: float GetImageSampleDistance()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {(char*)"SetMinimumImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_SetMinimumImageSampleDistance, 1,
   (char*)"V.SetMinimumImageSampleDistance(float)\nC++: void SetMinimumImageSampleDistance(float)\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMinimumImageSampleDistanceMinValue", PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue, 1,
   (char*)"V.GetMinimumImageSampleDistanceMinValue() -> float\nC++: float GetMinimumImageSampleDistanceMinValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMinimumImageSampleDistanceMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue, 1,
   (char*)"V.GetMinimumImageSampleDistanceMaxValue() -> float\nC++: float GetMinimumImageSampleDistanceMaxValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMinimumImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_GetMinimumImageSampleDistance, 1,
   (char*)"V.GetMinimumImageSampleDistance() -> float\nC++: float GetMinimumImageSampleDistance()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"SetMaximumImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_SetMaximumImageSampleDistance, 1,
   (char*)"V.SetMaximumImageSampleDistance(float)\nC++: void SetMaximumImageSampleDistance(float)\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMaximumImageSampleDistanceMinValue", PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue, 1,
   (char*)"V.GetMaximumImageSampleDistanceMinValue() -> float\nC++: float GetMaximumImageSampleDistanceMinValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMaximumImageSampleDistanceMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue, 1,
   (char*)"V.GetMaximumImageSampleDistanceMaxValue() -> float\nC++: float GetMaximumImageSampleDistanceMaxValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"GetMaximumImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_GetMaximumImageSampleDistance, 1,
   (char*)"V.GetMaximumImageSampleDistance() -> float\nC++: float GetMaximumImageSampleDistance()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {(char*)"SetAutoAdjustSampleDistances", PyvtkFixedPointVolumeRayCastMapper_SetAutoAdjustSampleDistances, 1,
   (char*)"V.SetAutoAdjustSampleDistances(int)\nC++: void SetAutoAdjustSampleDistances(int)\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nand the SampleDistance will be varied to achieve the allocated\nrender time of this prop (controlled by the desired update rate\nand any culling in use). If this is an interactive render (more\nthan 1 frame per second) the SampleDistance will be increased,\notherwise it will not be altered (a binary decision, as opposed\nto the ImageSampleDistance which will vary continuously).\n"},
  {(char*)"GetAutoAdjustSampleDistancesMinValue", PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue, 1,
   (char*)"V.GetAutoAdjustSampleDistancesMinValue() -> int\nC++: int GetAutoAdjustSampleDistancesMinValue()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nand the SampleDistance will be varied to achieve the allocated\nrender time of this prop (controlled by the desired update rate\nand any culling in use). If this is an interactive render (more\nthan 1 frame per second) the SampleDistance will be increased,\notherwise it will not be altered (a binary decision, as opposed\nto the ImageSampleDistance which will vary continuously).\n"},
  {(char*)"GetAutoAdjustSampleDistancesMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue, 1,
   (char*)"V.GetAutoAdjustSampleDistancesMaxValue() -> int\nC++: int GetAutoAdjustSampleDistancesMaxValue()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nand the SampleDistance will be varied to achieve the allocated\nrender time of this prop (controlled by the desired update rate\nand any culling in use). If this is an interactive render (more\nthan 1 frame per second) the SampleDistance will be increased,\notherwise it will not be altered (a binary decision, as opposed\nto the ImageSampleDistance which will vary continuously).\n"},
  {(char*)"GetAutoAdjustSampleDistances", PyvtkFixedPointVolumeRayCastMapper_GetAutoAdjustSampleDistances, 1,
   (char*)"V.GetAutoAdjustSampleDistances() -> int\nC++: int GetAutoAdjustSampleDistances()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nand the SampleDistance will be varied to achieve the allocated\nrender time of this prop (controlled by the desired update rate\nand any culling in use). If this is an interactive render (more\nthan 1 frame per second) the SampleDistance will be increased,\notherwise it will not be altered (a binary decision, as opposed\nto the ImageSampleDistance which will vary continuously).\n"},
  {(char*)"AutoAdjustSampleDistancesOn", PyvtkFixedPointVolumeRayCastMapper_AutoAdjustSampleDistancesOn, 1,
   (char*)"V.AutoAdjustSampleDistancesOn()\nC++: void AutoAdjustSampleDistancesOn()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nand the SampleDistance will be varied to achieve the allocated\nrender time of this prop (controlled by the desired update rate\nand any culling in use). If this is an interactive render (more\nthan 1 frame per second) the SampleDistance will be increased,\notherwise it will not be altered (a binary decision, as opposed\nto the ImageSampleDistance which will vary continuously).\n"},
  {(char*)"AutoAdjustSampleDistancesOff", PyvtkFixedPointVolumeRayCastMapper_AutoAdjustSampleDistancesOff, 1,
   (char*)"V.AutoAdjustSampleDistancesOff()\nC++: void AutoAdjustSampleDistancesOff()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nand the SampleDistance will be varied to achieve the allocated\nrender time of this prop (controlled by the desired update rate\nand any culling in use). If this is an interactive render (more\nthan 1 frame per second) the SampleDistance will be increased,\notherwise it will not be altered (a binary decision, as opposed\nto the ImageSampleDistance which will vary continuously).\n"},
  {(char*)"SetLockSampleDistanceToInputSpacing", PyvtkFixedPointVolumeRayCastMapper_SetLockSampleDistanceToInputSpacing, 1,
   (char*)"V.SetLockSampleDistanceToInputSpacing(int)\nC++: void SetLockSampleDistanceToInputSpacing(int)\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {(char*)"GetLockSampleDistanceToInputSpacingMinValue", PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMinValue, 1,
   (char*)"V.GetLockSampleDistanceToInputSpacingMinValue() -> int\nC++: int GetLockSampleDistanceToInputSpacingMinValue()\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {(char*)"GetLockSampleDistanceToInputSpacingMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMaxValue, 1,
   (char*)"V.GetLockSampleDistanceToInputSpacingMaxValue() -> int\nC++: int GetLockSampleDistanceToInputSpacingMaxValue()\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {(char*)"GetLockSampleDistanceToInputSpacing", PyvtkFixedPointVolumeRayCastMapper_GetLockSampleDistanceToInputSpacing, 1,
   (char*)"V.GetLockSampleDistanceToInputSpacing() -> int\nC++: int GetLockSampleDistanceToInputSpacing()\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {(char*)"LockSampleDistanceToInputSpacingOn", PyvtkFixedPointVolumeRayCastMapper_LockSampleDistanceToInputSpacingOn, 1,
   (char*)"V.LockSampleDistanceToInputSpacingOn()\nC++: void LockSampleDistanceToInputSpacingOn()\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {(char*)"LockSampleDistanceToInputSpacingOff", PyvtkFixedPointVolumeRayCastMapper_LockSampleDistanceToInputSpacingOff, 1,
   (char*)"V.LockSampleDistanceToInputSpacingOff()\nC++: void LockSampleDistanceToInputSpacingOff()\n\nAutomatically compute the sample distance from the data spacing. \nWhen the number of voxels is 8, the sample distance will be\nroughly 1/200 the average voxel size. The distance will grow\nproportionally to numVoxels^(1/3) until it reaches 1/2 average\nvoxel size when number of voxels is 1E6. Note that\nScalarOpacityUnitDistance is still taken into account and if\ndifferent than 1, will effect the sample distance.\n"},
  {(char*)"SetNumberOfThreads", PyvtkFixedPointVolumeRayCastMapper_SetNumberOfThreads, 1,
   (char*)"V.SetNumberOfThreads(int)\nC++: void SetNumberOfThreads(int num)\n\nSet/Get the number of threads to use. This by default is equal to\nthe number of available processors detected.\n"},
  {(char*)"GetNumberOfThreads", PyvtkFixedPointVolumeRayCastMapper_GetNumberOfThreads, 1,
   (char*)"V.GetNumberOfThreads() -> int\nC++: int GetNumberOfThreads()\n\nSet/Get the number of threads to use. This by default is equal to\nthe number of available processors detected.\n"},
  {(char*)"SetIntermixIntersectingGeometry", PyvtkFixedPointVolumeRayCastMapper_SetIntermixIntersectingGeometry, 1,
   (char*)"V.SetIntermixIntersectingGeometry(int)\nC++: void SetIntermixIntersectingGeometry(int)\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"GetIntermixIntersectingGeometryMinValue", PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometryMinValue, 1,
   (char*)"V.GetIntermixIntersectingGeometryMinValue() -> int\nC++: int GetIntermixIntersectingGeometryMinValue()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"GetIntermixIntersectingGeometryMaxValue", PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometryMaxValue, 1,
   (char*)"V.GetIntermixIntersectingGeometryMaxValue() -> int\nC++: int GetIntermixIntersectingGeometryMaxValue()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"GetIntermixIntersectingGeometry", PyvtkFixedPointVolumeRayCastMapper_GetIntermixIntersectingGeometry, 1,
   (char*)"V.GetIntermixIntersectingGeometry() -> int\nC++: int GetIntermixIntersectingGeometry()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"IntermixIntersectingGeometryOn", PyvtkFixedPointVolumeRayCastMapper_IntermixIntersectingGeometryOn, 1,
   (char*)"V.IntermixIntersectingGeometryOn()\nC++: void IntermixIntersectingGeometryOn()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"IntermixIntersectingGeometryOff", PyvtkFixedPointVolumeRayCastMapper_IntermixIntersectingGeometryOff, 1,
   (char*)"V.IntermixIntersectingGeometryOff()\nC++: void IntermixIntersectingGeometryOff()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"ComputeRequiredImageSampleDistance", PyvtkFixedPointVolumeRayCastMapper_ComputeRequiredImageSampleDistance, 1,
   (char*)"V.ComputeRequiredImageSampleDistance(float, vtkRenderer) -> float\nC++: float ComputeRequiredImageSampleDistance(float desiredTime,\n    vtkRenderer *ren)\nV.ComputeRequiredImageSampleDistance(float, vtkRenderer,\n    vtkVolume) -> float\nC++: float ComputeRequiredImageSampleDistance(float desiredTime,\n    vtkRenderer *ren, vtkVolume *vol)\n\nWhat is the image sample distance required to achieve the desired\ntime? A version of this method is provided that does not require\nthe volume argument since if you are using an LODProp3D you may\nnot know this information. If you use this version you must be\ncertain that the ray cast mapper is only used for one volume (and\nnot shared among multiple volumes)\n"},
  {(char*)"Render", PyvtkFixedPointVolumeRayCastMapper_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: void Render(vtkRenderer *, vtkVolume *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\nInitialize rendering for this volume.\n"},
  {(char*)"ToFixedPointPosition", PyvtkFixedPointVolumeRayCastMapper_ToFixedPointPosition, 1,
   (char*)"V.ToFixedPointPosition(float) -> int\nC++: unsigned int ToFixedPointPosition(float val)\nV.ToFixedPointPosition([float, float, float], [int, int, int])\nC++: void ToFixedPointPosition(float in[3], unsigned int out[3])\n\n"},
  {(char*)"ToFixedPointDirection", PyvtkFixedPointVolumeRayCastMapper_ToFixedPointDirection, 1,
   (char*)"V.ToFixedPointDirection(float) -> int\nC++: unsigned int ToFixedPointDirection(float dir)\nV.ToFixedPointDirection([float, float, float], [int, int, int])\nC++: void ToFixedPointDirection(float in[3], unsigned int out[3])\n\n"},
  {(char*)"FixedPointIncrement", PyvtkFixedPointVolumeRayCastMapper_FixedPointIncrement, 1,
   (char*)"V.FixedPointIncrement([int, int, int], [int, int, int])\nC++: void FixedPointIncrement(unsigned int position[3],\n    unsigned int increment[3])\n\n"},
  {(char*)"ShiftVectorDown", PyvtkFixedPointVolumeRayCastMapper_ShiftVectorDown, 1,
   (char*)"V.ShiftVectorDown([int, int, int], [int, int, int])\nC++: void ShiftVectorDown(unsigned int in[3], unsigned int out[3])\n\n"},
  {(char*)"CheckMinMaxVolumeFlag", PyvtkFixedPointVolumeRayCastMapper_CheckMinMaxVolumeFlag, 1,
   (char*)"V.CheckMinMaxVolumeFlag([int, int, int], int) -> int\nC++: int CheckMinMaxVolumeFlag(unsigned int pos[3], int c)\n\n"},
  {(char*)"CheckMIPMinMaxVolumeFlag", PyvtkFixedPointVolumeRayCastMapper_CheckMIPMinMaxVolumeFlag, 1,
   (char*)"V.CheckMIPMinMaxVolumeFlag([int, int, int], int, int, int) -> int\nC++: int CheckMIPMinMaxVolumeFlag(unsigned int pos[3], int c,\n    unsigned short maxIdx, int flip)\n\n"},
  {(char*)"CheckIfCropped", PyvtkFixedPointVolumeRayCastMapper_CheckIfCropped, 1,
   (char*)"V.CheckIfCropped([int, int, int]) -> int\nC++: int CheckIfCropped(unsigned int pos[3])\n\n"},
  {(char*)"GetRenderWindow", PyvtkFixedPointVolumeRayCastMapper_GetRenderWindow, 1,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: vtkRenderWindow *GetRenderWindow()\n\n"},
  {(char*)"GetMIPHelper", PyvtkFixedPointVolumeRayCastMapper_GetMIPHelper, 1,
   (char*)"V.GetMIPHelper() -> vtkFixedPointVolumeRayCastMIPHelper\nC++: vtkFixedPointVolumeRayCastMIPHelper *GetMIPHelper()\n\n"},
  {(char*)"GetCompositeHelper", PyvtkFixedPointVolumeRayCastMapper_GetCompositeHelper, 1,
   (char*)"V.GetCompositeHelper()\n    -> vtkFixedPointVolumeRayCastCompositeHelper\nC++: vtkFixedPointVolumeRayCastCompositeHelper *GetCompositeHelper(\n    )\n\n"},
  {(char*)"GetCompositeGOHelper", PyvtkFixedPointVolumeRayCastMapper_GetCompositeGOHelper, 1,
   (char*)"V.GetCompositeGOHelper()\n    -> vtkFixedPointVolumeRayCastCompositeGOHelper\nC++: vtkFixedPointVolumeRayCastCompositeGOHelper *GetCompositeGOHelper(\n    )\n\n"},
  {(char*)"GetCompositeGOShadeHelper", PyvtkFixedPointVolumeRayCastMapper_GetCompositeGOShadeHelper, 1,
   (char*)"V.GetCompositeGOShadeHelper()\n    -> vtkFixedPointVolumeRayCastCompositeGOShadeHelper\nC++: vtkFixedPointVolumeRayCastCompositeGOShadeHelper *GetCompositeGOShadeHelper(\n    )\n\n"},
  {(char*)"GetCompositeShadeHelper", PyvtkFixedPointVolumeRayCastMapper_GetCompositeShadeHelper, 1,
   (char*)"V.GetCompositeShadeHelper()\n    -> vtkFixedPointVolumeRayCastCompositeShadeHelper\nC++: vtkFixedPointVolumeRayCastCompositeShadeHelper *GetCompositeShadeHelper(\n    )\n\n"},
  {(char*)"GetTableShift", PyvtkFixedPointVolumeRayCastMapper_GetTableShift, 1,
   (char*)"V.GetTableShift() -> (float, float, float, float)\nC++: float *GetTableShift()\n\n"},
  {(char*)"GetTableScale", PyvtkFixedPointVolumeRayCastMapper_GetTableScale, 1,
   (char*)"V.GetTableScale() -> (float, float, float, float)\nC++: float *GetTableScale()\n\n"},
  {(char*)"GetShadingRequired", PyvtkFixedPointVolumeRayCastMapper_GetShadingRequired, 1,
   (char*)"V.GetShadingRequired() -> int\nC++: int GetShadingRequired()\n\n"},
  {(char*)"GetGradientOpacityRequired", PyvtkFixedPointVolumeRayCastMapper_GetGradientOpacityRequired, 1,
   (char*)"V.GetGradientOpacityRequired() -> int\nC++: int GetGradientOpacityRequired()\n\n"},
  {(char*)"GetCurrentScalars", PyvtkFixedPointVolumeRayCastMapper_GetCurrentScalars, 1,
   (char*)"V.GetCurrentScalars() -> vtkDataArray\nC++: vtkDataArray *GetCurrentScalars()\n\n"},
  {(char*)"GetPreviousScalars", PyvtkFixedPointVolumeRayCastMapper_GetPreviousScalars, 1,
   (char*)"V.GetPreviousScalars() -> vtkDataArray\nC++: vtkDataArray *GetPreviousScalars()\n\n"},
  {(char*)"GetVolume", PyvtkFixedPointVolumeRayCastMapper_GetVolume, 1,
   (char*)"V.GetVolume() -> vtkVolume\nC++: vtkVolume *GetVolume()\n\n"},
  {(char*)"InitializeRayInfo", PyvtkFixedPointVolumeRayCastMapper_InitializeRayInfo, 1,
   (char*)"V.InitializeRayInfo(vtkVolume)\nC++: void InitializeRayInfo(vtkVolume *vol)\n\n"},
  {(char*)"ShouldUseNearestNeighborInterpolation", PyvtkFixedPointVolumeRayCastMapper_ShouldUseNearestNeighborInterpolation, 1,
   (char*)"V.ShouldUseNearestNeighborInterpolation(vtkVolume) -> int\nC++: int ShouldUseNearestNeighborInterpolation(vtkVolume *vol)\n\n"},
  {(char*)"SetRayCastImage", PyvtkFixedPointVolumeRayCastMapper_SetRayCastImage, 1,
   (char*)"V.SetRayCastImage(vtkFixedPointRayCastImage)\nC++: void SetRayCastImage(vtkFixedPointRayCastImage *)\n\nSet / Get the underlying image object. One will be automatically\ncreated - only need to set it when using from an AMR mapper which\nrenders multiple times into the same image.\n"},
  {(char*)"GetRayCastImage", PyvtkFixedPointVolumeRayCastMapper_GetRayCastImage, 1,
   (char*)"V.GetRayCastImage() -> vtkFixedPointRayCastImage\nC++: vtkFixedPointRayCastImage *GetRayCastImage()\n\nSet / Get the underlying image object. One will be automatically\ncreated - only need to set it when using from an AMR mapper which\nrenders multiple times into the same image.\n"},
  {(char*)"PerVolumeInitialization", PyvtkFixedPointVolumeRayCastMapper_PerVolumeInitialization, 1,
   (char*)"V.PerVolumeInitialization(vtkRenderer, vtkVolume)\nC++: void PerVolumeInitialization(vtkRenderer *, vtkVolume *)\n\n"},
  {(char*)"PerSubVolumeInitialization", PyvtkFixedPointVolumeRayCastMapper_PerSubVolumeInitialization, 1,
   (char*)"V.PerSubVolumeInitialization(vtkRenderer, vtkVolume, int)\nC++: void PerSubVolumeInitialization(vtkRenderer *, vtkVolume *,\n    int)\n\n"},
  {(char*)"RenderSubVolume", PyvtkFixedPointVolumeRayCastMapper_RenderSubVolume, 1,
   (char*)"V.RenderSubVolume()\nC++: void RenderSubVolume()\n\n"},
  {(char*)"DisplayRenderedImage", PyvtkFixedPointVolumeRayCastMapper_DisplayRenderedImage, 1,
   (char*)"V.DisplayRenderedImage(vtkRenderer, vtkVolume)\nC++: void DisplayRenderedImage(vtkRenderer *, vtkVolume *)\n\n"},
  {(char*)"AbortRender", PyvtkFixedPointVolumeRayCastMapper_AbortRender, 1,
   (char*)"V.AbortRender()\nC++: void AbortRender()\n\n"},
  {(char*)"CreateCanonicalView", PyvtkFixedPointVolumeRayCastMapper_CreateCanonicalView, 1,
   (char*)"V.CreateCanonicalView(vtkVolume, vtkImageData, int, [float, float,\n     float], [float, float, float])\nC++: void CreateCanonicalView(vtkVolume *volume,\n    vtkImageData *image, int blend_mode, double viewDirection[3],\n    double viewUp[3])\n\n"},
  {(char*)"GetEstimatedRenderTime", PyvtkFixedPointVolumeRayCastMapper_GetEstimatedRenderTime, 1,
   (char*)"V.GetEstimatedRenderTime(vtkRenderer, vtkVolume) -> float\nC++: float GetEstimatedRenderTime(vtkRenderer *ren,\n    vtkVolume *vol)\nV.GetEstimatedRenderTime(vtkRenderer) -> float\nC++: float GetEstimatedRenderTime(vtkRenderer *ren)\n\nGet an estimate of the rendering time for a given volume /\nrenderer. Only valid if this mapper has been used to render that\nvolume for that renderer previously. Estimate is good when the\nviewing parameters have not changed much since that last render.\n"},
  {(char*)"SetFinalColorWindow", PyvtkFixedPointVolumeRayCastMapper_SetFinalColorWindow, 1,
   (char*)"V.SetFinalColorWindow(float)\nC++: void SetFinalColorWindow(float a)\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {(char*)"GetFinalColorWindow", PyvtkFixedPointVolumeRayCastMapper_GetFinalColorWindow, 1,
   (char*)"V.GetFinalColorWindow() -> float\nC++: float GetFinalColorWindow()\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {(char*)"SetFinalColorLevel", PyvtkFixedPointVolumeRayCastMapper_SetFinalColorLevel, 1,
   (char*)"V.SetFinalColorLevel(float)\nC++: void SetFinalColorLevel(float a)\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {(char*)"GetFinalColorLevel", PyvtkFixedPointVolumeRayCastMapper_GetFinalColorLevel, 1,
   (char*)"V.GetFinalColorLevel() -> float\nC++: float GetFinalColorLevel()\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {(char*)"GetFlipMIPComparison", PyvtkFixedPointVolumeRayCastMapper_GetFlipMIPComparison, 1,
   (char*)"V.GetFlipMIPComparison() -> int\nC++: int GetFlipMIPComparison()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFixedPointVolumeRayCastMapper_StaticNew()
{
  return vtkFixedPointVolumeRayCastMapper::New();
}

PyObject *PyVTKClass_vtkFixedPointVolumeRayCastMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFixedPointVolumeRayCastMapper_StaticNew,
    PyvtkFixedPointVolumeRayCastMapper_Methods,
    "vtkFixedPointVolumeRayCastMapper", modulename,
    NULL, NULL,
    PyvtkFixedPointVolumeRayCastMapper_Doc(),
    PyVTKClass_vtkVolumeMapperNew(modulename));
  return cls;
}

const char **PyvtkFixedPointVolumeRayCastMapper_Doc()
{
  static const char *docstring[] = {
    "vtkFixedPointVolumeRayCastMapper - A fixed point mapper for volumes\n\n",
    "Superclass: vtkVolumeMapper\n\n",
    "This is a software ray caster for rendering volumes in vtkImageData.\nIt works with all input data types and up to four components. It\nperforms composite or MIP rendering, and can be intermixed with\ngeometric data. Space leaping is used to speed up the rendering\nprocess. In addition, calculation are performed in 15 bit fixed point\nprecision. This mapper is threaded, and will interleave scan lines\na",
    "cross processors.\n\nThis mapper is a good replacement for vtkVolumeRayCastMapper EXCEPT:\n- it does not do isosurface ray casting\n- it does only interpolate before classify compositing\n- it does only maximum scalar value MIP\n\nThe vtkVolumeRayCastMapper CANNOT be used in these instances when a\nvtkFixedPointVolumeRayCastMapper can be used:\n- if the data is not unsigned char or unsigned short\n- if the ",
    "data has more than one component\n\nThis mapper handles all data type from unsigned char through double.\nHowever, some of the internal calcultions are performed in float and\ntherefore even the full float range may cause problems for this\nmapper (both in scalar data values and in spacing between samples).\n\nSpace leaping is performed by creating a sub-sampled volume. 4x4x4\ncells in the original volume",
    " are represented by a min, max, and\ncombined gradient and flag value. The min max volume has three\nunsigned shorts per 4x4x4 group of cells from the original volume -\none reprenting the minumum scalar index (the scalar value adjusted to\nfit in the 15 bit range), the maximum scalar index, and a third\nunsigned short which is both the maximum gradient opacity in the\nneighborhood (an unsigned char) an",
    "d the flag that is filled in for\nthe current lookup tables to indicate whether this region can be\nskipped.\n\nSee Also:\n\nvtkVolumeMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFixedPointVolumeRayCastMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFixedPointVolumeRayCastMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFixedPointVolumeRayCastMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

