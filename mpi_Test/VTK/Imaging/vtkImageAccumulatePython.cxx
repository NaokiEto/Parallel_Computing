// python wrapper for vtkImageAccumulate
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
#include "vtkImageAccumulate.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageAccumulate(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageAccumulate(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageAccumulateNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageAccumulateNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageAccumulate_Doc();


static PyObject *
PyvtkImageAccumulate_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

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
      tempr = op->vtkImageAccumulate::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

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
      tempr = op->vtkImageAccumulate::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  vtkImageAccumulate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageAccumulate::NewInstance();
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
PyvtkImageAccumulate_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageAccumulate *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageAccumulate::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_SetComponentSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

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
      op->SetComponentSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageAccumulate::SetComponentSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageAccumulate_SetComponentSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetComponentSpacing(temp0);
      }
    else
      {
      op->vtkImageAccumulate::SetComponentSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageAccumulate_SetComponentSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageAccumulate_SetComponentSpacing_s1(self, args);
    case 1:
      return PyvtkImageAccumulate_SetComponentSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetComponentSpacing");
  return NULL;
}



static PyObject *
PyvtkImageAccumulate_GetComponentSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponentSpacing();
      }
    else
      {
      tempr = op->vtkImageAccumulate::GetComponentSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_SetComponentOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

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
      op->SetComponentOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageAccumulate::SetComponentOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageAccumulate_SetComponentOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetComponentOrigin(temp0);
      }
    else
      {
      op->vtkImageAccumulate::SetComponentOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageAccumulate_SetComponentOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageAccumulate_SetComponentOrigin_s1(self, args);
    case 1:
      return PyvtkImageAccumulate_SetComponentOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetComponentOrigin");
  return NULL;
}



static PyObject *
PyvtkImageAccumulate_GetComponentOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponentOrigin();
      }
    else
      {
      tempr = op->vtkImageAccumulate::GetComponentOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_SetComponentExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetComponentExtent(temp0);
      }
    else
      {
      op->vtkImageAccumulate::SetComponentExtent(temp0);
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
PyvtkImageAccumulate_SetComponentExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

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
      op->SetComponentExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageAccumulate::SetComponentExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageAccumulate_SetComponentExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageAccumulate_SetComponentExtent_s1(self, args);
    case 6:
      return PyvtkImageAccumulate_SetComponentExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetComponentExtent");
  return NULL;
}



static PyObject *
PyvtkImageAccumulate_GetComponentExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetComponentExtent(temp0);
      }
    else
      {
      op->vtkImageAccumulate::GetComponentExtent(temp0);
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
PyvtkImageAccumulate_GetComponentExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponentExtent();
      }
    else
      {
      tempr = op->vtkImageAccumulate::GetComponentExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageAccumulate_GetComponentExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageAccumulate_GetComponentExtent_s1(self, args);
    case 0:
      return PyvtkImageAccumulate_GetComponentExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetComponentExtent");
  return NULL;
}



static PyObject *
PyvtkImageAccumulate_SetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  vtkImageStencilData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
    {
    if (ap.IsBound())
      {
      op->SetStencil(temp0);
      }
    else
      {
      op->vtkImageAccumulate::SetStencil(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  vtkImageStencilData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStencil();
      }
    else
      {
      tempr = op->vtkImageAccumulate::GetStencil();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_SetReverseStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReverseStencil(temp0);
      }
    else
      {
      op->vtkImageAccumulate::SetReverseStencil(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetReverseStencilMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseStencilMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReverseStencilMinValue();
      }
    else
      {
      tempr = op->vtkImageAccumulate::GetReverseStencilMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetReverseStencilMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseStencilMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReverseStencilMaxValue();
      }
    else
      {
      tempr = op->vtkImageAccumulate::GetReverseStencilMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_ReverseStencilOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseStencilOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseStencilOn();
      }
    else
      {
      op->vtkImageAccumulate::ReverseStencilOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_ReverseStencilOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseStencilOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseStencilOff();
      }
    else
      {
      op->vtkImageAccumulate::ReverseStencilOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetReverseStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReverseStencil();
      }
    else
      {
      tempr = op->vtkImageAccumulate::GetReverseStencil();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMin();
      }
    else
      {
      tempr = op->vtkImageAccumulate::GetMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMax();
      }
    else
      {
      tempr = op->vtkImageAccumulate::GetMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMean();
      }
    else
      {
      tempr = op->vtkImageAccumulate::GetMean();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStandardDeviation();
      }
    else
      {
      tempr = op->vtkImageAccumulate::GetStandardDeviation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetVoxelCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoxelCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVoxelCount();
      }
    else
      {
      tempr = op->vtkImageAccumulate::GetVoxelCount();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_SetIgnoreZero(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreZero");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIgnoreZero(temp0);
      }
    else
      {
      op->vtkImageAccumulate::SetIgnoreZero(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetIgnoreZeroMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreZeroMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIgnoreZeroMinValue();
      }
    else
      {
      tempr = op->vtkImageAccumulate::GetIgnoreZeroMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetIgnoreZeroMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreZeroMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIgnoreZeroMaxValue();
      }
    else
      {
      tempr = op->vtkImageAccumulate::GetIgnoreZeroMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetIgnoreZero(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreZero");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIgnoreZero();
      }
    else
      {
      tempr = op->vtkImageAccumulate::GetIgnoreZero();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_IgnoreZeroOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreZeroOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IgnoreZeroOn();
      }
    else
      {
      op->vtkImageAccumulate::IgnoreZeroOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAccumulate_IgnoreZeroOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreZeroOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IgnoreZeroOff();
      }
    else
      {
      op->vtkImageAccumulate::IgnoreZeroOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageAccumulate_Methods[] = {
  {(char*)"GetClassName", PyvtkImageAccumulate_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageAccumulate_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageAccumulate_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageAccumulate\nC++: vtkImageAccumulate *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageAccumulate_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageAccumulate\nC++: vtkImageAccumulate *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetComponentSpacing", PyvtkImageAccumulate_SetComponentSpacing, 1,
   (char*)"V.SetComponentSpacing(float, float, float)\nC++: void SetComponentSpacing(double, double, double)\nV.SetComponentSpacing((float, float, float))\nC++: void SetComponentSpacing(double a[3])\n\n"},
  {(char*)"GetComponentSpacing", PyvtkImageAccumulate_GetComponentSpacing, 1,
   (char*)"V.GetComponentSpacing() -> (float, float, float)\nC++: double *GetComponentSpacing()\n\n"},
  {(char*)"SetComponentOrigin", PyvtkImageAccumulate_SetComponentOrigin, 1,
   (char*)"V.SetComponentOrigin(float, float, float)\nC++: void SetComponentOrigin(double, double, double)\nV.SetComponentOrigin((float, float, float))\nC++: void SetComponentOrigin(double a[3])\n\n"},
  {(char*)"GetComponentOrigin", PyvtkImageAccumulate_GetComponentOrigin, 1,
   (char*)"V.GetComponentOrigin() -> (float, float, float)\nC++: double *GetComponentOrigin()\n\n"},
  {(char*)"SetComponentExtent", PyvtkImageAccumulate_SetComponentExtent, 1,
   (char*)"V.SetComponentExtent([int, int, int, int, int, int])\nC++: void SetComponentExtent(int extent[6])\nV.SetComponentExtent(int, int, int, int, int, int)\nC++: void SetComponentExtent(int minX, int maxX, int minY,\n    int maxY, int minZ, int maxZ)\n\nSet/Get - The component extent sets the number/extent of the\nbins. For a 1D histogram with 10 bins spanning the values 1000 to\n2000, this extent should be set to 0, 9, 0, 0, 0, 0. The extent\nspecifies inclusive min/max values. This implies that the top\nextent should be set to the number of bins - 1. Initial value is\n(0,255,0,0,0,0)\n"},
  {(char*)"GetComponentExtent", PyvtkImageAccumulate_GetComponentExtent, 1,
   (char*)"V.GetComponentExtent([int, int, int, int, int, int])\nC++: void GetComponentExtent(int extent[6])\nV.GetComponentExtent() -> (int, int, int, int, int, int)\nC++: int *GetComponentExtent()\n\nSet/Get - The component extent sets the number/extent of the\nbins. For a 1D histogram with 10 bins spanning the values 1000 to\n2000, this extent should be set to 0, 9, 0, 0, 0, 0. The extent\nspecifies inclusive min/max values. This implies that the top\nextent should be set to the number of bins - 1. Initial value is\n(0,255,0,0,0,0)\n"},
  {(char*)"SetStencil", PyvtkImageAccumulate_SetStencil, 1,
   (char*)"V.SetStencil(vtkImageStencilData)\nC++: void SetStencil(vtkImageStencilData *stencil)\n\nUse a stencil to specify which voxels to accumulate.\nBackcompatible methods. It set and get the stencil on input port\n1. Initial value is NULL.\n"},
  {(char*)"GetStencil", PyvtkImageAccumulate_GetStencil, 1,
   (char*)"V.GetStencil() -> vtkImageStencilData\nC++: vtkImageStencilData *GetStencil()\n\nUse a stencil to specify which voxels to accumulate.\nBackcompatible methods. It set and get the stencil on input port\n1. Initial value is NULL.\n"},
  {(char*)"SetReverseStencil", PyvtkImageAccumulate_SetReverseStencil, 1,
   (char*)"V.SetReverseStencil(int)\nC++: void SetReverseStencil(int)\n\nReverse the stencil. Initial value is false.\n"},
  {(char*)"GetReverseStencilMinValue", PyvtkImageAccumulate_GetReverseStencilMinValue, 1,
   (char*)"V.GetReverseStencilMinValue() -> int\nC++: int GetReverseStencilMinValue()\n\nReverse the stencil. Initial value is false.\n"},
  {(char*)"GetReverseStencilMaxValue", PyvtkImageAccumulate_GetReverseStencilMaxValue, 1,
   (char*)"V.GetReverseStencilMaxValue() -> int\nC++: int GetReverseStencilMaxValue()\n\nReverse the stencil. Initial value is false.\n"},
  {(char*)"ReverseStencilOn", PyvtkImageAccumulate_ReverseStencilOn, 1,
   (char*)"V.ReverseStencilOn()\nC++: void ReverseStencilOn()\n\nReverse the stencil. Initial value is false.\n"},
  {(char*)"ReverseStencilOff", PyvtkImageAccumulate_ReverseStencilOff, 1,
   (char*)"V.ReverseStencilOff()\nC++: void ReverseStencilOff()\n\nReverse the stencil. Initial value is false.\n"},
  {(char*)"GetReverseStencil", PyvtkImageAccumulate_GetReverseStencil, 1,
   (char*)"V.GetReverseStencil() -> int\nC++: int GetReverseStencil()\n\nReverse the stencil. Initial value is false.\n"},
  {(char*)"GetMin", PyvtkImageAccumulate_GetMin, 1,
   (char*)"V.GetMin() -> (float, float, float)\nC++: double *GetMin()\n\n"},
  {(char*)"GetMax", PyvtkImageAccumulate_GetMax, 1,
   (char*)"V.GetMax() -> (float, float, float)\nC++: double *GetMax()\n\n"},
  {(char*)"GetMean", PyvtkImageAccumulate_GetMean, 1,
   (char*)"V.GetMean() -> (float, float, float)\nC++: double *GetMean()\n\n"},
  {(char*)"GetStandardDeviation", PyvtkImageAccumulate_GetStandardDeviation, 1,
   (char*)"V.GetStandardDeviation() -> (float, float, float)\nC++: double *GetStandardDeviation()\n\n"},
  {(char*)"GetVoxelCount", PyvtkImageAccumulate_GetVoxelCount, 1,
   (char*)"V.GetVoxelCount() -> int\nC++: vtkIdType GetVoxelCount()\n\nGet the statistics information for the data. The values only make\nsense after the execution of the filter. Initial values are 0.\n"},
  {(char*)"SetIgnoreZero", PyvtkImageAccumulate_SetIgnoreZero, 1,
   (char*)"V.SetIgnoreZero(int)\nC++: void SetIgnoreZero(int)\n\nShould the data with value 0 be ignored? Initial value is false.\n"},
  {(char*)"GetIgnoreZeroMinValue", PyvtkImageAccumulate_GetIgnoreZeroMinValue, 1,
   (char*)"V.GetIgnoreZeroMinValue() -> int\nC++: int GetIgnoreZeroMinValue()\n\nShould the data with value 0 be ignored? Initial value is false.\n"},
  {(char*)"GetIgnoreZeroMaxValue", PyvtkImageAccumulate_GetIgnoreZeroMaxValue, 1,
   (char*)"V.GetIgnoreZeroMaxValue() -> int\nC++: int GetIgnoreZeroMaxValue()\n\nShould the data with value 0 be ignored? Initial value is false.\n"},
  {(char*)"GetIgnoreZero", PyvtkImageAccumulate_GetIgnoreZero, 1,
   (char*)"V.GetIgnoreZero() -> int\nC++: int GetIgnoreZero()\n\nShould the data with value 0 be ignored? Initial value is false.\n"},
  {(char*)"IgnoreZeroOn", PyvtkImageAccumulate_IgnoreZeroOn, 1,
   (char*)"V.IgnoreZeroOn()\nC++: void IgnoreZeroOn()\n\nShould the data with value 0 be ignored? Initial value is false.\n"},
  {(char*)"IgnoreZeroOff", PyvtkImageAccumulate_IgnoreZeroOff, 1,
   (char*)"V.IgnoreZeroOff()\nC++: void IgnoreZeroOff()\n\nShould the data with value 0 be ignored? Initial value is false.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageAccumulate_StaticNew()
{
  return vtkImageAccumulate::New();
}

PyObject *PyVTKClass_vtkImageAccumulateNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageAccumulate_StaticNew,
    PyvtkImageAccumulate_Methods,
    "vtkImageAccumulate", modulename,
    NULL, NULL,
    PyvtkImageAccumulate_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageAccumulate_Doc()
{
  static const char *docstring[] = {
    "vtkImageAccumulate - Generalized histograms up to 4 dimensions.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageAccumulate - This filter divides component space into\ndiscrete bins.  It then counts the number of pixels associated with\neach bin.  The output is this \"scatter plot\" (histogram values for\n1D). The dimensionality of the output depends on how many components\nthe input pixels have.  Input pixels with one component generate a 1D\nhistogram. This filter can only handle images with 1 to 3 scalar",
    "\ncomponents. The input can be any type, but the output is always int.\nSome statistics are computed on the pixel values at the same time.\nThe SetStencil and ReverseStencil functions allow the statistics to\nbe computed on an arbitrary portion of the input data. See the\ndocumentation for vtkImageStencilData for more information.\n\nThis filter also support ignoring pixel with value equal to 0. Using\nth",
    "is option with vtkImageMask may result in results being slightly\noff since 0 could be a valid value from your input.\n\nSee Also:\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageAccumulate(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageAccumulateNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageAccumulate", o) != 0)
    {
    Py_DECREF(o);
    }

}

