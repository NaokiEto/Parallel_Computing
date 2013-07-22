// python wrapper for vtkUnstructuredGridVolumeRayCastMapper
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
#include "vtkUnstructuredGridVolumeRayCastMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGridVolumeRayCastMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGridVolumeRayCastMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayCastMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayCastMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridVolumeMapperNew
#endif

static const char **PyvtkUnstructuredGridVolumeRayCastMapper_Doc();


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  vtkUnstructuredGridVolumeRayCastMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::NewInstance();
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
PyvtkUnstructuredGridVolumeRayCastMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUnstructuredGridVolumeRayCastMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUnstructuredGridVolumeRayCastMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeRayCastMapper::SetImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetImageSampleDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetImageSampleDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetImageSampleDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeRayCastMapper::SetMinimumImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetMinimumImageSampleDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetMinimumImageSampleDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetMinimumImageSampleDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeRayCastMapper::SetMaximumImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetMaximumImageSampleDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetMaximumImageSampleDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetMaximumImageSampleDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeRayCastMapper::SetAutoAdjustSampleDistances(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetAutoAdjustSampleDistancesMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetAutoAdjustSampleDistancesMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetAutoAdjustSampleDistances();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_AutoAdjustSampleDistancesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustSampleDistancesOn();
      }
    else
      {
      op->vtkUnstructuredGridVolumeRayCastMapper::AutoAdjustSampleDistancesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_AutoAdjustSampleDistancesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustSampleDistancesOff();
      }
    else
      {
      op->vtkUnstructuredGridVolumeRayCastMapper::AutoAdjustSampleDistancesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeRayCastMapper::SetNumberOfThreads(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetNumberOfThreads();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeRayCastMapper::SetIntermixIntersectingGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetIntermixIntersectingGeometryMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetIntermixIntersectingGeometryMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetIntermixIntersectingGeometryMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetIntermixIntersectingGeometryMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetIntermixIntersectingGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_IntermixIntersectingGeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntermixIntersectingGeometryOn();
      }
    else
      {
      op->vtkUnstructuredGridVolumeRayCastMapper::IntermixIntersectingGeometryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_IntermixIntersectingGeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntermixIntersectingGeometryOff();
      }
    else
      {
      op->vtkUnstructuredGridVolumeRayCastMapper::IntermixIntersectingGeometryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SetRayCastFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRayCastFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  vtkUnstructuredGridVolumeRayCastFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGridVolumeRayCastFunction"))
    {
    if (ap.IsBound())
      {
      op->SetRayCastFunction(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRayCastMapper::SetRayCastFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetRayCastFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRayCastFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  vtkUnstructuredGridVolumeRayCastFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRayCastFunction();
      }
    else
      {
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetRayCastFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SetRayIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRayIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  vtkUnstructuredGridVolumeRayIntegrator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGridVolumeRayIntegrator"))
    {
    if (ap.IsBound())
      {
      op->SetRayIntegrator(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRayCastMapper::SetRayIntegrator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetRayIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRayIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  vtkUnstructuredGridVolumeRayIntegrator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRayIntegrator();
      }
    else
      {
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetRayIntegrator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeRayCastMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeRayCastMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetImageInUseSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageInUseSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageInUseSize();
      }
    else
      {
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetImageInUseSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetImageOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageOrigin();
      }
    else
      {
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetImageOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetImageViewportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageViewportSize();
      }
    else
      {
      tempr = op->vtkUnstructuredGridVolumeRayCastMapper::GetImageViewportSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_CastRays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CastRays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CastRays(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRayCastMapper::CastRays(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridVolumeRayCastMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridVolumeRayCastMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridVolumeRayCastMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridVolumeRayCastMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGridVolumeRayCastMapper\nC++: vtkUnstructuredGridVolumeRayCastMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGridVolumeRayCastMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkUnstructuredGridVolumeRayCastMapper\nC++: vtkUnstructuredGridVolumeRayCastMapper *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetImageSampleDistance", PyvtkUnstructuredGridVolumeRayCastMapper_SetImageSampleDistance, 1,
   (char*)"V.SetImageSampleDistance(float)\nC++: void SetImageSampleDistance(float)\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {(char*)"GetImageSampleDistanceMinValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetImageSampleDistanceMinValue, 1,
   (char*)"V.GetImageSampleDistanceMinValue() -> float\nC++: float GetImageSampleDistanceMinValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {(char*)"GetImageSampleDistanceMaxValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetImageSampleDistanceMaxValue, 1,
   (char*)"V.GetImageSampleDistanceMaxValue() -> float\nC++: float GetImageSampleDistanceMaxValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {(char*)"GetImageSampleDistance", PyvtkUnstructuredGridVolumeRayCastMapper_GetImageSampleDistance, 1,
   (char*)"V.GetImageSampleDistance() -> float\nC++: float GetImageSampleDistance()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {(char*)"SetMinimumImageSampleDistance", PyvtkUnstructuredGridVolumeRayCastMapper_SetMinimumImageSampleDistance, 1,
   (char*)"V.SetMinimumImageSampleDistance(float)\nC++: void SetMinimumImageSampleDistance(float)\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMinimumImageSampleDistanceMinValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue, 1,
   (char*)"V.GetMinimumImageSampleDistanceMinValue() -> float\nC++: float GetMinimumImageSampleDistanceMinValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMinimumImageSampleDistanceMaxValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue, 1,
   (char*)"V.GetMinimumImageSampleDistanceMaxValue() -> float\nC++: float GetMinimumImageSampleDistanceMaxValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMinimumImageSampleDistance", PyvtkUnstructuredGridVolumeRayCastMapper_GetMinimumImageSampleDistance, 1,
   (char*)"V.GetMinimumImageSampleDistance() -> float\nC++: float GetMinimumImageSampleDistance()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"SetMaximumImageSampleDistance", PyvtkUnstructuredGridVolumeRayCastMapper_SetMaximumImageSampleDistance, 1,
   (char*)"V.SetMaximumImageSampleDistance(float)\nC++: void SetMaximumImageSampleDistance(float)\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMaximumImageSampleDistanceMinValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue, 1,
   (char*)"V.GetMaximumImageSampleDistanceMinValue() -> float\nC++: float GetMaximumImageSampleDistanceMinValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMaximumImageSampleDistanceMaxValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue, 1,
   (char*)"V.GetMaximumImageSampleDistanceMaxValue() -> float\nC++: float GetMaximumImageSampleDistanceMaxValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMaximumImageSampleDistance", PyvtkUnstructuredGridVolumeRayCastMapper_GetMaximumImageSampleDistance, 1,
   (char*)"V.GetMaximumImageSampleDistance() -> float\nC++: float GetMaximumImageSampleDistance()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"SetAutoAdjustSampleDistances", PyvtkUnstructuredGridVolumeRayCastMapper_SetAutoAdjustSampleDistances, 1,
   (char*)"V.SetAutoAdjustSampleDistances(int)\nC++: void SetAutoAdjustSampleDistances(int)\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"GetAutoAdjustSampleDistancesMinValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue, 1,
   (char*)"V.GetAutoAdjustSampleDistancesMinValue() -> int\nC++: int GetAutoAdjustSampleDistancesMinValue()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"GetAutoAdjustSampleDistancesMaxValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue, 1,
   (char*)"V.GetAutoAdjustSampleDistancesMaxValue() -> int\nC++: int GetAutoAdjustSampleDistancesMaxValue()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"GetAutoAdjustSampleDistances", PyvtkUnstructuredGridVolumeRayCastMapper_GetAutoAdjustSampleDistances, 1,
   (char*)"V.GetAutoAdjustSampleDistances() -> int\nC++: int GetAutoAdjustSampleDistances()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"AutoAdjustSampleDistancesOn", PyvtkUnstructuredGridVolumeRayCastMapper_AutoAdjustSampleDistancesOn, 1,
   (char*)"V.AutoAdjustSampleDistancesOn()\nC++: void AutoAdjustSampleDistancesOn()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"AutoAdjustSampleDistancesOff", PyvtkUnstructuredGridVolumeRayCastMapper_AutoAdjustSampleDistancesOff, 1,
   (char*)"V.AutoAdjustSampleDistancesOff()\nC++: void AutoAdjustSampleDistancesOff()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"SetNumberOfThreads", PyvtkUnstructuredGridVolumeRayCastMapper_SetNumberOfThreads, 1,
   (char*)"V.SetNumberOfThreads(int)\nC++: void SetNumberOfThreads(int a)\n\nSet/Get the number of threads to use. This by default is equal to\nthe number of available processors detected.\n"},
  {(char*)"GetNumberOfThreads", PyvtkUnstructuredGridVolumeRayCastMapper_GetNumberOfThreads, 1,
   (char*)"V.GetNumberOfThreads() -> int\nC++: int GetNumberOfThreads()\n\nSet/Get the number of threads to use. This by default is equal to\nthe number of available processors detected.\n"},
  {(char*)"SetIntermixIntersectingGeometry", PyvtkUnstructuredGridVolumeRayCastMapper_SetIntermixIntersectingGeometry, 1,
   (char*)"V.SetIntermixIntersectingGeometry(int)\nC++: void SetIntermixIntersectingGeometry(int)\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"GetIntermixIntersectingGeometryMinValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetIntermixIntersectingGeometryMinValue, 1,
   (char*)"V.GetIntermixIntersectingGeometryMinValue() -> int\nC++: int GetIntermixIntersectingGeometryMinValue()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"GetIntermixIntersectingGeometryMaxValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetIntermixIntersectingGeometryMaxValue, 1,
   (char*)"V.GetIntermixIntersectingGeometryMaxValue() -> int\nC++: int GetIntermixIntersectingGeometryMaxValue()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"GetIntermixIntersectingGeometry", PyvtkUnstructuredGridVolumeRayCastMapper_GetIntermixIntersectingGeometry, 1,
   (char*)"V.GetIntermixIntersectingGeometry() -> int\nC++: int GetIntermixIntersectingGeometry()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"IntermixIntersectingGeometryOn", PyvtkUnstructuredGridVolumeRayCastMapper_IntermixIntersectingGeometryOn, 1,
   (char*)"V.IntermixIntersectingGeometryOn()\nC++: void IntermixIntersectingGeometryOn()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"IntermixIntersectingGeometryOff", PyvtkUnstructuredGridVolumeRayCastMapper_IntermixIntersectingGeometryOff, 1,
   (char*)"V.IntermixIntersectingGeometryOff()\nC++: void IntermixIntersectingGeometryOff()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"SetRayCastFunction", PyvtkUnstructuredGridVolumeRayCastMapper_SetRayCastFunction, 1,
   (char*)"V.SetRayCastFunction(vtkUnstructuredGridVolumeRayCastFunction)\nC++: virtual void SetRayCastFunction(\n    vtkUnstructuredGridVolumeRayCastFunction *f)\n\nSet/Get the helper class for casting rays.\n"},
  {(char*)"GetRayCastFunction", PyvtkUnstructuredGridVolumeRayCastMapper_GetRayCastFunction, 1,
   (char*)"V.GetRayCastFunction() -> vtkUnstructuredGridVolumeRayCastFunction\nC++: vtkUnstructuredGridVolumeRayCastFunction *GetRayCastFunction(\n    )\n\nSet/Get the helper class for casting rays.\n"},
  {(char*)"SetRayIntegrator", PyvtkUnstructuredGridVolumeRayCastMapper_SetRayIntegrator, 1,
   (char*)"V.SetRayIntegrator(vtkUnstructuredGridVolumeRayIntegrator)\nC++: virtual void SetRayIntegrator(\n    vtkUnstructuredGridVolumeRayIntegrator *ri)\n\nSet/Get the helper class for integrating rays.  If set to NULL, a\ndefault integrator will be assigned.\n"},
  {(char*)"GetRayIntegrator", PyvtkUnstructuredGridVolumeRayCastMapper_GetRayIntegrator, 1,
   (char*)"V.GetRayIntegrator() -> vtkUnstructuredGridVolumeRayIntegrator\nC++: vtkUnstructuredGridVolumeRayIntegrator *GetRayIntegrator()\n\nSet/Get the helper class for integrating rays.  If set to NULL, a\ndefault integrator will be assigned.\n"},
  {(char*)"Render", PyvtkUnstructuredGridVolumeRayCastMapper_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: void Render(vtkRenderer *, vtkVolume *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\nInitialize rendering for this volume.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkUnstructuredGridVolumeRayCastMapper_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {(char*)"GetImageInUseSize", PyvtkUnstructuredGridVolumeRayCastMapper_GetImageInUseSize, 1,
   (char*)"V.GetImageInUseSize() -> (int, int)\nC++: int *GetImageInUseSize()\n\n"},
  {(char*)"GetImageOrigin", PyvtkUnstructuredGridVolumeRayCastMapper_GetImageOrigin, 1,
   (char*)"V.GetImageOrigin() -> (int, int)\nC++: int *GetImageOrigin()\n\n"},
  {(char*)"GetImageViewportSize", PyvtkUnstructuredGridVolumeRayCastMapper_GetImageViewportSize, 1,
   (char*)"V.GetImageViewportSize() -> (int, int)\nC++: int *GetImageViewportSize()\n\n"},
  {(char*)"CastRays", PyvtkUnstructuredGridVolumeRayCastMapper_CastRays, 1,
   (char*)"V.CastRays(int, int)\nC++: void CastRays(int threadID, int threadCount)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGridVolumeRayCastMapper_StaticNew()
{
  return vtkUnstructuredGridVolumeRayCastMapper::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayCastMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGridVolumeRayCastMapper_StaticNew,
    PyvtkUnstructuredGridVolumeRayCastMapper_Methods,
    "vtkUnstructuredGridVolumeRayCastMapper", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridVolumeRayCastMapper_Doc(),
    PyVTKClass_vtkUnstructuredGridVolumeMapperNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridVolumeRayCastMapper_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridVolumeRayCastMapper - A software mapper for\nunstructured volumes\n\n",
    "Superclass: vtkUnstructuredGridVolumeMapper\n\n",
    "This is a software ray caster for rendering volumes in\nvtkUnstructuredGrid.\n\nSee Also:\n\nvtkVolumeMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridVolumeRayCastMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridVolumeRayCastMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridVolumeRayCastMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

