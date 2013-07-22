// python wrapper for vtkImageEllipsoidSource
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
#include "vtkImageEllipsoidSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageEllipsoidSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageEllipsoidSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageEllipsoidSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageEllipsoidSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageEllipsoidSource_Doc();


static PyObject *
PyvtkImageEllipsoidSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

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
      tempr = op->vtkImageEllipsoidSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

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
      tempr = op->vtkImageEllipsoidSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  vtkImageEllipsoidSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageEllipsoidSource::NewInstance();
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
PyvtkImageEllipsoidSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageEllipsoidSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageEllipsoidSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

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
      op->SetWholeExtent(temp0);
      }
    else
      {
      op->vtkImageEllipsoidSource::SetWholeExtent(temp0);
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
PyvtkImageEllipsoidSource_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

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
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageEllipsoidSource::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageEllipsoidSource_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageEllipsoidSource_SetWholeExtent_s1(self, args);
    case 6:
      return PyvtkImageEllipsoidSource_SetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return NULL;
}



static PyObject *
PyvtkImageEllipsoidSource_GetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

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
      op->GetWholeExtent(temp0);
      }
    else
      {
      op->vtkImageEllipsoidSource::GetWholeExtent(temp0);
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
PyvtkImageEllipsoidSource_GetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWholeExtent();
      }
    else
      {
      tempr = op->vtkImageEllipsoidSource::GetWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImageEllipsoidSource_GetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageEllipsoidSource_GetWholeExtent_s1(self, args);
    case 0:
      return PyvtkImageEllipsoidSource_GetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetWholeExtent");
  return NULL;
}



static PyObject *
PyvtkImageEllipsoidSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageEllipsoidSource::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageEllipsoidSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkImageEllipsoidSource::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageEllipsoidSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageEllipsoidSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkImageEllipsoidSource_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkImageEllipsoidSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCenter();
      }
    else
      {
      tempr = op->vtkImageEllipsoidSource::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_SetRadius_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

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
      op->SetRadius(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageEllipsoidSource::SetRadius(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageEllipsoidSource_SetRadius_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkImageEllipsoidSource::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageEllipsoidSource_SetRadius(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageEllipsoidSource_SetRadius_s1(self, args);
    case 1:
      return PyvtkImageEllipsoidSource_SetRadius_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRadius");
  return NULL;
}



static PyObject *
PyvtkImageEllipsoidSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadius();
      }
    else
      {
      tempr = op->vtkImageEllipsoidSource::GetRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_SetInValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInValue(temp0);
      }
    else
      {
      op->vtkImageEllipsoidSource::SetInValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_GetInValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInValue();
      }
    else
      {
      tempr = op->vtkImageEllipsoidSource::GetInValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_SetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutValue(temp0);
      }
    else
      {
      op->vtkImageEllipsoidSource::SetOutValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_GetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutValue();
      }
    else
      {
      tempr = op->vtkImageEllipsoidSource::GetOutValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

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
      op->vtkImageEllipsoidSource::SetOutputScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

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
      tempr = op->vtkImageEllipsoidSource::GetOutputScalarType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToFloat();
      }
    else
      {
      op->vtkImageEllipsoidSource::SetOutputScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToDouble();
      }
    else
      {
      op->vtkImageEllipsoidSource::SetOutputScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_SetOutputScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToLong();
      }
    else
      {
      op->vtkImageEllipsoidSource::SetOutputScalarTypeToLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_SetOutputScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedLong();
      }
    else
      {
      op->vtkImageEllipsoidSource::SetOutputScalarTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_SetOutputScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToInt();
      }
    else
      {
      op->vtkImageEllipsoidSource::SetOutputScalarTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_SetOutputScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkImageEllipsoidSource::SetOutputScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_SetOutputScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToShort();
      }
    else
      {
      op->vtkImageEllipsoidSource::SetOutputScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_SetOutputScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkImageEllipsoidSource::SetOutputScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_SetOutputScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToChar();
      }
    else
      {
      op->vtkImageEllipsoidSource::SetOutputScalarTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageEllipsoidSource_SetOutputScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageEllipsoidSource *op = static_cast<vtkImageEllipsoidSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkImageEllipsoidSource::SetOutputScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageEllipsoidSource_Methods[] = {
  {(char*)"GetClassName", PyvtkImageEllipsoidSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageEllipsoidSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageEllipsoidSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageEllipsoidSource\nC++: vtkImageEllipsoidSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageEllipsoidSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageEllipsoidSource\nC++: vtkImageEllipsoidSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWholeExtent", PyvtkImageEllipsoidSource_SetWholeExtent, 1,
   (char*)"V.SetWholeExtent([int, int, int, int, int, int])\nC++: void SetWholeExtent(int extent[6])\nV.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int minX, int maxX, int minY, int maxY,\n    int minZ, int maxZ)\n\nSet/Get the extent of the whole output image.\n"},
  {(char*)"GetWholeExtent", PyvtkImageEllipsoidSource_GetWholeExtent, 1,
   (char*)"V.GetWholeExtent([int, int, int, int, int, int])\nC++: void GetWholeExtent(int extent[6])\nV.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\nSet/Get the extent of the whole output image.\n"},
  {(char*)"SetCenter", PyvtkImageEllipsoidSource_SetCenter, 1,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkImageEllipsoidSource_GetCenter, 1,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {(char*)"SetRadius", PyvtkImageEllipsoidSource_SetRadius, 1,
   (char*)"V.SetRadius(float, float, float)\nC++: void SetRadius(double, double, double)\nV.SetRadius((float, float, float))\nC++: void SetRadius(double a[3])\n\n"},
  {(char*)"GetRadius", PyvtkImageEllipsoidSource_GetRadius, 1,
   (char*)"V.GetRadius() -> (float, float, float)\nC++: double *GetRadius()\n\n"},
  {(char*)"SetInValue", PyvtkImageEllipsoidSource_SetInValue, 1,
   (char*)"V.SetInValue(float)\nC++: void SetInValue(double a)\n\nSet/Get the inside pixel values.\n"},
  {(char*)"GetInValue", PyvtkImageEllipsoidSource_GetInValue, 1,
   (char*)"V.GetInValue() -> float\nC++: double GetInValue()\n\nSet/Get the inside pixel values.\n"},
  {(char*)"SetOutValue", PyvtkImageEllipsoidSource_SetOutValue, 1,
   (char*)"V.SetOutValue(float)\nC++: void SetOutValue(double a)\n\nSet/Get the outside pixel values.\n"},
  {(char*)"GetOutValue", PyvtkImageEllipsoidSource_GetOutValue, 1,
   (char*)"V.GetOutValue() -> float\nC++: double GetOutValue()\n\nSet/Get the outside pixel values.\n"},
  {(char*)"SetOutputScalarType", PyvtkImageEllipsoidSource_SetOutputScalarType, 1,
   (char*)"V.SetOutputScalarType(int)\nC++: void SetOutputScalarType(int a)\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"GetOutputScalarType", PyvtkImageEllipsoidSource_GetOutputScalarType, 1,
   (char*)"V.GetOutputScalarType() -> int\nC++: int GetOutputScalarType()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToFloat", PyvtkImageEllipsoidSource_SetOutputScalarTypeToFloat, 1,
   (char*)"V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToDouble", PyvtkImageEllipsoidSource_SetOutputScalarTypeToDouble, 1,
   (char*)"V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToLong", PyvtkImageEllipsoidSource_SetOutputScalarTypeToLong, 1,
   (char*)"V.SetOutputScalarTypeToLong()\nC++: void SetOutputScalarTypeToLong()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedLong", PyvtkImageEllipsoidSource_SetOutputScalarTypeToUnsignedLong, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedLong()\nC++: void SetOutputScalarTypeToUnsignedLong()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToInt", PyvtkImageEllipsoidSource_SetOutputScalarTypeToInt, 1,
   (char*)"V.SetOutputScalarTypeToInt()\nC++: void SetOutputScalarTypeToInt()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedInt", PyvtkImageEllipsoidSource_SetOutputScalarTypeToUnsignedInt, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedInt()\nC++: void SetOutputScalarTypeToUnsignedInt()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToShort", PyvtkImageEllipsoidSource_SetOutputScalarTypeToShort, 1,
   (char*)"V.SetOutputScalarTypeToShort()\nC++: void SetOutputScalarTypeToShort()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedShort", PyvtkImageEllipsoidSource_SetOutputScalarTypeToUnsignedShort, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedShort()\nC++: void SetOutputScalarTypeToUnsignedShort()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToChar", PyvtkImageEllipsoidSource_SetOutputScalarTypeToChar, 1,
   (char*)"V.SetOutputScalarTypeToChar()\nC++: void SetOutputScalarTypeToChar()\n\nSet what type of scalar data this source should generate.\n"},
  {(char*)"SetOutputScalarTypeToUnsignedChar", PyvtkImageEllipsoidSource_SetOutputScalarTypeToUnsignedChar, 1,
   (char*)"V.SetOutputScalarTypeToUnsignedChar()\nC++: void SetOutputScalarTypeToUnsignedChar()\n\nSet what type of scalar data this source should generate.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageEllipsoidSource_StaticNew()
{
  return vtkImageEllipsoidSource::New();
}

PyObject *PyVTKClass_vtkImageEllipsoidSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageEllipsoidSource_StaticNew,
    PyvtkImageEllipsoidSource_Methods,
    "vtkImageEllipsoidSource", modulename,
    NULL, NULL,
    PyvtkImageEllipsoidSource_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageEllipsoidSource_Doc()
{
  static const char *docstring[] = {
    "vtkImageEllipsoidSource - Create a binary image of an ellipsoid.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageEllipsoidSource creates a binary image of a ellipsoid.  It\nwas created as an example of a simple source, and to test the mask\nfilter. It is also used internally in vtkImageDilateErode3D.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageEllipsoidSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageEllipsoidSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageEllipsoidSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

