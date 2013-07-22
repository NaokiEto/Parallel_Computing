// python wrapper for vtkGaussianSplatter
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
#include "vtkGaussianSplatter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGaussianSplatter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGaussianSplatter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGaussianSplatterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGaussianSplatterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkGaussianSplatter_Doc();


static PyObject *
PyvtkGaussianSplatter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

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
      tempr = op->vtkGaussianSplatter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

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
      tempr = op->vtkGaussianSplatter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  vtkGaussianSplatter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::NewInstance();
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
PyvtkGaussianSplatter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGaussianSplatter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGaussianSplatter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetSampleDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetSampleDimensions(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGaussianSplatter::SetSampleDimensions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGaussianSplatter_SetSampleDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetSampleDimensions(temp0);
      }
    else
      {
      op->vtkGaussianSplatter::SetSampleDimensions(temp0);
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
PyvtkGaussianSplatter_SetSampleDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkGaussianSplatter_SetSampleDimensions_s1(self, args);
    case 1:
      return PyvtkGaussianSplatter_SetSampleDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleDimensions");
  return NULL;
}



static PyObject *
PyvtkGaussianSplatter_GetSampleDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSampleDimensions();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetSampleDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

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
      op->SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkGaussianSplatter::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGaussianSplatter_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetModelBounds(temp0);
      }
    else
      {
      op->vtkGaussianSplatter::SetModelBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGaussianSplatter_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkGaussianSplatter_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkGaussianSplatter_SetModelBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return NULL;
}



static PyObject *
PyvtkGaussianSplatter_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetModelBounds();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetModelBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkGaussianSplatter::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadiusMinValue();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetRadiusMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadiusMaxValue();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetRadiusMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadius();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleFactor(temp0);
      }
    else
      {
      op->vtkGaussianSplatter::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetScaleFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleFactorMinValue();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetScaleFactorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetScaleFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleFactorMaxValue();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetScaleFactorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleFactor();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetScaleFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetExponentFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExponentFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExponentFactor(temp0);
      }
    else
      {
      op->vtkGaussianSplatter::SetExponentFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetExponentFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExponentFactor();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetExponentFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetNormalWarping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalWarping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalWarping(temp0);
      }
    else
      {
      op->vtkGaussianSplatter::SetNormalWarping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetNormalWarping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalWarping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalWarping();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetNormalWarping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_NormalWarpingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalWarpingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalWarpingOn();
      }
    else
      {
      op->vtkGaussianSplatter::NormalWarpingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_NormalWarpingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalWarpingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalWarpingOff();
      }
    else
      {
      op->vtkGaussianSplatter::NormalWarpingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetEccentricity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEccentricity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEccentricity(temp0);
      }
    else
      {
      op->vtkGaussianSplatter::SetEccentricity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetEccentricityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEccentricityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEccentricityMinValue();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetEccentricityMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetEccentricityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEccentricityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEccentricityMaxValue();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetEccentricityMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetEccentricity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEccentricity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEccentricity();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetEccentricity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetScalarWarping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarWarping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarWarping(temp0);
      }
    else
      {
      op->vtkGaussianSplatter::SetScalarWarping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetScalarWarping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarWarping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarWarping();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetScalarWarping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_ScalarWarpingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarWarpingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarWarpingOn();
      }
    else
      {
      op->vtkGaussianSplatter::ScalarWarpingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_ScalarWarpingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarWarpingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarWarpingOff();
      }
    else
      {
      op->vtkGaussianSplatter::ScalarWarpingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCapping(temp0);
      }
    else
      {
      op->vtkGaussianSplatter::SetCapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCapping();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetCapping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOn();
      }
    else
      {
      op->vtkGaussianSplatter::CappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOff();
      }
    else
      {
      op->vtkGaussianSplatter::CappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetCapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCapValue(temp0);
      }
    else
      {
      op->vtkGaussianSplatter::SetCapValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetCapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCapValue();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetCapValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetAccumulationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccumulationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAccumulationMode(temp0);
      }
    else
      {
      op->vtkGaussianSplatter::SetAccumulationMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetAccumulationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccumulationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAccumulationModeMinValue();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetAccumulationModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetAccumulationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccumulationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAccumulationModeMaxValue();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetAccumulationModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetAccumulationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccumulationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAccumulationMode();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetAccumulationMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetAccumulationModeToMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccumulationModeToMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAccumulationModeToMin();
      }
    else
      {
      op->vtkGaussianSplatter::SetAccumulationModeToMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetAccumulationModeToMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccumulationModeToMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAccumulationModeToMax();
      }
    else
      {
      op->vtkGaussianSplatter::SetAccumulationModeToMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetAccumulationModeToSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccumulationModeToSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAccumulationModeToSum();
      }
    else
      {
      op->vtkGaussianSplatter::SetAccumulationModeToSum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetAccumulationModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccumulationModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAccumulationModeAsString();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetAccumulationModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNullValue(temp0);
      }
    else
      {
      op->vtkGaussianSplatter::SetNullValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNullValue();
      }
    else
      {
      tempr = op->vtkGaussianSplatter::GetNullValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_ComputeModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  vtkDataSet *temp0 = NULL;
  vtkImageData *temp1 = NULL;
  vtkInformation *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->ComputeModelBounds(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGaussianSplatter::ComputeModelBounds(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGaussianSplatter_Methods[] = {
  {(char*)"GetClassName", PyvtkGaussianSplatter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGaussianSplatter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGaussianSplatter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGaussianSplatter\nC++: vtkGaussianSplatter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGaussianSplatter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGaussianSplatter\nC++: vtkGaussianSplatter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSampleDimensions", PyvtkGaussianSplatter_SetSampleDimensions, 1,
   (char*)"V.SetSampleDimensions(int, int, int)\nC++: void SetSampleDimensions(int i, int j, int k)\nV.SetSampleDimensions([int, int, int])\nC++: void SetSampleDimensions(int dim[3])\n\nSet / get the dimensions of the sampling structured point set.\nHigher values produce better results but are much slower.\n"},
  {(char*)"GetSampleDimensions", PyvtkGaussianSplatter_GetSampleDimensions, 1,
   (char*)"V.GetSampleDimensions() -> (int, int, int)\nC++: int *GetSampleDimensions()\n\nSet / get the dimensions of the sampling structured point set.\nHigher values produce better results but are much slower.\n"},
  {(char*)"SetModelBounds", PyvtkGaussianSplatter_SetModelBounds, 1,
   (char*)"V.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double, double, double, double, double,\n    double)\nV.SetModelBounds((float, float, float, float, float, float))\nC++: void SetModelBounds(double a[6])\n\n"},
  {(char*)"GetModelBounds", PyvtkGaussianSplatter_GetModelBounds, 1,
   (char*)"V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\nSet / get the (xmin,xmax, ymin,ymax, zmin,zmax) bounding box in\nwhich the sampling is performed. If any of the (min,max) bounds\nvalues are min >= max, then the bounds will be computed\nautomatically from the input data. Otherwise, the user-specified\nbounds will be used.\n"},
  {(char*)"SetRadius", PyvtkGaussianSplatter_SetRadius, 1,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double)\n\nSet / get the radius of propagation of the splat. This value is\nexpressed as a percentage of the length of the longest side of\nthe sampling volume. Smaller numbers greatly reduce execution\ntime.\n"},
  {(char*)"GetRadiusMinValue", PyvtkGaussianSplatter_GetRadiusMinValue, 1,
   (char*)"V.GetRadiusMinValue() -> float\nC++: double GetRadiusMinValue()\n\nSet / get the radius of propagation of the splat. This value is\nexpressed as a percentage of the length of the longest side of\nthe sampling volume. Smaller numbers greatly reduce execution\ntime.\n"},
  {(char*)"GetRadiusMaxValue", PyvtkGaussianSplatter_GetRadiusMaxValue, 1,
   (char*)"V.GetRadiusMaxValue() -> float\nC++: double GetRadiusMaxValue()\n\nSet / get the radius of propagation of the splat. This value is\nexpressed as a percentage of the length of the longest side of\nthe sampling volume. Smaller numbers greatly reduce execution\ntime.\n"},
  {(char*)"GetRadius", PyvtkGaussianSplatter_GetRadius, 1,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet / get the radius of propagation of the splat. This value is\nexpressed as a percentage of the length of the longest side of\nthe sampling volume. Smaller numbers greatly reduce execution\ntime.\n"},
  {(char*)"SetScaleFactor", PyvtkGaussianSplatter_SetScaleFactor, 1,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double)\n\nMultiply Gaussian splat distribution by this value. If\nScalarWarping is on, then the Scalar value will be multiplied by\nthe ScaleFactor times the Gaussian function.\n"},
  {(char*)"GetScaleFactorMinValue", PyvtkGaussianSplatter_GetScaleFactorMinValue, 1,
   (char*)"V.GetScaleFactorMinValue() -> float\nC++: double GetScaleFactorMinValue()\n\nMultiply Gaussian splat distribution by this value. If\nScalarWarping is on, then the Scalar value will be multiplied by\nthe ScaleFactor times the Gaussian function.\n"},
  {(char*)"GetScaleFactorMaxValue", PyvtkGaussianSplatter_GetScaleFactorMaxValue, 1,
   (char*)"V.GetScaleFactorMaxValue() -> float\nC++: double GetScaleFactorMaxValue()\n\nMultiply Gaussian splat distribution by this value. If\nScalarWarping is on, then the Scalar value will be multiplied by\nthe ScaleFactor times the Gaussian function.\n"},
  {(char*)"GetScaleFactor", PyvtkGaussianSplatter_GetScaleFactor, 1,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nMultiply Gaussian splat distribution by this value. If\nScalarWarping is on, then the Scalar value will be multiplied by\nthe ScaleFactor times the Gaussian function.\n"},
  {(char*)"SetExponentFactor", PyvtkGaussianSplatter_SetExponentFactor, 1,
   (char*)"V.SetExponentFactor(float)\nC++: void SetExponentFactor(double a)\n\nSet / get the sharpness of decay of the splats. This is the\nexponent constant in the Gaussian equation. Normally this is a\nnegative value.\n"},
  {(char*)"GetExponentFactor", PyvtkGaussianSplatter_GetExponentFactor, 1,
   (char*)"V.GetExponentFactor() -> float\nC++: double GetExponentFactor()\n\nSet / get the sharpness of decay of the splats. This is the\nexponent constant in the Gaussian equation. Normally this is a\nnegative value.\n"},
  {(char*)"SetNormalWarping", PyvtkGaussianSplatter_SetNormalWarping, 1,
   (char*)"V.SetNormalWarping(int)\nC++: void SetNormalWarping(int a)\n\nTurn on/off the generation of elliptical splats. If normal\nwarping is on, then the input normals affect the distribution of\nthe splat. This boolean is used in combination with the\nEccentricity ivar.\n"},
  {(char*)"GetNormalWarping", PyvtkGaussianSplatter_GetNormalWarping, 1,
   (char*)"V.GetNormalWarping() -> int\nC++: int GetNormalWarping()\n\nTurn on/off the generation of elliptical splats. If normal\nwarping is on, then the input normals affect the distribution of\nthe splat. This boolean is used in combination with the\nEccentricity ivar.\n"},
  {(char*)"NormalWarpingOn", PyvtkGaussianSplatter_NormalWarpingOn, 1,
   (char*)"V.NormalWarpingOn()\nC++: void NormalWarpingOn()\n\nTurn on/off the generation of elliptical splats. If normal\nwarping is on, then the input normals affect the distribution of\nthe splat. This boolean is used in combination with the\nEccentricity ivar.\n"},
  {(char*)"NormalWarpingOff", PyvtkGaussianSplatter_NormalWarpingOff, 1,
   (char*)"V.NormalWarpingOff()\nC++: void NormalWarpingOff()\n\nTurn on/off the generation of elliptical splats. If normal\nwarping is on, then the input normals affect the distribution of\nthe splat. This boolean is used in combination with the\nEccentricity ivar.\n"},
  {(char*)"SetEccentricity", PyvtkGaussianSplatter_SetEccentricity, 1,
   (char*)"V.SetEccentricity(float)\nC++: void SetEccentricity(double)\n\nControl the shape of elliptical splatting. Eccentricity is the\nratio of the major axis (aligned along normal) to the minor\n(axes) aligned along other two axes. So Eccentricity > 1 creates\nneedles with the long axis in the direction of the normal;\nEccentricity<1 creates pancakes perpendicular to the normal\nvector.\n"},
  {(char*)"GetEccentricityMinValue", PyvtkGaussianSplatter_GetEccentricityMinValue, 1,
   (char*)"V.GetEccentricityMinValue() -> float\nC++: double GetEccentricityMinValue()\n\nControl the shape of elliptical splatting. Eccentricity is the\nratio of the major axis (aligned along normal) to the minor\n(axes) aligned along other two axes. So Eccentricity > 1 creates\nneedles with the long axis in the direction of the normal;\nEccentricity<1 creates pancakes perpendicular to the normal\nvector.\n"},
  {(char*)"GetEccentricityMaxValue", PyvtkGaussianSplatter_GetEccentricityMaxValue, 1,
   (char*)"V.GetEccentricityMaxValue() -> float\nC++: double GetEccentricityMaxValue()\n\nControl the shape of elliptical splatting. Eccentricity is the\nratio of the major axis (aligned along normal) to the minor\n(axes) aligned along other two axes. So Eccentricity > 1 creates\nneedles with the long axis in the direction of the normal;\nEccentricity<1 creates pancakes perpendicular to the normal\nvector.\n"},
  {(char*)"GetEccentricity", PyvtkGaussianSplatter_GetEccentricity, 1,
   (char*)"V.GetEccentricity() -> float\nC++: double GetEccentricity()\n\nControl the shape of elliptical splatting. Eccentricity is the\nratio of the major axis (aligned along normal) to the minor\n(axes) aligned along other two axes. So Eccentricity > 1 creates\nneedles with the long axis in the direction of the normal;\nEccentricity<1 creates pancakes perpendicular to the normal\nvector.\n"},
  {(char*)"SetScalarWarping", PyvtkGaussianSplatter_SetScalarWarping, 1,
   (char*)"V.SetScalarWarping(int)\nC++: void SetScalarWarping(int a)\n\nTurn on/off the scaling of splats by scalar value.\n"},
  {(char*)"GetScalarWarping", PyvtkGaussianSplatter_GetScalarWarping, 1,
   (char*)"V.GetScalarWarping() -> int\nC++: int GetScalarWarping()\n\nTurn on/off the scaling of splats by scalar value.\n"},
  {(char*)"ScalarWarpingOn", PyvtkGaussianSplatter_ScalarWarpingOn, 1,
   (char*)"V.ScalarWarpingOn()\nC++: void ScalarWarpingOn()\n\nTurn on/off the scaling of splats by scalar value.\n"},
  {(char*)"ScalarWarpingOff", PyvtkGaussianSplatter_ScalarWarpingOff, 1,
   (char*)"V.ScalarWarpingOff()\nC++: void ScalarWarpingOff()\n\nTurn on/off the scaling of splats by scalar value.\n"},
  {(char*)"SetCapping", PyvtkGaussianSplatter_SetCapping, 1,
   (char*)"V.SetCapping(int)\nC++: void SetCapping(int a)\n\nTurn on/off the capping of the outer boundary of the volume to a\nspecified cap value. This can be used to close surfaces (after\niso-surfacing) and create other effects.\n"},
  {(char*)"GetCapping", PyvtkGaussianSplatter_GetCapping, 1,
   (char*)"V.GetCapping() -> int\nC++: int GetCapping()\n\nTurn on/off the capping of the outer boundary of the volume to a\nspecified cap value. This can be used to close surfaces (after\niso-surfacing) and create other effects.\n"},
  {(char*)"CappingOn", PyvtkGaussianSplatter_CappingOn, 1,
   (char*)"V.CappingOn()\nC++: void CappingOn()\n\nTurn on/off the capping of the outer boundary of the volume to a\nspecified cap value. This can be used to close surfaces (after\niso-surfacing) and create other effects.\n"},
  {(char*)"CappingOff", PyvtkGaussianSplatter_CappingOff, 1,
   (char*)"V.CappingOff()\nC++: void CappingOff()\n\nTurn on/off the capping of the outer boundary of the volume to a\nspecified cap value. This can be used to close surfaces (after\niso-surfacing) and create other effects.\n"},
  {(char*)"SetCapValue", PyvtkGaussianSplatter_SetCapValue, 1,
   (char*)"V.SetCapValue(float)\nC++: void SetCapValue(double a)\n\nSpecify the cap value to use. (This instance variable only has\neffect if the ivar Capping is on.)\n"},
  {(char*)"GetCapValue", PyvtkGaussianSplatter_GetCapValue, 1,
   (char*)"V.GetCapValue() -> float\nC++: double GetCapValue()\n\nSpecify the cap value to use. (This instance variable only has\neffect if the ivar Capping is on.)\n"},
  {(char*)"SetAccumulationMode", PyvtkGaussianSplatter_SetAccumulationMode, 1,
   (char*)"V.SetAccumulationMode(int)\nC++: void SetAccumulationMode(int)\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats are overlapped. The Max\nmode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird.\n"},
  {(char*)"GetAccumulationModeMinValue", PyvtkGaussianSplatter_GetAccumulationModeMinValue, 1,
   (char*)"V.GetAccumulationModeMinValue() -> int\nC++: int GetAccumulationModeMinValue()\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats are overlapped. The Max\nmode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird.\n"},
  {(char*)"GetAccumulationModeMaxValue", PyvtkGaussianSplatter_GetAccumulationModeMaxValue, 1,
   (char*)"V.GetAccumulationModeMaxValue() -> int\nC++: int GetAccumulationModeMaxValue()\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats are overlapped. The Max\nmode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird.\n"},
  {(char*)"GetAccumulationMode", PyvtkGaussianSplatter_GetAccumulationMode, 1,
   (char*)"V.GetAccumulationMode() -> int\nC++: int GetAccumulationMode()\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats are overlapped. The Max\nmode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird.\n"},
  {(char*)"SetAccumulationModeToMin", PyvtkGaussianSplatter_SetAccumulationModeToMin, 1,
   (char*)"V.SetAccumulationModeToMin()\nC++: void SetAccumulationModeToMin()\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats are overlapped. The Max\nmode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird.\n"},
  {(char*)"SetAccumulationModeToMax", PyvtkGaussianSplatter_SetAccumulationModeToMax, 1,
   (char*)"V.SetAccumulationModeToMax()\nC++: void SetAccumulationModeToMax()\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats are overlapped. The Max\nmode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird.\n"},
  {(char*)"SetAccumulationModeToSum", PyvtkGaussianSplatter_SetAccumulationModeToSum, 1,
   (char*)"V.SetAccumulationModeToSum()\nC++: void SetAccumulationModeToSum()\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats are overlapped. The Max\nmode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird.\n"},
  {(char*)"GetAccumulationModeAsString", PyvtkGaussianSplatter_GetAccumulationModeAsString, 1,
   (char*)"V.GetAccumulationModeAsString() -> string\nC++: const char *GetAccumulationModeAsString()\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats are overlapped. The Max\nmode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird.\n"},
  {(char*)"SetNullValue", PyvtkGaussianSplatter_SetNullValue, 1,
   (char*)"V.SetNullValue(float)\nC++: void SetNullValue(double a)\n\nSet the Null value for output points not receiving a contribution\nfrom the input points. (This is the initial value of the voxel\nsamples.)\n"},
  {(char*)"GetNullValue", PyvtkGaussianSplatter_GetNullValue, 1,
   (char*)"V.GetNullValue() -> float\nC++: double GetNullValue()\n\nSet the Null value for output points not receiving a contribution\nfrom the input points. (This is the initial value of the voxel\nsamples.)\n"},
  {(char*)"ComputeModelBounds", PyvtkGaussianSplatter_ComputeModelBounds, 1,
   (char*)"V.ComputeModelBounds(vtkDataSet, vtkImageData, vtkInformation)\nC++: void ComputeModelBounds(vtkDataSet *input,\n    vtkImageData *output, vtkInformation *outInfo)\n\nCompute the size of the sample bounding box automatically from\nthe input data. This is an internal helper function.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGaussianSplatter_StaticNew()
{
  return vtkGaussianSplatter::New();
}

PyObject *PyVTKClass_vtkGaussianSplatterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGaussianSplatter_StaticNew,
    PyvtkGaussianSplatter_Methods,
    "vtkGaussianSplatter", modulename,
    NULL, NULL,
    PyvtkGaussianSplatter_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGaussianSplatter_Doc()
{
  static const char *docstring[] = {
    "vtkGaussianSplatter - splat points into a volume with an elliptical,\nGaussian distribution\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkGaussianSplatter is a filter that injects input points into a\nstructured points (volume) dataset. As each point is injected, it\n\"splats\" or distributes values to nearby voxels. Data is distributed\nusing an elliptical, Gaussian distribution function. The distribution\nfunction is modified using scalar values (expands distribution) or\nnormals (creates ellipsoidal distribution rather than spherical",
    ").\n\nIn general, the Gaussian distribution function f(x) around a given\nsplat point p is given by\n\n\n    f(x) = ScaleFactor * exp( ExponentFactor*((r/Radius)**2) )\n\nwhere x is the current voxel sample point; r is the distance |x-p|\nExponentFactor <= 0.0, and ScaleFactor can be multiplied by the\nscalar value of the point p that is currently being splatted.\n\nIf points normals are present (and NormalWa",
    "rping is on), then the\nsplat function becomes elliptical (as compared to the spherical one\ndescribed by the previous equation). The Gaussian distribution\nfunction then becomes:\n\n\n    f(x) = ScaleFactor *\n              exp( ExponentFactor*( ((rxy/E)**2 + z**2)/R**2) )\n\nwhere E is a user-defined eccentricity factor that controls the\nelliptical shape of the splat; z is the distance of the current vox",
    "el\nsample point along normal N; and rxy is the distance of x in the\ndirection prependicular to N.\n\nThis class is typically used to convert point-valued distributions\ninto a volume representation. The volume is then usually iso-surfaced\nor volume rendered to generate a visualization. It can be used to\ncreate surfaces from point distributions, or to create structure\n(i.e., topology) when none exists",
    ".\n\nCaveats:\n\nThe input to this filter is any dataset type. This filter can be used\nto resample any form of data, i.e., the input data need not be\nunstructured.\n\nSome voxels may never receive a contribution during the splatting\nprocess. The final value of these points can be specified with the\n\"NullValue\" instance variable.\n\nSee Also:\n\nvtkShepardMethod\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGaussianSplatter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGaussianSplatterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGaussianSplatter", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ACCUMULATION_MODE_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ACCUMULATION_MODE_MAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ACCUMULATION_MODE_SUM", o) != 0)
    {
    Py_DECREF(o);
    }

}

