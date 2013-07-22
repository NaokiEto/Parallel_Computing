// python wrapper for vtkArray
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
#include "vtkArrayRange.h"
#include "vtkArrayExtents.h"
#include "vtkStdString.h"
#include "vtkArrayCoordinates.h"
#include "vtkVariant.h"
#include "vtkArray.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkArray(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkArray(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkArray_Doc();


static PyObject *
PyvtkArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

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
      tempr = op->vtkArray::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

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
      tempr = op->vtkArray::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkArray::NewInstance();
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
PyvtkArray_CreateArray(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateArray");

  int temp0;
  int temp1;
  vtkArray *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    tempr = vtkArray::CreateArray(temp0, temp1);

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
PyvtkArray_IsDense(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDense");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->IsDense();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArray_Resize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Resize(temp0);
      }
    else
      {
      op->vtkArray::Resize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArray_Resize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Resize(temp0, temp1);
      }
    else
      {
      op->vtkArray::Resize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArray_Resize_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Resize(temp0, temp1, temp2);
      }
    else
      {
      op->vtkArray::Resize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArray_Resize_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkArrayRange *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange"))
    {
    if (ap.IsBound())
      {
      op->Resize(*temp0);
      }
    else
      {
      op->vtkArray::Resize(*temp0);
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
PyvtkArray_Resize_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkArrayRange *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkArrayRange *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayRange"))
    {
    if (ap.IsBound())
      {
      op->Resize(*temp0, *temp1);
      }
    else
      {
      op->vtkArray::Resize(*temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkArray_Resize_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkArrayRange *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkArrayRange *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayRange *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayRange") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayRange") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayRange"))
    {
    if (ap.IsBound())
      {
      op->Resize(*temp0, *temp1, *temp2);
      }
    else
      {
      op->vtkArray::Resize(*temp0, *temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkArray_Resize_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkArrayExtents *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayExtents"))
    {
    if (ap.IsBound())
      {
      op->Resize(*temp0);
      }
    else
      {
      op->vtkArray::Resize(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkArray_Resize_Methods[] = {
  {NULL, PyvtkArray_Resize_s1, 1,
   (char*)"@L"},
  {NULL, PyvtkArray_Resize_s2, 1,
   (char*)"@LL"},
  {NULL, PyvtkArray_Resize_s3, 1,
   (char*)"@LLL"},
  {NULL, PyvtkArray_Resize_s4, 1,
   (char*)"@O &vtkArrayRange"},
  {NULL, PyvtkArray_Resize_s5, 1,
   (char*)"@OO &vtkArrayRange &vtkArrayRange"},
  {NULL, PyvtkArray_Resize_s6, 1,
   (char*)"@OOO &vtkArrayRange &vtkArrayRange &vtkArrayRange"},
  {NULL, PyvtkArray_Resize_s7, 1,
   (char*)"@O &vtkArrayExtents"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkArray_Resize(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArray_Resize_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Resize");
  return NULL;
}



static PyObject *
PyvtkArray_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkIdType temp0;
  vtkArrayRange tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtent(temp0);
      }
    else
      {
      tempr = op->vtkArray::GetExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkArrayRange");
      }
    }

  return result;
}


static PyObject *
PyvtkArray_GetExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  const vtkArrayExtents *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = &op->GetExtents();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(tempr, "vtkArrayExtents");
      }
    }

  return result;
}


static PyObject *
PyvtkArray_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensions();
      }
    else
      {
      tempr = op->vtkArray::GetDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArray_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  unsigned long long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSize();
      }
    else
      {
      tempr = op->vtkArray::GetSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArray_GetNonNullSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonNullSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  unsigned long long tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetNonNullSize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArray_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkStdString temp0;
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
      op->vtkArray::SetName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArray_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetName();
      }
    else
      {
      tempr = op->vtkArray::GetName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArray_SetDimensionLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkIdType temp0;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDimensionLabel(temp0, temp1);
      }
    else
      {
      op->vtkArray::SetDimensionLabel(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArray_GetDimensionLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkIdType temp0;
  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensionLabel(temp0);
      }
    else
      {
      tempr = op->vtkArray::GetDimensionLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArray_GetCoordinatesN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinatesN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  unsigned long long temp0;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkArrayCoordinates"))
    {
    op->GetCoordinatesN(temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArray_GetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

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
      tempr = op->vtkArray::GetVariantValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkArray_GetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

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
      tempr = op->GetVariantValue(temp0, temp1);
      }
    else
      {
      tempr = op->vtkArray::GetVariantValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkArray_GetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkVariant tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVariantValue(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkArray::GetVariantValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyObject *
PyvtkArray_GetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkVariant tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
    {
    tempr = op->GetVariantValue(*temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkArray_GetVariantValue_Methods[] = {
  {NULL, PyvtkArray_GetVariantValue_s1, 1,
   (char*)"@L"},
  {NULL, PyvtkArray_GetVariantValue_s4, 1,
   (char*)"@O &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkArray_GetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArray_GetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkArray_GetVariantValue_s2(self, args);
    case 3:
      return PyvtkArray_GetVariantValue_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVariantValue");
  return NULL;
}



static PyObject *
PyvtkArray_GetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  unsigned long long temp0;
  vtkVariant tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = op->GetVariantValueN(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkArray_SetVariantValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

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
      op->vtkArray::SetVariantValue(temp0, *temp1);
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
PyvtkArray_SetVariantValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

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
      op->SetVariantValue(temp0, temp1, *temp2);
      }
    else
      {
      op->vtkArray::SetVariantValue(temp0, temp1, *temp2);
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
PyvtkArray_SetVariantValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkVariant *temp3 = NULL;
  PyObject *pobj3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetSpecialObject(temp3, pobj3, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetVariantValue(temp0, temp1, temp2, *temp3);
      }
    else
      {
      op->vtkArray::SetVariantValue(temp0, temp1, temp2, *temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj3);

  return result;
}

static PyObject *
PyvtkArray_SetVariantValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkArrayCoordinates *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    op->SetVariantValue(*temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkArray_SetVariantValue_Methods[] = {
  {NULL, PyvtkArray_SetVariantValue_s1, 1,
   (char*)"@LO &vtkVariant"},
  {NULL, PyvtkArray_SetVariantValue_s4, 1,
   (char*)"@OO &vtkArrayCoordinates &vtkVariant"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkArray_SetVariantValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArray_SetVariantValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkArray_SetVariantValue_s2(self, args);
    case 4:
      return PyvtkArray_SetVariantValue_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVariantValue");
  return NULL;
}



static PyObject *
PyvtkArray_SetVariantValueN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValueN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  unsigned long long temp0;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    op->SetVariantValueN(temp0, *temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkArray_CopyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    op->CopyValue(temp0, *temp1, *temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkArray_CopyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkArray *temp0 = NULL;
  unsigned long long temp1;
  vtkArrayCoordinates *temp2 = NULL;
  PyObject *pobj2 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkArrayCoordinates"))
    {
    op->CopyValue(temp0, temp1, *temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj2);

  return result;
}

static PyObject *
PyvtkArray_CopyValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkArray *temp0 = NULL;
  vtkArrayCoordinates *temp1 = NULL;
  PyObject *pobj1 = NULL;
  unsigned long long temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkArray") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkArrayCoordinates") &&
      ap.GetValue(temp2))
    {
    op->CopyValue(temp0, *temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkArray_CopyValue_Methods[] = {
  {NULL, PyvtkArray_CopyValue_s1, 1,
   (char*)"@OOO *vtkArray &vtkArrayCoordinates &vtkArrayCoordinates"},
  {NULL, PyvtkArray_CopyValue_s2, 1,
   (char*)"@OKO *vtkArray &vtkArrayCoordinates"},
  {NULL, PyvtkArray_CopyValue_s3, 1,
   (char*)"@OOK *vtkArray &vtkArrayCoordinates"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkArray_CopyValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArray_CopyValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyValue");
  return NULL;
}



static PyObject *
PyvtkArray_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArray *op = static_cast<vtkArray *>(vp);

  vtkArray *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->DeepCopy();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkArray_Methods[] = {
  {(char*)"GetClassName", PyvtkArray_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArray_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArray_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkArray\nC++: vtkArray *NewInstance()\n\n"},
  {(char*)"CreateArray", PyvtkArray_CreateArray, 1,
   (char*)"V.CreateArray(int, int) -> vtkArray\nC++: static vtkArray *CreateArray(int StorageType, int ValueType)\n\nCreates a new array where StorageType is one of vtkArray::DENSE\nor vtkArray::SPARSE, and ValueType is one of VTK_CHAR,\nVTK_UNSIGNED_CHAR, VTK_SHORT, VTK_UNSIGNED_SHORT,  VTK_INT,\nVTK_UNSIGNED_INT, VTK_LONG, VTK_UNSIGNED_LONG, VTK_DOUBLE,\nVTK_ID_TYPE, or VTK_STRING.  The caller is responsible for the\nlifetime of the returned object.\n"},
  {(char*)"IsDense", PyvtkArray_IsDense, 1,
   (char*)"V.IsDense() -> bool\nC++: virtual bool IsDense()\n\nReturns true iff the underlying array storage is \"dense\", i.e.\nthat GetSize() and GetNonNullSize() will always return the same\nvalue. If not, the array is \"sparse\".\n"},
  {(char*)"Resize", PyvtkArray_Resize, 1,
   (char*)"V.Resize(int)\nC++: void Resize(const CoordinateT i)\nV.Resize(int, int)\nC++: void Resize(const CoordinateT i, const CoordinateT j)\nV.Resize(int, int, int)\nC++: void Resize(const CoordinateT i, const CoordinateT j,\n    const CoordinateT k)\nV.Resize(vtkArrayRange)\nC++: void Resize(const vtkArrayRange &i)\nV.Resize(vtkArrayRange, vtkArrayRange)\nC++: void Resize(const vtkArrayRange &i, const vtkArrayRange &j)\nV.Resize(vtkArrayRange, vtkArrayRange, vtkArrayRange)\nC++: void Resize(const vtkArrayRange &i, const vtkArrayRange &j,\n    const vtkArrayRange &k)\nV.Resize(vtkArrayExtents)\nC++: void Resize(const vtkArrayExtents &extents)\n\nResizes the array to the given extents (number of dimensions and\nsize of each dimension).  Note that concrete implementations of\nvtkArray may place constraints on the the extents that they will\nstore, so you cannot assume that GetExtents() will always return\nthe same value passed to Resize().\n\nThe contents of the array are undefined after calling Resize() -\nyou should initialize its contents accordingly.  In particular,\ndimension-labels will be undefined, dense array values will be\nundefined, and sparse arrays will be empty.\n"},
  {(char*)"GetExtent", PyvtkArray_GetExtent, 1,
   (char*)"V.GetExtent(int) -> vtkArrayRange\nC++: const vtkArrayRange GetExtent(DimensionT dimension)\n\nReturns the extent (valid coordinate range) along the given\ndimension.\n"},
  {(char*)"GetExtents", PyvtkArray_GetExtents, 1,
   (char*)"V.GetExtents() -> vtkArrayExtents\nC++: virtual const vtkArrayExtents &GetExtents()\n\nReturns the extents (the number of dimensions and size along each\ndimension) of the array.\n"},
  {(char*)"GetDimensions", PyvtkArray_GetDimensions, 1,
   (char*)"V.GetDimensions() -> int\nC++: DimensionT GetDimensions()\n\nReturns the number of dimensions stored in the array.  Note that\nthis is the same as calling GetExtents().GetDimensions().\n"},
  {(char*)"GetSize", PyvtkArray_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: SizeT GetSize()\n\nReturns the number of values stored in the array.  Note that this\nis the same as calling GetExtents().GetSize(), and represents the\nmaximum number of values that could ever be stored using the\ncurrent extents.  This is equal to the number of values stored in\na  dense array, but may be larger than the number of values\nstored in a sparse array.\n"},
  {(char*)"GetNonNullSize", PyvtkArray_GetNonNullSize, 1,
   (char*)"V.GetNonNullSize() -> int\nC++: virtual SizeT GetNonNullSize()\n\nReturns the number of non-null values stored in the array.  Note\nthat this value will equal GetSize() for dense arrays, and will\nbe less-than-or-equal to GetSize() for sparse arrays.\n"},
  {(char*)"SetName", PyvtkArray_SetName, 1,
   (char*)"V.SetName(string)\nC++: void SetName(const vtkStdString &name)\n\nSets the array name.\n"},
  {(char*)"GetName", PyvtkArray_GetName, 1,
   (char*)"V.GetName() -> string\nC++: vtkStdString GetName()\n\nReturns the array name.\n"},
  {(char*)"SetDimensionLabel", PyvtkArray_SetDimensionLabel, 1,
   (char*)"V.SetDimensionLabel(int, string)\nC++: void SetDimensionLabel(DimensionT i,\n    const vtkStdString &label)\n\nSets the label for the i-th array dimension.\n"},
  {(char*)"GetDimensionLabel", PyvtkArray_GetDimensionLabel, 1,
   (char*)"V.GetDimensionLabel(int) -> string\nC++: vtkStdString GetDimensionLabel(DimensionT i)\n\nReturns the label for the i-th array dimension.\n"},
  {(char*)"GetCoordinatesN", PyvtkArray_GetCoordinatesN, 1,
   (char*)"V.GetCoordinatesN(int, vtkArrayCoordinates)\nC++: virtual void GetCoordinatesN(const SizeT n,\n    vtkArrayCoordinates &coordinates)\n\nReturns the coordinates of the n-th value in the array, where n\nis in the range [0, GetNonNullSize()).  Note that the order in\nwhich coordinates are visited is undefined, but is guaranteed to\nmatch the order in which values are visited using\nvtkTypedArray::GetValueN() and vtkTypedArray::SetValueN().\n"},
  {(char*)"GetVariantValue", PyvtkArray_GetVariantValue, 1,
   (char*)"V.GetVariantValue(int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i)\nV.GetVariantValue(int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j)\nV.GetVariantValue(int, int, int) -> vtkVariant\nC++: vtkVariant GetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k)\nV.GetVariantValue(vtkArrayCoordinates) -> vtkVariant\nC++: virtual vtkVariant GetVariantValue(\n    const vtkArrayCoordinates &coordinates)\n\nReturns the value stored in the array at the given coordinates.\nNote that the number of dimensions in the supplied coordinates\nmust match the number of dimensions in the array.\n"},
  {(char*)"GetVariantValueN", PyvtkArray_GetVariantValueN, 1,
   (char*)"V.GetVariantValueN(int) -> vtkVariant\nC++: virtual vtkVariant GetVariantValueN(const SizeT n)\n\nReturns the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"SetVariantValue", PyvtkArray_SetVariantValue, 1,
   (char*)"V.SetVariantValue(int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, const vtkVariant &value)\nV.SetVariantValue(int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    const vtkVariant &value)\nV.SetVariantValue(int, int, int, vtkVariant)\nC++: void SetVariantValue(CoordinateT i, CoordinateT j,\n    CoordinateT k, const vtkVariant &value)\nV.SetVariantValue(vtkArrayCoordinates, vtkVariant)\nC++: virtual void SetVariantValue(\n    const vtkArrayCoordinates &coordinates,\n    const vtkVariant &value)\n\nOverwrites the value stored in the array at the given\ncoordinates. Note that the number of dimensions in the supplied\ncoordinates must match the number of dimensions in the array.\n"},
  {(char*)"SetVariantValueN", PyvtkArray_SetVariantValueN, 1,
   (char*)"V.SetVariantValueN(int, vtkVariant)\nC++: virtual void SetVariantValueN(const SizeT n,\n    const vtkVariant &value)\n\nOverwrites the n-th value stored in the array, where n is in the\nrange [0, GetNonNullSize()).  This is useful for efficiently\nvisiting every value in the array.  Note that the order in which\nvalues are visited is undefined, but is guaranteed to match the\norder used by vtkArray::GetCoordinatesN().\n"},
  {(char*)"CopyValue", PyvtkArray_CopyValue, 1,
   (char*)"V.CopyValue(vtkArray, vtkArrayCoordinates, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, int, vtkArrayCoordinates)\nC++: virtual void CopyValue(vtkArray *source,\n    const SizeT source_index,\n    const vtkArrayCoordinates &target_coordinates)\nV.CopyValue(vtkArray, vtkArrayCoordinates, int)\nC++: virtual void CopyValue(vtkArray *source,\n    const vtkArrayCoordinates &source_coordinates,\n    const SizeT target_index)\n\nOverwrites a value with a value retrieved from another array. \nBoth arrays must store the same data types.\n"},
  {(char*)"DeepCopy", PyvtkArray_DeepCopy, 1,
   (char*)"V.DeepCopy() -> vtkArray\nC++: virtual vtkArray *DeepCopy()\n\nReturns a new array that is a deep copy of this array.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkArray_Methods,
    "vtkArray", modulename,
    NULL, NULL,
    PyvtkArray_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"DENSE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"SPARSE", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkArray_Doc()
{
  static const char *docstring[] = {
    "vtkArray - Abstract interface for N-dimensional arrays.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkArray is the root of a hierarchy of arrays that can be used to\nstore data with any number of dimensions.  It provides an abstract\ninterface for retrieving and setting array attributes that are\nindependent of the type of values stored in the array - such as the\nnumber of dimensions, extents along each dimension, and number of\nvalues stored in the array.\n\nTo get and set array values, the vtkTyped",
    "Array template class derives\nfrom vtkArray and provides type-specific methods for retrieval and\nupdate.\n\nTwo concrete derivatives of vtkTypedArray are provided at the moment:\nvtkDenseArray and vtkSparseArray, which provide dense and sparse\nstorage for arbitrary-dimension data, respectively.  Toolkit users\ncan create their own concrete derivatives that implement alternative\nstorage strategies, such",
    " as compressed-sparse-row, etc.  You could\nalso create an array that provided read-only access to 'virtual'\ndata, such as an array that returned a Fibonacci sequence, etc.\n\nSee Also:\n\nvtkTypedArray, vtkDenseArray, vtkSparseArray\n\nThanks:\n\nDeveloped by Timothy M. Shead (tshead@sandia.gov) at  Sandia National\nLaboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

