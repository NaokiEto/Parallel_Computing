// python wrapper for vtkVolumeRayCastSpaceLeapingImageFilter
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
#include "vtkVolumeRayCastSpaceLeapingImageFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVolumeRayCastSpaceLeapingImageFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVolumeRayCastSpaceLeapingImageFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVolumeRayCastSpaceLeapingImageFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVolumeRayCastSpaceLeapingImageFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkVolumeRayCastSpaceLeapingImageFilter_Doc();


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

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
      tempr = op->vtkVolumeRayCastSpaceLeapingImageFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

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
      tempr = op->vtkVolumeRayCastSpaceLeapingImageFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  vtkVolumeRayCastSpaceLeapingImageFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVolumeRayCastSpaceLeapingImageFilter::NewInstance();
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
PyvtkVolumeRayCastSpaceLeapingImageFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVolumeRayCastSpaceLeapingImageFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVolumeRayCastSpaceLeapingImageFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetCurrentScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetCurrentScalars(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetCurrentScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetCurrentScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

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
      tempr = op->vtkVolumeRayCastSpaceLeapingImageFilter::GetCurrentScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetIndependentComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIndependentComponents(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetIndependentComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetIndependentComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndependentComponents();
      }
    else
      {
      tempr = op->vtkVolumeRayCastSpaceLeapingImageFilter::GetIndependentComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetComputeGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeGradientOpacity(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetComputeGradientOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetComputeGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeGradientOpacity();
      }
    else
      {
      tempr = op->vtkVolumeRayCastSpaceLeapingImageFilter::GetComputeGradientOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeGradientOpacityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeGradientOpacityOn();
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::ComputeGradientOpacityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeGradientOpacityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeGradientOpacityOff();
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::ComputeGradientOpacityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetComputeMinMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeMinMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeMinMax(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetComputeMinMax(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetComputeMinMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeMinMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeMinMax();
      }
    else
      {
      tempr = op->vtkVolumeRayCastSpaceLeapingImageFilter::GetComputeMinMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeMinMaxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMinMaxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeMinMaxOn();
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::ComputeMinMaxOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeMinMaxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMinMaxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeMinMaxOff();
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::ComputeMinMaxOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetUpdateGradientOpacityFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateGradientOpacityFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUpdateGradientOpacityFlags(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetUpdateGradientOpacityFlags(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetUpdateGradientOpacityFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateGradientOpacityFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpdateGradientOpacityFlags();
      }
    else
      {
      tempr = op->vtkVolumeRayCastSpaceLeapingImageFilter::GetUpdateGradientOpacityFlags();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_UpdateGradientOpacityFlagsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateGradientOpacityFlagsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateGradientOpacityFlagsOn();
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::UpdateGradientOpacityFlagsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_UpdateGradientOpacityFlagsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateGradientOpacityFlagsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateGradientOpacityFlagsOff();
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::UpdateGradientOpacityFlagsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetLastMinMaxBuildTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastMinMaxBuildTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastMinMaxBuildTime();
      }
    else
      {
      tempr = op->vtkVolumeRayCastSpaceLeapingImageFilter::GetLastMinMaxBuildTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetLastMinMaxFlagTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastMinMaxFlagTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastMinMaxFlagTime();
      }
    else
      {
      tempr = op->vtkVolumeRayCastSpaceLeapingImageFilter::GetLastMinMaxFlagTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetTableShift(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableShift(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  float temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTableShift(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift_s1(self, args);
    case 1:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTableShift");
  return NULL;
}



static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

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
      tempr = op->vtkVolumeRayCastSpaceLeapingImageFilter::GetTableShift();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetTableScale(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableScale(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  float temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTableScale(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale_s1(self, args);
    case 1:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTableScale");
  return NULL;
}



static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

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
      tempr = op->vtkVolumeRayCastSpaceLeapingImageFilter::GetTableScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
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
      op->SetTableSize(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableSize(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTableSize(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize_s1(self, args);
    case 1:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTableSize");
  return NULL;
}



static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTableSize();
      }
    else
      {
      tempr = op->vtkVolumeRayCastSpaceLeapingImageFilter::GetTableSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetNumberOfIndependentComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIndependentComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfIndependentComponents();
      }
    else
      {
      tempr = op->vtkVolumeRayCastSpaceLeapingImageFilter::GetNumberOfIndependentComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetCache(temp0);
      }
    else
      {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetCache(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeInputExtentsForOutput(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeInputExtentsForOutput");

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  unsigned int temp1[3];
  unsigned int save1[3];
  const int size1 = 3;
  int temp2[6];
  int save2[6];
  const int size2 = 6;
  vtkImageData *temp3 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkImageData"))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    vtkVolumeRayCastSpaceLeapingImageFilter::ComputeInputExtentsForOutput(temp0, temp1, temp2, temp3);

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

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int temp1[6];
  int save1[6];
  const int size1 = 6;
  int temp2;
  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->ComputeOffset(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkVolumeRayCastSpaceLeapingImageFilter::ComputeOffset(temp0, temp1, temp2);
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
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVolumeRayCastSpaceLeapingImageFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeRayCastSpaceLeapingImageFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeRayCastSpaceLeapingImageFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVolumeRayCastSpaceLeapingImageFilter\nC++: vtkVolumeRayCastSpaceLeapingImageFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeRayCastSpaceLeapingImageFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkVolumeRayCastSpaceLeapingImageFilter\nC++: vtkVolumeRayCastSpaceLeapingImageFilter *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetCurrentScalars", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetCurrentScalars, 1,
   (char*)"V.SetCurrentScalars(vtkDataArray)\nC++: virtual void SetCurrentScalars(vtkDataArray *)\n\nSet the scalars.\n"},
  {(char*)"GetCurrentScalars", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetCurrentScalars, 1,
   (char*)"V.GetCurrentScalars() -> vtkDataArray\nC++: vtkDataArray *GetCurrentScalars()\n\nSet the scalars.\n"},
  {(char*)"SetIndependentComponents", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetIndependentComponents, 1,
   (char*)"V.SetIndependentComponents(int)\nC++: void SetIndependentComponents(int a)\n\nDo we use independent components, or dependent components ?\n"},
  {(char*)"GetIndependentComponents", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetIndependentComponents, 1,
   (char*)"V.GetIndependentComponents() -> int\nC++: int GetIndependentComponents()\n\nDo we use independent components, or dependent components ?\n"},
  {(char*)"SetComputeGradientOpacity", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetComputeGradientOpacity, 1,
   (char*)"V.SetComputeGradientOpacity(int)\nC++: void SetComputeGradientOpacity(int a)\n\nCompute gradient opacity ?\n"},
  {(char*)"GetComputeGradientOpacity", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetComputeGradientOpacity, 1,
   (char*)"V.GetComputeGradientOpacity() -> int\nC++: int GetComputeGradientOpacity()\n\nCompute gradient opacity ?\n"},
  {(char*)"ComputeGradientOpacityOn", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeGradientOpacityOn, 1,
   (char*)"V.ComputeGradientOpacityOn()\nC++: void ComputeGradientOpacityOn()\n\nCompute gradient opacity ?\n"},
  {(char*)"ComputeGradientOpacityOff", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeGradientOpacityOff, 1,
   (char*)"V.ComputeGradientOpacityOff()\nC++: void ComputeGradientOpacityOff()\n\nCompute gradient opacity ?\n"},
  {(char*)"SetComputeMinMax", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetComputeMinMax, 1,
   (char*)"V.SetComputeMinMax(int)\nC++: void SetComputeMinMax(int a)\n\nCompute the min max structure ?.\n"},
  {(char*)"GetComputeMinMax", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetComputeMinMax, 1,
   (char*)"V.GetComputeMinMax() -> int\nC++: int GetComputeMinMax()\n\nCompute the min max structure ?.\n"},
  {(char*)"ComputeMinMaxOn", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeMinMaxOn, 1,
   (char*)"V.ComputeMinMaxOn()\nC++: void ComputeMinMaxOn()\n\nCompute the min max structure ?.\n"},
  {(char*)"ComputeMinMaxOff", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeMinMaxOff, 1,
   (char*)"V.ComputeMinMaxOff()\nC++: void ComputeMinMaxOff()\n\nCompute the min max structure ?.\n"},
  {(char*)"SetUpdateGradientOpacityFlags", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetUpdateGradientOpacityFlags, 1,
   (char*)"V.SetUpdateGradientOpacityFlags(int)\nC++: void SetUpdateGradientOpacityFlags(int a)\n\nUpdate the gradient opacity flags. (The scalar opacity flags are\nalways updated upon execution of this filter.)\n"},
  {(char*)"GetUpdateGradientOpacityFlags", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetUpdateGradientOpacityFlags, 1,
   (char*)"V.GetUpdateGradientOpacityFlags() -> int\nC++: int GetUpdateGradientOpacityFlags()\n\nUpdate the gradient opacity flags. (The scalar opacity flags are\nalways updated upon execution of this filter.)\n"},
  {(char*)"UpdateGradientOpacityFlagsOn", PyvtkVolumeRayCastSpaceLeapingImageFilter_UpdateGradientOpacityFlagsOn, 1,
   (char*)"V.UpdateGradientOpacityFlagsOn()\nC++: void UpdateGradientOpacityFlagsOn()\n\nUpdate the gradient opacity flags. (The scalar opacity flags are\nalways updated upon execution of this filter.)\n"},
  {(char*)"UpdateGradientOpacityFlagsOff", PyvtkVolumeRayCastSpaceLeapingImageFilter_UpdateGradientOpacityFlagsOff, 1,
   (char*)"V.UpdateGradientOpacityFlagsOff()\nC++: void UpdateGradientOpacityFlagsOff()\n\nUpdate the gradient opacity flags. (The scalar opacity flags are\nalways updated upon execution of this filter.)\n"},
  {(char*)"GetLastMinMaxBuildTime", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetLastMinMaxBuildTime, 1,
   (char*)"V.GetLastMinMaxBuildTime() -> int\nC++: unsigned long GetLastMinMaxBuildTime()\n\nGet the last execution time. This is updated every time the\nscalars or the gradient opacity values are computed\n"},
  {(char*)"GetLastMinMaxFlagTime", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetLastMinMaxFlagTime, 1,
   (char*)"V.GetLastMinMaxFlagTime() -> int\nC++: unsigned long GetLastMinMaxFlagTime()\n\nGet the last execution time. This is updated every time the flags\nbits are re-computed.\n"},
  {(char*)"SetTableShift", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift, 1,
   (char*)"V.SetTableShift(float, float, float, float)\nC++: void SetTableShift(float, float, float, float)\nV.SetTableShift((float, float, float, float))\nC++: void SetTableShift(float a[4])\n\n"},
  {(char*)"GetTableShift", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableShift, 1,
   (char*)"V.GetTableShift() -> (float, float, float, float)\nC++: float *GetTableShift()\n\n"},
  {(char*)"SetTableScale", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale, 1,
   (char*)"V.SetTableScale(float, float, float, float)\nC++: void SetTableScale(float, float, float, float)\nV.SetTableScale((float, float, float, float))\nC++: void SetTableScale(float a[4])\n\n"},
  {(char*)"GetTableScale", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableScale, 1,
   (char*)"V.GetTableScale() -> (float, float, float, float)\nC++: float *GetTableScale()\n\n"},
  {(char*)"SetTableSize", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize, 1,
   (char*)"V.SetTableSize(int, int, int, int)\nC++: void SetTableSize(int, int, int, int)\nV.SetTableSize((int, int, int, int))\nC++: void SetTableSize(int a[4])\n\n"},
  {(char*)"GetTableSize", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableSize, 1,
   (char*)"V.GetTableSize() -> (int, int, int, int)\nC++: int *GetTableSize()\n\n"},
  {(char*)"GetNumberOfIndependentComponents", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetNumberOfIndependentComponents, 1,
   (char*)"V.GetNumberOfIndependentComponents() -> int\nC++: int GetNumberOfIndependentComponents()\n\nGet the number of independent components for which we need to\nkeep track of min/max\n"},
  {(char*)"SetCache", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetCache, 1,
   (char*)"V.SetCache(vtkImageData)\nC++: virtual void SetCache(vtkImageData *imageCache)\n\nINTERNAL - Do not use Set the last cached min-max volume, as used\nby vtkFixedPointVolumeRayCastMapper.\n"},
  {(char*)"ComputeInputExtentsForOutput", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeInputExtentsForOutput, 1,
   (char*)"V.ComputeInputExtentsForOutput([int, int, int, int, int, int],\n    [int, int, int], [int, int, int, int, int, int], vtkImageData)\nC++: static void ComputeInputExtentsForOutput(int inExt[6],\n    unsigned int inDim[3], int outExt[6], vtkImageData *inData)\n\nCompute the extents and dimensions of the input that's required\nto generate an output min-max structure given by outExt. INTERNAL\n- Do not use\n"},
  {(char*)"ComputeOffset", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeOffset, 1,
   (char*)"V.ComputeOffset([int, int, int, int, int, int], [int, int, int,\n    int, int, int], int) -> int\nC++: unsigned long ComputeOffset(int ext[6], int wholeExt[6],\n    int nComponents)\n\nINTERNAL - Do not use Compute the offset within an image of whole\nextents wholeExt, to access the data starting at extents ext.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeRayCastSpaceLeapingImageFilter_StaticNew()
{
  return vtkVolumeRayCastSpaceLeapingImageFilter::New();
}

PyObject *PyVTKClass_vtkVolumeRayCastSpaceLeapingImageFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeRayCastSpaceLeapingImageFilter_StaticNew,
    PyvtkVolumeRayCastSpaceLeapingImageFilter_Methods,
    "vtkVolumeRayCastSpaceLeapingImageFilter", modulename,
    NULL, NULL,
    PyvtkVolumeRayCastSpaceLeapingImageFilter_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVolumeRayCastSpaceLeapingImageFilter_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeRayCastSpaceLeapingImageFilter - Builds the space leaping\ndata structure.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "This is an optimized multi-threaded imaging filter that builds the\nspace leaping datastructure, used by\nvtkFixedPointVolumeRayCastMapper. Empty space leaping is used to skip\nlarge empty regions in the scalar opacity and/or the gradient opacity\ntransfer functions. Depending on the various options set by\nvtkFixedPointVolumeRayCastMapper, the class will internally invoke\none of the many optmized rout",
    "ines to compute the min/max/gradient-max\nvalues within a fixed block size, trying to compute everything in a\nsingle multi-threaded pass through the data\n\nThe block size may be changed at compile time. Its ifdef'ed to 4 in\nthe CXX file.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeRayCastSpaceLeapingImageFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeRayCastSpaceLeapingImageFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeRayCastSpaceLeapingImageFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

