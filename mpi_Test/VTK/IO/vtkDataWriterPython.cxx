// python wrapper for vtkDataWriter
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
#include "vtkDataWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWriterNew
extern "C" { PyObject *PyVTKClass_vtkWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkWriterNew
#endif

static const char **PyvtkDataWriter_Doc();


static PyObject *
PyvtkDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

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
      tempr = op->vtkDataWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

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
      tempr = op->vtkDataWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  vtkDataWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataWriter::NewInstance();
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
PyvtkDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

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
      op->vtkDataWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

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
      tempr = op->vtkDataWriter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteToOutputString(temp0);
      }
    else
      {
      op->vtkDataWriter::SetWriteToOutputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWriteToOutputString();
      }
    else
      {
      tempr = op->vtkDataWriter::GetWriteToOutputString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOn();
      }
    else
      {
      op->vtkDataWriter::WriteToOutputStringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteToOutputStringOff();
      }
    else
      {
      op->vtkDataWriter::WriteToOutputStringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetOutputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputStringLength();
      }
    else
      {
      tempr = op->vtkDataWriter::GetOutputStringLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputString();
      }
    else
      {
      tempr = op->vtkDataWriter::GetOutputString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_RegisterAndGetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterAndGetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->RegisterAndGetOutputString();
      }
    else
      {
      tempr = op->vtkDataWriter::RegisterAndGetOutputString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeader(temp0);
      }
    else
      {
      op->vtkDataWriter::SetHeader(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeader();
      }
    else
      {
      tempr = op->vtkDataWriter::GetHeader();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

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
      op->vtkDataWriter::SetFileType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

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
      tempr = op->vtkDataWriter::GetFileTypeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

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
      tempr = op->vtkDataWriter::GetFileTypeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

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
      tempr = op->vtkDataWriter::GetFileType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileTypeToASCII(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToASCII");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileTypeToASCII();
      }
    else
      {
      op->vtkDataWriter::SetFileTypeToASCII();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetFileTypeToBinary();
      }
    else
      {
      op->vtkDataWriter::SetFileTypeToBinary();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarsName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetScalarsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarsName();
      }
    else
      {
      tempr = op->vtkDataWriter::GetScalarsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetVectorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorsName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetVectorsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetVectorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorsName();
      }
    else
      {
      tempr = op->vtkDataWriter::GetVectorsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetTensorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTensorsName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetTensorsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetTensorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTensorsName();
      }
    else
      {
      tempr = op->vtkDataWriter::GetTensorsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalsName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetNormalsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalsName();
      }
    else
      {
      tempr = op->vtkDataWriter::GetNormalsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetTCoordsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTCoordsName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetTCoordsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetTCoordsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTCoordsName();
      }
    else
      {
      tempr = op->vtkDataWriter::GetTCoordsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetGlobalIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlobalIdsName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetGlobalIdsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetGlobalIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGlobalIdsName();
      }
    else
      {
      tempr = op->vtkDataWriter::GetGlobalIdsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetPedigreeIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPedigreeIdsName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetPedigreeIdsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetPedigreeIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPedigreeIdsName();
      }
    else
      {
      tempr = op->vtkDataWriter::GetPedigreeIdsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetLookupTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLookupTableName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetLookupTableName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetLookupTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLookupTableName();
      }
    else
      {
      tempr = op->vtkDataWriter::GetLookupTableName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldDataName(temp0);
      }
    else
      {
      op->vtkDataWriter::SetFieldDataName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldDataName();
      }
    else
      {
      tempr = op->vtkDataWriter::GetFieldDataName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkDataWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataWriter\nC++: vtkDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataWriter\nC++: vtkDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkDataWriter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of vtk polygon data file to write.\n"},
  {(char*)"GetFileName", PyvtkDataWriter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of vtk polygon data file to write.\n"},
  {(char*)"SetWriteToOutputString", PyvtkDataWriter_SetWriteToOutputString, 1,
   (char*)"V.SetWriteToOutputString(int)\nC++: void SetWriteToOutputString(int a)\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"GetWriteToOutputString", PyvtkDataWriter_GetWriteToOutputString, 1,
   (char*)"V.GetWriteToOutputString() -> int\nC++: int GetWriteToOutputString()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"WriteToOutputStringOn", PyvtkDataWriter_WriteToOutputStringOn, 1,
   (char*)"V.WriteToOutputStringOn()\nC++: void WriteToOutputStringOn()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"WriteToOutputStringOff", PyvtkDataWriter_WriteToOutputStringOff, 1,
   (char*)"V.WriteToOutputStringOff()\nC++: void WriteToOutputStringOff()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {(char*)"GetOutputStringLength", PyvtkDataWriter_GetOutputStringLength, 1,
   (char*)"V.GetOutputStringLength() -> int\nC++: int GetOutputStringLength()\n\nWhen WriteToOutputString in on, then a string is allocated,\nwritten to, and can be retrieved with these methods.  The string\nis deleted during the next call to write ...\n"},
  {(char*)"GetOutputString", PyvtkDataWriter_GetOutputString, 1,
   (char*)"V.GetOutputString() -> string\nC++: char *GetOutputString()\n\nWhen WriteToOutputString in on, then a string is allocated,\nwritten to, and can be retrieved with these methods.  The string\nis deleted during the next call to write ...\n"},
  {(char*)"RegisterAndGetOutputString", PyvtkDataWriter_RegisterAndGetOutputString, 1,
   (char*)"V.RegisterAndGetOutputString() -> string\nC++: char *RegisterAndGetOutputString()\n\nThis convenience method returns the string, sets the IVAR to\nNULL, so that the user is responsible for deleting the string. I\nam not sure what the name should be, so it may change in the\nfuture.\n"},
  {(char*)"SetHeader", PyvtkDataWriter_SetHeader, 1,
   (char*)"V.SetHeader(string)\nC++: void SetHeader(char *)\n\nSpecify the header for the vtk data file.\n"},
  {(char*)"GetHeader", PyvtkDataWriter_GetHeader, 1,
   (char*)"V.GetHeader() -> string\nC++: char *GetHeader()\n\nSpecify the header for the vtk data file.\n"},
  {(char*)"SetFileType", PyvtkDataWriter_SetFileType, 1,
   (char*)"V.SetFileType(int)\nC++: void SetFileType(int)\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"GetFileTypeMinValue", PyvtkDataWriter_GetFileTypeMinValue, 1,
   (char*)"V.GetFileTypeMinValue() -> int\nC++: int GetFileTypeMinValue()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"GetFileTypeMaxValue", PyvtkDataWriter_GetFileTypeMaxValue, 1,
   (char*)"V.GetFileTypeMaxValue() -> int\nC++: int GetFileTypeMaxValue()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"GetFileType", PyvtkDataWriter_GetFileType, 1,
   (char*)"V.GetFileType() -> int\nC++: int GetFileType()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"SetFileTypeToASCII", PyvtkDataWriter_SetFileTypeToASCII, 1,
   (char*)"V.SetFileTypeToASCII()\nC++: void SetFileTypeToASCII()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"SetFileTypeToBinary", PyvtkDataWriter_SetFileTypeToBinary, 1,
   (char*)"V.SetFileTypeToBinary()\nC++: void SetFileTypeToBinary()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {(char*)"SetScalarsName", PyvtkDataWriter_SetScalarsName, 1,
   (char*)"V.SetScalarsName(string)\nC++: void SetScalarsName(char *)\n\nGive a name to the scalar data. If not specified, uses default\nname \"scalars\".\n"},
  {(char*)"GetScalarsName", PyvtkDataWriter_GetScalarsName, 1,
   (char*)"V.GetScalarsName() -> string\nC++: char *GetScalarsName()\n\nGive a name to the scalar data. If not specified, uses default\nname \"scalars\".\n"},
  {(char*)"SetVectorsName", PyvtkDataWriter_SetVectorsName, 1,
   (char*)"V.SetVectorsName(string)\nC++: void SetVectorsName(char *)\n\nGive a name to the vector data. If not specified, uses default\nname \"vectors\".\n"},
  {(char*)"GetVectorsName", PyvtkDataWriter_GetVectorsName, 1,
   (char*)"V.GetVectorsName() -> string\nC++: char *GetVectorsName()\n\nGive a name to the vector data. If not specified, uses default\nname \"vectors\".\n"},
  {(char*)"SetTensorsName", PyvtkDataWriter_SetTensorsName, 1,
   (char*)"V.SetTensorsName(string)\nC++: void SetTensorsName(char *)\n\nGive a name to the tensors data. If not specified, uses default\nname \"tensors\".\n"},
  {(char*)"GetTensorsName", PyvtkDataWriter_GetTensorsName, 1,
   (char*)"V.GetTensorsName() -> string\nC++: char *GetTensorsName()\n\nGive a name to the tensors data. If not specified, uses default\nname \"tensors\".\n"},
  {(char*)"SetNormalsName", PyvtkDataWriter_SetNormalsName, 1,
   (char*)"V.SetNormalsName(string)\nC++: void SetNormalsName(char *)\n\nGive a name to the normals data. If not specified, uses default\nname \"normals\".\n"},
  {(char*)"GetNormalsName", PyvtkDataWriter_GetNormalsName, 1,
   (char*)"V.GetNormalsName() -> string\nC++: char *GetNormalsName()\n\nGive a name to the normals data. If not specified, uses default\nname \"normals\".\n"},
  {(char*)"SetTCoordsName", PyvtkDataWriter_SetTCoordsName, 1,
   (char*)"V.SetTCoordsName(string)\nC++: void SetTCoordsName(char *)\n\nGive a name to the texture coordinates data. If not specified,\nuses default name \"textureCoords\".\n"},
  {(char*)"GetTCoordsName", PyvtkDataWriter_GetTCoordsName, 1,
   (char*)"V.GetTCoordsName() -> string\nC++: char *GetTCoordsName()\n\nGive a name to the texture coordinates data. If not specified,\nuses default name \"textureCoords\".\n"},
  {(char*)"SetGlobalIdsName", PyvtkDataWriter_SetGlobalIdsName, 1,
   (char*)"V.SetGlobalIdsName(string)\nC++: void SetGlobalIdsName(char *)\n\nGive a name to the global ids data. If not specified, uses\ndefault name \"global_ids\".\n"},
  {(char*)"GetGlobalIdsName", PyvtkDataWriter_GetGlobalIdsName, 1,
   (char*)"V.GetGlobalIdsName() -> string\nC++: char *GetGlobalIdsName()\n\nGive a name to the global ids data. If not specified, uses\ndefault name \"global_ids\".\n"},
  {(char*)"SetPedigreeIdsName", PyvtkDataWriter_SetPedigreeIdsName, 1,
   (char*)"V.SetPedigreeIdsName(string)\nC++: void SetPedigreeIdsName(char *)\n\nGive a name to the pedigree ids data. If not specified, uses\ndefault name \"pedigree_ids\".\n"},
  {(char*)"GetPedigreeIdsName", PyvtkDataWriter_GetPedigreeIdsName, 1,
   (char*)"V.GetPedigreeIdsName() -> string\nC++: char *GetPedigreeIdsName()\n\nGive a name to the pedigree ids data. If not specified, uses\ndefault name \"pedigree_ids\".\n"},
  {(char*)"SetLookupTableName", PyvtkDataWriter_SetLookupTableName, 1,
   (char*)"V.SetLookupTableName(string)\nC++: void SetLookupTableName(char *)\n\nGive a name to the lookup table. If not specified, uses default\nname \"lookupTable\".\n"},
  {(char*)"GetLookupTableName", PyvtkDataWriter_GetLookupTableName, 1,
   (char*)"V.GetLookupTableName() -> string\nC++: char *GetLookupTableName()\n\nGive a name to the lookup table. If not specified, uses default\nname \"lookupTable\".\n"},
  {(char*)"SetFieldDataName", PyvtkDataWriter_SetFieldDataName, 1,
   (char*)"V.SetFieldDataName(string)\nC++: void SetFieldDataName(char *)\n\nGive a name to the field data. If not specified, uses default\nname \"field\".\n"},
  {(char*)"GetFieldDataName", PyvtkDataWriter_GetFieldDataName, 1,
   (char*)"V.GetFieldDataName() -> string\nC++: char *GetFieldDataName()\n\nGive a name to the field data. If not specified, uses default\nname \"field\".\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataWriter_StaticNew()
{
  return vtkDataWriter::New();
}

PyObject *PyVTKClass_vtkDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataWriter_StaticNew,
    PyvtkDataWriter_Methods,
    "vtkDataWriter", modulename,
    NULL, NULL,
    PyvtkDataWriter_Doc(),
    PyVTKClass_vtkWriterNew(modulename));
  return cls;
}

const char **PyvtkDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkDataWriter - helper class for objects that write vtk data files\n\n",
    "Superclass: vtkWriter\n\n",
    "vtkDataWriter is a helper class that opens and writes the vtk header\nand point data (e.g., scalars, vectors, normals, etc.) from a vtk\ndata file. See text for various formats.\n\nSee Also:\n\nvtkDataSetWriter vtkPolyDataWriter vtkStructuredGridWriter\nvtkStructuredPointsWriter vtkUnstructuredGridWriter\nvtkFieldDataWriter vtkRectilinearGridWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

