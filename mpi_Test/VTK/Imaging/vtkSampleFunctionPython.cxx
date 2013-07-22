// python wrapper for vtkSampleFunction
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
#include "vtkSampleFunction.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSampleFunction(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSampleFunction(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSampleFunctionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSampleFunctionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkSampleFunction_Doc();


static PyObject *
PyvtkSampleFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      tempr = op->vtkSampleFunction::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      tempr = op->vtkSampleFunction::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  vtkSampleFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSampleFunction::NewInstance();
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
PyvtkSampleFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSampleFunction *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSampleFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      op->vtkSampleFunction::SetImplicitFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_GetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      tempr = op->vtkSampleFunction::GetImplicitFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      op->vtkSampleFunction::SetOutputScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      tempr = op->vtkSampleFunction::GetOutputScalarType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToDouble();
      }
    else
      {
      op->vtkSampleFunction::SetOutputScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToFloat();
      }
    else
      {
      op->vtkSampleFunction::SetOutputScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetOutputScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToLong();
      }
    else
      {
      op->vtkSampleFunction::SetOutputScalarTypeToLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetOutputScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedLong();
      }
    else
      {
      op->vtkSampleFunction::SetOutputScalarTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetOutputScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToInt();
      }
    else
      {
      op->vtkSampleFunction::SetOutputScalarTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetOutputScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkSampleFunction::SetOutputScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetOutputScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToShort();
      }
    else
      {
      op->vtkSampleFunction::SetOutputScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetOutputScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkSampleFunction::SetOutputScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetOutputScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToChar();
      }
    else
      {
      op->vtkSampleFunction::SetOutputScalarTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetOutputScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkSampleFunction::SetOutputScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetScalars(temp0);
      }
    else
      {
      op->vtkSampleFunction::SetScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetSampleDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      op->vtkSampleFunction::SetSampleDimensions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSampleFunction_SetSampleDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      op->vtkSampleFunction::SetSampleDimensions(temp0);
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
PyvtkSampleFunction_SetSampleDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSampleFunction_SetSampleDimensions_s1(self, args);
    case 1:
      return PyvtkSampleFunction_SetSampleDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleDimensions");
  return NULL;
}



static PyObject *
PyvtkSampleFunction_GetSampleDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      tempr = op->vtkSampleFunction::GetSampleDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      op->vtkSampleFunction::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSampleFunction_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      op->vtkSampleFunction::SetModelBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSampleFunction_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkSampleFunction_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkSampleFunction_SetModelBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return NULL;
}



static PyObject *
PyvtkSampleFunction_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      tempr = op->vtkSampleFunction::GetModelBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      op->vtkSampleFunction::SetCapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      tempr = op->vtkSampleFunction::GetCapping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOn();
      }
    else
      {
      op->vtkSampleFunction::CappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOff();
      }
    else
      {
      op->vtkSampleFunction::CappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetCapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      op->vtkSampleFunction::SetCapValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_GetCapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      tempr = op->vtkSampleFunction::GetCapValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeNormals(temp0);
      }
    else
      {
      op->vtkSampleFunction::SetComputeNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeNormals();
      }
    else
      {
      tempr = op->vtkSampleFunction::GetComputeNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNormalsOn();
      }
    else
      {
      op->vtkSampleFunction::ComputeNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeNormalsOff();
      }
    else
      {
      op->vtkSampleFunction::ComputeNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarArrayName(temp0);
      }
    else
      {
      op->vtkSampleFunction::SetScalarArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_GetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarArrayName();
      }
    else
      {
      tempr = op->vtkSampleFunction::GetScalarArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_SetNormalArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalArrayName(temp0);
      }
    else
      {
      op->vtkSampleFunction::SetNormalArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_GetNormalArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalArrayName();
      }
    else
      {
      tempr = op->vtkSampleFunction::GetNormalArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSampleFunction_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSampleFunction *op = static_cast<vtkSampleFunction *>(vp);

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
      tempr = op->vtkSampleFunction::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSampleFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkSampleFunction_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSampleFunction_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSampleFunction_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSampleFunction\nC++: vtkSampleFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSampleFunction_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSampleFunction\nC++: vtkSampleFunction *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetImplicitFunction", PyvtkSampleFunction_SetImplicitFunction, 1,
   (char*)"V.SetImplicitFunction(vtkImplicitFunction)\nC++: virtual void SetImplicitFunction(vtkImplicitFunction *)\n\nSpecify the implicit function to use to generate data.\n"},
  {(char*)"GetImplicitFunction", PyvtkSampleFunction_GetImplicitFunction, 1,
   (char*)"V.GetImplicitFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetImplicitFunction()\n\nSpecify the implicit function to use to generate data.\n"},
  {(char*)"SetOutputScalarType", PyvtkSampleFunction_SetOutputScalarType, 1,
   (char*)"V.SetOutputScalarType(int)\nC++: void SetOutputScalarType(int a)\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"GetOutputScalarType", PyvtkSampleFunction_GetOutputScalarType, 1,
   (char*)"V.GetOutputScalarType() -> int\nC++: int GetOutputScalarType()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToDouble", PyvtkSampleFunction_SetOutputScalarTypeToDouble, 1,
   (char*)"V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToFloat", PyvtkSampleFunction_SetOutputScalarTypeToFloat, 1,
   (char*)"V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToLong", PyvtkSampleFunction_SetOutputScalarTypeToLong, 1,
   (char*)"V.SetOutputScalarTypeToLong()\nC++: void SetOutputScalarTypeToLong()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedLong", PyvtkSampleFunction_SetOutputScalarTypeToUnsignedLong, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedLong()\nC++: void SetOutputScalarTypeToUnsignedLong()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToInt", PyvtkSampleFunction_SetOutputScalarTypeToInt, 1,
   (char*)"V.SetOutputScalarTypeToInt()\nC++: void SetOutputScalarTypeToInt()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedInt", PyvtkSampleFunction_SetOutputScalarTypeToUnsignedInt, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedInt()\nC++: void SetOutputScalarTypeToUnsignedInt()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToShort", PyvtkSampleFunction_SetOutputScalarTypeToShort, 1,
   (char*)"V.SetOutputScalarTypeToShort()\nC++: void SetOutputScalarTypeToShort()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedShort", PyvtkSampleFunction_SetOutputScalarTypeToUnsignedShort, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedShort()\nC++: void SetOutputScalarTypeToUnsignedShort()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToChar", PyvtkSampleFunction_SetOutputScalarTypeToChar, 1,
   (char*)"V.SetOutputScalarTypeToChar()\nC++: void SetOutputScalarTypeToChar()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedChar", PyvtkSampleFunction_SetOutputScalarTypeToUnsignedChar, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedChar()\nC++: void SetOutputScalarTypeToUnsignedChar()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetScalars", PyvtkSampleFunction_SetScalars, 1,
   (char*)"V.SetScalars(vtkDataArray)\nC++: virtual void SetScalars(vtkDataArray *da)\n\nControl the type of the scalars object by explicitly providing a\nscalar object.  THIS IS DEPRECATED, although it still works!!!\nPlease use SetOutputScalarType instead.\n"},
  {(char*)"SetSampleDimensions", PyvtkSampleFunction_SetSampleDimensions, 1,
   (char*)"V.SetSampleDimensions(int, int, int)\nC++: void SetSampleDimensions(int i, int j, int k)\nV.SetSampleDimensions([int, int, int])\nC++: void SetSampleDimensions(int dim[3])\n\nSpecify the dimensions of the data on which to sample.\n"},
  {(char*)"GetSampleDimensions", PyvtkSampleFunction_GetSampleDimensions, 1,
   (char*)"V.GetSampleDimensions() -> (int, int, int)\nC++: int *GetSampleDimensions()\n\nSpecify the dimensions of the data on which to sample.\n"},
  {(char*)"SetModelBounds", PyvtkSampleFunction_SetModelBounds, 1,
   (char*)"V.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double, double, double, double, double,\n    double)\nV.SetModelBounds((float, float, float, float, float, float))\nC++: void SetModelBounds(double a[6])\n\n"},
  {(char*)"GetModelBounds", PyvtkSampleFunction_GetModelBounds, 1,
   (char*)"V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\nSpecify the region in space over which the sampling occurs. The\nbounds is specified as (xMin,xMax, yMin,yMax, zMin,zMax).\n"},
  {(char*)"SetCapping", PyvtkSampleFunction_SetCapping, 1,
   (char*)"V.SetCapping(int)\nC++: void SetCapping(int a)\n\nTurn on/off capping. If capping is on, then the outer boundaries\nof the structured point set are set to cap value. This can be\nused to insure surfaces are closed.\n"},
  {(char*)"GetCapping", PyvtkSampleFunction_GetCapping, 1,
   (char*)"V.GetCapping() -> int\nC++: int GetCapping()\n\nTurn on/off capping. If capping is on, then the outer boundaries\nof the structured point set are set to cap value. This can be\nused to insure surfaces are closed.\n"},
  {(char*)"CappingOn", PyvtkSampleFunction_CappingOn, 1,
   (char*)"V.CappingOn()\nC++: void CappingOn()\n\nTurn on/off capping. If capping is on, then the outer boundaries\nof the structured point set are set to cap value. This can be\nused to insure surfaces are closed.\n"},
  {(char*)"CappingOff", PyvtkSampleFunction_CappingOff, 1,
   (char*)"V.CappingOff()\nC++: void CappingOff()\n\nTurn on/off capping. If capping is on, then the outer boundaries\nof the structured point set are set to cap value. This can be\nused to insure surfaces are closed.\n"},
  {(char*)"SetCapValue", PyvtkSampleFunction_SetCapValue, 1,
   (char*)"V.SetCapValue(float)\nC++: void SetCapValue(double a)\n\nSet the cap value.\n"},
  {(char*)"GetCapValue", PyvtkSampleFunction_GetCapValue, 1,
   (char*)"V.GetCapValue() -> float\nC++: double GetCapValue()\n\nSet the cap value.\n"},
  {(char*)"SetComputeNormals", PyvtkSampleFunction_SetComputeNormals, 1,
   (char*)"V.SetComputeNormals(int)\nC++: void SetComputeNormals(int a)\n\nTurn on/off the computation of normals (normals are float\nvalues).\n"},
  {(char*)"GetComputeNormals", PyvtkSampleFunction_GetComputeNormals, 1,
   (char*)"V.GetComputeNormals() -> int\nC++: int GetComputeNormals()\n\nTurn on/off the computation of normals (normals are float\nvalues).\n"},
  {(char*)"ComputeNormalsOn", PyvtkSampleFunction_ComputeNormalsOn, 1,
   (char*)"V.ComputeNormalsOn()\nC++: void ComputeNormalsOn()\n\nTurn on/off the computation of normals (normals are float\nvalues).\n"},
  {(char*)"ComputeNormalsOff", PyvtkSampleFunction_ComputeNormalsOff, 1,
   (char*)"V.ComputeNormalsOff()\nC++: void ComputeNormalsOff()\n\nTurn on/off the computation of normals (normals are float\nvalues).\n"},
  {(char*)"SetScalarArrayName", PyvtkSampleFunction_SetScalarArrayName, 1,
   (char*)"V.SetScalarArrayName(string)\nC++: void SetScalarArrayName(char *)\n\nSet/get the scalar array name for this data set. Initial value is\n\"scalars\".\n"},
  {(char*)"GetScalarArrayName", PyvtkSampleFunction_GetScalarArrayName, 1,
   (char*)"V.GetScalarArrayName() -> string\nC++: char *GetScalarArrayName()\n\nSet/get the scalar array name for this data set. Initial value is\n\"scalars\".\n"},
  {(char*)"SetNormalArrayName", PyvtkSampleFunction_SetNormalArrayName, 1,
   (char*)"V.SetNormalArrayName(string)\nC++: void SetNormalArrayName(char *)\n\nSet/get the normal array name for this data set. Initial value is\n\"normals\".\n"},
  {(char*)"GetNormalArrayName", PyvtkSampleFunction_GetNormalArrayName, 1,
   (char*)"V.GetNormalArrayName() -> string\nC++: char *GetNormalArrayName()\n\nSet/get the normal array name for this data set. Initial value is\n\"normals\".\n"},
  {(char*)"GetMTime", PyvtkSampleFunction_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the implicit function.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSampleFunction_StaticNew()
{
  return vtkSampleFunction::New();
}

PyObject *PyVTKClass_vtkSampleFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSampleFunction_StaticNew,
    PyvtkSampleFunction_Methods,
    "vtkSampleFunction", modulename,
    NULL, NULL,
    PyvtkSampleFunction_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSampleFunction_Doc()
{
  static const char *docstring[] = {
    "vtkSampleFunction - sample an implicit function over a structured\npoint set\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkSampleFunction is a source object that evaluates an implicit\nfunction and normals at each point in a vtkStructuredPoints. The user\ncan specify the sample dimensions and location in space to perform\nthe sampling. To create closed surfaces (in conjunction with the\nvtkContourFilter), capping can be turned on to set a particular value\non the boundaries of the sample space.\n\nSee Also:\n\nvtkImplicitMo",
    "deller\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSampleFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSampleFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSampleFunction", o) != 0)
    {
    Py_DECREF(o);
    }

}

