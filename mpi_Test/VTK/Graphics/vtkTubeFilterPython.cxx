// python wrapper for vtkTubeFilter
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
#include "vtkTubeFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTubeFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTubeFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTubeFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTubeFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkTubeFilter_Doc();


static PyObject *
PyvtkTubeFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      tempr = op->vtkTubeFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      tempr = op->vtkTubeFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  vtkTubeFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTubeFilter::NewInstance();
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
PyvtkTubeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTubeFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTubeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      op->vtkTubeFilter::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      tempr = op->vtkTubeFilter::GetRadiusMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      tempr = op->vtkTubeFilter::GetRadiusMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      tempr = op->vtkTubeFilter::GetRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetVaryRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVaryRadius(temp0);
      }
    else
      {
      op->vtkTubeFilter::SetVaryRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetVaryRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVaryRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVaryRadiusMinValue();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetVaryRadiusMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetVaryRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVaryRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVaryRadiusMaxValue();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetVaryRadiusMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetVaryRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVaryRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVaryRadius();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetVaryRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetVaryRadiusToVaryRadiusOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryRadiusToVaryRadiusOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVaryRadiusToVaryRadiusOff();
      }
    else
      {
      op->vtkTubeFilter::SetVaryRadiusToVaryRadiusOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryRadiusToVaryRadiusByScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVaryRadiusToVaryRadiusByScalar();
      }
    else
      {
      op->vtkTubeFilter::SetVaryRadiusToVaryRadiusByScalar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryRadiusToVaryRadiusByVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVaryRadiusToVaryRadiusByVector();
      }
    else
      {
      op->vtkTubeFilter::SetVaryRadiusToVaryRadiusByVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByAbsoluteScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryRadiusToVaryRadiusByAbsoluteScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVaryRadiusToVaryRadiusByAbsoluteScalar();
      }
    else
      {
      op->vtkTubeFilter::SetVaryRadiusToVaryRadiusByAbsoluteScalar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetVaryRadiusAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVaryRadiusAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVaryRadiusAsString();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetVaryRadiusAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSides(temp0);
      }
    else
      {
      op->vtkTubeFilter::SetNumberOfSides(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetNumberOfSidesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSidesMinValue();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetNumberOfSidesMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetNumberOfSidesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSidesMaxValue();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetNumberOfSidesMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSides();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetNumberOfSides();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetRadiusFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadiusFactor(temp0);
      }
    else
      {
      op->vtkTubeFilter::SetRadiusFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetRadiusFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadiusFactor();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetRadiusFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetDefaultNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      op->SetDefaultNormal(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTubeFilter::SetDefaultNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTubeFilter_SetDefaultNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultNormal(temp0);
      }
    else
      {
      op->vtkTubeFilter::SetDefaultNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTubeFilter_SetDefaultNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTubeFilter_SetDefaultNormal_s1(self, args);
    case 1:
      return PyvtkTubeFilter_SetDefaultNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDefaultNormal");
  return NULL;
}



static PyObject *
PyvtkTubeFilter_GetDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultNormal();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetDefaultNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDefaultNormal(temp0);
      }
    else
      {
      op->vtkTubeFilter::SetUseDefaultNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseDefaultNormal();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetUseDefaultNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_UseDefaultNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDefaultNormalOn();
      }
    else
      {
      op->vtkTubeFilter::UseDefaultNormalOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_UseDefaultNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDefaultNormalOff();
      }
    else
      {
      op->vtkTubeFilter::UseDefaultNormalOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetSidesShareVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSidesShareVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSidesShareVertices(temp0);
      }
    else
      {
      op->vtkTubeFilter::SetSidesShareVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetSidesShareVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSidesShareVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSidesShareVertices();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetSidesShareVertices();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SidesShareVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SidesShareVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SidesShareVerticesOn();
      }
    else
      {
      op->vtkTubeFilter::SidesShareVerticesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SidesShareVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SidesShareVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SidesShareVerticesOff();
      }
    else
      {
      op->vtkTubeFilter::SidesShareVerticesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      op->vtkTubeFilter::SetCapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      tempr = op->vtkTubeFilter::GetCapping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOn();
      }
    else
      {
      op->vtkTubeFilter::CappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOff();
      }
    else
      {
      op->vtkTubeFilter::CappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      op->vtkTubeFilter::SetOnRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOnRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      tempr = op->vtkTubeFilter::GetOnRatioMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOnRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      tempr = op->vtkTubeFilter::GetOnRatioMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      tempr = op->vtkTubeFilter::GetOnRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      op->vtkTubeFilter::SetOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      tempr = op->vtkTubeFilter::GetOffsetMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      tempr = op->vtkTubeFilter::GetOffsetMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      tempr = op->vtkTubeFilter::GetOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoords(temp0);
      }
    else
      {
      op->vtkTubeFilter::SetGenerateTCoords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetGenerateTCoordsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateTCoordsMinValue();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetGenerateTCoordsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetGenerateTCoordsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateTCoordsMaxValue();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetGenerateTCoordsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateTCoords();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetGenerateTCoords();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetGenerateTCoordsToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToOff();
      }
    else
      {
      op->vtkTubeFilter::SetGenerateTCoordsToOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetGenerateTCoordsToNormalizedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToNormalizedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToNormalizedLength();
      }
    else
      {
      op->vtkTubeFilter::SetGenerateTCoordsToNormalizedLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetGenerateTCoordsToUseLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToUseLength();
      }
    else
      {
      op->vtkTubeFilter::SetGenerateTCoordsToUseLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetGenerateTCoordsToUseScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTCoordsToUseScalars();
      }
    else
      {
      op->vtkTubeFilter::SetGenerateTCoordsToUseScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetGenerateTCoordsAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateTCoordsAsString();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetGenerateTCoordsAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureLength(temp0);
      }
    else
      {
      op->vtkTubeFilter::SetTextureLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetTextureLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureLengthMinValue();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetTextureLengthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetTextureLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureLengthMaxValue();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetTextureLengthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureLength();
      }
    else
      {
      tempr = op->vtkTubeFilter::GetTextureLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTubeFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkTubeFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTubeFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTubeFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTubeFilter\nC++: vtkTubeFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTubeFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTubeFilter\nC++: vtkTubeFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRadius", PyvtkTubeFilter_SetRadius, 1,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double)\n\nSet the minimum tube radius (minimum because the tube radius may\nvary).\n"},
  {(char*)"GetRadiusMinValue", PyvtkTubeFilter_GetRadiusMinValue, 1,
   (char*)"V.GetRadiusMinValue() -> float\nC++: double GetRadiusMinValue()\n\nSet the minimum tube radius (minimum because the tube radius may\nvary).\n"},
  {(char*)"GetRadiusMaxValue", PyvtkTubeFilter_GetRadiusMaxValue, 1,
   (char*)"V.GetRadiusMaxValue() -> float\nC++: double GetRadiusMaxValue()\n\nSet the minimum tube radius (minimum because the tube radius may\nvary).\n"},
  {(char*)"GetRadius", PyvtkTubeFilter_GetRadius, 1,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet the minimum tube radius (minimum because the tube radius may\nvary).\n"},
  {(char*)"SetVaryRadius", PyvtkTubeFilter_SetVaryRadius, 1,
   (char*)"V.SetVaryRadius(int)\nC++: void SetVaryRadius(int)\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {(char*)"GetVaryRadiusMinValue", PyvtkTubeFilter_GetVaryRadiusMinValue, 1,
   (char*)"V.GetVaryRadiusMinValue() -> int\nC++: int GetVaryRadiusMinValue()\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {(char*)"GetVaryRadiusMaxValue", PyvtkTubeFilter_GetVaryRadiusMaxValue, 1,
   (char*)"V.GetVaryRadiusMaxValue() -> int\nC++: int GetVaryRadiusMaxValue()\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {(char*)"GetVaryRadius", PyvtkTubeFilter_GetVaryRadius, 1,
   (char*)"V.GetVaryRadius() -> int\nC++: int GetVaryRadius()\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {(char*)"SetVaryRadiusToVaryRadiusOff", PyvtkTubeFilter_SetVaryRadiusToVaryRadiusOff, 1,
   (char*)"V.SetVaryRadiusToVaryRadiusOff()\nC++: void SetVaryRadiusToVaryRadiusOff()\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {(char*)"SetVaryRadiusToVaryRadiusByScalar", PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByScalar, 1,
   (char*)"V.SetVaryRadiusToVaryRadiusByScalar()\nC++: void SetVaryRadiusToVaryRadiusByScalar()\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {(char*)"SetVaryRadiusToVaryRadiusByVector", PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByVector, 1,
   (char*)"V.SetVaryRadiusToVaryRadiusByVector()\nC++: void SetVaryRadiusToVaryRadiusByVector()\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {(char*)"SetVaryRadiusToVaryRadiusByAbsoluteScalar", PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByAbsoluteScalar, 1,
   (char*)"V.SetVaryRadiusToVaryRadiusByAbsoluteScalar()\nC++: void SetVaryRadiusToVaryRadiusByAbsoluteScalar()\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {(char*)"GetVaryRadiusAsString", PyvtkTubeFilter_GetVaryRadiusAsString, 1,
   (char*)"V.GetVaryRadiusAsString() -> string\nC++: const char *GetVaryRadiusAsString()\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {(char*)"SetNumberOfSides", PyvtkTubeFilter_SetNumberOfSides, 1,
   (char*)"V.SetNumberOfSides(int)\nC++: void SetNumberOfSides(int)\n\nSet the number of sides for the tube. At a minimum, number of\nsides is 3.\n"},
  {(char*)"GetNumberOfSidesMinValue", PyvtkTubeFilter_GetNumberOfSidesMinValue, 1,
   (char*)"V.GetNumberOfSidesMinValue() -> int\nC++: int GetNumberOfSidesMinValue()\n\nSet the number of sides for the tube. At a minimum, number of\nsides is 3.\n"},
  {(char*)"GetNumberOfSidesMaxValue", PyvtkTubeFilter_GetNumberOfSidesMaxValue, 1,
   (char*)"V.GetNumberOfSidesMaxValue() -> int\nC++: int GetNumberOfSidesMaxValue()\n\nSet the number of sides for the tube. At a minimum, number of\nsides is 3.\n"},
  {(char*)"GetNumberOfSides", PyvtkTubeFilter_GetNumberOfSides, 1,
   (char*)"V.GetNumberOfSides() -> int\nC++: int GetNumberOfSides()\n\nSet the number of sides for the tube. At a minimum, number of\nsides is 3.\n"},
  {(char*)"SetRadiusFactor", PyvtkTubeFilter_SetRadiusFactor, 1,
   (char*)"V.SetRadiusFactor(float)\nC++: void SetRadiusFactor(double a)\n\nSet the maximum tube radius in terms of a multiple of the minimum\nradius.\n"},
  {(char*)"GetRadiusFactor", PyvtkTubeFilter_GetRadiusFactor, 1,
   (char*)"V.GetRadiusFactor() -> float\nC++: double GetRadiusFactor()\n\nSet the maximum tube radius in terms of a multiple of the minimum\nradius.\n"},
  {(char*)"SetDefaultNormal", PyvtkTubeFilter_SetDefaultNormal, 1,
   (char*)"V.SetDefaultNormal(float, float, float)\nC++: void SetDefaultNormal(double, double, double)\nV.SetDefaultNormal((float, float, float))\nC++: void SetDefaultNormal(double a[3])\n\n"},
  {(char*)"GetDefaultNormal", PyvtkTubeFilter_GetDefaultNormal, 1,
   (char*)"V.GetDefaultNormal() -> (float, float, float)\nC++: double *GetDefaultNormal()\n\nSet the default normal to use if no normals are supplied, and the\nDefaultNormalOn is set.\n"},
  {(char*)"SetUseDefaultNormal", PyvtkTubeFilter_SetUseDefaultNormal, 1,
   (char*)"V.SetUseDefaultNormal(int)\nC++: void SetUseDefaultNormal(int a)\n\nSet a boolean to control whether to use default normals.\nDefaultNormalOn is set.\n"},
  {(char*)"GetUseDefaultNormal", PyvtkTubeFilter_GetUseDefaultNormal, 1,
   (char*)"V.GetUseDefaultNormal() -> int\nC++: int GetUseDefaultNormal()\n\nSet a boolean to control whether to use default normals.\nDefaultNormalOn is set.\n"},
  {(char*)"UseDefaultNormalOn", PyvtkTubeFilter_UseDefaultNormalOn, 1,
   (char*)"V.UseDefaultNormalOn()\nC++: void UseDefaultNormalOn()\n\nSet a boolean to control whether to use default normals.\nDefaultNormalOn is set.\n"},
  {(char*)"UseDefaultNormalOff", PyvtkTubeFilter_UseDefaultNormalOff, 1,
   (char*)"V.UseDefaultNormalOff()\nC++: void UseDefaultNormalOff()\n\nSet a boolean to control whether to use default normals.\nDefaultNormalOn is set.\n"},
  {(char*)"SetSidesShareVertices", PyvtkTubeFilter_SetSidesShareVertices, 1,
   (char*)"V.SetSidesShareVertices(int)\nC++: void SetSidesShareVertices(int a)\n\nSet a boolean to control whether tube sides should share\nvertices. This creates independent strips, with constant normals\nso the tube is always faceted in appearance.\n"},
  {(char*)"GetSidesShareVertices", PyvtkTubeFilter_GetSidesShareVertices, 1,
   (char*)"V.GetSidesShareVertices() -> int\nC++: int GetSidesShareVertices()\n\nSet a boolean to control whether tube sides should share\nvertices. This creates independent strips, with constant normals\nso the tube is always faceted in appearance.\n"},
  {(char*)"SidesShareVerticesOn", PyvtkTubeFilter_SidesShareVerticesOn, 1,
   (char*)"V.SidesShareVerticesOn()\nC++: void SidesShareVerticesOn()\n\nSet a boolean to control whether tube sides should share\nvertices. This creates independent strips, with constant normals\nso the tube is always faceted in appearance.\n"},
  {(char*)"SidesShareVerticesOff", PyvtkTubeFilter_SidesShareVerticesOff, 1,
   (char*)"V.SidesShareVerticesOff()\nC++: void SidesShareVerticesOff()\n\nSet a boolean to control whether tube sides should share\nvertices. This creates independent strips, with constant normals\nso the tube is always faceted in appearance.\n"},
  {(char*)"SetCapping", PyvtkTubeFilter_SetCapping, 1,
   (char*)"V.SetCapping(int)\nC++: void SetCapping(int a)\n\nTurn on/off whether to cap the ends with polygons.\n"},
  {(char*)"GetCapping", PyvtkTubeFilter_GetCapping, 1,
   (char*)"V.GetCapping() -> int\nC++: int GetCapping()\n\nTurn on/off whether to cap the ends with polygons.\n"},
  {(char*)"CappingOn", PyvtkTubeFilter_CappingOn, 1,
   (char*)"V.CappingOn()\nC++: void CappingOn()\n\nTurn on/off whether to cap the ends with polygons.\n"},
  {(char*)"CappingOff", PyvtkTubeFilter_CappingOff, 1,
   (char*)"V.CappingOff()\nC++: void CappingOff()\n\nTurn on/off whether to cap the ends with polygons.\n"},
  {(char*)"SetOnRatio", PyvtkTubeFilter_SetOnRatio, 1,
   (char*)"V.SetOnRatio(int)\nC++: void SetOnRatio(int)\n\nControl the striping of the tubes. If OnRatio is greater than 1,\nthen every nth tube side is turned on, beginning with the Offset\nside.\n"},
  {(char*)"GetOnRatioMinValue", PyvtkTubeFilter_GetOnRatioMinValue, 1,
   (char*)"V.GetOnRatioMinValue() -> int\nC++: int GetOnRatioMinValue()\n\nControl the striping of the tubes. If OnRatio is greater than 1,\nthen every nth tube side is turned on, beginning with the Offset\nside.\n"},
  {(char*)"GetOnRatioMaxValue", PyvtkTubeFilter_GetOnRatioMaxValue, 1,
   (char*)"V.GetOnRatioMaxValue() -> int\nC++: int GetOnRatioMaxValue()\n\nControl the striping of the tubes. If OnRatio is greater than 1,\nthen every nth tube side is turned on, beginning with the Offset\nside.\n"},
  {(char*)"GetOnRatio", PyvtkTubeFilter_GetOnRatio, 1,
   (char*)"V.GetOnRatio() -> int\nC++: int GetOnRatio()\n\nControl the striping of the tubes. If OnRatio is greater than 1,\nthen every nth tube side is turned on, beginning with the Offset\nside.\n"},
  {(char*)"SetOffset", PyvtkTubeFilter_SetOffset, 1,
   (char*)"V.SetOffset(int)\nC++: void SetOffset(int)\n\nControl the striping of the tubes. The offset sets the first tube\nside that is visible. Offset is generally used with OnRatio to\ncreate nifty striping effects.\n"},
  {(char*)"GetOffsetMinValue", PyvtkTubeFilter_GetOffsetMinValue, 1,
   (char*)"V.GetOffsetMinValue() -> int\nC++: int GetOffsetMinValue()\n\nControl the striping of the tubes. The offset sets the first tube\nside that is visible. Offset is generally used with OnRatio to\ncreate nifty striping effects.\n"},
  {(char*)"GetOffsetMaxValue", PyvtkTubeFilter_GetOffsetMaxValue, 1,
   (char*)"V.GetOffsetMaxValue() -> int\nC++: int GetOffsetMaxValue()\n\nControl the striping of the tubes. The offset sets the first tube\nside that is visible. Offset is generally used with OnRatio to\ncreate nifty striping effects.\n"},
  {(char*)"GetOffset", PyvtkTubeFilter_GetOffset, 1,
   (char*)"V.GetOffset() -> int\nC++: int GetOffset()\n\nControl the striping of the tubes. The offset sets the first tube\nside that is visible. Offset is generally used with OnRatio to\ncreate nifty striping effects.\n"},
  {(char*)"SetGenerateTCoords", PyvtkTubeFilter_SetGenerateTCoords, 1,
   (char*)"V.SetGenerateTCoords(int)\nC++: void SetGenerateTCoords(int)\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {(char*)"GetGenerateTCoordsMinValue", PyvtkTubeFilter_GetGenerateTCoordsMinValue, 1,
   (char*)"V.GetGenerateTCoordsMinValue() -> int\nC++: int GetGenerateTCoordsMinValue()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {(char*)"GetGenerateTCoordsMaxValue", PyvtkTubeFilter_GetGenerateTCoordsMaxValue, 1,
   (char*)"V.GetGenerateTCoordsMaxValue() -> int\nC++: int GetGenerateTCoordsMaxValue()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {(char*)"GetGenerateTCoords", PyvtkTubeFilter_GetGenerateTCoords, 1,
   (char*)"V.GetGenerateTCoords() -> int\nC++: int GetGenerateTCoords()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {(char*)"SetGenerateTCoordsToOff", PyvtkTubeFilter_SetGenerateTCoordsToOff, 1,
   (char*)"V.SetGenerateTCoordsToOff()\nC++: void SetGenerateTCoordsToOff()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {(char*)"SetGenerateTCoordsToNormalizedLength", PyvtkTubeFilter_SetGenerateTCoordsToNormalizedLength, 1,
   (char*)"V.SetGenerateTCoordsToNormalizedLength()\nC++: void SetGenerateTCoordsToNormalizedLength()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {(char*)"SetGenerateTCoordsToUseLength", PyvtkTubeFilter_SetGenerateTCoordsToUseLength, 1,
   (char*)"V.SetGenerateTCoordsToUseLength()\nC++: void SetGenerateTCoordsToUseLength()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {(char*)"SetGenerateTCoordsToUseScalars", PyvtkTubeFilter_SetGenerateTCoordsToUseScalars, 1,
   (char*)"V.SetGenerateTCoordsToUseScalars()\nC++: void SetGenerateTCoordsToUseScalars()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {(char*)"GetGenerateTCoordsAsString", PyvtkTubeFilter_GetGenerateTCoordsAsString, 1,
   (char*)"V.GetGenerateTCoordsAsString() -> string\nC++: const char *GetGenerateTCoordsAsString()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {(char*)"SetTextureLength", PyvtkTubeFilter_SetTextureLength, 1,
   (char*)"V.SetTextureLength(float)\nC++: void SetTextureLength(double)\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {(char*)"GetTextureLengthMinValue", PyvtkTubeFilter_GetTextureLengthMinValue, 1,
   (char*)"V.GetTextureLengthMinValue() -> float\nC++: double GetTextureLengthMinValue()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {(char*)"GetTextureLengthMaxValue", PyvtkTubeFilter_GetTextureLengthMaxValue, 1,
   (char*)"V.GetTextureLengthMaxValue() -> float\nC++: double GetTextureLengthMaxValue()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {(char*)"GetTextureLength", PyvtkTubeFilter_GetTextureLength, 1,
   (char*)"V.GetTextureLength() -> float\nC++: double GetTextureLength()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTubeFilter_StaticNew()
{
  return vtkTubeFilter::New();
}

PyObject *PyVTKClass_vtkTubeFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTubeFilter_StaticNew,
    PyvtkTubeFilter_Methods,
    "vtkTubeFilter", modulename,
    NULL, NULL,
    PyvtkTubeFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTubeFilter_Doc()
{
  static const char *docstring[] = {
    "vtkTubeFilter - filter that generates tubes around lines\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkTubeFilter is a filter that generates a tube around each input\nline. The tubes are made up of triangle strips and rotate around the\ntube with the rotation of the line normals. (If no normals are\npresent, they are computed automatically.) The radius of the tube can\nbe set to vary with scalar or vector value. If the radius varies with\nscalar value the radius is linearly adjusted. If the radius va",
    "ries\nwith vector value, a mass flux preserving variation is used. The\nnumber of sides for the tube also can be specified. You can also\nspecify which of the sides are visible. This is useful for generating\ninteresting striping effects. Other options include the ability to\ncap the tube and generate texture coordinates. Texture coordinates\ncan be used with an associated texture map to create interest",
    "ing\neffects such as marking the tube with stripes corresponding to length\nor time.\n\nThis filter is typically used to create thick or dramatic lines.\nAnother common use is to combine this filter with vtkStreamLine to\ngenerate streamtubes.\n\nCaveats:\n\nThe number of tube sides must be greater than 3. If you wish to use\nfewer sides (i.e., a ribbon), use vtkRibbonFilter.\n\nThe input line must not have du",
    "plicate points, or normals at points\nthat are parallel to the incoming/outgoing line segments. (Duplicate\npoints can be removed with vtkCleanPolyData.) If a line does not meet\nthis criteria, then that line is not tubed.\n\nSee Also:\n\nvtkRibbonFilter vtkStreamLine\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTubeFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTubeFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTubeFilter", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VARY_RADIUS_OFF", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VARY_RADIUS_BY_SCALAR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VARY_RADIUS_BY_VECTOR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VARY_RADIUS_BY_ABSOLUTE_SCALAR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TCOORDS_OFF", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TCOORDS_FROM_NORMALIZED_LENGTH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TCOORDS_FROM_LENGTH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TCOORDS_FROM_SCALARS", o) != 0)
    {
    Py_DECREF(o);
    }

}

