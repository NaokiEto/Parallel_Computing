// python wrapper for vtkMINCImageAttributes
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
#include "vtkMINCImageAttributes.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMINCImageAttributes(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMINCImageAttributes(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMINCImageAttributesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMINCImageAttributesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMINCImageAttributes_Doc();


static PyObject *
PyvtkMINCImageAttributes_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

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
      tempr = op->vtkMINCImageAttributes::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

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
      tempr = op->vtkMINCImageAttributes::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  vtkMINCImageAttributes *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMINCImageAttributes::NewInstance();
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
PyvtkMINCImageAttributes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMINCImageAttributes *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMINCImageAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkMINCImageAttributes::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

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
      op->vtkMINCImageAttributes::SetName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

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
      tempr = op->vtkMINCImageAttributes::GetName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

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
      op->vtkMINCImageAttributes::SetDataType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

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
      tempr = op->vtkMINCImageAttributes::GetDataType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_AddDimension_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddDimension(temp0);
      }
    else
      {
      op->vtkMINCImageAttributes::AddDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMINCImageAttributes_AddDimension_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  char *temp0 = NULL;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddDimension(temp0, temp1);
      }
    else
      {
      op->vtkMINCImageAttributes::AddDimension(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMINCImageAttributes_AddDimension(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkMINCImageAttributes_AddDimension_s1(self, args);
    case 2:
      return PyvtkMINCImageAttributes_AddDimension_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddDimension");
  return NULL;
}



static PyObject *
PyvtkMINCImageAttributes_GetDimensionNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensionNames();
      }
    else
      {
      tempr = op->vtkMINCImageAttributes::GetDimensionNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetDimensionLengths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionLengths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  vtkIdTypeArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensionLengths();
      }
    else
      {
      tempr = op->vtkMINCImageAttributes::GetDimensionLengths();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVariableNames();
      }
    else
      {
      tempr = op->vtkMINCImageAttributes::GetVariableNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetAttributeNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  char *temp0 = NULL;
  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributeNames(temp0);
      }
    else
      {
      tempr = op->vtkMINCImageAttributes::GetAttributeNames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetImageMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  vtkDoubleArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
    {
    if (ap.IsBound())
      {
      op->SetImageMin(temp0);
      }
    else
      {
      op->vtkMINCImageAttributes::SetImageMin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetImageMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  vtkDoubleArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
    {
    if (ap.IsBound())
      {
      op->SetImageMax(temp0);
      }
    else
      {
      op->vtkMINCImageAttributes::SetImageMax(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetImageMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  vtkDoubleArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageMin();
      }
    else
      {
      tempr = op->vtkMINCImageAttributes::GetImageMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetImageMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  vtkDoubleArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageMax();
      }
    else
      {
      tempr = op->vtkMINCImageAttributes::GetImageMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetNumberOfImageMinMaxDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfImageMinMaxDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfImageMinMaxDimensions();
      }
    else
      {
      tempr = op->vtkMINCImageAttributes::GetNumberOfImageMinMaxDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetNumberOfImageMinMaxDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfImageMinMaxDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfImageMinMaxDimensions(temp0);
      }
    else
      {
      op->vtkMINCImageAttributes::SetNumberOfImageMinMaxDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_HasAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

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
      tempr = op->HasAttribute(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMINCImageAttributes::HasAttribute(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetAttributeValueAsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeValueAsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetAttributeValueAsArray(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMINCImageAttributes::SetAttributeValueAsArray(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetAttributeValueAsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValueAsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributeValueAsArray(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMINCImageAttributes::GetAttributeValueAsArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetAttributeValueAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeValueAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetAttributeValueAsString(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMINCImageAttributes::SetAttributeValueAsString(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetAttributeValueAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValueAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributeValueAsString(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMINCImageAttributes::GetAttributeValueAsString(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetAttributeValueAsInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeValueAsInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetAttributeValueAsInt(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMINCImageAttributes::SetAttributeValueAsInt(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetAttributeValueAsInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValueAsInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

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
      tempr = op->GetAttributeValueAsInt(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMINCImageAttributes::GetAttributeValueAsInt(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetAttributeValueAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeValueAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetAttributeValueAsDouble(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMINCImageAttributes::SetAttributeValueAsDouble(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetAttributeValueAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValueAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributeValueAsDouble(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMINCImageAttributes::GetAttributeValueAsDouble(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_ValidateAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->ValidateAttribute(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkMINCImageAttributes::ValidateAttribute(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetValidateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValidateAttributes(temp0);
      }
    else
      {
      op->vtkMINCImageAttributes::SetValidateAttributes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_ValidateAttributesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateAttributesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ValidateAttributesOn();
      }
    else
      {
      op->vtkMINCImageAttributes::ValidateAttributesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_ValidateAttributesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateAttributesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ValidateAttributesOff();
      }
    else
      {
      op->vtkMINCImageAttributes::ValidateAttributesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetValidateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValidateAttributes();
      }
    else
      {
      tempr = op->vtkMINCImageAttributes::GetValidateAttributes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  vtkMINCImageAttributes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMINCImageAttributes"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkMINCImageAttributes::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_FindValidRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindValidRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->FindValidRange(temp0);
      }
    else
      {
      op->vtkMINCImageAttributes::FindValidRange(temp0);
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


static PyObject *
PyvtkMINCImageAttributes_FindImageRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindImageRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->FindImageRange(temp0);
      }
    else
      {
      op->vtkMINCImageAttributes::FindImageRange(temp0);
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


static PyObject *
PyvtkMINCImageAttributes_PrintFileHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintFileHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrintFileHeader();
      }
    else
      {
      op->vtkMINCImageAttributes::PrintFileHeader();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMINCImageAttributes_Methods[] = {
  {(char*)"GetClassName", PyvtkMINCImageAttributes_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMINCImageAttributes_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMINCImageAttributes_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMINCImageAttributes\nC++: vtkMINCImageAttributes *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMINCImageAttributes_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMINCImageAttributes\nC++: vtkMINCImageAttributes *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Reset", PyvtkMINCImageAttributes_Reset, 1,
   (char*)"V.Reset()\nC++: virtual void Reset()\n\nReset all the attributes in preparation for loading new\ninformation.\n"},
  {(char*)"SetName", PyvtkMINCImageAttributes_SetName, 1,
   (char*)"V.SetName(string)\nC++: void SetName(char *)\n\nGet the name of the image, not including the path or the\nextension.  This is only needed for printing the header and there\nis usually no need to set it.\n"},
  {(char*)"GetName", PyvtkMINCImageAttributes_GetName, 1,
   (char*)"V.GetName() -> string\nC++: char *GetName()\n\nGet the name of the image, not including the path or the\nextension.  This is only needed for printing the header and there\nis usually no need to set it.\n"},
  {(char*)"SetDataType", PyvtkMINCImageAttributes_SetDataType, 1,
   (char*)"V.SetDataType(int)\nC++: void SetDataType(int a)\n\nGet the image data type, as stored on disk.  This information is\nuseful if the file was converted to floating-point when it was\nloaded.  When writing a file from float or double image data, you\ncan use this method to prescribe the output type.\n"},
  {(char*)"GetDataType", PyvtkMINCImageAttributes_GetDataType, 1,
   (char*)"V.GetDataType() -> int\nC++: int GetDataType()\n\nGet the image data type, as stored on disk.  This information is\nuseful if the file was converted to floating-point when it was\nloaded.  When writing a file from float or double image data, you\ncan use this method to prescribe the output type.\n"},
  {(char*)"AddDimension", PyvtkMINCImageAttributes_AddDimension, 1,
   (char*)"V.AddDimension(string)\nC++: virtual void AddDimension(const char *dimension)\nV.AddDimension(string, int)\nC++: virtual void AddDimension(const char *dimension,\n    vtkIdType length)\n\nAdd the names of up to five dimensions. The ordering of these\ndimensions will determine the dimension order of the file.  If no\nDimensionNames are set, the writer will set the dimension order\nof the file to be the same as the dimension order in memory.\n"},
  {(char*)"GetDimensionNames", PyvtkMINCImageAttributes_GetDimensionNames, 1,
   (char*)"V.GetDimensionNames() -> vtkStringArray\nC++: virtual vtkStringArray *GetDimensionNames()\n\nGet the dimension names.  The dimension names are same order as\nwritten in the file, starting with the slowest-varying dimension.\n Use this method to get the array if you need to change \"space\"\ndimensions to \"frequency\" after performing a Fourier transform.\n"},
  {(char*)"GetDimensionLengths", PyvtkMINCImageAttributes_GetDimensionLengths, 1,
   (char*)"V.GetDimensionLengths() -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetDimensionLengths()\n\nGet the lengths of all the dimensions.  The dimension lengths are\ninformative, the vtkMINCImageWriter does not look at these values\nbut instead uses the dimension sizes of its input.\n"},
  {(char*)"GetVariableNames", PyvtkMINCImageAttributes_GetVariableNames, 1,
   (char*)"V.GetVariableNames() -> vtkStringArray\nC++: virtual vtkStringArray *GetVariableNames()\n\nGet the names of all the variables.\n"},
  {(char*)"GetAttributeNames", PyvtkMINCImageAttributes_GetAttributeNames, 1,
   (char*)"V.GetAttributeNames(string) -> vtkStringArray\nC++: virtual vtkStringArray *GetAttributeNames(\n    const char *variable)\n\nList the attribute names for a variable.  Set the variable to the\nempty string to get a list of the global attributes.\n"},
  {(char*)"SetImageMin", PyvtkMINCImageAttributes_SetImageMin, 1,
   (char*)"V.SetImageMin(vtkDoubleArray)\nC++: virtual void SetImageMin(vtkDoubleArray *imageMin)\n\nGet the image min and max arrays. These are set by the reader,\nbut they aren't used by the writer except to compute the full\nreal data range of the original file.\n"},
  {(char*)"SetImageMax", PyvtkMINCImageAttributes_SetImageMax, 1,
   (char*)"V.SetImageMax(vtkDoubleArray)\nC++: virtual void SetImageMax(vtkDoubleArray *imageMax)\n\nGet the image min and max arrays. These are set by the reader,\nbut they aren't used by the writer except to compute the full\nreal data range of the original file.\n"},
  {(char*)"GetImageMin", PyvtkMINCImageAttributes_GetImageMin, 1,
   (char*)"V.GetImageMin() -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetImageMin()\n\nGet the image min and max arrays. These are set by the reader,\nbut they aren't used by the writer except to compute the full\nreal data range of the original file.\n"},
  {(char*)"GetImageMax", PyvtkMINCImageAttributes_GetImageMax, 1,
   (char*)"V.GetImageMax() -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetImageMax()\n\nGet the image min and max arrays. These are set by the reader,\nbut they aren't used by the writer except to compute the full\nreal data range of the original file.\n"},
  {(char*)"GetNumberOfImageMinMaxDimensions", PyvtkMINCImageAttributes_GetNumberOfImageMinMaxDimensions, 1,
   (char*)"V.GetNumberOfImageMinMaxDimensions() -> int\nC++: int GetNumberOfImageMinMaxDimensions()\n\nGet the number of ImageMinMax dimensions.\n"},
  {(char*)"SetNumberOfImageMinMaxDimensions", PyvtkMINCImageAttributes_SetNumberOfImageMinMaxDimensions, 1,
   (char*)"V.SetNumberOfImageMinMaxDimensions(int)\nC++: void SetNumberOfImageMinMaxDimensions(int a)\n\nGet the number of ImageMinMax dimensions.\n"},
  {(char*)"HasAttribute", PyvtkMINCImageAttributes_HasAttribute, 1,
   (char*)"V.HasAttribute(string, string) -> int\nC++: virtual int HasAttribute(const char *variable,\n    const char *attribute)\n\nCheck to see if a particular attribute exists.\n"},
  {(char*)"SetAttributeValueAsArray", PyvtkMINCImageAttributes_SetAttributeValueAsArray, 1,
   (char*)"V.SetAttributeValueAsArray(string, string, vtkDataArray)\nC++: virtual void SetAttributeValueAsArray(const char *variable,\n    const char *attribute, vtkDataArray *array)\n\nSet attribute values for a variable as a vtkDataArray. Set the\nvariable to the empty string to access global attributes.\n"},
  {(char*)"GetAttributeValueAsArray", PyvtkMINCImageAttributes_GetAttributeValueAsArray, 1,
   (char*)"V.GetAttributeValueAsArray(string, string) -> vtkDataArray\nC++: virtual vtkDataArray *GetAttributeValueAsArray(\n    const char *variable, const char *attribute)\n\nSet attribute values for a variable as a vtkDataArray. Set the\nvariable to the empty string to access global attributes.\n"},
  {(char*)"SetAttributeValueAsString", PyvtkMINCImageAttributes_SetAttributeValueAsString, 1,
   (char*)"V.SetAttributeValueAsString(string, string, string)\nC++: virtual void SetAttributeValueAsString(const char *variable,\n    const char *attribute, const char *value)\n\nSet an attribute value as a string.  Set the variable to the\nempty string to access global attributes. If you specify a\nvariable that does not exist, it will be created.\n"},
  {(char*)"GetAttributeValueAsString", PyvtkMINCImageAttributes_GetAttributeValueAsString, 1,
   (char*)"V.GetAttributeValueAsString(string, string) -> string\nC++: virtual const char *GetAttributeValueAsString(\n    const char *variable, const char *attribute)\n\nSet an attribute value as a string.  Set the variable to the\nempty string to access global attributes. If you specify a\nvariable that does not exist, it will be created.\n"},
  {(char*)"SetAttributeValueAsInt", PyvtkMINCImageAttributes_SetAttributeValueAsInt, 1,
   (char*)"V.SetAttributeValueAsInt(string, string, int)\nC++: virtual void SetAttributeValueAsInt(const char *variable,\n    const char *attribute, int value)\n\nSet an attribute value as an int. Set the variable to the empty\nstring to access global attributes. If you specify a variable\nthat does not exist, it will be created.\n"},
  {(char*)"GetAttributeValueAsInt", PyvtkMINCImageAttributes_GetAttributeValueAsInt, 1,
   (char*)"V.GetAttributeValueAsInt(string, string) -> int\nC++: virtual int GetAttributeValueAsInt(const char *variable,\n    const char *attribute)\n\nSet an attribute value as an int. Set the variable to the empty\nstring to access global attributes. If you specify a variable\nthat does not exist, it will be created.\n"},
  {(char*)"SetAttributeValueAsDouble", PyvtkMINCImageAttributes_SetAttributeValueAsDouble, 1,
   (char*)"V.SetAttributeValueAsDouble(string, string, float)\nC++: virtual void SetAttributeValueAsDouble(const char *variable,\n    const char *attribute, double value)\n\nSet an attribute value as a double.  Set the variable to the\nempty string to access global attributes. If you specify a\nvariable that does not exist, it will be created.\n"},
  {(char*)"GetAttributeValueAsDouble", PyvtkMINCImageAttributes_GetAttributeValueAsDouble, 1,
   (char*)"V.GetAttributeValueAsDouble(string, string) -> float\nC++: virtual double GetAttributeValueAsDouble(\n    const char *variable, const char *attribute)\n\nSet an attribute value as a double.  Set the variable to the\nempty string to access global attributes. If you specify a\nvariable that does not exist, it will be created.\n"},
  {(char*)"ValidateAttribute", PyvtkMINCImageAttributes_ValidateAttribute, 1,
   (char*)"V.ValidateAttribute(string, string, vtkDataArray) -> int\nC++: virtual int ValidateAttribute(const char *varname,\n    const char *attname, vtkDataArray *array)\n\nValidate a particular attribute.  This involves checking that the\nattribute is a MINC standard attribute, and checking whether it\ncan be set (as opposed to being set automatically from the image\ninformation).  The return values is 0 if the attribute is set\nautomatically and therefore should not be copied from here, 1 if\nthis attribute is valid and should be set, and 2 if the attribute\nis non-standard.\n"},
  {(char*)"SetValidateAttributes", PyvtkMINCImageAttributes_SetValidateAttributes, 1,
   (char*)"V.SetValidateAttributes(int)\nC++: void SetValidateAttributes(int a)\n\nSet this to Off if you do not want to automatically validate\nevery attribute that is set.\n"},
  {(char*)"ValidateAttributesOn", PyvtkMINCImageAttributes_ValidateAttributesOn, 1,
   (char*)"V.ValidateAttributesOn()\nC++: void ValidateAttributesOn()\n\nSet this to Off if you do not want to automatically validate\nevery attribute that is set.\n"},
  {(char*)"ValidateAttributesOff", PyvtkMINCImageAttributes_ValidateAttributesOff, 1,
   (char*)"V.ValidateAttributesOff()\nC++: void ValidateAttributesOff()\n\nSet this to Off if you do not want to automatically validate\nevery attribute that is set.\n"},
  {(char*)"GetValidateAttributes", PyvtkMINCImageAttributes_GetValidateAttributes, 1,
   (char*)"V.GetValidateAttributes() -> int\nC++: int GetValidateAttributes()\n\nSet this to Off if you do not want to automatically validate\nevery attribute that is set.\n"},
  {(char*)"ShallowCopy", PyvtkMINCImageAttributes_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkMINCImageAttributes)\nC++: virtual void ShallowCopy(vtkMINCImageAttributes *source)\n\nDo a shallow copy.  This will copy all the attributes from the\nsource.  It is much more efficient than a DeepCopy would be,\nsince it only copies pointers to the attribute values instead of\ncopying the arrays themselves.  You must use this method to make\na copy if you want to modify any MINC attributes from a\nMINCReader before you pass them to a MINCWriter.\n"},
  {(char*)"FindValidRange", PyvtkMINCImageAttributes_FindValidRange, 1,
   (char*)"V.FindValidRange([float, float])\nC++: virtual void FindValidRange(double range[2])\n\nFind the valid range of the data from the information stored in\nthe attributes.\n"},
  {(char*)"FindImageRange", PyvtkMINCImageAttributes_FindImageRange, 1,
   (char*)"V.FindImageRange([float, float])\nC++: virtual void FindImageRange(double range[2])\n\nFind the image range of the data from the information stored in\nthe attributes.\n"},
  {(char*)"PrintFileHeader", PyvtkMINCImageAttributes_PrintFileHeader, 1,
   (char*)"V.PrintFileHeader()\nC++: virtual void PrintFileHeader()\n\nA diagnostic function.  Print the header of the file in the same\nformat as ncdump or mincheader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMINCImageAttributes_StaticNew()
{
  return vtkMINCImageAttributes::New();
}

PyObject *PyVTKClass_vtkMINCImageAttributesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMINCImageAttributes_StaticNew,
    PyvtkMINCImageAttributes_Methods,
    "vtkMINCImageAttributes", modulename,
    NULL, NULL,
    PyvtkMINCImageAttributes_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMINCImageAttributes_Doc()
{
  static const char *docstring[] = {
    "vtkMINCImageAttributes - A container for a MINC image header.\n\n",
    "Superclass: vtkObject\n\n",
    "This class provides methods to access all of the information\ncontained in the MINC header.  If you read a MINC file into VTK and\nthen write it out again, you can use\nwriter->SetImageAttributes(reader->GetImageAttributes) to ensure that\nall of the medical information contained in the file is tranferred\nfrom the reader to the writer.  If you want to change any of the\nheader information, you must use",
    " ShallowCopy to make a copy of the\nreader's attributes and then modify only the copy.\n\nSee Also:\n\nvtkMINCImageReader vtkMINCImageWriter\n\nThanks:\n\nThanks to David Gobbi for writing this class and Atamai Inc. for\ncontributing it to VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMINCImageAttributes(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMINCImageAttributesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMINCImageAttributes", o) != 0)
    {
    Py_DECREF(o);
    }

}

