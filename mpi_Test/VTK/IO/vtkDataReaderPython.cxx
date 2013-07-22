// python wrapper for vtkDataReader
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
#include "vtkDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkDataReader_Doc();


static PyObject *
PyvtkDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      tempr = op->vtkDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      tempr = op->vtkDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataReader::NewInstance();
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
PyvtkDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      tempr = op->vtkDataReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsFileValid(temp0);
      }
    else
      {
      tempr = op->vtkDataReader::IsFileValid(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileStructuredPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileStructuredPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsFileStructuredPoints();
      }
    else
      {
      tempr = op->vtkDataReader::IsFileStructuredPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_IsFilePolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFilePolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsFilePolyData();
      }
    else
      {
      tempr = op->vtkDataReader::IsFilePolyData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileStructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileStructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsFileStructuredGrid();
      }
    else
      {
      tempr = op->vtkDataReader::IsFileStructuredGrid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsFileUnstructuredGrid();
      }
    else
      {
      tempr = op->vtkDataReader::IsFileUnstructuredGrid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileRectilinearGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileRectilinearGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsFileRectilinearGrid();
      }
    else
      {
      tempr = op->vtkDataReader::IsFileRectilinearGrid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetInputString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputString(temp0);
      }
    else
      {
      op->vtkDataReader::SetInputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataReader_SetInputString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputString(temp0, temp1);
      }
    else
      {
      op->vtkDataReader::SetInputString(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataReader_SetInputString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkDataReader_SetInputString_s1(self, args);
    case 2:
      return PyvtkDataReader_SetInputString_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputString");
  return NULL;
}



static PyObject *
PyvtkDataReader_GetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputString();
      }
    else
      {
      tempr = op->vtkDataReader::GetInputString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetInputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputStringLength();
      }
    else
      {
      tempr = op->vtkDataReader::GetInputStringLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetBinaryInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinaryInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetBinaryInputString(temp0, temp1);
      }
    else
      {
      op->vtkDataReader::SetBinaryInputString(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetInputArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkCharArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCharArray"))
    {
    if (ap.IsBound())
      {
      op->SetInputArray(temp0);
      }
    else
      {
      op->vtkDataReader::SetInputArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetInputArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkCharArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputArray();
      }
    else
      {
      tempr = op->vtkDataReader::GetInputArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      tempr = op->vtkDataReader::GetHeader();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadFromInputString(temp0);
      }
    else
      {
      op->vtkDataReader::SetReadFromInputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadFromInputString();
      }
    else
      {
      tempr = op->vtkDataReader::GetReadFromInputString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadFromInputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadFromInputStringOn();
      }
    else
      {
      op->vtkDataReader::ReadFromInputStringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadFromInputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadFromInputStringOff();
      }
    else
      {
      op->vtkDataReader::ReadFromInputStringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      tempr = op->vtkDataReader::GetFileType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfScalarsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfScalarsInFile();
      }
    else
      {
      tempr = op->vtkDataReader::GetNumberOfScalarsInFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfVectorsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVectorsInFile();
      }
    else
      {
      tempr = op->vtkDataReader::GetNumberOfVectorsInFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfTensorsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTensorsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTensorsInFile();
      }
    else
      {
      tempr = op->vtkDataReader::GetNumberOfTensorsInFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfNormalsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNormalsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfNormalsInFile();
      }
    else
      {
      tempr = op->vtkDataReader::GetNumberOfNormalsInFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfTCoordsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTCoordsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTCoordsInFile();
      }
    else
      {
      tempr = op->vtkDataReader::GetNumberOfTCoordsInFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfFieldDataInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFieldDataInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFieldDataInFile();
      }
    else
      {
      tempr = op->vtkDataReader::GetNumberOfFieldDataInFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetScalarsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarsNameInFile(temp0);
      }
    else
      {
      tempr = op->vtkDataReader::GetScalarsNameInFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetVectorsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorsNameInFile(temp0);
      }
    else
      {
      tempr = op->vtkDataReader::GetVectorsNameInFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetTensorsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTensorsNameInFile(temp0);
      }
    else
      {
      tempr = op->vtkDataReader::GetTensorsNameInFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetNormalsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalsNameInFile(temp0);
      }
    else
      {
      tempr = op->vtkDataReader::GetNormalsNameInFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetTCoordsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTCoordsNameInFile(temp0);
      }
    else
      {
      tempr = op->vtkDataReader::GetTCoordsNameInFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetFieldDataNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldDataNameInFile(temp0);
      }
    else
      {
      tempr = op->vtkDataReader::GetFieldDataNameInFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetScalarsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      tempr = op->vtkDataReader::GetScalarsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetVectorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetVectorsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetVectorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      tempr = op->vtkDataReader::GetVectorsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetTensorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetTensorsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetTensorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      tempr = op->vtkDataReader::GetTensorsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetNormalsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      tempr = op->vtkDataReader::GetNormalsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetTCoordsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetTCoordsName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetTCoordsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      tempr = op->vtkDataReader::GetTCoordsName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetLookupTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetLookupTableName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetLookupTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      tempr = op->vtkDataReader::GetLookupTableName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetFieldDataName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      tempr = op->vtkDataReader::GetFieldDataName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadAllScalars(temp0);
      }
    else
      {
      op->vtkDataReader::SetReadAllScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadAllScalars();
      }
    else
      {
      tempr = op->vtkDataReader::GetReadAllScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllScalarsOn();
      }
    else
      {
      op->vtkDataReader::ReadAllScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllScalarsOff();
      }
    else
      {
      op->vtkDataReader::ReadAllScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadAllVectors(temp0);
      }
    else
      {
      op->vtkDataReader::SetReadAllVectors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadAllVectors();
      }
    else
      {
      tempr = op->vtkDataReader::GetReadAllVectors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllVectorsOn();
      }
    else
      {
      op->vtkDataReader::ReadAllVectorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllVectorsOff();
      }
    else
      {
      op->vtkDataReader::ReadAllVectorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadAllNormals(temp0);
      }
    else
      {
      op->vtkDataReader::SetReadAllNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadAllNormals();
      }
    else
      {
      tempr = op->vtkDataReader::GetReadAllNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllNormalsOn();
      }
    else
      {
      op->vtkDataReader::ReadAllNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllNormalsOff();
      }
    else
      {
      op->vtkDataReader::ReadAllNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadAllTensors(temp0);
      }
    else
      {
      op->vtkDataReader::SetReadAllTensors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadAllTensors();
      }
    else
      {
      tempr = op->vtkDataReader::GetReadAllTensors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllTensorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllTensorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllTensorsOn();
      }
    else
      {
      op->vtkDataReader::ReadAllTensorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllTensorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllTensorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllTensorsOff();
      }
    else
      {
      op->vtkDataReader::ReadAllTensorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllColorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllColorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadAllColorScalars(temp0);
      }
    else
      {
      op->vtkDataReader::SetReadAllColorScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllColorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllColorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadAllColorScalars();
      }
    else
      {
      tempr = op->vtkDataReader::GetReadAllColorScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllColorScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllColorScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllColorScalarsOn();
      }
    else
      {
      op->vtkDataReader::ReadAllColorScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllColorScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllColorScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllColorScalarsOff();
      }
    else
      {
      op->vtkDataReader::ReadAllColorScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadAllTCoords(temp0);
      }
    else
      {
      op->vtkDataReader::SetReadAllTCoords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadAllTCoords();
      }
    else
      {
      tempr = op->vtkDataReader::GetReadAllTCoords();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllTCoordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllTCoordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllTCoordsOn();
      }
    else
      {
      op->vtkDataReader::ReadAllTCoordsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllTCoordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllTCoordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllTCoordsOff();
      }
    else
      {
      op->vtkDataReader::ReadAllTCoordsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadAllFields(temp0);
      }
    else
      {
      op->vtkDataReader::SetReadAllFields(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadAllFields();
      }
    else
      {
      tempr = op->vtkDataReader::GetReadAllFields();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllFieldsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllFieldsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllFieldsOn();
      }
    else
      {
      op->vtkDataReader::ReadAllFieldsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllFieldsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllFieldsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllFieldsOff();
      }
    else
      {
      op->vtkDataReader::ReadAllFieldsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_OpenVTKFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenVTKFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->OpenVTKFile();
      }
    else
      {
      tempr = op->vtkDataReader::OpenVTKFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadHeader();
      }
    else
      {
      tempr = op->vtkDataReader::ReadHeader();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkDataSet *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadCellData(temp0, temp1);
      }
    else
      {
      tempr = op->vtkDataReader::ReadCellData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkDataSet *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadPointData(temp0, temp1);
      }
    else
      {
      tempr = op->vtkDataReader::ReadPointData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkPointSet *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPointSet") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadPoints(temp0, temp1);
      }
    else
      {
      tempr = op->vtkDataReader::ReadPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataReader_ReadPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkGraph *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGraph") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadPoints(temp0, temp1);
      }
    else
      {
      tempr = op->vtkDataReader::ReadPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataReader_ReadPoints_Methods[] = {
  {NULL, PyvtkDataReader_ReadPoints_s1, 1,
   (char*)"@Oi *vtkPointSet"},
  {NULL, PyvtkDataReader_ReadPoints_s2, 1,
   (char*)"@Oi *vtkGraph"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDataReader_ReadPoints(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataReader_ReadPoints_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ReadPoints");
  return NULL;
}



static PyObject *
PyvtkDataReader_ReadVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkGraph *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGraph") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadVertexData(temp0, temp1);
      }
    else
      {
      tempr = op->vtkDataReader::ReadVertexData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadEdgeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadEdgeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkGraph *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGraph") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadEdgeData(temp0, temp1);
      }
    else
      {
      tempr = op->vtkDataReader::ReadEdgeData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadRowData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadRowData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkTable *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadRowData(temp0, temp1);
      }
    else
      {
      tempr = op->vtkDataReader::ReadRowData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkRectilinearGrid *temp0 = NULL;
  int temp1;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRectilinearGrid") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadCoordinates(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkDataReader::ReadCoordinates(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  int temp2;
  vtkAbstractArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadArray(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkDataReader::ReadArray(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkFieldData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadFieldData();
      }
    else
      {
      tempr = op->vtkDataReader::ReadFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_Read(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->Read(temp0);
      }
    else
      {
      tempr = op->vtkDataReader::Read(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_CloseVTKFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseVTKFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CloseVTKFile();
      }
    else
      {
      op->vtkDataReader::CloseVTKFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  char *save0 = NULL;
  const int size0 = 256;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->ReadLine(temp0);
      }
    else
      {
      tempr = op->vtkDataReader::ReadLine(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  char *save0 = NULL;
  const int size0 = 256;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->ReadString(temp0);
      }
    else
      {
      tempr = op->vtkDataReader::ReadString(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_LowerCase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LowerCase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  char *temp0 = NULL;
  size_t temp1 = 256;
  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      tempr = op->LowerCase(temp0, temp1);
      }
    else
      {
      tempr = op->vtkDataReader::LowerCase(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataReader_ReadMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkInformation *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->ReadMetaData(temp0);
      }
    else
      {
      tempr = op->vtkDataReader::ReadMetaData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataReader\nC++: vtkDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataReader\nC++: vtkDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkDataReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of vtk data file to read.\n"},
  {(char*)"GetFileName", PyvtkDataReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of vtk data file to read.\n"},
  {(char*)"IsFileValid", PyvtkDataReader_IsFileValid, 1,
   (char*)"V.IsFileValid(string) -> int\nC++: int IsFileValid(const char *dstype)\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {(char*)"IsFileStructuredPoints", PyvtkDataReader_IsFileStructuredPoints, 1,
   (char*)"V.IsFileStructuredPoints() -> int\nC++: int IsFileStructuredPoints()\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {(char*)"IsFilePolyData", PyvtkDataReader_IsFilePolyData, 1,
   (char*)"V.IsFilePolyData() -> int\nC++: int IsFilePolyData()\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {(char*)"IsFileStructuredGrid", PyvtkDataReader_IsFileStructuredGrid, 1,
   (char*)"V.IsFileStructuredGrid() -> int\nC++: int IsFileStructuredGrid()\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {(char*)"IsFileUnstructuredGrid", PyvtkDataReader_IsFileUnstructuredGrid, 1,
   (char*)"V.IsFileUnstructuredGrid() -> int\nC++: int IsFileUnstructuredGrid()\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {(char*)"IsFileRectilinearGrid", PyvtkDataReader_IsFileRectilinearGrid, 1,
   (char*)"V.IsFileRectilinearGrid() -> int\nC++: int IsFileRectilinearGrid()\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {(char*)"SetInputString", PyvtkDataReader_SetInputString, 1,
   (char*)"V.SetInputString(string)\nC++: void SetInputString(const char *in)\nV.SetInputString(string, int)\nC++: void SetInputString(const char *in, int len)\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {(char*)"GetInputString", PyvtkDataReader_GetInputString, 1,
   (char*)"V.GetInputString() -> string\nC++: char *GetInputString()\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {(char*)"GetInputStringLength", PyvtkDataReader_GetInputStringLength, 1,
   (char*)"V.GetInputStringLength() -> int\nC++: int GetInputStringLength()\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {(char*)"SetBinaryInputString", PyvtkDataReader_SetBinaryInputString, 1,
   (char*)"V.SetBinaryInputString(string, int)\nC++: void SetBinaryInputString(const char *, int len)\n\nSpecify the InputString for use when reading from a character\narray. Optionally include the length for binary strings. Note\nthat a copy of the string is made and stored. If this causes\nexceedingly large memory consumption, consider using InputArray\ninstead.\n"},
  {(char*)"SetInputArray", PyvtkDataReader_SetInputArray, 1,
   (char*)"V.SetInputArray(vtkCharArray)\nC++: virtual void SetInputArray(vtkCharArray *)\n\nSpecify the vtkCharArray to be used  when reading from a string.\nIf set, this array has precedence over InputString. Use this\ninstead of InputString to avoid the extra memory copy. It should\nbe noted that if the underlying char* is owned by the user (\nvtkCharArray::SetArray(array, 1); ) and is deleted before the\nreader, bad things will happen during a pipeline update.\n"},
  {(char*)"GetInputArray", PyvtkDataReader_GetInputArray, 1,
   (char*)"V.GetInputArray() -> vtkCharArray\nC++: vtkCharArray *GetInputArray()\n\nSpecify the vtkCharArray to be used  when reading from a string.\nIf set, this array has precedence over InputString. Use this\ninstead of InputString to avoid the extra memory copy. It should\nbe noted that if the underlying char* is owned by the user (\nvtkCharArray::SetArray(array, 1); ) and is deleted before the\nreader, bad things will happen during a pipeline update.\n"},
  {(char*)"GetHeader", PyvtkDataReader_GetHeader, 1,
   (char*)"V.GetHeader() -> string\nC++: char *GetHeader()\n\nGet the header from the vtk data file.\n"},
  {(char*)"SetReadFromInputString", PyvtkDataReader_SetReadFromInputString, 1,
   (char*)"V.SetReadFromInputString(int)\nC++: void SetReadFromInputString(int a)\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {(char*)"GetReadFromInputString", PyvtkDataReader_GetReadFromInputString, 1,
   (char*)"V.GetReadFromInputString() -> int\nC++: int GetReadFromInputString()\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {(char*)"ReadFromInputStringOn", PyvtkDataReader_ReadFromInputStringOn, 1,
   (char*)"V.ReadFromInputStringOn()\nC++: void ReadFromInputStringOn()\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {(char*)"ReadFromInputStringOff", PyvtkDataReader_ReadFromInputStringOff, 1,
   (char*)"V.ReadFromInputStringOff()\nC++: void ReadFromInputStringOff()\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {(char*)"GetFileType", PyvtkDataReader_GetFileType, 1,
   (char*)"V.GetFileType() -> int\nC++: int GetFileType()\n\nGet the type of file (ASCII or BINARY). Returned value only valid\nafter file has been read.\n"},
  {(char*)"GetNumberOfScalarsInFile", PyvtkDataReader_GetNumberOfScalarsInFile, 1,
   (char*)"V.GetNumberOfScalarsInFile() -> int\nC++: int GetNumberOfScalarsInFile()\n\nHow many attributes of various types are in this file? This\nrequires reading the file, so the filename must be set prior to\ninvoking this operation. (Note: file characteristics are cached,\nso only a single read is necessary to return file\ncharacteristics.)\n"},
  {(char*)"GetNumberOfVectorsInFile", PyvtkDataReader_GetNumberOfVectorsInFile, 1,
   (char*)"V.GetNumberOfVectorsInFile() -> int\nC++: int GetNumberOfVectorsInFile()\n\nHow many attributes of various types are in this file? This\nrequires reading the file, so the filename must be set prior to\ninvoking this operation. (Note: file characteristics are cached,\nso only a single read is necessary to return file\ncharacteristics.)\n"},
  {(char*)"GetNumberOfTensorsInFile", PyvtkDataReader_GetNumberOfTensorsInFile, 1,
   (char*)"V.GetNumberOfTensorsInFile() -> int\nC++: int GetNumberOfTensorsInFile()\n\nHow many attributes of various types are in this file? This\nrequires reading the file, so the filename must be set prior to\ninvoking this operation. (Note: file characteristics are cached,\nso only a single read is necessary to return file\ncharacteristics.)\n"},
  {(char*)"GetNumberOfNormalsInFile", PyvtkDataReader_GetNumberOfNormalsInFile, 1,
   (char*)"V.GetNumberOfNormalsInFile() -> int\nC++: int GetNumberOfNormalsInFile()\n\nHow many attributes of various types are in this file? This\nrequires reading the file, so the filename must be set prior to\ninvoking this operation. (Note: file characteristics are cached,\nso only a single read is necessary to return file\ncharacteristics.)\n"},
  {(char*)"GetNumberOfTCoordsInFile", PyvtkDataReader_GetNumberOfTCoordsInFile, 1,
   (char*)"V.GetNumberOfTCoordsInFile() -> int\nC++: int GetNumberOfTCoordsInFile()\n\nHow many attributes of various types are in this file? This\nrequires reading the file, so the filename must be set prior to\ninvoking this operation. (Note: file characteristics are cached,\nso only a single read is necessary to return file\ncharacteristics.)\n"},
  {(char*)"GetNumberOfFieldDataInFile", PyvtkDataReader_GetNumberOfFieldDataInFile, 1,
   (char*)"V.GetNumberOfFieldDataInFile() -> int\nC++: int GetNumberOfFieldDataInFile()\n\nHow many attributes of various types are in this file? This\nrequires reading the file, so the filename must be set prior to\ninvoking this operation. (Note: file characteristics are cached,\nso only a single read is necessary to return file\ncharacteristics.)\n"},
  {(char*)"GetScalarsNameInFile", PyvtkDataReader_GetScalarsNameInFile, 1,
   (char*)"V.GetScalarsNameInFile(int) -> string\nC++: const char *GetScalarsNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {(char*)"GetVectorsNameInFile", PyvtkDataReader_GetVectorsNameInFile, 1,
   (char*)"V.GetVectorsNameInFile(int) -> string\nC++: const char *GetVectorsNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {(char*)"GetTensorsNameInFile", PyvtkDataReader_GetTensorsNameInFile, 1,
   (char*)"V.GetTensorsNameInFile(int) -> string\nC++: const char *GetTensorsNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {(char*)"GetNormalsNameInFile", PyvtkDataReader_GetNormalsNameInFile, 1,
   (char*)"V.GetNormalsNameInFile(int) -> string\nC++: const char *GetNormalsNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {(char*)"GetTCoordsNameInFile", PyvtkDataReader_GetTCoordsNameInFile, 1,
   (char*)"V.GetTCoordsNameInFile(int) -> string\nC++: const char *GetTCoordsNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {(char*)"GetFieldDataNameInFile", PyvtkDataReader_GetFieldDataNameInFile, 1,
   (char*)"V.GetFieldDataNameInFile(int) -> string\nC++: const char *GetFieldDataNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {(char*)"SetScalarsName", PyvtkDataReader_SetScalarsName, 1,
   (char*)"V.SetScalarsName(string)\nC++: void SetScalarsName(char *)\n\nSet the name of the scalar data to extract. If not specified,\nfirst scalar data encountered is extracted.\n"},
  {(char*)"GetScalarsName", PyvtkDataReader_GetScalarsName, 1,
   (char*)"V.GetScalarsName() -> string\nC++: char *GetScalarsName()\n\nSet the name of the scalar data to extract. If not specified,\nfirst scalar data encountered is extracted.\n"},
  {(char*)"SetVectorsName", PyvtkDataReader_SetVectorsName, 1,
   (char*)"V.SetVectorsName(string)\nC++: void SetVectorsName(char *)\n\nSet the name of the vector data to extract. If not specified,\nfirst vector data encountered is extracted.\n"},
  {(char*)"GetVectorsName", PyvtkDataReader_GetVectorsName, 1,
   (char*)"V.GetVectorsName() -> string\nC++: char *GetVectorsName()\n\nSet the name of the vector data to extract. If not specified,\nfirst vector data encountered is extracted.\n"},
  {(char*)"SetTensorsName", PyvtkDataReader_SetTensorsName, 1,
   (char*)"V.SetTensorsName(string)\nC++: void SetTensorsName(char *)\n\nSet the name of the tensor data to extract. If not specified,\nfirst tensor data encountered is extracted.\n"},
  {(char*)"GetTensorsName", PyvtkDataReader_GetTensorsName, 1,
   (char*)"V.GetTensorsName() -> string\nC++: char *GetTensorsName()\n\nSet the name of the tensor data to extract. If not specified,\nfirst tensor data encountered is extracted.\n"},
  {(char*)"SetNormalsName", PyvtkDataReader_SetNormalsName, 1,
   (char*)"V.SetNormalsName(string)\nC++: void SetNormalsName(char *)\n\nSet the name of the normal data to extract. If not specified,\nfirst normal data encountered is extracted.\n"},
  {(char*)"GetNormalsName", PyvtkDataReader_GetNormalsName, 1,
   (char*)"V.GetNormalsName() -> string\nC++: char *GetNormalsName()\n\nSet the name of the normal data to extract. If not specified,\nfirst normal data encountered is extracted.\n"},
  {(char*)"SetTCoordsName", PyvtkDataReader_SetTCoordsName, 1,
   (char*)"V.SetTCoordsName(string)\nC++: void SetTCoordsName(char *)\n\nSet the name of the texture coordinate data to extract. If not\nspecified, first texture coordinate data encountered is\nextracted.\n"},
  {(char*)"GetTCoordsName", PyvtkDataReader_GetTCoordsName, 1,
   (char*)"V.GetTCoordsName() -> string\nC++: char *GetTCoordsName()\n\nSet the name of the texture coordinate data to extract. If not\nspecified, first texture coordinate data encountered is\nextracted.\n"},
  {(char*)"SetLookupTableName", PyvtkDataReader_SetLookupTableName, 1,
   (char*)"V.SetLookupTableName(string)\nC++: void SetLookupTableName(char *)\n\nSet the name of the lookup table data to extract. If not\nspecified, uses lookup table named by scalar. Otherwise, this\nspecification supersedes.\n"},
  {(char*)"GetLookupTableName", PyvtkDataReader_GetLookupTableName, 1,
   (char*)"V.GetLookupTableName() -> string\nC++: char *GetLookupTableName()\n\nSet the name of the lookup table data to extract. If not\nspecified, uses lookup table named by scalar. Otherwise, this\nspecification supersedes.\n"},
  {(char*)"SetFieldDataName", PyvtkDataReader_SetFieldDataName, 1,
   (char*)"V.SetFieldDataName(string)\nC++: void SetFieldDataName(char *)\n\nSet the name of the field data to extract. If not specified, uses\nfirst field data encountered in file.\n"},
  {(char*)"GetFieldDataName", PyvtkDataReader_GetFieldDataName, 1,
   (char*)"V.GetFieldDataName() -> string\nC++: char *GetFieldDataName()\n\nSet the name of the field data to extract. If not specified, uses\nfirst field data encountered in file.\n"},
  {(char*)"SetReadAllScalars", PyvtkDataReader_SetReadAllScalars, 1,
   (char*)"V.SetReadAllScalars(int)\nC++: void SetReadAllScalars(int a)\n\nEnable reading all scalars.\n"},
  {(char*)"GetReadAllScalars", PyvtkDataReader_GetReadAllScalars, 1,
   (char*)"V.GetReadAllScalars() -> int\nC++: int GetReadAllScalars()\n\nEnable reading all scalars.\n"},
  {(char*)"ReadAllScalarsOn", PyvtkDataReader_ReadAllScalarsOn, 1,
   (char*)"V.ReadAllScalarsOn()\nC++: void ReadAllScalarsOn()\n\nEnable reading all scalars.\n"},
  {(char*)"ReadAllScalarsOff", PyvtkDataReader_ReadAllScalarsOff, 1,
   (char*)"V.ReadAllScalarsOff()\nC++: void ReadAllScalarsOff()\n\nEnable reading all scalars.\n"},
  {(char*)"SetReadAllVectors", PyvtkDataReader_SetReadAllVectors, 1,
   (char*)"V.SetReadAllVectors(int)\nC++: void SetReadAllVectors(int a)\n\nEnable reading all vectors.\n"},
  {(char*)"GetReadAllVectors", PyvtkDataReader_GetReadAllVectors, 1,
   (char*)"V.GetReadAllVectors() -> int\nC++: int GetReadAllVectors()\n\nEnable reading all vectors.\n"},
  {(char*)"ReadAllVectorsOn", PyvtkDataReader_ReadAllVectorsOn, 1,
   (char*)"V.ReadAllVectorsOn()\nC++: void ReadAllVectorsOn()\n\nEnable reading all vectors.\n"},
  {(char*)"ReadAllVectorsOff", PyvtkDataReader_ReadAllVectorsOff, 1,
   (char*)"V.ReadAllVectorsOff()\nC++: void ReadAllVectorsOff()\n\nEnable reading all vectors.\n"},
  {(char*)"SetReadAllNormals", PyvtkDataReader_SetReadAllNormals, 1,
   (char*)"V.SetReadAllNormals(int)\nC++: void SetReadAllNormals(int a)\n\nEnable reading all normals.\n"},
  {(char*)"GetReadAllNormals", PyvtkDataReader_GetReadAllNormals, 1,
   (char*)"V.GetReadAllNormals() -> int\nC++: int GetReadAllNormals()\n\nEnable reading all normals.\n"},
  {(char*)"ReadAllNormalsOn", PyvtkDataReader_ReadAllNormalsOn, 1,
   (char*)"V.ReadAllNormalsOn()\nC++: void ReadAllNormalsOn()\n\nEnable reading all normals.\n"},
  {(char*)"ReadAllNormalsOff", PyvtkDataReader_ReadAllNormalsOff, 1,
   (char*)"V.ReadAllNormalsOff()\nC++: void ReadAllNormalsOff()\n\nEnable reading all normals.\n"},
  {(char*)"SetReadAllTensors", PyvtkDataReader_SetReadAllTensors, 1,
   (char*)"V.SetReadAllTensors(int)\nC++: void SetReadAllTensors(int a)\n\nEnable reading all tensors.\n"},
  {(char*)"GetReadAllTensors", PyvtkDataReader_GetReadAllTensors, 1,
   (char*)"V.GetReadAllTensors() -> int\nC++: int GetReadAllTensors()\n\nEnable reading all tensors.\n"},
  {(char*)"ReadAllTensorsOn", PyvtkDataReader_ReadAllTensorsOn, 1,
   (char*)"V.ReadAllTensorsOn()\nC++: void ReadAllTensorsOn()\n\nEnable reading all tensors.\n"},
  {(char*)"ReadAllTensorsOff", PyvtkDataReader_ReadAllTensorsOff, 1,
   (char*)"V.ReadAllTensorsOff()\nC++: void ReadAllTensorsOff()\n\nEnable reading all tensors.\n"},
  {(char*)"SetReadAllColorScalars", PyvtkDataReader_SetReadAllColorScalars, 1,
   (char*)"V.SetReadAllColorScalars(int)\nC++: void SetReadAllColorScalars(int a)\n\nEnable reading all color scalars.\n"},
  {(char*)"GetReadAllColorScalars", PyvtkDataReader_GetReadAllColorScalars, 1,
   (char*)"V.GetReadAllColorScalars() -> int\nC++: int GetReadAllColorScalars()\n\nEnable reading all color scalars.\n"},
  {(char*)"ReadAllColorScalarsOn", PyvtkDataReader_ReadAllColorScalarsOn, 1,
   (char*)"V.ReadAllColorScalarsOn()\nC++: void ReadAllColorScalarsOn()\n\nEnable reading all color scalars.\n"},
  {(char*)"ReadAllColorScalarsOff", PyvtkDataReader_ReadAllColorScalarsOff, 1,
   (char*)"V.ReadAllColorScalarsOff()\nC++: void ReadAllColorScalarsOff()\n\nEnable reading all color scalars.\n"},
  {(char*)"SetReadAllTCoords", PyvtkDataReader_SetReadAllTCoords, 1,
   (char*)"V.SetReadAllTCoords(int)\nC++: void SetReadAllTCoords(int a)\n\nEnable reading all tcoords.\n"},
  {(char*)"GetReadAllTCoords", PyvtkDataReader_GetReadAllTCoords, 1,
   (char*)"V.GetReadAllTCoords() -> int\nC++: int GetReadAllTCoords()\n\nEnable reading all tcoords.\n"},
  {(char*)"ReadAllTCoordsOn", PyvtkDataReader_ReadAllTCoordsOn, 1,
   (char*)"V.ReadAllTCoordsOn()\nC++: void ReadAllTCoordsOn()\n\nEnable reading all tcoords.\n"},
  {(char*)"ReadAllTCoordsOff", PyvtkDataReader_ReadAllTCoordsOff, 1,
   (char*)"V.ReadAllTCoordsOff()\nC++: void ReadAllTCoordsOff()\n\nEnable reading all tcoords.\n"},
  {(char*)"SetReadAllFields", PyvtkDataReader_SetReadAllFields, 1,
   (char*)"V.SetReadAllFields(int)\nC++: void SetReadAllFields(int a)\n\nEnable reading all fields.\n"},
  {(char*)"GetReadAllFields", PyvtkDataReader_GetReadAllFields, 1,
   (char*)"V.GetReadAllFields() -> int\nC++: int GetReadAllFields()\n\nEnable reading all fields.\n"},
  {(char*)"ReadAllFieldsOn", PyvtkDataReader_ReadAllFieldsOn, 1,
   (char*)"V.ReadAllFieldsOn()\nC++: void ReadAllFieldsOn()\n\nEnable reading all fields.\n"},
  {(char*)"ReadAllFieldsOff", PyvtkDataReader_ReadAllFieldsOff, 1,
   (char*)"V.ReadAllFieldsOff()\nC++: void ReadAllFieldsOff()\n\nEnable reading all fields.\n"},
  {(char*)"OpenVTKFile", PyvtkDataReader_OpenVTKFile, 1,
   (char*)"V.OpenVTKFile() -> int\nC++: int OpenVTKFile()\n\nOpen a vtk data file. Returns zero if error.\n"},
  {(char*)"ReadHeader", PyvtkDataReader_ReadHeader, 1,
   (char*)"V.ReadHeader() -> int\nC++: int ReadHeader()\n\nRead the header of a vtk data file. Returns 0 if error.\n"},
  {(char*)"ReadCellData", PyvtkDataReader_ReadCellData, 1,
   (char*)"V.ReadCellData(vtkDataSet, int) -> int\nC++: int ReadCellData(vtkDataSet *ds, int numCells)\n\nRead the cell data of a vtk data file. The number of cells (from\nthe dataset) must match the number of cells defined in cell\nattributes (unless no geometry was defined).\n"},
  {(char*)"ReadPointData", PyvtkDataReader_ReadPointData, 1,
   (char*)"V.ReadPointData(vtkDataSet, int) -> int\nC++: int ReadPointData(vtkDataSet *ds, int numPts)\n\nRead the point data of a vtk data file. The number of points\n(from the dataset) must match the number of points defined in\npoint attributes (unless no geometry was defined).\n"},
  {(char*)"ReadPoints", PyvtkDataReader_ReadPoints, 1,
   (char*)"V.ReadPoints(vtkPointSet, int) -> int\nC++: int ReadPoints(vtkPointSet *ps, int numPts)\nV.ReadPoints(vtkGraph, int) -> int\nC++: int ReadPoints(vtkGraph *g, int numPts)\n\nRead point coordinates. Return 0 if error.\n"},
  {(char*)"ReadVertexData", PyvtkDataReader_ReadVertexData, 1,
   (char*)"V.ReadVertexData(vtkGraph, int) -> int\nC++: int ReadVertexData(vtkGraph *g, int numVertices)\n\nRead the vertex data of a vtk data file. The number of vertices\n(from the graph) must match the number of vertices defined in\nvertex attributes (unless no geometry was defined).\n"},
  {(char*)"ReadEdgeData", PyvtkDataReader_ReadEdgeData, 1,
   (char*)"V.ReadEdgeData(vtkGraph, int) -> int\nC++: int ReadEdgeData(vtkGraph *g, int numEdges)\n\nRead the edge data of a vtk data file. The number of edges (from\nthe graph) must match the number of edges defined in edge\nattributes (unless no geometry was defined).\n"},
  {(char*)"ReadRowData", PyvtkDataReader_ReadRowData, 1,
   (char*)"V.ReadRowData(vtkTable, int) -> int\nC++: int ReadRowData(vtkTable *t, int numEdges)\n\nRead the row data of a vtk data file.\n"},
  {(char*)"ReadCoordinates", PyvtkDataReader_ReadCoordinates, 1,
   (char*)"V.ReadCoordinates(vtkRectilinearGrid, int, int) -> int\nC++: int ReadCoordinates(vtkRectilinearGrid *rg, int axes,\n    int numCoords)\n\nRead the coordinates for a rectilinear grid. The axes parameter\nspecifies which coordinate axes (0,1,2) is being read.\n"},
  {(char*)"ReadArray", PyvtkDataReader_ReadArray, 1,
   (char*)"V.ReadArray(string, int, int) -> vtkAbstractArray\nC++: vtkAbstractArray *ReadArray(const char *dataType,\n    int numTuples, int numComp)\n\nHelper functions for reading data.\n"},
  {(char*)"ReadFieldData", PyvtkDataReader_ReadFieldData, 1,
   (char*)"V.ReadFieldData() -> vtkFieldData\nC++: vtkFieldData *ReadFieldData()\n\nHelper functions for reading data.\n"},
  {(char*)"Read", PyvtkDataReader_Read, 1,
   (char*)"V.Read(string) -> int\nC++: int Read(char *)\n\nInternal function to read in a value.  Returns zero if there was\nan error.\n"},
  {(char*)"CloseVTKFile", PyvtkDataReader_CloseVTKFile, 1,
   (char*)"V.CloseVTKFile()\nC++: void CloseVTKFile()\n\nClose the vtk file.\n"},
  {(char*)"ReadLine", PyvtkDataReader_ReadLine, 1,
   (char*)"V.ReadLine([char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char]) -> int\nC++: int ReadLine(char result[256])\n\nInternal function to read in a line up to 256 characters. Returns\nzero if there was an error.\n"},
  {(char*)"ReadString", PyvtkDataReader_ReadString, 1,
   (char*)"V.ReadString([char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char, char, char,\n    char, char, char, char, char, char, char, char]) -> int\nC++: int ReadString(char result[256])\n\nInternal function to read in a string up to 256 characters.\nReturns zero if there was an error.\n"},
  {(char*)"LowerCase", PyvtkDataReader_LowerCase, 1,
   (char*)"V.LowerCase(string, int) -> string\nC++: char *LowerCase(char *str, const size_t len=256)\n\nHelper method for reading in data.\n"},
  {(char*)"ReadMetaData", PyvtkDataReader_ReadMetaData, 1,
   (char*)"V.ReadMetaData(vtkInformation) -> int\nC++: virtual int ReadMetaData(vtkInformation *)\n\nRead the meta information from the file.  This needs to be public\nto it can be accessed by vtkDataSetReader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataReader_StaticNew()
{
  return vtkDataReader::New();
}

PyObject *PyVTKClass_vtkDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataReader_StaticNew,
    PyvtkDataReader_Methods,
    "vtkDataReader", modulename,
    NULL, NULL,
    PyvtkDataReader_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkDataReader - helper superclass for objects that read vtk data files\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkDataReader is a helper superclass that reads the vtk data file\nheader, dataset type, and attribute data (point and cell attributes\nsuch as scalars, vectors, normals, etc.) from a vtk data file.  See\ntext for the format of the various vtk file types.\n\nSee Also:\n\nvtkPolyDataReader vtkStructuredPointsReader vtkStructuredGridReader\nvtkUnstructuredGridReader vtkRectilinearGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_ASCII", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BINARY", o) != 0)
    {
    Py_DECREF(o);
    }

}

