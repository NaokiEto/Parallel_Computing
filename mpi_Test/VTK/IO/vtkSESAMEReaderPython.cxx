// python wrapper for vtkSESAMEReader
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
#include "vtkSESAMEReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSESAMEReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSESAMEReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSESAMEReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSESAMEReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRectilinearGridSourceNew
extern "C" { PyObject *PyVTKClass_vtkRectilinearGridSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkRectilinearGridSourceNew
#endif

static const char **PyvtkSESAMEReader_Doc();


static PyObject *
PyvtkSESAMEReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSESAMEReader *op = static_cast<vtkSESAMEReader *>(vp);

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
      tempr = op->vtkSESAMEReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSESAMEReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSESAMEReader *op = static_cast<vtkSESAMEReader *>(vp);

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
      tempr = op->vtkSESAMEReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSESAMEReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSESAMEReader *op = static_cast<vtkSESAMEReader *>(vp);

  vtkSESAMEReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSESAMEReader::NewInstance();
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
PyvtkSESAMEReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSESAMEReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSESAMEReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSESAMEReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSESAMEReader *op = static_cast<vtkSESAMEReader *>(vp);

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
      op->vtkSESAMEReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSESAMEReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSESAMEReader *op = static_cast<vtkSESAMEReader *>(vp);

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
      tempr = op->vtkSESAMEReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSESAMEReader_IsValidFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValidFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSESAMEReader *op = static_cast<vtkSESAMEReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsValidFile();
      }
    else
      {
      tempr = op->vtkSESAMEReader::IsValidFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSESAMEReader_GetNumberOfTableIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTableIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSESAMEReader *op = static_cast<vtkSESAMEReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTableIds();
      }
    else
      {
      tempr = op->vtkSESAMEReader::GetNumberOfTableIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSESAMEReader_GetTableIdsAsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableIdsAsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSESAMEReader *op = static_cast<vtkSESAMEReader *>(vp);

  vtkIntArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTableIdsAsArray();
      }
    else
      {
      tempr = op->vtkSESAMEReader::GetTableIdsAsArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSESAMEReader_SetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSESAMEReader *op = static_cast<vtkSESAMEReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTable(temp0);
      }
    else
      {
      op->vtkSESAMEReader::SetTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSESAMEReader_GetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSESAMEReader *op = static_cast<vtkSESAMEReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTable();
      }
    else
      {
      tempr = op->vtkSESAMEReader::GetTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSESAMEReader_GetNumberOfTableArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTableArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSESAMEReader *op = static_cast<vtkSESAMEReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTableArrayNames();
      }
    else
      {
      tempr = op->vtkSESAMEReader::GetNumberOfTableArrayNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSESAMEReader_GetNumberOfTableArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTableArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSESAMEReader *op = static_cast<vtkSESAMEReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTableArrays();
      }
    else
      {
      tempr = op->vtkSESAMEReader::GetNumberOfTableArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSESAMEReader_GetTableArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSESAMEReader *op = static_cast<vtkSESAMEReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTableArrayName(temp0);
      }
    else
      {
      tempr = op->vtkSESAMEReader::GetTableArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSESAMEReader_SetTableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSESAMEReader *op = static_cast<vtkSESAMEReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTableArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkSESAMEReader::SetTableArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSESAMEReader_GetTableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSESAMEReader *op = static_cast<vtkSESAMEReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTableArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkSESAMEReader::GetTableArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSESAMEReader_Methods[] = {
  {(char*)"GetClassName", PyvtkSESAMEReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSESAMEReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSESAMEReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSESAMEReader\nC++: vtkSESAMEReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSESAMEReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSESAMEReader\nC++: vtkSESAMEReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkSESAMEReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(const char *file)\n\nSet the filename to read\n"},
  {(char*)"GetFileName", PyvtkSESAMEReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: const char *GetFileName()\n\nGet the filename to read\n"},
  {(char*)"IsValidFile", PyvtkSESAMEReader_IsValidFile, 1,
   (char*)"V.IsValidFile() -> int\nC++: int IsValidFile()\n\nReturn whether this is a valid file\n"},
  {(char*)"GetNumberOfTableIds", PyvtkSESAMEReader_GetNumberOfTableIds, 1,
   (char*)"V.GetNumberOfTableIds() -> int\nC++: int GetNumberOfTableIds()\n\nGet the number of tables in this file\n"},
  {(char*)"GetTableIdsAsArray", PyvtkSESAMEReader_GetTableIdsAsArray, 1,
   (char*)"V.GetTableIdsAsArray() -> vtkIntArray\nC++: vtkIntArray *GetTableIdsAsArray()\n\nReturns the table ids in a data array.\n"},
  {(char*)"SetTable", PyvtkSESAMEReader_SetTable, 1,
   (char*)"V.SetTable(int)\nC++: void SetTable(int tableId)\n\nSet the table to read in\n"},
  {(char*)"GetTable", PyvtkSESAMEReader_GetTable, 1,
   (char*)"V.GetTable() -> int\nC++: int GetTable()\n\nGet the table to read in\n"},
  {(char*)"GetNumberOfTableArrayNames", PyvtkSESAMEReader_GetNumberOfTableArrayNames, 1,
   (char*)"V.GetNumberOfTableArrayNames() -> int\nC++: int GetNumberOfTableArrayNames()\n\nGet the number of arrays for the table to read\n"},
  {(char*)"GetNumberOfTableArrays", PyvtkSESAMEReader_GetNumberOfTableArrays, 1,
   (char*)"V.GetNumberOfTableArrays() -> int\nC++: int GetNumberOfTableArrays()\n\nGet the number of arrays for the table to read\n"},
  {(char*)"GetTableArrayName", PyvtkSESAMEReader_GetTableArrayName, 1,
   (char*)"V.GetTableArrayName(int) -> string\nC++: const char *GetTableArrayName(int index)\n\nGet the names of arrays for the table to read\n"},
  {(char*)"SetTableArrayStatus", PyvtkSESAMEReader_SetTableArrayStatus, 1,
   (char*)"V.SetTableArrayStatus(string, int)\nC++: void SetTableArrayStatus(const char *name, int flag)\n\nSet whether to read a table array\n"},
  {(char*)"GetTableArrayStatus", PyvtkSESAMEReader_GetTableArrayStatus, 1,
   (char*)"V.GetTableArrayStatus(string) -> int\nC++: int GetTableArrayStatus(const char *name)\n\nSet whether to read a table array\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSESAMEReader_StaticNew()
{
  return vtkSESAMEReader::New();
}

PyObject *PyVTKClass_vtkSESAMEReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSESAMEReader_StaticNew,
    PyvtkSESAMEReader_Methods,
    "vtkSESAMEReader", modulename,
    NULL, NULL,
    PyvtkSESAMEReader_Doc(),
    PyVTKClass_vtkRectilinearGridSourceNew(modulename));
  return cls;
}

const char **PyvtkSESAMEReader_Doc()
{
  static const char *docstring[] = {
    "vtkSESAMEReader - read SESAME files\n\n",
    "Superclass: vtkRectilinearGridSource\n\n",
    "vtkSESAMEReader is a source object that reads SESAME files. Currently\nsupported tables include 301, 304, 502, 503, 504, 505, 602\n\nSESAMEReader creates rectilinear grid datasets. The dimension of the\ndataset depends upon the number of densities and temperatures in the\ntable. Values at certain temperatures and densities are stored as\nscalars.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSESAMEReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSESAMEReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSESAMEReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

