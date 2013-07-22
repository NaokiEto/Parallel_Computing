// python wrapper for vtkAVSucdReader
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
#include "vtkAVSucdReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAVSucdReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAVSucdReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAVSucdReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAVSucdReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkAVSucdReader_Doc();


static PyObject *
PyvtkAVSucdReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

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
      tempr = op->vtkAVSucdReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

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
      tempr = op->vtkAVSucdReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  vtkAVSucdReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAVSucdReader::NewInstance();
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
PyvtkAVSucdReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAVSucdReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAVSucdReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

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
      op->vtkAVSucdReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

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
      tempr = op->vtkAVSucdReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBinaryFile(temp0);
      }
    else
      {
      op->vtkAVSucdReader::SetBinaryFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBinaryFile();
      }
    else
      {
      tempr = op->vtkAVSucdReader::GetBinaryFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_BinaryFileOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryFileOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryFileOn();
      }
    else
      {
      op->vtkAVSucdReader::BinaryFileOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_BinaryFileOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryFileOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryFileOff();
      }
    else
      {
      op->vtkAVSucdReader::BinaryFileOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCells();
      }
    else
      {
      tempr = op->vtkAVSucdReader::GetNumberOfCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfNodes();
      }
    else
      {
      tempr = op->vtkAVSucdReader::GetNumberOfNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfNodeFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfNodeFields();
      }
    else
      {
      tempr = op->vtkAVSucdReader::GetNumberOfNodeFields();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfCellFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCellFields();
      }
    else
      {
      tempr = op->vtkAVSucdReader::GetNumberOfCellFields();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFields();
      }
    else
      {
      tempr = op->vtkAVSucdReader::GetNumberOfFields();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfNodeComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfNodeComponents();
      }
    else
      {
      tempr = op->vtkAVSucdReader::GetNumberOfNodeComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfCellComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCellComponents();
      }
    else
      {
      tempr = op->vtkAVSucdReader::GetNumberOfCellComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToBigEndian();
      }
    else
      {
      op->vtkAVSucdReader::SetByteOrderToBigEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToLittleEndian();
      }
    else
      {
      op->vtkAVSucdReader::SetByteOrderToLittleEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetByteOrderAsString();
      }
    else
      {
      tempr = op->vtkAVSucdReader::GetByteOrderAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

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
      op->vtkAVSucdReader::SetByteOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

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
      tempr = op->vtkAVSucdReader::GetByteOrder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPointArrays();
      }
    else
      {
      tempr = op->vtkAVSucdReader::GetNumberOfPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCellArrays();
      }
    else
      {
      tempr = op->vtkAVSucdReader::GetNumberOfCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointArrayName(temp0);
      }
    else
      {
      tempr = op->vtkAVSucdReader::GetPointArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellArrayName(temp0);
      }
    else
      {
      tempr = op->vtkAVSucdReader::GetCellArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkAVSucdReader::GetPointArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkAVSucdReader::GetCellArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkAVSucdReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCellArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkAVSucdReader::SetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_DisableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllCellArrays();
      }
    else
      {
      op->vtkAVSucdReader::DisableAllCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_EnableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllCellArrays();
      }
    else
      {
      op->vtkAVSucdReader::EnableAllCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllPointArrays();
      }
    else
      {
      op->vtkAVSucdReader::DisableAllPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAVSucdReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllPointArrays();
      }
    else
      {
      op->vtkAVSucdReader::EnableAllPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAVSucdReader_Methods[] = {
  {(char*)"GetClassName", PyvtkAVSucdReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAVSucdReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAVSucdReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAVSucdReader\nC++: vtkAVSucdReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAVSucdReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAVSucdReader\nC++: vtkAVSucdReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkAVSucdReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of AVS UCD datafile to read\n"},
  {(char*)"GetFileName", PyvtkAVSucdReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of AVS UCD datafile to read\n"},
  {(char*)"SetBinaryFile", PyvtkAVSucdReader_SetBinaryFile, 1,
   (char*)"V.SetBinaryFile(int)\nC++: void SetBinaryFile(int a)\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {(char*)"GetBinaryFile", PyvtkAVSucdReader_GetBinaryFile, 1,
   (char*)"V.GetBinaryFile() -> int\nC++: int GetBinaryFile()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {(char*)"BinaryFileOn", PyvtkAVSucdReader_BinaryFileOn, 1,
   (char*)"V.BinaryFileOn()\nC++: void BinaryFileOn()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {(char*)"BinaryFileOff", PyvtkAVSucdReader_BinaryFileOff, 1,
   (char*)"V.BinaryFileOff()\nC++: void BinaryFileOff()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {(char*)"GetNumberOfCells", PyvtkAVSucdReader_GetNumberOfCells, 1,
   (char*)"V.GetNumberOfCells() -> int\nC++: int GetNumberOfCells()\n\nGet the total number of cells.\n"},
  {(char*)"GetNumberOfNodes", PyvtkAVSucdReader_GetNumberOfNodes, 1,
   (char*)"V.GetNumberOfNodes() -> int\nC++: int GetNumberOfNodes()\n\nGet the total number of nodes.\n"},
  {(char*)"GetNumberOfNodeFields", PyvtkAVSucdReader_GetNumberOfNodeFields, 1,
   (char*)"V.GetNumberOfNodeFields() -> int\nC++: int GetNumberOfNodeFields()\n\nGet the number of data fields at the nodes.\n"},
  {(char*)"GetNumberOfCellFields", PyvtkAVSucdReader_GetNumberOfCellFields, 1,
   (char*)"V.GetNumberOfCellFields() -> int\nC++: int GetNumberOfCellFields()\n\nGet the number of data fields at the cell centers.\n"},
  {(char*)"GetNumberOfFields", PyvtkAVSucdReader_GetNumberOfFields, 1,
   (char*)"V.GetNumberOfFields() -> int\nC++: int GetNumberOfFields()\n\nGet the number of data fields for the model. Unused because VTK\nhas no methods for it.\n"},
  {(char*)"GetNumberOfNodeComponents", PyvtkAVSucdReader_GetNumberOfNodeComponents, 1,
   (char*)"V.GetNumberOfNodeComponents() -> int\nC++: int GetNumberOfNodeComponents()\n\nGet the number of data components at the nodes and cells.\n"},
  {(char*)"GetNumberOfCellComponents", PyvtkAVSucdReader_GetNumberOfCellComponents, 1,
   (char*)"V.GetNumberOfCellComponents() -> int\nC++: int GetNumberOfCellComponents()\n\nGet the number of data components at the nodes and cells.\n"},
  {(char*)"SetByteOrderToBigEndian", PyvtkAVSucdReader_SetByteOrderToBigEndian, 1,
   (char*)"V.SetByteOrderToBigEndian()\nC++: void SetByteOrderToBigEndian()\n\nSet/Get the endian-ness of the binary file.\n"},
  {(char*)"SetByteOrderToLittleEndian", PyvtkAVSucdReader_SetByteOrderToLittleEndian, 1,
   (char*)"V.SetByteOrderToLittleEndian()\nC++: void SetByteOrderToLittleEndian()\n\nSet/Get the endian-ness of the binary file.\n"},
  {(char*)"GetByteOrderAsString", PyvtkAVSucdReader_GetByteOrderAsString, 1,
   (char*)"V.GetByteOrderAsString() -> string\nC++: const char *GetByteOrderAsString()\n\nSet/Get the endian-ness of the binary file.\n"},
  {(char*)"SetByteOrder", PyvtkAVSucdReader_SetByteOrder, 1,
   (char*)"V.SetByteOrder(int)\nC++: void SetByteOrder(int a)\n\n"},
  {(char*)"GetByteOrder", PyvtkAVSucdReader_GetByteOrder, 1,
   (char*)"V.GetByteOrder() -> int\nC++: int GetByteOrder()\n\n"},
  {(char*)"GetNumberOfPointArrays", PyvtkAVSucdReader_GetNumberOfPointArrays, 1,
   (char*)"V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {(char*)"GetNumberOfCellArrays", PyvtkAVSucdReader_GetNumberOfCellArrays, 1,
   (char*)"V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {(char*)"GetPointArrayName", PyvtkAVSucdReader_GetPointArrayName, 1,
   (char*)"V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {(char*)"GetCellArrayName", PyvtkAVSucdReader_GetCellArrayName, 1,
   (char*)"V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {(char*)"GetPointArrayStatus", PyvtkAVSucdReader_GetPointArrayStatus, 1,
   (char*)"V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {(char*)"GetCellArrayStatus", PyvtkAVSucdReader_GetCellArrayStatus, 1,
   (char*)"V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {(char*)"SetPointArrayStatus", PyvtkAVSucdReader_SetPointArrayStatus, 1,
   (char*)"V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {(char*)"SetCellArrayStatus", PyvtkAVSucdReader_SetCellArrayStatus, 1,
   (char*)"V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {(char*)"DisableAllCellArrays", PyvtkAVSucdReader_DisableAllCellArrays, 1,
   (char*)"V.DisableAllCellArrays()\nC++: void DisableAllCellArrays()\n\n"},
  {(char*)"EnableAllCellArrays", PyvtkAVSucdReader_EnableAllCellArrays, 1,
   (char*)"V.EnableAllCellArrays()\nC++: void EnableAllCellArrays()\n\n"},
  {(char*)"DisableAllPointArrays", PyvtkAVSucdReader_DisableAllPointArrays, 1,
   (char*)"V.DisableAllPointArrays()\nC++: void DisableAllPointArrays()\n\n"},
  {(char*)"EnableAllPointArrays", PyvtkAVSucdReader_EnableAllPointArrays, 1,
   (char*)"V.EnableAllPointArrays()\nC++: void EnableAllPointArrays()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAVSucdReader_StaticNew()
{
  return vtkAVSucdReader::New();
}

PyObject *PyVTKClass_vtkAVSucdReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAVSucdReader_StaticNew,
    PyvtkAVSucdReader_Methods,
    "vtkAVSucdReader", modulename,
    NULL, NULL,
    PyvtkAVSucdReader_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAVSucdReader_Doc()
{
  static const char *docstring[] = {
    "vtkAVSucdReader - reads a dataset in AVS \"UCD\" format\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkAVSucdReader creates an unstructured grid dataset. It reads binary\nor ASCII files stored in UCD format, with optional data stored at the\nnodes or at the cells of the model. A cell-based fielddata stores the\nmaterial id. The class can automatically detect the endian-ness of\nthe binary files.\n\nSee Also:\n\nvtkGAMBITReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAVSucdReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAVSucdReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAVSucdReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

