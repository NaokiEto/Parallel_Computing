// python wrapper for vtkXMLWriter
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
#include "vtkXMLWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkXMLWriter_Doc();


static PyObject *
PyvtkXMLWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

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
      tempr = op->vtkXMLWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

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
      tempr = op->vtkXMLWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  vtkXMLWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLWriter::NewInstance();
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
PyvtkXMLWriter_SetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrder(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetByteOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetByteOrder();
      }
    else
      {
      tempr = op->vtkXMLWriter::GetByteOrder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToBigEndian();
      }
    else
      {
      op->vtkXMLWriter::SetByteOrderToBigEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToLittleEndian();
      }
    else
      {
      op->vtkXMLWriter::SetByteOrderToLittleEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetIdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIdType(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetIdType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetIdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIdType();
      }
    else
      {
      tempr = op->vtkXMLWriter::GetIdType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetIdTypeToInt32(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdTypeToInt32");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIdTypeToInt32();
      }
    else
      {
      op->vtkXMLWriter::SetIdTypeToInt32();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetIdTypeToInt64(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdTypeToInt64");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetIdTypeToInt64();
      }
    else
      {
      op->vtkXMLWriter::SetIdTypeToInt64();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

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
      op->vtkXMLWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

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
      tempr = op->vtkXMLWriter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  vtkDataCompressor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataCompressor"))
    {
    if (ap.IsBound())
      {
      op->SetCompressor(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetCompressor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  vtkDataCompressor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompressor();
      }
    else
      {
      tempr = op->vtkXMLWriter::GetCompressor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetCompressorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompressorType(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetCompressorType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetCompressorTypeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressorTypeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompressorTypeToNone();
      }
    else
      {
      op->vtkXMLWriter::SetCompressorTypeToNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetCompressorTypeToZLib(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressorTypeToZLib");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCompressorTypeToZLib();
      }
    else
      {
      op->vtkXMLWriter::SetCompressorTypeToZLib();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBlockSize(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetBlockSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlockSize();
      }
    else
      {
      tempr = op->vtkXMLWriter::GetBlockSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetDataMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataMode(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetDataMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetDataMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataMode();
      }
    else
      {
      tempr = op->vtkXMLWriter::GetDataMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetDataModeToAscii(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataModeToAscii");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataModeToAscii();
      }
    else
      {
      op->vtkXMLWriter::SetDataModeToAscii();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetDataModeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataModeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataModeToBinary();
      }
    else
      {
      op->vtkXMLWriter::SetDataModeToBinary();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetDataModeToAppended(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataModeToAppended");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataModeToAppended();
      }
    else
      {
      op->vtkXMLWriter::SetDataModeToAppended();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetEncodeAppendedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEncodeAppendedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEncodeAppendedData(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetEncodeAppendedData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetEncodeAppendedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodeAppendedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEncodeAppendedData();
      }
    else
      {
      tempr = op->vtkXMLWriter::GetEncodeAppendedData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_EncodeAppendedDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeAppendedDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EncodeAppendedDataOn();
      }
    else
      {
      op->vtkXMLWriter::EncodeAppendedDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_EncodeAppendedDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeAppendedDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EncodeAppendedDataOff();
      }
    else
      {
      op->vtkXMLWriter::EncodeAppendedDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXMLWriter_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0, temp1);
      }
    else
      {
      op->vtkXMLWriter::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXMLWriter_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkXMLWriter_SetInput_s1(self, args);
    case 2:
      return PyvtkXMLWriter_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}



static PyObject *
PyvtkXMLWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput(temp0);
      }
    else
      {
      tempr = op->vtkXMLWriter::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkXMLWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkXMLWriter_GetInput_s1(self, args);
    case 0:
      return PyvtkXMLWriter_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkXMLWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetDefaultFileExtension();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Write();
      }
    else
      {
      tempr = op->vtkXMLWriter::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStep(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeStep();
      }
    else
      {
      tempr = op->vtkXMLWriter::GetTimeStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeStepRange();
      }
    else
      {
      tempr = op->vtkXMLWriter::GetTimeStepRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetTimeStepRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTimeStepRange(temp0, temp1);
      }
    else
      {
      op->vtkXMLWriter::SetTimeStepRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXMLWriter_SetTimeStepRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStepRange(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetTimeStepRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXMLWriter_SetTimeStepRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXMLWriter_SetTimeStepRange_s1(self, args);
    case 1:
      return PyvtkXMLWriter_SetTimeStepRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTimeStepRange");
  return NULL;
}



static PyObject *
PyvtkXMLWriter_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTimeSteps();
      }
    else
      {
      tempr = op->vtkXMLWriter::GetNumberOfTimeSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_SetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfTimeSteps(temp0);
      }
    else
      {
      op->vtkXMLWriter::SetNumberOfTimeSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Start();
      }
    else
      {
      op->vtkXMLWriter::Start();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Stop();
      }
    else
      {
      op->vtkXMLWriter::Stop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLWriter_WriteNextTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteNextTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriter *op = static_cast<vtkXMLWriter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->WriteNextTime(temp0);
      }
    else
      {
      op->vtkXMLWriter::WriteNextTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLWriter\nC++: vtkXMLWriter *NewInstance()\n\n"},
  {(char*)"SetByteOrder", PyvtkXMLWriter_SetByteOrder, 1,
   (char*)"V.SetByteOrder(int)\nC++: void SetByteOrder(int a)\n\nGet/Set the byte order of data written to the file.  The default\nis the machine's hardware byte order.\n"},
  {(char*)"GetByteOrder", PyvtkXMLWriter_GetByteOrder, 1,
   (char*)"V.GetByteOrder() -> int\nC++: int GetByteOrder()\n\nGet/Set the byte order of data written to the file.  The default\nis the machine's hardware byte order.\n"},
  {(char*)"SetByteOrderToBigEndian", PyvtkXMLWriter_SetByteOrderToBigEndian, 1,
   (char*)"V.SetByteOrderToBigEndian()\nC++: void SetByteOrderToBigEndian()\n\nGet/Set the byte order of data written to the file.  The default\nis the machine's hardware byte order.\n"},
  {(char*)"SetByteOrderToLittleEndian", PyvtkXMLWriter_SetByteOrderToLittleEndian, 1,
   (char*)"V.SetByteOrderToLittleEndian()\nC++: void SetByteOrderToLittleEndian()\n\nGet/Set the byte order of data written to the file.  The default\nis the machine's hardware byte order.\n"},
  {(char*)"SetIdType", PyvtkXMLWriter_SetIdType, 1,
   (char*)"V.SetIdType(int)\nC++: virtual void SetIdType(int)\n\nGet/Set the size of the vtkIdType values stored in the file.  The\ndefault is the real size of vtkIdType.\n"},
  {(char*)"GetIdType", PyvtkXMLWriter_GetIdType, 1,
   (char*)"V.GetIdType() -> int\nC++: int GetIdType()\n\nGet/Set the size of the vtkIdType values stored in the file.  The\ndefault is the real size of vtkIdType.\n"},
  {(char*)"SetIdTypeToInt32", PyvtkXMLWriter_SetIdTypeToInt32, 1,
   (char*)"V.SetIdTypeToInt32()\nC++: void SetIdTypeToInt32()\n\nGet/Set the size of the vtkIdType values stored in the file.  The\ndefault is the real size of vtkIdType.\n"},
  {(char*)"SetIdTypeToInt64", PyvtkXMLWriter_SetIdTypeToInt64, 1,
   (char*)"V.SetIdTypeToInt64()\nC++: void SetIdTypeToInt64()\n\nGet/Set the size of the vtkIdType values stored in the file.  The\ndefault is the real size of vtkIdType.\n"},
  {(char*)"SetFileName", PyvtkXMLWriter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the name of the output file.\n"},
  {(char*)"GetFileName", PyvtkXMLWriter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the name of the output file.\n"},
  {(char*)"SetCompressor", PyvtkXMLWriter_SetCompressor, 1,
   (char*)"V.SetCompressor(vtkDataCompressor)\nC++: virtual void SetCompressor(vtkDataCompressor *)\n\nGet/Set the compressor used to compress binary and appended data\nbefore writing to the file.  Default is a vtkZLibDataCompressor.\n"},
  {(char*)"GetCompressor", PyvtkXMLWriter_GetCompressor, 1,
   (char*)"V.GetCompressor() -> vtkDataCompressor\nC++: vtkDataCompressor *GetCompressor()\n\nGet/Set the compressor used to compress binary and appended data\nbefore writing to the file.  Default is a vtkZLibDataCompressor.\n"},
  {(char*)"SetCompressorType", PyvtkXMLWriter_SetCompressorType, 1,
   (char*)"V.SetCompressorType(int)\nC++: void SetCompressorType(int compressorType)\n\nConvenience functions to set the compressor to certain known\ntypes.\n"},
  {(char*)"SetCompressorTypeToNone", PyvtkXMLWriter_SetCompressorTypeToNone, 1,
   (char*)"V.SetCompressorTypeToNone()\nC++: void SetCompressorTypeToNone()\n\nConvenience functions to set the compressor to certain known\ntypes.\n"},
  {(char*)"SetCompressorTypeToZLib", PyvtkXMLWriter_SetCompressorTypeToZLib, 1,
   (char*)"V.SetCompressorTypeToZLib()\nC++: void SetCompressorTypeToZLib()\n\nConvenience functions to set the compressor to certain known\ntypes.\n"},
  {(char*)"SetBlockSize", PyvtkXMLWriter_SetBlockSize, 1,
   (char*)"V.SetBlockSize(int)\nC++: virtual void SetBlockSize(unsigned int blockSize)\n\nGet/Set the block size used in compression.  When reading, this\ncontrols the granularity of how much extra information must be\nread when only part of the data are requested.  The value should\nbe a multiple of the largest scalar data type.\n"},
  {(char*)"GetBlockSize", PyvtkXMLWriter_GetBlockSize, 1,
   (char*)"V.GetBlockSize() -> int\nC++: unsigned int GetBlockSize()\n\nGet/Set the block size used in compression.  When reading, this\ncontrols the granularity of how much extra information must be\nread when only part of the data are requested.  The value should\nbe a multiple of the largest scalar data type.\n"},
  {(char*)"SetDataMode", PyvtkXMLWriter_SetDataMode, 1,
   (char*)"V.SetDataMode(int)\nC++: void SetDataMode(int a)\n\nGet/Set the data mode used for the file's data.  The options are\nvtkXMLWriter::Ascii, vtkXMLWriter::Binary, and\nvtkXMLWriter::Appended.\n"},
  {(char*)"GetDataMode", PyvtkXMLWriter_GetDataMode, 1,
   (char*)"V.GetDataMode() -> int\nC++: int GetDataMode()\n\nGet/Set the data mode used for the file's data.  The options are\nvtkXMLWriter::Ascii, vtkXMLWriter::Binary, and\nvtkXMLWriter::Appended.\n"},
  {(char*)"SetDataModeToAscii", PyvtkXMLWriter_SetDataModeToAscii, 1,
   (char*)"V.SetDataModeToAscii()\nC++: void SetDataModeToAscii()\n\nGet/Set the data mode used for the file's data.  The options are\nvtkXMLWriter::Ascii, vtkXMLWriter::Binary, and\nvtkXMLWriter::Appended.\n"},
  {(char*)"SetDataModeToBinary", PyvtkXMLWriter_SetDataModeToBinary, 1,
   (char*)"V.SetDataModeToBinary()\nC++: void SetDataModeToBinary()\n\nGet/Set the data mode used for the file's data.  The options are\nvtkXMLWriter::Ascii, vtkXMLWriter::Binary, and\nvtkXMLWriter::Appended.\n"},
  {(char*)"SetDataModeToAppended", PyvtkXMLWriter_SetDataModeToAppended, 1,
   (char*)"V.SetDataModeToAppended()\nC++: void SetDataModeToAppended()\n\nGet/Set the data mode used for the file's data.  The options are\nvtkXMLWriter::Ascii, vtkXMLWriter::Binary, and\nvtkXMLWriter::Appended.\n"},
  {(char*)"SetEncodeAppendedData", PyvtkXMLWriter_SetEncodeAppendedData, 1,
   (char*)"V.SetEncodeAppendedData(int)\nC++: void SetEncodeAppendedData(int a)\n\nGet/Set whether the appended data section is base64 encoded.  If\nencoded, reading and writing will be slower, but the file will be\nfully valid XML and text-only.  If not encoded, the XML\nspecification will be violated, but reading and writing will be\nfast.  The default is to do the encoding.\n"},
  {(char*)"GetEncodeAppendedData", PyvtkXMLWriter_GetEncodeAppendedData, 1,
   (char*)"V.GetEncodeAppendedData() -> int\nC++: int GetEncodeAppendedData()\n\nGet/Set whether the appended data section is base64 encoded.  If\nencoded, reading and writing will be slower, but the file will be\nfully valid XML and text-only.  If not encoded, the XML\nspecification will be violated, but reading and writing will be\nfast.  The default is to do the encoding.\n"},
  {(char*)"EncodeAppendedDataOn", PyvtkXMLWriter_EncodeAppendedDataOn, 1,
   (char*)"V.EncodeAppendedDataOn()\nC++: void EncodeAppendedDataOn()\n\nGet/Set whether the appended data section is base64 encoded.  If\nencoded, reading and writing will be slower, but the file will be\nfully valid XML and text-only.  If not encoded, the XML\nspecification will be violated, but reading and writing will be\nfast.  The default is to do the encoding.\n"},
  {(char*)"EncodeAppendedDataOff", PyvtkXMLWriter_EncodeAppendedDataOff, 1,
   (char*)"V.EncodeAppendedDataOff()\nC++: void EncodeAppendedDataOff()\n\nGet/Set whether the appended data section is base64 encoded.  If\nencoded, reading and writing will be slower, but the file will be\nfully valid XML and text-only.  If not encoded, the XML\nspecification will be violated, but reading and writing will be\nfast.  The default is to do the encoding.\n"},
  {(char*)"SetInput", PyvtkXMLWriter_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *)\nV.SetInput(int, vtkDataObject)\nC++: void SetInput(int, vtkDataObject *)\n\nSet/Get an input of this algorithm. You should not override these\nmethods because they are not the only way to connect a pipeline\n"},
  {(char*)"GetInput", PyvtkXMLWriter_GetInput, 1,
   (char*)"V.GetInput(int) -> vtkDataObject\nC++: vtkDataObject *GetInput(int port)\nV.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nSet/Get an input of this algorithm. You should not override these\nmethods because they are not the only way to connect a pipeline\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLWriter_GetDefaultFileExtension, 1,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: virtual const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {(char*)"Write", PyvtkXMLWriter_Write, 1,
   (char*)"V.Write() -> int\nC++: int Write()\n\nInvoke the writer.  Returns 1 for success, 0 for failure.\n"},
  {(char*)"SetTimeStep", PyvtkXMLWriter_SetTimeStep, 1,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(int a)\n\nWhich TimeStep to write.\n"},
  {(char*)"GetTimeStep", PyvtkXMLWriter_GetTimeStep, 1,
   (char*)"V.GetTimeStep() -> int\nC++: int GetTimeStep()\n\nWhich TimeStep to write.\n"},
  {(char*)"GetTimeStepRange", PyvtkXMLWriter_GetTimeStepRange, 1,
   (char*)"V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {(char*)"SetTimeStepRange", PyvtkXMLWriter_SetTimeStepRange, 1,
   (char*)"V.SetTimeStepRange(int, int)\nC++: void SetTimeStepRange(int, int)\nV.SetTimeStepRange((int, int))\nC++: void SetTimeStepRange(int a[2])\n\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkXMLWriter_GetNumberOfTimeSteps, 1,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nSet the number of time steps\n"},
  {(char*)"SetNumberOfTimeSteps", PyvtkXMLWriter_SetNumberOfTimeSteps, 1,
   (char*)"V.SetNumberOfTimeSteps(int)\nC++: void SetNumberOfTimeSteps(int a)\n\nSet the number of time steps\n"},
  {(char*)"Start", PyvtkXMLWriter_Start, 1,
   (char*)"V.Start()\nC++: void Start()\n\nAPI to interface an outside the VTK pipeline control\n"},
  {(char*)"Stop", PyvtkXMLWriter_Stop, 1,
   (char*)"V.Stop()\nC++: void Stop()\n\nAPI to interface an outside the VTK pipeline control\n"},
  {(char*)"WriteNextTime", PyvtkXMLWriter_WriteNextTime, 1,
   (char*)"V.WriteNextTime(float)\nC++: void WriteNextTime(double time)\n\nAPI to interface an outside the VTK pipeline control\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLWriter_Methods,
    "vtkXMLWriter", modulename,
    NULL, NULL,
    PyvtkXMLWriter_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"BigEndian", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"LittleEndian", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"Ascii", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"Binary", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"Appended", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(32);
    if (o && PyDict_SetItemString(d, (char *)"Int32", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(64);
    if (o && PyDict_SetItemString(d, (char *)"Int64", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"NONE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"ZLIB", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkXMLWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLWriter - Superclass for VTK's XML file writers.\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkXMLWriter provides methods implementing most of the functionality\nneeded to write VTK XML file formats.  Concrete subclasses provide\nactual writer implementations calling upon this functionality.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

