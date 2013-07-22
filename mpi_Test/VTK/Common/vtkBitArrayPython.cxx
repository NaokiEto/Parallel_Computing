// python wrapper for vtkBitArray
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
#include "vtkBitArray.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBitArray(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBitArray(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBitArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBitArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataArrayNew
extern "C" { PyObject *PyVTKClass_vtkDataArrayNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataArrayNew
#endif

static const char **PyvtkBitArray_Doc();


static PyObject *
PyvtkBitArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      tempr = op->vtkBitArray::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      tempr = op->vtkBitArray::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkBitArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBitArray::NewInstance();
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
PyvtkBitArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBitArray *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBitArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      tempr = op->vtkBitArray::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkBitArray::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      tempr = op->vtkBitArray::GetDataType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      tempr = op->vtkBitArray::GetDataTypeSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      op->vtkBitArray::SetNumberOfTuples(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_SetTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      op->vtkBitArray::SetTuple(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBitArray_SetTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  double *temp1 = NULL;
  double small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[size1];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetTuple(temp0, temp1);
      }
    else
      {
      op->vtkBitArray::SetTuple(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkBitArray_SetTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkBitArray_SetTuple_s1(self, args);
    case 2:
      return PyvtkBitArray_SetTuple_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTuple");
  return NULL;
}



static PyObject *
PyvtkBitArray_InsertTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      op->vtkBitArray::InsertTuple(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBitArray_InsertTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  double *temp1 = NULL;
  double small1[4];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[size1];
      }
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->InsertTuple(temp0, temp1);
      }
    else
      {
      op->vtkBitArray::InsertTuple(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkBitArray_InsertTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkBitArray_InsertTuple_s1(self, args);
    case 2:
      return PyvtkBitArray_InsertTuple_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuple");
  return NULL;
}



static PyObject *
PyvtkBitArray_InsertNextTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      tempr = op->vtkBitArray::InsertNextTuple(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkBitArray_InsertNextTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  double *temp0 = NULL;
  double small0[4];
  int size0 = 0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op)
    {
    size0 = op->GetNumberOfComponents();
    temp0 = small0;
    if (size0 > 4)
      {
      temp0 = new double[size0];
      }
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertNextTuple(temp0);
      }
    else
      {
      tempr = op->vtkBitArray::InsertNextTuple(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  if (temp0 && temp0 != small0)
    {
    delete [] temp0;
    }

  return result;
}

static PyObject *
PyvtkBitArray_InsertNextTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBitArray_InsertNextTuple_s1(self, args);
    case 1:
      return PyvtkBitArray_InsertNextTuple_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextTuple");
  return NULL;
}



static PyObject *
PyvtkBitArray_GetTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  double *tempr;
  int sizer = 0;
  PyObject *result = NULL;

  if (op)
    {
    sizer = op->GetNumberOfComponents();
    }

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTuple(temp0);
      }
    else
      {
      tempr = op->vtkBitArray::GetTuple(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkBitArray_GetTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  double *temp1 = NULL;
  double *save1 = NULL;
  double small1[8];
  int size1 = 0;
  PyObject *result = NULL;

  if (op)
    {
    size1 = op->GetNumberOfComponents();
    temp1 = small1;
    if (size1 > 4)
      {
      temp1 = new double[2*size1];
      }
    save1 = &temp1[size1];
    }

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetTuple(temp0, temp1);
      }
    else
      {
      op->vtkBitArray::GetTuple(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  if (temp1 && temp1 != small1)
    {
    delete [] temp1;
    }

  return result;
}

static PyObject *
PyvtkBitArray_GetTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkBitArray_GetTuple_s1(self, args);
    case 2:
      return PyvtkBitArray_GetTuple_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetTuple");
  return NULL;
}



static PyObject *
PyvtkBitArray_RemoveTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveTuple(temp0);
      }
    else
      {
      op->vtkBitArray::RemoveTuple(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_RemoveFirstTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFirstTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveFirstTuple();
      }
    else
      {
      op->vtkBitArray::RemoveFirstTuple();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_RemoveLastTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLastTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveLastTuple();
      }
    else
      {
      op->vtkBitArray::RemoveLastTuple();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  int temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetComponent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBitArray::SetComponent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkBitArray::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      tempr = op->vtkBitArray::Resize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValue(temp0);
      }
    else
      {
      tempr = op->vtkBitArray::GetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      op->vtkBitArray::SetNumberOfValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  int temp1;
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
      op->vtkBitArray::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  int temp1;
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
      op->vtkBitArray::InsertValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_SetVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      op->vtkBitArray::SetVariantValue(temp0, *temp1);
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
PyvtkBitArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  int temp0;
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
      tempr = op->vtkBitArray::InsertNextValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_InsertComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  int temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->InsertComponent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkBitArray::InsertComponent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_WriteVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->WriteVoidPointer(temp0, temp1);
      }
    else
      {
      tempr = op->vtkBitArray::WriteVoidPointer(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      tempr = op->vtkBitArray::GetVoidPointer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_DeepCopy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkBitArray::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBitArray_DeepCopy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      op->vtkBitArray::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBitArray_DeepCopy_Methods[] = {
  {NULL, PyvtkBitArray_DeepCopy_s1, 1,
   (char*)"@O *vtkDataArray"},
  {NULL, PyvtkBitArray_DeepCopy_s2, 1,
   (char*)"@O *vtkAbstractArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkBitArray_DeepCopy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBitArray_DeepCopy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DeepCopy");
  return NULL;
}



static PyObject *
PyvtkBitArray_SetVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      op->vtkBitArray::SetVoidArray(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      tempr = op->vtkBitArray::NewIterator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_LookupValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      tempr = op->vtkBitArray::LookupValue(*temp0);
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
PyvtkBitArray_LookupValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

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
      op->vtkBitArray::LookupValue(*temp0, temp1);
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
PyvtkBitArray_LookupValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  int temp0;
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
      tempr = op->vtkBitArray::LookupValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkBitArray_LookupValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  int temp0;
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
      op->vtkBitArray::LookupValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBitArray_LookupValue_Methods[] = {
  {NULL, PyvtkBitArray_LookupValue_s1, 1,
   (char*)"@O vtkVariant"},
  {NULL, PyvtkBitArray_LookupValue_s2, 1,
   (char*)"@OO vtkVariant *vtkIdList"},
  {NULL, PyvtkBitArray_LookupValue_s3, 1,
   (char*)"@i"},
  {NULL, PyvtkBitArray_LookupValue_s4, 1,
   (char*)"@iO *vtkIdList"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkBitArray_LookupValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBitArray_LookupValue_Methods;
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
PyvtkBitArray_DataChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DataChanged();
      }
    else
      {
      op->vtkBitArray::DataChanged();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBitArray_ClearLookup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLookup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearLookup();
      }
    else
      {
      op->vtkBitArray::ClearLookup();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBitArray_Methods[] = {
  {(char*)"GetClassName", PyvtkBitArray_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBitArray_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBitArray_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBitArray\nC++: vtkBitArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBitArray_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBitArray\nC++: vtkBitArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Allocate", PyvtkBitArray_Allocate, 1,
   (char*)"V.Allocate(int, int) -> int\nC++: int Allocate(vtkIdType sz, vtkIdType ext=1000)\n\nAllocate memory for this array. Delete old storage only if\nnecessary. Note that ext is no longer used.\n"},
  {(char*)"Initialize", PyvtkBitArray_Initialize, 1,
   (char*)"V.Initialize()\nC++: void Initialize()\n\nRelease storage and reset array to initial state.\n"},
  {(char*)"GetDataType", PyvtkBitArray_GetDataType, 1,
   (char*)"V.GetDataType() -> int\nC++: int GetDataType()\n\n"},
  {(char*)"GetDataTypeSize", PyvtkBitArray_GetDataTypeSize, 1,
   (char*)"V.GetDataTypeSize() -> int\nC++: int GetDataTypeSize()\n\n"},
  {(char*)"SetNumberOfTuples", PyvtkBitArray_SetNumberOfTuples, 1,
   (char*)"V.SetNumberOfTuples(int)\nC++: void SetNumberOfTuples(vtkIdType number)\n\nSet the number of n-tuples in the array.\n"},
  {(char*)"SetTuple", PyvtkBitArray_SetTuple, 1,
   (char*)"V.SetTuple(int, int, vtkAbstractArray)\nC++: virtual void SetTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source)\nV.SetTuple(int, (float, ...))\nC++: void SetTuple(vtkIdType i, const double *tuple)\n\nSet the tuple at the ith location using the jth tuple in the\nsource array. This method assumes that the two arrays have the\nsame type and structure. Note that range checking and memory\nallocation is not performed; use in conjunction with\nSetNumberOfTuples() to allocate space.\n"},
  {(char*)"InsertTuple", PyvtkBitArray_InsertTuple, 1,
   (char*)"V.InsertTuple(int, int, vtkAbstractArray)\nC++: virtual void InsertTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source)\nV.InsertTuple(int, (float, ...))\nC++: void InsertTuple(vtkIdType i, const double *tuple)\n\nInsert the jth tuple in the source array, at ith location in this\narray. Note that memory allocation is performed as necessary to\nhold the data.\n"},
  {(char*)"InsertNextTuple", PyvtkBitArray_InsertNextTuple, 1,
   (char*)"V.InsertNextTuple(int, vtkAbstractArray) -> int\nC++: virtual vtkIdType InsertNextTuple(vtkIdType j,\n    vtkAbstractArray *source)\nV.InsertNextTuple((float, ...)) -> int\nC++: vtkIdType InsertNextTuple(const double *tuple)\n\nInsert the jth tuple in the source array, at the end in this\narray. Note that memory allocation is performed as necessary to\nhold the data. Returns the location at which the data was\ninserted.\n"},
  {(char*)"GetTuple", PyvtkBitArray_GetTuple, 1,
   (char*)"V.GetTuple(int) -> (float, ...)\nC++: double *GetTuple(vtkIdType i)\nV.GetTuple(int, [float, ...])\nC++: void GetTuple(vtkIdType i, double *tuple)\n\nGet a pointer to a tuple at the ith location. This is a dangerous\nmethod (it is not thread safe since a pointer is returned).\n"},
  {(char*)"RemoveTuple", PyvtkBitArray_RemoveTuple, 1,
   (char*)"V.RemoveTuple(int)\nC++: virtual void RemoveTuple(vtkIdType id)\n\nThese methods remove tuples from the data array. They shift data\nand resize array, so the data array is still valid after this\noperation. Note, this operation is fairly slow.\n"},
  {(char*)"RemoveFirstTuple", PyvtkBitArray_RemoveFirstTuple, 1,
   (char*)"V.RemoveFirstTuple()\nC++: virtual void RemoveFirstTuple()\n\nThese methods remove tuples from the data array. They shift data\nand resize array, so the data array is still valid after this\noperation. Note, this operation is fairly slow.\n"},
  {(char*)"RemoveLastTuple", PyvtkBitArray_RemoveLastTuple, 1,
   (char*)"V.RemoveLastTuple()\nC++: virtual void RemoveLastTuple()\n\nThese methods remove tuples from the data array. They shift data\nand resize array, so the data array is still valid after this\noperation. Note, this operation is fairly slow.\n"},
  {(char*)"SetComponent", PyvtkBitArray_SetComponent, 1,
   (char*)"V.SetComponent(int, int, float)\nC++: void SetComponent(vtkIdType i, int j, double c)\n\nSet the data component at the ith tuple and jth component\nlocation. Note that i is less then NumberOfTuples and j is less\nthen NumberOfComponents. Make sure enough memory has been\nallocated (use SetNumberOfTuples() and  SetNumberOfComponents()).\n"},
  {(char*)"Squeeze", PyvtkBitArray_Squeeze, 1,
   (char*)"V.Squeeze()\nC++: void Squeeze()\n\nFree any unneeded memory.\n"},
  {(char*)"Resize", PyvtkBitArray_Resize, 1,
   (char*)"V.Resize(int) -> int\nC++: virtual int Resize(vtkIdType numTuples)\n\nResize the array while conserving the data.\n"},
  {(char*)"GetValue", PyvtkBitArray_GetValue, 1,
   (char*)"V.GetValue(int) -> int\nC++: int GetValue(vtkIdType id)\n\nGet the data at a particular index.\n"},
  {(char*)"SetNumberOfValues", PyvtkBitArray_SetNumberOfValues, 1,
   (char*)"V.SetNumberOfValues(int)\nC++: void SetNumberOfValues(vtkIdType number)\n\nFast method based setting of values without memory checks. First\nuse SetNumberOfValues then use SetValue to actually set them.\nSpecify the number of values for this object to hold. Does an\nallocation as well as setting the MaxId ivar. Used in conjunction\nwith SetValue() method for fast insertion.\n"},
  {(char*)"SetValue", PyvtkBitArray_SetValue, 1,
   (char*)"V.SetValue(int, int)\nC++: void SetValue(vtkIdType id, int value)\n\nSet the data at a particular index. Does not do range checking.\nMake sure you use the method SetNumberOfValues() before inserting\ndata.\n"},
  {(char*)"InsertValue", PyvtkBitArray_InsertValue, 1,
   (char*)"V.InsertValue(int, int)\nC++: void InsertValue(vtkIdType id, int i)\n\nInsets values and checks to make sure there is enough memory\n"},
  {(char*)"SetVariantValue", PyvtkBitArray_SetVariantValue, 1,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(vtkIdType idx, vtkVariant value)\n\nSet a value in the array from a variant.\n"},
  {(char*)"InsertNextValue", PyvtkBitArray_InsertNextValue, 1,
   (char*)"V.InsertNextValue(int) -> int\nC++: vtkIdType InsertNextValue(int i)\n\n"},
  {(char*)"InsertComponent", PyvtkBitArray_InsertComponent, 1,
   (char*)"V.InsertComponent(int, int, float)\nC++: virtual void InsertComponent(vtkIdType i, int j, double c)\n\nInsert the data component at ith tuple and jth component\nlocation. Note that memory allocation is performed as necessary\nto hold the data.\n"},
  {(char*)"WriteVoidPointer", PyvtkBitArray_WriteVoidPointer, 1,
   (char*)"V.WriteVoidPointer(int, int) ->\nC++: void *WriteVoidPointer(vtkIdType id, vtkIdType number)\n\nGet the address of a particular data index. Make sure data is\nallocated for the number of items requested. Set MaxId according\nto the number of data values requested.\n"},
  {(char*)"GetVoidPointer", PyvtkBitArray_GetVoidPointer, 1,
   (char*)"V.GetVoidPointer(int) ->\nC++: void *GetVoidPointer(vtkIdType id)\n\nGet the address of a particular data index. Make sure data is\nallocated for the number of items requested. Set MaxId according\nto the number of data values requested.\n"},
  {(char*)"DeepCopy", PyvtkBitArray_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkDataArray)\nC++: void DeepCopy(vtkDataArray *da)\nV.DeepCopy(vtkAbstractArray)\nC++: void DeepCopy(vtkAbstractArray *aa)\n\nDeep copy of another bit array.\n"},
  {(char*)"SetVoidArray", PyvtkBitArray_SetVoidArray, 1,
   (char*)"V.SetVoidArray(, int, int)\nC++: void SetVoidArray(void *array, vtkIdType size, int save)\n\nThis method lets the user specify data to be held by the array. \nThe array argument is a pointer to the data.  size is the size of\nthe array supplied by the user.  Set save to 1 to keep the class\nfrom deleting the array when it cleans up or reallocates memory.\nThe class uses the actual array provided; it does not copy the\ndata from the suppled array. If save 0, the array must have been\nallocated with new[] not malloc.\n"},
  {(char*)"NewIterator", PyvtkBitArray_NewIterator, 1,
   (char*)"V.NewIterator() -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator()\n\nReturns a new vtkBitArrayIterator instance.\n"},
  {(char*)"LookupValue", PyvtkBitArray_LookupValue, 1,
   (char*)"V.LookupValue(vtkVariant) -> int\nC++: virtual vtkIdType LookupValue(vtkVariant value)\nV.LookupValue(vtkVariant, vtkIdList)\nC++: virtual void LookupValue(vtkVariant value, vtkIdList *ids)\nV.LookupValue(int) -> int\nC++: vtkIdType LookupValue(int value)\nV.LookupValue(int, vtkIdList)\nC++: void LookupValue(int value, vtkIdList *ids)\n\nReturn the indices where a specific value appears.\n"},
  {(char*)"DataChanged", PyvtkBitArray_DataChanged, 1,
   (char*)"V.DataChanged()\nC++: virtual void DataChanged()\n\nTell the array explicitly that the data has changed. This is only\nnecessary to call when you modify the array contents without\nusing the array's API (i.e. you retrieve a pointer to the data\nand modify the array contents).  You need to call this so that\nthe fast lookup will know to rebuild itself.  Otherwise, the\nlookup functions will give incorrect results.\n"},
  {(char*)"ClearLookup", PyvtkBitArray_ClearLookup, 1,
   (char*)"V.ClearLookup()\nC++: virtual void ClearLookup()\n\nDelete the associated fast lookup data structure on this array,\nif it exists.  The lookup will be rebuilt on the next call to a\nlookup function.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBitArray_StaticNew()
{
  return vtkBitArray::New();
}

PyObject *PyVTKClass_vtkBitArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBitArray_StaticNew,
    PyvtkBitArray_Methods,
    "vtkBitArray", modulename,
    NULL, NULL,
    PyvtkBitArray_Doc(),
    PyVTKClass_vtkDataArrayNew(modulename));
  return cls;
}

const char **PyvtkBitArray_Doc()
{
  static const char *docstring[] = {
    "vtkBitArray - dynamic, self-adjusting array of bits\n\n",
    "Superclass: vtkDataArray\n\n",
    "vtkBitArray is an array of bits (0/1 data value). The array is packed\nso that each byte stores eight bits. vtkBitArray provides methods for\ninsertion and retrieval of bits, and will automatically resize itself\nto hold new data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBitArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBitArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBitArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

