// python wrapper for vtkSQLiteDatabase
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
#include "vtkStdString.h"
#include "vtkSQLiteDatabase.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSQLiteDatabase(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSQLiteDatabase(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSQLiteDatabaseNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSQLiteDatabaseNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSQLDatabaseNew
extern "C" { PyObject *PyVTKClass_vtkSQLDatabaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkSQLDatabaseNew
#endif

static const char **PyvtkSQLiteDatabase_Doc();


static PyObject *
PyvtkSQLiteDatabase_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

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
      tempr = op->vtkSQLiteDatabase::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

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
      tempr = op->vtkSQLiteDatabase::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  vtkSQLiteDatabase *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSQLiteDatabase::NewInstance();
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
PyvtkSQLiteDatabase_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSQLiteDatabase *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSQLiteDatabase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_Open_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  char *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->Open(temp0);
      }
    else
      {
      tempr = op->vtkSQLiteDatabase::Open(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLiteDatabase_Open_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  char *temp0 = NULL;
  int temp1;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->Open(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLiteDatabase::Open(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLiteDatabase_Open(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSQLiteDatabase_Open_s1(self, args);
    case 2:
      return PyvtkSQLiteDatabase_Open_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Open");
  return NULL;
}



static PyObject *
PyvtkSQLiteDatabase_Close(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Close");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Close();
      }
    else
      {
      op->vtkSQLiteDatabase::Close();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_IsOpen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOpen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsOpen();
      }
    else
      {
      tempr = op->vtkSQLiteDatabase::IsOpen();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_GetQueryInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQueryInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  vtkSQLQuery *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQueryInstance();
      }
    else
      {
      tempr = op->vtkSQLiteDatabase::GetQueryInstance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_GetTables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTables();
      }
    else
      {
      tempr = op->vtkSQLiteDatabase::GetTables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_GetRecord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  char *temp0 = NULL;
  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRecord(temp0);
      }
    else
      {
      tempr = op->vtkSQLiteDatabase::GetRecord(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_IsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  int temp0;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsSupported(temp0);
      }
    else
      {
      tempr = op->vtkSQLiteDatabase::IsSupported(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_HasError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasError();
      }
    else
      {
      tempr = op->vtkSQLiteDatabase::HasError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_GetLastErrorText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastErrorText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastErrorText();
      }
    else
      {
      tempr = op->vtkSQLiteDatabase::GetLastErrorText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_GetDatabaseType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDatabaseType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDatabaseType();
      }
    else
      {
      tempr = op->vtkSQLiteDatabase::GetDatabaseType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_GetDatabaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDatabaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDatabaseFileName();
      }
    else
      {
      tempr = op->vtkSQLiteDatabase::GetDatabaseFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_SetDatabaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDatabaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDatabaseFileName(temp0);
      }
    else
      {
      op->vtkSQLiteDatabase::SetDatabaseFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_GetURL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetURL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetURL();
      }
    else
      {
      tempr = op->vtkSQLiteDatabase::GetURL();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_GetColumnSpecification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnSpecification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  vtkSQLDatabaseSchema *temp0 = NULL;
  int temp1;
  int temp2;
  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSQLDatabaseSchema") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColumnSpecification(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSQLiteDatabase::GetColumnSpecification(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSQLiteDatabase_Methods[] = {
  {(char*)"GetClassName", PyvtkSQLiteDatabase_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSQLiteDatabase_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSQLiteDatabase_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSQLiteDatabase\nC++: vtkSQLiteDatabase *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSQLiteDatabase_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSQLiteDatabase\nC++: vtkSQLiteDatabase *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Open", PyvtkSQLiteDatabase_Open, 1,
   (char*)"V.Open(string) -> bool\nC++: bool Open(const char *password)\nV.Open(string, int) -> bool\nC++: bool Open(const char *password, int mode)\n\nOpen a new connection to the database.  You need to set the\nfilename before calling this function.  Returns true if the\ndatabase was opened successfully; false otherwise.\n- USE_EXISTING (default) - Fail if the file does not exist.\n- USE_EXISTING_OR_CREATE - Create a new file if necessary.\n- CREATE_OR_CLEAR - Create new or clear existing file.\n- CREATE - Create new, fail if file exists.\n"},
  {(char*)"Close", PyvtkSQLiteDatabase_Close, 1,
   (char*)"V.Close()\nC++: void Close()\n\nClose the connection to the database.\n"},
  {(char*)"IsOpen", PyvtkSQLiteDatabase_IsOpen, 1,
   (char*)"V.IsOpen() -> bool\nC++: bool IsOpen()\n\nReturn whether the database has an open connection\n"},
  {(char*)"GetQueryInstance", PyvtkSQLiteDatabase_GetQueryInstance, 1,
   (char*)"V.GetQueryInstance() -> vtkSQLQuery\nC++: vtkSQLQuery *GetQueryInstance()\n\nReturn an empty query on this database.\n"},
  {(char*)"GetTables", PyvtkSQLiteDatabase_GetTables, 1,
   (char*)"V.GetTables() -> vtkStringArray\nC++: vtkStringArray *GetTables()\n\nGet the list of tables from the database\n"},
  {(char*)"GetRecord", PyvtkSQLiteDatabase_GetRecord, 1,
   (char*)"V.GetRecord(string) -> vtkStringArray\nC++: vtkStringArray *GetRecord(const char *table)\n\nGet the list of fields for a particular table\n"},
  {(char*)"IsSupported", PyvtkSQLiteDatabase_IsSupported, 1,
   (char*)"V.IsSupported(int) -> bool\nC++: bool IsSupported(int feature)\n\nReturn whether a feature is supported by the database.\n"},
  {(char*)"HasError", PyvtkSQLiteDatabase_HasError, 1,
   (char*)"V.HasError() -> bool\nC++: bool HasError()\n\nDid the last operation generate an error\n"},
  {(char*)"GetLastErrorText", PyvtkSQLiteDatabase_GetLastErrorText, 1,
   (char*)"V.GetLastErrorText() -> string\nC++: const char *GetLastErrorText()\n\nGet the last error text from the database\n"},
  {(char*)"GetDatabaseType", PyvtkSQLiteDatabase_GetDatabaseType, 1,
   (char*)"V.GetDatabaseType() -> string\nC++: char *GetDatabaseType()\n\nString representing database type (e.g. \"sqlite\").\n"},
  {(char*)"GetDatabaseFileName", PyvtkSQLiteDatabase_GetDatabaseFileName, 1,
   (char*)"V.GetDatabaseFileName() -> string\nC++: char *GetDatabaseFileName()\n\nString representing the database filename.\n"},
  {(char*)"SetDatabaseFileName", PyvtkSQLiteDatabase_SetDatabaseFileName, 1,
   (char*)"V.SetDatabaseFileName(string)\nC++: void SetDatabaseFileName(char *)\n\nString representing the database filename.\n"},
  {(char*)"GetURL", PyvtkSQLiteDatabase_GetURL, 1,
   (char*)"V.GetURL() -> string\nC++: virtual vtkStdString GetURL()\n\nGet the URL of the database.\n"},
  {(char*)"GetColumnSpecification", PyvtkSQLiteDatabase_GetColumnSpecification, 1,
   (char*)"V.GetColumnSpecification(vtkSQLDatabaseSchema, int, int) -> string\nC++: virtual vtkStdString GetColumnSpecification(\n    vtkSQLDatabaseSchema *schema, int tblHandle, int colHandle)\n\nReturn the SQL string with the syntax to create a column inside a \"CREATE\nTABLE\" SQL statement. NB: this method implements the\nSQLite-specific syntax: <column name> <column type> <column\nattributes>\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSQLiteDatabase_StaticNew()
{
  return vtkSQLiteDatabase::New();
}

PyObject *PyVTKClass_vtkSQLiteDatabaseNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSQLiteDatabase_StaticNew,
    PyvtkSQLiteDatabase_Methods,
    "vtkSQLiteDatabase", modulename,
    NULL, NULL,
    PyvtkSQLiteDatabase_Doc(),
    PyVTKClass_vtkSQLDatabaseNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"USE_EXISTING", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"USE_EXISTING_OR_CREATE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"CREATE_OR_CLEAR", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"CREATE", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkSQLiteDatabase_Doc()
{
  static const char *docstring[] = {
    "vtkSQLiteDatabase - maintain a connection to an SQLite database\n\n",
    "Superclass: vtkSQLDatabase\n\n",
    "SQLite (http://www.sqlite.org) is a public-domain SQL database\nwritten in C++.  It's small, fast, and can be easily embedded inside\nother applications.  Its databases are stored in files.\n\nThis class provides a VTK interface to SQLite.  You do not need to\ndownload any external libraries: we include a copy of SQLite 3.3.16\nin VTK/Utilities/vtksqlite.\n\nIf you want to open a database that stays in me",
    "mory and never gets\nwritten to disk, pass in the URL 'sqlite://:memory:'; otherwise,\nspecifiy the file path by passing the URL 'sqlite://<file_path>'.\n\nThanks:\n\nThanks to Andrew Wilson and Philippe Pebay from Sandia National\nLaboratories for implementing this class.\n\nSee Also:\n\nvtkSQLiteQuery\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSQLiteDatabase(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSQLiteDatabaseNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSQLiteDatabase", o) != 0)
    {
    Py_DECREF(o);
    }

}

