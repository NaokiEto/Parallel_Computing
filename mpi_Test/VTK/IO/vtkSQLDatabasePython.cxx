// python wrapper for vtkSQLDatabase
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
#include "vtkSQLDatabase.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSQLDatabase(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSQLDatabase(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSQLDatabaseNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSQLDatabaseNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSQLDatabase_Doc();


static PyObject *
PyvtkSQLDatabase_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

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
      tempr = op->vtkSQLDatabase::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

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
      tempr = op->vtkSQLDatabase::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  vtkSQLDatabase *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSQLDatabase::NewInstance();
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
PyvtkSQLDatabase_Open(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  char *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = op->Open(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_Close(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Close");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Close();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_IsOpen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOpen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->IsOpen();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetQueryInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQueryInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  vtkSQLQuery *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetQueryInstance();

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
PyvtkSQLDatabase_HasError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->HasError();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetLastErrorText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastErrorText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetLastErrorText();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetDatabaseType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDatabaseType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetDatabaseType();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetTables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetTables();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetRecord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  char *temp0 = NULL;
  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = op->GetRecord(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_IsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

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
      tempr = op->vtkSQLDatabase::IsSupported(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetURL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetURL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetURL();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetTablePreamble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTablePreamble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  bool temp0 = false;
  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTablePreamble(temp0);
      }
    else
      {
      tempr = op->vtkSQLDatabase::GetTablePreamble(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetColumnSpecification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnSpecification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

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
      tempr = op->vtkSQLDatabase::GetColumnSpecification(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetIndexSpecification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexSpecification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  vtkSQLDatabaseSchema *temp0 = NULL;
  int temp1;
  int temp2;
  bool temp3;
  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSQLDatabaseSchema") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndexSpecification(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkSQLDatabase::GetIndexSpecification(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetTriggerSpecification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriggerSpecification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

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
      tempr = op->GetTriggerSpecification(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSQLDatabase::GetTriggerSpecification(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_CreateFromURL(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateFromURL");

  char *temp0 = NULL;
  vtkSQLDatabase *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkSQLDatabase::CreateFromURL(temp0);

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
PyvtkSQLDatabase_EffectSchema(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EffectSchema");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  vtkSQLDatabaseSchema *temp0 = NULL;
  bool temp1 = false;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSQLDatabaseSchema") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      tempr = op->EffectSchema(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabase::EffectSchema(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_UnRegisterAllCreateFromURLCallbacks(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UnRegisterAllCreateFromURLCallbacks");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkSQLDatabase::UnRegisterAllCreateFromURLCallbacks();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabase_DATABASE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATABASE");

  vtkInformationObjectBaseKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSQLDatabase::DATABASE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSQLDatabase_Methods[] = {
  {(char*)"GetClassName", PyvtkSQLDatabase_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSQLDatabase_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSQLDatabase_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSQLDatabase\nC++: vtkSQLDatabase *NewInstance()\n\n"},
  {(char*)"Open", PyvtkSQLDatabase_Open, 1,
   (char*)"V.Open(string) -> bool\nC++: virtual bool Open(const char *password)\n\nOpen a new connection to the database. You need to set up any\ndatabase parameters before calling this function. For database\nconnections that do not require a password, pass an empty string.\nReturns true is the database was opened sucessfully, and false\notherwise.\n"},
  {(char*)"Close", PyvtkSQLDatabase_Close, 1,
   (char*)"V.Close()\nC++: virtual void Close()\n\nClose the connection to the database.\n"},
  {(char*)"IsOpen", PyvtkSQLDatabase_IsOpen, 1,
   (char*)"V.IsOpen() -> bool\nC++: virtual bool IsOpen()\n\nReturn whether the database has an open connection.\n"},
  {(char*)"GetQueryInstance", PyvtkSQLDatabase_GetQueryInstance, 1,
   (char*)"V.GetQueryInstance() -> vtkSQLQuery\nC++: virtual vtkSQLQuery *GetQueryInstance()\n\nReturn an empty query on this database.\n"},
  {(char*)"HasError", PyvtkSQLDatabase_HasError, 1,
   (char*)"V.HasError() -> bool\nC++: virtual bool HasError()\n\nDid the last operation generate an error\n"},
  {(char*)"GetLastErrorText", PyvtkSQLDatabase_GetLastErrorText, 1,
   (char*)"V.GetLastErrorText() -> string\nC++: virtual const char *GetLastErrorText()\n\nGet the last error text from the database I'm using const so that\npeople do NOT use the standard vtkGetStringMacro in their\nimplementation, because 99% of the time that will not be the\ncorrect thing to do...\n"},
  {(char*)"GetDatabaseType", PyvtkSQLDatabase_GetDatabaseType, 1,
   (char*)"V.GetDatabaseType() -> string\nC++: virtual char *GetDatabaseType()\n\nGet the type of the database (e.g. mysql, psql,..).\n"},
  {(char*)"GetTables", PyvtkSQLDatabase_GetTables, 1,
   (char*)"V.GetTables() -> vtkStringArray\nC++: virtual vtkStringArray *GetTables()\n\nGet the list of tables from the database.\n"},
  {(char*)"GetRecord", PyvtkSQLDatabase_GetRecord, 1,
   (char*)"V.GetRecord(string) -> vtkStringArray\nC++: virtual vtkStringArray *GetRecord(const char *table)\n\nGet the list of fields for a particular table.\n"},
  {(char*)"IsSupported", PyvtkSQLDatabase_IsSupported, 1,
   (char*)"V.IsSupported(int) -> bool\nC++: virtual bool IsSupported(int feature)\n\nReturn whether a feature is supported by the database.\n"},
  {(char*)"GetURL", PyvtkSQLDatabase_GetURL, 1,
   (char*)"V.GetURL() -> string\nC++: virtual vtkStdString GetURL()\n\nGet the URL of the database.\n"},
  {(char*)"GetTablePreamble", PyvtkSQLDatabase_GetTablePreamble, 1,
   (char*)"V.GetTablePreamble(bool) -> string\nC++: virtual vtkStdString GetTablePreamble(bool)\n\nReturn the SQL string with the syntax of the preamble following a \"CREATE\nTABLE\" SQL statement. NB: by default, this method returns an\nempty string. It must be overwritten for those SQL backends which\nallow such preambles such as, e.g., MySQL.\n"},
  {(char*)"GetColumnSpecification", PyvtkSQLDatabase_GetColumnSpecification, 1,
   (char*)"V.GetColumnSpecification(vtkSQLDatabaseSchema, int, int) -> string\nC++: virtual vtkStdString GetColumnSpecification(\n    vtkSQLDatabaseSchema *schema, int tblHandle, int colHandle)\n\nReturn the SQL string with the syntax to create a column inside a \"CREATE\nTABLE\" SQL statement. NB: this method implements the following\nminimally-portable syntax: <column name> <column type> <column\nattributes> It must be overwritten for those SQL backends which\nhave a different syntax such as, e.g., MySQL.\n"},
  {(char*)"GetIndexSpecification", PyvtkSQLDatabase_GetIndexSpecification, 1,
   (char*)"V.GetIndexSpecification(vtkSQLDatabaseSchema, int, int, bool)\n    -> string\nC++: virtual vtkStdString GetIndexSpecification(\n    vtkSQLDatabaseSchema *schema, int tblHandle, int idxHandle,\n    bool &skipped)\n\nReturn the SQL string with the syntax to create an index inside a \"CREATE\nTABLE\" SQL statement. NB1: this method implements the following\nminimally-portable syntax: <index type> [<index name>] (<column\nname 1>,... ) It must be overwritten for those SQL backends which\nhave a different syntax such as, e.g., MySQL. NB2: this method\ndoes not assume that INDEX creation is supported within a CREATE\nTABLE statement. Therefore, should such an INDEX arise in the\nschema, a CREATE INDEX statement is returned and skipped is set\nto true. Otherwise, skipped will always be returned false.\n"},
  {(char*)"GetTriggerSpecification", PyvtkSQLDatabase_GetTriggerSpecification, 1,
   (char*)"V.GetTriggerSpecification(vtkSQLDatabaseSchema, int, int)\n    -> string\nC++: virtual vtkStdString GetTriggerSpecification(\n    vtkSQLDatabaseSchema *schema, int tblHandle, int trgHandle)\n\nReturn the SQL string with the syntax to create a trigger using a \"CREATE\nTRIGGER\" SQL statement. NB1: support is contingent on\nVTK_FEATURE_TRIGGERS being recognized as a supported feature. Not\nall backends (e.g., SQLite) support it. NB2: this method\nimplements the following minimally-portable syntax: <trigger\nname> {BEFORE | AFTER} ON <table name> FOR EACH ROW <trigger\naction> It must be overwritten for those SQL backends which have\na different syntax such as, e.g., PostgreSQL.\n"},
  {(char*)"CreateFromURL", PyvtkSQLDatabase_CreateFromURL, 1,
   (char*)"V.CreateFromURL(string) -> vtkSQLDatabase\nC++: static vtkSQLDatabase *CreateFromURL(const char *URL)\n\nCreate a the proper subclass given a URL. The URL format for SQL\ndatabases is a true URL of the form:\n \n'protocol://'[[username[':'password]'@']hostname[':'port]]'/'[dbna\nme] .\n"},
  {(char*)"EffectSchema", PyvtkSQLDatabase_EffectSchema, 1,
   (char*)"V.EffectSchema(vtkSQLDatabaseSchema, bool) -> bool\nC++: virtual bool EffectSchema(vtkSQLDatabaseSchema *,\n    bool dropIfExists=false)\n\nEffect a database schema.\n"},
  {(char*)"UnRegisterAllCreateFromURLCallbacks", PyvtkSQLDatabase_UnRegisterAllCreateFromURLCallbacks, 1,
   (char*)"V.UnRegisterAllCreateFromURLCallbacks()\nC++: static void UnRegisterAllCreateFromURLCallbacks()\n\nProvides mechanism to register/unregister additional callbacks to\ncreate concrete subclasses of vtkSQLDatabase to handle different\nprotocols. The registered callbacks are tried in the order they\nare registered.\n"},
  {(char*)"DATABASE", PyvtkSQLDatabase_DATABASE, 1,
   (char*)"V.DATABASE() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *DATABASE()\n\nStores the database class pointer as an information key. This is\ncurrently used to store database pointers as part of 'data on\ndemand' data objects. For example: The application may have a\ntable/tree/whatever of documents, the data structure is storing\nthe meta-data but not the full text. Further down the pipeline\nalgorithms or views may want to retrieve additional information\n(full text)for specific documents.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSQLDatabaseNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSQLDatabase_Methods,
    "vtkSQLDatabase", modulename,
    NULL, NULL,
    PyvtkSQLDatabase_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSQLDatabase_Doc()
{
  static const char *docstring[] = {
    "vtkSQLDatabase - maintain a connection to an sql database\n\n",
    "Superclass: vtkObject\n\n",
    "Abstract base class for all SQL database connection classes. Manages\na connection to the database, and is responsible for creating\ninstances of the associated vtkSQLQuery objects associated with this\nclass in order to perform execute queries on the database. To allow\nconnections to a new type of database, create both a subclass of this\nclass and vtkSQLQuery, and implement the required functions:\n\n",
    "Open() - open the database connection, if possible. Close() - close\nthe connection. GetQueryInstance() - create and return an instance of\nthe vtkSQLQuery\n                     subclass associated with the database type.\n\nThe subclass should also provide API to set connection parameters.\n\nThis class also provides the function EffectSchema to transform a\ndatabase schema into a SQL database.\n\nThanks:\n",
    "\nThanks to Andrew Wilson from Sandia National Laboratories for his\nwork on the database classes and for the SQLite example. Thanks to\nDavid Thompson and Philippe Pebay from Sandia National Laboratories\nfor implementing this class.\n\nSee Also:\n\nvtkSQLQuery vtkSQLDatabaseSchema\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSQLDatabase(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSQLDatabaseNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSQLDatabase", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1000);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQL_FEATURE_TRANSACTIONS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1001);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQL_FEATURE_QUERY_SIZE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1002);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQL_FEATURE_BLOB", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1003);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQL_FEATURE_UNICODE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1004);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQL_FEATURE_PREPARED_QUERIES", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1005);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQL_FEATURE_NAMED_PLACEHOLDERS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1006);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQL_FEATURE_POSITIONAL_PLACEHOLDERS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1007);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQL_FEATURE_LAST_INSERT_ID", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1008);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQL_FEATURE_BATCH_OPERATIONS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1009);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQL_FEATURE_TRIGGERS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(32);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQL_DEFAULT_COLUMN_SIZE", o) != 0)
    {
    Py_DECREF(o);
    }

}

