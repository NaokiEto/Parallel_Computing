// python wrapper for vtkUnstructuredGridVolumeZSweepMapper
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
#include "vtkUnstructuredGridVolumeZSweepMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGridVolumeZSweepMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGridVolumeZSweepMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridVolumeZSweepMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeZSweepMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridVolumeMapperNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeMapperNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridVolumeMapperNew
#endif

static const char **PyvtkUnstructuredGridVolumeZSweepMapper_Doc();


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  vtkUnstructuredGridVolumeZSweepMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::NewInstance();
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
PyvtkUnstructuredGridVolumeZSweepMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUnstructuredGridVolumeZSweepMapper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUnstructuredGridVolumeZSweepMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_SetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeZSweepMapper::SetImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetImageSampleDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetImageSampleDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetImageSampleDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_SetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeZSweepMapper::SetMinimumImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetMinimumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetMinimumImageSampleDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetMinimumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetMinimumImageSampleDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetMinimumImageSampleDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_SetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeZSweepMapper::SetMaximumImageSampleDistance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetMaximumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetMaximumImageSampleDistanceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetMaximumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetMaximumImageSampleDistanceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetMaximumImageSampleDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_SetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeZSweepMapper::SetAutoAdjustSampleDistances(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetAutoAdjustSampleDistancesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetAutoAdjustSampleDistancesMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetAutoAdjustSampleDistancesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetAutoAdjustSampleDistancesMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetAutoAdjustSampleDistances();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_AutoAdjustSampleDistancesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustSampleDistancesOn();
      }
    else
      {
      op->vtkUnstructuredGridVolumeZSweepMapper::AutoAdjustSampleDistancesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_AutoAdjustSampleDistancesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdjustSampleDistancesOff();
      }
    else
      {
      op->vtkUnstructuredGridVolumeZSweepMapper::AutoAdjustSampleDistancesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_SetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeZSweepMapper::SetIntermixIntersectingGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetIntermixIntersectingGeometryMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetIntermixIntersectingGeometryMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetIntermixIntersectingGeometryMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetIntermixIntersectingGeometryMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetIntermixIntersectingGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_IntermixIntersectingGeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntermixIntersectingGeometryOn();
      }
    else
      {
      op->vtkUnstructuredGridVolumeZSweepMapper::IntermixIntersectingGeometryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_IntermixIntersectingGeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IntermixIntersectingGeometryOff();
      }
    else
      {
      op->vtkUnstructuredGridVolumeZSweepMapper::IntermixIntersectingGeometryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetMaxPixelListSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxPixelListSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxPixelListSize();
      }
    else
      {
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetMaxPixelListSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_SetMaxPixelListSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxPixelListSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxPixelListSize(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeZSweepMapper::SetMaxPixelListSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_SetRayIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRayIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeZSweepMapper::SetRayIntegrator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetRayIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRayIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetRayIntegrator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      op->vtkUnstructuredGridVolumeZSweepMapper::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetImageInUseSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageInUseSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetImageInUseSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetImageOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetImageOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeZSweepMapper_GetImageViewportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeZSweepMapper *op = static_cast<vtkUnstructuredGridVolumeZSweepMapper *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeZSweepMapper::GetImageViewportSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridVolumeZSweepMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridVolumeZSweepMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridVolumeZSweepMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridVolumeZSweepMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGridVolumeZSweepMapper\nC++: vtkUnstructuredGridVolumeZSweepMapper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGridVolumeZSweepMapper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUnstructuredGridVolumeZSweepMapper\nC++: vtkUnstructuredGridVolumeZSweepMapper *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetImageSampleDistance", PyvtkUnstructuredGridVolumeZSweepMapper_SetImageSampleDistance, 1,
   (char*)"V.SetImageSampleDistance(float)\nC++: void SetImageSampleDistance(float)\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {(char*)"GetImageSampleDistanceMinValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetImageSampleDistanceMinValue, 1,
   (char*)"V.GetImageSampleDistanceMinValue() -> float\nC++: float GetImageSampleDistanceMinValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {(char*)"GetImageSampleDistanceMaxValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetImageSampleDistanceMaxValue, 1,
   (char*)"V.GetImageSampleDistanceMaxValue() -> float\nC++: float GetImageSampleDistanceMaxValue()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {(char*)"GetImageSampleDistance", PyvtkUnstructuredGridVolumeZSweepMapper_GetImageSampleDistance, 1,
   (char*)"V.GetImageSampleDistance() -> float\nC++: float GetImageSampleDistance()\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {(char*)"SetMinimumImageSampleDistance", PyvtkUnstructuredGridVolumeZSweepMapper_SetMinimumImageSampleDistance, 1,
   (char*)"V.SetMinimumImageSampleDistance(float)\nC++: void SetMinimumImageSampleDistance(float)\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMinimumImageSampleDistanceMinValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetMinimumImageSampleDistanceMinValue, 1,
   (char*)"V.GetMinimumImageSampleDistanceMinValue() -> float\nC++: float GetMinimumImageSampleDistanceMinValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMinimumImageSampleDistanceMaxValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetMinimumImageSampleDistanceMaxValue, 1,
   (char*)"V.GetMinimumImageSampleDistanceMaxValue() -> float\nC++: float GetMinimumImageSampleDistanceMaxValue()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMinimumImageSampleDistance", PyvtkUnstructuredGridVolumeZSweepMapper_GetMinimumImageSampleDistance, 1,
   (char*)"V.GetMinimumImageSampleDistance() -> float\nC++: float GetMinimumImageSampleDistance()\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"SetMaximumImageSampleDistance", PyvtkUnstructuredGridVolumeZSweepMapper_SetMaximumImageSampleDistance, 1,
   (char*)"V.SetMaximumImageSampleDistance(float)\nC++: void SetMaximumImageSampleDistance(float)\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMaximumImageSampleDistanceMinValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetMaximumImageSampleDistanceMinValue, 1,
   (char*)"V.GetMaximumImageSampleDistanceMinValue() -> float\nC++: float GetMaximumImageSampleDistanceMinValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMaximumImageSampleDistanceMaxValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetMaximumImageSampleDistanceMaxValue, 1,
   (char*)"V.GetMaximumImageSampleDistanceMaxValue() -> float\nC++: float GetMaximumImageSampleDistanceMaxValue()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"GetMaximumImageSampleDistance", PyvtkUnstructuredGridVolumeZSweepMapper_GetMaximumImageSampleDistance, 1,
   (char*)"V.GetMaximumImageSampleDistance() -> float\nC++: float GetMaximumImageSampleDistance()\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {(char*)"SetAutoAdjustSampleDistances", PyvtkUnstructuredGridVolumeZSweepMapper_SetAutoAdjustSampleDistances, 1,
   (char*)"V.SetAutoAdjustSampleDistances(int)\nC++: void SetAutoAdjustSampleDistances(int)\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"GetAutoAdjustSampleDistancesMinValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetAutoAdjustSampleDistancesMinValue, 1,
   (char*)"V.GetAutoAdjustSampleDistancesMinValue() -> int\nC++: int GetAutoAdjustSampleDistancesMinValue()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"GetAutoAdjustSampleDistancesMaxValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetAutoAdjustSampleDistancesMaxValue, 1,
   (char*)"V.GetAutoAdjustSampleDistancesMaxValue() -> int\nC++: int GetAutoAdjustSampleDistancesMaxValue()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"GetAutoAdjustSampleDistances", PyvtkUnstructuredGridVolumeZSweepMapper_GetAutoAdjustSampleDistances, 1,
   (char*)"V.GetAutoAdjustSampleDistances() -> int\nC++: int GetAutoAdjustSampleDistances()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"AutoAdjustSampleDistancesOn", PyvtkUnstructuredGridVolumeZSweepMapper_AutoAdjustSampleDistancesOn, 1,
   (char*)"V.AutoAdjustSampleDistancesOn()\nC++: void AutoAdjustSampleDistancesOn()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"AutoAdjustSampleDistancesOff", PyvtkUnstructuredGridVolumeZSweepMapper_AutoAdjustSampleDistancesOff, 1,
   (char*)"V.AutoAdjustSampleDistancesOff()\nC++: void AutoAdjustSampleDistancesOff()\n\nIf AutoAdjustSampleDistances is on, the the ImageSampleDistance\nwill be varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {(char*)"SetIntermixIntersectingGeometry", PyvtkUnstructuredGridVolumeZSweepMapper_SetIntermixIntersectingGeometry, 1,
   (char*)"V.SetIntermixIntersectingGeometry(int)\nC++: void SetIntermixIntersectingGeometry(int)\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"GetIntermixIntersectingGeometryMinValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetIntermixIntersectingGeometryMinValue, 1,
   (char*)"V.GetIntermixIntersectingGeometryMinValue() -> int\nC++: int GetIntermixIntersectingGeometryMinValue()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"GetIntermixIntersectingGeometryMaxValue", PyvtkUnstructuredGridVolumeZSweepMapper_GetIntermixIntersectingGeometryMaxValue, 1,
   (char*)"V.GetIntermixIntersectingGeometryMaxValue() -> int\nC++: int GetIntermixIntersectingGeometryMaxValue()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"GetIntermixIntersectingGeometry", PyvtkUnstructuredGridVolumeZSweepMapper_GetIntermixIntersectingGeometry, 1,
   (char*)"V.GetIntermixIntersectingGeometry() -> int\nC++: int GetIntermixIntersectingGeometry()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"IntermixIntersectingGeometryOn", PyvtkUnstructuredGridVolumeZSweepMapper_IntermixIntersectingGeometryOn, 1,
   (char*)"V.IntermixIntersectingGeometryOn()\nC++: void IntermixIntersectingGeometryOn()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"IntermixIntersectingGeometryOff", PyvtkUnstructuredGridVolumeZSweepMapper_IntermixIntersectingGeometryOff, 1,
   (char*)"V.IntermixIntersectingGeometryOff()\nC++: void IntermixIntersectingGeometryOff()\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {(char*)"GetMaxPixelListSize", PyvtkUnstructuredGridVolumeZSweepMapper_GetMaxPixelListSize, 1,
   (char*)"V.GetMaxPixelListSize() -> int\nC++: int GetMaxPixelListSize()\n\nMaximum size allowed for a pixel list. Default is 32. During the\nrendering, if a list of pixel is full, incremental compositing is\nperformed. Even if it is a user setting, it is an advanced\nparameter. You have to understand how the algorithm works to\nchange this value.\n"},
  {(char*)"SetMaxPixelListSize", PyvtkUnstructuredGridVolumeZSweepMapper_SetMaxPixelListSize, 1,
   (char*)"V.SetMaxPixelListSize(int)\nC++: void SetMaxPixelListSize(int size)\n\nChange the maximum size allowed for a pixel list. It is an\nadvanced parameter.\n\\pre positive_size: size>1\n"},
  {(char*)"SetRayIntegrator", PyvtkUnstructuredGridVolumeZSweepMapper_SetRayIntegrator, 1,
   (char*)"V.SetRayIntegrator(vtkUnstructuredGridVolumeRayIntegrator)\nC++: virtual void SetRayIntegrator(\n    vtkUnstructuredGridVolumeRayIntegrator *ri)\n\nSet/Get the helper class for integrating rays.  If set to NULL, a\ndefault integrator will be assigned.\n"},
  {(char*)"GetRayIntegrator", PyvtkUnstructuredGridVolumeZSweepMapper_GetRayIntegrator, 1,
   (char*)"V.GetRayIntegrator() -> vtkUnstructuredGridVolumeRayIntegrator\nC++: vtkUnstructuredGridVolumeRayIntegrator *GetRayIntegrator()\n\nSet/Get the helper class for integrating rays.  If set to NULL, a\ndefault integrator will be assigned.\n"},
  {(char*)"Render", PyvtkUnstructuredGridVolumeZSweepMapper_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: void Render(vtkRenderer *ren, vtkVolume *vol)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {(char*)"GetImageInUseSize", PyvtkUnstructuredGridVolumeZSweepMapper_GetImageInUseSize, 1,
   (char*)"V.GetImageInUseSize() -> (int, int)\nC++: int *GetImageInUseSize()\n\n"},
  {(char*)"GetImageOrigin", PyvtkUnstructuredGridVolumeZSweepMapper_GetImageOrigin, 1,
   (char*)"V.GetImageOrigin() -> (int, int)\nC++: int *GetImageOrigin()\n\n"},
  {(char*)"GetImageViewportSize", PyvtkUnstructuredGridVolumeZSweepMapper_GetImageViewportSize, 1,
   (char*)"V.GetImageViewportSize() -> (int, int)\nC++: int *GetImageViewportSize()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGridVolumeZSweepMapper_StaticNew()
{
  return vtkUnstructuredGridVolumeZSweepMapper::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridVolumeZSweepMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGridVolumeZSweepMapper_StaticNew,
    PyvtkUnstructuredGridVolumeZSweepMapper_Methods,
    "vtkUnstructuredGridVolumeZSweepMapper", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridVolumeZSweepMapper_Doc(),
    PyVTKClass_vtkUnstructuredGridVolumeMapperNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridVolumeZSweepMapper_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridVolumeZSweepMapper - Unstructured grid volume\nmapper based the ZSweep Algorithm\n\n",
    "Superclass: vtkUnstructuredGridVolumeMapper\n\n",
    "This is a volume mapper for unstructured grid implemented with the\nZSweep algorithm. This is a software projective method.\n\nSee Also:\n\nvtkVolumetMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridVolumeZSweepMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridVolumeZSweepMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridVolumeZSweepMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

