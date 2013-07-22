// python wrapper for vtkXMLReader
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
#include "vtkXMLReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkXMLReader_Doc();


static PyObject *
PyvtkXMLReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      tempr = op->vtkXMLReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      tempr = op->vtkXMLReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  vtkXMLReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLReader::NewInstance();
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
PyvtkXMLReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      op->vtkXMLReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      tempr = op->vtkXMLReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      tempr = op->vtkXMLReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_GetOutputAsDataSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputAsDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputAsDataSet();
      }
    else
      {
      tempr = op->vtkXMLReader::GetOutputAsDataSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLReader_GetOutputAsDataSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputAsDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  int temp0;
  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputAsDataSet(temp0);
      }
    else
      {
      tempr = op->vtkXMLReader::GetOutputAsDataSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLReader_GetOutputAsDataSet(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLReader_GetOutputAsDataSet_s1(self, args);
    case 1:
      return PyvtkXMLReader_GetOutputAsDataSet_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputAsDataSet");
  return NULL;
}



static PyObject *
PyvtkXMLReader_GetPointDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  vtkDataArraySelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointDataArraySelection();
      }
    else
      {
      tempr = op->vtkXMLReader::GetPointDataArraySelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_GetCellDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  vtkDataArraySelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellDataArraySelection();
      }
    else
      {
      tempr = op->vtkXMLReader::GetCellDataArraySelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      tempr = op->vtkXMLReader::GetNumberOfPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      tempr = op->vtkXMLReader::GetNumberOfCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      tempr = op->vtkXMLReader::GetPointArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      tempr = op->vtkXMLReader::GetCellArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      tempr = op->vtkXMLReader::GetPointArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      tempr = op->vtkXMLReader::GetCellArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      op->vtkXMLReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      op->vtkXMLReader::SetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_CopyOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyOutputInformation(temp0, temp1);
      }
    else
      {
      op->vtkXMLReader::CopyOutputInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      op->vtkXMLReader::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      tempr = op->vtkXMLReader::GetTimeStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      tempr = op->vtkXMLReader::GetNumberOfTimeSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      tempr = op->vtkXMLReader::GetTimeStepRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLReader_SetTimeStepRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      op->vtkXMLReader::SetTimeStepRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXMLReader_SetTimeStepRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLReader *op = static_cast<vtkXMLReader *>(vp);

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
      op->vtkXMLReader::SetTimeStepRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkXMLReader_SetTimeStepRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkXMLReader_SetTimeStepRange_s1(self, args);
    case 1:
      return PyvtkXMLReader_SetTimeStepRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTimeStepRange");
  return NULL;
}


static PyMethodDef PyvtkXMLReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLReader\nC++: vtkXMLReader *NewInstance()\n\n"},
  {(char*)"SetFileName", PyvtkXMLReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nGet/Set the name of the input file.\n"},
  {(char*)"GetFileName", PyvtkXMLReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nGet/Set the name of the input file.\n"},
  {(char*)"CanReadFile", PyvtkXMLReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *name)\n\nTest whether the file with the given name can be read by this\nreader.\n"},
  {(char*)"GetOutputAsDataSet", PyvtkXMLReader_GetOutputAsDataSet, 1,
   (char*)"V.GetOutputAsDataSet() -> vtkDataSet\nC++: vtkDataSet *GetOutputAsDataSet()\nV.GetOutputAsDataSet(int) -> vtkDataSet\nC++: vtkDataSet *GetOutputAsDataSet(int index)\n\nGet the output as a vtkDataSet pointer.\n"},
  {(char*)"GetPointDataArraySelection", PyvtkXMLReader_GetPointDataArraySelection, 1,
   (char*)"V.GetPointDataArraySelection() -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetPointDataArraySelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {(char*)"GetCellDataArraySelection", PyvtkXMLReader_GetCellDataArraySelection, 1,
   (char*)"V.GetCellDataArraySelection() -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetCellDataArraySelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {(char*)"GetNumberOfPointArrays", PyvtkXMLReader_GetNumberOfPointArrays, 1,
   (char*)"V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nGet the number of point or cell arrays available in the input.\n"},
  {(char*)"GetNumberOfCellArrays", PyvtkXMLReader_GetNumberOfCellArrays, 1,
   (char*)"V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nGet the number of point or cell arrays available in the input.\n"},
  {(char*)"GetPointArrayName", PyvtkXMLReader_GetPointArrayName, 1,
   (char*)"V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nGet the name of the point or cell array with the given index in\nthe input.\n"},
  {(char*)"GetCellArrayName", PyvtkXMLReader_GetCellArrayName, 1,
   (char*)"V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nGet the name of the point or cell array with the given index in\nthe input.\n"},
  {(char*)"GetPointArrayStatus", PyvtkXMLReader_GetPointArrayStatus, 1,
   (char*)"V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"GetCellArrayStatus", PyvtkXMLReader_GetCellArrayStatus, 1,
   (char*)"V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"SetPointArrayStatus", PyvtkXMLReader_SetPointArrayStatus, 1,
   (char*)"V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"SetCellArrayStatus", PyvtkXMLReader_SetCellArrayStatus, 1,
   (char*)"V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"CopyOutputInformation", PyvtkXMLReader_CopyOutputInformation, 1,
   (char*)"V.CopyOutputInformation(vtkInformation, int)\nC++: virtual void CopyOutputInformation(vtkInformation *outInfo,\n    int port)\n\n"},
  {(char*)"SetTimeStep", PyvtkXMLReader_SetTimeStep, 1,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(int a)\n\nWhich TimeStep to read.\n"},
  {(char*)"GetTimeStep", PyvtkXMLReader_GetTimeStep, 1,
   (char*)"V.GetTimeStep() -> int\nC++: int GetTimeStep()\n\nWhich TimeStep to read.\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkXMLReader_GetNumberOfTimeSteps, 1,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\n"},
  {(char*)"GetTimeStepRange", PyvtkXMLReader_GetTimeStepRange, 1,
   (char*)"V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {(char*)"SetTimeStepRange", PyvtkXMLReader_SetTimeStepRange, 1,
   (char*)"V.SetTimeStepRange(int, int)\nC++: void SetTimeStepRange(int, int)\nV.SetTimeStepRange((int, int))\nC++: void SetTimeStepRange(int a[2])\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLReader_Methods,
    "vtkXMLReader", modulename,
    NULL, NULL,
    PyvtkXMLReader_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkXMLReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLReader - Superclass for VTK's XML format readers.\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkXMLReader uses vtkXMLDataParser to parse a VTK XML input file.\nConcrete subclasses then traverse the parsed file structure and\nextract data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

