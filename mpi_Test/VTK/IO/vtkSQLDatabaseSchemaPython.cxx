// python wrapper for vtkSQLDatabaseSchema
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
#include "vtkSQLDatabaseSchema.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSQLDatabaseSchema(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSQLDatabaseSchema(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSQLDatabaseSchemaNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSQLDatabaseSchemaNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSQLDatabaseSchema_Doc();


static PyObject *
PyvtkSQLDatabaseSchema_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

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
      tempr = op->vtkSQLDatabaseSchema::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

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
      tempr = op->vtkSQLDatabaseSchema::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  vtkSQLDatabaseSchema *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::NewInstance();
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
PyvtkSQLDatabaseSchema_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSQLDatabaseSchema *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSQLDatabaseSchema::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_AddPreamble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPreamble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  const char *temp2 = VTK_SQL_ALLBACKENDS;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      tempr = op->AddPreamble(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::AddPreamble(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_AddTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->AddTable(temp0);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::AddTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_AddColumnToTable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumnToTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  char *temp2 = NULL;
  int temp3;
  char *temp4 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      tempr = op->AddColumnToTable(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::AddColumnToTable(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLDatabaseSchema_AddColumnToTable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumnToTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  char *temp0 = NULL;
  int temp1;
  char *temp2 = NULL;
  int temp3;
  char *temp4 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      tempr = op->AddColumnToTable(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::AddColumnToTable(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSQLDatabaseSchema_AddColumnToTable_Methods[] = {
  {NULL, PyvtkSQLDatabaseSchema_AddColumnToTable_s1, 1,
   (char*)"@iiziz"},
  {NULL, PyvtkSQLDatabaseSchema_AddColumnToTable_s2, 1,
   (char*)"@ziziz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSQLDatabaseSchema_AddColumnToTable(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSQLDatabaseSchema_AddColumnToTable_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddColumnToTable");
  return NULL;
}



static PyObject *
PyvtkSQLDatabaseSchema_AddIndexToTable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIndexToTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  char *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->AddIndexToTable(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::AddIndexToTable(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLDatabaseSchema_AddIndexToTable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIndexToTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  char *temp0 = NULL;
  int temp1;
  char *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->AddIndexToTable(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::AddIndexToTable(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSQLDatabaseSchema_AddIndexToTable_Methods[] = {
  {NULL, PyvtkSQLDatabaseSchema_AddIndexToTable_s1, 1,
   (char*)"@iiz"},
  {NULL, PyvtkSQLDatabaseSchema_AddIndexToTable_s2, 1,
   (char*)"@ziz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSQLDatabaseSchema_AddIndexToTable(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSQLDatabaseSchema_AddIndexToTable_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddIndexToTable");
  return NULL;
}



static PyObject *
PyvtkSQLDatabaseSchema_AddColumnToIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumnToIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->AddColumnToIndex(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::AddColumnToIndex(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLDatabaseSchema_AddColumnToIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumnToIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->AddColumnToIndex(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::AddColumnToIndex(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSQLDatabaseSchema_AddColumnToIndex_Methods[] = {
  {NULL, PyvtkSQLDatabaseSchema_AddColumnToIndex_s1, 1,
   (char*)"@iii"},
  {NULL, PyvtkSQLDatabaseSchema_AddColumnToIndex_s2, 1,
   (char*)"@zzz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSQLDatabaseSchema_AddColumnToIndex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSQLDatabaseSchema_AddColumnToIndex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddColumnToIndex");
  return NULL;
}



static PyObject *
PyvtkSQLDatabaseSchema_AddTriggerToTable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTriggerToTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  char *temp2 = NULL;
  char *temp3 = NULL;
  const char *temp4 = VTK_SQL_ALLBACKENDS;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    if (ap.IsBound())
      {
      tempr = op->AddTriggerToTable(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::AddTriggerToTable(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLDatabaseSchema_AddTriggerToTable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTriggerToTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  char *temp0 = NULL;
  int temp1;
  char *temp2 = NULL;
  char *temp3 = NULL;
  const char *temp4 = VTK_SQL_ALLBACKENDS;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
    {
    if (ap.IsBound())
      {
      tempr = op->AddTriggerToTable(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::AddTriggerToTable(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSQLDatabaseSchema_AddTriggerToTable_Methods[] = {
  {NULL, PyvtkSQLDatabaseSchema_AddTriggerToTable_s1, 1,
   (char*)"@iizz|z"},
  {NULL, PyvtkSQLDatabaseSchema_AddTriggerToTable_s2, 1,
   (char*)"@zizz|z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSQLDatabaseSchema_AddTriggerToTable(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSQLDatabaseSchema_AddTriggerToTable_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddTriggerToTable");
  return NULL;
}



static PyObject *
PyvtkSQLDatabaseSchema_AddOptionToTable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOptionToTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  char *temp1 = NULL;
  const char *temp2 = VTK_SQL_ALLBACKENDS;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      tempr = op->AddOptionToTable(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::AddOptionToTable(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSQLDatabaseSchema_AddOptionToTable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOptionToTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  const char *temp2 = VTK_SQL_ALLBACKENDS;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      tempr = op->AddOptionToTable(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::AddOptionToTable(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSQLDatabaseSchema_AddOptionToTable_Methods[] = {
  {NULL, PyvtkSQLDatabaseSchema_AddOptionToTable_s1, 1,
   (char*)"@iz|z"},
  {NULL, PyvtkSQLDatabaseSchema_AddOptionToTable_s2, 1,
   (char*)"@zz|z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSQLDatabaseSchema_AddOptionToTable(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSQLDatabaseSchema_AddOptionToTable_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddOptionToTable");
  return NULL;
}



static PyObject *
PyvtkSQLDatabaseSchema_GetPreambleHandleFromName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreambleHandleFromName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPreambleHandleFromName(temp0);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetPreambleHandleFromName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetPreambleNameFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreambleNameFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPreambleNameFromHandle(temp0);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetPreambleNameFromHandle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetPreambleActionFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreambleActionFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPreambleActionFromHandle(temp0);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetPreambleActionFromHandle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetPreambleBackendFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreambleBackendFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPreambleBackendFromHandle(temp0);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetPreambleBackendFromHandle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetTableHandleFromName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableHandleFromName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTableHandleFromName(temp0);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetTableHandleFromName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetTableNameFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableNameFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTableNameFromHandle(temp0);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetTableNameFromHandle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetIndexHandleFromName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexHandleFromName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndexHandleFromName(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetIndexHandleFromName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetIndexNameFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexNameFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndexNameFromHandle(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetIndexNameFromHandle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetIndexTypeFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexTypeFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndexTypeFromHandle(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetIndexTypeFromHandle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetIndexColumnNameFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexColumnNameFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  int temp2;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndexColumnNameFromHandle(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetIndexColumnNameFromHandle(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetColumnHandleFromName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnHandleFromName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColumnHandleFromName(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetColumnHandleFromName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetColumnNameFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnNameFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColumnNameFromHandle(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetColumnNameFromHandle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetColumnTypeFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnTypeFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColumnTypeFromHandle(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetColumnTypeFromHandle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetColumnSizeFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnSizeFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColumnSizeFromHandle(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetColumnSizeFromHandle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetColumnAttributesFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnAttributesFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColumnAttributesFromHandle(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetColumnAttributesFromHandle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetTriggerHandleFromName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriggerHandleFromName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTriggerHandleFromName(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetTriggerHandleFromName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetTriggerNameFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriggerNameFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTriggerNameFromHandle(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetTriggerNameFromHandle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetTriggerTypeFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriggerTypeFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTriggerTypeFromHandle(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetTriggerTypeFromHandle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetTriggerActionFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriggerActionFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTriggerActionFromHandle(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetTriggerActionFromHandle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetTriggerBackendFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriggerBackendFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTriggerBackendFromHandle(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetTriggerBackendFromHandle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetOptionTextFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOptionTextFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOptionTextFromHandle(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetOptionTextFromHandle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetOptionBackendFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOptionBackendFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOptionBackendFromHandle(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetOptionBackendFromHandle(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkSQLDatabaseSchema::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetNumberOfPreambles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPreambles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPreambles();
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetNumberOfPreambles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetNumberOfTables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTables();
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetNumberOfTables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetNumberOfColumnsInTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumnsInTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfColumnsInTable(temp0);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetNumberOfColumnsInTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetNumberOfIndicesInTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIndicesInTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfIndicesInTable(temp0);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetNumberOfIndicesInTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetNumberOfColumnNamesInIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumnNamesInIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfColumnNamesInIndex(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetNumberOfColumnNamesInIndex(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetNumberOfTriggersInTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTriggersInTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTriggersInTable(temp0);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetNumberOfTriggersInTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetNumberOfOptionsInTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOptionsInTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfOptionsInTable(temp0);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetNumberOfOptionsInTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetName(temp0);
      }
    else
      {
      op->vtkSQLDatabaseSchema::SetName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetName();
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::GetName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_AddTableMultipleArguments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTableMultipleArguments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->AddTableMultipleArguments(temp0);
      }
    else
      {
      tempr = op->vtkSQLDatabaseSchema::AddTableMultipleArguments(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSQLDatabaseSchema_Methods[] = {
  {(char*)"GetClassName", PyvtkSQLDatabaseSchema_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSQLDatabaseSchema_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSQLDatabaseSchema_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSQLDatabaseSchema\nC++: vtkSQLDatabaseSchema *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSQLDatabaseSchema_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSQLDatabaseSchema\nC++: vtkSQLDatabaseSchema *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddPreamble", PyvtkSQLDatabaseSchema_AddPreamble, 1,
   (char*)"V.AddPreamble(string, string, string) -> int\nC++: virtual int AddPreamble(const char *preName,\n    const char *preAction,\n    const char *preBackend=VTK_SQL_ALLBACKENDS)\n\nAdd a preamble to the schema This can be used, in particular, to\ncreate functions and/or load languages in a backend-specific\nmanner. Example usage: vtkSQLDatabaseSchema* schema =\nvtkSQLDatabaseSchema::New(); schema->SetName( \"Example\" );\nschema->AddPreamble( \"dropPLPGSQL\", \"DROP LANGUAGE IF EXISTS PLPGSQL\nCASCADE\", VTK_SQL_POSTGRESQL ); schema->AddPreamble(\n\"loadPLPGSQL\", \"CREATE LANGUAGE PLPGSQL\", VTK_SQL_POSTGRESQL );\nschema->AddPreamble( \"createsomefunction\", \"CREATE OR REPLACE FUNCTION somefunction() RETURNS TRIGGER AS $btable$\n\" \"BEGIN \" \"INSERT INTO btable (somevalue) VALUES (NEW.somenmbr);\n\" \"RETURN NEW; \" \"END; $btable$ LANGUAGE PLPGSQL\",\n VTK_SQL_POSTGRESQL );\n"},
  {(char*)"AddTable", PyvtkSQLDatabaseSchema_AddTable, 1,
   (char*)"V.AddTable(string) -> int\nC++: virtual int AddTable(const char *tblName)\n\nAdd a table to the schema\n"},
  {(char*)"AddColumnToTable", PyvtkSQLDatabaseSchema_AddColumnToTable, 1,
   (char*)"V.AddColumnToTable(int, int, string, int, string) -> int\nC++: virtual int AddColumnToTable(int tblHandle, int colType,\n    const char *colName, int colSize, const char *colAttribs)\nV.AddColumnToTable(string, int, string, int, string) -> int\nC++: virtual int AddColumnToTable(const char *tblName,\n    int colType, const char *colName, int colSize,\n    const char *colAttribs)\n\nAdd a column to table.\n\nThe returned value is a column handle or -1 if an error occurred.\n"},
  {(char*)"AddIndexToTable", PyvtkSQLDatabaseSchema_AddIndexToTable, 1,
   (char*)"V.AddIndexToTable(int, int, string) -> int\nC++: virtual int AddIndexToTable(int tblHandle, int idxType,\n    const char *idxName)\nV.AddIndexToTable(string, int, string) -> int\nC++: virtual int AddIndexToTable(const char *tblName, int idxType,\n     const char *idxName)\n\nAdd an index to table.\n\nThe returned value is an index handle or -1 if an error occurred.\n"},
  {(char*)"AddColumnToIndex", PyvtkSQLDatabaseSchema_AddColumnToIndex, 1,
   (char*)"V.AddColumnToIndex(int, int, int) -> int\nC++: virtual int AddColumnToIndex(int tblHandle, int idxHandle,\n    int colHandle)\nV.AddColumnToIndex(string, string, string) -> int\nC++: virtual int AddColumnToIndex(const char *tblName,\n    const char *idxName, const char *colName)\n\nAdd a column to a table index.\n\nThe returned value is an index-column handle or -1 if an error\noccurred.\n"},
  {(char*)"AddTriggerToTable", PyvtkSQLDatabaseSchema_AddTriggerToTable, 1,
   (char*)"V.AddTriggerToTable(int, int, string, string, string) -> int\nC++: virtual int AddTriggerToTable(int tblHandle, int trgType,\n    const char *trgName, const char *trgAction,\n    const char *trgBackend=VTK_SQL_ALLBACKENDS)\nV.AddTriggerToTable(string, int, string, string, string) -> int\nC++: virtual int AddTriggerToTable(const char *tblName,\n    int trgType, const char *trgName, const char *trgAction,\n    const char *trgBackend=VTK_SQL_ALLBACKENDS)\n\nAdd a (possibly backend-specific) trigger action to a table.\n\nTriggers must be given unique, non-NULL names as some database\nbackends require them. The returned value is a trigger handle or\n-1 if an error occurred.\n"},
  {(char*)"AddOptionToTable", PyvtkSQLDatabaseSchema_AddOptionToTable, 1,
   (char*)"V.AddOptionToTable(int, string, string) -> int\nC++: virtual int AddOptionToTable(int tblHandle,\n    const char *optStr,\n    const char *optBackend=VTK_SQL_ALLBACKENDS)\nV.AddOptionToTable(string, string, string) -> int\nC++: virtual int AddOptionToTable(const char *tblName,\n    const char *optStr,\n    const char *optBackend=VTK_SQL_ALLBACKENDS)\n\nAdd (possibly backend-specific) text to the end of a CREATE TABLE\n(...) statement.\n\nThis is most useful for specifying storage semantics of tables\nthat are specific to the backend. For example, table options can\nbe used to specify the TABLESPACE of a PostgreSQL table or the\nENGINE of a MySQL table.\n\nThe returned value is an option handle or -1 if an error\noccurred.\n"},
  {(char*)"GetPreambleHandleFromName", PyvtkSQLDatabaseSchema_GetPreambleHandleFromName, 1,
   (char*)"V.GetPreambleHandleFromName(string) -> int\nC++: int GetPreambleHandleFromName(const char *preName)\n\nGiven a preamble name, get its handle.\n"},
  {(char*)"GetPreambleNameFromHandle", PyvtkSQLDatabaseSchema_GetPreambleNameFromHandle, 1,
   (char*)"V.GetPreambleNameFromHandle(int) -> string\nC++: const char *GetPreambleNameFromHandle(int preHandle)\n\nGiven a preamble handle, get its name.\n"},
  {(char*)"GetPreambleActionFromHandle", PyvtkSQLDatabaseSchema_GetPreambleActionFromHandle, 1,
   (char*)"V.GetPreambleActionFromHandle(int) -> string\nC++: const char *GetPreambleActionFromHandle(int preHandle)\n\nGiven a preamble handle, get its action.\n"},
  {(char*)"GetPreambleBackendFromHandle", PyvtkSQLDatabaseSchema_GetPreambleBackendFromHandle, 1,
   (char*)"V.GetPreambleBackendFromHandle(int) -> string\nC++: const char *GetPreambleBackendFromHandle(int preHandle)\n\nGiven a preamble handle, get its backend.\n"},
  {(char*)"GetTableHandleFromName", PyvtkSQLDatabaseSchema_GetTableHandleFromName, 1,
   (char*)"V.GetTableHandleFromName(string) -> int\nC++: int GetTableHandleFromName(const char *tblName)\n\nGiven a table name, get its handle.\n"},
  {(char*)"GetTableNameFromHandle", PyvtkSQLDatabaseSchema_GetTableNameFromHandle, 1,
   (char*)"V.GetTableNameFromHandle(int) -> string\nC++: const char *GetTableNameFromHandle(int tblHandle)\n\nGiven a table hanlde, get its name.\n"},
  {(char*)"GetIndexHandleFromName", PyvtkSQLDatabaseSchema_GetIndexHandleFromName, 1,
   (char*)"V.GetIndexHandleFromName(string, string) -> int\nC++: int GetIndexHandleFromName(const char *tblName,\n    const char *idxName)\n\nGiven the names of a table and an index, get the handle of the\nindex in this table.\n"},
  {(char*)"GetIndexNameFromHandle", PyvtkSQLDatabaseSchema_GetIndexNameFromHandle, 1,
   (char*)"V.GetIndexNameFromHandle(int, int) -> string\nC++: const char *GetIndexNameFromHandle(int tblHandle,\n    int idxHandle)\n\nGiven the handles of a table and an index, get the name of the\nindex.\n"},
  {(char*)"GetIndexTypeFromHandle", PyvtkSQLDatabaseSchema_GetIndexTypeFromHandle, 1,
   (char*)"V.GetIndexTypeFromHandle(int, int) -> int\nC++: int GetIndexTypeFromHandle(int tblHandle, int idxHandle)\n\nGiven the handles of a table and an index, get the type of the\nindex.\n"},
  {(char*)"GetIndexColumnNameFromHandle", PyvtkSQLDatabaseSchema_GetIndexColumnNameFromHandle, 1,
   (char*)"V.GetIndexColumnNameFromHandle(int, int, int) -> string\nC++: const char *GetIndexColumnNameFromHandle(int tblHandle,\n    int idxHandle, int cnmHandle)\n\nGiven the handles of a table, an index, and a column name, get\nthe column name.\n"},
  {(char*)"GetColumnHandleFromName", PyvtkSQLDatabaseSchema_GetColumnHandleFromName, 1,
   (char*)"V.GetColumnHandleFromName(string, string) -> int\nC++: int GetColumnHandleFromName(const char *tblName,\n    const char *colName)\n\nGiven the names of a table and a column, get the handle of the\ncolumn in this table.\n"},
  {(char*)"GetColumnNameFromHandle", PyvtkSQLDatabaseSchema_GetColumnNameFromHandle, 1,
   (char*)"V.GetColumnNameFromHandle(int, int) -> string\nC++: const char *GetColumnNameFromHandle(int tblHandle,\n    int colHandle)\n\nGiven the handles of a table and a column, get the name of the\ncolumn.\n"},
  {(char*)"GetColumnTypeFromHandle", PyvtkSQLDatabaseSchema_GetColumnTypeFromHandle, 1,
   (char*)"V.GetColumnTypeFromHandle(int, int) -> int\nC++: int GetColumnTypeFromHandle(int tblHandle, int colHandle)\n\nGiven the handles of a table and a column, get the type of the\ncolumn.\n"},
  {(char*)"GetColumnSizeFromHandle", PyvtkSQLDatabaseSchema_GetColumnSizeFromHandle, 1,
   (char*)"V.GetColumnSizeFromHandle(int, int) -> int\nC++: int GetColumnSizeFromHandle(int tblHandle, int colHandle)\n\nGiven the handles of a table and a column, get the size of the\ncolumn.\n"},
  {(char*)"GetColumnAttributesFromHandle", PyvtkSQLDatabaseSchema_GetColumnAttributesFromHandle, 1,
   (char*)"V.GetColumnAttributesFromHandle(int, int) -> string\nC++: const char *GetColumnAttributesFromHandle(int tblHandle,\n    int colHandle)\n\nGiven the handles of a table and a column, get the attributes of\nthe column.\n"},
  {(char*)"GetTriggerHandleFromName", PyvtkSQLDatabaseSchema_GetTriggerHandleFromName, 1,
   (char*)"V.GetTriggerHandleFromName(string, string) -> int\nC++: int GetTriggerHandleFromName(const char *tblName,\n    const char *trgName)\n\nGiven the names of a trigger and a table, get the handle of the\ntrigger in this table.\n"},
  {(char*)"GetTriggerNameFromHandle", PyvtkSQLDatabaseSchema_GetTriggerNameFromHandle, 1,
   (char*)"V.GetTriggerNameFromHandle(int, int) -> string\nC++: const char *GetTriggerNameFromHandle(int tblHandle,\n    int trgHandle)\n\nGiven the handles of a table and a trigger, get the name of the\ntrigger.\n"},
  {(char*)"GetTriggerTypeFromHandle", PyvtkSQLDatabaseSchema_GetTriggerTypeFromHandle, 1,
   (char*)"V.GetTriggerTypeFromHandle(int, int) -> int\nC++: int GetTriggerTypeFromHandle(int tblHandle, int trgHandle)\n\nGiven the handles of a table and a trigger, get the type of the\ntrigger.\n"},
  {(char*)"GetTriggerActionFromHandle", PyvtkSQLDatabaseSchema_GetTriggerActionFromHandle, 1,
   (char*)"V.GetTriggerActionFromHandle(int, int) -> string\nC++: const char *GetTriggerActionFromHandle(int tblHandle,\n    int trgHandle)\n\nGiven the handles of a table and a trigger, get the action of the\ntrigger.\n"},
  {(char*)"GetTriggerBackendFromHandle", PyvtkSQLDatabaseSchema_GetTriggerBackendFromHandle, 1,
   (char*)"V.GetTriggerBackendFromHandle(int, int) -> string\nC++: const char *GetTriggerBackendFromHandle(int tblHandle,\n    int trgHandle)\n\nGiven the handles of a table and a trigger, get the backend of\nthe trigger.\n"},
  {(char*)"GetOptionTextFromHandle", PyvtkSQLDatabaseSchema_GetOptionTextFromHandle, 1,
   (char*)"V.GetOptionTextFromHandle(int, int) -> string\nC++: const char *GetOptionTextFromHandle(int tblHandle,\n    int optHandle)\n\nGiven the handles of a table and one of its options, return the\ntext of the option.\n"},
  {(char*)"GetOptionBackendFromHandle", PyvtkSQLDatabaseSchema_GetOptionBackendFromHandle, 1,
   (char*)"V.GetOptionBackendFromHandle(int, int) -> string\nC++: const char *GetOptionBackendFromHandle(int tblHandle,\n    int trgHandle)\n\nGiven the handles of a table and one of its options, get the\nbackend of the option.\n"},
  {(char*)"Reset", PyvtkSQLDatabaseSchema_Reset, 1,
   (char*)"V.Reset()\nC++: void Reset()\n\nReset the schema to its initial, empty state.\n"},
  {(char*)"GetNumberOfPreambles", PyvtkSQLDatabaseSchema_GetNumberOfPreambles, 1,
   (char*)"V.GetNumberOfPreambles() -> int\nC++: int GetNumberOfPreambles()\n\nGet the number of preambles.\n"},
  {(char*)"GetNumberOfTables", PyvtkSQLDatabaseSchema_GetNumberOfTables, 1,
   (char*)"V.GetNumberOfTables() -> int\nC++: int GetNumberOfTables()\n\nGet the number of tables.\n"},
  {(char*)"GetNumberOfColumnsInTable", PyvtkSQLDatabaseSchema_GetNumberOfColumnsInTable, 1,
   (char*)"V.GetNumberOfColumnsInTable(int) -> int\nC++: int GetNumberOfColumnsInTable(int tblHandle)\n\nGet the number of columns in a particular table .\n"},
  {(char*)"GetNumberOfIndicesInTable", PyvtkSQLDatabaseSchema_GetNumberOfIndicesInTable, 1,
   (char*)"V.GetNumberOfIndicesInTable(int) -> int\nC++: int GetNumberOfIndicesInTable(int tblHandle)\n\nGet the number of indices in a particular table .\n"},
  {(char*)"GetNumberOfColumnNamesInIndex", PyvtkSQLDatabaseSchema_GetNumberOfColumnNamesInIndex, 1,
   (char*)"V.GetNumberOfColumnNamesInIndex(int, int) -> int\nC++: int GetNumberOfColumnNamesInIndex(int tblHandle,\n    int idxHandle)\n\nGet the number of column names associated to a particular index\nin a particular table .\n"},
  {(char*)"GetNumberOfTriggersInTable", PyvtkSQLDatabaseSchema_GetNumberOfTriggersInTable, 1,
   (char*)"V.GetNumberOfTriggersInTable(int) -> int\nC++: int GetNumberOfTriggersInTable(int tblHandle)\n\nGet the number of triggers defined for a particular table.\n"},
  {(char*)"GetNumberOfOptionsInTable", PyvtkSQLDatabaseSchema_GetNumberOfOptionsInTable, 1,
   (char*)"V.GetNumberOfOptionsInTable(int) -> int\nC++: int GetNumberOfOptionsInTable(int tblHandle)\n\nGet the number of options associated with a particular table.\n"},
  {(char*)"SetName", PyvtkSQLDatabaseSchema_SetName, 1,
   (char*)"V.SetName(string)\nC++: void SetName(char *)\n\nSet/Get the name of the schema.\n"},
  {(char*)"GetName", PyvtkSQLDatabaseSchema_GetName, 1,
   (char*)"V.GetName() -> string\nC++: char *GetName()\n\nSet/Get the name of the schema.\n"},
  {(char*)"AddTableMultipleArguments", PyvtkSQLDatabaseSchema_AddTableMultipleArguments, 1,
   (char*)"V.AddTableMultipleArguments(string) -> int\nC++: int AddTableMultipleArguments(const char *tblName, ...)\n\nAn unwrappable but useful routine to construct built-in schema.\nExample usage: int main() { vtkSQLDatabaseSchema* schema =\nvtkSQLDatabaseSchema::New(); schema->SetName( \"Example\" );\nschema->AddTableMultipleArguments( \"atable\",\nvtkSQLDatabaseSchema::COLUMN_TOKEN,\nvtkSQLDatabaseSchema::INTEGER, \"tablekey\",  0, \"\",\nvtkSQLDatabaseSchema::COLUMN_TOKEN,\nvtkSQLDatabaseSchema::VARCHAR, \"somename\", 11, \"NOT NULL\",\nvtkSQLDatabaseSchema::COLUMN_TOKEN, vtkSQLDatabaseSchema::BIGINT,\n \"somenmbr\", 17, \"DEFAULT 0\", vtkSQLDatabaseSchema::INDEX_TOKEN,\nvtkSQLDatabaseSchema::PRIMARY_KEY, \"bigkey\",\nvtkSQLDatabaseSchema::INDEX_COLUMN_TOKEN, \"tablekey\",\nvtkSQLDatabaseSchema::END_INDEX_TOKEN,\nvtkSQLDatabaseSchema::INDEX_TOKEN,  vtkSQLDatabaseSchema::UNIQUE,\n\"reverselookup\", vtkSQLDatabaseSchema::INDEX_COLUMN_TOKEN,\n\"somename\", vtkSQLDatabaseSchema::INDEX_COLUMN_TOKEN, \"somenmbr\",\nvtkSQLDatabaseSchema::END_INDEX_TOKEN,\nvtkSQLDatabaseSchema::TRIGGER_TOKEN, \nvtkSQLDatabaseSchema::AFTER_INSERT,\n \"InsertTrigger\", \"DO NOTHING\", VTK_SQL_SQLITE,\nvtkSQLDatabaseSchema::TRIGGER_TOKEN, \nvtkSQLDatabaseSchema::AFTER_INSERT,\n \"InsertTrigger\", \"FOR EACH ROW EXECUTE PROCEDURE somefunction\n()\", VTK_SQL_POSTGRESQL, vtkSQLDatabaseSchema::TRIGGER_TOKEN, \nvtkSQLDatabaseSchema::AFTER_INSERT,\n \"InsertTrigger\", \"FOR EACH ROW INSERT INTO btable SET SomeValue =\nNEW.SomeNmbr\", VTK_SQL_MYSQL,\nvtkSQLDatabaseSchema::END_TABLE_TOKEN ); return 0; }\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSQLDatabaseSchema_StaticNew()
{
  return vtkSQLDatabaseSchema::New();
}

PyObject *PyVTKClass_vtkSQLDatabaseSchemaNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSQLDatabaseSchema_StaticNew,
    PyvtkSQLDatabaseSchema_Methods,
    "vtkSQLDatabaseSchema", modulename,
    NULL, NULL,
    PyvtkSQLDatabaseSchema_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"SERIAL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"SMALLINT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"INTEGER", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"BIGINT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"VARCHAR", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"TEXT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"REAL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"DOUBLE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"BLOB", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(9);
    if (o && PyDict_SetItemString(d, (char *)"TIME", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(10);
    if (o && PyDict_SetItemString(d, (char *)"DATE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(11);
    if (o && PyDict_SetItemString(d, (char *)"TIMESTAMP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"INDEX", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"UNIQUE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"PRIMARY_KEY", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"BEFORE_INSERT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"AFTER_INSERT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"BEFORE_UPDATE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"AFTER_UPDATE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"BEFORE_DELETE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"AFTER_DELETE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(58);
    if (o && PyDict_SetItemString(d, (char *)"COLUMN_TOKEN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(63);
    if (o && PyDict_SetItemString(d, (char *)"INDEX_TOKEN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(65);
    if (o && PyDict_SetItemString(d, (char *)"INDEX_COLUMN_TOKEN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(75);
    if (o && PyDict_SetItemString(d, (char *)"END_INDEX_TOKEN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(81);
    if (o && PyDict_SetItemString(d, (char *)"TRIGGER_TOKEN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(86);
    if (o && PyDict_SetItemString(d, (char *)"OPTION_TOKEN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(99);
    if (o && PyDict_SetItemString(d, (char *)"END_TABLE_TOKEN", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkSQLDatabaseSchema_Doc()
{
  static const char *docstring[] = {
    "vtkSQLDatabaseSchema - represent an SQL database schema\n\n",
    "Superclass: vtkObject\n\n",
    "This class stores the information required to create an SQL database\nfrom scratch. Information on each table's columns, indices, and\ntriggers is stored. You may also store an arbitrary number of\npreamble statements, intended to be executed before any tables are\ncreated; this provides a way to create procedures or functions that\nmay be invoked as part of a trigger action. Triggers and table\noptions",
    " may be specified differently for each backend database type\nyou wish to support.\n\nThanks:\n\nThanks to Philippe Pebay and David Thompson from Sandia National\nLaboratories for implementing this class.\n\nSee Also:\n\nvtkSQLDatabase\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSQLDatabaseSchema(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSQLDatabaseSchemaNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSQLDatabaseSchema", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyString_FromString((char *)("*"));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQL_ALLBACKENDS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyString_FromString((char *)("vtkMySQLDatabase"));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQL_MYSQL", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyString_FromString((char *)("vtkPostgreSQLDatabase"));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQL_POSTGRESQL", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyString_FromString((char *)("vtkSQLiteDatabase"));
  if (o && PyDict_SetItemString(dict, (char *)"VTK_SQL_SQLITE", o) != 0)
    {
    Py_DECREF(o);
    }

}

