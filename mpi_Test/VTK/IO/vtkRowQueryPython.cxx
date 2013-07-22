// python wrapper for vtkRowQuery
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
#include "vtkVariant.h"
#include "vtkRowQuery.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRowQuery(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRowQuery(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRowQueryNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRowQueryNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkRowQuery_Doc();


static PyObject *
PyvtkRowQuery_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

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
      tempr = op->vtkRowQuery::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRowQuery_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

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
      tempr = op->vtkRowQuery::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRowQuery_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

  vtkRowQuery *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRowQuery::NewInstance();
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
PyvtkRowQuery_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

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
PyvtkRowQuery_GetNumberOfFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetNumberOfFields();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRowQuery_GetFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = op->GetFieldName(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRowQuery_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = op->GetFieldType(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRowQuery_GetFieldIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldIndex(temp0);
      }
    else
      {
      tempr = op->vtkRowQuery::GetFieldIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRowQuery_NextRow_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NextRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->NextRow();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRowQuery_NextRow_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NextRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

  vtkVariantArray *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVariantArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->NextRow(temp0);
      }
    else
      {
      tempr = op->vtkRowQuery::NextRow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRowQuery_NextRow(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRowQuery_NextRow_s1(self, args);
    case 1:
      return PyvtkRowQuery_NextRow_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "NextRow");
  return NULL;
}



static PyObject *
PyvtkRowQuery_IsActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->IsActive();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRowQuery_DataValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

  vtkIdType temp0;
  vtkVariant tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = op->DataValue(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkRowQuery_HasError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

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
PyvtkRowQuery_GetLastErrorText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastErrorText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

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
PyvtkRowQuery_SetCaseSensitiveFieldNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaseSensitiveFieldNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCaseSensitiveFieldNames(temp0);
      }
    else
      {
      op->vtkRowQuery::SetCaseSensitiveFieldNames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRowQuery_GetCaseSensitiveFieldNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaseSensitiveFieldNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCaseSensitiveFieldNames();
      }
    else
      {
      tempr = op->vtkRowQuery::GetCaseSensitiveFieldNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRowQuery_CaseSensitiveFieldNamesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaseSensitiveFieldNamesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CaseSensitiveFieldNamesOn();
      }
    else
      {
      op->vtkRowQuery::CaseSensitiveFieldNamesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRowQuery_CaseSensitiveFieldNamesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaseSensitiveFieldNamesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRowQuery *op = static_cast<vtkRowQuery *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CaseSensitiveFieldNamesOff();
      }
    else
      {
      op->vtkRowQuery::CaseSensitiveFieldNamesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRowQuery_Methods[] = {
  {(char*)"GetClassName", PyvtkRowQuery_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRowQuery_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRowQuery_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRowQuery\nC++: vtkRowQuery *NewInstance()\n\n"},
  {(char*)"Execute", PyvtkRowQuery_Execute, 1,
   (char*)"V.Execute() -> bool\nC++: virtual bool Execute()\n\nExecute the query.  This must be performed before any field name\nor data access functions are used.\n"},
  {(char*)"GetNumberOfFields", PyvtkRowQuery_GetNumberOfFields, 1,
   (char*)"V.GetNumberOfFields() -> int\nC++: virtual int GetNumberOfFields()\n\nThe number of fields in the query result.\n"},
  {(char*)"GetFieldName", PyvtkRowQuery_GetFieldName, 1,
   (char*)"V.GetFieldName(int) -> string\nC++: virtual const char *GetFieldName(int i)\n\nReturn the name of the specified query field.\n"},
  {(char*)"GetFieldType", PyvtkRowQuery_GetFieldType, 1,
   (char*)"V.GetFieldType(int) -> int\nC++: virtual int GetFieldType(int i)\n\nReturn the type of the field, using the constants defined in\nvtkType.h.\n"},
  {(char*)"GetFieldIndex", PyvtkRowQuery_GetFieldIndex, 1,
   (char*)"V.GetFieldIndex(string) -> int\nC++: int GetFieldIndex(char *name)\n\nReturn the index of the specified query field. Uses\nGetNumberOfFields() and GetFieldName() to match field name.\n"},
  {(char*)"NextRow", PyvtkRowQuery_NextRow, 1,
   (char*)"V.NextRow() -> bool\nC++: virtual bool NextRow()\nV.NextRow(vtkVariantArray) -> bool\nC++: bool NextRow(vtkVariantArray *rowArray)\n\nAdvance row, return false if past end.\n"},
  {(char*)"IsActive", PyvtkRowQuery_IsActive, 1,
   (char*)"V.IsActive() -> bool\nC++: virtual bool IsActive()\n\nReturn true if the query is active (i.e. execution was successful\nand results are ready to be fetched).  Returns false on error or\ninactive query.\n"},
  {(char*)"DataValue", PyvtkRowQuery_DataValue, 1,
   (char*)"V.DataValue(int) -> vtkVariant\nC++: virtual vtkVariant DataValue(vtkIdType c)\n\nReturn data in current row, field c\n"},
  {(char*)"HasError", PyvtkRowQuery_HasError, 1,
   (char*)"V.HasError() -> bool\nC++: virtual bool HasError()\n\nReturns true if an error is set, otherwise false.\n"},
  {(char*)"GetLastErrorText", PyvtkRowQuery_GetLastErrorText, 1,
   (char*)"V.GetLastErrorText() -> string\nC++: virtual const char *GetLastErrorText()\n\nGet the last error text from the query\n"},
  {(char*)"SetCaseSensitiveFieldNames", PyvtkRowQuery_SetCaseSensitiveFieldNames, 1,
   (char*)"V.SetCaseSensitiveFieldNames(bool)\nC++: void SetCaseSensitiveFieldNames(bool a)\n\nMany databases do not preserve case in field names.  This can\ncause GetFieldIndex to fail if you search for a field named\nsomeFieldName when the database actually stores it as\nSOMEFIELDNAME.  This ivar controls whether GetFieldIndex()\nexpects field names to be case-sensitive.  The default is OFF,\ni.e. case is not preserved.\n"},
  {(char*)"GetCaseSensitiveFieldNames", PyvtkRowQuery_GetCaseSensitiveFieldNames, 1,
   (char*)"V.GetCaseSensitiveFieldNames() -> bool\nC++: bool GetCaseSensitiveFieldNames()\n\nMany databases do not preserve case in field names.  This can\ncause GetFieldIndex to fail if you search for a field named\nsomeFieldName when the database actually stores it as\nSOMEFIELDNAME.  This ivar controls whether GetFieldIndex()\nexpects field names to be case-sensitive.  The default is OFF,\ni.e. case is not preserved.\n"},
  {(char*)"CaseSensitiveFieldNamesOn", PyvtkRowQuery_CaseSensitiveFieldNamesOn, 1,
   (char*)"V.CaseSensitiveFieldNamesOn()\nC++: void CaseSensitiveFieldNamesOn()\n\nMany databases do not preserve case in field names.  This can\ncause GetFieldIndex to fail if you search for a field named\nsomeFieldName when the database actually stores it as\nSOMEFIELDNAME.  This ivar controls whether GetFieldIndex()\nexpects field names to be case-sensitive.  The default is OFF,\ni.e. case is not preserved.\n"},
  {(char*)"CaseSensitiveFieldNamesOff", PyvtkRowQuery_CaseSensitiveFieldNamesOff, 1,
   (char*)"V.CaseSensitiveFieldNamesOff()\nC++: void CaseSensitiveFieldNamesOff()\n\nMany databases do not preserve case in field names.  This can\ncause GetFieldIndex to fail if you search for a field named\nsomeFieldName when the database actually stores it as\nSOMEFIELDNAME.  This ivar controls whether GetFieldIndex()\nexpects field names to be case-sensitive.  The default is OFF,\ni.e. case is not preserved.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkRowQueryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkRowQuery_Methods,
    "vtkRowQuery", modulename,
    NULL, NULL,
    PyvtkRowQuery_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkRowQuery_Doc()
{
  static const char *docstring[] = {
    "vtkRowQuery - abstract interface for queries that return\n\n",
    "Superclass: vtkObject\n\n",
    "The abstract superclass of query classes that return row-oriented\n(table) results.  A subclass will provide database-specific query\nparameters and implement the vtkRowQuery API to return query results:\n\nExecute() - Execute the query.  No results need to be retrieved at\nthis\n            point, unless you are performing caching.\n\nGetNumberOfFields() - After Execute() is performed, returns the\nnumber",
    "\n                      of fields in the query results.\n\nGetFieldName() - The name of the field at an index.\n\nGetFieldType() - The data type of the field at an index.\n\nNextRow() - Advances the query results by one row, and returns\nwhether\n            there are more rows left in the query.\n\nDataValue() - Extract a single data value from the current row.\n\nThanks:\n\nThanks to Andrew Wilson from Sandia ",
    "National Laboratories for his\nwork on the database classes.\n\nSee Also:\n\nvtkRowQueryToTable\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRowQuery(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRowQueryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRowQuery", o) != 0)
    {
    Py_DECREF(o);
    }

}

