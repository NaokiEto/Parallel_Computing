// python wrapper for vtkTableToSQLiteWriter
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
#include "vtkTableToSQLiteWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTableToSQLiteWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTableToSQLiteWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTableToSQLiteWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTableToSQLiteWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableToDatabaseWriterNew
extern "C" { PyObject *PyVTKClass_vtkTableToDatabaseWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableToDatabaseWriterNew
#endif

static const char **PyvtkTableToSQLiteWriter_Doc();


static PyObject *
PyvtkTableToSQLiteWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSQLiteWriter *op = static_cast<vtkTableToSQLiteWriter *>(vp);

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
      tempr = op->vtkTableToSQLiteWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSQLiteWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSQLiteWriter *op = static_cast<vtkTableToSQLiteWriter *>(vp);

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
      tempr = op->vtkTableToSQLiteWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSQLiteWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSQLiteWriter *op = static_cast<vtkTableToSQLiteWriter *>(vp);

  vtkTableToSQLiteWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTableToSQLiteWriter::NewInstance();
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
PyvtkTableToSQLiteWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTableToSQLiteWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTableToSQLiteWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToSQLiteWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSQLiteWriter *op = static_cast<vtkTableToSQLiteWriter *>(vp);

  vtkTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkTableToSQLiteWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTableToSQLiteWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToSQLiteWriter *op = static_cast<vtkTableToSQLiteWriter *>(vp);

  int temp0;
  vtkTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput(temp0);
      }
    else
      {
      tempr = op->vtkTableToSQLiteWriter::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTableToSQLiteWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkTableToSQLiteWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkTableToSQLiteWriter_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}


static PyMethodDef PyvtkTableToSQLiteWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkTableToSQLiteWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTableToSQLiteWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTableToSQLiteWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTableToSQLiteWriter\nC++: vtkTableToSQLiteWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTableToSQLiteWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTableToSQLiteWriter\nC++: vtkTableToSQLiteWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkTableToSQLiteWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkTable\nC++: vtkTable *GetInput()\nV.GetInput(int) -> vtkTable\nC++: vtkTable *GetInput(int port)\n\nGet the input to this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTableToSQLiteWriter_StaticNew()
{
  return vtkTableToSQLiteWriter::New();
}

PyObject *PyVTKClass_vtkTableToSQLiteWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTableToSQLiteWriter_StaticNew,
    PyvtkTableToSQLiteWriter_Methods,
    "vtkTableToSQLiteWriter", modulename,
    NULL, NULL,
    PyvtkTableToSQLiteWriter_Doc(),
    PyVTKClass_vtkTableToDatabaseWriterNew(modulename));
  return cls;
}

const char **PyvtkTableToSQLiteWriter_Doc()
{
  static const char *docstring[] = {
    "vtkTableToSQLiteWriter - store a vtkTable in an SQLite database\n\n",
    "Superclass: vtkTableToDatabaseWriter\n\n",
    "vtkTableToSQLiteWriter reads a vtkTable and inserts it into an SQLite\ndatabase.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTableToSQLiteWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTableToSQLiteWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTableToSQLiteWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

