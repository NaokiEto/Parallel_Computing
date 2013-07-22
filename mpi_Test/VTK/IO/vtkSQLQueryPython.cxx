// python wrapper for vtkSQLQuery
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
#include "vtkVariant.h"
#include "vtkSQLQuery.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSQLQuery(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSQLQuery(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSQLQueryNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSQLQueryNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRowQueryNew
extern "C" { PyObject *PyVTKClass_vtkRowQueryNew(const char *); }
#define DECLARED_PyVTKClass_vtkRowQueryNew
#endif

static const char **PyvtkSQLQuery_Doc();


static PyObject *
PyvtkSQLQuery_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

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
      tempr = op->vtkSQLQuery::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLQuery_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

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
      tempr = op->vtkSQLQuery::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLQuery_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  vtkSQLQuery *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSQLQuery::NewInstance();
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
PyvtkSQLQuery_SetQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  char *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->SetQuery(temp0);
      }
    else
      {
      tempr = op->vtkSQLQuery::SetQuery(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLQuery_GetQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQuery();
      }
    else
      {
      tempr = op->vtkSQLQuery::GetQuery();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLQuery_IsActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsActive();
      }
    else
      {
      tempr = op->vtkSQLQuery::IsActive();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLQuery_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->Execute();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLQuery_BeginTransaction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginTransaction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->BeginTransaction();
      }
    else
      {
      tempr = op->vtkSQLQuery::BeginTransaction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLQuery_CommitTransaction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CommitTransaction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->CommitTransaction();
      }
    else
      {
      tempr = op->vtkSQLQuery::CommitTransaction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLQuery_RollbackTransaction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RollbackTransaction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->RollbackTransaction();
      }
    else
      {
      tempr = op->vtkSQLQuery::RollbackTransaction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLQuery_GetDatabase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDatabase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

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
      tempr = op->vtkSQLQuery::GetDatabase();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLQuery_BindParameter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  int temp0;
  int temp1;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->BindParameter(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLQuery::BindParameter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLQuery_BindParameter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  int temp0;
  long temp1;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->BindParameter(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLQuery::BindParameter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLQuery_BindParameter_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  int temp0;
  long long temp1;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->BindParameter(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLQuery::BindParameter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLQuery_BindParameter_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  int temp0;
  double temp1;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->BindParameter(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLQuery::BindParameter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLQuery_BindParameter_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  int temp0;
  char *temp1 = NULL;
  size_t temp2;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->BindParameter(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSQLQuery::BindParameter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLQuery_BindParameter_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  int temp0;
  vtkStdString temp1;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->BindParameter(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLQuery::BindParameter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLQuery_BindParameter_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  int temp0;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      tempr = op->BindParameter(temp0, *temp1);
      }
    else
      {
      tempr = op->vtkSQLQuery::BindParameter(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkSQLQuery_BindParameter_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  int temp0;
  void  *temp1 = NULL;
  size_t temp2;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->BindParameter(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSQLQuery::BindParameter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSQLQuery_BindParameter_Methods[] = {
  {NULL, PyvtkSQLQuery_BindParameter_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkSQLQuery_BindParameter_s2, 1,
   (char*)"@il"},
  {NULL, PyvtkSQLQuery_BindParameter_s3, 1,
   (char*)"@iL"},
  {NULL, PyvtkSQLQuery_BindParameter_s4, 1,
   (char*)"@id"},
  {NULL, PyvtkSQLQuery_BindParameter_s5, 1,
   (char*)"@izK"},
  {NULL, PyvtkSQLQuery_BindParameter_s6, 1,
   (char*)"@is"},
  {NULL, PyvtkSQLQuery_BindParameter_s7, 1,
   (char*)"@iO vtkVariant"},
  {NULL, PyvtkSQLQuery_BindParameter_s8, 1,
   (char*)"@is#K"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSQLQuery_BindParameter(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSQLQuery_BindParameter_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "BindParameter");
  return NULL;
}



static PyObject *
PyvtkSQLQuery_ClearParameterBindings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearParameterBindings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->ClearParameterBindings();
      }
    else
      {
      tempr = op->vtkSQLQuery::ClearParameterBindings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLQuery_EscapeString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EscapeString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  vtkStdString temp0;
  bool temp1 = true;
  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      tempr = op->EscapeString(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLQuery::EscapeString(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSQLQuery_Methods[] = {
  {(char*)"GetClassName", PyvtkSQLQuery_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSQLQuery_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSQLQuery_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSQLQuery\nC++: vtkSQLQuery *NewInstance()\n\n"},
  {(char*)"SetQuery", PyvtkSQLQuery_SetQuery, 1,
   (char*)"V.SetQuery(string) -> bool\nC++: virtual bool SetQuery(const char *query)\n\nThe query string to be executed.  Since some databases will\nprocess the query string as soon as it's set, this method returns\na boolean to indicate success or failure.\n"},
  {(char*)"GetQuery", PyvtkSQLQuery_GetQuery, 1,
   (char*)"V.GetQuery() -> string\nC++: virtual const char *GetQuery()\n\nThe query string to be executed.  Since some databases will\nprocess the query string as soon as it's set, this method returns\na boolean to indicate success or failure.\n"},
  {(char*)"IsActive", PyvtkSQLQuery_IsActive, 1,
   (char*)"V.IsActive() -> bool\nC++: bool IsActive()\n\nReturn true if the query is active (i.e. execution was successful\nand results are ready to be fetched).  Returns false on error or\ninactive query.\n"},
  {(char*)"Execute", PyvtkSQLQuery_Execute, 1,
   (char*)"V.Execute() -> bool\nC++: virtual bool Execute()\n\nExecute the query.  This must be performed before any field name\nor data access functions are used.\n"},
  {(char*)"BeginTransaction", PyvtkSQLQuery_BeginTransaction, 1,
   (char*)"V.BeginTransaction() -> bool\nC++: virtual bool BeginTransaction()\n\nBegin, commit, or roll back a transaction.  If the underlying\ndatabase does not support transactions these calls will do\nnothing.\n"},
  {(char*)"CommitTransaction", PyvtkSQLQuery_CommitTransaction, 1,
   (char*)"V.CommitTransaction() -> bool\nC++: virtual bool CommitTransaction()\n\nBegin, commit, or roll back a transaction.  If the underlying\ndatabase does not support transactions these calls will do\nnothing.\n"},
  {(char*)"RollbackTransaction", PyvtkSQLQuery_RollbackTransaction, 1,
   (char*)"V.RollbackTransaction() -> bool\nC++: virtual bool RollbackTransaction()\n\nBegin, commit, or roll back a transaction.  If the underlying\ndatabase does not support transactions these calls will do\nnothing.\n"},
  {(char*)"GetDatabase", PyvtkSQLQuery_GetDatabase, 1,
   (char*)"V.GetDatabase() -> vtkSQLDatabase\nC++: vtkSQLDatabase *GetDatabase()\n\nReturn the database associated with the query.\n"},
  {(char*)"BindParameter", PyvtkSQLQuery_BindParameter, 1,
   (char*)"V.BindParameter(int, int) -> bool\nC++: virtual bool BindParameter(int index, int value)\nV.BindParameter(int, int) -> bool\nC++: virtual bool BindParameter(int index, long value)\nV.BindParameter(int, int) -> bool\nC++: virtual bool BindParameter(int index, vtkTypeInt64 value)\nV.BindParameter(int, float) -> bool\nC++: virtual bool BindParameter(int index, double value)\nV.BindParameter(int, string, int) -> bool\nC++: virtual bool BindParameter(int index,\n    const char *stringValue, size_t length)\nV.BindParameter(int, string) -> bool\nC++: virtual bool BindParameter(int index,\n    const vtkStdString &string)\nV.BindParameter(int, vtkVariant) -> bool\nC++: virtual bool BindParameter(int index, vtkVariant var)\nV.BindParameter(int, , int) -> bool\nC++: virtual bool BindParameter(int index, const void *data,\n    size_t length)\n\n"},
  {(char*)"ClearParameterBindings", PyvtkSQLQuery_ClearParameterBindings, 1,
   (char*)"V.ClearParameterBindings() -> bool\nC++: virtual bool ClearParameterBindings()\n\nReset all parameter bindings to NULL.\n"},
  {(char*)"EscapeString", PyvtkSQLQuery_EscapeString, 1,
   (char*)"V.EscapeString(string, bool) -> string\nC++: virtual vtkStdString EscapeString(vtkStdString s,\n    bool addSurroundingQuotes=true)\n\nEscape a string for inclusion into an SQL query. If\naddSurroundingQuotes is true, then quotation marks appropriate to\nthe backend database will be added to enclose the escaped string.\nThis argument defaults to true.\n\nA default, simple-minded implementation is provided for database\nbackends that do not provde a way to escape strings for use\ninside queries.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSQLQueryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSQLQuery_Methods,
    "vtkSQLQuery", modulename,
    NULL, NULL,
    PyvtkSQLQuery_Doc(),
    PyVTKClass_vtkRowQueryNew(modulename));
  return cls;
}

const char **PyvtkSQLQuery_Doc()
{
  static const char *docstring[] = {
    "vtkSQLQuery - executes an sql query and retrieves results\n\n",
    "Superclass: vtkRowQuery\n\n",
    "The abstract superclass of SQL query classes.  Instances of\nsubclasses of vtkSQLQuery are created using the GetQueryInstance()\nfunction in vtkSQLDatabase.  To implement a query connection for a\nnew database type, subclass both vtkSQLDatabase and vtkSQLQuery, and\nimplement the required functions.  For the query class, this involves\nthe following:\n\nExecute() - Execute the query on the database.  No ",
    "results need to be\n            retrieved at this point, unless you are performing\ncaching.\n\nGetNumberOfFields() - After Execute() is performed, returns the\nnumber\n                      of fields in the query results.\n\nGetFieldName() - The name of the field at an index.\n\nGetFieldType() - The data type of the field at an index.\n\nNextRow() - Advances the query results by one row, and returns\nwhether\n",
    "            there are more rows left in the query.\n\nDataValue() - Extract a single data value from the current row.\n\nBegin/Rollback/CommitTransaction() - These methods are optional but\nrecommended if the database supports transactions.\n\nThanks:\n\nThanks to Andrew Wilson from Sandia National Laboratories for his\nwork on the database classes.\n\nSee Also:\n\nvtkSQLDatabase\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSQLQuery(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSQLQueryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSQLQuery", o) != 0)
    {
    Py_DECREF(o);
    }

}

