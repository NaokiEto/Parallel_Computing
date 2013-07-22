// python wrapper for vtkTableToDatabaseWriter
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
#include "vtkTableToDatabaseWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTableToDatabaseWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTableToDatabaseWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTableToDatabaseWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTableToDatabaseWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableWriterNew
extern "C" { PyObject *PyVTKClass_vtkTableWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableWriterNew
#endif

static const char **PyvtkTableToDatabaseWriter_Doc();


static PyObject *
PyvtkTableToDatabaseWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToDatabaseWriter *op = static_cast<vtkTableToDatabaseWriter *>(vp);

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
      tempr = op->vtkTableToDatabaseWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToDatabaseWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToDatabaseWriter *op = static_cast<vtkTableToDatabaseWriter *>(vp);

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
      tempr = op->vtkTableToDatabaseWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToDatabaseWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToDatabaseWriter *op = static_cast<vtkTableToDatabaseWriter *>(vp);

  vtkTableToDatabaseWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTableToDatabaseWriter::NewInstance();
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
PyvtkTableToDatabaseWriter_SetDatabase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDatabase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToDatabaseWriter *op = static_cast<vtkTableToDatabaseWriter *>(vp);

  vtkSQLDatabase *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSQLDatabase"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetDatabase(temp0);
      }
    else
      {
      tempr = op->vtkTableToDatabaseWriter::SetDatabase(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToDatabaseWriter_SetTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToDatabaseWriter *op = static_cast<vtkTableToDatabaseWriter *>(vp);

  char *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->SetTableName(temp0);
      }
    else
      {
      tempr = op->vtkTableToDatabaseWriter::SetTableName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToDatabaseWriter_TableNameIsNew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TableNameIsNew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToDatabaseWriter *op = static_cast<vtkTableToDatabaseWriter *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->TableNameIsNew();
      }
    else
      {
      tempr = op->vtkTableToDatabaseWriter::TableNameIsNew();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToDatabaseWriter_GetDatabase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDatabase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToDatabaseWriter *op = static_cast<vtkTableToDatabaseWriter *>(vp);

  vtkSQLDatabase *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDatabase();
      }
    else
      {
      tempr = op->vtkTableToDatabaseWriter::GetDatabase();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableToDatabaseWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToDatabaseWriter *op = static_cast<vtkTableToDatabaseWriter *>(vp);

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
      tempr = op->vtkTableToDatabaseWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTableToDatabaseWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToDatabaseWriter *op = static_cast<vtkTableToDatabaseWriter *>(vp);

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
      tempr = op->vtkTableToDatabaseWriter::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTableToDatabaseWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkTableToDatabaseWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkTableToDatabaseWriter_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}


static PyMethodDef PyvtkTableToDatabaseWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkTableToDatabaseWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTableToDatabaseWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTableToDatabaseWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTableToDatabaseWriter\nC++: vtkTableToDatabaseWriter *NewInstance()\n\n"},
  {(char*)"SetDatabase", PyvtkTableToDatabaseWriter_SetDatabase, 1,
   (char*)"V.SetDatabase(vtkSQLDatabase) -> bool\nC++: bool SetDatabase(vtkSQLDatabase *db)\n\nSet the database.  Must already be open.\n"},
  {(char*)"SetTableName", PyvtkTableToDatabaseWriter_SetTableName, 1,
   (char*)"V.SetTableName(string) -> bool\nC++: bool SetTableName(const char *name)\n\nSet the name of the new SQL table that you'd this writer to\ncreate. Returns false if the specified table already exists in\nthe database.\n"},
  {(char*)"TableNameIsNew", PyvtkTableToDatabaseWriter_TableNameIsNew, 1,
   (char*)"V.TableNameIsNew() -> bool\nC++: bool TableNameIsNew()\n\nCheck if the currently specified table name exists in the\ndatabase.\n"},
  {(char*)"GetDatabase", PyvtkTableToDatabaseWriter_GetDatabase, 1,
   (char*)"V.GetDatabase() -> vtkSQLDatabase\nC++: vtkSQLDatabase *GetDatabase()\n\n"},
  {(char*)"GetInput", PyvtkTableToDatabaseWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkTable\nC++: vtkTable *GetInput()\nV.GetInput(int) -> vtkTable\nC++: vtkTable *GetInput(int port)\n\nGet the input to this writer.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTableToDatabaseWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTableToDatabaseWriter_Methods,
    "vtkTableToDatabaseWriter", modulename,
    NULL, NULL,
    PyvtkTableToDatabaseWriter_Doc(),
    PyVTKClass_vtkTableWriterNew(modulename));
  return cls;
}

const char **PyvtkTableToDatabaseWriter_Doc()
{
  static const char *docstring[] = {
    "vtkTableToDatabaseWriter\n\n",
    "Superclass: vtkTableWriter\n\n",
    "vtkTableToDatabaseWriter abstract parent class that reads a vtkTable\nand inserts it into an SQL database.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTableToDatabaseWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTableToDatabaseWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTableToDatabaseWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

