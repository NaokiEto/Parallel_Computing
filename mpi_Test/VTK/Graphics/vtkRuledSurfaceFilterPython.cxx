// python wrapper for vtkRuledSurfaceFilter
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
#include "vtkRuledSurfaceFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRuledSurfaceFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRuledSurfaceFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRuledSurfaceFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRuledSurfaceFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkRuledSurfaceFilter_Doc();


static PyObject *
PyvtkRuledSurfaceFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

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
      tempr = op->vtkRuledSurfaceFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

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
      tempr = op->vtkRuledSurfaceFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  vtkRuledSurfaceFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::NewInstance();
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
PyvtkRuledSurfaceFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRuledSurfaceFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRuledSurfaceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetDistanceFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistanceFactor(temp0);
      }
    else
      {
      op->vtkRuledSurfaceFilter::SetDistanceFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetDistanceFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistanceFactorMinValue();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetDistanceFactorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetDistanceFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistanceFactorMaxValue();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetDistanceFactorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetDistanceFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistanceFactor();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetDistanceFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOnRatio(temp0);
      }
    else
      {
      op->vtkRuledSurfaceFilter::SetOnRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetOnRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOnRatioMinValue();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetOnRatioMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetOnRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOnRatioMaxValue();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetOnRatioMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOnRatio();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetOnRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOffset(temp0);
      }
    else
      {
      op->vtkRuledSurfaceFilter::SetOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffsetMinValue();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetOffsetMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffsetMaxValue();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetOffsetMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffset();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetCloseSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCloseSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCloseSurface(temp0);
      }
    else
      {
      op->vtkRuledSurfaceFilter::SetCloseSurface(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetCloseSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCloseSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCloseSurface();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetCloseSurface();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_CloseSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CloseSurfaceOn();
      }
    else
      {
      op->vtkRuledSurfaceFilter::CloseSurfaceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_CloseSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CloseSurfaceOff();
      }
    else
      {
      op->vtkRuledSurfaceFilter::CloseSurfaceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetRuledMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRuledMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRuledMode(temp0);
      }
    else
      {
      op->vtkRuledSurfaceFilter::SetRuledMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetRuledModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRuledModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRuledModeMinValue();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetRuledModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetRuledModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRuledModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRuledModeMaxValue();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetRuledModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetRuledMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRuledMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRuledMode();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetRuledMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetRuledModeToResample(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRuledModeToResample");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRuledModeToResample();
      }
    else
      {
      op->vtkRuledSurfaceFilter::SetRuledModeToResample();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetRuledModeToPointWalk(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRuledModeToPointWalk");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetRuledModeToPointWalk();
      }
    else
      {
      op->vtkRuledSurfaceFilter::SetRuledModeToPointWalk();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetRuledModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRuledModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRuledModeAsString();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetRuledModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetResolution_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetResolution(temp0, temp1);
      }
    else
      {
      op->vtkRuledSurfaceFilter::SetResolution(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRuledSurfaceFilter_SetResolution_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetResolution(temp0);
      }
    else
      {
      op->vtkRuledSurfaceFilter::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRuledSurfaceFilter_SetResolution(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkRuledSurfaceFilter_SetResolution_s1(self, args);
    case 1:
      return PyvtkRuledSurfaceFilter_SetResolution_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetResolution");
  return NULL;
}



static PyObject *
PyvtkRuledSurfaceFilter_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResolution();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetPassLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassLines(temp0);
      }
    else
      {
      op->vtkRuledSurfaceFilter::SetPassLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetPassLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassLines();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetPassLines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_PassLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassLinesOn();
      }
    else
      {
      op->vtkRuledSurfaceFilter::PassLinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_PassLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassLinesOff();
      }
    else
      {
      op->vtkRuledSurfaceFilter::PassLinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetOrientLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientLoops(temp0);
      }
    else
      {
      op->vtkRuledSurfaceFilter::SetOrientLoops(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetOrientLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientLoops();
      }
    else
      {
      tempr = op->vtkRuledSurfaceFilter::GetOrientLoops();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_OrientLoopsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientLoopsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OrientLoopsOn();
      }
    else
      {
      op->vtkRuledSurfaceFilter::OrientLoopsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_OrientLoopsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientLoopsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OrientLoopsOff();
      }
    else
      {
      op->vtkRuledSurfaceFilter::OrientLoopsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRuledSurfaceFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkRuledSurfaceFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRuledSurfaceFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRuledSurfaceFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRuledSurfaceFilter\nC++: vtkRuledSurfaceFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRuledSurfaceFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRuledSurfaceFilter\nC++: vtkRuledSurfaceFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDistanceFactor", PyvtkRuledSurfaceFilter_SetDistanceFactor, 1,
   (char*)"V.SetDistanceFactor(float)\nC++: void SetDistanceFactor(double)\n\nSet/Get the factor that controls tearing of the surface.\n"},
  {(char*)"GetDistanceFactorMinValue", PyvtkRuledSurfaceFilter_GetDistanceFactorMinValue, 1,
   (char*)"V.GetDistanceFactorMinValue() -> float\nC++: double GetDistanceFactorMinValue()\n\nSet/Get the factor that controls tearing of the surface.\n"},
  {(char*)"GetDistanceFactorMaxValue", PyvtkRuledSurfaceFilter_GetDistanceFactorMaxValue, 1,
   (char*)"V.GetDistanceFactorMaxValue() -> float\nC++: double GetDistanceFactorMaxValue()\n\nSet/Get the factor that controls tearing of the surface.\n"},
  {(char*)"GetDistanceFactor", PyvtkRuledSurfaceFilter_GetDistanceFactor, 1,
   (char*)"V.GetDistanceFactor() -> float\nC++: double GetDistanceFactor()\n\nSet/Get the factor that controls tearing of the surface.\n"},
  {(char*)"SetOnRatio", PyvtkRuledSurfaceFilter_SetOnRatio, 1,
   (char*)"V.SetOnRatio(int)\nC++: void SetOnRatio(int)\n\nControl the striping of the ruled surface. If OnRatio is greater\nthan 1, then every nth strip is turned on, beginning with the\nOffset strip.\n"},
  {(char*)"GetOnRatioMinValue", PyvtkRuledSurfaceFilter_GetOnRatioMinValue, 1,
   (char*)"V.GetOnRatioMinValue() -> int\nC++: int GetOnRatioMinValue()\n\nControl the striping of the ruled surface. If OnRatio is greater\nthan 1, then every nth strip is turned on, beginning with the\nOffset strip.\n"},
  {(char*)"GetOnRatioMaxValue", PyvtkRuledSurfaceFilter_GetOnRatioMaxValue, 1,
   (char*)"V.GetOnRatioMaxValue() -> int\nC++: int GetOnRatioMaxValue()\n\nControl the striping of the ruled surface. If OnRatio is greater\nthan 1, then every nth strip is turned on, beginning with the\nOffset strip.\n"},
  {(char*)"GetOnRatio", PyvtkRuledSurfaceFilter_GetOnRatio, 1,
   (char*)"V.GetOnRatio() -> int\nC++: int GetOnRatio()\n\nControl the striping of the ruled surface. If OnRatio is greater\nthan 1, then every nth strip is turned on, beginning with the\nOffset strip.\n"},
  {(char*)"SetOffset", PyvtkRuledSurfaceFilter_SetOffset, 1,
   (char*)"V.SetOffset(int)\nC++: void SetOffset(int)\n\nControl the striping of the ruled surface. The offset sets the\nfirst stripe that is visible. Offset is generally used with\nOnRatio to create nifty striping effects.\n"},
  {(char*)"GetOffsetMinValue", PyvtkRuledSurfaceFilter_GetOffsetMinValue, 1,
   (char*)"V.GetOffsetMinValue() -> int\nC++: int GetOffsetMinValue()\n\nControl the striping of the ruled surface. The offset sets the\nfirst stripe that is visible. Offset is generally used with\nOnRatio to create nifty striping effects.\n"},
  {(char*)"GetOffsetMaxValue", PyvtkRuledSurfaceFilter_GetOffsetMaxValue, 1,
   (char*)"V.GetOffsetMaxValue() -> int\nC++: int GetOffsetMaxValue()\n\nControl the striping of the ruled surface. The offset sets the\nfirst stripe that is visible. Offset is generally used with\nOnRatio to create nifty striping effects.\n"},
  {(char*)"GetOffset", PyvtkRuledSurfaceFilter_GetOffset, 1,
   (char*)"V.GetOffset() -> int\nC++: int GetOffset()\n\nControl the striping of the ruled surface. The offset sets the\nfirst stripe that is visible. Offset is generally used with\nOnRatio to create nifty striping effects.\n"},
  {(char*)"SetCloseSurface", PyvtkRuledSurfaceFilter_SetCloseSurface, 1,
   (char*)"V.SetCloseSurface(int)\nC++: void SetCloseSurface(int a)\n\nIndicate whether the surface is to be closed. If this boolean is\non, then the first and last polyline are used to generate a\nstripe that closes the surface. (Note: to close the surface in\nthe other direction, repeat the first point in the polyline as\nthe last point in the polyline.)\n"},
  {(char*)"GetCloseSurface", PyvtkRuledSurfaceFilter_GetCloseSurface, 1,
   (char*)"V.GetCloseSurface() -> int\nC++: int GetCloseSurface()\n\nIndicate whether the surface is to be closed. If this boolean is\non, then the first and last polyline are used to generate a\nstripe that closes the surface. (Note: to close the surface in\nthe other direction, repeat the first point in the polyline as\nthe last point in the polyline.)\n"},
  {(char*)"CloseSurfaceOn", PyvtkRuledSurfaceFilter_CloseSurfaceOn, 1,
   (char*)"V.CloseSurfaceOn()\nC++: void CloseSurfaceOn()\n\nIndicate whether the surface is to be closed. If this boolean is\non, then the first and last polyline are used to generate a\nstripe that closes the surface. (Note: to close the surface in\nthe other direction, repeat the first point in the polyline as\nthe last point in the polyline.)\n"},
  {(char*)"CloseSurfaceOff", PyvtkRuledSurfaceFilter_CloseSurfaceOff, 1,
   (char*)"V.CloseSurfaceOff()\nC++: void CloseSurfaceOff()\n\nIndicate whether the surface is to be closed. If this boolean is\non, then the first and last polyline are used to generate a\nstripe that closes the surface. (Note: to close the surface in\nthe other direction, repeat the first point in the polyline as\nthe last point in the polyline.)\n"},
  {(char*)"SetRuledMode", PyvtkRuledSurfaceFilter_SetRuledMode, 1,
   (char*)"V.SetRuledMode(int)\nC++: void SetRuledMode(int)\n\nSet the mode by which to create the ruled surface. (Dramatically\ndifferent results are possible depending on the chosen mode.) The\nresample mode evenly resamples the polylines (based on length)\nand generates triangle strips. The point walk mode uses the\nexisting points and walks around the polyline using existing\npoints.\n"},
  {(char*)"GetRuledModeMinValue", PyvtkRuledSurfaceFilter_GetRuledModeMinValue, 1,
   (char*)"V.GetRuledModeMinValue() -> int\nC++: int GetRuledModeMinValue()\n\nSet the mode by which to create the ruled surface. (Dramatically\ndifferent results are possible depending on the chosen mode.) The\nresample mode evenly resamples the polylines (based on length)\nand generates triangle strips. The point walk mode uses the\nexisting points and walks around the polyline using existing\npoints.\n"},
  {(char*)"GetRuledModeMaxValue", PyvtkRuledSurfaceFilter_GetRuledModeMaxValue, 1,
   (char*)"V.GetRuledModeMaxValue() -> int\nC++: int GetRuledModeMaxValue()\n\nSet the mode by which to create the ruled surface. (Dramatically\ndifferent results are possible depending on the chosen mode.) The\nresample mode evenly resamples the polylines (based on length)\nand generates triangle strips. The point walk mode uses the\nexisting points and walks around the polyline using existing\npoints.\n"},
  {(char*)"GetRuledMode", PyvtkRuledSurfaceFilter_GetRuledMode, 1,
   (char*)"V.GetRuledMode() -> int\nC++: int GetRuledMode()\n\nSet the mode by which to create the ruled surface. (Dramatically\ndifferent results are possible depending on the chosen mode.) The\nresample mode evenly resamples the polylines (based on length)\nand generates triangle strips. The point walk mode uses the\nexisting points and walks around the polyline using existing\npoints.\n"},
  {(char*)"SetRuledModeToResample", PyvtkRuledSurfaceFilter_SetRuledModeToResample, 1,
   (char*)"V.SetRuledModeToResample()\nC++: void SetRuledModeToResample()\n\nSet the mode by which to create the ruled surface. (Dramatically\ndifferent results are possible depending on the chosen mode.) The\nresample mode evenly resamples the polylines (based on length)\nand generates triangle strips. The point walk mode uses the\nexisting points and walks around the polyline using existing\npoints.\n"},
  {(char*)"SetRuledModeToPointWalk", PyvtkRuledSurfaceFilter_SetRuledModeToPointWalk, 1,
   (char*)"V.SetRuledModeToPointWalk()\nC++: void SetRuledModeToPointWalk()\n\nSet the mode by which to create the ruled surface. (Dramatically\ndifferent results are possible depending on the chosen mode.) The\nresample mode evenly resamples the polylines (based on length)\nand generates triangle strips. The point walk mode uses the\nexisting points and walks around the polyline using existing\npoints.\n"},
  {(char*)"GetRuledModeAsString", PyvtkRuledSurfaceFilter_GetRuledModeAsString, 1,
   (char*)"V.GetRuledModeAsString() -> string\nC++: const char *GetRuledModeAsString()\n\nSet the mode by which to create the ruled surface. (Dramatically\ndifferent results are possible depending on the chosen mode.) The\nresample mode evenly resamples the polylines (based on length)\nand generates triangle strips. The point walk mode uses the\nexisting points and walks around the polyline using existing\npoints.\n"},
  {(char*)"SetResolution", PyvtkRuledSurfaceFilter_SetResolution, 1,
   (char*)"V.SetResolution(int, int)\nC++: void SetResolution(int, int)\nV.SetResolution((int, int))\nC++: void SetResolution(int a[2])\n\n"},
  {(char*)"GetResolution", PyvtkRuledSurfaceFilter_GetResolution, 1,
   (char*)"V.GetResolution() -> (int, int)\nC++: int *GetResolution()\n\nIf the ruled surface generation mode is RESAMPLE, then these\nparameters are used to determine the resample rate. Resolution[0]\ndefines the resolution in the direction of the polylines;\nResolution[1] defines the resolution across the polylines (i.e.,\ndirection orthogonal to Resolution[0]).\n"},
  {(char*)"SetPassLines", PyvtkRuledSurfaceFilter_SetPassLines, 1,
   (char*)"V.SetPassLines(int)\nC++: void SetPassLines(int a)\n\nIndicate whether the generating lines are to be passed to the\noutput. By defualt lines are not passed to the output.\n"},
  {(char*)"GetPassLines", PyvtkRuledSurfaceFilter_GetPassLines, 1,
   (char*)"V.GetPassLines() -> int\nC++: int GetPassLines()\n\nIndicate whether the generating lines are to be passed to the\noutput. By defualt lines are not passed to the output.\n"},
  {(char*)"PassLinesOn", PyvtkRuledSurfaceFilter_PassLinesOn, 1,
   (char*)"V.PassLinesOn()\nC++: void PassLinesOn()\n\nIndicate whether the generating lines are to be passed to the\noutput. By defualt lines are not passed to the output.\n"},
  {(char*)"PassLinesOff", PyvtkRuledSurfaceFilter_PassLinesOff, 1,
   (char*)"V.PassLinesOff()\nC++: void PassLinesOff()\n\nIndicate whether the generating lines are to be passed to the\noutput. By defualt lines are not passed to the output.\n"},
  {(char*)"SetOrientLoops", PyvtkRuledSurfaceFilter_SetOrientLoops, 1,
   (char*)"V.SetOrientLoops(int)\nC++: void SetOrientLoops(int a)\n\nIndicate whether the starting points of the loops need to be\ndetermined. If set to 0, then its assumes that the 0th point of\neach loop should be always connected By defualt the loops are not\noriented.\n"},
  {(char*)"GetOrientLoops", PyvtkRuledSurfaceFilter_GetOrientLoops, 1,
   (char*)"V.GetOrientLoops() -> int\nC++: int GetOrientLoops()\n\nIndicate whether the starting points of the loops need to be\ndetermined. If set to 0, then its assumes that the 0th point of\neach loop should be always connected By defualt the loops are not\noriented.\n"},
  {(char*)"OrientLoopsOn", PyvtkRuledSurfaceFilter_OrientLoopsOn, 1,
   (char*)"V.OrientLoopsOn()\nC++: void OrientLoopsOn()\n\nIndicate whether the starting points of the loops need to be\ndetermined. If set to 0, then its assumes that the 0th point of\neach loop should be always connected By defualt the loops are not\noriented.\n"},
  {(char*)"OrientLoopsOff", PyvtkRuledSurfaceFilter_OrientLoopsOff, 1,
   (char*)"V.OrientLoopsOff()\nC++: void OrientLoopsOff()\n\nIndicate whether the starting points of the loops need to be\ndetermined. If set to 0, then its assumes that the 0th point of\neach loop should be always connected By defualt the loops are not\noriented.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRuledSurfaceFilter_StaticNew()
{
  return vtkRuledSurfaceFilter::New();
}

PyObject *PyVTKClass_vtkRuledSurfaceFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRuledSurfaceFilter_StaticNew,
    PyvtkRuledSurfaceFilter_Methods,
    "vtkRuledSurfaceFilter", modulename,
    NULL, NULL,
    PyvtkRuledSurfaceFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRuledSurfaceFilter_Doc()
{
  static const char *docstring[] = {
    "vtkRuledSurfaceFilter - generates a surface from a set of lines\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkRuledSurfaceFilter is a filter that generates a surface from a set\nof lines. The lines are assumed to be \"parallel\" in the sense that\nthey do not intersect and remain somewhat close to one another. A\nsurface is generated by connecting the points defining each pair of\nlines with straight lines. This creates a strip for each pair of\nlines (i.e., a triangulation is created from two generating line",
    "s).\nThe filter can handle an arbitrary number of lines, with lines i and\ni+1 assumed connected. Note that there are several different\napproaches for creating the ruled surface, the method for creating\nthe surface can either use the input points or resample from the\npolylines (using a user-specified resolution).\n\nThis filter offers some other important features. A DistanceFactor\nivar is used to dec",
    "ide when two lines are too far apart to connect.\n(The factor is a multiple of the distance between the first two\npoints of the two lines defining the strip.) If the distance between\nthe two generating lines becomes too great, then the surface is not\ngenerated in that region. (Note: if the lines separate and then\nmerge, then a hole can be generated in the surface.) In addition, the\nOffset and OnRat",
    "ion ivars can be used to create nifty striped\nsurfaces. Closed surfaces (e.g., tubes) can be created by setting the\nCloseSurface ivar. (The surface can be closed in the other direction\nby repeating the first and last point in the polylines defining the\nsurface.)\n\nAn important use of this filter is to combine it with vtkStreamLine\nto generate stream surfaces. It can also be used to create surfaces\n",
    "from contours.\n\nCaveats:\n\nThe number of lines must be greater than two if a surface is to be\ngenerated.  sides (i.e., a ribbon), use vtkRibbonFilter.\n\nSee Also:\n\nvtkRibbonFilter vtkStreamLine\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRuledSurfaceFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRuledSurfaceFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRuledSurfaceFilter", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_RULED_MODE_RESAMPLE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_RULED_MODE_POINT_WALK", o) != 0)
    {
    Py_DECREF(o);
    }

}

