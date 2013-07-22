// python wrapper for vtkParticleReader
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
#include "vtkParticleReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkParticleReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkParticleReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkParticleReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkParticleReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkParticleReader_Doc();


static PyObject *
PyvtkParticleReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

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
      tempr = op->vtkParticleReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

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
      tempr = op->vtkParticleReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  vtkParticleReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkParticleReader::NewInstance();
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
PyvtkParticleReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkParticleReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkParticleReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

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
      op->vtkParticleReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

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
      tempr = op->vtkParticleReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_SetDataByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrderToBigEndian();
      }
    else
      {
      op->vtkParticleReader::SetDataByteOrderToBigEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_SetDataByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataByteOrderToLittleEndian();
      }
    else
      {
      op->vtkParticleReader::SetDataByteOrderToLittleEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_GetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

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
      tempr = op->vtkParticleReader::GetDataByteOrder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_SetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

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
      op->vtkParticleReader::SetDataByteOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_GetDataByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

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
      tempr = op->vtkParticleReader::GetDataByteOrderAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_SetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

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
      op->vtkParticleReader::SetSwapBytes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_GetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

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
      tempr = op->vtkParticleReader::GetSwapBytes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_SwapBytesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwapBytesOn();
      }
    else
      {
      op->vtkParticleReader::SwapBytesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_SwapBytesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SwapBytesOff();
      }
    else
      {
      op->vtkParticleReader::SwapBytesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_SetHasScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHasScalar(temp0);
      }
    else
      {
      op->vtkParticleReader::SetHasScalar(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_GetHasScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHasScalar();
      }
    else
      {
      tempr = op->vtkParticleReader::GetHasScalar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_HasScalarOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasScalarOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HasScalarOn();
      }
    else
      {
      op->vtkParticleReader::HasScalarOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_HasScalarOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasScalarOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HasScalarOff();
      }
    else
      {
      op->vtkParticleReader::HasScalarOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileType(temp0);
      }
    else
      {
      op->vtkParticleReader::SetFileType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_GetFileTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileTypeMinValue();
      }
    else
      {
      tempr = op->vtkParticleReader::GetFileTypeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_GetFileTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileTypeMaxValue();
      }
    else
      {
      tempr = op->vtkParticleReader::GetFileTypeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileType();
      }
    else
      {
      tempr = op->vtkParticleReader::GetFileType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_SetFileTypeToUnknown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToUnknown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileTypeToUnknown();
      }
    else
      {
      op->vtkParticleReader::SetFileTypeToUnknown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_SetFileTypeToText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileTypeToText();
      }
    else
      {
      op->vtkParticleReader::SetFileTypeToText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_SetFileTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileTypeToBinary();
      }
    else
      {
      op->vtkParticleReader::SetFileTypeToBinary();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataType(temp0);
      }
    else
      {
      op->vtkParticleReader::SetDataType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_GetDataTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataTypeMinValue();
      }
    else
      {
      tempr = op->vtkParticleReader::GetDataTypeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_GetDataTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataTypeMaxValue();
      }
    else
      {
      tempr = op->vtkParticleReader::GetDataTypeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataType();
      }
    else
      {
      tempr = op->vtkParticleReader::GetDataType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_SetDataTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToFloat();
      }
    else
      {
      op->vtkParticleReader::SetDataTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParticleReader_SetDataTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleReader *op = static_cast<vtkParticleReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToDouble();
      }
    else
      {
      op->vtkParticleReader::SetDataTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkParticleReader_Methods[] = {
  {(char*)"GetClassName", PyvtkParticleReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParticleReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParticleReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkParticleReader\nC++: vtkParticleReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParticleReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParticleReader\nC++: vtkParticleReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkParticleReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name.\n"},
  {(char*)"GetFileName", PyvtkParticleReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name.\n"},
  {(char*)"SetDataByteOrderToBigEndian", PyvtkParticleReader_SetDataByteOrderToBigEndian, 1,
   (char*)"V.SetDataByteOrderToBigEndian()\nC++: void SetDataByteOrderToBigEndian()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian. Not used when reading text files.\n"},
  {(char*)"SetDataByteOrderToLittleEndian", PyvtkParticleReader_SetDataByteOrderToLittleEndian, 1,
   (char*)"V.SetDataByteOrderToLittleEndian()\nC++: void SetDataByteOrderToLittleEndian()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian. Not used when reading text files.\n"},
  {(char*)"GetDataByteOrder", PyvtkParticleReader_GetDataByteOrder, 1,
   (char*)"V.GetDataByteOrder() -> int\nC++: int GetDataByteOrder()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian. Not used when reading text files.\n"},
  {(char*)"SetDataByteOrder", PyvtkParticleReader_SetDataByteOrder, 1,
   (char*)"V.SetDataByteOrder(int)\nC++: void SetDataByteOrder(int)\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian. Not used when reading text files.\n"},
  {(char*)"GetDataByteOrderAsString", PyvtkParticleReader_GetDataByteOrderAsString, 1,
   (char*)"V.GetDataByteOrderAsString() -> string\nC++: const char *GetDataByteOrderAsString()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian. Not used when reading text files.\n"},
  {(char*)"SetSwapBytes", PyvtkParticleReader_SetSwapBytes, 1,
   (char*)"V.SetSwapBytes(int)\nC++: void SetSwapBytes(int a)\n\nSet/Get the byte swapping to explicitly swap the bytes of a file.\nNot used when reading text files.\n"},
  {(char*)"GetSwapBytes", PyvtkParticleReader_GetSwapBytes, 1,
   (char*)"V.GetSwapBytes() -> int\nC++: int GetSwapBytes()\n\nSet/Get the byte swapping to explicitly swap the bytes of a file.\nNot used when reading text files.\n"},
  {(char*)"SwapBytesOn", PyvtkParticleReader_SwapBytesOn, 1,
   (char*)"V.SwapBytesOn()\nC++: void SwapBytesOn()\n\nSet/Get the byte swapping to explicitly swap the bytes of a file.\nNot used when reading text files.\n"},
  {(char*)"SwapBytesOff", PyvtkParticleReader_SwapBytesOff, 1,
   (char*)"V.SwapBytesOff()\nC++: void SwapBytesOff()\n\nSet/Get the byte swapping to explicitly swap the bytes of a file.\nNot used when reading text files.\n"},
  {(char*)"SetHasScalar", PyvtkParticleReader_SetHasScalar, 1,
   (char*)"V.SetHasScalar(int)\nC++: void SetHasScalar(int a)\n\nDefault: 1. If 1 then each particle has a value associated with\nit.\n"},
  {(char*)"GetHasScalar", PyvtkParticleReader_GetHasScalar, 1,
   (char*)"V.GetHasScalar() -> int\nC++: int GetHasScalar()\n\nDefault: 1. If 1 then each particle has a value associated with\nit.\n"},
  {(char*)"HasScalarOn", PyvtkParticleReader_HasScalarOn, 1,
   (char*)"V.HasScalarOn()\nC++: void HasScalarOn()\n\nDefault: 1. If 1 then each particle has a value associated with\nit.\n"},
  {(char*)"HasScalarOff", PyvtkParticleReader_HasScalarOff, 1,
   (char*)"V.HasScalarOff()\nC++: void HasScalarOff()\n\nDefault: 1. If 1 then each particle has a value associated with\nit.\n"},
  {(char*)"SetFileType", PyvtkParticleReader_SetFileType, 1,
   (char*)"V.SetFileType(int)\nC++: void SetFileType(int)\n\nGet/Set the file type.  The options are:\n- FILE_TYPE_IS_UNKNOWN (default) the class will attempt to\n  determine the file type. If this fails then you should set the\n  file type yourself.\n- FILE_TYPE_IS_TEXT the file type is text.\n- FILE_TYPE_IS_BINARY the file type is binary.\n"},
  {(char*)"GetFileTypeMinValue", PyvtkParticleReader_GetFileTypeMinValue, 1,
   (char*)"V.GetFileTypeMinValue() -> int\nC++: int GetFileTypeMinValue()\n\nGet/Set the file type.  The options are:\n- FILE_TYPE_IS_UNKNOWN (default) the class will attempt to\n  determine the file type. If this fails then you should set the\n  file type yourself.\n- FILE_TYPE_IS_TEXT the file type is text.\n- FILE_TYPE_IS_BINARY the file type is binary.\n"},
  {(char*)"GetFileTypeMaxValue", PyvtkParticleReader_GetFileTypeMaxValue, 1,
   (char*)"V.GetFileTypeMaxValue() -> int\nC++: int GetFileTypeMaxValue()\n\nGet/Set the file type.  The options are:\n- FILE_TYPE_IS_UNKNOWN (default) the class will attempt to\n  determine the file type. If this fails then you should set the\n  file type yourself.\n- FILE_TYPE_IS_TEXT the file type is text.\n- FILE_TYPE_IS_BINARY the file type is binary.\n"},
  {(char*)"GetFileType", PyvtkParticleReader_GetFileType, 1,
   (char*)"V.GetFileType() -> int\nC++: int GetFileType()\n\nGet/Set the file type.  The options are:\n- FILE_TYPE_IS_UNKNOWN (default) the class will attempt to\n  determine the file type. If this fails then you should set the\n  file type yourself.\n- FILE_TYPE_IS_TEXT the file type is text.\n- FILE_TYPE_IS_BINARY the file type is binary.\n"},
  {(char*)"SetFileTypeToUnknown", PyvtkParticleReader_SetFileTypeToUnknown, 1,
   (char*)"V.SetFileTypeToUnknown()\nC++: void SetFileTypeToUnknown()\n\nGet/Set the file type.  The options are:\n- FILE_TYPE_IS_UNKNOWN (default) the class will attempt to\n  determine the file type. If this fails then you should set the\n  file type yourself.\n- FILE_TYPE_IS_TEXT the file type is text.\n- FILE_TYPE_IS_BINARY the file type is binary.\n"},
  {(char*)"SetFileTypeToText", PyvtkParticleReader_SetFileTypeToText, 1,
   (char*)"V.SetFileTypeToText()\nC++: void SetFileTypeToText()\n\nGet/Set the file type.  The options are:\n- FILE_TYPE_IS_UNKNOWN (default) the class will attempt to\n  determine the file type. If this fails then you should set the\n  file type yourself.\n- FILE_TYPE_IS_TEXT the file type is text.\n- FILE_TYPE_IS_BINARY the file type is binary.\n"},
  {(char*)"SetFileTypeToBinary", PyvtkParticleReader_SetFileTypeToBinary, 1,
   (char*)"V.SetFileTypeToBinary()\nC++: void SetFileTypeToBinary()\n\nGet/Set the file type.  The options are:\n- FILE_TYPE_IS_UNKNOWN (default) the class will attempt to\n  determine the file type. If this fails then you should set the\n  file type yourself.\n- FILE_TYPE_IS_TEXT the file type is text.\n- FILE_TYPE_IS_BINARY the file type is binary.\n"},
  {(char*)"SetDataType", PyvtkParticleReader_SetDataType, 1,
   (char*)"V.SetDataType(int)\nC++: void SetDataType(int)\n\nGet/Set the data type.  The options are:\n- VTK_FLOAT (default) single precision floating point.\n- VTK_DOUBLE double precision floating point.\n"},
  {(char*)"GetDataTypeMinValue", PyvtkParticleReader_GetDataTypeMinValue, 1,
   (char*)"V.GetDataTypeMinValue() -> int\nC++: int GetDataTypeMinValue()\n\nGet/Set the data type.  The options are:\n- VTK_FLOAT (default) single precision floating point.\n- VTK_DOUBLE double precision floating point.\n"},
  {(char*)"GetDataTypeMaxValue", PyvtkParticleReader_GetDataTypeMaxValue, 1,
   (char*)"V.GetDataTypeMaxValue() -> int\nC++: int GetDataTypeMaxValue()\n\nGet/Set the data type.  The options are:\n- VTK_FLOAT (default) single precision floating point.\n- VTK_DOUBLE double precision floating point.\n"},
  {(char*)"GetDataType", PyvtkParticleReader_GetDataType, 1,
   (char*)"V.GetDataType() -> int\nC++: int GetDataType()\n\nGet/Set the data type.  The options are:\n- VTK_FLOAT (default) single precision floating point.\n- VTK_DOUBLE double precision floating point.\n"},
  {(char*)"SetDataTypeToFloat", PyvtkParticleReader_SetDataTypeToFloat, 1,
   (char*)"V.SetDataTypeToFloat()\nC++: void SetDataTypeToFloat()\n\nGet/Set the data type.  The options are:\n- VTK_FLOAT (default) single precision floating point.\n- VTK_DOUBLE double precision floating point.\n"},
  {(char*)"SetDataTypeToDouble", PyvtkParticleReader_SetDataTypeToDouble, 1,
   (char*)"V.SetDataTypeToDouble()\nC++: void SetDataTypeToDouble()\n\nGet/Set the data type.  The options are:\n- VTK_FLOAT (default) single precision floating point.\n- VTK_DOUBLE double precision floating point.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParticleReader_StaticNew()
{
  return vtkParticleReader::New();
}

PyObject *PyVTKClass_vtkParticleReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParticleReader_StaticNew,
    PyvtkParticleReader_Methods,
    "vtkParticleReader", modulename,
    NULL, NULL,
    PyvtkParticleReader_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkParticleReader_Doc()
{
  static const char *docstring[] = {
    "vtkParticleReader - Read ASCII or binary particle \n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkParticleReader reads either a binary or a text file of\n particles. Each particle can have associated with it an optional\n scalar value. So the format is: x, y, z, scalar\n (all floats or doubles). The text file can consist of a comma\n delimited set of values. In most cases vtkParticleReader can\n automatically determine whether the file is text or binary.\n The data can be either float or double.\n",
    " Progress updates are provided.\n With respect to binary files, random access into the file to read\n pieces is supported.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParticleReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParticleReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParticleReader", o) != 0)
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

