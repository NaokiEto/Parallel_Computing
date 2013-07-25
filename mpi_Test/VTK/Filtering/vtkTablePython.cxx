// python wrapper for vtkTable
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
#include "vtkTable.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTable(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTable(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTableNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTableNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkTable_Doc();


static PyObject *
PyvtkTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

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
      tempr = op->vtkTable::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

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
      tempr = op->vtkTable::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTable::NewInstance();
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
PyvtkTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTable *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTable_Dump(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dump");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  unsigned int temp0 = 16;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      op->Dump(temp0);
      }
    else
      {
      op->vtkTable::Dump(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTable_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataObjectType();
      }
    else
      {
      tempr = op->vtkTable::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTable_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActualMemorySize();
      }
    else
      {
      tempr = op->vtkTable::GetActualMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTable_GetRowData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkDataSetAttributes *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRowData();
      }
    else
      {
      tempr = op->vtkTable::GetRowData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTable_SetRowData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRowData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkDataSetAttributes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes"))
    {
    if (ap.IsBound())
      {
      op->SetRowData(temp0);
      }
    else
      {
      op->vtkTable::SetRowData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTable_GetNumberOfRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfRows();
      }
    else
      {
      tempr = op->vtkTable::GetNumberOfRows();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTable_SetNumberOfRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfRows(temp0);
      }
    else
      {
      op->vtkTable::SetNumberOfRows(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTable_GetRow_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkIdType temp0;
  vtkVariantArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRow(temp0);
      }
    else
      {
      tempr = op->vtkTable::GetRow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTable_GetRow_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkIdType temp0;
  vtkVariantArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkVariantArray"))
    {
    if (ap.IsBound())
      {
      op->GetRow(temp0, temp1);
      }
    else
      {
      op->vtkTable::GetRow(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTable_GetRow(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkTable_GetRow_s1(self, args);
    case 2:
      return PyvtkTable_GetRow_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetRow");
  return NULL;
}



static PyObject *
PyvtkTable_SetRow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkIdType temp0;
  vtkVariantArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkVariantArray"))
    {
    if (ap.IsBound())
      {
      op->SetRow(temp0, temp1);
      }
    else
      {
      op->vtkTable::SetRow(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTable_InsertNextBlankRow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextBlankRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  double temp0 = 0.0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertNextBlankRow(temp0);
      }
    else
      {
      tempr = op->vtkTable::InsertNextBlankRow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTable_InsertNextRow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkVariantArray *temp0 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVariantArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertNextRow(temp0);
      }
    else
      {
      tempr = op->vtkTable::InsertNextRow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTable_RemoveRow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveRow(temp0);
      }
    else
      {
      op->vtkTable::RemoveRow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTable_GetNumberOfColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfColumns();
      }
    else
      {
      tempr = op->vtkTable::GetNumberOfColumns();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTable_GetColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkIdType temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColumnName(temp0);
      }
    else
      {
      tempr = op->vtkTable::GetColumnName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTable_GetColumnByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  char *temp0 = NULL;
  vtkAbstractArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColumnByName(temp0);
      }
    else
      {
      tempr = op->vtkTable::GetColumnByName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTable_GetColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkIdType temp0;
  vtkAbstractArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColumn(temp0);
      }
    else
      {
      tempr = op->vtkTable::GetColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTable_AddColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      op->AddColumn(temp0);
      }
    else
      {
      op->vtkTable::AddColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTable_RemoveColumnByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveColumnByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveColumnByName(temp0);
      }
    else
      {
      op->vtkTable::RemoveColumnByName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTable_RemoveColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveColumn(temp0);
      }
    else
      {
      op->vtkTable::RemoveColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTable_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkVariant tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValue(temp0, temp1);
      }
    else
      {
      tempr = op->vtkTable::GetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTable_GetValueByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkIdType temp0;
  char *temp1 = NULL;
  vtkVariant tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValueByName(temp0, temp1);
      }
    else
      {
      tempr = op->vtkTable::GetValueByName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkTable_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkVariant *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTable::SetValue(temp0, temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj2);

  return result;
}


static PyObject *
PyvtkTable_SetValueByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkIdType temp0;
  char *temp1 = NULL;
  vtkVariant *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetValueByName(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkTable::SetValueByName(temp0, temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj2);

  return result;
}


static PyObject *
PyvtkTable_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkTable::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTable_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkTable *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkTable::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkTable_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkTable *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkTable::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTable_GetData_Methods[] = {
  {NULL, PyvtkTable_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkTable_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTable_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTable_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkTable_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkTable_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkTable::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTable_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkTable::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTable_GetAttributesAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  int temp0;
  vtkFieldData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributesAsFieldData(temp0);
      }
    else
      {
      tempr = op->vtkTable::GetAttributesAsFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTable_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  int temp0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfElements(temp0);
      }
    else
      {
      tempr = op->vtkTable::GetNumberOfElements(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTable_Methods[] = {
  {(char*)"GetClassName", PyvtkTable_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTable_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTable_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTable\nC++: vtkTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTable_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTable\nC++: vtkTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Dump", PyvtkTable_Dump, 1,
   (char*)"V.Dump(int)\nC++: void Dump(unsigned int colWidth=16)\n\nDump table contents.\n"},
  {(char*)"GetDataObjectType", PyvtkTable_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"GetActualMemorySize", PyvtkTable_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated. The memory size\nreturned is guaranteed to be greater than or equal to the memory\nrequired to represent the data (e.g., extra space in arrays, etc.\nare not included in the return value).\n"},
  {(char*)"GetRowData", PyvtkTable_GetRowData, 1,
   (char*)"V.GetRowData() -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *GetRowData()\n\nGet/Set the main data (columns) of the table.\n"},
  {(char*)"SetRowData", PyvtkTable_SetRowData, 1,
   (char*)"V.SetRowData(vtkDataSetAttributes)\nC++: virtual void SetRowData(vtkDataSetAttributes *data)\n\nGet/Set the main data (columns) of the table.\n"},
  {(char*)"GetNumberOfRows", PyvtkTable_GetNumberOfRows, 1,
   (char*)"V.GetNumberOfRows() -> int\nC++: vtkIdType GetNumberOfRows()\n\nGet the number of rows in the table.\n"},
  {(char*)"SetNumberOfRows", PyvtkTable_SetNumberOfRows, 1,
   (char*)"V.SetNumberOfRows(int)\nC++: void SetNumberOfRows(const vtkIdType)\n\nSet the number of rows in the table. Note that memory allocation\nmight be performed as a result of this, but no memory will be\nreleased.\n"},
  {(char*)"GetRow", PyvtkTable_GetRow, 1,
   (char*)"V.GetRow(int) -> vtkVariantArray\nC++: vtkVariantArray *GetRow(vtkIdType row)\nV.GetRow(int, vtkVariantArray)\nC++: void GetRow(vtkIdType row, vtkVariantArray *values)\n\nGet a row of the table as a vtkVariantArray which has one entry\nfor each column. NOTE: This version of the method is NOT thread\nsafe.\n"},
  {(char*)"SetRow", PyvtkTable_SetRow, 1,
   (char*)"V.SetRow(int, vtkVariantArray)\nC++: void SetRow(vtkIdType row, vtkVariantArray *values)\n\nSet a row of the table with a vtkVariantArray which has one entry\nfor each column.\n"},
  {(char*)"InsertNextBlankRow", PyvtkTable_InsertNextBlankRow, 1,
   (char*)"V.InsertNextBlankRow(float) -> int\nC++: vtkIdType InsertNextBlankRow(double default_num_val=0.0)\n\nInsert a blank row at the end of the table.\n"},
  {(char*)"InsertNextRow", PyvtkTable_InsertNextRow, 1,
   (char*)"V.InsertNextRow(vtkVariantArray) -> int\nC++: vtkIdType InsertNextRow(vtkVariantArray *arr)\n\nInsert a row specified by a vtkVariantArray.  The number of\nentries in the array should match the number of columns in the\ntable.\n"},
  {(char*)"RemoveRow", PyvtkTable_RemoveRow, 1,
   (char*)"V.RemoveRow(int)\nC++: void RemoveRow(vtkIdType row)\n\nDelete a row from the table.  Rows below the deleted row are\nshifted up.\n"},
  {(char*)"GetNumberOfColumns", PyvtkTable_GetNumberOfColumns, 1,
   (char*)"V.GetNumberOfColumns() -> int\nC++: vtkIdType GetNumberOfColumns()\n\nGet the number of columns in the table.\n"},
  {(char*)"GetColumnName", PyvtkTable_GetColumnName, 1,
   (char*)"V.GetColumnName(int) -> string\nC++: const char *GetColumnName(vtkIdType col)\n\n"},
  {(char*)"GetColumnByName", PyvtkTable_GetColumnByName, 1,
   (char*)"V.GetColumnByName(string) -> vtkAbstractArray\nC++: vtkAbstractArray *GetColumnByName(const char *name)\n\nGet a column of the table by its name.\n"},
  {(char*)"GetColumn", PyvtkTable_GetColumn, 1,
   (char*)"V.GetColumn(int) -> vtkAbstractArray\nC++: vtkAbstractArray *GetColumn(vtkIdType col)\n\nGet a column of the table by its column index.\n"},
  {(char*)"AddColumn", PyvtkTable_AddColumn, 1,
   (char*)"V.AddColumn(vtkAbstractArray)\nC++: void AddColumn(vtkAbstractArray *arr)\n\nAdd a column to the table.\n"},
  {(char*)"RemoveColumnByName", PyvtkTable_RemoveColumnByName, 1,
   (char*)"V.RemoveColumnByName(string)\nC++: void RemoveColumnByName(const char *name)\n\nRemove a column from the table by its name.\n"},
  {(char*)"RemoveColumn", PyvtkTable_RemoveColumn, 1,
   (char*)"V.RemoveColumn(int)\nC++: void RemoveColumn(vtkIdType col)\n\nRemove a column from the table by its column index.\n"},
  {(char*)"GetValue", PyvtkTable_GetValue, 1,
   (char*)"V.GetValue(int, int) -> vtkVariant\nC++: vtkVariant GetValue(vtkIdType row, vtkIdType col)\n\nRetrieve a value in the table by row and column index as a\nvariant. Note that this calls GetValueByName internally so that\neach column array must have its name set (and that name should be\nunique within the table).\n"},
  {(char*)"GetValueByName", PyvtkTable_GetValueByName, 1,
   (char*)"V.GetValueByName(int, string) -> vtkVariant\nC++: vtkVariant GetValueByName(vtkIdType row, const char *col)\n\nRetrieve a value in the table by row index and column name as a\nvariant.\n"},
  {(char*)"SetValue", PyvtkTable_SetValue, 1,
   (char*)"V.SetValue(int, int, vtkVariant)\nC++: void SetValue(vtkIdType row, vtkIdType col, vtkVariant value)\n\nSet a value in the table by row and column index as a variant.\n"},
  {(char*)"SetValueByName", PyvtkTable_SetValueByName, 1,
   (char*)"V.SetValueByName(int, string, vtkVariant)\nC++: void SetValueByName(vtkIdType row, const char *col,\n    vtkVariant value)\n\nSet a value in the table by row index and column name as a\nvariant.\n"},
  {(char*)"Initialize", PyvtkTable_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nInitialize to an empty table.\n"},
  {(char*)"GetData", PyvtkTable_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkTable\nC++: static vtkTable *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkTable\nC++: static vtkTable *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve the table from vtkInformation.\n"},
  {(char*)"ShallowCopy", PyvtkTable_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nShallow/deep copy the data from src into this object.\n"},
  {(char*)"DeepCopy", PyvtkTable_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nShallow/deep copy the data from src into this object.\n"},
  {(char*)"GetAttributesAsFieldData", PyvtkTable_GetAttributesAsFieldData, 1,
   (char*)"V.GetAttributesAsFieldData(int) -> vtkFieldData\nC++: virtual vtkFieldData *GetAttributesAsFieldData(int type)\n\nReturns the attributes of the data object as a vtkFieldData. This\nreturns non-null values in all the same cases as GetAttributes,\nin addition to the case of FIELD, which will return the field\ndata for any vtkDataObject subclass.\n"},
  {(char*)"GetNumberOfElements", PyvtkTable_GetNumberOfElements, 1,
   (char*)"V.GetNumberOfElements(int) -> int\nC++: virtual vtkIdType GetNumberOfElements(int type)\n\nGet the number of elements for a specific attribute type (ROW,\netc.).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTable_StaticNew()
{
  return vtkTable::New();
}

PyObject *PyVTKClass_vtkTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTable_StaticNew,
    PyvtkTable_Methods,
    "vtkTable", modulename,
    NULL, NULL,
    PyvtkTable_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkTable_Doc()
{
  static const char *docstring[] = {
    "vtkTable - A table, which contains similar-typed columns of data\n\n",
    "Superclass: vtkDataObject\n\n",
    "vtkTable is a basic data structure for storing columns of data.\nInternally, columns are stored in a vtkDataSetAttributes structure\ncalled RowData. However, using the vtkTable API additionally ensures\nthat every column has the same number of entries, and provides row\naccess (using vtkVariantArray) and single entry access (using\nvtkVariant).\n\nThe field data inherited from vtkDataObject may be used t",
    "o store\nmetadata related to the table.\n\nCaveats:\n\nYou should use the vtkTable API to change the table data. Performing\noperations on the object returned by GetRowData() may yield\nunexpected results. vtkTable does allow the user to set the field\ndata using SetRowData(); the number of rows in the table is\ndetermined by the number of tuples in the first array (it is assumed\nthat all arrays are the sa",
    "me length).\n\nEach column added with AddColumn musthave its name set to a unique,\nnon-empty string in order for GetValue() to function properly.\n\nThanks:\n\nThanks to Patricia Crossno, Ken Moreland, Andrew Wilson and Brian\nWylie from Sandia National Laboratories for their help in developing\nthis class API.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTable", o) != 0)
    {
    Py_DECREF(o);
    }

}
