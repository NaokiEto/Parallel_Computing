// python wrapper for vtkPLOT3DReader
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
#include "vtkPLOT3DReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPLOT3DReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPLOT3DReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPLOT3DReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPLOT3DReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStructuredGridSourceNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridSourceNew
#endif

static const char **PyvtkPLOT3DReader_Doc();


static PyObject *
PyvtkPLOT3DReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

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
      tempr = op->vtkPLOT3DReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

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
      tempr = op->vtkPLOT3DReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  vtkPLOT3DReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::NewInstance();
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
PyvtkPLOT3DReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPLOT3DReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPLOT3DReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

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
      op->vtkPLOT3DReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetXYZFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYZFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXYZFileName(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::SetXYZFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetXYZFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYZFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXYZFileName();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetXYZFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetQFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQFileName(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::SetQFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetQFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQFileName();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetQFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetFunctionFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFunctionFileName(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::SetFunctionFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetFunctionFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunctionFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFunctionFileName();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetFunctionFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetNumberOfOutputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfOutputs();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetNumberOfOutputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetNumberOfGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfGrids();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetNumberOfGrids();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int temp0;
  vtkStructuredGrid *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkStructuredGrid"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0, temp1);
      }
    else
      {
      op->vtkPLOT3DReader::SetOutput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

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
      op->vtkPLOT3DReader::SetBinaryFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

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
      tempr = op->vtkPLOT3DReader::GetBinaryFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_BinaryFileOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryFileOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryFileOn();
      }
    else
      {
      op->vtkPLOT3DReader::BinaryFileOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_BinaryFileOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryFileOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BinaryFileOff();
      }
    else
      {
      op->vtkPLOT3DReader::BinaryFileOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetMultiGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultiGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMultiGrid(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::SetMultiGrid(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetMultiGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMultiGrid();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetMultiGrid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_MultiGridOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiGridOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultiGridOn();
      }
    else
      {
      op->vtkPLOT3DReader::MultiGridOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_MultiGridOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiGridOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultiGridOff();
      }
    else
      {
      op->vtkPLOT3DReader::MultiGridOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetHasByteCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasByteCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHasByteCount(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::SetHasByteCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetHasByteCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasByteCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHasByteCount();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetHasByteCount();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_HasByteCountOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasByteCountOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HasByteCountOn();
      }
    else
      {
      op->vtkPLOT3DReader::HasByteCountOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_HasByteCountOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasByteCountOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HasByteCountOff();
      }
    else
      {
      op->vtkPLOT3DReader::HasByteCountOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetIBlanking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIBlanking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIBlanking(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::SetIBlanking(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetIBlanking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIBlanking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIBlanking();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetIBlanking();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_IBlankingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IBlankingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IBlankingOn();
      }
    else
      {
      op->vtkPLOT3DReader::IBlankingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_IBlankingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IBlankingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->IBlankingOff();
      }
    else
      {
      op->vtkPLOT3DReader::IBlankingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetTwoDimensionalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwoDimensionalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTwoDimensionalGeometry(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::SetTwoDimensionalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetTwoDimensionalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwoDimensionalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTwoDimensionalGeometry();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetTwoDimensionalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_TwoDimensionalGeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoDimensionalGeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwoDimensionalGeometryOn();
      }
    else
      {
      op->vtkPLOT3DReader::TwoDimensionalGeometryOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_TwoDimensionalGeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoDimensionalGeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TwoDimensionalGeometryOff();
      }
    else
      {
      op->vtkPLOT3DReader::TwoDimensionalGeometryOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetForceRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForceRead(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::SetForceRead(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetForceRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetForceRead();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetForceRead();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_ForceReadOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceReadOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceReadOn();
      }
    else
      {
      op->vtkPLOT3DReader::ForceReadOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_ForceReadOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceReadOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceReadOff();
      }
    else
      {
      op->vtkPLOT3DReader::ForceReadOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetDoNotReduceNumberOfOutputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDoNotReduceNumberOfOutputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDoNotReduceNumberOfOutputs(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::SetDoNotReduceNumberOfOutputs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetDoNotReduceNumberOfOutputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoNotReduceNumberOfOutputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDoNotReduceNumberOfOutputs();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetDoNotReduceNumberOfOutputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_DoNotReduceNumberOfOutputsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoNotReduceNumberOfOutputsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DoNotReduceNumberOfOutputsOn();
      }
    else
      {
      op->vtkPLOT3DReader::DoNotReduceNumberOfOutputsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_DoNotReduceNumberOfOutputsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoNotReduceNumberOfOutputsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DoNotReduceNumberOfOutputsOff();
      }
    else
      {
      op->vtkPLOT3DReader::DoNotReduceNumberOfOutputsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToBigEndian();
      }
    else
      {
      op->vtkPLOT3DReader::SetByteOrderToBigEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToLittleEndian();
      }
    else
      {
      op->vtkPLOT3DReader::SetByteOrderToLittleEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

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
      op->vtkPLOT3DReader::SetByteOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

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
      tempr = op->vtkPLOT3DReader::GetByteOrder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

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
      tempr = op->vtkPLOT3DReader::GetByteOrderAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetR(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::SetR(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetR();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetR();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetGamma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGamma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGamma(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::SetGamma(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetGamma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGamma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGamma();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetGamma();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetUvinf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUvinf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUvinf(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::SetUvinf(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetUvinf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUvinf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUvinf();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetUvinf();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetVvinf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVvinf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVvinf(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::SetVvinf(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetVvinf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVvinf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVvinf();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetVvinf();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetWvinf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWvinf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWvinf(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::SetWvinf(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetWvinf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWvinf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWvinf();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetWvinf();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetScalarFunctionNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarFunctionNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarFunctionNumber(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::SetScalarFunctionNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetScalarFunctionNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFunctionNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarFunctionNumber();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetScalarFunctionNumber();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_SetVectorFunctionNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorFunctionNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorFunctionNumber(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::SetVectorFunctionNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_GetVectorFunctionNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorFunctionNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorFunctionNumber();
      }
    else
      {
      tempr = op->vtkPLOT3DReader::GetVectorFunctionNumber();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_AddFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddFunction(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::AddFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_RemoveFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveFunction(temp0);
      }
    else
      {
      op->vtkPLOT3DReader::RemoveFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_RemoveAllFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllFunctions();
      }
    else
      {
      op->vtkPLOT3DReader::RemoveAllFunctions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPLOT3DReader_CanReadBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLOT3DReader *op = static_cast<vtkPLOT3DReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->CanReadBinaryFile(temp0);
      }
    else
      {
      tempr = op->vtkPLOT3DReader::CanReadBinaryFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPLOT3DReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPLOT3DReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPLOT3DReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPLOT3DReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPLOT3DReader\nC++: vtkPLOT3DReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPLOT3DReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPLOT3DReader\nC++: vtkPLOT3DReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkPLOT3DReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(const char *name)\n\nSet/Get the PLOT3D geometry filename.\n"},
  {(char*)"GetFileName", PyvtkPLOT3DReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: const char *GetFileName()\n\nSet/Get the PLOT3D geometry filename.\n"},
  {(char*)"SetXYZFileName", PyvtkPLOT3DReader_SetXYZFileName, 1,
   (char*)"V.SetXYZFileName(string)\nC++: virtual void SetXYZFileName(const char *)\n\nSet/Get the PLOT3D geometry filename.\n"},
  {(char*)"GetXYZFileName", PyvtkPLOT3DReader_GetXYZFileName, 1,
   (char*)"V.GetXYZFileName() -> string\nC++: char *GetXYZFileName()\n\nSet/Get the PLOT3D geometry filename.\n"},
  {(char*)"SetQFileName", PyvtkPLOT3DReader_SetQFileName, 1,
   (char*)"V.SetQFileName(string)\nC++: void SetQFileName(char *)\n\nSet/Get the PLOT3D solution filename.\n"},
  {(char*)"GetQFileName", PyvtkPLOT3DReader_GetQFileName, 1,
   (char*)"V.GetQFileName() -> string\nC++: char *GetQFileName()\n\nSet/Get the PLOT3D solution filename.\n"},
  {(char*)"SetFunctionFileName", PyvtkPLOT3DReader_SetFunctionFileName, 1,
   (char*)"V.SetFunctionFileName(string)\nC++: void SetFunctionFileName(char *)\n\nSet/Get the PLOT3D Function Filename (optional)\n"},
  {(char*)"GetFunctionFileName", PyvtkPLOT3DReader_GetFunctionFileName, 1,
   (char*)"V.GetFunctionFileName() -> string\nC++: char *GetFunctionFileName()\n\nSet/Get the PLOT3D Function Filename (optional)\n"},
  {(char*)"GetNumberOfOutputs", PyvtkPLOT3DReader_GetNumberOfOutputs, 1,
   (char*)"V.GetNumberOfOutputs() -> int\nC++: int GetNumberOfOutputs()\n\nThis returns the number of outputs this reader will produce. This\nnumber is equal to the number of grids in the current file. This\nmethod has to be called before getting any output if the number\nof outputs will be greater than 1 (the first output is always the\nsame). Note that every time this method is invoked, the header\nfile is opened and part of the header is read.\n"},
  {(char*)"GetNumberOfGrids", PyvtkPLOT3DReader_GetNumberOfGrids, 1,
   (char*)"V.GetNumberOfGrids() -> int\nC++: int GetNumberOfGrids()\n\nThis returns the number of outputs this reader will produce. This\nnumber is equal to the number of grids in the current file. This\nmethod has to be called before getting any output if the number\nof outputs will be greater than 1 (the first output is always the\nsame). Note that every time this method is invoked, the header\nfile is opened and part of the header is read.\n"},
  {(char*)"SetOutput", PyvtkPLOT3DReader_SetOutput, 1,
   (char*)"V.SetOutput(int, vtkStructuredGrid)\nC++: void SetOutput(int idx, vtkStructuredGrid *output)\n\nReplace an output.\n"},
  {(char*)"SetBinaryFile", PyvtkPLOT3DReader_SetBinaryFile, 1,
   (char*)"V.SetBinaryFile(int)\nC++: void SetBinaryFile(int a)\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {(char*)"GetBinaryFile", PyvtkPLOT3DReader_GetBinaryFile, 1,
   (char*)"V.GetBinaryFile() -> int\nC++: int GetBinaryFile()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {(char*)"BinaryFileOn", PyvtkPLOT3DReader_BinaryFileOn, 1,
   (char*)"V.BinaryFileOn()\nC++: void BinaryFileOn()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {(char*)"BinaryFileOff", PyvtkPLOT3DReader_BinaryFileOff, 1,
   (char*)"V.BinaryFileOff()\nC++: void BinaryFileOff()\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {(char*)"SetMultiGrid", PyvtkPLOT3DReader_SetMultiGrid, 1,
   (char*)"V.SetMultiGrid(int)\nC++: void SetMultiGrid(int a)\n\nDoes the file to be read contain information about number of\ngrids. In some PLOT3D files, the first value contains the number\nof grids (even if there is only 1). If reading such a file, set\nthis to true.\n"},
  {(char*)"GetMultiGrid", PyvtkPLOT3DReader_GetMultiGrid, 1,
   (char*)"V.GetMultiGrid() -> int\nC++: int GetMultiGrid()\n\nDoes the file to be read contain information about number of\ngrids. In some PLOT3D files, the first value contains the number\nof grids (even if there is only 1). If reading such a file, set\nthis to true.\n"},
  {(char*)"MultiGridOn", PyvtkPLOT3DReader_MultiGridOn, 1,
   (char*)"V.MultiGridOn()\nC++: void MultiGridOn()\n\nDoes the file to be read contain information about number of\ngrids. In some PLOT3D files, the first value contains the number\nof grids (even if there is only 1). If reading such a file, set\nthis to true.\n"},
  {(char*)"MultiGridOff", PyvtkPLOT3DReader_MultiGridOff, 1,
   (char*)"V.MultiGridOff()\nC++: void MultiGridOff()\n\nDoes the file to be read contain information about number of\ngrids. In some PLOT3D files, the first value contains the number\nof grids (even if there is only 1). If reading such a file, set\nthis to true.\n"},
  {(char*)"SetHasByteCount", PyvtkPLOT3DReader_SetHasByteCount, 1,
   (char*)"V.SetHasByteCount(int)\nC++: void SetHasByteCount(int a)\n\nWere the arrays written with leading and trailing byte counts ?\nUsually, files written by a fortran program will contain these\nbyte counts whereas the ones written by C/C++ won't.\n"},
  {(char*)"GetHasByteCount", PyvtkPLOT3DReader_GetHasByteCount, 1,
   (char*)"V.GetHasByteCount() -> int\nC++: int GetHasByteCount()\n\nWere the arrays written with leading and trailing byte counts ?\nUsually, files written by a fortran program will contain these\nbyte counts whereas the ones written by C/C++ won't.\n"},
  {(char*)"HasByteCountOn", PyvtkPLOT3DReader_HasByteCountOn, 1,
   (char*)"V.HasByteCountOn()\nC++: void HasByteCountOn()\n\nWere the arrays written with leading and trailing byte counts ?\nUsually, files written by a fortran program will contain these\nbyte counts whereas the ones written by C/C++ won't.\n"},
  {(char*)"HasByteCountOff", PyvtkPLOT3DReader_HasByteCountOff, 1,
   (char*)"V.HasByteCountOff()\nC++: void HasByteCountOff()\n\nWere the arrays written with leading and trailing byte counts ?\nUsually, files written by a fortran program will contain these\nbyte counts whereas the ones written by C/C++ won't.\n"},
  {(char*)"SetIBlanking", PyvtkPLOT3DReader_SetIBlanking, 1,
   (char*)"V.SetIBlanking(int)\nC++: void SetIBlanking(int a)\n\nIs there iblanking (point visibility) information in the file. If\nthere is iblanking arrays, these will be read and assigned to the\nPointVisibility array of the output.\n"},
  {(char*)"GetIBlanking", PyvtkPLOT3DReader_GetIBlanking, 1,
   (char*)"V.GetIBlanking() -> int\nC++: int GetIBlanking()\n\nIs there iblanking (point visibility) information in the file. If\nthere is iblanking arrays, these will be read and assigned to the\nPointVisibility array of the output.\n"},
  {(char*)"IBlankingOn", PyvtkPLOT3DReader_IBlankingOn, 1,
   (char*)"V.IBlankingOn()\nC++: void IBlankingOn()\n\nIs there iblanking (point visibility) information in the file. If\nthere is iblanking arrays, these will be read and assigned to the\nPointVisibility array of the output.\n"},
  {(char*)"IBlankingOff", PyvtkPLOT3DReader_IBlankingOff, 1,
   (char*)"V.IBlankingOff()\nC++: void IBlankingOff()\n\nIs there iblanking (point visibility) information in the file. If\nthere is iblanking arrays, these will be read and assigned to the\nPointVisibility array of the output.\n"},
  {(char*)"SetTwoDimensionalGeometry", PyvtkPLOT3DReader_SetTwoDimensionalGeometry, 1,
   (char*)"V.SetTwoDimensionalGeometry(int)\nC++: void SetTwoDimensionalGeometry(int a)\n\nIf only two-dimensional data was written to the file, turn this\non.\n"},
  {(char*)"GetTwoDimensionalGeometry", PyvtkPLOT3DReader_GetTwoDimensionalGeometry, 1,
   (char*)"V.GetTwoDimensionalGeometry() -> int\nC++: int GetTwoDimensionalGeometry()\n\nIf only two-dimensional data was written to the file, turn this\non.\n"},
  {(char*)"TwoDimensionalGeometryOn", PyvtkPLOT3DReader_TwoDimensionalGeometryOn, 1,
   (char*)"V.TwoDimensionalGeometryOn()\nC++: void TwoDimensionalGeometryOn()\n\nIf only two-dimensional data was written to the file, turn this\non.\n"},
  {(char*)"TwoDimensionalGeometryOff", PyvtkPLOT3DReader_TwoDimensionalGeometryOff, 1,
   (char*)"V.TwoDimensionalGeometryOff()\nC++: void TwoDimensionalGeometryOff()\n\nIf only two-dimensional data was written to the file, turn this\non.\n"},
  {(char*)"SetForceRead", PyvtkPLOT3DReader_SetForceRead, 1,
   (char*)"V.SetForceRead(int)\nC++: void SetForceRead(int a)\n\nTry to read a binary file even if the file length seems to be\ninconsistent with the header information. Use this with caution,\nif the file length is not the same as calculated from the header.\neither the file is corrupt or the settings are wrong.\n"},
  {(char*)"GetForceRead", PyvtkPLOT3DReader_GetForceRead, 1,
   (char*)"V.GetForceRead() -> int\nC++: int GetForceRead()\n\nTry to read a binary file even if the file length seems to be\ninconsistent with the header information. Use this with caution,\nif the file length is not the same as calculated from the header.\neither the file is corrupt or the settings are wrong.\n"},
  {(char*)"ForceReadOn", PyvtkPLOT3DReader_ForceReadOn, 1,
   (char*)"V.ForceReadOn()\nC++: void ForceReadOn()\n\nTry to read a binary file even if the file length seems to be\ninconsistent with the header information. Use this with caution,\nif the file length is not the same as calculated from the header.\neither the file is corrupt or the settings are wrong.\n"},
  {(char*)"ForceReadOff", PyvtkPLOT3DReader_ForceReadOff, 1,
   (char*)"V.ForceReadOff()\nC++: void ForceReadOff()\n\nTry to read a binary file even if the file length seems to be\ninconsistent with the header information. Use this with caution,\nif the file length is not the same as calculated from the header.\neither the file is corrupt or the settings are wrong.\n"},
  {(char*)"SetDoNotReduceNumberOfOutputs", PyvtkPLOT3DReader_SetDoNotReduceNumberOfOutputs, 1,
   (char*)"V.SetDoNotReduceNumberOfOutputs(int)\nC++: void SetDoNotReduceNumberOfOutputs(int a)\n\nIf this is on, the reader will never reduce the number of outputs\nafter reading a file with n grids and producing n outputs. If the\nfile read afterwards contains fewer grids, the extra outputs will\nbe empty. This option can be used by application which rely on\nthe initial number of outputs not shrinking.\n"},
  {(char*)"GetDoNotReduceNumberOfOutputs", PyvtkPLOT3DReader_GetDoNotReduceNumberOfOutputs, 1,
   (char*)"V.GetDoNotReduceNumberOfOutputs() -> int\nC++: int GetDoNotReduceNumberOfOutputs()\n\nIf this is on, the reader will never reduce the number of outputs\nafter reading a file with n grids and producing n outputs. If the\nfile read afterwards contains fewer grids, the extra outputs will\nbe empty. This option can be used by application which rely on\nthe initial number of outputs not shrinking.\n"},
  {(char*)"DoNotReduceNumberOfOutputsOn", PyvtkPLOT3DReader_DoNotReduceNumberOfOutputsOn, 1,
   (char*)"V.DoNotReduceNumberOfOutputsOn()\nC++: void DoNotReduceNumberOfOutputsOn()\n\nIf this is on, the reader will never reduce the number of outputs\nafter reading a file with n grids and producing n outputs. If the\nfile read afterwards contains fewer grids, the extra outputs will\nbe empty. This option can be used by application which rely on\nthe initial number of outputs not shrinking.\n"},
  {(char*)"DoNotReduceNumberOfOutputsOff", PyvtkPLOT3DReader_DoNotReduceNumberOfOutputsOff, 1,
   (char*)"V.DoNotReduceNumberOfOutputsOff()\nC++: void DoNotReduceNumberOfOutputsOff()\n\nIf this is on, the reader will never reduce the number of outputs\nafter reading a file with n grids and producing n outputs. If the\nfile read afterwards contains fewer grids, the extra outputs will\nbe empty. This option can be used by application which rely on\nthe initial number of outputs not shrinking.\n"},
  {(char*)"SetByteOrderToBigEndian", PyvtkPLOT3DReader_SetByteOrderToBigEndian, 1,
   (char*)"V.SetByteOrderToBigEndian()\nC++: void SetByteOrderToBigEndian()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"SetByteOrderToLittleEndian", PyvtkPLOT3DReader_SetByteOrderToLittleEndian, 1,
   (char*)"V.SetByteOrderToLittleEndian()\nC++: void SetByteOrderToLittleEndian()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"SetByteOrder", PyvtkPLOT3DReader_SetByteOrder, 1,
   (char*)"V.SetByteOrder(int)\nC++: void SetByteOrder(int a)\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"GetByteOrder", PyvtkPLOT3DReader_GetByteOrder, 1,
   (char*)"V.GetByteOrder() -> int\nC++: int GetByteOrder()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"GetByteOrderAsString", PyvtkPLOT3DReader_GetByteOrderAsString, 1,
   (char*)"V.GetByteOrderAsString() -> string\nC++: const char *GetByteOrderAsString()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"SetR", PyvtkPLOT3DReader_SetR, 1,
   (char*)"V.SetR(float)\nC++: void SetR(double a)\n\nSet/Get the gas constant. Default is 1.0.\n"},
  {(char*)"GetR", PyvtkPLOT3DReader_GetR, 1,
   (char*)"V.GetR() -> float\nC++: double GetR()\n\nSet/Get the gas constant. Default is 1.0.\n"},
  {(char*)"SetGamma", PyvtkPLOT3DReader_SetGamma, 1,
   (char*)"V.SetGamma(float)\nC++: void SetGamma(double a)\n\nSet/Get the ratio of specific heats. Default is 1.4.\n"},
  {(char*)"GetGamma", PyvtkPLOT3DReader_GetGamma, 1,
   (char*)"V.GetGamma() -> float\nC++: double GetGamma()\n\nSet/Get the ratio of specific heats. Default is 1.4.\n"},
  {(char*)"SetUvinf", PyvtkPLOT3DReader_SetUvinf, 1,
   (char*)"V.SetUvinf(float)\nC++: void SetUvinf(double a)\n\nSet/Get the x-component of the free-stream velocity. Default is\n1.0.\n"},
  {(char*)"GetUvinf", PyvtkPLOT3DReader_GetUvinf, 1,
   (char*)"V.GetUvinf() -> float\nC++: double GetUvinf()\n\nSet/Get the x-component of the free-stream velocity. Default is\n1.0.\n"},
  {(char*)"SetVvinf", PyvtkPLOT3DReader_SetVvinf, 1,
   (char*)"V.SetVvinf(float)\nC++: void SetVvinf(double a)\n\nSet/Get the y-component of the free-stream velocity. Default is\n1.0.\n"},
  {(char*)"GetVvinf", PyvtkPLOT3DReader_GetVvinf, 1,
   (char*)"V.GetVvinf() -> float\nC++: double GetVvinf()\n\nSet/Get the y-component of the free-stream velocity. Default is\n1.0.\n"},
  {(char*)"SetWvinf", PyvtkPLOT3DReader_SetWvinf, 1,
   (char*)"V.SetWvinf(float)\nC++: void SetWvinf(double a)\n\nSet/Get the z-component of the free-stream velocity. Default is\n1.0.\n"},
  {(char*)"GetWvinf", PyvtkPLOT3DReader_GetWvinf, 1,
   (char*)"V.GetWvinf() -> float\nC++: double GetWvinf()\n\nSet/Get the z-component of the free-stream velocity. Default is\n1.0.\n"},
  {(char*)"SetScalarFunctionNumber", PyvtkPLOT3DReader_SetScalarFunctionNumber, 1,
   (char*)"V.SetScalarFunctionNumber(int)\nC++: void SetScalarFunctionNumber(int num)\n\nSpecify the scalar function to extract. If ==(-1), then no scalar\nfunction is extracted.\n"},
  {(char*)"GetScalarFunctionNumber", PyvtkPLOT3DReader_GetScalarFunctionNumber, 1,
   (char*)"V.GetScalarFunctionNumber() -> int\nC++: int GetScalarFunctionNumber()\n\nSpecify the scalar function to extract. If ==(-1), then no scalar\nfunction is extracted.\n"},
  {(char*)"SetVectorFunctionNumber", PyvtkPLOT3DReader_SetVectorFunctionNumber, 1,
   (char*)"V.SetVectorFunctionNumber(int)\nC++: void SetVectorFunctionNumber(int num)\n\nSpecify the vector function to extract. If ==(-1), then no vector\nfunction is extracted.\n"},
  {(char*)"GetVectorFunctionNumber", PyvtkPLOT3DReader_GetVectorFunctionNumber, 1,
   (char*)"V.GetVectorFunctionNumber() -> int\nC++: int GetVectorFunctionNumber()\n\nSpecify the vector function to extract. If ==(-1), then no vector\nfunction is extracted.\n"},
  {(char*)"AddFunction", PyvtkPLOT3DReader_AddFunction, 1,
   (char*)"V.AddFunction(int)\nC++: void AddFunction(int functionNumber)\n\nSpecify additional functions to read. These are placed into the\npoint data as data arrays. Later on they can be used by labeling\nthem as scalars, etc.\n"},
  {(char*)"RemoveFunction", PyvtkPLOT3DReader_RemoveFunction, 1,
   (char*)"V.RemoveFunction(int)\nC++: void RemoveFunction(int)\n\nSpecify additional functions to read. These are placed into the\npoint data as data arrays. Later on they can be used by labeling\nthem as scalars, etc.\n"},
  {(char*)"RemoveAllFunctions", PyvtkPLOT3DReader_RemoveAllFunctions, 1,
   (char*)"V.RemoveAllFunctions()\nC++: void RemoveAllFunctions()\n\nSpecify additional functions to read. These are placed into the\npoint data as data arrays. Later on they can be used by labeling\nthem as scalars, etc.\n"},
  {(char*)"CanReadBinaryFile", PyvtkPLOT3DReader_CanReadBinaryFile, 1,
   (char*)"V.CanReadBinaryFile(string) -> int\nC++: virtual int CanReadBinaryFile(const char *fname)\n\nReturn 1 if the reader can read the given file name. Only\nmeaningful for binary files.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPLOT3DReader_StaticNew()
{
  return vtkPLOT3DReader::New();
}

PyObject *PyVTKClass_vtkPLOT3DReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPLOT3DReader_StaticNew,
    PyvtkPLOT3DReader_Methods,
    "vtkPLOT3DReader", modulename,
    NULL, NULL,
    PyvtkPLOT3DReader_Doc(),
    PyVTKClass_vtkStructuredGridSourceNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"FILE_BIG_ENDIAN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"FILE_LITTLE_ENDIAN", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkPLOT3DReader_Doc()
{
  static const char *docstring[] = {
    "vtkPLOT3DReader - read PLOT3D data files\n\n",
    "Superclass: vtkStructuredGridSource\n\n",
    "vtkPLOT3DReader is a reader object that reads PLOT3D formatted files\nand generates structured grid(s) on output. PLOT3D is a computer\ngraphics program designed to visualize the grids and solutions of\ncomputational fluid dynamics. Please see the \"PLOT3D User's Manual\"\navailable from NASA Ames Research Center, Moffett Field CA.\n\nPLOT3D files consist of a grid file (also known as XYZ file), an\noption",
    "al solution file (also known as a Q file), and an optional\nfunction file that contains user created data (currently\nunsupported). The Q file contains solution  information as follows:\nthe four parameters free stream mach number (Fsmach), angle of attack\n(Alpha), Reynolds number (Re), and total integration time (Time).\nThis information is stored in an array called Properties in the\nFieldData of eac",
    "h output (tuple 0: fsmach, tuple 1: alpha, tuple 2:\nre, tuple 3: time). In addition, the solution file contains the flow\ndensity (scalar), flow momentum (vector), and flow energy (scalar).\n\nThe reader can generate additional scalars and vectors (or\n\"functions\") from this information. To use vtkPLOT3DReader, you must\nspecify the particular function number for the scalar and vector you\nwant to visua",
    "lize. This implementation of the reader provides the\nfollowing functions. The scalar functions are:\n-1  - don't read or compute any scalars 100 - density 110 - pressure\n   120 - temperature 130 - enthalpy 140 - internal energy 144 -\n   kinetic energy 153 - velocity magnitude 163 - stagnation energy\n   170 - entropy 184 - swirl.\n\nThe vector functions are:\n-1  - don't read or compute any vectors 200",
    " - velocity 201 -\n   vorticity 202 - momentum 210 - pressure gradient.\n\n(Other functions are described in the PLOT3D spec, but only those\nlisted are implemented here.) Note that by default, this reader\ncreates the density scalar (100) and momentum vector (202) as output.\n(These are just read in from the solution file.) Please note that the\nvalidity of computation is a function of this class's gas ",
    "constants\n(R, Gamma) and the equations used. They may not be suitable for your\ncomputational domain.\n\nAdditionally, you can read other data and associate it as a\nvtkDataArray into the output's point attribute data. Use the method\nAddFunction() to list all the functions that you'd like to read.\nAddFunction() accepts an integer parameter that defines the function\nnumber.\n\nSee Also:\n\nvtkStructuredGri",
    "dSource vtkStructuredGrid\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPLOT3DReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPLOT3DReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPLOT3DReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

