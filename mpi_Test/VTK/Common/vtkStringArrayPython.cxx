// python wrapper for vtkStringArray
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
#include "vtkStringArray.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStringArray(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStringArray(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStringArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStringArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractArrayNew
extern "C" { PyObject *PyVTKClass_vtkAbstractArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractArrayNew
#endif

static const char **PyvtkStringArray_Doc();


static PyObject *
PyvtkStringArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      tempr = op->vtkStringArray::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      tempr = op->vtkStringArray::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStringArray::NewInstance();
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
PyvtkStringArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStringArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      tempr = op->vtkStringArray::GetDataType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_IsNumeric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNumeric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      tempr = op->vtkStringArray::IsNumeric();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkStringArray::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      tempr = op->vtkStringArray::GetDataTypeSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkStringArray::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      tempr = op->vtkStringArray::Resize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_SetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::SetTuple(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_InsertTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::InsertTuple(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_InsertNextTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      tempr = op->vtkStringArray::InsertNextTuple(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_InterpolateTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::InterpolateTuple(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_GetTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  vtkIdList *temp0 = NULL;
  vtkAbstractArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      op->GetTuples(temp0, temp1);
      }
    else
      {
      op->vtkStringArray::GetTuples(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStringArray_GetTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->GetTuples(temp0, temp1, temp2);
      }
    else
      {
      op->vtkStringArray::GetTuples(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkStringArray_GetTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkStringArray_GetTuples_s1(self, args);
    case 3:
      return PyvtkStringArray_GetTuples_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTuples");
  return NULL;
}



static PyObject *
PyvtkStringArray_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      tempr = op->vtkStringArray::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  vtkIdType temp0;
  vtkStdString *tempr;
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
      tempr = &op->vtkStringArray::GetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(*tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  vtkIdType temp0;
  vtkStdString temp1;
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
      op->vtkStringArray::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::SetNumberOfTuples(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::SetNumberOfValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      tempr = op->vtkStringArray::GetNumberOfValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_GetNumberOfElementComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfElementComponents();
      }
    else
      {
      tempr = op->vtkStringArray::GetNumberOfElementComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_GetElementComponentSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementComponentSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      tempr = op->vtkStringArray::GetElementComponentSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  vtkIdType temp0;
  vtkStdString temp1;
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
      op->vtkStringArray::InsertValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_SetVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::SetVariantValue(temp0, *temp1);
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
PyvtkStringArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  vtkStdString temp0;
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
      tempr = op->vtkStringArray::InsertNextValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      tempr = op->vtkStringArray::GetVoidPointer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_SetVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::SetVoidArray(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      tempr = op->vtkStringArray::GetActualMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      tempr = op->vtkStringArray::NewIterator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_GetDataSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataSize();
      }
    else
      {
      tempr = op->vtkStringArray::GetDataSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_LookupValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      tempr = op->vtkStringArray::LookupValue(*temp0);
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
PyvtkStringArray_LookupValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::LookupValue(*temp0, temp1);
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
PyvtkStringArray_LookupValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  vtkStdString temp0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->LookupValue(temp0);
      }
    else
      {
      tempr = op->vtkStringArray::LookupValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStringArray_LookupValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  vtkStdString temp0;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->LookupValue(temp0, temp1);
      }
    else
      {
      op->vtkStringArray::LookupValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStringArray_LookupValue_Methods[] = {
  {NULL, PyvtkStringArray_LookupValue_s1, 1,
   (char*)"@O vtkVariant"},
  {NULL, PyvtkStringArray_LookupValue_s2, 1,
   (char*)"@OO vtkVariant *vtkIdList"},
  {NULL, PyvtkStringArray_LookupValue_s3, 1,
   (char*)"@s"},
  {NULL, PyvtkStringArray_LookupValue_s4, 1,
   (char*)"@sO *vtkIdList"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkStringArray_LookupValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStringArray_LookupValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "LookupValue");
  return NULL;
}



static PyObject *
PyvtkStringArray_DataChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DataChanged();
      }
    else
      {
      op->vtkStringArray::DataChanged();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_DataElementChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataElementChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::DataElementChanged(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStringArray_ClearLookup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLookup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLookup();
      }
    else
      {
      op->vtkStringArray::ClearLookup();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStringArray_Methods[] = {
  {(char*)"GetClassName", PyvtkStringArray_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStringArray_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStringArray_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStringArray\nC++: vtkStringArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStringArray_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStringArray\nC++: vtkStringArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataType", PyvtkStringArray_GetDataType, 1,
   (char*)"V.GetDataType() -> int\nC++: int GetDataType()\n\nGet the data type.\n"},
  {(char*)"IsNumeric", PyvtkStringArray_IsNumeric, 1,
   (char*)"V.IsNumeric() -> int\nC++: int IsNumeric()\n\n"},
  {(char*)"Initialize", PyvtkStringArray_Initialize, 1,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nRelease storage and reset array to initial state.\n"},
  {(char*)"GetDataTypeSize", PyvtkStringArray_GetDataTypeSize, 1,
   (char*)"V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\nReturn the size of the data type.  WARNING: This may not mean\nwhat you expect with strings.  It will return\nsizeof(vtkstd::string) and not take into account the data\nincluded in any particular string.\n"},
  {(char*)"Squeeze", PyvtkStringArray_Squeeze, 1,
   (char*)"V.Squeeze()\nC++: void Squeeze()\n\nFree any unnecessary memory. Resize object to just fit data\nrequirement. Reclaims extra memory.\n"},
  {(char*)"Resize", PyvtkStringArray_Resize, 1,
   (char*)"V.Resize(int) -> int\nC++: int Resize(vtkIdType numTuples)\n\nResize the array while conserving the data.\n"},
  {(char*)"SetTuple", PyvtkStringArray_SetTuple, 1,
   (char*)"V.SetTuple(int, int, vtkAbstractArray)\nC++: virtual void SetTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source)\n\nSet the tuple at the ith location using the jth tuple in the\nsource array. This method assumes that the two arrays have the\nsame type and structure. Note that range checking and memory\nallocation is not performed; use in conjunction with\nSetNumberOfTuples() to allocate space.\n"},
  {(char*)"InsertTuple", PyvtkStringArray_InsertTuple, 1,
   (char*)"V.InsertTuple(int, int, vtkAbstractArray)\nC++: virtual void InsertTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source)\n\nInsert the jth tuple in the source array, at ith location in this\narray. Note that memory allocation is performed as necessary to\nhold the data.\n"},
  {(char*)"InsertNextTuple", PyvtkStringArray_InsertNextTuple, 1,
   (char*)"V.InsertNextTuple(int, vtkAbstractArray) -> int\nC++: virtual vtkIdType InsertNextTuple(vtkIdType j,\n    vtkAbstractArray *source)\n\nInsert the jth tuple in the source array, at the end in this\narray. Note that memory allocation is performed as necessary to\nhold the data. Returns the location at which the data was\ninserted.\n"},
  {(char*)"InterpolateTuple", PyvtkStringArray_InterpolateTuple, 1,
   (char*)"V.InterpolateTuple(int, int, vtkAbstractArray, int,\n    vtkAbstractArray, float)\nC++: virtual void InterpolateTuple(vtkIdType i, vtkIdType id1,\n    vtkAbstractArray *source1, vtkIdType id2,\n    vtkAbstractArray *source2, double t)\n\n"},
  {(char*)"GetTuples", PyvtkStringArray_GetTuples, 1,
   (char*)"V.GetTuples(vtkIdList, vtkAbstractArray)\nC++: virtual void GetTuples(vtkIdList *ptIds,\n    vtkAbstractArray *output)\nV.GetTuples(int, int, vtkAbstractArray)\nC++: virtual void GetTuples(vtkIdType p1, vtkIdType p2,\n    vtkAbstractArray *output)\n\nGiven a list of indices, return an array of values.  You must\ninsure that the output array has been previously allocated with\nenough space to hold the data and that the types match\nsufficiently to allow conversion (if necessary).\n"},
  {(char*)"Allocate", PyvtkStringArray_Allocate, 1,
   (char*)"V.Allocate(int, int) -> int\nC++: int Allocate(vtkIdType sz, vtkIdType ext=1000)\n\nAllocate memory for this array. Delete old storage only if\nnecessary. Note that ext is no longer used.\n"},
  {(char*)"GetValue", PyvtkStringArray_GetValue, 1,
   (char*)"V.GetValue(int) -> string\nC++: vtkStdString &GetValue(vtkIdType id)\n\nGet the data at a particular index.\n"},
  {(char*)"SetValue", PyvtkStringArray_SetValue, 1,
   (char*)"V.SetValue(int, string)\nC++: void SetValue(vtkIdType id, vtkStdString value)\n\nSet the data at a particular index. Does not do range checking.\nMake sure you use the method SetNumberOfValues() before inserting\ndata.\n"},
  {(char*)"SetNumberOfTuples", PyvtkStringArray_SetNumberOfTuples, 1,
   (char*)"V.SetNumberOfTuples(int)\nC++: virtual void SetNumberOfTuples(vtkIdType number)\n\nSet the number of tuples (a component group) in the array. Note\nthat this may allocate space depending on the number of\ncomponents.\n"},
  {(char*)"SetNumberOfValues", PyvtkStringArray_SetNumberOfValues, 1,
   (char*)"V.SetNumberOfValues(int)\nC++: void SetNumberOfValues(vtkIdType number)\n\nSpecify the number of values for this object to hold. Does an\nallocation as well as setting the MaxId ivar. Used in conjunction\nwith SetValue() method for fast insertion.\n"},
  {(char*)"GetNumberOfValues", PyvtkStringArray_GetNumberOfValues, 1,
   (char*)"V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\n"},
  {(char*)"GetNumberOfElementComponents", PyvtkStringArray_GetNumberOfElementComponents, 1,
   (char*)"V.GetNumberOfElementComponents() -> int\nC++: int GetNumberOfElementComponents()\n\n"},
  {(char*)"GetElementComponentSize", PyvtkStringArray_GetElementComponentSize, 1,
   (char*)"V.GetElementComponentSize() -> int\nC++: int GetElementComponentSize()\n\n"},
  {(char*)"InsertValue", PyvtkStringArray_InsertValue, 1,
   (char*)"V.InsertValue(int, string)\nC++: void InsertValue(vtkIdType id, vtkStdString f)\n\nInsert data at a specified position in the array.\n"},
  {(char*)"SetVariantValue", PyvtkStringArray_SetVariantValue, 1,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType idx, vtkVariant value)\n\nSet a value in the array form a variant. Insert a value into the\narray from a variant.\n"},
  {(char*)"InsertNextValue", PyvtkStringArray_InsertNextValue, 1,
   (char*)"V.InsertNextValue(string) -> int\nC++: vtkIdType InsertNextValue(vtkStdString f)\n\nInsert data at the end of the array. Return its location in the\narray.\n"},
  {(char*)"GetVoidPointer", PyvtkStringArray_GetVoidPointer, 1,
   (char*)"V.GetVoidPointer(int) ->\nC++: void *GetVoidPointer(vtkIdType id)\n\nGet the address of a particular data index. Performs no checks to\nverify that the memory has been allocated etc.\n"},
  {(char*)"DeepCopy", PyvtkStringArray_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkAbstractArray)\nC++: void DeepCopy(vtkAbstractArray *aa)\n\nDeep copy of another string array.  Will complain and change\nnothing if the array passed in is not a vtkStringArray.\n"},
  {(char*)"SetVoidArray", PyvtkStringArray_SetVoidArray, 1,
   (char*)"V.SetVoidArray(, int, int)\nC++: virtual void SetVoidArray(void *array, vtkIdType size,\n    int save)\n\nThis method lets the user specify data to be held by the array. \nThe array argument is a pointer to the data.  size is the size of\nthe array supplied by the user.  Set save to 1 to keep the class\nfrom deleting the array when it cleans up or reallocates memory.\nThe class uses the actual array provided; it does not copy the\ndata from the suppled array. If save is 0, then this class is\nfree to delete the array when it cleans up or reallocates. In\nthat case, it is required that the array was allocated using the\nC++ new operator (and not malloc).\n"},
  {(char*)"GetActualMemorySize", PyvtkStringArray_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the memory in kilobytes consumed by this data array. Used\nto support streaming and reading/writing data. The value returned\nis guaranteed to be greater than or equal to the memory required\nto actually represent the data represented by this object. The\ninformation returned is valid only after the pipeline has been\nupdated.\n\nThis function takes into account the size of the contents of the\nstrings as well as the string containers themselves.\n"},
  {(char*)"NewIterator", PyvtkStringArray_NewIterator, 1,
   (char*)"V.NewIterator() -> vtkArrayIterator\nC++: virtual vtkArrayIterator *NewIterator()\n\nReturns a vtkArrayIteratorTemplate<vtkStdString>.\n"},
  {(char*)"GetDataSize", PyvtkStringArray_GetDataSize, 1,
   (char*)"V.GetDataSize() -> int\nC++: virtual vtkIdType GetDataSize()\n\nReturns the size of the data in DataTypeSize units. Thus, the\nnumber of bytes for the data can be computed by GetDataSize() *\nGetDataTypeSize(). The size computation includes the string\ntermination character for each string.\n"},
  {(char*)"LookupValue", PyvtkStringArray_LookupValue, 1,
   (char*)"V.LookupValue(vtkVariant) -> int\nC++: virtual vtkIdType LookupValue(vtkVariant value)\nV.LookupValue(vtkVariant, vtkIdList)\nC++: virtual void LookupValue(vtkVariant value, vtkIdList *ids)\nV.LookupValue(string) -> int\nC++: vtkIdType LookupValue(vtkStdString value)\nV.LookupValue(string, vtkIdList)\nC++: void LookupValue(vtkStdString value, vtkIdList *ids)\n\nReturn the indices where a specific value appears.\n"},
  {(char*)"DataChanged", PyvtkStringArray_DataChanged, 1,
   (char*)"V.DataChanged()\nC++: virtual void DataChanged()\n\nTell the array explicitly that the data has changed. This is only\nnecessary to call when you modify the array contents without\nusing the array's API (i.e. you retrieve a pointer to the data\nand modify the array contents).  You need to call this so that\nthe fast lookup will know to rebuild itself.  Otherwise, the\nlookup functions will give incorrect results.\n"},
  {(char*)"DataElementChanged", PyvtkStringArray_DataElementChanged, 1,
   (char*)"V.DataElementChanged(int)\nC++: virtual void DataElementChanged(vtkIdType id)\n\nTell the array explicitly that a single data element has changed.\nLike DataChanged(), then is only necessary when you modify the\narray contents without using the array's API.\n"},
  {(char*)"ClearLookup", PyvtkStringArray_ClearLookup, 1,
   (char*)"V.ClearLookup()\nC++: virtual void ClearLookup()\n\nDelete the associated fast lookup data structure on this array,\nif it exists.  The lookup will be rebuilt on the next call to a\nlookup function.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStringArray_StaticNew()
{
  return vtkStringArray::New();
}

PyObject *PyVTKClass_vtkStringArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStringArray_StaticNew,
    PyvtkStringArray_Methods,
    "vtkStringArray", modulename,
    NULL, NULL,
    PyvtkStringArray_Doc(),
    PyVTKClass_vtkAbstractArrayNew(modulename));
  return cls;
}

const char **PyvtkStringArray_Doc()
{
  static const char *docstring[] = {
    "vtkStringArray - a vtkAbstractArray subclass for strings\n\n",
    "Superclass: vtkAbstractArray\n\n",
    "Points and cells may sometimes have associated data that are stored\nas strings, e.g. labels for information visualization projects. This\nclass provides a clean way to store and access those strings.\n\nThanks:\n\nAndy Wilson (atwilso@sandia.gov) wrote this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStringArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStringArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStringArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

