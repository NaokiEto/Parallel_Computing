// python wrapper for vtkSQLiteToTableReader
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
#include "vtkSQLiteToTableReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSQLiteToTableReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSQLiteToTableReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSQLiteToTableReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSQLiteToTableReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDatabaseToTableReaderNew
extern "C" { PyObject *PyVTKClass_vtkDatabaseToTableReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDatabaseToTableReaderNew
#endif

static const char **PyvtkSQLiteToTableReader_Doc();


static PyObject *
PyvtkSQLiteToTableReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteToTableReader *op = static_cast<vtkSQLiteToTableReader *>(vp);

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
      tempr = op->vtkSQLiteToTableReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteToTableReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteToTableReader *op = static_cast<vtkSQLiteToTableReader *>(vp);

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
      tempr = op->vtkSQLiteToTableReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteToTableReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteToTableReader *op = static_cast<vtkSQLiteToTableReader *>(vp);

  vtkSQLiteToTableReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSQLiteToTableReader::NewInstance();
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
PyvtkSQLiteToTableReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSQLiteToTableReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSQLiteToTableReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSQLiteToTableReader_Methods[] = {
  {(char*)"GetClassName", PyvtkSQLiteToTableReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSQLiteToTableReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSQLiteToTableReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSQLiteToTableReader\nC++: vtkSQLiteToTableReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSQLiteToTableReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSQLiteToTableReader\nC++: vtkSQLiteToTableReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSQLiteToTableReader_StaticNew()
{
  return vtkSQLiteToTableReader::New();
}

PyObject *PyVTKClass_vtkSQLiteToTableReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSQLiteToTableReader_StaticNew,
    PyvtkSQLiteToTableReader_Methods,
    "vtkSQLiteToTableReader", modulename,
    NULL, NULL,
    PyvtkSQLiteToTableReader_Doc(),
    PyVTKClass_vtkDatabaseToTableReaderNew(modulename));
  return cls;
}

const char **PyvtkSQLiteToTableReader_Doc()
{
  static const char *docstring[] = {
    "vtkSQLiteToTableReader - Read an SQLite table as a vtkTable\n\n",
    "Superclass: vtkDatabaseToTableReader\n\n",
    "vtkSQLiteToTableReader reads a table from an SQLite database and\noutputs it as a vtkTable.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSQLiteToTableReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSQLiteToTableReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSQLiteToTableReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

