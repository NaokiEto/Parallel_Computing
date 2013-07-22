// python wrapper for vtkPoints2D
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
#include "vtkPoints2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPoints2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPoints2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPoints2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPoints2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPoints2D_Doc();


static PyObject *
PyvtkPoints2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

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
      tempr = op->vtkPoints2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

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
      tempr = op->vtkPoints2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkPoints2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPoints2D::NewInstance();
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
PyvtkPoints2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPoints2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPoints2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

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
      tempr = op->vtkPoints2D::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkPoints2D::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_SetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetData(temp0);
      }
    else
      {
      op->vtkPoints2D::SetData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetData();
      }
    else
      {
      tempr = op->vtkPoints2D::GetData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

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
      tempr = op->vtkPoints2D::GetDataType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDataType(temp0);
      }
    else
      {
      op->vtkPoints2D::SetDataType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToBit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToBit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToBit();
      }
    else
      {
      op->vtkPoints2D::SetDataTypeToBit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToChar();
      }
    else
      {
      op->vtkPoints2D::SetDataTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToUnsignedChar();
      }
    else
      {
      op->vtkPoints2D::SetDataTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToShort();
      }
    else
      {
      op->vtkPoints2D::SetDataTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToUnsignedShort();
      }
    else
      {
      op->vtkPoints2D::SetDataTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToInt();
      }
    else
      {
      op->vtkPoints2D::SetDataTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToUnsignedInt();
      }
    else
      {
      op->vtkPoints2D::SetDataTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToLong();
      }
    else
      {
      op->vtkPoints2D::SetDataTypeToLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToUnsignedLong();
      }
    else
      {
      op->vtkPoints2D::SetDataTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToFloat();
      }
    else
      {
      op->vtkPoints2D::SetDataTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDataTypeToDouble();
      }
    else
      {
      op->vtkPoints2D::SetDataTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  int temp0;
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
      tempr = op->vtkPoints2D::GetVoidPointer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkPoints2D::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkPoints2D::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkPoints2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkPoints2D::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkPoints2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkPoints2D::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

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
      tempr = op->vtkPoints2D::GetActualMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPoints();
      }
    else
      {
      tempr = op->vtkPoints2D::GetNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdType temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetPoint(temp0, temp1);
      }
    else
      {
      op->vtkPoints2D::GetPoint(temp0, temp1);
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

  return result;
}


static PyObject *
PyvtkPoints2D_SetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdType temp0;
  double temp1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetPoint(temp0, temp1);
      }
    else
      {
      op->vtkPoints2D::SetPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPoints2D_SetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPoints2D::SetPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPoints2D_SetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPoints2D_SetPoint_s1(self, args);
    case 3:
      return PyvtkPoints2D_SetPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint");
  return NULL;
}



static PyObject *
PyvtkPoints2D_InsertPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdType temp0;
  double temp1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->InsertPoint(temp0, temp1);
      }
    else
      {
      op->vtkPoints2D::InsertPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPoints2D_InsertPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->InsertPoint(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPoints2D::InsertPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPoints2D_InsertPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPoints2D_InsertPoint_s1(self, args);
    case 3:
      return PyvtkPoints2D_InsertPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertPoint");
  return NULL;
}



static PyObject *
PyvtkPoints2D_InsertNextPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  double temp0[2];
  const int size0 = 2;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertNextPoint(temp0);
      }
    else
      {
      tempr = op->vtkPoints2D::InsertNextPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPoints2D_InsertNextPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  double temp0;
  double temp1;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertNextPoint(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPoints2D::InsertNextPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPoints2D_InsertNextPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPoints2D_InsertNextPoint_s1(self, args);
    case 2:
      return PyvtkPoints2D_InsertNextPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextPoint");
  return NULL;
}



static PyObject *
PyvtkPoints2D_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPoints(temp0);
      }
    else
      {
      op->vtkPoints2D::SetNumberOfPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdList *temp0 = NULL;
  vtkPoints2D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkPoints2D"))
    {
    if (ap.IsBound())
      {
      op->GetPoints(temp0, temp1);
      }
    else
      {
      op->vtkPoints2D::GetPoints(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeBounds();
      }
    else
      {
      op->vtkPoints2D::ComputeBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPoints2D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkPoints2D::GetBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPoints2D_Methods[] = {
  {(char*)"GetClassName", PyvtkPoints2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPoints2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPoints2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPoints2D\nC++: vtkPoints2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPoints2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPoints2D\nC++: vtkPoints2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Allocate", PyvtkPoints2D_Allocate, 1,
   (char*)"V.Allocate(int, int) -> int\nC++: virtual int Allocate(const vtkIdType sz,\n    const vtkIdType ext=1000)\n\nAllocate initial memory size.\n"},
  {(char*)"Initialize", PyvtkPoints2D_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nReturn object to instantiated state.\n"},
  {(char*)"SetData", PyvtkPoints2D_SetData, 1,
   (char*)"V.SetData(vtkDataArray)\nC++: virtual void SetData(vtkDataArray *)\n\nSet/Get the underlying data array. This function must be\nimplemented in a concrete subclass to check for consistency. (The\ntuple size must match the type of data. For example, 3-tuple data\narray can be assigned to a vector, normal, or points object, but\nnot a tensor object, which has a tuple dimension of 9. Scalars,\non the other hand, can have tuple dimension\n from 1-4, depending on the type of scalar.)\n"},
  {(char*)"GetData", PyvtkPoints2D_GetData, 1,
   (char*)"V.GetData() -> vtkDataArray\nC++: vtkDataArray *GetData()\n\nSet/Get the underlying data array. This function must be\nimplemented in a concrete subclass to check for consistency. (The\ntuple size must match the type of data. For example, 3-tuple data\narray can be assigned to a vector, normal, or points object, but\nnot a tensor object, which has a tuple dimension of 9. Scalars,\non the other hand, can have tuple dimension\n from 1-4, depending on the type of scalar.)\n"},
  {(char*)"GetDataType", PyvtkPoints2D_GetDataType, 1,
   (char*)"V.GetDataType() -> int\nC++: virtual int GetDataType()\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkSetGet.h.\n"},
  {(char*)"SetDataType", PyvtkPoints2D_SetDataType, 1,
   (char*)"V.SetDataType(int)\nC++: virtual void SetDataType(int dataType)\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToBit", PyvtkPoints2D_SetDataTypeToBit, 1,
   (char*)"V.SetDataTypeToBit()\nC++: void SetDataTypeToBit()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToChar", PyvtkPoints2D_SetDataTypeToChar, 1,
   (char*)"V.SetDataTypeToChar()\nC++: void SetDataTypeToChar()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToUnsignedChar", PyvtkPoints2D_SetDataTypeToUnsignedChar, 1,
   (char*)"V.SetDataTypeToUnsignedChar()\nC++: void SetDataTypeToUnsignedChar()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToShort", PyvtkPoints2D_SetDataTypeToShort, 1,
   (char*)"V.SetDataTypeToShort()\nC++: void SetDataTypeToShort()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToUnsignedShort", PyvtkPoints2D_SetDataTypeToUnsignedShort, 1,
   (char*)"V.SetDataTypeToUnsignedShort()\nC++: void SetDataTypeToUnsignedShort()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToInt", PyvtkPoints2D_SetDataTypeToInt, 1,
   (char*)"V.SetDataTypeToInt()\nC++: void SetDataTypeToInt()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToUnsignedInt", PyvtkPoints2D_SetDataTypeToUnsignedInt, 1,
   (char*)"V.SetDataTypeToUnsignedInt()\nC++: void SetDataTypeToUnsignedInt()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToLong", PyvtkPoints2D_SetDataTypeToLong, 1,
   (char*)"V.SetDataTypeToLong()\nC++: void SetDataTypeToLong()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToUnsignedLong", PyvtkPoints2D_SetDataTypeToUnsignedLong, 1,
   (char*)"V.SetDataTypeToUnsignedLong()\nC++: void SetDataTypeToUnsignedLong()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToFloat", PyvtkPoints2D_SetDataTypeToFloat, 1,
   (char*)"V.SetDataTypeToFloat()\nC++: void SetDataTypeToFloat()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"SetDataTypeToDouble", PyvtkPoints2D_SetDataTypeToDouble, 1,
   (char*)"V.SetDataTypeToDouble()\nC++: void SetDataTypeToDouble()\n\nSpecify the underlying data type of the object.\n"},
  {(char*)"GetVoidPointer", PyvtkPoints2D_GetVoidPointer, 1,
   (char*)"V.GetVoidPointer(int) ->\nC++: void *GetVoidPointer(const int id)\n\nReturn a void pointer. For image pipeline interface and other\nspecial pointer manipulation.\n"},
  {(char*)"Squeeze", PyvtkPoints2D_Squeeze, 1,
   (char*)"V.Squeeze()\nC++: virtual void Squeeze()\n\nReclaim any extra memory.\n"},
  {(char*)"Reset", PyvtkPoints2D_Reset, 1,
   (char*)"V.Reset()\nC++: virtual void Reset()\n\nMake object look empty but do not delete memory.\n"},
  {(char*)"DeepCopy", PyvtkPoints2D_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkPoints2D)\nC++: virtual void DeepCopy(vtkPoints2D *ad)\n\nDifferent ways to copy data. Shallow copy does reference count\n(i.e., assigns pointers and updates reference count); deep copy\nruns through entire data array assigning values.\n"},
  {(char*)"ShallowCopy", PyvtkPoints2D_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkPoints2D)\nC++: virtual void ShallowCopy(vtkPoints2D *ad)\n\nDifferent ways to copy data. Shallow copy does reference count\n(i.e., assigns pointers and updates reference count); deep copy\nruns through entire data array assigning values.\n"},
  {(char*)"GetActualMemorySize", PyvtkPoints2D_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the memory in kilobytes consumed by this attribute data.\nUsed to support streaming and reading/writing data. The value\nreturned is guaranteed to be greater than or equal to the memory\nrequired to actually represent the data represented by this\nobject. The information returned is valid only after the pipeline\nhas been updated.\n"},
  {(char*)"GetNumberOfPoints", PyvtkPoints2D_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nReturn number of points in array.\n"},
  {(char*)"GetPoint", PyvtkPoints2D_GetPoint, 1,
   (char*)"V.GetPoint(int, [float, float])\nC++: void GetPoint(vtkIdType id, double x[2])\n\nCopy point components into user provided array v[2] for specified\nid.\n"},
  {(char*)"SetPoint", PyvtkPoints2D_SetPoint, 1,
   (char*)"V.SetPoint(int, (float, float))\nC++: void SetPoint(vtkIdType id, const double x[2])\nV.SetPoint(int, float, float)\nC++: void SetPoint(vtkIdType id, double x, double y)\n\nInsert point into object. No range checking performed (fast!).\nMake sure you use SetNumberOfPoints() to allocate memory prior to\nusing SetPoint().\n"},
  {(char*)"InsertPoint", PyvtkPoints2D_InsertPoint, 1,
   (char*)"V.InsertPoint(int, (float, float))\nC++: void InsertPoint(vtkIdType id, const double x[2])\nV.InsertPoint(int, float, float)\nC++: void InsertPoint(vtkIdType id, double x, double y)\n\nInsert point into object. Range checking performed and memory\nallocated as necessary.\n"},
  {(char*)"InsertNextPoint", PyvtkPoints2D_InsertNextPoint, 1,
   (char*)"V.InsertNextPoint((float, float)) -> int\nC++: vtkIdType InsertNextPoint(const double x[2])\nV.InsertNextPoint(float, float) -> int\nC++: vtkIdType InsertNextPoint(double x, double y)\n\nInsert point into next available slot. Returns id of slot.\n"},
  {(char*)"SetNumberOfPoints", PyvtkPoints2D_SetNumberOfPoints, 1,
   (char*)"V.SetNumberOfPoints(int)\nC++: void SetNumberOfPoints(vtkIdType number)\n\nSpecify the number of points for this object to hold. Does an\nallocation as well as setting the MaxId ivar. Used in conjunction\nwith SetPoint() method for fast insertion.\n"},
  {(char*)"GetPoints", PyvtkPoints2D_GetPoints, 1,
   (char*)"V.GetPoints(vtkIdList, vtkPoints2D)\nC++: void GetPoints(vtkIdList *ptId, vtkPoints2D *fp)\n\nGiven a list of pt ids, return an array of points.\n"},
  {(char*)"ComputeBounds", PyvtkPoints2D_ComputeBounds, 1,
   (char*)"V.ComputeBounds()\nC++: virtual void ComputeBounds()\n\nDetermine (xmin,xmax, ymin,ymax) bounds of points.\n"},
  {(char*)"GetBounds", PyvtkPoints2D_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float])\nC++: void GetBounds(double bounds[4])\n\nReturn the bounds of the points.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPoints2D_StaticNew()
{
  return vtkPoints2D::New();
}

PyObject *PyVTKClass_vtkPoints2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPoints2D_StaticNew,
    PyvtkPoints2D_Methods,
    "vtkPoints2D", modulename,
    NULL, NULL,
    PyvtkPoints2D_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPoints2D_Doc()
{
  static const char *docstring[] = {
    "vtkPoints2D - represent and manipulate 2D points\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPoints2D represents 2D points. The data model for vtkPoints2D is\nan array of vx-vy doublets accessible by (point or cell) id.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPoints2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPoints2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPoints2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

