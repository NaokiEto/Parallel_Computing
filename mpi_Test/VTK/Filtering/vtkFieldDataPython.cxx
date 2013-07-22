// python wrapper for vtkFieldData
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
#include "vtkFieldData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFieldData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFieldData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFieldDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFieldDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkFieldData_Doc();


static PyObject *
PyvtkFieldData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

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
      tempr = op->vtkFieldData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

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
      tempr = op->vtkFieldData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkFieldData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFieldData::NewInstance();
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
PyvtkFieldData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkFieldData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkFieldData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkFieldData::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

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
      tempr = op->vtkFieldData::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkFieldData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      op->CopyStructure(temp0);
      }
    else
      {
      op->vtkFieldData::CopyStructure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_AllocateArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AllocateArrays(temp0);
      }
    else
      {
      op->vtkFieldData::AllocateArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_GetNumberOfArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfArrays();
      }
    else
      {
      tempr = op->vtkFieldData::GetNumberOfArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_AddArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkAbstractArray *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->AddArray(temp0);
      }
    else
      {
      tempr = op->vtkFieldData::AddArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_RemoveArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveArray(temp0);
      }
    else
      {
      op->vtkFieldData::RemoveArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_GetArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArray(temp0);
      }
    else
      {
      tempr = op->vtkFieldData::GetArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFieldData_GetArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  char *temp0 = NULL;
  int temp1;
  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArray(temp0, temp1);
      }
    else
      {
      tempr = op->vtkFieldData::GetArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFieldData_GetArray_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  char *temp0 = NULL;
  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArray(temp0);
      }
    else
      {
      tempr = op->vtkFieldData::GetArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFieldData_GetArray_Methods[] = {
  {NULL, PyvtkFieldData_GetArray_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkFieldData_GetArray_s3, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkFieldData_GetArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFieldData_GetArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkFieldData_GetArray_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetArray");
  return NULL;
}



static PyObject *
PyvtkFieldData_GetAbstractArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbstractArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  vtkAbstractArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAbstractArray(temp0);
      }
    else
      {
      tempr = op->vtkFieldData::GetAbstractArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFieldData_GetAbstractArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbstractArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  char *temp0 = NULL;
  int temp1;
  vtkAbstractArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAbstractArray(temp0, temp1);
      }
    else
      {
      tempr = op->vtkFieldData::GetAbstractArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkFieldData_GetAbstractArray_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbstractArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  char *temp0 = NULL;
  vtkAbstractArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAbstractArray(temp0);
      }
    else
      {
      tempr = op->vtkFieldData::GetAbstractArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkFieldData_GetAbstractArray_Methods[] = {
  {NULL, PyvtkFieldData_GetAbstractArray_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkFieldData_GetAbstractArray_s3, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkFieldData_GetAbstractArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFieldData_GetAbstractArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkFieldData_GetAbstractArray_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetAbstractArray");
  return NULL;
}



static PyObject *
PyvtkFieldData_HasArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasArray(temp0);
      }
    else
      {
      tempr = op->vtkFieldData::HasArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayName(temp0);
      }
    else
      {
      tempr = op->vtkFieldData::GetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_PassData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkFieldData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      op->PassData(temp0);
      }
    else
      {
      op->vtkFieldData::PassData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_CopyFieldOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->CopyFieldOn(temp0);
      }
    else
      {
      op->vtkFieldData::CopyFieldOn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_CopyFieldOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->CopyFieldOff(temp0);
      }
    else
      {
      op->vtkFieldData::CopyFieldOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_CopyAllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      op->CopyAllOn(temp0);
      }
    else
      {
      op->vtkFieldData::CopyAllOn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_CopyAllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      op->CopyAllOff(temp0);
      }
    else
      {
      op->vtkFieldData::CopyAllOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkFieldData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkFieldData::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkFieldData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkFieldData::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkFieldData::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkFieldData::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

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
      tempr = op->vtkFieldData::GetActualMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkFieldData::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_GetField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkIdList *temp0 = NULL;
  vtkFieldData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      op->GetField(temp0, temp1);
      }
    else
      {
      op->vtkFieldData::GetField(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_GetArrayContainingComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayContainingComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

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
      tempr = op->GetArrayContainingComponent(temp0, temp1);
      }
    else
      {
      tempr = op->vtkFieldData::GetArrayContainingComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponents();
      }
    else
      {
      tempr = op->vtkFieldData::GetNumberOfComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTuples();
      }
    else
      {
      tempr = op->vtkFieldData::GetNumberOfTuples();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

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
      op->vtkFieldData::SetNumberOfTuples(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_SetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkFieldData *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      op->SetTuple(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFieldData::SetTuple(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_InsertTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkFieldData *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      op->InsertTuple(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFieldData::InsertTuple(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFieldData_InsertNextTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkIdType temp0;
  vtkFieldData *temp1 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertNextTuple(temp0, temp1);
      }
    else
      {
      tempr = op->vtkFieldData::InsertNextTuple(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkFieldData_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkIdType temp0;
  int temp1;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComponent(temp0, temp1);
      }
    else
      {
      tempr = op->vtkFieldData::GetComponent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkFieldData_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

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
      op->vtkFieldData::SetComponent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkFieldData_InsertComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

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
      op->vtkFieldData::InsertComponent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkFieldData_Methods[] = {
  {(char*)"GetClassName", PyvtkFieldData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFieldData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFieldData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFieldData\nC++: vtkFieldData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFieldData_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFieldData\nC++: vtkFieldData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkFieldData_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nRelease all data but do not delete object. Also, clear the copy\nflags.\n"},
  {(char*)"Allocate", PyvtkFieldData_Allocate, 1,
   (char*)"V.Allocate(int, int) -> int\nC++: int Allocate(const vtkIdType sz, const vtkIdType ext=1000)\n\nAllocate data for each array. Note that ext is no longer used.\n"},
  {(char*)"CopyStructure", PyvtkFieldData_CopyStructure, 1,
   (char*)"V.CopyStructure(vtkFieldData)\nC++: void CopyStructure(vtkFieldData *)\n\nCopy data array structure from a given field.  The same arrays\nwill exist with the same types, but will contain nothing in the\ncopy.\n"},
  {(char*)"AllocateArrays", PyvtkFieldData_AllocateArrays, 1,
   (char*)"V.AllocateArrays(int)\nC++: void AllocateArrays(int num)\n\nAllocateOfArrays actually sets the number of vtkAbstractArray\npointers in the vtkFieldData object, not the number of used\npointers (arrays). Adding more arrays will cause the object to\ndynamically adjust the number of pointers if it needs to extend.\nAlthough AllocateArrays can be used if the number of arrays which\nwill be added is known, it can be omitted with a small\ncomputation cost.\n"},
  {(char*)"GetNumberOfArrays", PyvtkFieldData_GetNumberOfArrays, 1,
   (char*)"V.GetNumberOfArrays() -> int\nC++: int GetNumberOfArrays()\n\nGet the number of arrays of data available. This does not include\nNULL array pointers therefore after fd->AllocateArray(n); nArrays\n= GetNumberOfArrays() nArrays is not necessarily equal to n.\n"},
  {(char*)"AddArray", PyvtkFieldData_AddArray, 1,
   (char*)"V.AddArray(vtkAbstractArray) -> int\nC++: int AddArray(vtkAbstractArray *array)\n\nAdd an array to the array list. If an array with the same name\nalready exists - then the added array will replace it.\n"},
  {(char*)"RemoveArray", PyvtkFieldData_RemoveArray, 1,
   (char*)"V.RemoveArray(string)\nC++: virtual void RemoveArray(const char *name)\n\nRemove an array (with the given name) from the list of arrays.\n"},
  {(char*)"GetArray", PyvtkFieldData_GetArray, 1,
   (char*)"V.GetArray(int) -> vtkDataArray\nC++: vtkDataArray *GetArray(int i)\nV.GetArray(string, int) -> vtkDataArray\nC++: vtkDataArray *GetArray(const char *arrayName, int &index)\nV.GetArray(string) -> vtkDataArray\nC++: vtkDataArray *GetArray(const char *arrayName)\n\nReturn the ith array in the field. A NULL is returned if the\nindex i is out of range. A NULL is returned if the array at the\ngiven index is not a vtkDataArray.\n"},
  {(char*)"GetAbstractArray", PyvtkFieldData_GetAbstractArray, 1,
   (char*)"V.GetAbstractArray(int) -> vtkAbstractArray\nC++: vtkAbstractArray *GetAbstractArray(int i)\nV.GetAbstractArray(string, int) -> vtkAbstractArray\nC++: vtkAbstractArray *GetAbstractArray(const char *arrayName,\n    int &index)\nV.GetAbstractArray(string) -> vtkAbstractArray\nC++: vtkAbstractArray *GetAbstractArray(const char *arrayName)\n\nReturns the ith array in the field. Unlike GetArray(), this\nmethod returns a vtkAbstractArray. A NULL is returned only if the\nindex i is out of range.\n"},
  {(char*)"HasArray", PyvtkFieldData_HasArray, 1,
   (char*)"V.HasArray(string) -> int\nC++: int HasArray(const char *name)\n\nReturn 1 if an array with the given name could be found. 0\notherwise.\n"},
  {(char*)"GetArrayName", PyvtkFieldData_GetArrayName, 1,
   (char*)"V.GetArrayName(int) -> string\nC++: const char *GetArrayName(int i)\n\nGet the name of ith array. Note that this is equivalent to:\nGetAbstractArray(i)->GetName() if ith array pointer is not NULL\n"},
  {(char*)"PassData", PyvtkFieldData_PassData, 1,
   (char*)"V.PassData(vtkFieldData)\nC++: virtual void PassData(vtkFieldData *fd)\n\nPass entire arrays of input data through to output. Obey the\n\"copy\" flags.\n"},
  {(char*)"CopyFieldOn", PyvtkFieldData_CopyFieldOn, 1,
   (char*)"V.CopyFieldOn(string)\nC++: void CopyFieldOn(const char *name)\n\nTurn on/off the copying of the field specified by name. During\nthe copying/passing, the following rules are followed for each\narray:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyFieldOff", PyvtkFieldData_CopyFieldOff, 1,
   (char*)"V.CopyFieldOff(string)\nC++: void CopyFieldOff(const char *name)\n\nTurn on/off the copying of the field specified by name. During\nthe copying/passing, the following rules are followed for each\narray:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyAllOn", PyvtkFieldData_CopyAllOn, 1,
   (char*)"V.CopyAllOn(int)\nC++: virtual void CopyAllOn(int unused=0)\n\nTurn on copying of all data. During the copying/passing, the\nfollowing rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"CopyAllOff", PyvtkFieldData_CopyAllOff, 1,
   (char*)"V.CopyAllOff(int)\nC++: virtual void CopyAllOff(int unused=0)\n\nTurn off copying of all data. During the copying/passing, the\nfollowing rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array\n"},
  {(char*)"DeepCopy", PyvtkFieldData_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkFieldData)\nC++: virtual void DeepCopy(vtkFieldData *da)\n\nCopy a field by creating new data arrays (i.e., duplicate\nstorage).\n"},
  {(char*)"ShallowCopy", PyvtkFieldData_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkFieldData)\nC++: virtual void ShallowCopy(vtkFieldData *da)\n\nCopy a field by reference counting the data arrays.\n"},
  {(char*)"Squeeze", PyvtkFieldData_Squeeze, 1,
   (char*)"V.Squeeze()\nC++: void Squeeze()\n\nSqueezes each data array in the field (Squeeze() reclaims unused\nmemory.)\n"},
  {(char*)"Reset", PyvtkFieldData_Reset, 1,
   (char*)"V.Reset()\nC++: void Reset()\n\nResets each data array in the field (Reset() does not release\nmemory but it makes the arrays look like they are empty.)\n"},
  {(char*)"GetActualMemorySize", PyvtkFieldData_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the memory in kilobytes consumed by this field data. Used\nto support streaming and reading/writing data. The value returned\nis guaranteed to be greater than or equal to the memory required\nto actually represent the data represented by this object.\n"},
  {(char*)"GetMTime", PyvtkFieldData_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nCheck object's components for modified times.\n"},
  {(char*)"GetField", PyvtkFieldData_GetField, 1,
   (char*)"V.GetField(vtkIdList, vtkFieldData)\nC++: void GetField(vtkIdList *ptId, vtkFieldData *f)\n\nGet a field from a list of ids. Supplied field f should have same\ntypes and number of data arrays as this one (i.e., like\nCopyStructure() creates).  This method should not be used if the\ninstance is from a subclass of vtkFieldData (vtkPointData or\nvtkCellData).  This is because in those cases, the attribute data\nis stored with the other fields and will cause the method to\nbehave in an unexpected way.\n"},
  {(char*)"GetArrayContainingComponent", PyvtkFieldData_GetArrayContainingComponent, 1,
   (char*)"V.GetArrayContainingComponent(int, int) -> int\nC++: int GetArrayContainingComponent(int i, int &arrayComp)\n\nReturn the array containing the ith component of the field. The\nreturn value is an integer number n 0<=n<this->NumberOfArrays.\nAlso, an integer value is returned indicating the component in\nthe array is returned. Method returns -1 if specified component\nis not in the field.\n"},
  {(char*)"GetNumberOfComponents", PyvtkFieldData_GetNumberOfComponents, 1,
   (char*)"V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nGet the number of components in the field. This is determined by\nadding up the components in each non-NULL array. This method\nshould not be used if the instance is from a subclass of\nvtkFieldData (vtkPointData or vtkCellData). This is because in\nthose cases, the attribute data is stored with the other fields\nand will cause the method to behave in an unexpected way.\n"},
  {(char*)"GetNumberOfTuples", PyvtkFieldData_GetNumberOfTuples, 1,
   (char*)"V.GetNumberOfTuples() -> int\nC++: vtkIdType GetNumberOfTuples()\n\nGet the number of tuples in the field. Note: some fields have\narrays with different numbers of tuples; this method returns the\nnumber of tuples in the first array. Mixed-length arrays may have\nto be treated specially. This method should not be used if the\ninstance is from a subclass of vtkFieldData (vtkPointData or\nvtkCellData). This is because in those cases, the attribute data\nis stored with the other fields and will cause the method to\nbehave in an unexpected way.\n"},
  {(char*)"SetNumberOfTuples", PyvtkFieldData_SetNumberOfTuples, 1,
   (char*)"V.SetNumberOfTuples(int)\nC++: void SetNumberOfTuples(const vtkIdType number)\n\nSet the number of tuples for each data array in the field. This\nmethod should not be used if the instance is from a subclass of\nvtkFieldData (vtkPointData or vtkCellData). This is because in\nthose cases, the attribute data is stored with the other fields\nand will cause the method to behave in an unexpected way.\n"},
  {(char*)"SetTuple", PyvtkFieldData_SetTuple, 1,
   (char*)"V.SetTuple(int, int, vtkFieldData)\nC++: void SetTuple(const vtkIdType i, const vtkIdType j,\n    vtkFieldData *source)\n\nSet the jth tuple in source field data at the ith location. Set\noperations mean that no range checking is performed, so they're\nfaster.\n"},
  {(char*)"InsertTuple", PyvtkFieldData_InsertTuple, 1,
   (char*)"V.InsertTuple(int, int, vtkFieldData)\nC++: void InsertTuple(const vtkIdType i, const vtkIdType j,\n    vtkFieldData *source)\n\nInsert the jth tuple in source field data at the ith location.\nRange checking is performed and memory allocates as necessary.\n"},
  {(char*)"InsertNextTuple", PyvtkFieldData_InsertNextTuple, 1,
   (char*)"V.InsertNextTuple(int, vtkFieldData) -> int\nC++: vtkIdType InsertNextTuple(const vtkIdType j,\n    vtkFieldData *source)\n\nInsert the jth tuple in source field data  at the end of the\ntuple matrix. Range checking is performed and memory is allocated\nas necessary.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetComponent", PyvtkFieldData_GetComponent, 1,
   (char*)"V.GetComponent(int, int) -> float\nC++: double GetComponent(const vtkIdType i, const int j)\n\nGet the component value at the ith tuple (or row) and jth\ncomponent (or column).@deprecated as of VTK 5.2. Using this\nmethod for FieldData having arrays that are not subclasses of\nvtkDataArray may yield unexpected results.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"SetComponent", PyvtkFieldData_SetComponent, 1,
   (char*)"V.SetComponent(int, int, float)\nC++: void SetComponent(const vtkIdType i, const int j,\n    const double c)\n\nSet the component value at the ith tuple (or row) and jth\ncomponent (or column).  Range checking is not performed, so set\nthe object up properly before invoking.@deprecated as of VTK 5.2.\nUsing this method for FieldData having arrays that are not\nsubclasses of vtkDataArray may yield unexpected results.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"InsertComponent", PyvtkFieldData_InsertComponent, 1,
   (char*)"V.InsertComponent(int, int, float)\nC++: void InsertComponent(const vtkIdType i, const int j,\n    const double c)\n\nInsert the component value at the ith tuple (or row) and jth\ncomponent (or column).  Range checking is performed and memory\nallocated as necessary o hold data.@deprecated as of VTK 5.2.\nUsing this method for FieldData having arrays that are not\nsubclasses of vtkDataArray may yield unexpected results.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFieldData_StaticNew()
{
  return vtkFieldData::New();
}

PyObject *PyVTKClass_vtkFieldDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFieldData_StaticNew,
    PyvtkFieldData_Methods,
    "vtkFieldData", modulename,
    NULL, NULL,
    PyvtkFieldData_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkFieldData_Doc()
{
  static const char *docstring[] = {
    "vtkFieldData - represent and manipulate fields of data\n\n",
    "Superclass: vtkObject\n\n",
    "vtkFieldData represents and manipulates fields of data. The model of\na field is a m x n matrix of data values, where m is the number of\ntuples, and n is the number of components. (A tuple is a row of n\ncomponents in the matrix.) The field is assumed to be composed of a\nset of one or more data arrays, where the data in the arrays are of\ndifferent types (e.g., int, double, char, etc.), and there may",
    " be\nvariable numbers of components in each array. Note that each data\narray is assumed to be \"m\" in length (i.e., number of tuples), which\ntypically corresponds to the number of points or cells in a dataset.\nAlso, each data array must have a character-string name. (This is\nused to manipulate data.)\n\nThere are two ways of manipulating and interfacing to fields. You can\ndo it generically by manipula",
    "ting components/tuples via a double-type\ndata exchange, or you can do it by grabbing the arrays and\nmanipulating them directly. The former is simpler but performs type\nconversion, which is bad if your data has non-castable types like\n(void) pointers, or you lose information as a result of the cast.\nThe, more efficient method means managing each array in the field. \nUsing this method you can create",
    " faster, more efficient algorithms\nthat do not lose information.\n\nSee Also:\n\nvtkAbstractArray vtkDataSetAttributes vtkPointData vtkCellData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFieldData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFieldDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFieldData", o) != 0)
    {
    Py_DECREF(o);
    }

}

