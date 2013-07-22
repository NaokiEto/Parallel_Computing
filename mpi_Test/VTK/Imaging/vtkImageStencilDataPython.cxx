// python wrapper for vtkImageStencilData
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
#include "vtkImageStencilData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageStencilData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageStencilData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageStencilDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageStencilDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkImageStencilData_Doc();


static PyObject *
PyvtkImageStencilData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

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
      tempr = op->vtkImageStencilData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

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
      tempr = op->vtkImageStencilData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkImageStencilData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageStencilData::NewInstance();
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
PyvtkImageStencilData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageStencilData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageStencilData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkImageStencilData::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

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
      op->vtkImageStencilData::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

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
      op->vtkImageStencilData::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_InternalImageStencilDataCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalImageStencilDataCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkImageStencilData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
    {
    if (ap.IsBound())
      {
      op->InternalImageStencilDataCopy(temp0);
      }
    else
      {
      op->vtkImageStencilData::InternalImageStencilDataCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

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
      tempr = op->vtkImageStencilData::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtentType();
      }
    else
      {
      tempr = op->vtkImageStencilData::GetExtentType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_GetNextExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextExtent(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      tempr = op->vtkImageStencilData::GetNextExtent(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(6, temp6);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_InsertNextExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->InsertNextExtent(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageStencilData::InsertNextExtent(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_InsertAndMergeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertAndMergeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->InsertAndMergeExtent(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageStencilData::InsertAndMergeExtent(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_RemoveExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->RemoveExtent(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageStencilData::RemoveExtent(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_SetSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  double temp0;
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
      op->SetSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageStencilData::SetSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageStencilData_SetSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSpacing(temp0);
      }
    else
      {
      op->vtkImageStencilData::SetSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageStencilData_SetSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageStencilData_SetSpacing_s1(self, args);
    case 1:
      return PyvtkImageStencilData_SetSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacing");
  return NULL;
}



static PyObject *
PyvtkImageStencilData_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpacing();
      }
    else
      {
      tempr = op->vtkImageStencilData::GetSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  double temp0;
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
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageStencilData::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageStencilData_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkImageStencilData::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageStencilData_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageStencilData_SetOrigin_s1(self, args);
    case 1:
      return PyvtkImageStencilData_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkImageStencilData_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrigin();
      }
    else
      {
      tempr = op->vtkImageStencilData::GetOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetExtent(temp0);
      }
    else
      {
      op->vtkImageStencilData::SetExtent(temp0);
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
PyvtkImageStencilData_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageStencilData::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageStencilData_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageStencilData_SetExtent_s1(self, args);
    case 6:
      return PyvtkImageStencilData_SetExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return NULL;
}



static PyObject *
PyvtkImageStencilData_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtent();
      }
    else
      {
      tempr = op->vtkImageStencilData::GetExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_AllocateExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllocateExtents();
      }
    else
      {
      op->vtkImageStencilData::AllocateExtents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Fill();
      }
    else
      {
      op->vtkImageStencilData::Fill();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_CopyInformationToPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationToPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  vtkInformation *temp2 = NULL;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation") &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->CopyInformationToPipeline(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageStencilData::CopyInformationToPipeline(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_CopyInformationFromPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationFromPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->CopyInformationFromPipeline(temp0);
      }
    else
      {
      op->vtkImageStencilData::CopyInformationFromPipeline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkImageStencilData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkImageStencilData::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageStencilData_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkImageStencilData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkImageStencilData::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageStencilData_GetData_Methods[] = {
  {NULL, PyvtkImageStencilData_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkImageStencilData_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkImageStencilData_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageStencilData_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageStencilData_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkImageStencilData_Add(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Add");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkImageStencilData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
    {
    if (ap.IsBound())
      {
      op->Add(temp0);
      }
    else
      {
      op->vtkImageStencilData::Add(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_Subtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Subtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkImageStencilData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
    {
    if (ap.IsBound())
      {
      op->Subtract(temp0);
      }
    else
      {
      op->vtkImageStencilData::Subtract(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_Replace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Replace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkImageStencilData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
    {
    if (ap.IsBound())
      {
      op->Replace(temp0);
      }
    else
      {
      op->vtkImageStencilData::Replace(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencilData_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->Clip(temp0);
      }
    else
      {
      tempr = op->vtkImageStencilData::Clip(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageStencilData_Methods[] = {
  {(char*)"GetClassName", PyvtkImageStencilData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageStencilData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageStencilData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageStencilData\nC++: vtkImageStencilData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageStencilData_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageStencilData\nC++: vtkImageStencilData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkImageStencilData_Initialize, 1,
   (char*)"V.Initialize()\nC++: void Initialize()\n\n"},
  {(char*)"DeepCopy", PyvtkImageStencilData_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *o)\n\n"},
  {(char*)"ShallowCopy", PyvtkImageStencilData_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *f)\n\n"},
  {(char*)"InternalImageStencilDataCopy", PyvtkImageStencilData_InternalImageStencilDataCopy, 1,
   (char*)"V.InternalImageStencilDataCopy(vtkImageStencilData)\nC++: void InternalImageStencilDataCopy(vtkImageStencilData *s)\n\n"},
  {(char*)"GetDataObjectType", PyvtkImageStencilData_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: int GetDataObjectType()\n\nGet the data type as an integer (this will return VTK_DATA_OBJECT\nfor now, maybe a proper type constant will be reserved later).\n"},
  {(char*)"GetExtentType", PyvtkImageStencilData_GetExtentType, 1,
   (char*)"V.GetExtentType() -> int\nC++: int GetExtentType()\n\nThe extent type is 3D, just like vtkImageData.\n"},
  {(char*)"GetNextExtent", PyvtkImageStencilData_GetNextExtent, 1,
   (char*)"V.GetNextExtent(int, int, int, int, int, int, int) -> int\nC++: int GetNextExtent(int &r1, int &r2, int xMin, int xMax,\n    int yIdx, int zIdx, int &iter)\n\nGiven the total output x extent [xMin,xMax] and the current y, z\nindices, return each sub-extent [r1,r2] that lies within within\nthe unclipped region in sequence.  A value of '0' is returned if\nno more sub-extents are available.  The variable 'iter' must be\ninitialized to zero before the first call, unless you want the\ncomplementary sub-extents in which case you must initialize\n'iter' to -1.  The variable 'iter' is used internally to keep\ntrack of which sub-extent should be returned next.\n"},
  {(char*)"InsertNextExtent", PyvtkImageStencilData_InsertNextExtent, 1,
   (char*)"V.InsertNextExtent(int, int, int, int)\nC++: void InsertNextExtent(int r1, int r2, int yIdx, int zIdx)\n\nThis method is used by vtkImageStencilDataSource to add an x sub\nextent [r1,r2] for the x row (yIdx,zIdx).  The specified sub\nextent must not intersect any other sub extents along the same x\nrow. As well, r1 and r2 must both be within the total x extent\n[Extent[0],Extent[1]].\n"},
  {(char*)"InsertAndMergeExtent", PyvtkImageStencilData_InsertAndMergeExtent, 1,
   (char*)"V.InsertAndMergeExtent(int, int, int, int)\nC++: void InsertAndMergeExtent(int r1, int r2, int yIdx, int zIdx)\n\nSimilar to InsertNextExtent, except that the extent (r1,r2) at\nyIdx, zIdx is merged with other extents, (if any) on that row. So\na unique extent may not necessarily be added. For instance, if an\nextent [5,11] already exists adding an extent, [7,9] will not\naffect the stencil. Likewise adding [10, 13] will replace the\nexisting extent with [5,13].\n"},
  {(char*)"RemoveExtent", PyvtkImageStencilData_RemoveExtent, 1,
   (char*)"V.RemoveExtent(int, int, int, int)\nC++: void RemoveExtent(int r1, int r2, int yIdx, int zIdx)\n\nRemove the extent from (r1,r2) at yIdx, zIdx\n"},
  {(char*)"SetSpacing", PyvtkImageStencilData_SetSpacing, 1,
   (char*)"V.SetSpacing(float, float, float)\nC++: void SetSpacing(double, double, double)\nV.SetSpacing((float, float, float))\nC++: void SetSpacing(double a[3])\n\n"},
  {(char*)"GetSpacing", PyvtkImageStencilData_GetSpacing, 1,
   (char*)"V.GetSpacing() -> (float, float, float)\nC++: double *GetSpacing()\n\n"},
  {(char*)"SetOrigin", PyvtkImageStencilData_SetOrigin, 1,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {(char*)"GetOrigin", PyvtkImageStencilData_GetOrigin, 1,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\n"},
  {(char*)"SetExtent", PyvtkImageStencilData_SetExtent, 1,
   (char*)"V.SetExtent([int, int, int, int, int, int])\nC++: void SetExtent(int extent[6])\nV.SetExtent(int, int, int, int, int, int)\nC++: void SetExtent(int x1, int x2, int y1, int y2, int z1,\n    int z2)\n\nSet the extent of the data.  This is should be called only by\nvtkImageStencilSource, as it is part of the basic pipeline\nfunctionality.\n"},
  {(char*)"GetExtent", PyvtkImageStencilData_GetExtent, 1,
   (char*)"V.GetExtent() -> (int, int, int, int, int, int)\nC++: int *GetExtent()\n\n"},
  {(char*)"AllocateExtents", PyvtkImageStencilData_AllocateExtents, 1,
   (char*)"V.AllocateExtents()\nC++: void AllocateExtents()\n\nAllocate space for the sub-extents.  This is called by\nvtkImageStencilSource.\n"},
  {(char*)"Fill", PyvtkImageStencilData_Fill, 1,
   (char*)"V.Fill()\nC++: void Fill()\n\nFill the sub-extents.\n"},
  {(char*)"CopyInformationToPipeline", PyvtkImageStencilData_CopyInformationToPipeline, 1,
   (char*)"V.CopyInformationToPipeline(vtkInformation, vtkInformation,\n    vtkInformation, int)\nC++: virtual void CopyInformationToPipeline(\n    vtkInformation *request, vtkInformation *input,\n    vtkInformation *output, int forceCopy)\n\nOverride these to handle origin, spacing, scalar type, and scalar\nnumber of components.  See vtkDataObject for details.\n"},
  {(char*)"CopyInformationFromPipeline", PyvtkImageStencilData_CopyInformationFromPipeline, 1,
   (char*)"V.CopyInformationFromPipeline(vtkInformation)\nC++: virtual void CopyInformationFromPipeline(\n    vtkInformation *request)\n\nOverride these to handle origin, spacing, scalar type, and scalar\nnumber of components.  See vtkDataObject for details.\n"},
  {(char*)"GetData", PyvtkImageStencilData_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkImageStencilData\nC++: static vtkImageStencilData *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkImageStencilData\nC++: static vtkImageStencilData *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {(char*)"Add", PyvtkImageStencilData_Add, 1,
   (char*)"V.Add(vtkImageStencilData)\nC++: virtual void Add(vtkImageStencilData *)\n\nAdd merges the stencil supplied as argument into Self.\n"},
  {(char*)"Subtract", PyvtkImageStencilData_Subtract, 1,
   (char*)"V.Subtract(vtkImageStencilData)\nC++: virtual void Subtract(vtkImageStencilData *)\n\nSubtract removes the portion of the stencil, supplied as\nargument, that lies within Self from Self.\n"},
  {(char*)"Replace", PyvtkImageStencilData_Replace, 1,
   (char*)"V.Replace(vtkImageStencilData)\nC++: virtual void Replace(vtkImageStencilData *)\n\nReplaces the portion of the stencil, supplied as argument, that\nlies within Self from Self.\n"},
  {(char*)"Clip", PyvtkImageStencilData_Clip, 1,
   (char*)"V.Clip([int, int, int, int, int, int]) -> int\nC++: virtual int Clip(int extent[6])\n\nClip the stencil with the supplied extents. In other words,\ndiscard data outside the specified extents. Return 1 if something\nchanged.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageStencilData_StaticNew()
{
  return vtkImageStencilData::New();
}

PyObject *PyVTKClass_vtkImageStencilDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageStencilData_StaticNew,
    PyvtkImageStencilData_Methods,
    "vtkImageStencilData", modulename,
    NULL, NULL,
    PyvtkImageStencilData_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkImageStencilData_Doc()
{
  static const char *docstring[] = {
    "vtkImageStencilData - efficient description of an image stencil\n\n",
    "Superclass: vtkDataObject\n\n",
    "vtkImageStencilData describes an image stencil in a manner which is\nefficient both in terms of speed and storage space.  The stencil\nextents are stored for each x-row across the image (multiple extents\nper row if necessary) and can be retrieved via the GetNextExtent()\nmethod.\n\nSee Also:\n\nvtkImageStencilSource vtkImageStencil\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageStencilData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageStencilDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageStencilData", o) != 0)
    {
    Py_DECREF(o);
    }

}

