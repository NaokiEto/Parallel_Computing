// python wrapper for vtkMCubesReader
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
#include "vtkMCubesReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMCubesReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMCubesReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMCubesReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMCubesReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkMCubesReader_Doc();


static PyObject *
PyvtkMCubesReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

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
      tempr = op->vtkMCubesReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

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
      tempr = op->vtkMCubesReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  vtkMCubesReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMCubesReader::NewInstance();
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
PyvtkMCubesReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMCubesReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMCubesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

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
      op->vtkMCubesReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

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
      tempr = op->vtkMCubesReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetLimitsFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitsFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLimitsFileName(temp0);
      }
    else
      {
      op->vtkMCubesReader::SetLimitsFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetLimitsFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLimitsFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLimitsFileName();
      }
    else
      {
      tempr = op->vtkMCubesReader::GetLimitsFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetHeaderSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int temp0;
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
      op->vtkMCubesReader::SetHeaderSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetHeaderSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeaderSizeMinValue();
      }
    else
      {
      tempr = op->vtkMCubesReader::GetHeaderSizeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetHeaderSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeaderSizeMaxValue();
      }
    else
      {
      tempr = op->vtkMCubesReader::GetHeaderSizeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetHeaderSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeaderSize();
      }
    else
      {
      tempr = op->vtkMCubesReader::GetHeaderSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetFlipNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFlipNormals(temp0);
      }
    else
      {
      op->vtkMCubesReader::SetFlipNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetFlipNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFlipNormals();
      }
    else
      {
      tempr = op->vtkMCubesReader::GetFlipNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_FlipNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlipNormalsOn();
      }
    else
      {
      op->vtkMCubesReader::FlipNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_FlipNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlipNormalsOff();
      }
    else
      {
      op->vtkMCubesReader::FlipNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormals(temp0);
      }
    else
      {
      op->vtkMCubesReader::SetNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormals();
      }
    else
      {
      tempr = op->vtkMCubesReader::GetNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_NormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalsOn();
      }
    else
      {
      op->vtkMCubesReader::NormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_NormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalsOff();
      }
    else
      {
      op->vtkMCubesReader::NormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetDataByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrderToBigEndian();
      }
    else
      {
      op->vtkMCubesReader::SetDataByteOrderToBigEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetDataByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrderToLittleEndian();
      }
    else
      {
      op->vtkMCubesReader::SetDataByteOrderToLittleEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

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
      tempr = op->vtkMCubesReader::GetDataByteOrder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

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
      op->vtkMCubesReader::SetDataByteOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetDataByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

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
      tempr = op->vtkMCubesReader::GetDataByteOrderAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

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
      op->vtkMCubesReader::SetSwapBytes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

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
      tempr = op->vtkMCubesReader::GetSwapBytes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SwapBytesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwapBytesOn();
      }
    else
      {
      op->vtkMCubesReader::SwapBytesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SwapBytesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwapBytesOff();
      }
    else
      {
      op->vtkMCubesReader::SwapBytesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkMCubesReader::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  vtkIncrementalPointLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLocator();
      }
    else
      {
      tempr = op->vtkMCubesReader::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkMCubesReader::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

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
      tempr = op->vtkMCubesReader::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMCubesReader_Methods[] = {
  {(char*)"GetClassName", PyvtkMCubesReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMCubesReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMCubesReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMCubesReader\nC++: vtkMCubesReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMCubesReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMCubesReader\nC++: vtkMCubesReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkMCubesReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of marching cubes file.\n"},
  {(char*)"GetFileName", PyvtkMCubesReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of marching cubes file.\n"},
  {(char*)"SetLimitsFileName", PyvtkMCubesReader_SetLimitsFileName, 1,
   (char*)"V.SetLimitsFileName(string)\nC++: void SetLimitsFileName(char *)\n\nSet / get the file name of the marching cubes limits file.\n"},
  {(char*)"GetLimitsFileName", PyvtkMCubesReader_GetLimitsFileName, 1,
   (char*)"V.GetLimitsFileName() -> string\nC++: char *GetLimitsFileName()\n\nSet / get the file name of the marching cubes limits file.\n"},
  {(char*)"SetHeaderSize", PyvtkMCubesReader_SetHeaderSize, 1,
   (char*)"V.SetHeaderSize(int)\nC++: void SetHeaderSize(int)\n\nSpecify a header size if one exists. The header is skipped and\nnot used at this time.\n"},
  {(char*)"GetHeaderSizeMinValue", PyvtkMCubesReader_GetHeaderSizeMinValue, 1,
   (char*)"V.GetHeaderSizeMinValue() -> int\nC++: int GetHeaderSizeMinValue()\n\nSpecify a header size if one exists. The header is skipped and\nnot used at this time.\n"},
  {(char*)"GetHeaderSizeMaxValue", PyvtkMCubesReader_GetHeaderSizeMaxValue, 1,
   (char*)"V.GetHeaderSizeMaxValue() -> int\nC++: int GetHeaderSizeMaxValue()\n\nSpecify a header size if one exists. The header is skipped and\nnot used at this time.\n"},
  {(char*)"GetHeaderSize", PyvtkMCubesReader_GetHeaderSize, 1,
   (char*)"V.GetHeaderSize() -> int\nC++: int GetHeaderSize()\n\nSpecify a header size if one exists. The header is skipped and\nnot used at this time.\n"},
  {(char*)"SetFlipNormals", PyvtkMCubesReader_SetFlipNormals, 1,
   (char*)"V.SetFlipNormals(int)\nC++: void SetFlipNormals(int a)\n\nSpecify whether to flip normals in opposite direction. Flipping\nONLY changes the direction of the normal vector. Contrast this\nwith flipping in vtkPolyDataNormals which flips both the normal\nand the cell point order.\n"},
  {(char*)"GetFlipNormals", PyvtkMCubesReader_GetFlipNormals, 1,
   (char*)"V.GetFlipNormals() -> int\nC++: int GetFlipNormals()\n\nSpecify whether to flip normals in opposite direction. Flipping\nONLY changes the direction of the normal vector. Contrast this\nwith flipping in vtkPolyDataNormals which flips both the normal\nand the cell point order.\n"},
  {(char*)"FlipNormalsOn", PyvtkMCubesReader_FlipNormalsOn, 1,
   (char*)"V.FlipNormalsOn()\nC++: void FlipNormalsOn()\n\nSpecify whether to flip normals in opposite direction. Flipping\nONLY changes the direction of the normal vector. Contrast this\nwith flipping in vtkPolyDataNormals which flips both the normal\nand the cell point order.\n"},
  {(char*)"FlipNormalsOff", PyvtkMCubesReader_FlipNormalsOff, 1,
   (char*)"V.FlipNormalsOff()\nC++: void FlipNormalsOff()\n\nSpecify whether to flip normals in opposite direction. Flipping\nONLY changes the direction of the normal vector. Contrast this\nwith flipping in vtkPolyDataNormals which flips both the normal\nand the cell point order.\n"},
  {(char*)"SetNormals", PyvtkMCubesReader_SetNormals, 1,
   (char*)"V.SetNormals(int)\nC++: void SetNormals(int a)\n\nSpecify whether to read normals.\n"},
  {(char*)"GetNormals", PyvtkMCubesReader_GetNormals, 1,
   (char*)"V.GetNormals() -> int\nC++: int GetNormals()\n\nSpecify whether to read normals.\n"},
  {(char*)"NormalsOn", PyvtkMCubesReader_NormalsOn, 1,
   (char*)"V.NormalsOn()\nC++: void NormalsOn()\n\nSpecify whether to read normals.\n"},
  {(char*)"NormalsOff", PyvtkMCubesReader_NormalsOff, 1,
   (char*)"V.NormalsOff()\nC++: void NormalsOff()\n\nSpecify whether to read normals.\n"},
  {(char*)"SetDataByteOrderToBigEndian", PyvtkMCubesReader_SetDataByteOrderToBigEndian, 1,
   (char*)"V.SetDataByteOrderToBigEndian()\nC++: void SetDataByteOrderToBigEndian()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"SetDataByteOrderToLittleEndian", PyvtkMCubesReader_SetDataByteOrderToLittleEndian, 1,
   (char*)"V.SetDataByteOrderToLittleEndian()\nC++: void SetDataByteOrderToLittleEndian()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"GetDataByteOrder", PyvtkMCubesReader_GetDataByteOrder, 1,
   (char*)"V.GetDataByteOrder() -> int\nC++: int GetDataByteOrder()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"SetDataByteOrder", PyvtkMCubesReader_SetDataByteOrder, 1,
   (char*)"V.SetDataByteOrder(int)\nC++: void SetDataByteOrder(int)\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"GetDataByteOrderAsString", PyvtkMCubesReader_GetDataByteOrderAsString, 1,
   (char*)"V.GetDataByteOrderAsString() -> string\nC++: const char *GetDataByteOrderAsString()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {(char*)"SetSwapBytes", PyvtkMCubesReader_SetSwapBytes, 1,
   (char*)"V.SetSwapBytes(int)\nC++: void SetSwapBytes(int a)\n\nTurn on/off byte swapping.\n"},
  {(char*)"GetSwapBytes", PyvtkMCubesReader_GetSwapBytes, 1,
   (char*)"V.GetSwapBytes() -> int\nC++: int GetSwapBytes()\n\nTurn on/off byte swapping.\n"},
  {(char*)"SwapBytesOn", PyvtkMCubesReader_SwapBytesOn, 1,
   (char*)"V.SwapBytesOn()\nC++: void SwapBytesOn()\n\nTurn on/off byte swapping.\n"},
  {(char*)"SwapBytesOff", PyvtkMCubesReader_SwapBytesOff, 1,
   (char*)"V.SwapBytesOff()\nC++: void SwapBytesOff()\n\nTurn on/off byte swapping.\n"},
  {(char*)"SetLocator", PyvtkMCubesReader_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkMCubesReader_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkMCubesReader_CreateDefaultLocator, 1,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {(char*)"GetMTime", PyvtkMCubesReader_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the mtime also considering the locator.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMCubesReader_StaticNew()
{
  return vtkMCubesReader::New();
}

PyObject *PyVTKClass_vtkMCubesReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMCubesReader_StaticNew,
    PyvtkMCubesReader_Methods,
    "vtkMCubesReader", modulename,
    NULL, NULL,
    PyvtkMCubesReader_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMCubesReader_Doc()
{
  static const char *docstring[] = {
    "vtkMCubesReader - read binary marching cubes file\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkMCubesReader is a source object that reads binary marching cubes\nfiles. (Marching cubes is an isosurfacing technique that generates\nmany triangles.) The binary format is supported by W. Lorensen's\nmarching cubes program (and the vtkSliceCubes object). The format\nrepeats point coordinates, so this object will merge the points with\na vtkLocator object. You can choose to supply the vtkLocator or u",
    "se\nthe default.\n\nCaveats:\n\nBinary files assumed written in sun/hp/sgi (i.e., Big Endian) form.\n\nBecause points are merged when read, degenerate triangles may be\nremoved. Thus the number of triangles read may be fewer than the\nnumber of triangles actually created.\n\nThe point merging does not take into account that the same point may\nhave different normals. For example, running vtkPolyDataNormals af",
    "ter\nvtkContourFilter may split triangles because of the FeatureAngle\nivar. Subsequent reading with vtkMCubesReader will merge the points\nand use the first point's normal. For the most part, this is\nundesirable.\n\nNormals are generated from the gradient of the data scalar values.\nHence the normals may on occasion point in a direction inconsistent\nwith the ordering of the triangle vertices. If this h",
    "appens, the\nresulting surface may be \"black\".  Reverse the sense of the\nFlipNormals boolean flag to correct this.\n\nSee Also:\n\nvtkContourFilter vtkMarchingCubes vtkSliceCubes vtkLocator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMCubesReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMCubesReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMCubesReader", o) != 0)
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

