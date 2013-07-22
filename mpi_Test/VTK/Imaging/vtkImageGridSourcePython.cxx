// python wrapper for vtkImageGridSource
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
#include "vtkImageGridSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageGridSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageGridSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageGridSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageGridSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageGridSource_Doc();


static PyObject *
PyvtkImageGridSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      tempr = op->vtkImageGridSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      tempr = op->vtkImageGridSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  vtkImageGridSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageGridSource::NewInstance();
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
PyvtkImageGridSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageGridSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageGridSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetGridSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetGridSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageGridSource::SetGridSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetGridSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGridSpacing(temp0);
      }
    else
      {
      op->vtkImageGridSource::SetGridSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetGridSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageGridSource_SetGridSpacing_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetGridSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGridSpacing");
  return NULL;
}



static PyObject *
PyvtkImageGridSource_GetGridSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGridSpacing();
      }
    else
      {
      tempr = op->vtkImageGridSource::GetGridSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetGridOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetGridOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageGridSource::SetGridOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetGridOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGridOrigin(temp0);
      }
    else
      {
      op->vtkImageGridSource::SetGridOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetGridOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageGridSource_SetGridOrigin_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetGridOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGridOrigin");
  return NULL;
}



static PyObject *
PyvtkImageGridSource_GetGridOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGridOrigin();
      }
    else
      {
      tempr = op->vtkImageGridSource::GetGridOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetLineValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineValue(temp0);
      }
    else
      {
      op->vtkImageGridSource::SetLineValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetLineValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineValue();
      }
    else
      {
      tempr = op->vtkImageGridSource::GetLineValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFillValue(temp0);
      }
    else
      {
      op->vtkImageGridSource::SetFillValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFillValue();
      }
    else
      {
      tempr = op->vtkImageGridSource::GetFillValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarType(temp0);
      }
    else
      {
      op->vtkImageGridSource::SetDataScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToDouble();
      }
    else
      {
      op->vtkImageGridSource::SetDataScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToInt();
      }
    else
      {
      op->vtkImageGridSource::SetDataScalarTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToShort();
      }
    else
      {
      op->vtkImageGridSource::SetDataScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkImageGridSource::SetDataScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkImageGridSource::SetDataScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataScalarType();
      }
    else
      {
      tempr = op->vtkImageGridSource::GetDataScalarType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetDataScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataScalarTypeAsString();
      }
    else
      {
      tempr = op->vtkImageGridSource::GetDataScalarTypeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageGridSource::SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDataExtent(temp0);
      }
    else
      {
      op->vtkImageGridSource::SetDataExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkImageGridSource_SetDataExtent_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetDataExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataExtent");
  return NULL;
}



static PyObject *
PyvtkImageGridSource_GetDataExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataExtent();
      }
    else
      {
      tempr = op->vtkImageGridSource::GetDataExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetDataSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageGridSource::SetDataSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDataSpacing(temp0);
      }
    else
      {
      op->vtkImageGridSource::SetDataSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageGridSource_SetDataSpacing_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetDataSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSpacing");
  return NULL;
}



static PyObject *
PyvtkImageGridSource_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataSpacing();
      }
    else
      {
      tempr = op->vtkImageGridSource::GetDataSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetDataOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageGridSource::SetDataOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDataOrigin(temp0);
      }
    else
      {
      op->vtkImageGridSource::SetDataOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageGridSource_SetDataOrigin_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetDataOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataOrigin");
  return NULL;
}



static PyObject *
PyvtkImageGridSource_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataOrigin();
      }
    else
      {
      tempr = op->vtkImageGridSource::GetDataOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageGridSource_Methods[] = {
  {(char*)"GetClassName", PyvtkImageGridSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageGridSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageGridSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageGridSource\nC++: vtkImageGridSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageGridSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageGridSource\nC++: vtkImageGridSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGridSpacing", PyvtkImageGridSource_SetGridSpacing, 1,
   (char*)"V.SetGridSpacing(int, int, int)\nC++: void SetGridSpacing(int, int, int)\nV.SetGridSpacing((int, int, int))\nC++: void SetGridSpacing(int a[3])\n\n"},
  {(char*)"GetGridSpacing", PyvtkImageGridSource_GetGridSpacing, 1,
   (char*)"V.GetGridSpacing() -> (int, int, int)\nC++: int *GetGridSpacing()\n\n"},
  {(char*)"SetGridOrigin", PyvtkImageGridSource_SetGridOrigin, 1,
   (char*)"V.SetGridOrigin(int, int, int)\nC++: void SetGridOrigin(int, int, int)\nV.SetGridOrigin((int, int, int))\nC++: void SetGridOrigin(int a[3])\n\n"},
  {(char*)"GetGridOrigin", PyvtkImageGridSource_GetGridOrigin, 1,
   (char*)"V.GetGridOrigin() -> (int, int, int)\nC++: int *GetGridOrigin()\n\n"},
  {(char*)"SetLineValue", PyvtkImageGridSource_SetLineValue, 1,
   (char*)"V.SetLineValue(float)\nC++: void SetLineValue(double a)\n\nSet the grey level of the lines. Default 1.0.\n"},
  {(char*)"GetLineValue", PyvtkImageGridSource_GetLineValue, 1,
   (char*)"V.GetLineValue() -> float\nC++: double GetLineValue()\n\nSet the grey level of the lines. Default 1.0.\n"},
  {(char*)"SetFillValue", PyvtkImageGridSource_SetFillValue, 1,
   (char*)"V.SetFillValue(float)\nC++: void SetFillValue(double a)\n\nSet the grey level of the fill. Default 0.0.\n"},
  {(char*)"GetFillValue", PyvtkImageGridSource_GetFillValue, 1,
   (char*)"V.GetFillValue() -> float\nC++: double GetFillValue()\n\nSet the grey level of the fill. Default 0.0.\n"},
  {(char*)"SetDataScalarType", PyvtkImageGridSource_SetDataScalarType, 1,
   (char*)"V.SetDataScalarType(int)\nC++: void SetDataScalarType(int a)\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {(char*)"SetDataScalarTypeToDouble", PyvtkImageGridSource_SetDataScalarTypeToDouble, 1,
   (char*)"V.SetDataScalarTypeToDouble()\nC++: void SetDataScalarTypeToDouble()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {(char*)"SetDataScalarTypeToInt", PyvtkImageGridSource_SetDataScalarTypeToInt, 1,
   (char*)"V.SetDataScalarTypeToInt()\nC++: void SetDataScalarTypeToInt()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {(char*)"SetDataScalarTypeToShort", PyvtkImageGridSource_SetDataScalarTypeToShort, 1,
   (char*)"V.SetDataScalarTypeToShort()\nC++: void SetDataScalarTypeToShort()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {(char*)"SetDataScalarTypeToUnsignedShort", PyvtkImageGridSource_SetDataScalarTypeToUnsignedShort, 1,
   (char*)"V.SetDataScalarTypeToUnsignedShort()\nC++: void SetDataScalarTypeToUnsignedShort()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {(char*)"SetDataScalarTypeToUnsignedChar", PyvtkImageGridSource_SetDataScalarTypeToUnsignedChar, 1,
   (char*)"V.SetDataScalarTypeToUnsignedChar()\nC++: void SetDataScalarTypeToUnsignedChar()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {(char*)"GetDataScalarType", PyvtkImageGridSource_GetDataScalarType, 1,
   (char*)"V.GetDataScalarType() -> int\nC++: int GetDataScalarType()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {(char*)"GetDataScalarTypeAsString", PyvtkImageGridSource_GetDataScalarTypeAsString, 1,
   (char*)"V.GetDataScalarTypeAsString() -> string\nC++: const char *GetDataScalarTypeAsString()\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {(char*)"SetDataExtent", PyvtkImageGridSource_SetDataExtent, 1,
   (char*)"V.SetDataExtent(int, int, int, int, int, int)\nC++: void SetDataExtent(int, int, int, int, int, int)\nV.SetDataExtent((int, int, int, int, int, int))\nC++: void SetDataExtent(int a[6])\n\n"},
  {(char*)"GetDataExtent", PyvtkImageGridSource_GetDataExtent, 1,
   (char*)"V.GetDataExtent() -> (int, int, int, int, int, int)\nC++: int *GetDataExtent()\n\n"},
  {(char*)"SetDataSpacing", PyvtkImageGridSource_SetDataSpacing, 1,
   (char*)"V.SetDataSpacing(float, float, float)\nC++: void SetDataSpacing(double, double, double)\nV.SetDataSpacing((float, float, float))\nC++: void SetDataSpacing(double a[3])\n\n"},
  {(char*)"GetDataSpacing", PyvtkImageGridSource_GetDataSpacing, 1,
   (char*)"V.GetDataSpacing() -> (float, float, float)\nC++: double *GetDataSpacing()\n\n"},
  {(char*)"SetDataOrigin", PyvtkImageGridSource_SetDataOrigin, 1,
   (char*)"V.SetDataOrigin(float, float, float)\nC++: void SetDataOrigin(double, double, double)\nV.SetDataOrigin((float, float, float))\nC++: void SetDataOrigin(double a[3])\n\n"},
  {(char*)"GetDataOrigin", PyvtkImageGridSource_GetDataOrigin, 1,
   (char*)"V.GetDataOrigin() -> (float, float, float)\nC++: double *GetDataOrigin()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageGridSource_StaticNew()
{
  return vtkImageGridSource::New();
}

PyObject *PyVTKClass_vtkImageGridSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageGridSource_StaticNew,
    PyvtkImageGridSource_Methods,
    "vtkImageGridSource", modulename,
    NULL, NULL,
    PyvtkImageGridSource_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageGridSource_Doc()
{
  static const char *docstring[] = {
    "vtkImageGridSource - Create an image of a grid.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageGridSource produces an image of a grid.  The default output\ntype is double.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageGridSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageGridSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageGridSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

