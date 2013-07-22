// python wrapper for vtkDatabaseToTableReader
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
#include "vtkDatabaseToTableReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDatabaseToTableReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDatabaseToTableReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDatabaseToTableReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDatabaseToTableReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableReaderNew
extern "C" { PyObject *PyVTKClass_vtkTableReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableReaderNew
#endif

static const char **PyvtkDatabaseToTableReader_Doc();


static PyObject *
PyvtkDatabaseToTableReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDatabaseToTableReader *op = static_cast<vtkDatabaseToTableReader *>(vp);

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
      tempr = op->vtkDatabaseToTableReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDatabaseToTableReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDatabaseToTableReader *op = static_cast<vtkDatabaseToTableReader *>(vp);

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
      tempr = op->vtkDatabaseToTableReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDatabaseToTableReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDatabaseToTableReader *op = static_cast<vtkDatabaseToTableReader *>(vp);

  vtkDatabaseToTableReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDatabaseToTableReader::NewInstance();
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
PyvtkDatabaseToTableReader_SetDatabase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDatabase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDatabaseToTableReader *op = static_cast<vtkDatabaseToTableReader *>(vp);

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
      tempr = op->vtkDatabaseToTableReader::SetDatabase(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDatabaseToTableReader_SetTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDatabaseToTableReader *op = static_cast<vtkDatabaseToTableReader *>(vp);

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
      tempr = op->vtkDatabaseToTableReader::SetTableName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDatabaseToTableReader_CheckIfTableExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckIfTableExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDatabaseToTableReader *op = static_cast<vtkDatabaseToTableReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->CheckIfTableExists();
      }
    else
      {
      tempr = op->vtkDatabaseToTableReader::CheckIfTableExists();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDatabaseToTableReader_GetDatabase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDatabase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDatabaseToTableReader *op = static_cast<vtkDatabaseToTableReader *>(vp);

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
      tempr = op->vtkDatabaseToTableReader::GetDatabase();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDatabaseToTableReader_Methods[] = {
  {(char*)"GetClassName", PyvtkDatabaseToTableReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDatabaseToTableReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDatabaseToTableReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDatabaseToTableReader\nC++: vtkDatabaseToTableReader *NewInstance()\n\n"},
  {(char*)"SetDatabase", PyvtkDatabaseToTableReader_SetDatabase, 1,
   (char*)"V.SetDatabase(vtkSQLDatabase) -> bool\nC++: bool SetDatabase(vtkSQLDatabase *db)\n\nSet the database associated with this reader\n"},
  {(char*)"SetTableName", PyvtkDatabaseToTableReader_SetTableName, 1,
   (char*)"V.SetTableName(string) -> bool\nC++: bool SetTableName(const char *name)\n\nSet the name of the table that you'd like to convert to a\nvtkTable Returns false if the specified table does not exist in\nthe database.\n"},
  {(char*)"CheckIfTableExists", PyvtkDatabaseToTableReader_CheckIfTableExists, 1,
   (char*)"V.CheckIfTableExists() -> bool\nC++: bool CheckIfTableExists()\n\nCheck if the currently specified table name exists in the\ndatabase.\n"},
  {(char*)"GetDatabase", PyvtkDatabaseToTableReader_GetDatabase, 1,
   (char*)"V.GetDatabase() -> vtkSQLDatabase\nC++: vtkSQLDatabase *GetDatabase()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDatabaseToTableReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDatabaseToTableReader_Methods,
    "vtkDatabaseToTableReader", modulename,
    NULL, NULL,
    PyvtkDatabaseToTableReader_Doc(),
    PyVTKClass_vtkTableReaderNew(modulename));
  return cls;
}

const char **PyvtkDatabaseToTableReader_Doc()
{
  static const char *docstring[] = {
    "vtkDatabaseToTableReader - Read an SQL table as a vtkTable\n\n",
    "Superclass: vtkTableReader\n\n",
    "vtkDatabaseToTableReader reads a table from an SQL database,\noutputting it as a vtkTable.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDatabaseToTableReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDatabaseToTableReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDatabaseToTableReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

