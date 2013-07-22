// python wrapper for vtkLineIntegralConvolution2D
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
#include "vtkLineIntegralConvolution2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLineIntegralConvolution2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLineIntegralConvolution2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLineIntegralConvolution2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLineIntegralConvolution2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkLineIntegralConvolution2D_Doc();


static PyObject *
PyvtkLineIntegralConvolution2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

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
      tempr = op->vtkLineIntegralConvolution2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

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
      tempr = op->vtkLineIntegralConvolution2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  vtkLineIntegralConvolution2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::NewInstance();
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
PyvtkLineIntegralConvolution2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLineIntegralConvolution2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLineIntegralConvolution2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetEnhancedLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnhancedLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnhancedLIC(temp0);
      }
    else
      {
      op->vtkLineIntegralConvolution2D::SetEnhancedLIC(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetEnhancedLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnhancedLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnhancedLIC();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetEnhancedLIC();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_EnhancedLICOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnhancedLICOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnhancedLICOn();
      }
    else
      {
      op->vtkLineIntegralConvolution2D::EnhancedLICOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_EnhancedLICOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnhancedLICOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnhancedLICOff();
      }
    else
      {
      op->vtkLineIntegralConvolution2D::EnhancedLICOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetLICForSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLICForSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLICForSurface(temp0);
      }
    else
      {
      op->vtkLineIntegralConvolution2D::SetLICForSurface(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetLICForSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLICForSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLICForSurface();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetLICForSurface();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_LICForSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LICForSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LICForSurfaceOn();
      }
    else
      {
      op->vtkLineIntegralConvolution2D::LICForSurfaceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_LICForSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LICForSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LICForSurfaceOff();
      }
    else
      {
      op->vtkLineIntegralConvolution2D::LICForSurfaceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSteps(temp0);
      }
    else
      {
      op->vtkLineIntegralConvolution2D::SetNumberOfSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSteps();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetNumberOfSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetLICStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLICStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLICStepSize(temp0);
      }
    else
      {
      op->vtkLineIntegralConvolution2D::SetLICStepSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetLICStepSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLICStepSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLICStepSizeMinValue();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetLICStepSizeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetLICStepSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLICStepSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLICStepSizeMaxValue();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetLICStepSizeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetLICStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLICStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLICStepSize();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetLICStepSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetNoise(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoise");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  vtkTextureObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
    {
    if (ap.IsBound())
      {
      op->SetNoise(temp0);
      }
    else
      {
      op->vtkLineIntegralConvolution2D::SetNoise(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetNoise(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoise");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  vtkTextureObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNoise();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetNoise();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetVectorField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  vtkTextureObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
    {
    if (ap.IsBound())
      {
      op->SetVectorField(temp0);
      }
    else
      {
      op->vtkLineIntegralConvolution2D::SetVectorField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetVectorField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  vtkTextureObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorField();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetVectorField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetComponentIds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetComponentIds(temp0, temp1);
      }
    else
      {
      op->vtkLineIntegralConvolution2D::SetComponentIds(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLineIntegralConvolution2D_SetComponentIds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetComponentIds(temp0);
      }
    else
      {
      op->vtkLineIntegralConvolution2D::SetComponentIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLineIntegralConvolution2D_SetComponentIds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLineIntegralConvolution2D_SetComponentIds_s1(self, args);
    case 1:
      return PyvtkLineIntegralConvolution2D_SetComponentIds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetComponentIds");
  return NULL;
}



static PyObject *
PyvtkLineIntegralConvolution2D_GetComponentIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponentIds();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetComponentIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetGridSpacings_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGridSpacings(temp0, temp1);
      }
    else
      {
      op->vtkLineIntegralConvolution2D::SetGridSpacings(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLineIntegralConvolution2D_SetGridSpacings_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGridSpacings(temp0);
      }
    else
      {
      op->vtkLineIntegralConvolution2D::SetGridSpacings(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLineIntegralConvolution2D_SetGridSpacings(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLineIntegralConvolution2D_SetGridSpacings_s1(self, args);
    case 1:
      return PyvtkLineIntegralConvolution2D_SetGridSpacings_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGridSpacings");
  return NULL;
}



static PyObject *
PyvtkLineIntegralConvolution2D_GetGridSpacings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridSpacings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGridSpacings();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetGridSpacings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetTransformVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTransformVectors(temp0);
      }
    else
      {
      op->vtkLineIntegralConvolution2D::SetTransformVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetTransformVectorsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformVectorsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransformVectorsMinValue();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetTransformVectorsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetTransformVectorsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformVectorsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransformVectorsMaxValue();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetTransformVectorsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_TransformVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TransformVectorsOn();
      }
    else
      {
      op->vtkLineIntegralConvolution2D::TransformVectorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_TransformVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TransformVectorsOff();
      }
    else
      {
      op->vtkLineIntegralConvolution2D::TransformVectorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetTransformVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransformVectors();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetTransformVectors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMagnification(temp0);
      }
    else
      {
      op->vtkLineIntegralConvolution2D::SetMagnification(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetMagnificationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMagnificationMinValue();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetMagnificationMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetMagnificationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMagnificationMaxValue();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetMagnificationMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetMagnification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMagnification();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetMagnification();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetVectorShiftScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorShiftScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetVectorShiftScale(temp0, temp1);
      }
    else
      {
      op->vtkLineIntegralConvolution2D::SetVectorShiftScale(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_IsSupported(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    tempr = vtkLineIntegralConvolution2D::IsSupported(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_Execute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Execute();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::Execute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLineIntegralConvolution2D_Execute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int temp0[4];
  int save0[4];
  const int size0 = 4;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->Execute(temp0);
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::Execute(temp0);
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
PyvtkLineIntegralConvolution2D_Execute(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkLineIntegralConvolution2D_Execute_s1(self, args);
    case 1:
      return PyvtkLineIntegralConvolution2D_Execute_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Execute");
  return NULL;
}



static PyObject *
PyvtkLineIntegralConvolution2D_SetLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  vtkTextureObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
    {
    if (ap.IsBound())
      {
      op->SetLIC(temp0);
      }
    else
      {
      op->vtkLineIntegralConvolution2D::SetLIC(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  vtkTextureObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLIC();
      }
    else
      {
      tempr = op->vtkLineIntegralConvolution2D::GetLIC();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLineIntegralConvolution2D_Methods[] = {
  {(char*)"GetClassName", PyvtkLineIntegralConvolution2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLineIntegralConvolution2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLineIntegralConvolution2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLineIntegralConvolution2D\nC++: vtkLineIntegralConvolution2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLineIntegralConvolution2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLineIntegralConvolution2D\nC++: vtkLineIntegralConvolution2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnhancedLIC", PyvtkLineIntegralConvolution2D_SetEnhancedLIC, 1,
   (char*)"V.SetEnhancedLIC(int)\nC++: void SetEnhancedLIC(int a)\n\nEnable/Disable enhanced LIC that improves image quality by\nincreasing inter-streamline contrast while suppressing artifacts.\nEnhanced LIC performs two passes of LIC, with a 3x3 Laplacian\nhigh-pass filter in between that processes the output of pass #1\nLIC and forwards the result as the input 'noise' to pass #2 LIC.\nThis flag is automatically turned off during user interaction.\n"},
  {(char*)"GetEnhancedLIC", PyvtkLineIntegralConvolution2D_GetEnhancedLIC, 1,
   (char*)"V.GetEnhancedLIC() -> int\nC++: int GetEnhancedLIC()\n\nEnable/Disable enhanced LIC that improves image quality by\nincreasing inter-streamline contrast while suppressing artifacts.\nEnhanced LIC performs two passes of LIC, with a 3x3 Laplacian\nhigh-pass filter in between that processes the output of pass #1\nLIC and forwards the result as the input 'noise' to pass #2 LIC.\nThis flag is automatically turned off during user interaction.\n"},
  {(char*)"EnhancedLICOn", PyvtkLineIntegralConvolution2D_EnhancedLICOn, 1,
   (char*)"V.EnhancedLICOn()\nC++: void EnhancedLICOn()\n\nEnable/Disable enhanced LIC that improves image quality by\nincreasing inter-streamline contrast while suppressing artifacts.\nEnhanced LIC performs two passes of LIC, with a 3x3 Laplacian\nhigh-pass filter in between that processes the output of pass #1\nLIC and forwards the result as the input 'noise' to pass #2 LIC.\nThis flag is automatically turned off during user interaction.\n"},
  {(char*)"EnhancedLICOff", PyvtkLineIntegralConvolution2D_EnhancedLICOff, 1,
   (char*)"V.EnhancedLICOff()\nC++: void EnhancedLICOff()\n\nEnable/Disable enhanced LIC that improves image quality by\nincreasing inter-streamline contrast while suppressing artifacts.\nEnhanced LIC performs two passes of LIC, with a 3x3 Laplacian\nhigh-pass filter in between that processes the output of pass #1\nLIC and forwards the result as the input 'noise' to pass #2 LIC.\nThis flag is automatically turned off during user interaction.\n"},
  {(char*)"SetLICForSurface", PyvtkLineIntegralConvolution2D_SetLICForSurface, 1,
   (char*)"V.SetLICForSurface(int)\nC++: void SetLICForSurface(int a)\n\n"},
  {(char*)"GetLICForSurface", PyvtkLineIntegralConvolution2D_GetLICForSurface, 1,
   (char*)"V.GetLICForSurface() -> int\nC++: int GetLICForSurface()\n\n"},
  {(char*)"LICForSurfaceOn", PyvtkLineIntegralConvolution2D_LICForSurfaceOn, 1,
   (char*)"V.LICForSurfaceOn()\nC++: void LICForSurfaceOn()\n\n"},
  {(char*)"LICForSurfaceOff", PyvtkLineIntegralConvolution2D_LICForSurfaceOff, 1,
   (char*)"V.LICForSurfaceOff()\nC++: void LICForSurfaceOff()\n\n"},
  {(char*)"SetNumberOfSteps", PyvtkLineIntegralConvolution2D_SetNumberOfSteps, 1,
   (char*)"V.SetNumberOfSteps(int)\nC++: void SetNumberOfSteps(int a)\n\nNumber of streamline integration steps (initial value is 1). In\nterm of visual quality, the greater (within some range) the\nbetter.\n"},
  {(char*)"GetNumberOfSteps", PyvtkLineIntegralConvolution2D_GetNumberOfSteps, 1,
   (char*)"V.GetNumberOfSteps() -> int\nC++: int GetNumberOfSteps()\n\nNumber of streamline integration steps (initial value is 1). In\nterm of visual quality, the greater (within some range) the\nbetter.\n"},
  {(char*)"SetLICStepSize", PyvtkLineIntegralConvolution2D_SetLICStepSize, 1,
   (char*)"V.SetLICStepSize(float)\nC++: void SetLICStepSize(double)\n\nGet/Set the streamline integration step size (0.01 by default).\nThis is the length of each step in normalized image space i.e. in\nrange [0, 1]. In term of visual quality, the smaller the better.\nThe type for the interface is double as VTK interface is, but GPU\nonly supports float. Thus it will be converted to float in the\nexecution of the algorithm.\n"},
  {(char*)"GetLICStepSizeMinValue", PyvtkLineIntegralConvolution2D_GetLICStepSizeMinValue, 1,
   (char*)"V.GetLICStepSizeMinValue() -> float\nC++: double GetLICStepSizeMinValue()\n\nGet/Set the streamline integration step size (0.01 by default).\nThis is the length of each step in normalized image space i.e. in\nrange [0, 1]. In term of visual quality, the smaller the better.\nThe type for the interface is double as VTK interface is, but GPU\nonly supports float. Thus it will be converted to float in the\nexecution of the algorithm.\n"},
  {(char*)"GetLICStepSizeMaxValue", PyvtkLineIntegralConvolution2D_GetLICStepSizeMaxValue, 1,
   (char*)"V.GetLICStepSizeMaxValue() -> float\nC++: double GetLICStepSizeMaxValue()\n\nGet/Set the streamline integration step size (0.01 by default).\nThis is the length of each step in normalized image space i.e. in\nrange [0, 1]. In term of visual quality, the smaller the better.\nThe type for the interface is double as VTK interface is, but GPU\nonly supports float. Thus it will be converted to float in the\nexecution of the algorithm.\n"},
  {(char*)"GetLICStepSize", PyvtkLineIntegralConvolution2D_GetLICStepSize, 1,
   (char*)"V.GetLICStepSize() -> float\nC++: double GetLICStepSize()\n\nGet/Set the streamline integration step size (0.01 by default).\nThis is the length of each step in normalized image space i.e. in\nrange [0, 1]. In term of visual quality, the smaller the better.\nThe type for the interface is double as VTK interface is, but GPU\nonly supports float. Thus it will be converted to float in the\nexecution of the algorithm.\n"},
  {(char*)"SetNoise", PyvtkLineIntegralConvolution2D_SetNoise, 1,
   (char*)"V.SetNoise(vtkTextureObject)\nC++: void SetNoise(vtkTextureObject *noise)\n\nSet/Get the input white noise texture (initial value is NULL).\n"},
  {(char*)"GetNoise", PyvtkLineIntegralConvolution2D_GetNoise, 1,
   (char*)"V.GetNoise() -> vtkTextureObject\nC++: vtkTextureObject *GetNoise()\n\nSet/Get the input white noise texture (initial value is NULL).\n"},
  {(char*)"SetVectorField", PyvtkLineIntegralConvolution2D_SetVectorField, 1,
   (char*)"V.SetVectorField(vtkTextureObject)\nC++: void SetVectorField(vtkTextureObject *vectorField)\n\nSet/Get the vector field (initial value is NULL).\n"},
  {(char*)"GetVectorField", PyvtkLineIntegralConvolution2D_GetVectorField, 1,
   (char*)"V.GetVectorField() -> vtkTextureObject\nC++: vtkTextureObject *GetVectorField()\n\nSet/Get the vector field (initial value is NULL).\n"},
  {(char*)"SetComponentIds", PyvtkLineIntegralConvolution2D_SetComponentIds, 1,
   (char*)"V.SetComponentIds(int, int)\nC++: void SetComponentIds(int, int)\nV.SetComponentIds((int, int))\nC++: void SetComponentIds(int a[2])\n\n"},
  {(char*)"GetComponentIds", PyvtkLineIntegralConvolution2D_GetComponentIds, 1,
   (char*)"V.GetComponentIds() -> (int, int)\nC++: int *GetComponentIds()\n\n"},
  {(char*)"SetGridSpacings", PyvtkLineIntegralConvolution2D_SetGridSpacings, 1,
   (char*)"V.SetGridSpacings(float, float)\nC++: void SetGridSpacings(double, double)\nV.SetGridSpacings((float, float))\nC++: void SetGridSpacings(double a[2])\n\n"},
  {(char*)"GetGridSpacings", PyvtkLineIntegralConvolution2D_GetGridSpacings, 1,
   (char*)"V.GetGridSpacings() -> (float, float)\nC++: double *GetGridSpacings()\n\n"},
  {(char*)"SetTransformVectors", PyvtkLineIntegralConvolution2D_SetTransformVectors, 1,
   (char*)"V.SetTransformVectors(int)\nC++: void SetTransformVectors(int)\n\nThis class performs LIC in the normalized image space. Hence, by\ndefault it transforms the input vectors to the normalized image\nspace (using the GridSpacings and input vector field dimensions).\nSet this to 0 to disable tranformation if the vectors are already\ntranformed.\n"},
  {(char*)"GetTransformVectorsMinValue", PyvtkLineIntegralConvolution2D_GetTransformVectorsMinValue, 1,
   (char*)"V.GetTransformVectorsMinValue() -> int\nC++: int GetTransformVectorsMinValue()\n\nThis class performs LIC in the normalized image space. Hence, by\ndefault it transforms the input vectors to the normalized image\nspace (using the GridSpacings and input vector field dimensions).\nSet this to 0 to disable tranformation if the vectors are already\ntranformed.\n"},
  {(char*)"GetTransformVectorsMaxValue", PyvtkLineIntegralConvolution2D_GetTransformVectorsMaxValue, 1,
   (char*)"V.GetTransformVectorsMaxValue() -> int\nC++: int GetTransformVectorsMaxValue()\n\nThis class performs LIC in the normalized image space. Hence, by\ndefault it transforms the input vectors to the normalized image\nspace (using the GridSpacings and input vector field dimensions).\nSet this to 0 to disable tranformation if the vectors are already\ntranformed.\n"},
  {(char*)"TransformVectorsOn", PyvtkLineIntegralConvolution2D_TransformVectorsOn, 1,
   (char*)"V.TransformVectorsOn()\nC++: void TransformVectorsOn()\n\nThis class performs LIC in the normalized image space. Hence, by\ndefault it transforms the input vectors to the normalized image\nspace (using the GridSpacings and input vector field dimensions).\nSet this to 0 to disable tranformation if the vectors are already\ntranformed.\n"},
  {(char*)"TransformVectorsOff", PyvtkLineIntegralConvolution2D_TransformVectorsOff, 1,
   (char*)"V.TransformVectorsOff()\nC++: void TransformVectorsOff()\n\nThis class performs LIC in the normalized image space. Hence, by\ndefault it transforms the input vectors to the normalized image\nspace (using the GridSpacings and input vector field dimensions).\nSet this to 0 to disable tranformation if the vectors are already\ntranformed.\n"},
  {(char*)"GetTransformVectors", PyvtkLineIntegralConvolution2D_GetTransformVectors, 1,
   (char*)"V.GetTransformVectors() -> int\nC++: int GetTransformVectors()\n\nThis class performs LIC in the normalized image space. Hence, by\ndefault it transforms the input vectors to the normalized image\nspace (using the GridSpacings and input vector field dimensions).\nSet this to 0 to disable tranformation if the vectors are already\ntranformed.\n"},
  {(char*)"SetMagnification", PyvtkLineIntegralConvolution2D_SetMagnification, 1,
   (char*)"V.SetMagnification(int)\nC++: void SetMagnification(int)\n\nThe the magnification factor (default is 1.0).\n"},
  {(char*)"GetMagnificationMinValue", PyvtkLineIntegralConvolution2D_GetMagnificationMinValue, 1,
   (char*)"V.GetMagnificationMinValue() -> int\nC++: int GetMagnificationMinValue()\n\nThe the magnification factor (default is 1.0).\n"},
  {(char*)"GetMagnificationMaxValue", PyvtkLineIntegralConvolution2D_GetMagnificationMaxValue, 1,
   (char*)"V.GetMagnificationMaxValue() -> int\nC++: int GetMagnificationMaxValue()\n\nThe the magnification factor (default is 1.0).\n"},
  {(char*)"GetMagnification", PyvtkLineIntegralConvolution2D_GetMagnification, 1,
   (char*)"V.GetMagnification() -> int\nC++: int GetMagnification()\n\nThe the magnification factor (default is 1.0).\n"},
  {(char*)"SetVectorShiftScale", PyvtkLineIntegralConvolution2D_SetVectorShiftScale, 1,
   (char*)"V.SetVectorShiftScale(float, float)\nC++: void SetVectorShiftScale(double shift, double scale)\n\nOn machines where the vector field texture is clamped between\n[0,1], one can specify the shift/scale factor used to convert the\noriginal vector field to lie in the clamped range. Default is\n(0.0, 1.0);\n"},
  {(char*)"IsSupported", PyvtkLineIntegralConvolution2D_IsSupported, 1,
   (char*)"V.IsSupported(vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *renWin)\n\nReturns if the context supports the required extensions.\n"},
  {(char*)"Execute", PyvtkLineIntegralConvolution2D_Execute, 1,
   (char*)"V.Execute() -> int\nC++: int Execute()\nV.Execute([int, int, int, int]) -> int\nC++: int Execute(int extent[4])\n\nPerform the LIC and obtain the LIC texture. Return 1 if no error.\n"},
  {(char*)"SetLIC", PyvtkLineIntegralConvolution2D_SetLIC, 1,
   (char*)"V.SetLIC(vtkTextureObject)\nC++: void SetLIC(vtkTextureObject *lic)\n\nLIC texture (initial value is NULL) set by Execute().\n"},
  {(char*)"GetLIC", PyvtkLineIntegralConvolution2D_GetLIC, 1,
   (char*)"V.GetLIC() -> vtkTextureObject\nC++: vtkTextureObject *GetLIC()\n\nLIC texture (initial value is NULL) set by Execute().\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLineIntegralConvolution2D_StaticNew()
{
  return vtkLineIntegralConvolution2D::New();
}

PyObject *PyVTKClass_vtkLineIntegralConvolution2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLineIntegralConvolution2D_StaticNew,
    PyvtkLineIntegralConvolution2D_Methods,
    "vtkLineIntegralConvolution2D", modulename,
    NULL, NULL,
    PyvtkLineIntegralConvolution2D_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkLineIntegralConvolution2D_Doc()
{
  static const char *docstring[] = {
    "vtkLineIntegralConvolution2D - GPU-based implementation of Line \n\n",
    "Superclass: vtkObject\n\n",
    "This class resorts to GLSL to implement GPU-based Line Integral\nConvolution\n (LIC) for visualizing a 2D vector field that may be obtained by\nprojecting\n an original 3D vector field onto a surface (such that the resulting\n2D\n vector at each grid point on the surface is tangential to the local\nnormal,\n as done in vtkSurfaceLICPainter).\n\n\n As an image-based technique, 2D LIC works by (1) integrating ",
    "a\nbidirectional\n streamline from the center of each pixel (of the LIC output image),\n(2)\n locating the pixels along / hit by this streamline as the correlated\npixels\n of the starting pixel (seed point / pixel), (3) indexing a (usually\nwhite)\n noise texture (another input to LIC, in addition to the 2D vector\nfield,\n usually with the same size as that of the 2D vetor field) to\ndetermine the\n values ",
    "(colors) of these pixels (the starting and the correlated\npixels),\n typically through bi-linear interpolation, and (4) performing\nconvolution\n (weighted averaging) on these values, by adopting a low-pass filter\n(such\n as box, ramp, and Hanning kernels), to obtain the result value\n(color) that\n is then assigned to the seed pixel.\n\n\n The GLSL-based GPU implementation herein maps the aforementioned\np",
    "ipeline to\n fragment shaders and a box kernel is employed. Both the white noise\nand the\n vector field are provided to the GPU as texture objects (supported\nby the\n multi-texturing capability). In addition, there are four texture\nobjects\n (color buffers) allocated to constitute two pairs that work in a\nping-pong\n fashion, with one as the read buffers and the other as the write /\nrender\n targets. Ma",
    "intained by a frame buffer object\n(GL_EXT_framebuffer_object),\n each pair employs one buffer to store the current (dynamically\nupdated)\n position (by means of the texture coordinate that keeps being warped\nby the\n underlying vector) of the (virtual) particle initially released from\neach\n fragment while using the bother buffer to store the current\n(dynamically\n updated too) accumulated texture valu",
    "e that each seed fragment\n(before the\n 'mesh' is warped) collects. Given NumberOfSteps integration steps in\neach\n direction, there are a total of (2 * NumberOfSteps + 1) fragments\n(including\n the seed fragment) are convolved and each contributes 1 / (2 *\nNumberOfSteps\n + 1) of the associated texture value to fulfill the box filter.\n\n\n One pass of LIC (basic LIC) tends to produce low-contrast / blu",
    "rred\nimages and\n vtkLineIntegralConvolution2D provides an option for creating\nenhanced LIC\n images. Enhanced LIC improves image quality by increasing\ninter-streamline\n contrast while suppressing artifacts. It performs two passes of LIC,\nwith a\n 3x3 Laplacian high-pass filter in between that processes the output\nof pass\n#1 LIC and forwards the result as the input 'noise' to pass #2 LIC.\n   Enhanced",
    " LIC automatically degenerates to basic LIC during user\n   interaction.\n\n\n vtkLineIntegralConvolution2D applies masking to zero-vector\nfragments so\n that un-filtered white noise areas are made totally transparent by\nclass\n vtkSurfaceLICPainter to show the underlying geometry surface.\n\nRequired OpenGL Extensins:\n\n\n GL_ARB_texture_non_power_of_two\n GL_VERSION_2_0\n GL_ARB_texture_float\n GL_ARB_draw_b",
    "uffers\n GL_EXT_framebuffer_object\n\nSee Also:\n\n\n vtkSurfaceLICPainter vtkImageDataLIC2D vtkStructuredGridLIC2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLineIntegralConvolution2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLineIntegralConvolution2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLineIntegralConvolution2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

