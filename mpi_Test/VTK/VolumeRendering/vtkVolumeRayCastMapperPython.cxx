// python wrapper for vtkVolumeRayCastMapper
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
#include "vtkVolumeRayCastMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVolumeRayCastMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVolumeRayCastMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVolumeRayCastMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVolumeRayCastMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkVolumeMapperNew
#endif

static const char **PyvtkVolumeRayCastMapper_Doc();


static PyObject *
PyvtkVolumeRayCastMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkVolumeRayCastMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkVolumeRayCastMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  vtkVolumeRayCastMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::NewInstance();
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
PyvtkVolumeRayCastMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVolumeRayCastMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVolumeRayCastMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_SetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  double temp0;
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
      op->vtkVolumeRayCastMapper::SetSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSampleDistance();
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetSampleDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_SetVolumeRayCastFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeRayCastFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  vtkVolumeRayCastFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeRayCastFunction"))
    {
    if (ap.IsBound())
      {
      op->SetVolumeRayCastFunction(temp0);
      }
    else
      {
      op->vtkVolumeRayCastMapper::SetVolumeRayCastFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetVolumeRayCastFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeRayCastFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  vtkVolumeRayCastFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVolumeRayCastFunction();
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetVolumeRayCastFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_SetGradientEstimator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientEstimator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  vtkEncodedGradientEstimator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEncodedGradientEstimator"))
    {
    if (ap.IsBound())
      {
      op->SetGradientEstimator(temp0);
      }
    else
      {
      op->vtkVolumeRayCastMapper::SetGradientEstimator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetGradientEstimator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientEstimator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  vtkEncodedGradientEstimator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientEstimator();
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetGradientEstimator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetGradientShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  vtkEncodedGradientShader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientShader();
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetGradientShader();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_SetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  double temp0;
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
      op->vtkVolumeRayCastMapper::SetImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageSampleDistanceMinValue();
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetImageSampleDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageSampleDistanceMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetImageSampleDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageSampleDistance();
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetImageSampleDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_SetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  double temp0;
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
      op->vtkVolumeRayCastMapper::SetMinimumImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumImageSampleDistanceMinValue();
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetMinimumImageSampleDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumImageSampleDistanceMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetMinimumImageSampleDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumImageSampleDistance();
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetMinimumImageSampleDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_SetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  double temp0;
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
      op->vtkVolumeRayCastMapper::SetMaximumImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumImageSampleDistanceMinValue();
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetMaximumImageSampleDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumImageSampleDistanceMaxValue();
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetMaximumImageSampleDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumImageSampleDistance();
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetMaximumImageSampleDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_SetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

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
      op->vtkVolumeRayCastMapper::SetAutoAdjustSampleDistances(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkVolumeRayCastMapper::GetAutoAdjustSampleDistancesMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkVolumeRayCastMapper::GetAutoAdjustSampleDistancesMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkVolumeRayCastMapper::GetAutoAdjustSampleDistances();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_AutoAdjustSampleDistancesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustSampleDistancesOn();
      }
    else
      {
      op->vtkVolumeRayCastMapper::AutoAdjustSampleDistancesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_AutoAdjustSampleDistancesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustSampleDistancesOff();
      }
    else
      {
      op->vtkVolumeRayCastMapper::AutoAdjustSampleDistancesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

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
      op->vtkVolumeRayCastMapper::SetNumberOfThreads(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkVolumeRayCastMapper::GetNumberOfThreads();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_SetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

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
      op->vtkVolumeRayCastMapper::SetIntermixIntersectingGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetIntermixIntersectingGeometryMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkVolumeRayCastMapper::GetIntermixIntersectingGeometryMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetIntermixIntersectingGeometryMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkVolumeRayCastMapper::GetIntermixIntersectingGeometryMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkVolumeRayCastMapper::GetIntermixIntersectingGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_IntermixIntersectingGeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntermixIntersectingGeometryOn();
      }
    else
      {
      op->vtkVolumeRayCastMapper::IntermixIntersectingGeometryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_IntermixIntersectingGeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntermixIntersectingGeometryOff();
      }
    else
      {
      op->vtkVolumeRayCastMapper::IntermixIntersectingGeometryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

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
      op->vtkVolumeRayCastMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

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
      op->vtkVolumeRayCastMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetZeroOpacityThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroOpacityThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  vtkVolume *temp0 = NULL;
  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZeroOpacityThreshold(temp0);
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetZeroOpacityThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastMapper_GetGradientMagnitudeScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientMagnitudeScale();
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetGradientMagnitudeScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeRayCastMapper_GetGradientMagnitudeScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  int temp0;
  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientMagnitudeScale(temp0);
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetGradientMagnitudeScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeRayCastMapper_GetGradientMagnitudeScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkVolumeRayCastMapper_GetGradientMagnitudeScale_s1(self, args);
    case 1:
      return PyvtkVolumeRayCastMapper_GetGradientMagnitudeScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientMagnitudeScale");
  return NULL;
}



static PyObject *
PyvtkVolumeRayCastMapper_GetGradientMagnitudeBias_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientMagnitudeBias();
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetGradientMagnitudeBias();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeRayCastMapper_GetGradientMagnitudeBias_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastMapper *op = static_cast<vtkVolumeRayCastMapper *>(vp);

  int temp0;
  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientMagnitudeBias(temp0);
      }
    else
      {
      tempr = op->vtkVolumeRayCastMapper::GetGradientMagnitudeBias(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeRayCastMapper_GetGradientMagnitudeBias(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkVolumeRayCastMapper_GetGradientMagnitudeBias_s1(self, args);
    case 1:
      return PyvtkVolumeRayCastMapper_GetGradientMagnitudeBias_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientMagnitudeBias");
  return NULL;
}


static PyMethodDef PyvtkVolumeRayCastMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeRayCastMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeRayCastMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeRayCastMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVolumeRayCastMapper\nC++: vtkVolumeRayCastMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeRayCastMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeRayCastMapper\nC++: vtkVolumeRayCastMapper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSampleDistance", PyvtkVolumeRayCastMapper_SetSampleDistance, 1,
   (char*)"V.SetSampleDistance(float)\nC++: void SetSampleDistance(double a)\n\nSet/Get the distance between samples.  This variable is only used\nfor sampling ray casting methods.  Methods that compute a ray\nvalue by stepping cell-by-cell are not affected by this value.\n"},
  {(char*)"GetSampleDistance", PyvtkVolumeRayCastMapper_GetSampleDistance, 1,
   (char*)"V.GetSampleDistance() -> float\nC++: double GetSampleDistance()\n\nSet/Get the distance between samples.  This variable is only used\nfor sampling ray casting methods.  Methods that compute a ray\nvalue by stepping cell-by-cell are not affected by this value.\n"},
  {(char*)"SetVolumeRayCastFunction", PyvtkVolumeRayCastMapper_SetVolumeRayCastFunction, 1,
   (char*)"V.SetVolumeRayCastFunction(vtkVolumeRayCastFunction)\nC++: virtual void SetVolumeRayCastFunction(\n    vtkVolumeRayCastFunction *)\n\nGet / Set the volume ray cast function. This is used to process\nvalues found along the ray to compute a final pixel value.\n"},
  {(char*)"GetVolumeRayCastFunction", PyvtkVolumeRayCastMapper_GetVolumeRayCastFunction, 1,
   (char*)"V.GetVolumeRayCastFunction() -> vtkVolumeRayCastFunction\nC++: vtkVolumeRayCastFunction *GetVolumeRayCastFunction()\n\nGet / Set the volume ray cast function. This is used to process\nvalues found along the ray to compute a final pixel value.\n"},
  {(char*)"SetGradientEstimator", PyvtkVolumeRayCastMapper_SetGradientEstimator, 1,
   (char*)"V.SetGradientEstimator(vtkEncodedGradientEstimator)\nC++: virtual void SetGradientEstimator(\n    vtkEncodedGradientEstimator *gradest)\n\nSet / Get the gradient estimator used to estimate normals\n"},
  {(char*)"GetGradientEstimator", PyvtkVolumeRayCastMapper_GetGradientEstimator, 1,
   (char*)"V.GetGradientEstimator() -> vtkEncodedGradientEstimator\nC++: vtkEncodedGradientEstimator *GetGradientEstimator()\n\nSet / Get the gradient estimator used to estimate normals\n"},
  {(char*)"GetGradientShader", PyvtkVolumeRayCastMapper_GetGradientShader, 1,
   (char*)"V.GetGradientShader() -> vtkEncodedGradientShader\nC++: vtkEncodedGradientShader *GetGradientShader()\n\nGet the gradient shader.\n"},
  {(char*)"SetImageSampleDistance", PyvtkVolumeRayCastMapper_SetImageSampleDistance, 1,
   (char*)"V.SetImageSampleDistance(float)\nC++: void SetImageSampleDistance(double)\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {(char*)"GetImageSampleDistanceMinValue", PyvtkVolumeRayCastMapper_GetImageSampleDistanceMinValue, 1,
   (char*)"V.GetImageSampleDistanceMinValue() -> float\nC++: double GetImageSampleDistanceMinValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {(char*)"GetImageSampleDistanceMaxValue", PyvtkVolumeRayCastMapper_GetImageSampleDistanceMaxValue, 1,
   (char*)"V.GetImageSampleDistanceMaxValue() -> float\nC++: double GetImageSampleDistanceMaxValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {(char*)"GetImageSampleDistance", PyvtkVolumeRayCastMapper_GetImageSampleDistance, 1,
   (char*)"V.GetImageSampleDistance() -> float\nC++: double GetImageSampleDistance()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {(char*)"SetMinimumImageSampleDistance", PyvtkVolumeRayCastMapper_SetMinimumImageSampleDistance, 1,
   (char*)"V.SetMinimumImageSampleDistance(float)\nC++: void SetMinimumImageSampleDistance(double)\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMinimumImageSampleDistanceMinValue", PyvtkVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue, 1,
   (char*)"V.GetMinimumImageSampleDistanceMinValue() -> float\nC++: double GetMinimumImageSampleDistanceMinValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMinimumImageSampleDistanceMaxValue", PyvtkVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue, 1,
   (char*)"V.GetMinimumImageSampleDistanceMaxValue() -> float\nC++: double GetMinimumImageSampleDistanceMaxValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMinimumImageSampleDistance", PyvtkVolumeRayCastMapper_GetMinimumImageSampleDistance, 1,
   (char*)"V.GetMinimumImageSampleDistance() -> float\nC++: double GetMinimumImageSampleDistance()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"SetMaximumImageSampleDistance", PyvtkVolumeRayCastMapper_SetMaximumImageSampleDistance, 1,
   (char*)"V.SetMaximumImageSampleDistance(float)\nC++: void SetMaximumImageSampleDistance(double)\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMaximumImageSampleDistanceMinValue", PyvtkVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue, 1,
   (char*)"V.GetMaximumImageSampleDistanceMinValue() -> float\nC++: double GetMaximumImageSampleDistanceMinValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMaximumImageSampleDistanceMaxValue", PyvtkVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue, 1,
   (char*)"V.GetMaximumImageSampleDistanceMaxValue() -> float\nC++: double GetMaximumImageSampleDistanceMaxValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMaximumImageSampleDistance", PyvtkVolumeRayCastMapper_GetMaximumImageSampleDistance, 1,
   (char*)"V.GetMaximumImageSampleDistance() -> float\nC++: double GetMaximumImageSampleDistance()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"SetAutoAdjustSampleDistances", PyvtkVolumeRayCastMapper_SetAutoAdjustSampleDistances, 1,
   (char*)"V.SetAutoAdjustSampleDistances(int)\nC++: void SetAutoAdjustSampleDistances(int)\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"GetAutoAdjustSampleDistancesMinValue", PyvtkVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue, 1,
   (char*)"V.GetAutoAdjustSampleDistancesMinValue() -> int\nC++: int GetAutoAdjustSampleDistancesMinValue()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"GetAutoAdjustSampleDistancesMaxValue", PyvtkVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue, 1,
   (char*)"V.GetAutoAdjustSampleDistancesMaxValue() -> int\nC++: int GetAutoAdjustSampleDistancesMaxValue()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"GetAutoAdjustSampleDistances", PyvtkVolumeRayCastMapper_GetAutoAdjustSampleDistances, 1,
   (char*)"V.GetAutoAdjustSampleDistances() -> int\nC++: int GetAutoAdjustSampleDistances()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"AutoAdjustSampleDistancesOn", PyvtkVolumeRayCastMapper_AutoAdjustSampleDistancesOn, 1,
   (char*)"V.AutoAdjustSampleDistancesOn()\nC++: void AutoAdjustSampleDistancesOn()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"AutoAdjustSampleDistancesOff", PyvtkVolumeRayCastMapper_AutoAdjustSampleDistancesOff, 1,
   (char*)"V.AutoAdjustSampleDistancesOff()\nC++: void AutoAdjustSampleDistancesOff()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"SetNumberOfThreads", PyvtkVolumeRayCastMapper_SetNumberOfThreads, 1,
   (char*)"V.SetNumberOfThreads(int)\nC++: void SetNumberOfThreads(int num)\n\nSet/Get the number of threads to use. This by default is equal to\nthe number of available processors detected.\n"},
  {(char*)"GetNumberOfThreads", PyvtkVolumeRayCastMapper_GetNumberOfThreads, 1,
   (char*)"V.GetNumberOfThreads() -> int\nC++: int GetNumberOfThreads()\n\nSet/Get the number of threads to use. This by default is equal to\nthe number of available processors detected.\n"},
  {(char*)"SetIntermixIntersectingGeometry", PyvtkVolumeRayCastMapper_SetIntermixIntersectingGeometry, 1,
   (char*)"V.SetIntermixIntersectingGeometry(int)\nC++: void SetIntermixIntersectingGeometry(int)\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"GetIntermixIntersectingGeometryMinValue", PyvtkVolumeRayCastMapper_GetIntermixIntersectingGeometryMinValue, 1,
   (char*)"V.GetIntermixIntersectingGeometryMinValue() -> int\nC++: int GetIntermixIntersectingGeometryMinValue()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"GetIntermixIntersectingGeometryMaxValue", PyvtkVolumeRayCastMapper_GetIntermixIntersectingGeometryMaxValue, 1,
   (char*)"V.GetIntermixIntersectingGeometryMaxValue() -> int\nC++: int GetIntermixIntersectingGeometryMaxValue()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"GetIntermixIntersectingGeometry", PyvtkVolumeRayCastMapper_GetIntermixIntersectingGeometry, 1,
   (char*)"V.GetIntermixIntersectingGeometry() -> int\nC++: int GetIntermixIntersectingGeometry()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"IntermixIntersectingGeometryOn", PyvtkVolumeRayCastMapper_IntermixIntersectingGeometryOn, 1,
   (char*)"V.IntermixIntersectingGeometryOn()\nC++: void IntermixIntersectingGeometryOn()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"IntermixIntersectingGeometryOff", PyvtkVolumeRayCastMapper_IntermixIntersectingGeometryOff, 1,
   (char*)"V.IntermixIntersectingGeometryOff()\nC++: void IntermixIntersectingGeometryOff()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"Render", PyvtkVolumeRayCastMapper_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: void Render(vtkRenderer *, vtkVolume *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\nInitialize rendering for this volume.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkVolumeRayCastMapper_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {(char*)"GetZeroOpacityThreshold", PyvtkVolumeRayCastMapper_GetZeroOpacityThreshold, 1,
   (char*)"V.GetZeroOpacityThreshold(vtkVolume) -> float\nC++: float GetZeroOpacityThreshold(vtkVolume *vol)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Return\nthe scalar value below which all opacities are zero\n"},
  {(char*)"GetGradientMagnitudeScale", PyvtkVolumeRayCastMapper_GetGradientMagnitudeScale, 1,
   (char*)"V.GetGradientMagnitudeScale() -> float\nC++: virtual float GetGradientMagnitudeScale()\nV.GetGradientMagnitudeScale(int) -> float\nC++: virtual float GetGradientMagnitudeScale(int)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Values\nneeded by the volume\n"},
  {(char*)"GetGradientMagnitudeBias", PyvtkVolumeRayCastMapper_GetGradientMagnitudeBias, 1,
   (char*)"V.GetGradientMagnitudeBias() -> float\nC++: virtual float GetGradientMagnitudeBias()\nV.GetGradientMagnitudeBias(int) -> float\nC++: virtual float GetGradientMagnitudeBias(int)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Values\nneeded by the volume\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeRayCastMapper_StaticNew()
{
  return vtkVolumeRayCastMapper::New();
}

PyObject *PyVTKClass_vtkVolumeRayCastMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeRayCastMapper_StaticNew,
    PyvtkVolumeRayCastMapper_Methods,
    "vtkVolumeRayCastMapper", modulename,
    NULL, NULL,
    PyvtkVolumeRayCastMapper_Doc(),
    PyVTKClass_vtkVolumeMapperNew(modulename));
  return cls;
}

const char **PyvtkVolumeRayCastMapper_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeRayCastMapper - A slow but accurate mapper for rendering\nvolumes\n\n",
    "Superclass: vtkVolumeMapper\n\n",
    "This is a software ray caster for rendering volumes in vtkImageData.\n\nSee Also:\n\nvtkVolumeMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeRayCastMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeRayCastMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeRayCastMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

