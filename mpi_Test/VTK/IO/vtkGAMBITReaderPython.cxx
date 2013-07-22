// python wrapper for vtkGAMBITReader
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
#include "vtkGAMBITReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGAMBITReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGAMBITReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGAMBITReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGAMBITReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkGAMBITReader_Doc();


static PyObject *
PyvtkGAMBITReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

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
      tempr = op->vtkGAMBITReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGAMBITReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

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
      tempr = op->vtkGAMBITReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGAMBITReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

  vtkGAMBITReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGAMBITReader::NewInstance();
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
PyvtkGAMBITReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGAMBITReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGAMBITReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGAMBITReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

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
      op->vtkGAMBITReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGAMBITReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

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
      tempr = op->vtkGAMBITReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGAMBITReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

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
      tempr = op->vtkGAMBITReader::GetNumberOfCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGAMBITReader_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

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
      tempr = op->vtkGAMBITReader::GetNumberOfNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGAMBITReader_GetNumberOfNodeFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

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
      tempr = op->vtkGAMBITReader::GetNumberOfNodeFields();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGAMBITReader_GetNumberOfCellFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGAMBITReader *op = static_cast<vtkGAMBITReader *>(vp);

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
      tempr = op->vtkGAMBITReader::GetNumberOfCellFields();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGAMBITReader_Methods[] = {
  {(char*)"GetClassName", PyvtkGAMBITReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGAMBITReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGAMBITReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGAMBITReader\nC++: vtkGAMBITReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGAMBITReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGAMBITReader\nC++: vtkGAMBITReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkGAMBITReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify the file name of the GAMBIT data file to read.\n"},
  {(char*)"GetFileName", PyvtkGAMBITReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify the file name of the GAMBIT data file to read.\n"},
  {(char*)"GetNumberOfCells", PyvtkGAMBITReader_GetNumberOfCells, 1,
   (char*)"V.GetNumberOfCells() -> int\nC++: int GetNumberOfCells()\n\nGet the total number of cells. The number of cells is only valid\nafter a successful read of the data file is performed.\n"},
  {(char*)"GetNumberOfNodes", PyvtkGAMBITReader_GetNumberOfNodes, 1,
   (char*)"V.GetNumberOfNodes() -> int\nC++: int GetNumberOfNodes()\n\nGet the total number of nodes. The number of nodes is only valid\nafter a successful read of the data file is performed.\n"},
  {(char*)"GetNumberOfNodeFields", PyvtkGAMBITReader_GetNumberOfNodeFields, 1,
   (char*)"V.GetNumberOfNodeFields() -> int\nC++: int GetNumberOfNodeFields()\n\nGet the number of data components at the nodes and cells.\n"},
  {(char*)"GetNumberOfCellFields", PyvtkGAMBITReader_GetNumberOfCellFields, 1,
   (char*)"V.GetNumberOfCellFields() -> int\nC++: int GetNumberOfCellFields()\n\nGet the number of data components at the nodes and cells.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGAMBITReader_StaticNew()
{
  return vtkGAMBITReader::New();
}

PyObject *PyVTKClass_vtkGAMBITReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGAMBITReader_StaticNew,
    PyvtkGAMBITReader_Methods,
    "vtkGAMBITReader", modulename,
    NULL, NULL,
    PyvtkGAMBITReader_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGAMBITReader_Doc()
{
  static const char *docstring[] = {
    "vtkGAMBITReader - reads a dataset in Fluent GAMBIT neutral file format\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkGAMBITReader creates an unstructured grid dataset. It reads ASCII\nfiles stored in GAMBIT neutral format, with optional data stored at\nthe nodes or at the cells of the model. A cell-based fielddata stores\nthe material id.\n\nSee Also:\n\nvtkAVSucdReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGAMBITReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGAMBITReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGAMBITReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

