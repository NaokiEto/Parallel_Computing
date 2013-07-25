// python wrapper for vtkVariantArray
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
#include "vtkVariantArray.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVariantArray(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVariantArray(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVariantArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVariantArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractArrayNew
extern "C" { PyObject *PyVTKClass_vtkAbstractArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractArrayNew
#endif

static const char **PyvtkVariantArray_Doc();


static PyObject *
PyvtkVariantArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      tempr = op->vtkVariantArray::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      tempr = op->vtkVariantArray::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

  vtkVariantArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVariantArray::NewInstance();
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
PyvtkVariantArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVariantArray *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVariantArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      tempr = op->vtkVariantArray::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkVariantArray::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      tempr = op->vtkVariantArray::GetDataType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      tempr = op->vtkVariantArray::GetDataTypeSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_GetElementComponentSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementComponentSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      tempr = op->vtkVariantArray::GetElementComponentSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      op->vtkVariantArray::SetNumberOfTuples(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_SetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      op->vtkVariantArray::SetTuple(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_InsertTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      op->vtkVariantArray::InsertTuple(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_InsertNextTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      tempr = op->vtkVariantArray::InsertNextTuple(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      tempr = op->vtkVariantArray::GetVoidPointer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      op->vtkVariantArray::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_InterpolateTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      op->vtkVariantArray::InterpolateTuple(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkVariantArray::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      tempr = op->vtkVariantArray::Resize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_SetVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      op->vtkVariantArray::SetVoidArray(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      tempr = op->vtkVariantArray::GetActualMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_IsNumeric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNumeric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      tempr = op->vtkVariantArray::IsNumeric();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      tempr = op->vtkVariantArray::NewIterator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

  vtkIdType temp0;
  vtkVariant *tempr;
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
      tempr = &op->vtkVariantArray::GetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      op->SetValue(temp0, *temp1);
      }
    else
      {
      op->vtkVariantArray::SetValue(temp0, *temp1);
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
PyvtkVariantArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      op->InsertValue(temp0, *temp1);
      }
    else
      {
      op->vtkVariantArray::InsertValue(temp0, *temp1);
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
PyvtkVariantArray_SetVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      op->vtkVariantArray::SetVariantValue(temp0, *temp1);
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
PyvtkVariantArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertNextValue(*temp0);
      }
    else
      {
      tempr = op->vtkVariantArray::InsertNextValue(*temp0);
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
PyvtkVariantArray_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfValues(temp0);
      }
    else
      {
      op->vtkVariantArray::SetNumberOfValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfValues();
      }
    else
      {
      tempr = op->vtkVariantArray::GetNumberOfValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_LookupValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      tempr = op->vtkVariantArray::LookupValue(*temp0);
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
PyvtkVariantArray_LookupValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

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
      op->vtkVariantArray::LookupValue(*temp0, temp1);
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
PyvtkVariantArray_LookupValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVariantArray_LookupValue_s1(self, args);
    case 2:
      return PyvtkVariantArray_LookupValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "LookupValue");
  return NULL;
}



static PyObject *
PyvtkVariantArray_DataChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DataChanged();
      }
    else
      {
      op->vtkVariantArray::DataChanged();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_DataElementChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataElementChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DataElementChanged(temp0);
      }
    else
      {
      op->vtkVariantArray::DataElementChanged(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVariantArray_ClearLookup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLookup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVariantArray *op = static_cast<vtkVariantArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLookup();
      }
    else
      {
      op->vtkVariantArray::ClearLookup();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkVariantArray_Methods[] = {
  {(char*)"GetClassName", PyvtkVariantArray_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVariantArray_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVariantArray_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVariantArray\nC++: vtkVariantArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVariantArray_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVariantArray\nC++: vtkVariantArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Allocate", PyvtkVariantArray_Allocate, 1,
   (char*)"V.Allocate(int, int) -> int\nC++: virtual int Allocate(vtkIdType sz, vtkIdType ext=1000)\n\nAllocate memory for this array. Delete old storage only if\nnecessary. Note that ext is no longer used.\n"},
  {(char*)"Initialize", PyvtkVariantArray_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nRelease storage and reset array to initial state.\n"},
  {(char*)"GetDataType", PyvtkVariantArray_GetDataType, 1,
   (char*)"V.GetDataType() -> int\nC++: virtual int GetDataType()\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkSetGet.h.\n"},
  {(char*)"GetDataTypeSize", PyvtkVariantArray_GetDataTypeSize, 1,
   (char*)"V.GetDataTypeSize() -> int\nC++: virtual int GetDataTypeSize()\n\nReturn the size of the underlying data type.  For a bit, 1 is\nreturned.  For string 0 is returned. Arrays with variable length\ncomponents return 0.\n"},
  {(char*)"GetElementComponentSize", PyvtkVariantArray_GetElementComponentSize, 1,
   (char*)"V.GetElementComponentSize() -> int\nC++: virtual int GetElementComponentSize()\n\nReturn the size, in bytes, of the lowest-level element of an\narray.  For vtkDataArray and subclasses this is the size of the\ndata type.  For vtkStringArray, this is\nsizeof(vtkStdString::value_type), which winds up being\nsizeof(char).\n"},
  {(char*)"SetNumberOfTuples", PyvtkVariantArray_SetNumberOfTuples, 1,
   (char*)"V.SetNumberOfTuples(int)\nC++: virtual void SetNumberOfTuples(vtkIdType number)\n\nSet the number of tuples (a component group) in the array. Note\nthat this may allocate space depending on the number of\ncomponents.\n"},
  {(char*)"SetTuple", PyvtkVariantArray_SetTuple, 1,
   (char*)"V.SetTuple(int, int, vtkAbstractArray)\nC++: virtual void SetTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source)\n\nSet the tuple at the ith location using the jth tuple in the\nsource array. This method assumes that the two arrays have the\nsame type and structure. Note that range checking and memory\nallocation is not performed; use in conjunction with\nSetNumberOfTuples() to allocate space.\n"},
  {(char*)"InsertTuple", PyvtkVariantArray_InsertTuple, 1,
   (char*)"V.InsertTuple(int, int, vtkAbstractArray)\nC++: virtual void InsertTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source)\n\nInsert the jth tuple in the source array, at ith location in this\narray. Note that memory allocation is performed as necessary to\nhold the data.\n"},
  {(char*)"InsertNextTuple", PyvtkVariantArray_InsertNextTuple, 1,
   (char*)"V.InsertNextTuple(int, vtkAbstractArray) -> int\nC++: virtual vtkIdType InsertNextTuple(vtkIdType j,\n    vtkAbstractArray *source)\n\nInsert the jth tuple in the source array, at the end in this\narray. Note that memory allocation is performed as necessary to\nhold the data. Returns the location at which the data was\ninserted.\n"},
  {(char*)"GetVoidPointer", PyvtkVariantArray_GetVoidPointer, 1,
   (char*)"V.GetVoidPointer(int) ->\nC++: virtual void *GetVoidPointer(vtkIdType id)\n\nReturn a void pointer. For image pipeline interface and other\nspecial pointer manipulation.\n"},
  {(char*)"DeepCopy", PyvtkVariantArray_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkAbstractArray)\nC++: virtual void DeepCopy(vtkAbstractArray *da)\n\nDeep copy of data. Implementation left to subclasses, which\nshould support as many type conversions as possible given the\ndata type.\n"},
  {(char*)"InterpolateTuple", PyvtkVariantArray_InterpolateTuple, 1,
   (char*)"V.InterpolateTuple(int, int, vtkAbstractArray, int,\n    vtkAbstractArray, float)\nC++: virtual void InterpolateTuple(vtkIdType i, vtkIdType id1,\n    vtkAbstractArray *source1, vtkIdType id2,\n    vtkAbstractArray *source2, double t)\n\n"},
  {(char*)"Squeeze", PyvtkVariantArray_Squeeze, 1,
   (char*)"V.Squeeze()\nC++: virtual void Squeeze()\n\nResize object to just fit data requirement. Reclaims extra\nmemory.\n"},
  {(char*)"Resize", PyvtkVariantArray_Resize, 1,
   (char*)"V.Resize(int) -> int\nC++: virtual int Resize(vtkIdType numTuples)\n\nResize the array while conserving the data.  Returns 1 if\nresizing succeeded and 0 otherwise.\n"},
  {(char*)"SetVoidArray", PyvtkVariantArray_SetVoidArray, 1,
   (char*)"V.SetVoidArray(, int, int)\nC++: virtual void SetVoidArray(void *arr, vtkIdType size,\n    int save)\n\nThis method lets the user specify data to be held by the array. \nThe array argument is a pointer to the data.  size is the size of\nthe array supplied by the user.  Set save to 1 to keep the class\nfrom deleting the array when it cleans up or reallocates memory.\nThe class uses the actual array provided; it does not copy the\ndata from the supplied array.\n"},
  {(char*)"GetActualMemorySize", PyvtkVariantArray_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the memory in kilobytes consumed by this data array. Used\nto support streaming and reading/writing data. The value returned\nis guaranteed to be greater than or equal to the memory required\nto actually represent the data represented by this object. The\ninformation returned is valid only after the pipeline has been\nupdated.\n"},
  {(char*)"IsNumeric", PyvtkVariantArray_IsNumeric, 1,
   (char*)"V.IsNumeric() -> int\nC++: virtual int IsNumeric()\n\nSince each item can be of a different type, we say that a variant\narray is not numeric.\n"},
  {(char*)"NewIterator", PyvtkVariantArray_NewIterator, 1,
   (char*)"V.NewIterator() -> vtkArrayIterator\nC++: virtual vtkArrayIterator *NewIterator()\n\nSubclasses must override this method and provide the right kind\nof templated vtkArrayIteratorTemplate.\n"},
  {(char*)"GetValue", PyvtkVariantArray_GetValue, 1,
   (char*)"V.GetValue(int) -> vtkVariant\nC++: vtkVariant &GetValue(vtkIdType id)\n\nGet the data at a particular index.\n"},
  {(char*)"SetValue", PyvtkVariantArray_SetValue, 1,
   (char*)"V.SetValue(int, vtkVariant)\nC++: void SetValue(vtkIdType id, vtkVariant value)\n\nSet the data at a particular index. Does not do range checking.\nMake sure you use the method SetNumberOfValues() before inserting\ndata.\n"},
  {(char*)"InsertValue", PyvtkVariantArray_InsertValue, 1,
   (char*)"V.InsertValue(int, vtkVariant)\nC++: void InsertValue(vtkIdType id, vtkVariant value)\n\nIf id < GetNumberOfValues(), overwrite the array at that index.\nIf id >= GetNumberOfValues(), expand the array size to id+1 and\nset the final value to the specified value.\n"},
  {(char*)"SetVariantValue", PyvtkVariantArray_SetVariantValue, 1,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType idx, vtkVariant value)\n\nInsert a value into the array from a variant.\n"},
  {(char*)"InsertNextValue", PyvtkVariantArray_InsertNextValue, 1,
   (char*)"V.InsertNextValue(vtkVariant) -> int\nC++: vtkIdType InsertNextValue(vtkVariant value)\n\nExpand the array by one and set the value at that location.\nReturn the array index of the inserted value.\n"},
  {(char*)"SetNumberOfValues", PyvtkVariantArray_SetNumberOfValues, 1,
   (char*)"V.SetNumberOfValues(int)\nC++: void SetNumberOfValues(vtkIdType number)\n\nSpecify the number of values for this object to hold. Does an\nallocation as well as setting the MaxId ivar. Used in conjunction\nwith SetValue() method for fast insertion.\n"},
  {(char*)"GetNumberOfValues", PyvtkVariantArray_GetNumberOfValues, 1,
   (char*)"V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nReturn the number of values in the array.\n"},
  {(char*)"LookupValue", PyvtkVariantArray_LookupValue, 1,
   (char*)"V.LookupValue(vtkVariant) -> int\nC++: virtual vtkIdType LookupValue(vtkVariant value)\nV.LookupValue(vtkVariant, vtkIdList)\nC++: virtual void LookupValue(vtkVariant value, vtkIdList *ids)\n\nReturn the indices where a specific value appears.\n"},
  {(char*)"DataChanged", PyvtkVariantArray_DataChanged, 1,
   (char*)"V.DataChanged()\nC++: virtual void DataChanged()\n\nTell the array explicitly that the data has changed. This is only\nnecessary to call when you modify the array contents without\nusing the array's API (i.e. you retrieve a pointer to the data\nand modify the array contents).  You need to call this so that\nthe fast lookup will know to rebuild itself.  Otherwise, the\nlookup functions will give incorrect results.\n"},
  {(char*)"DataElementChanged", PyvtkVariantArray_DataElementChanged, 1,
   (char*)"V.DataElementChanged(int)\nC++: virtual void DataElementChanged(vtkIdType id)\n\nTell the array explicitly that a single data element has changed.\nLike DataChanged(), then is only necessary when you modify the\narray contents without using the array's API.\n"},
  {(char*)"ClearLookup", PyvtkVariantArray_ClearLookup, 1,
   (char*)"V.ClearLookup()\nC++: virtual void ClearLookup()\n\nDelete the associated fast lookup data structure on this array,\nif it exists.  The lookup will be rebuilt on the next call to a\nlookup function.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVariantArray_StaticNew()
{
  return vtkVariantArray::New();
}

PyObject *PyVTKClass_vtkVariantArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVariantArray_StaticNew,
    PyvtkVariantArray_Methods,
    "vtkVariantArray", modulename,
    NULL, NULL,
    PyvtkVariantArray_Doc(),
    PyVTKClass_vtkAbstractArrayNew(modulename));
  return cls;
}

const char **PyvtkVariantArray_Doc()
{
  static const char *docstring[] = {
    "vtkVariantArray - An array holding vtkVariants.\n\n",
    "Superclass: vtkAbstractArray\n\n",
    "Thanks:\n\nThanks to Patricia Crossno, Ken Moreland, Andrew Wilson and Brian\nWylie from Sandia National Laboratories for their help in developing\nthis class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVariantArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVariantArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVariantArray", o) != 0)
    {
    Py_DECREF(o);
    }

}
