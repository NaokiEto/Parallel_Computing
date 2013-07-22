// python wrapper for vtkImageReader2
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
#include "vtkImageReader2.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageReader2(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageReader2(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageReader2New(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageReader2New(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageReader2_Doc();


static PyObject *
PyvtkImageReader2_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      tempr = op->vtkImageReader2::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      tempr = op->vtkImageReader2::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  vtkImageReader2 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageReader2::NewInstance();
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
PyvtkImageReader2_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageReader2 *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageReader2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkImageReader2::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkImageReader2::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetFileNames(temp0);
      }
    else
      {
      op->vtkImageReader2::SetFileNames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileNames();
      }
    else
      {
      tempr = op->vtkImageReader2::GetFileNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePrefix(temp0);
      }
    else
      {
      op->vtkImageReader2::SetFilePrefix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFilePrefix();
      }
    else
      {
      tempr = op->vtkImageReader2::GetFilePrefix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePattern(temp0);
      }
    else
      {
      op->vtkImageReader2::SetFilePattern(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFilePattern();
      }
    else
      {
      tempr = op->vtkImageReader2::GetFilePattern();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->vtkImageReader2::SetDataScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToFloat();
      }
    else
      {
      op->vtkImageReader2::SetDataScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToDouble();
      }
    else
      {
      op->vtkImageReader2::SetDataScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToInt();
      }
    else
      {
      op->vtkImageReader2::SetDataScalarTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkImageReader2::SetDataScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToShort();
      }
    else
      {
      op->vtkImageReader2::SetDataScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkImageReader2::SetDataScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToChar();
      }
    else
      {
      op->vtkImageReader2::SetDataScalarTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToSignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToSignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToSignedChar();
      }
    else
      {
      op->vtkImageReader2::SetDataScalarTypeToSignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkImageReader2::SetDataScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      tempr = op->vtkImageReader2::GetDataScalarType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfScalarComponents(temp0);
      }
    else
      {
      op->vtkImageReader2::SetNumberOfScalarComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfScalarComponents();
      }
    else
      {
      tempr = op->vtkImageReader2::GetNumberOfScalarComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->vtkImageReader2::SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReader2_SetDataExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->vtkImageReader2::SetDataExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReader2_SetDataExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkImageReader2_SetDataExtent_s1(self, args);
    case 1:
      return PyvtkImageReader2_SetDataExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataExtent");
  return NULL;
}



static PyObject *
PyvtkImageReader2_GetDataExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      tempr = op->vtkImageReader2::GetDataExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetFileDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileDimensionality(temp0);
      }
    else
      {
      op->vtkImageReader2::SetFileDimensionality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFileDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileDimensionality();
      }
    else
      {
      tempr = op->vtkImageReader2::GetFileDimensionality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->vtkImageReader2::SetDataSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReader2_SetDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->vtkImageReader2::SetDataSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReader2_SetDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageReader2_SetDataSpacing_s1(self, args);
    case 1:
      return PyvtkImageReader2_SetDataSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSpacing");
  return NULL;
}



static PyObject *
PyvtkImageReader2_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      tempr = op->vtkImageReader2::GetDataSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->vtkImageReader2::SetDataOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReader2_SetDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->vtkImageReader2::SetDataOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageReader2_SetDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageReader2_SetDataOrigin_s1(self, args);
    case 1:
      return PyvtkImageReader2_SetDataOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataOrigin");
  return NULL;
}



static PyObject *
PyvtkImageReader2_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      tempr = op->vtkImageReader2::GetDataOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetHeaderSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeaderSize();
      }
    else
      {
      tempr = op->vtkImageReader2::GetHeaderSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageReader2_GetHeaderSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  unsigned long temp0;
  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeaderSize(temp0);
      }
    else
      {
      tempr = op->vtkImageReader2::GetHeaderSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageReader2_GetHeaderSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageReader2_GetHeaderSize_s1(self, args);
    case 1:
      return PyvtkImageReader2_GetHeaderSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetHeaderSize");
  return NULL;
}



static PyObject *
PyvtkImageReader2_SetHeaderSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeaderSize(temp0);
      }
    else
      {
      op->vtkImageReader2::SetHeaderSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrderToBigEndian();
      }
    else
      {
      op->vtkImageReader2::SetDataByteOrderToBigEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrderToLittleEndian();
      }
    else
      {
      op->vtkImageReader2::SetDataByteOrderToLittleEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataByteOrder();
      }
    else
      {
      tempr = op->vtkImageReader2::GetDataByteOrder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrder(temp0);
      }
    else
      {
      op->vtkImageReader2::SetDataByteOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetDataByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataByteOrderAsString();
      }
    else
      {
      tempr = op->vtkImageReader2::GetDataByteOrderAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetFileNameSliceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameSliceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileNameSliceOffset(temp0);
      }
    else
      {
      op->vtkImageReader2::SetFileNameSliceOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFileNameSliceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameSliceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileNameSliceOffset();
      }
    else
      {
      tempr = op->vtkImageReader2::GetFileNameSliceOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetFileNameSliceSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameSliceSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileNameSliceSpacing(temp0);
      }
    else
      {
      op->vtkImageReader2::SetFileNameSliceSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFileNameSliceSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameSliceSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileNameSliceSpacing();
      }
    else
      {
      tempr = op->vtkImageReader2::GetFileNameSliceSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSwapBytes(temp0);
      }
    else
      {
      op->vtkImageReader2::SetSwapBytes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSwapBytes();
      }
    else
      {
      tempr = op->vtkImageReader2::GetSwapBytes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SwapBytesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwapBytesOn();
      }
    else
      {
      op->vtkImageReader2::SwapBytesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SwapBytesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwapBytesOff();
      }
    else
      {
      op->vtkImageReader2::SwapBytesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetDataIncrements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  unsigned long *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataIncrements();
      }
    else
      {
      tempr = op->vtkImageReader2::GetDataIncrements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_OpenFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->OpenFile();
      }
    else
      {
      tempr = op->vtkImageReader2::OpenFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SeekFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SeekFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->SeekFile(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageReader2::SeekFile(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_FileLowerLeftOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FileLowerLeftOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FileLowerLeftOn();
      }
    else
      {
      op->vtkImageReader2::FileLowerLeftOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_FileLowerLeftOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FileLowerLeftOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FileLowerLeftOff();
      }
    else
      {
      op->vtkImageReader2::FileLowerLeftOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFileLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileLowerLeft();
      }
    else
      {
      tempr = op->vtkImageReader2::GetFileLowerLeft();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_SetFileLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileLowerLeft(temp0);
      }
    else
      {
      op->vtkImageReader2::SetFileLowerLeft(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_ComputeInternalFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInternalFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ComputeInternalFileName(temp0);
      }
    else
      {
      op->vtkImageReader2::ComputeInternalFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetInternalFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInternalFileName();
      }
    else
      {
      tempr = op->vtkImageReader2::GetInternalFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->CanReadFile(temp0);
      }
    else
      {
      tempr = op->vtkImageReader2::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileExtensions();
      }
    else
      {
      tempr = op->vtkImageReader2::GetFileExtensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageReader2_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDescriptiveName();
      }
    else
      {
      tempr = op->vtkImageReader2::GetDescriptiveName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageReader2_Methods[] = {
  {(char*)"GetClassName", PyvtkImageReader2_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageReader2_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageReader2_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageReader2\nC++: vtkImageReader2 *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageReader2_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageReader2\nC++: vtkImageReader2 *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkImageReader2_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: virtual void SetFileName(const char *)\n\nSpecify file name for the image file. If the data is stored in\nmultiple files, then use SetFileNames or SetFilePrefix instead.\n"},
  {(char*)"GetFileName", PyvtkImageReader2_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name for the image file. If the data is stored in\nmultiple files, then use SetFileNames or SetFilePrefix instead.\n"},
  {(char*)"SetFileNames", PyvtkImageReader2_SetFileNames, 1,
   (char*)"V.SetFileNames(vtkStringArray)\nC++: virtual void SetFileNames(vtkStringArray *)\n\nSpecify a list of file names.  Each file must be a single slice,\nand each slice must be of the same size. The files must be in the\ncorrect order. Use SetFileName when reading a volume (multiple\nslice), since DataExtent will be modified after a SetFileNames\ncall.\n"},
  {(char*)"GetFileNames", PyvtkImageReader2_GetFileNames, 1,
   (char*)"V.GetFileNames() -> vtkStringArray\nC++: vtkStringArray *GetFileNames()\n\nSpecify a list of file names.  Each file must be a single slice,\nand each slice must be of the same size. The files must be in the\ncorrect order. Use SetFileName when reading a volume (multiple\nslice), since DataExtent will be modified after a SetFileNames\ncall.\n"},
  {(char*)"SetFilePrefix", PyvtkImageReader2_SetFilePrefix, 1,
   (char*)"V.SetFilePrefix(string)\nC++: virtual void SetFilePrefix(const char *)\n\nSpecify file prefix for the image file or files.  This can be\nused in place of SetFileName or SetFileNames if the filenames\nfollow a specific naming pattern, but you must explicitly set the\nDataExtent so that the reader will know what range of slices to\nload.\n"},
  {(char*)"GetFilePrefix", PyvtkImageReader2_GetFilePrefix, 1,
   (char*)"V.GetFilePrefix() -> string\nC++: char *GetFilePrefix()\n\nSpecify file prefix for the image file or files.  This can be\nused in place of SetFileName or SetFileNames if the filenames\nfollow a specific naming pattern, but you must explicitly set the\nDataExtent so that the reader will know what range of slices to\nload.\n"},
  {(char*)"SetFilePattern", PyvtkImageReader2_SetFilePattern, 1,
   (char*)"V.SetFilePattern(string)\nC++: virtual void SetFilePattern(const char *)\n\nThe sprintf-style format string used to build filename from\nFilePrefix and slice number.\n"},
  {(char*)"GetFilePattern", PyvtkImageReader2_GetFilePattern, 1,
   (char*)"V.GetFilePattern() -> string\nC++: char *GetFilePattern()\n\nThe sprintf-style format string used to build filename from\nFilePrefix and slice number.\n"},
  {(char*)"SetDataScalarType", PyvtkImageReader2_SetDataScalarType, 1,
   (char*)"V.SetDataScalarType(int)\nC++: virtual void SetDataScalarType(int type)\n\nSet the data type of pixels in the file. If you want the output\nscalar type to have a different value, set it after this method\nis called.\n"},
  {(char*)"SetDataScalarTypeToFloat", PyvtkImageReader2_SetDataScalarTypeToFloat, 1,
   (char*)"V.SetDataScalarTypeToFloat()\nC++: virtual void SetDataScalarTypeToFloat()\n\nSet the data type of pixels in the file. If you want the output\nscalar type to have a different value, set it after this method\nis called.\n"},
  {(char*)"SetDataScalarTypeToDouble", PyvtkImageReader2_SetDataScalarTypeToDouble, 1,
   (char*)"V.SetDataScalarTypeToDouble()\nC++: virtual void SetDataScalarTypeToDouble()\n\nSet the data type of pixels in the file. If you want the output\nscalar type to have a different value, set it after this method\nis called.\n"},
  {(char*)"SetDataScalarTypeToInt", PyvtkImageReader2_SetDataScalarTypeToInt, 1,
   (char*)"V.SetDataScalarTypeToInt()\nC++: virtual void SetDataScalarTypeToInt()\n\nSet the data type of pixels in the file. If you want the output\nscalar type to have a different value, set it after this method\nis called.\n"},
  {(char*)"SetDataScalarTypeToUnsignedInt", PyvtkImageReader2_SetDataScalarTypeToUnsignedInt, 1,
   (char*)"V.SetDataScalarTypeToUnsignedInt()\nC++: virtual void SetDataScalarTypeToUnsignedInt()\n\nSet the data type of pixels in the file. If you want the output\nscalar type to have a different value, set it after this method\nis called.\n"},
  {(char*)"SetDataScalarTypeToShort", PyvtkImageReader2_SetDataScalarTypeToShort, 1,
   (char*)"V.SetDataScalarTypeToShort()\nC++: virtual void SetDataScalarTypeToShort()\n\nSet the data type of pixels in the file. If you want the output\nscalar type to have a different value, set it after this method\nis called.\n"},
  {(char*)"SetDataScalarTypeToUnsignedShort", PyvtkImageReader2_SetDataScalarTypeToUnsignedShort, 1,
   (char*)"V.SetDataScalarTypeToUnsignedShort()\nC++: virtual void SetDataScalarTypeToUnsignedShort()\n\nSet the data type of pixels in the file. If you want the output\nscalar type to have a different value, set it after this method\nis called.\n"},
  {(char*)"SetDataScalarTypeToChar", PyvtkImageReader2_SetDataScalarTypeToChar, 1,
   (char*)"V.SetDataScalarTypeToChar()\nC++: virtual void SetDataScalarTypeToChar()\n\nSet the data type of pixels in the file. If you want the output\nscalar type to have a different value, set it after this method\nis called.\n"},
  {(char*)"SetDataScalarTypeToSignedChar", PyvtkImageReader2_SetDataScalarTypeToSignedChar, 1,
   (char*)"V.SetDataScalarTypeToSignedChar()\nC++: virtual void SetDataScalarTypeToSignedChar()\n\nSet the data type of pixels in the file. If you want the output\nscalar type to have a different value, set it after this method\nis called.\n"},
  {(char*)"SetDataScalarTypeToUnsignedChar", PyvtkImageReader2_SetDataScalarTypeToUnsignedChar, 1,
   (char*)"V.SetDataScalarTypeToUnsignedChar()\nC++: virtual void SetDataScalarTypeToUnsignedChar()\n\nSet the data type of pixels in the file. If you want the output\nscalar type to have a different value, set it after this method\nis called.\n"},
  {(char*)"GetDataScalarType", PyvtkImageReader2_GetDataScalarType, 1,
   (char*)"V.GetDataScalarType() -> int\nC++: int GetDataScalarType()\n\nGet the file format.  Pixels are this type in the file.\n"},
  {(char*)"SetNumberOfScalarComponents", PyvtkImageReader2_SetNumberOfScalarComponents, 1,
   (char*)"V.SetNumberOfScalarComponents(int)\nC++: void SetNumberOfScalarComponents(int a)\n\nSet/Get the number of scalar components\n"},
  {(char*)"GetNumberOfScalarComponents", PyvtkImageReader2_GetNumberOfScalarComponents, 1,
   (char*)"V.GetNumberOfScalarComponents() -> int\nC++: int GetNumberOfScalarComponents()\n\nSet/Get the number of scalar components\n"},
  {(char*)"SetDataExtent", PyvtkImageReader2_SetDataExtent, 1,
   (char*)"V.SetDataExtent(int, int, int, int, int, int)\nC++: void SetDataExtent(int, int, int, int, int, int)\nV.SetDataExtent((int, int, int, int, int, int))\nC++: void SetDataExtent(int a[6])\n\n"},
  {(char*)"GetDataExtent", PyvtkImageReader2_GetDataExtent, 1,
   (char*)"V.GetDataExtent() -> (int, int, int, int, int, int)\nC++: int *GetDataExtent()\n\n"},
  {(char*)"SetFileDimensionality", PyvtkImageReader2_SetFileDimensionality, 1,
   (char*)"V.SetFileDimensionality(int)\nC++: void SetFileDimensionality(int a)\n\nThe number of dimensions stored in a file. This defaults to two.\n"},
  {(char*)"GetFileDimensionality", PyvtkImageReader2_GetFileDimensionality, 1,
   (char*)"V.GetFileDimensionality() -> int\nC++: int GetFileDimensionality()\n\nThe number of dimensions stored in a file. This defaults to two.\n"},
  {(char*)"SetDataSpacing", PyvtkImageReader2_SetDataSpacing, 1,
   (char*)"V.SetDataSpacing(float, float, float)\nC++: void SetDataSpacing(double, double, double)\nV.SetDataSpacing((float, float, float))\nC++: void SetDataSpacing(double a[3])\n\n"},
  {(char*)"GetDataSpacing", PyvtkImageReader2_GetDataSpacing, 1,
   (char*)"V.GetDataSpacing() -> (float, float, float)\nC++: double *GetDataSpacing()\n\n"},
  {(char*)"SetDataOrigin", PyvtkImageReader2_SetDataOrigin, 1,
   (char*)"V.SetDataOrigin(float, float, float)\nC++: void SetDataOrigin(double, double, double)\nV.SetDataOrigin((float, float, float))\nC++: void SetDataOrigin(double a[3])\n\n"},
  {(char*)"GetDataOrigin", PyvtkImageReader2_GetDataOrigin, 1,
   (char*)"V.GetDataOrigin() -> (float, float, float)\nC++: double *GetDataOrigin()\n\n"},
  {(char*)"GetHeaderSize", PyvtkImageReader2_GetHeaderSize, 1,
   (char*)"V.GetHeaderSize() -> int\nC++: unsigned long GetHeaderSize()\nV.GetHeaderSize(int) -> int\nC++: unsigned long GetHeaderSize(unsigned long slice)\n\nGet the size of the header computed by this object.\n"},
  {(char*)"SetHeaderSize", PyvtkImageReader2_SetHeaderSize, 1,
   (char*)"V.SetHeaderSize(int)\nC++: virtual void SetHeaderSize(unsigned long size)\n\nIf there is a tail on the file, you want to explicitly set the\nheader size.\n"},
  {(char*)"SetDataByteOrderToBigEndian", PyvtkImageReader2_SetDataByteOrderToBigEndian, 1,
   (char*)"V.SetDataByteOrderToBigEndian()\nC++: virtual void SetDataByteOrderToBigEndian()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"SetDataByteOrderToLittleEndian", PyvtkImageReader2_SetDataByteOrderToLittleEndian, 1,
   (char*)"V.SetDataByteOrderToLittleEndian()\nC++: virtual void SetDataByteOrderToLittleEndian()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"GetDataByteOrder", PyvtkImageReader2_GetDataByteOrder, 1,
   (char*)"V.GetDataByteOrder() -> int\nC++: virtual int GetDataByteOrder()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"SetDataByteOrder", PyvtkImageReader2_SetDataByteOrder, 1,
   (char*)"V.SetDataByteOrder(int)\nC++: virtual void SetDataByteOrder(int)\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"GetDataByteOrderAsString", PyvtkImageReader2_GetDataByteOrderAsString, 1,
   (char*)"V.GetDataByteOrderAsString() -> string\nC++: virtual const char *GetDataByteOrderAsString()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"SetFileNameSliceOffset", PyvtkImageReader2_SetFileNameSliceOffset, 1,
   (char*)"V.SetFileNameSliceOffset(int)\nC++: void SetFileNameSliceOffset(int a)\n\nWhen reading files which start at an unusual index, this can be\nadded to the slice number when generating the file name (default\n= 0)\n"},
  {(char*)"GetFileNameSliceOffset", PyvtkImageReader2_GetFileNameSliceOffset, 1,
   (char*)"V.GetFileNameSliceOffset() -> int\nC++: int GetFileNameSliceOffset()\n\nWhen reading files which start at an unusual index, this can be\nadded to the slice number when generating the file name (default\n= 0)\n"},
  {(char*)"SetFileNameSliceSpacing", PyvtkImageReader2_SetFileNameSliceSpacing, 1,
   (char*)"V.SetFileNameSliceSpacing(int)\nC++: void SetFileNameSliceSpacing(int a)\n\nWhen reading files which have regular, but non contiguous slices\n(eg filename.1,filename.3,filename.5) a spacing can be specified\nto skip missing files (default = 1)\n"},
  {(char*)"GetFileNameSliceSpacing", PyvtkImageReader2_GetFileNameSliceSpacing, 1,
   (char*)"V.GetFileNameSliceSpacing() -> int\nC++: int GetFileNameSliceSpacing()\n\nWhen reading files which have regular, but non contiguous slices\n(eg filename.1,filename.3,filename.5) a spacing can be specified\nto skip missing files (default = 1)\n"},
  {(char*)"SetSwapBytes", PyvtkImageReader2_SetSwapBytes, 1,
   (char*)"V.SetSwapBytes(int)\nC++: void SetSwapBytes(int a)\n\nSet/Get the byte swapping to explicitly swap the bytes of a file.\n"},
  {(char*)"GetSwapBytes", PyvtkImageReader2_GetSwapBytes, 1,
   (char*)"V.GetSwapBytes() -> int\nC++: virtual int GetSwapBytes()\n\nSet/Get the byte swapping to explicitly swap the bytes of a file.\n"},
  {(char*)"SwapBytesOn", PyvtkImageReader2_SwapBytesOn, 1,
   (char*)"V.SwapBytesOn()\nC++: void SwapBytesOn()\n\nSet/Get the byte swapping to explicitly swap the bytes of a file.\n"},
  {(char*)"SwapBytesOff", PyvtkImageReader2_SwapBytesOff, 1,
   (char*)"V.SwapBytesOff()\nC++: void SwapBytesOff()\n\nSet/Get the byte swapping to explicitly swap the bytes of a file.\n"},
  {(char*)"GetDataIncrements", PyvtkImageReader2_GetDataIncrements, 1,
   (char*)"V.GetDataIncrements() -> (int, int, int, int)\nC++: unsigned long *GetDataIncrements()\n\n"},
  {(char*)"OpenFile", PyvtkImageReader2_OpenFile, 1,
   (char*)"V.OpenFile() -> int\nC++: virtual int OpenFile()\n\n"},
  {(char*)"SeekFile", PyvtkImageReader2_SeekFile, 1,
   (char*)"V.SeekFile(int, int, int)\nC++: virtual void SeekFile(int i, int j, int k)\n\n"},
  {(char*)"FileLowerLeftOn", PyvtkImageReader2_FileLowerLeftOn, 1,
   (char*)"V.FileLowerLeftOn()\nC++: void FileLowerLeftOn()\n\nSet/Get whether the data comes from the file starting in the\nlower left corner or upper left corner.\n"},
  {(char*)"FileLowerLeftOff", PyvtkImageReader2_FileLowerLeftOff, 1,
   (char*)"V.FileLowerLeftOff()\nC++: void FileLowerLeftOff()\n\nSet/Get whether the data comes from the file starting in the\nlower left corner or upper left corner.\n"},
  {(char*)"GetFileLowerLeft", PyvtkImageReader2_GetFileLowerLeft, 1,
   (char*)"V.GetFileLowerLeft() -> int\nC++: int GetFileLowerLeft()\n\nSet/Get whether the data comes from the file starting in the\nlower left corner or upper left corner.\n"},
  {(char*)"SetFileLowerLeft", PyvtkImageReader2_SetFileLowerLeft, 1,
   (char*)"V.SetFileLowerLeft(int)\nC++: void SetFileLowerLeft(int a)\n\nSet/Get whether the data comes from the file starting in the\nlower left corner or upper left corner.\n"},
  {(char*)"ComputeInternalFileName", PyvtkImageReader2_ComputeInternalFileName, 1,
   (char*)"V.ComputeInternalFileName(int)\nC++: virtual void ComputeInternalFileName(int slice)\n\nSet/Get the internal file name\n"},
  {(char*)"GetInternalFileName", PyvtkImageReader2_GetInternalFileName, 1,
   (char*)"V.GetInternalFileName() -> string\nC++: char *GetInternalFileName()\n\nSet/Get the internal file name\n"},
  {(char*)"CanReadFile", PyvtkImageReader2_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *fname)\n\nReturn non zero if the reader can read the given file name.\nShould be implemented by all sub-classes of vtkImageReader2. For\nnon zero return values the following values are to be used\n  1 - I think I can read the file but I cannot prove it\n  2 - I definitely can read the file\n  3 - I can read the file and I have validated that I am the\n      correct reader for this file\n"},
  {(char*)"GetFileExtensions", PyvtkImageReader2_GetFileExtensions, 1,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nGet the file extensions for this format. Returns a string with a\nspace separated list of extensions in the format .extension\n"},
  {(char*)"GetDescriptiveName", PyvtkImageReader2_GetDescriptiveName, 1,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nReturn a descriptive name for the file format that might be\nuseful in a GUI.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageReader2_StaticNew()
{
  return vtkImageReader2::New();
}

PyObject *PyVTKClass_vtkImageReader2New(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageReader2_StaticNew,
    PyvtkImageReader2_Methods,
    "vtkImageReader2", modulename,
    NULL, NULL,
    PyvtkImageReader2_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageReader2_Doc()
{
  static const char *docstring[] = {
    "vtkImageReader2 - Superclass of binary file readers.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageReader2 is the parent class for vtkImageReader.  It is a good\nsuper class for streaming readers that do not require a mask or\ntransform on the data.  vtkImageReader was implemented before\nvtkImageReader2, vtkImageReader2 is intended to have a simpler\ninterface.\n\nSee Also:\n\nvtkJPEGReader vtkPNGReader vtkImageReader vtkGESignaReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageReader2(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageReader2New(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageReader2", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_FILE_BYTE_ORDER_BIG_ENDIAN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_FILE_BYTE_ORDER_LITTLE_ENDIAN", o) != 0)
    {
    Py_DECREF(o);
    }

}

