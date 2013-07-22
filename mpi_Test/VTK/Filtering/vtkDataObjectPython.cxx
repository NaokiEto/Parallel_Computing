// python wrapper for vtkDataObject
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
#include "vtkDataObject.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataObject(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataObject(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDataObject_Doc();


static PyObject *
PyvtkDataObject_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      tempr = op->vtkDataObject::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      tempr = op->vtkDataObject::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataObject::NewInstance();
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
PyvtkDataObject_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSource();
      }
    else
      {
      tempr = op->vtkDataObject::GetSource();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkSource *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSource"))
    {
    if (ap.IsBound())
      {
      op->SetSource(temp0);
      }
    else
      {
      op->vtkDataObject::SetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInformation();
      }
    else
      {
      tempr = op->vtkDataObject::GetInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->SetInformation(temp0);
      }
    else
      {
      op->vtkDataObject::SetInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetPipelineInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPipelineInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPipelineInformation();
      }
    else
      {
      tempr = op->vtkDataObject::GetPipelineInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetPipelineInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPipelineInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->SetPipelineInformation(temp0);
      }
    else
      {
      op->vtkDataObject::SetPipelineInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetProducerPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProducerPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProducerPort();
      }
    else
      {
      tempr = op->vtkDataObject::GetProducerPort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      tempr = op->vtkDataObject::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkDataObject::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_ReleaseData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseData();
      }
    else
      {
      op->vtkDataObject::ReleaseData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_ShouldIReleaseData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShouldIReleaseData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->ShouldIReleaseData();
      }
    else
      {
      tempr = op->vtkDataObject::ShouldIReleaseData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetDataReleased(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataReleased");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataReleased();
      }
    else
      {
      tempr = op->vtkDataObject::GetDataReleased();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetReleaseDataFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReleaseDataFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReleaseDataFlag(temp0);
      }
    else
      {
      op->vtkDataObject::SetReleaseDataFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetReleaseDataFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReleaseDataFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReleaseDataFlag();
      }
    else
      {
      tempr = op->vtkDataObject::GetReleaseDataFlag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_ReleaseDataFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseDataFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseDataFlagOn();
      }
    else
      {
      op->vtkDataObject::ReleaseDataFlagOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_ReleaseDataFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseDataFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseDataFlagOff();
      }
    else
      {
      op->vtkDataObject::ReleaseDataFlagOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetGlobalReleaseDataFlag(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalReleaseDataFlag");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkDataObject::SetGlobalReleaseDataFlag(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GlobalReleaseDataFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GlobalReleaseDataFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GlobalReleaseDataFlagOn();
      }
    else
      {
      op->vtkDataObject::GlobalReleaseDataFlagOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GlobalReleaseDataFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GlobalReleaseDataFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GlobalReleaseDataFlagOff();
      }
    else
      {
      op->vtkDataObject::GlobalReleaseDataFlagOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetGlobalReleaseDataFlag(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalReleaseDataFlag");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::GetGlobalReleaseDataFlag();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkFieldData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
    {
    if (ap.IsBound())
      {
      op->SetFieldData(temp0);
      }
    else
      {
      op->vtkDataObject::SetFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkFieldData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldData();
      }
    else
      {
      tempr = op->vtkDataObject::GetFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkDataObject::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_UpdateInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateInformation();
      }
    else
      {
      op->vtkDataObject::UpdateInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_PropagateUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PropagateUpdateExtent();
      }
    else
      {
      op->vtkDataObject::PropagateUpdateExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_TriggerAsynchronousUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerAsynchronousUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TriggerAsynchronousUpdate();
      }
    else
      {
      op->vtkDataObject::TriggerAsynchronousUpdate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_UpdateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateData();
      }
    else
      {
      op->vtkDataObject::UpdateData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetEstimatedMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEstimatedMemorySize();
      }
    else
      {
      tempr = op->vtkDataObject::GetEstimatedMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetUpdateExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetUpdateExtent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDataObject::SetUpdateExtent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObject_SetUpdateExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetUpdateExtent(temp0, temp1);
      }
    else
      {
      op->vtkDataObject::SetUpdateExtent(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObject_SetUpdateExtent_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      op->SetUpdateExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkDataObject::SetUpdateExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObject_SetUpdateExtent_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      op->SetUpdateExtent(temp0);
      }
    else
      {
      op->vtkDataObject::SetUpdateExtent(temp0);
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
PyvtkDataObject_SetUpdateExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDataObject_SetUpdateExtent_s1(self, args);
    case 2:
      return PyvtkDataObject_SetUpdateExtent_s2(self, args);
    case 6:
      return PyvtkDataObject_SetUpdateExtent_s3(self, args);
    case 1:
      return PyvtkDataObject_SetUpdateExtent_s4(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUpdateExtent");
  return NULL;
}



static PyObject *
PyvtkDataObject_GetUpdateExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpdateExtent();
      }
    else
      {
      tempr = op->vtkDataObject::GetUpdateExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkDataObject_GetUpdateExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      op->GetUpdateExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkDataObject::GetUpdateExtent(temp0, temp1, temp2, temp3, temp4, temp5);
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
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObject_GetUpdateExtent_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      op->GetUpdateExtent(temp0);
      }
    else
      {
      op->vtkDataObject::GetUpdateExtent(temp0);
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
PyvtkDataObject_GetUpdateExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataObject_GetUpdateExtent_s1(self, args);
    case 6:
      return PyvtkDataObject_GetUpdateExtent_s2(self, args);
    case 1:
      return PyvtkDataObject_GetUpdateExtent_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetUpdateExtent");
  return NULL;
}



static PyObject *
PyvtkDataObject_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      tempr = op->vtkDataObject::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetUpdateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpdateTime();
      }
    else
      {
      tempr = op->vtkDataObject::GetUpdateTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetUpdateExtentToWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateExtentToWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetUpdateExtentToWholeExtent();
      }
    else
      {
      op->vtkDataObject::SetUpdateExtentToWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetPipelineMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPipelineMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPipelineMTime();
      }
    else
      {
      tempr = op->vtkDataObject::GetPipelineMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      tempr = op->vtkDataObject::GetActualMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_CopyInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->CopyInformation(temp0);
      }
    else
      {
      op->vtkDataObject::CopyInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_CopyTypeSpecificInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTypeSpecificInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->CopyTypeSpecificInformation(temp0);
      }
    else
      {
      op->vtkDataObject::CopyTypeSpecificInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetUpdatePiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdatePiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUpdatePiece(temp0);
      }
    else
      {
      op->vtkDataObject::SetUpdatePiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetUpdateNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUpdateNumberOfPieces(temp0);
      }
    else
      {
      op->vtkDataObject::SetUpdateNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetUpdatePiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdatePiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpdatePiece();
      }
    else
      {
      tempr = op->vtkDataObject::GetUpdatePiece();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetUpdateNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpdateNumberOfPieces();
      }
    else
      {
      tempr = op->vtkDataObject::GetUpdateNumberOfPieces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetUpdateGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUpdateGhostLevel(temp0);
      }
    else
      {
      op->vtkDataObject::SetUpdateGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetUpdateGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpdateGhostLevel();
      }
    else
      {
      tempr = op->vtkDataObject::GetUpdateGhostLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetRequestExactExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestExactExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRequestExactExtent(temp0);
      }
    else
      {
      op->vtkDataObject::SetRequestExactExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetRequestExactExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestExactExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRequestExactExtent();
      }
    else
      {
      tempr = op->vtkDataObject::GetRequestExactExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_RequestExactExtentOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestExactExtentOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RequestExactExtentOn();
      }
    else
      {
      op->vtkDataObject::RequestExactExtentOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_RequestExactExtentOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestExactExtentOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RequestExactExtentOff();
      }
    else
      {
      op->vtkDataObject::RequestExactExtentOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkDataObject::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObject_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      op->SetWholeExtent(temp0);
      }
    else
      {
      op->vtkDataObject::SetWholeExtent(temp0);
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
PyvtkDataObject_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkDataObject_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkDataObject_SetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return NULL;
}



static PyObject *
PyvtkDataObject_GetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWholeExtent();
      }
    else
      {
      tempr = op->vtkDataObject::GetWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkDataObject_GetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      op->GetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkDataObject::GetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
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
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObject_GetWholeExtent_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      op->GetWholeExtent(temp0);
      }
    else
      {
      op->vtkDataObject::GetWholeExtent(temp0);
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
PyvtkDataObject_GetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataObject_GetWholeExtent_s1(self, args);
    case 6:
      return PyvtkDataObject_GetWholeExtent_s2(self, args);
    case 1:
      return PyvtkDataObject_GetWholeExtent_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetWholeExtent");
  return NULL;
}



static PyObject *
PyvtkDataObject_SetWholeBoundingBox_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetWholeBoundingBox(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkDataObject::SetWholeBoundingBox(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObject_SetWholeBoundingBox_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetWholeBoundingBox(temp0);
      }
    else
      {
      op->vtkDataObject::SetWholeBoundingBox(temp0);
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
PyvtkDataObject_SetWholeBoundingBox(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkDataObject_SetWholeBoundingBox_s1(self, args);
    case 1:
      return PyvtkDataObject_SetWholeBoundingBox_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeBoundingBox");
  return NULL;
}



static PyObject *
PyvtkDataObject_GetWholeBoundingBox_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWholeBoundingBox();
      }
    else
      {
      tempr = op->vtkDataObject::GetWholeBoundingBox();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkDataObject_GetWholeBoundingBox_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->GetWholeBoundingBox(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkDataObject::GetWholeBoundingBox(temp0, temp1, temp2, temp3, temp4, temp5);
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
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(5, temp5);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObject_GetWholeBoundingBox_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetWholeBoundingBox(temp0);
      }
    else
      {
      op->vtkDataObject::GetWholeBoundingBox(temp0);
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
PyvtkDataObject_GetWholeBoundingBox(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDataObject_GetWholeBoundingBox_s1(self, args);
    case 6:
      return PyvtkDataObject_GetWholeBoundingBox_s2(self, args);
    case 1:
      return PyvtkDataObject_GetWholeBoundingBox_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetWholeBoundingBox");
  return NULL;
}



static PyObject *
PyvtkDataObject_SetMaximumNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfPieces(temp0);
      }
    else
      {
      op->vtkDataObject::SetMaximumNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetMaximumNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfPieces();
      }
    else
      {
      tempr = op->vtkDataObject::GetMaximumNumberOfPieces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_CopyInformationToPipeline_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationToPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      op->vtkDataObject::CopyInformationToPipeline(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObject_CopyInformationToPipeline_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationToPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkInformation *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->CopyInformationToPipeline(temp0, temp1);
      }
    else
      {
      op->vtkDataObject::CopyInformationToPipeline(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDataObject_CopyInformationToPipeline(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkDataObject_CopyInformationToPipeline_s1(self, args);
    case 2:
      return PyvtkDataObject_CopyInformationToPipeline_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "CopyInformationToPipeline");
  return NULL;
}



static PyObject *
PyvtkDataObject_CopyInformationFromPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationFromPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      op->vtkDataObject::CopyInformationFromPipeline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetActiveFieldInformation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetActiveFieldInformation");

  vtkInformation *temp0 = NULL;
  int temp1;
  int temp2;
  vtkInformation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    tempr = vtkDataObject::GetActiveFieldInformation(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetNamedFieldInformation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNamedFieldInformation");

  vtkInformation *temp0 = NULL;
  int temp1;
  char *temp2 = NULL;
  vtkInformation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    tempr = vtkDataObject::GetNamedFieldInformation(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_RemoveNamedFieldInformation(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RemoveNamedFieldInformation");

  vtkInformation *temp0 = NULL;
  int temp1;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkDataObject::RemoveNamedFieldInformation(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetActiveAttribute(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetActiveAttribute");

  vtkInformation *temp0 = NULL;
  int temp1;
  char *temp2 = NULL;
  int temp3;
  vtkInformation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    tempr = vtkDataObject::SetActiveAttribute(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetActiveAttributeInfo(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetActiveAttributeInfo");

  vtkInformation *temp0 = NULL;
  int temp1;
  int temp2;
  char *temp3 = NULL;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = NULL;

  if (ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    vtkDataObject::SetActiveAttributeInfo(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetPointDataActiveScalarInfo(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetPointDataActiveScalarInfo");

  vtkInformation *temp0 = NULL;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    vtkDataObject::SetPointDataActiveScalarInfo(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DataHasBeenGenerated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataHasBeenGenerated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DataHasBeenGenerated();
      }
    else
      {
      op->vtkDataObject::DataHasBeenGenerated();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_PrepareForNewData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForNewData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrepareForNewData();
      }
    else
      {
      op->vtkDataObject::PrepareForNewData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      op->vtkDataObject::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      op->vtkDataObject::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SetExtentTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkExtentTranslator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExtentTranslator"))
    {
    if (ap.IsBound())
      {
      op->SetExtentTranslator(temp0);
      }
    else
      {
      op->vtkDataObject::SetExtentTranslator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetExtentTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkExtentTranslator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtentTranslator();
      }
    else
      {
      tempr = op->vtkDataObject::GetExtentTranslator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      tempr = op->vtkDataObject::GetExtentType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_Crop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Crop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Crop();
      }
    else
      {
      op->vtkDataObject::Crop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  vtkDataSetAttributes *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributes(temp0);
      }
    else
      {
      tempr = op->vtkDataObject::GetAttributes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetAttributesAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      tempr = op->vtkDataObject::GetAttributesAsFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetAttributeTypeForArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeTypeForArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkAbstractArray *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributeTypeForArray(temp0);
      }
    else
      {
      tempr = op->vtkDataObject::GetAttributeTypeForArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

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
      tempr = op->vtkDataObject::GetNumberOfElements(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetAssociationTypeAsString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAssociationTypeAsString");

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkDataObject::GetAssociationTypeAsString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_TYPE_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_TYPE_NAME");

  vtkInformationStringKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::DATA_TYPE_NAME();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_OBJECT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_OBJECT");

  vtkInformationDataObjectKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::DATA_OBJECT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_EXTENT_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_EXTENT_TYPE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::DATA_EXTENT_TYPE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_EXTENT");

  vtkInformationIntegerPointerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::DATA_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_PIECE_NUMBER(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_PIECE_NUMBER");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::DATA_PIECE_NUMBER();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_NUMBER_OF_PIECES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_NUMBER_OF_PIECES");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::DATA_NUMBER_OF_PIECES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_NUMBER_OF_GHOST_LEVELS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_NUMBER_OF_GHOST_LEVELS");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::DATA_NUMBER_OF_GHOST_LEVELS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_RESOLUTION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_RESOLUTION");

  vtkInformationDoubleKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::DATA_RESOLUTION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_TIME_STEPS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_TIME_STEPS");

  vtkInformationDoubleVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::DATA_TIME_STEPS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_POINT_DATA_VECTOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POINT_DATA_VECTOR");

  vtkInformationInformationVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::POINT_DATA_VECTOR();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_CELL_DATA_VECTOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CELL_DATA_VECTOR");

  vtkInformationInformationVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::CELL_DATA_VECTOR();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_VERTEX_DATA_VECTOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "VERTEX_DATA_VECTOR");

  vtkInformationInformationVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::VERTEX_DATA_VECTOR();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_EDGE_DATA_VECTOR(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EDGE_DATA_VECTOR");

  vtkInformationInformationVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::EDGE_DATA_VECTOR();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ARRAY_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ARRAY_TYPE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::FIELD_ARRAY_TYPE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ASSOCIATION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ASSOCIATION");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::FIELD_ASSOCIATION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ATTRIBUTE_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ATTRIBUTE_TYPE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::FIELD_ATTRIBUTE_TYPE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ACTIVE_ATTRIBUTE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ACTIVE_ATTRIBUTE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::FIELD_ACTIVE_ATTRIBUTE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_NUMBER_OF_COMPONENTS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_NUMBER_OF_COMPONENTS");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::FIELD_NUMBER_OF_COMPONENTS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_NUMBER_OF_TUPLES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_NUMBER_OF_TUPLES");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::FIELD_NUMBER_OF_TUPLES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_OPERATION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_OPERATION");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::FIELD_OPERATION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_RANGE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_RANGE");

  vtkInformationDoubleVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::FIELD_RANGE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_PIECE_FIELD_RANGE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PIECE_FIELD_RANGE");

  vtkInformationDoubleVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::PIECE_FIELD_RANGE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ARRAY_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ARRAY_NAME");

  vtkInformationStringKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::FIELD_ARRAY_NAME();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_PIECE_EXTENT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PIECE_EXTENT");

  vtkInformationIntegerVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::PIECE_EXTENT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_NAME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_NAME");

  vtkInformationStringKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::FIELD_NAME();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_ORIGIN(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ORIGIN");

  vtkInformationDoubleVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::ORIGIN();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SPACING(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SPACING");

  vtkInformationDoubleVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::SPACING();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_GEOMETRY_UNMODIFIED(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_GEOMETRY_UNMODIFIED");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::DATA_GEOMETRY_UNMODIFIED();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_SIL(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SIL");

  vtkInformationDataObjectKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkDataObject::SIL();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataObject_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkDataObject::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDataObject_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkDataObject::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataObject_GetData_Methods[] = {
  {NULL, PyvtkDataObject_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkDataObject_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDataObject_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataObject_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkDataObject_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkDataObject_Methods[] = {
  {(char*)"GetClassName", PyvtkDataObject_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataObject_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataObject_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataObject\nC++: vtkDataObject *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataObject_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataObject\nC++: vtkDataObject *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetSource", PyvtkDataObject_GetSource, 1,
   (char*)"V.GetSource() -> vtkSource\nC++: vtkSource *GetSource()\n\nSet/Get the source object creating this data object.\n"},
  {(char*)"SetSource", PyvtkDataObject_SetSource, 1,
   (char*)"V.SetSource(vtkSource)\nC++: void SetSource(vtkSource *s)\n\nSet/Get the source object creating this data object.\n"},
  {(char*)"GetInformation", PyvtkDataObject_GetInformation, 1,
   (char*)"V.GetInformation() -> vtkInformation\nC++: vtkInformation *GetInformation()\n\nSet/Get the information object associated with this data object.\n"},
  {(char*)"SetInformation", PyvtkDataObject_SetInformation, 1,
   (char*)"V.SetInformation(vtkInformation)\nC++: virtual void SetInformation(vtkInformation *)\n\nSet/Get the information object associated with this data object.\n"},
  {(char*)"GetPipelineInformation", PyvtkDataObject_GetPipelineInformation, 1,
   (char*)"V.GetPipelineInformation() -> vtkInformation\nC++: vtkInformation *GetPipelineInformation()\n\nGet/Set the pipeline information object that owns this data\nobject.\n"},
  {(char*)"SetPipelineInformation", PyvtkDataObject_SetPipelineInformation, 1,
   (char*)"V.SetPipelineInformation(vtkInformation)\nC++: virtual void SetPipelineInformation(vtkInformation *)\n\nGet/Set the pipeline information object that owns this data\nobject.\n"},
  {(char*)"GetProducerPort", PyvtkDataObject_GetProducerPort, 1,
   (char*)"V.GetProducerPort() -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetProducerPort()\n\nGet the port currently producing this object.\n"},
  {(char*)"GetMTime", PyvtkDataObject_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nData objects are composite objects and need to check each part\nfor MTime. The information object also needs to be considered.\n"},
  {(char*)"Initialize", PyvtkDataObject_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nRestore data object to initial state,\n"},
  {(char*)"ReleaseData", PyvtkDataObject_ReleaseData, 1,
   (char*)"V.ReleaseData()\nC++: void ReleaseData()\n\nRelease data back to system to conserve memory resource. Used\nduring visualization network execution.  Releasing this data does\nnot make down-stream data invalid, so it does not modify the\nMTime of this data object.\n"},
  {(char*)"ShouldIReleaseData", PyvtkDataObject_ShouldIReleaseData, 1,
   (char*)"V.ShouldIReleaseData() -> int\nC++: int ShouldIReleaseData()\n\nReturn flag indicating whether data should be released after use\nby a filter.\n"},
  {(char*)"GetDataReleased", PyvtkDataObject_GetDataReleased, 1,
   (char*)"V.GetDataReleased() -> int\nC++: int GetDataReleased()\n\nGet the flag indicating the data has been released.\n"},
  {(char*)"SetReleaseDataFlag", PyvtkDataObject_SetReleaseDataFlag, 1,
   (char*)"V.SetReleaseDataFlag(int)\nC++: void SetReleaseDataFlag(int)\n\nTurn on/off flag to control whether this object's data is\nreleased after being used by a filter.\n"},
  {(char*)"GetReleaseDataFlag", PyvtkDataObject_GetReleaseDataFlag, 1,
   (char*)"V.GetReleaseDataFlag() -> int\nC++: int GetReleaseDataFlag()\n\nTurn on/off flag to control whether this object's data is\nreleased after being used by a filter.\n"},
  {(char*)"ReleaseDataFlagOn", PyvtkDataObject_ReleaseDataFlagOn, 1,
   (char*)"V.ReleaseDataFlagOn()\nC++: void ReleaseDataFlagOn()\n\nTurn on/off flag to control whether this object's data is\nreleased after being used by a filter.\n"},
  {(char*)"ReleaseDataFlagOff", PyvtkDataObject_ReleaseDataFlagOff, 1,
   (char*)"V.ReleaseDataFlagOff()\nC++: void ReleaseDataFlagOff()\n\nTurn on/off flag to control whether this object's data is\nreleased after being used by a filter.\n"},
  {(char*)"SetGlobalReleaseDataFlag", PyvtkDataObject_SetGlobalReleaseDataFlag, 1,
   (char*)"V.SetGlobalReleaseDataFlag(int)\nC++: static void SetGlobalReleaseDataFlag(int val)\n\nTurn on/off flag to control whether every object releases its\ndata after being used by a filter.\n"},
  {(char*)"GlobalReleaseDataFlagOn", PyvtkDataObject_GlobalReleaseDataFlagOn, 1,
   (char*)"V.GlobalReleaseDataFlagOn()\nC++: void GlobalReleaseDataFlagOn()\n\nTurn on/off flag to control whether every object releases its\ndata after being used by a filter.\n"},
  {(char*)"GlobalReleaseDataFlagOff", PyvtkDataObject_GlobalReleaseDataFlagOff, 1,
   (char*)"V.GlobalReleaseDataFlagOff()\nC++: void GlobalReleaseDataFlagOff()\n\nTurn on/off flag to control whether every object releases its\ndata after being used by a filter.\n"},
  {(char*)"GetGlobalReleaseDataFlag", PyvtkDataObject_GetGlobalReleaseDataFlag, 1,
   (char*)"V.GetGlobalReleaseDataFlag() -> int\nC++: static int GetGlobalReleaseDataFlag()\n\nTurn on/off flag to control whether every object releases its\ndata after being used by a filter.\n"},
  {(char*)"SetFieldData", PyvtkDataObject_SetFieldData, 1,
   (char*)"V.SetFieldData(vtkFieldData)\nC++: virtual void SetFieldData(vtkFieldData *)\n\nAssign or retrieve a general field data to this data object.\n"},
  {(char*)"GetFieldData", PyvtkDataObject_GetFieldData, 1,
   (char*)"V.GetFieldData() -> vtkFieldData\nC++: vtkFieldData *GetFieldData()\n\nAssign or retrieve a general field data to this data object.\n"},
  {(char*)"Update", PyvtkDataObject_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nProvides opportunity for the data object to insure internal\nconsistency before access. Also causes owning source/filter (if\nany) to update itself. The Update() method is composed of\nUpdateInformation(), PropagateUpdateExtent(),\nTriggerAsynchronousUpdate(), and UpdateData().\n"},
  {(char*)"UpdateInformation", PyvtkDataObject_UpdateInformation, 1,
   (char*)"V.UpdateInformation()\nC++: virtual void UpdateInformation()\n\nWARNING: INTERNAL METHOD - NOT FOR GENERAL USE. THIS METHOD IS\nPART OF THE PIPELINE UPDATE FUNCTIONALITY. Update all the \"easy to\nupdate\" information about the object such as the extent which\nwill be used to control the update. This propagates all the way\nup then back down the pipeline. As a by-product the PipelineMTime\nis updated.\n"},
  {(char*)"PropagateUpdateExtent", PyvtkDataObject_PropagateUpdateExtent, 1,
   (char*)"V.PropagateUpdateExtent()\nC++: virtual void PropagateUpdateExtent()\n\nWARNING: INTERNAL METHOD - NOT FOR GENERAL USE. THIS METHOD IS\nPART OF THE PIPELINE UPDATE FUNCTIONALITY. The update extent for\nthis object is propagated up the pipeline. This propagation may\nearly terminate based on the PipelineMTime.\n"},
  {(char*)"TriggerAsynchronousUpdate", PyvtkDataObject_TriggerAsynchronousUpdate, 1,
   (char*)"V.TriggerAsynchronousUpdate()\nC++: virtual void TriggerAsynchronousUpdate()\n\nWARNING: INTERNAL METHOD - NOT FOR GENERAL USE. THIS METHOD IS\nPART OF THE PIPELINE UPDATE FUNCTIONALITY. Propagate back up the\npipeline for ports and trigger the update on the other side of\nthe port to allow for asynchronous parallel processing in the\npipeline. This propagation may early terminate based on the\nPipelineMTime.\n"},
  {(char*)"UpdateData", PyvtkDataObject_UpdateData, 1,
   (char*)"V.UpdateData()\nC++: virtual void UpdateData()\n\nWARNING: INTERNAL METHOD - NOT FOR GENERAL USE. THIS METHOD IS\nPART OF THE PIPELINE UPDATE FUNCTIONALITY. Propagate the update\nback up the pipeline, and perform the actual work of updating on\nthe way down. When the propagate arrives at a port, block and\nwait for the asynchronous update to finish on the other side.\nThis propagation may early terminate based on the PipelineMTime.\n"},
  {(char*)"GetEstimatedMemorySize", PyvtkDataObject_GetEstimatedMemorySize, 1,
   (char*)"V.GetEstimatedMemorySize() -> int\nC++: virtual unsigned long GetEstimatedMemorySize()\n\nGet the estimated size of this data object itself. Should be\ncalled after UpdateInformation() and PropagateUpdateExtent() have\nboth been called. Should be overridden in a subclass - otherwise\nthe default is to assume that this data object requires no\nmemory. The size is returned in kilobytes.\n"},
  {(char*)"SetUpdateExtent", PyvtkDataObject_SetUpdateExtent, 1,
   (char*)"V.SetUpdateExtent(int, int, int)\nC++: virtual void SetUpdateExtent(int piece, int numPieces,\n    int ghostLevel)\nV.SetUpdateExtent(int, int)\nC++: void SetUpdateExtent(int piece, int numPieces)\nV.SetUpdateExtent(int, int, int, int, int, int)\nC++: virtual void SetUpdateExtent(int x0, int x1, int y0, int y1,\n    int z0, int z1)\nV.SetUpdateExtent([int, int, int, int, int, int])\nC++: virtual void SetUpdateExtent(int extent[6])\n\nA generic way of specifying an update extent.  Subclasses must\ndecide what a piece is.  When the NumberOfPieces is zero, then no\ndata is requested, and the source will not execute.\n"},
  {(char*)"GetUpdateExtent", PyvtkDataObject_GetUpdateExtent, 1,
   (char*)"V.GetUpdateExtent() -> (int, int, int, int, int, int)\nC++: virtual int *GetUpdateExtent()\nV.GetUpdateExtent(int, int, int, int, int, int)\nC++: virtual void GetUpdateExtent(int &x0, int &x1, int &y0,\n    int &y1, int &z0, int &z1)\nV.GetUpdateExtent([int, int, int, int, int, int])\nC++: virtual void GetUpdateExtent(int extent[6])\n\nSet the update extent for data objects that use 3D extents. Using\nthis method on data objects that set extents as pieces (such as\nvtkPolyData or vtkUnstructuredGrid) has no real effect. Don't use\nthe set macro to set the update extent since we don't want this\nobject to be modified just due to a change in update extent. When\nthe volume of the extent is zero (0, -1,..), then no data is\nrequested, and the source will not execute.\n"},
  {(char*)"GetDataObjectType", PyvtkDataObject_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn class name of data type. This is one of\nVTK_STRUCTURED_GRID, VTK_STRUCTURED_POINTS,\nVTK_UNSTRUCTURED_GRID, VTK_POLY_DATA, or VTK_RECTILINEAR_GRID\n(see vtkSetGet.h for definitions). THIS METHOD IS THREAD SAFE\n"},
  {(char*)"GetUpdateTime", PyvtkDataObject_GetUpdateTime, 1,
   (char*)"V.GetUpdateTime() -> int\nC++: unsigned long GetUpdateTime()\n\nUsed by Threaded ports to determine if they should initiate an\nasynchronous update (still in development).\n"},
  {(char*)"SetUpdateExtentToWholeExtent", PyvtkDataObject_SetUpdateExtentToWholeExtent, 1,
   (char*)"V.SetUpdateExtentToWholeExtent()\nC++: void SetUpdateExtentToWholeExtent()\n\nIf the whole input extent is required to generate the requested\noutput extent, this method can be called to set the input update\nextent to the whole input extent. This method assumes that the\nwhole extent is known (that UpdateInformation has been called)\n"},
  {(char*)"GetPipelineMTime", PyvtkDataObject_GetPipelineMTime, 1,
   (char*)"V.GetPipelineMTime() -> int\nC++: unsigned long GetPipelineMTime()\n\nGet the cumulative modified time of everything upstream.  Does\nnot include the MTime of this object.\n"},
  {(char*)"GetActualMemorySize", PyvtkDataObject_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated. The memory size\nreturned is guaranteed to be greater than or equal to the memory\nrequired to represent the data (e.g., extra space in arrays, etc.\nare not included in the return value).\n"},
  {(char*)"CopyInformation", PyvtkDataObject_CopyInformation, 1,
   (char*)"V.CopyInformation(vtkDataObject)\nC++: void CopyInformation(vtkDataObject *data)\n\nCopy the generic information (WholeExtent ...)\n"},
  {(char*)"CopyTypeSpecificInformation", PyvtkDataObject_CopyTypeSpecificInformation, 1,
   (char*)"V.CopyTypeSpecificInformation(vtkDataObject)\nC++: virtual void CopyTypeSpecificInformation(vtkDataObject *data)\n\nBy default, there is no type specific information\n"},
  {(char*)"SetUpdatePiece", PyvtkDataObject_SetUpdatePiece, 1,
   (char*)"V.SetUpdatePiece(int)\nC++: void SetUpdatePiece(int piece)\n\nSet / Get the update piece and the update number of pieces.\nSimilar to update extent in 3D.\n"},
  {(char*)"SetUpdateNumberOfPieces", PyvtkDataObject_SetUpdateNumberOfPieces, 1,
   (char*)"V.SetUpdateNumberOfPieces(int)\nC++: void SetUpdateNumberOfPieces(int num)\n\nSet / Get the update piece and the update number of pieces.\nSimilar to update extent in 3D.\n"},
  {(char*)"GetUpdatePiece", PyvtkDataObject_GetUpdatePiece, 1,
   (char*)"V.GetUpdatePiece() -> int\nC++: virtual int GetUpdatePiece()\n\nSet / Get the update piece and the update number of pieces.\nSimilar to update extent in 3D.\n"},
  {(char*)"GetUpdateNumberOfPieces", PyvtkDataObject_GetUpdateNumberOfPieces, 1,
   (char*)"V.GetUpdateNumberOfPieces() -> int\nC++: virtual int GetUpdateNumberOfPieces()\n\nSet / Get the update piece and the update number of pieces.\nSimilar to update extent in 3D.\n"},
  {(char*)"SetUpdateGhostLevel", PyvtkDataObject_SetUpdateGhostLevel, 1,
   (char*)"V.SetUpdateGhostLevel(int)\nC++: void SetUpdateGhostLevel(int level)\n\nSet / Get the update ghost level and the update number of ghost\nlevels. Similar to update extent in 3D.\n"},
  {(char*)"GetUpdateGhostLevel", PyvtkDataObject_GetUpdateGhostLevel, 1,
   (char*)"V.GetUpdateGhostLevel() -> int\nC++: virtual int GetUpdateGhostLevel()\n\nSet / Get the update ghost level and the update number of ghost\nlevels. Similar to update extent in 3D.\n"},
  {(char*)"SetRequestExactExtent", PyvtkDataObject_SetRequestExactExtent, 1,
   (char*)"V.SetRequestExactExtent(int)\nC++: virtual void SetRequestExactExtent(int flag)\n\nThis request flag indicates whether the requester can handle more\ndata than requested.  Right now it is used in vtkImageData. Image\nfilters can return more data than requested.  The the consumer\ncannot handle this (i.e. DataSetToDataSetFitler) the image will\ncrop itself.  This functionality used to be in\nImageToStructuredPoints.\n"},
  {(char*)"GetRequestExactExtent", PyvtkDataObject_GetRequestExactExtent, 1,
   (char*)"V.GetRequestExactExtent() -> int\nC++: virtual int GetRequestExactExtent()\n\nThis request flag indicates whether the requester can handle more\ndata than requested.  Right now it is used in vtkImageData. Image\nfilters can return more data than requested.  The the consumer\ncannot handle this (i.e. DataSetToDataSetFitler) the image will\ncrop itself.  This functionality used to be in\nImageToStructuredPoints.\n"},
  {(char*)"RequestExactExtentOn", PyvtkDataObject_RequestExactExtentOn, 1,
   (char*)"V.RequestExactExtentOn()\nC++: void RequestExactExtentOn()\n\nThis request flag indicates whether the requester can handle more\ndata than requested.  Right now it is used in vtkImageData. Image\nfilters can return more data than requested.  The the consumer\ncannot handle this (i.e. DataSetToDataSetFitler) the image will\ncrop itself.  This functionality used to be in\nImageToStructuredPoints.\n"},
  {(char*)"RequestExactExtentOff", PyvtkDataObject_RequestExactExtentOff, 1,
   (char*)"V.RequestExactExtentOff()\nC++: void RequestExactExtentOff()\n\nThis request flag indicates whether the requester can handle more\ndata than requested.  Right now it is used in vtkImageData. Image\nfilters can return more data than requested.  The the consumer\ncannot handle this (i.e. DataSetToDataSetFitler) the image will\ncrop itself.  This functionality used to be in\nImageToStructuredPoints.\n"},
  {(char*)"SetWholeExtent", PyvtkDataObject_SetWholeExtent, 1,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: virtual void SetWholeExtent(int x0, int x1, int y0, int y1,\n    int z0, int z1)\nV.SetWholeExtent([int, int, int, int, int, int])\nC++: virtual void SetWholeExtent(int extent[6])\n\nSet/Get the whole extent of this data object. The whole extent is\nmeta data for structured data sets. It gets set by the source\nduring the update information call.\n"},
  {(char*)"GetWholeExtent", PyvtkDataObject_GetWholeExtent, 1,
   (char*)"V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: virtual int *GetWholeExtent()\nV.GetWholeExtent(int, int, int, int, int, int)\nC++: virtual void GetWholeExtent(int &x0, int &x1, int &y0,\n    int &y1, int &z0, int &z1)\nV.GetWholeExtent([int, int, int, int, int, int])\nC++: virtual void GetWholeExtent(int extent[6])\n\nSet/Get the whole extent of this data object. The whole extent is\nmeta data for structured data sets. It gets set by the source\nduring the update information call.\n"},
  {(char*)"SetWholeBoundingBox", PyvtkDataObject_SetWholeBoundingBox, 1,
   (char*)"V.SetWholeBoundingBox(float, float, float, float, float, float)\nC++: virtual void SetWholeBoundingBox(double x0, double x1,\n    double y0, double y1, double z0, double z1)\nV.SetWholeBoundingBox([float, float, float, float, float, float])\nC++: virtual void SetWholeBoundingBox(double bb[6])\n\nSet/Get the whole bounding box of this data object. The whole\nwhole bounding box is meta data for data sets It gets set by the\nsource during the update information call.\n"},
  {(char*)"GetWholeBoundingBox", PyvtkDataObject_GetWholeBoundingBox, 1,
   (char*)"V.GetWholeBoundingBox() -> (float, float, float, float, float,\n    float)\nC++: virtual double *GetWholeBoundingBox()\nV.GetWholeBoundingBox(float, float, float, float, float, float)\nC++: virtual void GetWholeBoundingBox(double &x0, double &x1,\n    double &y0, double &y1, double &z0, double &z1)\nV.GetWholeBoundingBox([float, float, float, float, float, float])\nC++: virtual void GetWholeBoundingBox(double extent[6])\n\nSet/Get the whole bounding box of this data object. The whole\nwhole bounding box is meta data for data sets It gets set by the\nsource during the update information call.\n"},
  {(char*)"SetMaximumNumberOfPieces", PyvtkDataObject_SetMaximumNumberOfPieces, 1,
   (char*)"V.SetMaximumNumberOfPieces(int)\nC++: virtual void SetMaximumNumberOfPieces(int)\n\nSet/Get the maximum number of pieces that can be requested. The\nmaximum number of pieces is meta data for unstructured data sets.\nIt gets set by the source during the update information call. A\nvalue of -1 indicates that there is no maximum.\n"},
  {(char*)"GetMaximumNumberOfPieces", PyvtkDataObject_GetMaximumNumberOfPieces, 1,
   (char*)"V.GetMaximumNumberOfPieces() -> int\nC++: virtual int GetMaximumNumberOfPieces()\n\nSet/Get the maximum number of pieces that can be requested. The\nmaximum number of pieces is meta data for unstructured data sets.\nIt gets set by the source during the update information call. A\nvalue of -1 indicates that there is no maximum.\n"},
  {(char*)"CopyInformationToPipeline", PyvtkDataObject_CopyInformationToPipeline, 1,
   (char*)"V.CopyInformationToPipeline(vtkInformation, vtkInformation,\n    vtkInformation, int)\nC++: virtual void CopyInformationToPipeline(\n    vtkInformation *request, vtkInformation *input,\n    vtkInformation *output, int forceCopy)\nV.CopyInformationToPipeline(vtkInformation, vtkInformation)\nC++: void CopyInformationToPipeline(vtkInformation *request,\n    vtkInformation *input)\n\nCopy information about this data object to the output information\nfrom its own Information for the given request.  If the second\nargument is not NULL then it is the pipeline information object\nfor the input to this data object's producer. If forceCopy is\ntrue, information is copied even if it exists in the output.\n"},
  {(char*)"CopyInformationFromPipeline", PyvtkDataObject_CopyInformationFromPipeline, 1,
   (char*)"V.CopyInformationFromPipeline(vtkInformation)\nC++: virtual void CopyInformationFromPipeline(\n    vtkInformation *request)\n\nCopy information about this data object from the\nPipelineInformation to its own Information for the given request.\n"},
  {(char*)"GetActiveFieldInformation", PyvtkDataObject_GetActiveFieldInformation, 1,
   (char*)"V.GetActiveFieldInformation(vtkInformation, int, int)\n    -> vtkInformation\nC++: static vtkInformation *GetActiveFieldInformation(\n    vtkInformation *info, int fieldAssociation, int attributeType)\n\nReturn the information object within the input information\nobject's field data corresponding to the specified association\n(FIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS) and\nattribute (SCALARS, VECTORS, NORMALS, TCOORDS, or TENSORS)\n"},
  {(char*)"GetNamedFieldInformation", PyvtkDataObject_GetNamedFieldInformation, 1,
   (char*)"V.GetNamedFieldInformation(vtkInformation, int, string)\n    -> vtkInformation\nC++: static vtkInformation *GetNamedFieldInformation(\n    vtkInformation *info, int fieldAssociation, const char *name)\n\nReturn the information object within the input information\nobject's field data corresponding to the specified association\n(FIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS) and name.\n"},
  {(char*)"RemoveNamedFieldInformation", PyvtkDataObject_RemoveNamedFieldInformation, 1,
   (char*)"V.RemoveNamedFieldInformation(vtkInformation, int, string)\nC++: static void RemoveNamedFieldInformation(vtkInformation *info,\n     int fieldAssociation, const char *name)\n\nRemove the info associated with an array\n"},
  {(char*)"SetActiveAttribute", PyvtkDataObject_SetActiveAttribute, 1,
   (char*)"V.SetActiveAttribute(vtkInformation, int, string, int)\n    -> vtkInformation\nC++: static vtkInformation *SetActiveAttribute(\n    vtkInformation *info, int fieldAssociation,\n    const char *attributeName, int attributeType)\n\nSet the named array to be the active field for the specified type\n(SCALARS, VECTORS, NORMALS, TCOORDS, or TENSORS) and association\n(FIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS).  Returns\nthe active field information object and creates on entry if one\nnot found.\n"},
  {(char*)"SetActiveAttributeInfo", PyvtkDataObject_SetActiveAttributeInfo, 1,
   (char*)"V.SetActiveAttributeInfo(vtkInformation, int, int, string, int,\n    int, int)\nC++: static void SetActiveAttributeInfo(vtkInformation *info,\n    int fieldAssociation, int attributeType, const char *name,\n    int arrayType, int numComponents, int numTuples)\n\nSet the name, array type, number of components, and number of\ntuples within the passed information object for the active\nattribute of type attributeType (in specified association,\nFIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS).  If there\nis not an active attribute of the specified type, an entry in the\ninformation object is created.  If arrayType, numComponents, or\nnumTuples equal to -1, or name=NULL the value is not changed.\n"},
  {(char*)"SetPointDataActiveScalarInfo", PyvtkDataObject_SetPointDataActiveScalarInfo, 1,
   (char*)"V.SetPointDataActiveScalarInfo(vtkInformation, int, int)\nC++: static void SetPointDataActiveScalarInfo(\n    vtkInformation *info, int arrayType, int numComponents)\n\nConvenience version of previous method for use (primarily) by the\nImaging filters. If arrayType or numComponents == -1, the value\nis not changed.\n"},
  {(char*)"DataHasBeenGenerated", PyvtkDataObject_DataHasBeenGenerated, 1,
   (char*)"V.DataHasBeenGenerated()\nC++: void DataHasBeenGenerated()\n\nThis method is called by the source when it executes to generate\ndata. It is sort of the opposite of ReleaseData. It sets the\nDataReleased flag to 0, and sets a new UpdateTime.\n"},
  {(char*)"PrepareForNewData", PyvtkDataObject_PrepareForNewData, 1,
   (char*)"V.PrepareForNewData()\nC++: virtual void PrepareForNewData()\n\nmake the output data ready for new data to be inserted. For most\nobjects we just call Initialize. But for vtkImageData we leave\nthe old data in case the memory can be reused.\n"},
  {(char*)"ShallowCopy", PyvtkDataObject_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nShallow and Deep copy.  These copy the data, but not any of the\npipeline connections.\n"},
  {(char*)"DeepCopy", PyvtkDataObject_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nShallow and Deep copy.  These copy the data, but not any of the\npipeline connections.\n"},
  {(char*)"SetExtentTranslator", PyvtkDataObject_SetExtentTranslator, 1,
   (char*)"V.SetExtentTranslator(vtkExtentTranslator)\nC++: void SetExtentTranslator(vtkExtentTranslator *translator)\n\nAn object that will translate pieces into structured extents.\n"},
  {(char*)"GetExtentTranslator", PyvtkDataObject_GetExtentTranslator, 1,
   (char*)"V.GetExtentTranslator() -> vtkExtentTranslator\nC++: vtkExtentTranslator *GetExtentTranslator()\n\nAn object that will translate pieces into structured extents.\n"},
  {(char*)"GetExtentType", PyvtkDataObject_GetExtentType, 1,
   (char*)"V.GetExtentType() -> int\nC++: virtual int GetExtentType()\n\nThe ExtentType will be left as VTK_PIECES_EXTENT for data objects\nsuch as vtkPolyData and vtkUnstructuredGrid. The ExtentType will\nbe changed to VTK_3D_EXTENT for data objects with 3D structure\nsuch as vtkImageData (and its subclass vtkStructuredPoints),\nvtkRectilinearGrid, and vtkStructuredGrid. The default is the\nhave an extent in pieces, with only one piece (no streaming\npossible).\n"},
  {(char*)"Crop", PyvtkDataObject_Crop, 1,
   (char*)"V.Crop()\nC++: virtual void Crop()\n\nThis method crops the data object (if necesary) so that the\nextent matches the update extent.\n"},
  {(char*)"GetAttributes", PyvtkDataObject_GetAttributes, 1,
   (char*)"V.GetAttributes(int) -> vtkDataSetAttributes\nC++: virtual vtkDataSetAttributes *GetAttributes(int type)\n\nReturns the attributes of the data object of the specified\nattribute type. The type may be:  POINT  - Defined in vtkDataSet\nsubclasses. CELL   - Defined in vtkDataSet subclasses. VERTEX -\nDefined in vtkGraph subclasses. EDGE   - Defined in vtkGraph\nsubclasses. ROW    - Defined in vtkTable.  The other attribute\ntype, FIELD, will return NULL since field data is stored as a\nvtkFieldData instance, not a vtkDataSetAttributes instance. To\nretrieve field data, use GetAttributesAsFieldData.\n"},
  {(char*)"GetAttributesAsFieldData", PyvtkDataObject_GetAttributesAsFieldData, 1,
   (char*)"V.GetAttributesAsFieldData(int) -> vtkFieldData\nC++: virtual vtkFieldData *GetAttributesAsFieldData(int type)\n\nReturns the attributes of the data object as a vtkFieldData. This\nreturns non-null values in all the same cases as GetAttributes,\nin addition to the case of FIELD, which will return the field\ndata for any vtkDataObject subclass.\n"},
  {(char*)"GetAttributeTypeForArray", PyvtkDataObject_GetAttributeTypeForArray, 1,
   (char*)"V.GetAttributeTypeForArray(vtkAbstractArray) -> int\nC++: virtual int GetAttributeTypeForArray(vtkAbstractArray *arr)\n\nRetrieves the attribute type that an array came from. This is\nuseful for obtaining which attribute type a input array to an\nalgorithm came from (retrieved from\nGetInputAbstractArrayToProcesss).\n"},
  {(char*)"GetNumberOfElements", PyvtkDataObject_GetNumberOfElements, 1,
   (char*)"V.GetNumberOfElements(int) -> int\nC++: virtual vtkIdType GetNumberOfElements(int type)\n\nGet the number of elements for a specific attribute type (POINT,\nCELL, etc.).\n"},
  {(char*)"GetAssociationTypeAsString", PyvtkDataObject_GetAssociationTypeAsString, 1,
   (char*)"V.GetAssociationTypeAsString(int) -> string\nC++: static const char *GetAssociationTypeAsString(\n    int associationType)\n\nGiven an integer association type, this static method returns a\nstring type for the attribute (i.e. type = 0: returns \"Points\").\n"},
  {(char*)"DATA_TYPE_NAME", PyvtkDataObject_DATA_TYPE_NAME, 1,
   (char*)"V.DATA_TYPE_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *DATA_TYPE_NAME()\n\n"},
  {(char*)"DATA_OBJECT", PyvtkDataObject_DATA_OBJECT, 1,
   (char*)"V.DATA_OBJECT() -> vtkInformationDataObjectKey\nC++: static vtkInformationDataObjectKey *DATA_OBJECT()\n\n"},
  {(char*)"DATA_EXTENT_TYPE", PyvtkDataObject_DATA_EXTENT_TYPE, 1,
   (char*)"V.DATA_EXTENT_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_EXTENT_TYPE()\n\n"},
  {(char*)"DATA_EXTENT", PyvtkDataObject_DATA_EXTENT, 1,
   (char*)"V.DATA_EXTENT() -> vtkInformationIntegerPointerKey\nC++: static vtkInformationIntegerPointerKey *DATA_EXTENT()\n\n"},
  {(char*)"DATA_PIECE_NUMBER", PyvtkDataObject_DATA_PIECE_NUMBER, 1,
   (char*)"V.DATA_PIECE_NUMBER() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_PIECE_NUMBER()\n\n"},
  {(char*)"DATA_NUMBER_OF_PIECES", PyvtkDataObject_DATA_NUMBER_OF_PIECES, 1,
   (char*)"V.DATA_NUMBER_OF_PIECES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_NUMBER_OF_PIECES()\n\n"},
  {(char*)"DATA_NUMBER_OF_GHOST_LEVELS", PyvtkDataObject_DATA_NUMBER_OF_GHOST_LEVELS, 1,
   (char*)"V.DATA_NUMBER_OF_GHOST_LEVELS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_NUMBER_OF_GHOST_LEVELS(\n    )\n\n"},
  {(char*)"DATA_RESOLUTION", PyvtkDataObject_DATA_RESOLUTION, 1,
   (char*)"V.DATA_RESOLUTION() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *DATA_RESOLUTION()\n\n"},
  {(char*)"DATA_TIME_STEPS", PyvtkDataObject_DATA_TIME_STEPS, 1,
   (char*)"V.DATA_TIME_STEPS() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *DATA_TIME_STEPS()\n\n"},
  {(char*)"POINT_DATA_VECTOR", PyvtkDataObject_POINT_DATA_VECTOR, 1,
   (char*)"V.POINT_DATA_VECTOR() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *POINT_DATA_VECTOR(\n    )\n\n"},
  {(char*)"CELL_DATA_VECTOR", PyvtkDataObject_CELL_DATA_VECTOR, 1,
   (char*)"V.CELL_DATA_VECTOR() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *CELL_DATA_VECTOR()\n\n"},
  {(char*)"VERTEX_DATA_VECTOR", PyvtkDataObject_VERTEX_DATA_VECTOR, 1,
   (char*)"V.VERTEX_DATA_VECTOR() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *VERTEX_DATA_VECTOR(\n    )\n\n"},
  {(char*)"EDGE_DATA_VECTOR", PyvtkDataObject_EDGE_DATA_VECTOR, 1,
   (char*)"V.EDGE_DATA_VECTOR() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *EDGE_DATA_VECTOR()\n\n"},
  {(char*)"FIELD_ARRAY_TYPE", PyvtkDataObject_FIELD_ARRAY_TYPE, 1,
   (char*)"V.FIELD_ARRAY_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ARRAY_TYPE()\n\n"},
  {(char*)"FIELD_ASSOCIATION", PyvtkDataObject_FIELD_ASSOCIATION, 1,
   (char*)"V.FIELD_ASSOCIATION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ASSOCIATION()\n\n"},
  {(char*)"FIELD_ATTRIBUTE_TYPE", PyvtkDataObject_FIELD_ATTRIBUTE_TYPE, 1,
   (char*)"V.FIELD_ATTRIBUTE_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ATTRIBUTE_TYPE()\n\n"},
  {(char*)"FIELD_ACTIVE_ATTRIBUTE", PyvtkDataObject_FIELD_ACTIVE_ATTRIBUTE, 1,
   (char*)"V.FIELD_ACTIVE_ATTRIBUTE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ACTIVE_ATTRIBUTE()\n\n"},
  {(char*)"FIELD_NUMBER_OF_COMPONENTS", PyvtkDataObject_FIELD_NUMBER_OF_COMPONENTS, 1,
   (char*)"V.FIELD_NUMBER_OF_COMPONENTS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_NUMBER_OF_COMPONENTS()\n\n"},
  {(char*)"FIELD_NUMBER_OF_TUPLES", PyvtkDataObject_FIELD_NUMBER_OF_TUPLES, 1,
   (char*)"V.FIELD_NUMBER_OF_TUPLES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_NUMBER_OF_TUPLES()\n\n"},
  {(char*)"FIELD_OPERATION", PyvtkDataObject_FIELD_OPERATION, 1,
   (char*)"V.FIELD_OPERATION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_OPERATION()\n\n"},
  {(char*)"FIELD_RANGE", PyvtkDataObject_FIELD_RANGE, 1,
   (char*)"V.FIELD_RANGE() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *FIELD_RANGE()\n\n"},
  {(char*)"PIECE_FIELD_RANGE", PyvtkDataObject_PIECE_FIELD_RANGE, 1,
   (char*)"V.PIECE_FIELD_RANGE() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *PIECE_FIELD_RANGE()\n\n"},
  {(char*)"FIELD_ARRAY_NAME", PyvtkDataObject_FIELD_ARRAY_NAME, 1,
   (char*)"V.FIELD_ARRAY_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *FIELD_ARRAY_NAME()\n\n"},
  {(char*)"PIECE_EXTENT", PyvtkDataObject_PIECE_EXTENT, 1,
   (char*)"V.PIECE_EXTENT() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *PIECE_EXTENT()\n\n"},
  {(char*)"FIELD_NAME", PyvtkDataObject_FIELD_NAME, 1,
   (char*)"V.FIELD_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *FIELD_NAME()\n\n"},
  {(char*)"ORIGIN", PyvtkDataObject_ORIGIN, 1,
   (char*)"V.ORIGIN() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *ORIGIN()\n\n"},
  {(char*)"SPACING", PyvtkDataObject_SPACING, 1,
   (char*)"V.SPACING() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *SPACING()\n\n"},
  {(char*)"DATA_GEOMETRY_UNMODIFIED", PyvtkDataObject_DATA_GEOMETRY_UNMODIFIED, 1,
   (char*)"V.DATA_GEOMETRY_UNMODIFIED() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_GEOMETRY_UNMODIFIED()\n\n"},
  {(char*)"SIL", PyvtkDataObject_SIL, 1,
   (char*)"V.SIL() -> vtkInformationDataObjectKey\nC++: static vtkInformationDataObjectKey *SIL()\n\n"},
  {(char*)"GetData", PyvtkDataObject_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkDataObject\nC++: static vtkDataObject *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkDataObject\nC++: static vtkDataObject *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataObject_StaticNew()
{
  return vtkDataObject::New();
}

PyObject *PyVTKClass_vtkDataObjectNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataObject_StaticNew,
    PyvtkDataObject_Methods,
    "vtkDataObject", modulename,
    NULL, NULL,
    PyvtkDataObject_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"FIELD_ASSOCIATION_POINTS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"FIELD_ASSOCIATION_CELLS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"FIELD_ASSOCIATION_NONE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"FIELD_ASSOCIATION_POINTS_THEN_CELLS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"FIELD_ASSOCIATION_VERTICES", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"FIELD_ASSOCIATION_EDGES", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"FIELD_ASSOCIATION_ROWS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"NUMBER_OF_ASSOCIATIONS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"POINT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"CELL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"FIELD", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"POINT_THEN_CELL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"VERTEX", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"EDGE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"ROW", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"NUMBER_OF_ATTRIBUTE_TYPES", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"FIELD_OPERATION_PRESERVED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"FIELD_OPERATION_REINTERPOLATED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"FIELD_OPERATION_MODIFIED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"FIELD_OPERATION_REMOVED", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkDataObject_Doc()
{
  static const char *docstring[] = {
    "vtkDataObject - general representation of visualization data\n\n",
    "Superclass: vtkObject\n\n",
    "vtkDataObject is an general representation of visualization data. It\nserves to encapsulate instance variables and methods for\nvisualization network execution, as well as representing data\nconsisting of a field (i.e., just an unstructured pile of data). This\nis to be compared with a vtkDataSet, which is data with geometric\nand/or topological structure.\n\nvtkDataObjects are used to represent arbitrar",
    "y repositories of data\nvia the vtkFieldData instance variable. These data must be eventually\nmapped into a concrete subclass of vtkDataSet before they can\nactually be displayed.\n\nSee Also:\n\nvtkDataSet vtkFieldData vtkDataObjectSource vtkDataObjectFilter\nvtkDataObjectMapper vtkDataObjectToDataSet\nvtkFieldDataToAttributeDataFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataObject(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataObjectNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataObject", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PIECES_EXTENT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_3D_EXTENT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TIME_EXTENT", o) != 0)
    {
    Py_DECREF(o);
    }

}

