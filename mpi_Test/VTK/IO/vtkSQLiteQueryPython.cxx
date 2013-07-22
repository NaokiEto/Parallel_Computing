// python wrapper for vtkSQLiteQuery
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
#include "vtkStdString.h"
#include "vtkSQLiteQuery.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSQLiteQuery(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSQLiteQuery(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSQLiteQueryNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSQLiteQueryNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSQLQueryNew
extern "C" { PyObject *PyVTKClass_vtkSQLQueryNew(const char *); }
#define DECLARED_PyVTKClass_vtkSQLQueryNew
#endif

static const char **PyvtkSQLiteQuery_Doc();


static PyObject *
PyvtkSQLiteQuery_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  vtkSQLiteQuery *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSQLiteQuery::NewInstance();
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
PyvtkSQLiteQuery_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSQLiteQuery *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSQLiteQuery::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_SetQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::SetQuery(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Execute();
      }
    else
      {
      tempr = op->vtkSQLiteQuery::Execute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_GetNumberOfFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFields();
      }
    else
      {
      tempr = op->vtkSQLiteQuery::GetNumberOfFields();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_GetFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldName(temp0);
      }
    else
      {
      tempr = op->vtkSQLiteQuery::GetFieldName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldType(temp0);
      }
    else
      {
      tempr = op->vtkSQLiteQuery::GetFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_NextRow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NextRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NextRow();
      }
    else
      {
      tempr = op->vtkSQLiteQuery::NextRow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_HasError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::HasError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_BeginTransaction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginTransaction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::BeginTransaction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_RollbackTransaction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RollbackTransaction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::RollbackTransaction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_CommitTransaction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CommitTransaction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::CommitTransaction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_DataValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  vtkIdType temp0;
  vtkVariant tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->DataValue(temp0);
      }
    else
      {
      tempr = op->vtkSQLiteQuery::DataValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_GetLastErrorText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastErrorText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::GetLastErrorText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_BindParameter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::BindParameter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLiteQuery_BindParameter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::BindParameter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLiteQuery_BindParameter_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::BindParameter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLiteQuery_BindParameter_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::BindParameter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLiteQuery_BindParameter_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::BindParameter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLiteQuery_BindParameter_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::BindParameter(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLiteQuery_BindParameter_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::BindParameter(temp0, *temp1);
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
PyvtkSQLiteQuery_BindParameter_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::BindParameter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSQLiteQuery_BindParameter_Methods[] = {
  {NULL, PyvtkSQLiteQuery_BindParameter_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkSQLiteQuery_BindParameter_s2, 1,
   (char*)"@il"},
  {NULL, PyvtkSQLiteQuery_BindParameter_s3, 1,
   (char*)"@iL"},
  {NULL, PyvtkSQLiteQuery_BindParameter_s4, 1,
   (char*)"@id"},
  {NULL, PyvtkSQLiteQuery_BindParameter_s5, 1,
   (char*)"@izK"},
  {NULL, PyvtkSQLiteQuery_BindParameter_s6, 1,
   (char*)"@is"},
  {NULL, PyvtkSQLiteQuery_BindParameter_s7, 1,
   (char*)"@iO vtkVariant"},
  {NULL, PyvtkSQLiteQuery_BindParameter_s8, 1,
   (char*)"@is#K"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSQLiteQuery_BindParameter(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSQLiteQuery_BindParameter_Methods;
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
PyvtkSQLiteQuery_ClearParameterBindings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearParameterBindings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      tempr = op->vtkSQLiteQuery::ClearParameterBindings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSQLiteQuery_Methods[] = {
  {(char*)"GetClassName", PyvtkSQLiteQuery_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSQLiteQuery_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSQLiteQuery_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSQLiteQuery\nC++: vtkSQLiteQuery *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSQLiteQuery_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSQLiteQuery\nC++: vtkSQLiteQuery *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetQuery", PyvtkSQLiteQuery_SetQuery, 1,
   (char*)"V.SetQuery(string) -> bool\nC++: bool SetQuery(const char *query)\n\nSet the SQL query string.  This must be performed before\nExecute() or BindParameter() can be called.\n"},
  {(char*)"Execute", PyvtkSQLiteQuery_Execute, 1,
   (char*)"V.Execute() -> bool\nC++: bool Execute()\n\nExecute the query.  This must be performed before any field name\nor data access functions are used.\n"},
  {(char*)"GetNumberOfFields", PyvtkSQLiteQuery_GetNumberOfFields, 1,
   (char*)"V.GetNumberOfFields() -> int\nC++: int GetNumberOfFields()\n\nThe number of fields in the query result.\n"},
  {(char*)"GetFieldName", PyvtkSQLiteQuery_GetFieldName, 1,
   (char*)"V.GetFieldName(int) -> string\nC++: const char *GetFieldName(int i)\n\nReturn the name of the specified query field.\n"},
  {(char*)"GetFieldType", PyvtkSQLiteQuery_GetFieldType, 1,
   (char*)"V.GetFieldType(int) -> int\nC++: int GetFieldType(int i)\n\nReturn the type of the field, using the constants defined in\nvtkType.h.\n"},
  {(char*)"NextRow", PyvtkSQLiteQuery_NextRow, 1,
   (char*)"V.NextRow() -> bool\nC++: bool NextRow()\n\nAdvance row, return false if past end.\n"},
  {(char*)"HasError", PyvtkSQLiteQuery_HasError, 1,
   (char*)"V.HasError() -> bool\nC++: bool HasError()\n\nReturn true if there is an error on the current query.\n"},
  {(char*)"BeginTransaction", PyvtkSQLiteQuery_BeginTransaction, 1,
   (char*)"V.BeginTransaction() -> bool\nC++: bool BeginTransaction()\n\nBegin, abort (roll back), or commit a transaction.\n"},
  {(char*)"RollbackTransaction", PyvtkSQLiteQuery_RollbackTransaction, 1,
   (char*)"V.RollbackTransaction() -> bool\nC++: bool RollbackTransaction()\n\nBegin, abort (roll back), or commit a transaction.\n"},
  {(char*)"CommitTransaction", PyvtkSQLiteQuery_CommitTransaction, 1,
   (char*)"V.CommitTransaction() -> bool\nC++: bool CommitTransaction()\n\nBegin, abort (roll back), or commit a transaction.\n"},
  {(char*)"DataValue", PyvtkSQLiteQuery_DataValue, 1,
   (char*)"V.DataValue(int) -> vtkVariant\nC++: vtkVariant DataValue(vtkIdType c)\n\nReturn data in current row, field c\n"},
  {(char*)"GetLastErrorText", PyvtkSQLiteQuery_GetLastErrorText, 1,
   (char*)"V.GetLastErrorText() -> string\nC++: const char *GetLastErrorText()\n\nGet the last error text from the query\n"},
  {(char*)"BindParameter", PyvtkSQLiteQuery_BindParameter, 1,
   (char*)"V.BindParameter(int, int) -> bool\nC++: bool BindParameter(int index, int value)\nV.BindParameter(int, int) -> bool\nC++: bool BindParameter(int index, long value)\nV.BindParameter(int, int) -> bool\nC++: bool BindParameter(int index, vtkTypeInt64 value)\nV.BindParameter(int, float) -> bool\nC++: bool BindParameter(int index, double value)\nV.BindParameter(int, string, int) -> bool\nC++: bool BindParameter(int index, const char *stringValue,\n    size_t length)\nV.BindParameter(int, string) -> bool\nC++: bool BindParameter(int index, const vtkStdString &string)\nV.BindParameter(int, vtkVariant) -> bool\nC++: bool BindParameter(int index, vtkVariant value)\nV.BindParameter(int, , int) -> bool\nC++: bool BindParameter(int index, const void *data,\n    size_t length)\n\nThe following methods bind a parameter value to a placeholder in\nthe SQL string.  See the documentation for vtkSQLQuery for\nfurther explanation.  The driver makes internal copies of string\nand BLOB parameters so you don't need to worry about keeping them\nin scope until the query finishes executing.\n"},
  {(char*)"ClearParameterBindings", PyvtkSQLiteQuery_ClearParameterBindings, 1,
   (char*)"V.ClearParameterBindings() -> bool\nC++: bool ClearParameterBindings()\n\nBind a blob value.  Not all databases support blobs as a data\ntype.  Check vtkSQLDatabase::IsSupported(VTK_SQL_FEATURE_BLOB) to\nmake sure.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSQLiteQuery_StaticNew()
{
  return vtkSQLiteQuery::New();
}

PyObject *PyVTKClass_vtkSQLiteQueryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSQLiteQuery_StaticNew,
    PyvtkSQLiteQuery_Methods,
    "vtkSQLiteQuery", modulename,
    NULL, NULL,
    PyvtkSQLiteQuery_Doc(),
    PyVTKClass_vtkSQLQueryNew(modulename));
  return cls;
}

const char **PyvtkSQLiteQuery_Doc()
{
  static const char *docstring[] = {
    "vtkSQLiteQuery - vtkSQLQuery implementation for SQLite databases\n\n",
    "Superclass: vtkSQLQuery\n\n",
    "This is an implementation of vtkSQLQuery for SQLite databases.  See\nthe documentation for vtkSQLQuery for information about what the\nmethods do.\n\nBugs:\n\nSometimes Execute() will return false (meaning an error) but\nGetLastErrorText() winds up null.  I am not certain why this is\nhappening.\n\nThanks:\n\nThanks to Andrew Wilson from Sandia National Laboratories for\nimplementing this class.\n\nSee Also:\n\nvt",
    "kSQLDatabase vtkSQLQuery vtkSQLiteDatabase\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSQLiteQuery(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSQLiteQueryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSQLiteQuery", o) != 0)
    {
    Py_DECREF(o);
    }

}

