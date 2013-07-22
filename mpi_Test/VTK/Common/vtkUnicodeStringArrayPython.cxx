// python wrapper for vtkUnicodeStringArray
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
#include "vtkUnicodeString.h"
#include "vtkUnicodeStringArray.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnicodeStringArray(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnicodeStringArray(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnicodeStringArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnicodeStringArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractArrayNew
extern "C" { PyObject *PyVTKClass_vtkAbstractArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractArrayNew
#endif

static const char **PyvtkUnicodeStringArray_Doc();


static PyObject *
PyvtkUnicodeStringArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

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
      tempr = op->vtkUnicodeStringArray::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

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
      tempr = op->vtkUnicodeStringArray::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkUnicodeStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnicodeStringArray::NewInstance();
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
PyvtkUnicodeStringArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUnicodeStringArray *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUnicodeStringArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1 = 1000;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      tempr = op->Allocate(temp0, temp1);
      }
    else
      {
      tempr = op->vtkUnicodeStringArray::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkUnicodeStringArray::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataType();
      }
    else
      {
      tempr = op->vtkUnicodeStringArray::GetDataType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataTypeSize();
      }
    else
      {
      tempr = op->vtkUnicodeStringArray::GetDataTypeSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_GetElementComponentSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementComponentSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElementComponentSize();
      }
    else
      {
      tempr = op->vtkUnicodeStringArray::GetElementComponentSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfTuples(temp0);
      }
    else
      {
      op->vtkUnicodeStringArray::SetNumberOfTuples(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_SetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkAbstractArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      op->SetTuple(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUnicodeStringArray::SetTuple(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_InsertTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkAbstractArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      op->InsertTuple(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUnicodeStringArray::InsertTuple(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_InsertNextTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  vtkAbstractArray *temp1 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertNextTuple(temp0, temp1);
      }
    else
      {
      tempr = op->vtkUnicodeStringArray::InsertNextTuple(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVoidPointer(temp0);
      }
    else
      {
      tempr = op->vtkUnicodeStringArray::GetVoidPointer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkUnicodeStringArray::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_InterpolateTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkAbstractArray *temp2 = NULL;
  vtkIdType temp3;
  vtkAbstractArray *temp4 = NULL;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray") &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkAbstractArray") &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->InterpolateTuple(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkUnicodeStringArray::InterpolateTuple(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkUnicodeStringArray::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->Resize(temp0);
      }
    else
      {
      tempr = op->vtkUnicodeStringArray::Resize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_SetVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetVoidArray(temp0, temp1, temp2);
      }
    else
      {
      op->vtkUnicodeStringArray::SetVoidArray(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

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
      tempr = op->vtkUnicodeStringArray::GetActualMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_IsNumeric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNumeric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsNumeric();
      }
    else
      {
      tempr = op->vtkUnicodeStringArray::IsNumeric();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkArrayIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewIterator();
      }
    else
      {
      tempr = op->vtkUnicodeStringArray::NewIterator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_GetVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  vtkVariant tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVariantValue(temp0);
      }
    else
      {
      tempr = op->vtkUnicodeStringArray::GetVariantValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_LookupValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      tempr = op->LookupValue(*temp0);
      }
    else
      {
      tempr = op->vtkUnicodeStringArray::LookupValue(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkUnicodeStringArray_LookupValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->LookupValue(*temp0, temp1);
      }
    else
      {
      op->vtkUnicodeStringArray::LookupValue(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkUnicodeStringArray_LookupValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkUnicodeStringArray_LookupValue_s1(self, args);
    case 2:
      return PyvtkUnicodeStringArray_LookupValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "LookupValue");
  return NULL;
}



static PyObject *
PyvtkUnicodeStringArray_SetVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetVariantValue(temp0, *temp1);
      }
    else
      {
      op->vtkUnicodeStringArray::SetVariantValue(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_DataChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DataChanged();
      }
    else
      {
      op->vtkUnicodeStringArray::DataChanged();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_ClearLookup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLookup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLookup();
      }
    else
      {
      op->vtkUnicodeStringArray::ClearLookup();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkUnicodeString temp0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertNextValue(temp0);
      }
    else
      {
      tempr = op->vtkUnicodeStringArray::InsertNextValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  vtkUnicodeString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->InsertValue(temp0, temp1);
      }
    else
      {
      op->vtkUnicodeStringArray::InsertValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  vtkUnicodeString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkUnicodeStringArray::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  vtkUnicodeString *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = &op->GetValue(temp0);
      }
    else
      {
      tempr = &op->vtkUnicodeStringArray::GetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_InsertNextUTF8Value(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextUTF8Value");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->InsertNextUTF8Value(temp0);
      }
    else
      {
      op->vtkUnicodeStringArray::InsertNextUTF8Value(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_SetUTF8Value(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUTF8Value");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetUTF8Value(temp0, temp1);
      }
    else
      {
      op->vtkUnicodeStringArray::SetUTF8Value(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnicodeStringArray_GetUTF8Value(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUTF8Value");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnicodeStringArray *op = static_cast<vtkUnicodeStringArray *>(vp);

  vtkIdType temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUTF8Value(temp0);
      }
    else
      {
      tempr = op->vtkUnicodeStringArray::GetUTF8Value(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnicodeStringArray_Methods[] = {
  {(char*)"GetClassName", PyvtkUnicodeStringArray_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnicodeStringArray_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnicodeStringArray_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnicodeStringArray\nC++: vtkUnicodeStringArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnicodeStringArray_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUnicodeStringArray\nC++: vtkUnicodeStringArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Allocate", PyvtkUnicodeStringArray_Allocate, 1,
   (char*)"V.Allocate(int, int) -> int\nC++: virtual int Allocate(vtkIdType sz, vtkIdType ext=1000)\n\n"},
  {(char*)"Initialize", PyvtkUnicodeStringArray_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\n"},
  {(char*)"GetDataType", PyvtkUnicodeStringArray_GetDataType, 1,
   (char*)"V.GetDataType() -> int\nC++: virtual int GetDataType()\n\n"},
  {(char*)"GetDataTypeSize", PyvtkUnicodeStringArray_GetDataTypeSize, 1,
   (char*)"V.GetDataTypeSize() -> int\nC++: virtual int GetDataTypeSize()\n\n"},
  {(char*)"GetElementComponentSize", PyvtkUnicodeStringArray_GetElementComponentSize, 1,
   (char*)"V.GetElementComponentSize() -> int\nC++: virtual int GetElementComponentSize()\n\n"},
  {(char*)"SetNumberOfTuples", PyvtkUnicodeStringArray_SetNumberOfTuples, 1,
   (char*)"V.SetNumberOfTuples(int)\nC++: virtual void SetNumberOfTuples(vtkIdType number)\n\n"},
  {(char*)"SetTuple", PyvtkUnicodeStringArray_SetTuple, 1,
   (char*)"V.SetTuple(int, int, vtkAbstractArray)\nC++: virtual void SetTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source)\n\n"},
  {(char*)"InsertTuple", PyvtkUnicodeStringArray_InsertTuple, 1,
   (char*)"V.InsertTuple(int, int, vtkAbstractArray)\nC++: virtual void InsertTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source)\n\n"},
  {(char*)"InsertNextTuple", PyvtkUnicodeStringArray_InsertNextTuple, 1,
   (char*)"V.InsertNextTuple(int, vtkAbstractArray) -> int\nC++: virtual vtkIdType InsertNextTuple(vtkIdType j,\n    vtkAbstractArray *source)\n\n"},
  {(char*)"GetVoidPointer", PyvtkUnicodeStringArray_GetVoidPointer, 1,
   (char*)"V.GetVoidPointer(int) ->\nC++: virtual void *GetVoidPointer(vtkIdType id)\n\n"},
  {(char*)"DeepCopy", PyvtkUnicodeStringArray_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkAbstractArray)\nC++: virtual void DeepCopy(vtkAbstractArray *da)\n\n"},
  {(char*)"InterpolateTuple", PyvtkUnicodeStringArray_InterpolateTuple, 1,
   (char*)"V.InterpolateTuple(int, int, vtkAbstractArray, int,\n    vtkAbstractArray, float)\nC++: virtual void InterpolateTuple(vtkIdType i, vtkIdType id1,\n    vtkAbstractArray *source1, vtkIdType id2,\n    vtkAbstractArray *source2, double t)\n\n"},
  {(char*)"Squeeze", PyvtkUnicodeStringArray_Squeeze, 1,
   (char*)"V.Squeeze()\nC++: virtual void Squeeze()\n\n"},
  {(char*)"Resize", PyvtkUnicodeStringArray_Resize, 1,
   (char*)"V.Resize(int) -> int\nC++: virtual int Resize(vtkIdType numTuples)\n\n"},
  {(char*)"SetVoidArray", PyvtkUnicodeStringArray_SetVoidArray, 1,
   (char*)"V.SetVoidArray(, int, int)\nC++: virtual void SetVoidArray(void *array, vtkIdType size,\n    int save)\n\n"},
  {(char*)"GetActualMemorySize", PyvtkUnicodeStringArray_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\n"},
  {(char*)"IsNumeric", PyvtkUnicodeStringArray_IsNumeric, 1,
   (char*)"V.IsNumeric() -> int\nC++: virtual int IsNumeric()\n\n"},
  {(char*)"NewIterator", PyvtkUnicodeStringArray_NewIterator, 1,
   (char*)"V.NewIterator() -> vtkArrayIterator\nC++: virtual vtkArrayIterator *NewIterator()\n\n"},
  {(char*)"GetVariantValue", PyvtkUnicodeStringArray_GetVariantValue, 1,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(vtkIdType idx)\n\n"},
  {(char*)"LookupValue", PyvtkUnicodeStringArray_LookupValue, 1,
   (char*)"V.LookupValue(vtkVariant) -> int\nC++: virtual vtkIdType LookupValue(vtkVariant value)\nV.LookupValue(vtkVariant, vtkIdList)\nC++: virtual void LookupValue(vtkVariant value, vtkIdList *ids)\n\n"},
  {(char*)"SetVariantValue", PyvtkUnicodeStringArray_SetVariantValue, 1,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: virtual void SetVariantValue(vtkIdType idx, vtkVariant value)\n\n"},
  {(char*)"DataChanged", PyvtkUnicodeStringArray_DataChanged, 1,
   (char*)"V.DataChanged()\nC++: virtual void DataChanged()\n\n"},
  {(char*)"ClearLookup", PyvtkUnicodeStringArray_ClearLookup, 1,
   (char*)"V.ClearLookup()\nC++: virtual void ClearLookup()\n\n"},
  {(char*)"InsertNextValue", PyvtkUnicodeStringArray_InsertNextValue, 1,
   (char*)"V.InsertNextValue(unicode) -> int\nC++: vtkIdType InsertNextValue(const vtkUnicodeString &)\n\n"},
  {(char*)"InsertValue", PyvtkUnicodeStringArray_InsertValue, 1,
   (char*)"V.InsertValue(int, unicode)\nC++: void InsertValue(vtkIdType idx, const vtkUnicodeString &)\n\n"},
  {(char*)"SetValue", PyvtkUnicodeStringArray_SetValue, 1,
   (char*)"V.SetValue(int, unicode)\nC++: void SetValue(vtkIdType i, const vtkUnicodeString &)\n\n"},
  {(char*)"GetValue", PyvtkUnicodeStringArray_GetValue, 1,
   (char*)"V.GetValue(int) -> unicode\nC++: vtkUnicodeString &GetValue(vtkIdType i)\n\n"},
  {(char*)"InsertNextUTF8Value", PyvtkUnicodeStringArray_InsertNextUTF8Value, 1,
   (char*)"V.InsertNextUTF8Value(string)\nC++: void InsertNextUTF8Value(const char *)\n\n"},
  {(char*)"SetUTF8Value", PyvtkUnicodeStringArray_SetUTF8Value, 1,
   (char*)"V.SetUTF8Value(int, string)\nC++: void SetUTF8Value(vtkIdType i, const char *)\n\n"},
  {(char*)"GetUTF8Value", PyvtkUnicodeStringArray_GetUTF8Value, 1,
   (char*)"V.GetUTF8Value(int) -> string\nC++: const char *GetUTF8Value(vtkIdType i)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnicodeStringArray_StaticNew()
{
  return vtkUnicodeStringArray::New();
}

PyObject *PyVTKClass_vtkUnicodeStringArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnicodeStringArray_StaticNew,
    PyvtkUnicodeStringArray_Methods,
    "vtkUnicodeStringArray", modulename,
    NULL, NULL,
    PyvtkUnicodeStringArray_Doc(),
    PyVTKClass_vtkAbstractArrayNew(modulename));
  return cls;
}

const char **PyvtkUnicodeStringArray_Doc()
{
  static const char *docstring[] = {
    "vtkUnicodeStringArray - Subclass of vtkAbstractArray that holds\nvtkUnicodeStrings\n\n",
    "Superclass: vtkAbstractArray\n\n",
    "Thanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnicodeStringArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnicodeStringArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnicodeStringArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

