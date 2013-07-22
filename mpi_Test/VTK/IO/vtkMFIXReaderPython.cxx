// python wrapper for vtkMFIXReader
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
#include "vtkMFIXReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMFIXReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMFIXReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMFIXReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMFIXReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkMFIXReader_Doc();


static PyObject *
PyvtkMFIXReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      tempr = op->vtkMFIXReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      tempr = op->vtkMFIXReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  vtkMFIXReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMFIXReader::NewInstance();
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
PyvtkMFIXReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMFIXReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMFIXReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      op->vtkMFIXReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      tempr = op->vtkMFIXReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      tempr = op->vtkMFIXReader::GetNumberOfCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPoints();
      }
    else
      {
      tempr = op->vtkMFIXReader::GetNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetNumberOfCellFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      tempr = op->vtkMFIXReader::GetNumberOfCellFields();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      op->vtkMFIXReader::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      tempr = op->vtkMFIXReader::GetTimeStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      tempr = op->vtkMFIXReader::GetNumberOfTimeSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      tempr = op->vtkMFIXReader::GetTimeStepRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_SetTimeStepRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      op->vtkMFIXReader::SetTimeStepRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMFIXReader_SetTimeStepRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      op->vtkMFIXReader::SetTimeStepRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMFIXReader_SetTimeStepRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkMFIXReader_SetTimeStepRange_s1(self, args);
    case 1:
      return PyvtkMFIXReader_SetTimeStepRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTimeStepRange");
  return NULL;
}



static PyObject *
PyvtkMFIXReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      tempr = op->vtkMFIXReader::GetNumberOfCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      tempr = op->vtkMFIXReader::GetCellArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      tempr = op->vtkMFIXReader::GetCellArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

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
      op->vtkMFIXReader::SetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_DisableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisableAllCellArrays();
      }
    else
      {
      op->vtkMFIXReader::DisableAllCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMFIXReader_EnableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMFIXReader *op = static_cast<vtkMFIXReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableAllCellArrays();
      }
    else
      {
      op->vtkMFIXReader::EnableAllCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMFIXReader_Methods[] = {
  {(char*)"GetClassName", PyvtkMFIXReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMFIXReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMFIXReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMFIXReader\nC++: vtkMFIXReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMFIXReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMFIXReader\nC++: vtkMFIXReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkMFIXReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify the file name of the MFIX Restart data file to read.\n"},
  {(char*)"GetFileName", PyvtkMFIXReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify the file name of the MFIX Restart data file to read.\n"},
  {(char*)"GetNumberOfCells", PyvtkMFIXReader_GetNumberOfCells, 1,
   (char*)"V.GetNumberOfCells() -> int\nC++: int GetNumberOfCells()\n\nGet the total number of cells. The number of cells is only valid\nafter a successful read of the data file is performed.\n"},
  {(char*)"GetNumberOfPoints", PyvtkMFIXReader_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: int GetNumberOfPoints()\n\nGet the total number of nodes. The number of nodes is only valid\nafter a successful read of the data file is performed.\n"},
  {(char*)"GetNumberOfCellFields", PyvtkMFIXReader_GetNumberOfCellFields, 1,
   (char*)"V.GetNumberOfCellFields() -> int\nC++: int GetNumberOfCellFields()\n\nGet the number of data components at the nodes and cells.\n"},
  {(char*)"SetTimeStep", PyvtkMFIXReader_SetTimeStep, 1,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(int a)\n\nWhich TimeStep to read.\n"},
  {(char*)"GetTimeStep", PyvtkMFIXReader_GetTimeStep, 1,
   (char*)"V.GetTimeStep() -> int\nC++: int GetTimeStep()\n\nWhich TimeStep to read.\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkMFIXReader_GetNumberOfTimeSteps, 1,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nReturns the number of timesteps.\n"},
  {(char*)"GetTimeStepRange", PyvtkMFIXReader_GetTimeStepRange, 1,
   (char*)"V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {(char*)"SetTimeStepRange", PyvtkMFIXReader_SetTimeStepRange, 1,
   (char*)"V.SetTimeStepRange(int, int)\nC++: void SetTimeStepRange(int, int)\nV.SetTimeStepRange((int, int))\nC++: void SetTimeStepRange(int a[2])\n\n"},
  {(char*)"GetNumberOfCellArrays", PyvtkMFIXReader_GetNumberOfCellArrays, 1,
   (char*)"V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays(void)\n\n"},
  {(char*)"GetCellArrayName", PyvtkMFIXReader_GetCellArrayName, 1,
   (char*)"V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nGet the name of the  cell array with the given index in the\ninput.\n"},
  {(char*)"GetCellArrayStatus", PyvtkMFIXReader_GetCellArrayStatus, 1,
   (char*)"V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet/Set whether the cell array with the given name is to be read.\n"},
  {(char*)"SetCellArrayStatus", PyvtkMFIXReader_SetCellArrayStatus, 1,
   (char*)"V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nGet/Set whether the cell array with the given name is to be read.\n"},
  {(char*)"DisableAllCellArrays", PyvtkMFIXReader_DisableAllCellArrays, 1,
   (char*)"V.DisableAllCellArrays()\nC++: void DisableAllCellArrays()\n\nTurn on/off all cell arrays.\n"},
  {(char*)"EnableAllCellArrays", PyvtkMFIXReader_EnableAllCellArrays, 1,
   (char*)"V.EnableAllCellArrays()\nC++: void EnableAllCellArrays()\n\nTurn on/off all cell arrays.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMFIXReader_StaticNew()
{
  return vtkMFIXReader::New();
}

PyObject *PyVTKClass_vtkMFIXReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMFIXReader_StaticNew,
    PyvtkMFIXReader_Methods,
    "vtkMFIXReader", modulename,
    NULL, NULL,
    PyvtkMFIXReader_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMFIXReader_Doc()
{
  static const char *docstring[] = {
    "vtkMFIXReader - reads a dataset in MFIX file format\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkMFIXReader creates an unstructured grid dataset. It reads a\nrestart file and a set of sp files.  The restart file contains the\nmesh information.  MFIX meshes are either cylindrical or rectilinear,\nbut this reader will convert them to an unstructured grid.  The sp\nfiles contain transient data for the cells.  Each sp file has one or\nmore variables stored inside it.\n\nSee Also:\n\nvtkGAMBITReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMFIXReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMFIXReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMFIXReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

