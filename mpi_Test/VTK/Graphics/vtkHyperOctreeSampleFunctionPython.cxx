// python wrapper for vtkHyperOctreeSampleFunction
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
#include "vtkHyperOctreeSampleFunction.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHyperOctreeSampleFunction(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHyperOctreeSampleFunction(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHyperOctreeSampleFunctionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHyperOctreeSampleFunctionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkHyperOctreeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkHyperOctreeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkHyperOctreeAlgorithmNew
#endif

static const char **PyvtkHyperOctreeSampleFunction_Doc();


static PyObject *
PyvtkHyperOctreeSampleFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

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
      tempr = op->vtkHyperOctreeSampleFunction::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

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
      tempr = op->vtkHyperOctreeSampleFunction::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  vtkHyperOctreeSampleFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHyperOctreeSampleFunction::NewInstance();
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
PyvtkHyperOctreeSampleFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHyperOctreeSampleFunction *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHyperOctreeSampleFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLevels();
      }
    else
      {
      tempr = op->vtkHyperOctreeSampleFunction::GetLevels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevels(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetLevels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetMinLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinLevels();
      }
    else
      {
      tempr = op->vtkHyperOctreeSampleFunction::GetMinLevels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetMinLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinLevels(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetMinLevels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThreshold();
      }
    else
      {
      tempr = op->vtkHyperOctreeSampleFunction::GetThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThreshold(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimension();
      }
    else
      {
      tempr = op->vtkHyperOctreeSampleFunction::GetDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDimension(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

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
      op->SetSize(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeSampleFunction_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeSampleFunction_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkHyperOctreeSampleFunction_SetSize_s1(self, args);
    case 1:
      return PyvtkHyperOctreeSampleFunction_SetSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return NULL;
}



static PyObject *
PyvtkHyperOctreeSampleFunction_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSize();
      }
    else
      {
      tempr = op->vtkHyperOctreeSampleFunction::GetSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeSampleFunction_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHyperOctreeSampleFunction_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkHyperOctreeSampleFunction_SetOrigin_s1(self, args);
    case 1:
      return PyvtkHyperOctreeSampleFunction_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkHyperOctreeSampleFunction_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrigin();
      }
    else
      {
      tempr = op->vtkHyperOctreeSampleFunction::GetOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidth();
      }
    else
      {
      tempr = op->vtkHyperOctreeSampleFunction::GetWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWidth(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeight();
      }
    else
      {
      tempr = op->vtkHyperOctreeSampleFunction::GetHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeight(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDepth();
      }
    else
      {
      tempr = op->vtkHyperOctreeSampleFunction::GetDepth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepth(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetDepth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetImplicitFunction(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetImplicitFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  vtkImplicitFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImplicitFunction();
      }
    else
      {
      tempr = op->vtkHyperOctreeSampleFunction::GetImplicitFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarType(temp0);
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputScalarType();
      }
    else
      {
      tempr = op->vtkHyperOctreeSampleFunction::GetOutputScalarType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToDouble();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToFloat();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToLong();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedLong();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToInt();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToShort();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToChar();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkHyperOctreeSampleFunction::SetOutputScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSampleFunction_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSampleFunction *op = static_cast<vtkHyperOctreeSampleFunction *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkHyperOctreeSampleFunction::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperOctreeSampleFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperOctreeSampleFunction_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperOctreeSampleFunction_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperOctreeSampleFunction_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHyperOctreeSampleFunction\nC++: vtkHyperOctreeSampleFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperOctreeSampleFunction_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperOctreeSampleFunction\nC++: vtkHyperOctreeSampleFunction *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetLevels", PyvtkHyperOctreeSampleFunction_GetLevels, 1,
   (char*)"V.GetLevels() -> int\nC++: int GetLevels()\n\nReturn the maximum number of levels of the hyperoctree.\n\\post positive_result: result>=1\n"},
  {(char*)"SetLevels", PyvtkHyperOctreeSampleFunction_SetLevels, 1,
   (char*)"V.SetLevels(int)\nC++: void SetLevels(int levels)\n\nSet the maximum number of levels of the hyperoctree. If\nGetMinLevels()>=levels, GetMinLevels() is changed to levels-1.\n\\pre positive_levels: levels>=1\n\\post is_set: this->GetLevels()==levels\n\\post min_is_valid: this->GetMinLevels()<this->GetLevels()\n"},
  {(char*)"GetMinLevels", PyvtkHyperOctreeSampleFunction_GetMinLevels, 1,
   (char*)"V.GetMinLevels() -> int\nC++: int GetMinLevels()\n\nReturn the minimal number of levels of systematic subdivision.\n\\post positive_result: result>=0\n"},
  {(char*)"SetMinLevels", PyvtkHyperOctreeSampleFunction_SetMinLevels, 1,
   (char*)"V.SetMinLevels(int)\nC++: void SetMinLevels(int minLevels)\n\nSet the minimal number of levels of systematic subdivision.\n\\pre positive_minLevels: minLevels>=0\n\\post is_set: this->GetMinLevels()==minLevels\n"},
  {(char*)"GetThreshold", PyvtkHyperOctreeSampleFunction_GetThreshold, 1,
   (char*)"V.GetThreshold() -> float\nC++: double GetThreshold()\n\nReturn the threshold over which a subdivision is required.\n\\post positive_result: result>0\n"},
  {(char*)"SetThreshold", PyvtkHyperOctreeSampleFunction_SetThreshold, 1,
   (char*)"V.SetThreshold(float)\nC++: void SetThreshold(double threshold)\n\nSet the threshold over which a subdivision is required.\n\\pre positive_threshold: threshold>=0\n\\post is_set: this->GetThreshold()==threshold\n"},
  {(char*)"GetDimension", PyvtkHyperOctreeSampleFunction_GetDimension, 1,
   (char*)"V.GetDimension() -> int\nC++: int GetDimension()\n\nReturn the dimension of the tree (1D:binary tree(2 children),\n2D:quadtree(4 children), 3D:octree (8 children))\n\\post valid_result: result>=1 && result<=3\n"},
  {(char*)"SetDimension", PyvtkHyperOctreeSampleFunction_SetDimension, 1,
   (char*)"V.SetDimension(int)\nC++: void SetDimension(int dim)\n\n"},
  {(char*)"SetSize", PyvtkHyperOctreeSampleFunction_SetSize, 1,
   (char*)"V.SetSize(float, float, float)\nC++: void SetSize(double, double, double)\nV.SetSize((float, float, float))\nC++: void SetSize(double a[3])\n\n"},
  {(char*)"GetSize", PyvtkHyperOctreeSampleFunction_GetSize, 1,
   (char*)"V.GetSize() -> (float, float, float)\nC++: double *GetSize()\n\n"},
  {(char*)"SetOrigin", PyvtkHyperOctreeSampleFunction_SetOrigin, 1,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {(char*)"GetOrigin", PyvtkHyperOctreeSampleFunction_GetOrigin, 1,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {(char*)"GetWidth", PyvtkHyperOctreeSampleFunction_GetWidth, 1,
   (char*)"V.GetWidth() -> float\nC++: double GetWidth()\n\nReturn the length along the x-axis.\n\\post positive_result: result>0\n"},
  {(char*)"SetWidth", PyvtkHyperOctreeSampleFunction_SetWidth, 1,
   (char*)"V.SetWidth(float)\nC++: void SetWidth(double width)\n\nSet the length along the x-axis.\n\\pre positive_width: width>0\n\\post width_is_set: GetWidth()==width\n"},
  {(char*)"GetHeight", PyvtkHyperOctreeSampleFunction_GetHeight, 1,
   (char*)"V.GetHeight() -> float\nC++: double GetHeight()\n\nReturn the length along the y-axis. Relevant only if\nGetDimension()>=2\n\\post positive_result: result>0\n"},
  {(char*)"SetHeight", PyvtkHyperOctreeSampleFunction_SetHeight, 1,
   (char*)"V.SetHeight(float)\nC++: void SetHeight(double height)\n\nSet the length along the y-axis. Relevant only if\nGetDimension()>=2\n\\pre positive_height: height>0\n\\post height_is_set: GetHeight()==height\n"},
  {(char*)"GetDepth", PyvtkHyperOctreeSampleFunction_GetDepth, 1,
   (char*)"V.GetDepth() -> float\nC++: double GetDepth()\n\nReturn the length along the z-axis. Relevant only if\nGetDimension()>=3\n\\post positive_result: result>0\n"},
  {(char*)"SetDepth", PyvtkHyperOctreeSampleFunction_SetDepth, 1,
   (char*)"V.SetDepth(float)\nC++: void SetDepth(double depth)\n\nReturn the length along the z-axis. Relevant only if\nGetDimension()>=3\n\\pre positive_depth: depth>0\n\\post depth_is_set: GetDepth()==depth\n"},
  {(char*)"SetImplicitFunction", PyvtkHyperOctreeSampleFunction_SetImplicitFunction, 1,
   (char*)"V.SetImplicitFunction(vtkImplicitFunction)\nC++: virtual void SetImplicitFunction(vtkImplicitFunction *)\n\nSpecify the implicit function to use to generate data.\n"},
  {(char*)"GetImplicitFunction", PyvtkHyperOctreeSampleFunction_GetImplicitFunction, 1,
   (char*)"V.GetImplicitFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetImplicitFunction()\n\nSpecify the implicit function to use to generate data.\n"},
  {(char*)"SetOutputScalarType", PyvtkHyperOctreeSampleFunction_SetOutputScalarType, 1,
   (char*)"V.SetOutputScalarType(int)\nC++: void SetOutputScalarType(int a)\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"GetOutputScalarType", PyvtkHyperOctreeSampleFunction_GetOutputScalarType, 1,
   (char*)"V.GetOutputScalarType() -> int\nC++: int GetOutputScalarType()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToDouble", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToDouble, 1,
   (char*)"V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToFloat", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToFloat, 1,
   (char*)"V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToLong", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToLong, 1,
   (char*)"V.SetOutputScalarTypeToLong()\nC++: void SetOutputScalarTypeToLong()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedLong", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToUnsignedLong, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedLong()\nC++: void SetOutputScalarTypeToUnsignedLong()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToInt", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToInt, 1,
   (char*)"V.SetOutputScalarTypeToInt()\nC++: void SetOutputScalarTypeToInt()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedInt", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToUnsignedInt, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedInt()\nC++: void SetOutputScalarTypeToUnsignedInt()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToShort", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToShort, 1,
   (char*)"V.SetOutputScalarTypeToShort()\nC++: void SetOutputScalarTypeToShort()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedShort", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToUnsignedShort, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedShort()\nC++: void SetOutputScalarTypeToUnsignedShort()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToChar", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToChar, 1,
   (char*)"V.SetOutputScalarTypeToChar()\nC++: void SetOutputScalarTypeToChar()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedChar", PyvtkHyperOctreeSampleFunction_SetOutputScalarTypeToUnsignedChar, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedChar()\nC++: void SetOutputScalarTypeToUnsignedChar()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"GetMTime", PyvtkHyperOctreeSampleFunction_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the implicit function.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperOctreeSampleFunction_StaticNew()
{
  return vtkHyperOctreeSampleFunction::New();
}

PyObject *PyVTKClass_vtkHyperOctreeSampleFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperOctreeSampleFunction_StaticNew,
    PyvtkHyperOctreeSampleFunction_Methods,
    "vtkHyperOctreeSampleFunction", modulename,
    NULL, NULL,
    PyvtkHyperOctreeSampleFunction_Doc(),
    PyVTKClass_vtkHyperOctreeAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHyperOctreeSampleFunction_Doc()
{
  static const char *docstring[] = {
    "vtkHyperOctreeSampleFunction - sample an implicit function over an\n\n",
    "Superclass: vtkHyperOctreeAlgorithm\n\n",
    "vtkHyperOctreeSampleFunction is a source object that evaluates an\nimplicit function to drive the subdivision process. The user can\nspecify the threshold over which a subdivision occurs, the maximum\nand minimum level of subdivisions and the dimension of the\nhyperoctree.\n\nSee Also:\n\nvtkSampleFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperOctreeSampleFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperOctreeSampleFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperOctreeSampleFunction", o) != 0)
    {
    Py_DECREF(o);
    }

}

