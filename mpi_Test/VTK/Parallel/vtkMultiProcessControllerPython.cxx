// python wrapper for vtkMultiProcessController
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
#include "vtkMultiProcessController.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMultiProcessController(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMultiProcessController(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMultiProcessControllerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMultiProcessControllerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMultiProcessController_Doc();


static PyObject *
PyvtkMultiProcessController_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

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
      tempr = op->vtkMultiProcessController::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

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
      tempr = op->vtkMultiProcessController::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMultiProcessController::NewInstance();
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
PyvtkMultiProcessController_Finalize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Finalize();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Finalize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->Finalize(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Finalize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMultiProcessController_Finalize_s1(self, args);
    case 1:
      return PyvtkMultiProcessController_Finalize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Finalize");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_SetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfProcesses(temp0);
      }
    else
      {
      op->vtkMultiProcessController::SetNumberOfProcesses(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfProcesses();
      }
    else
      {
      tempr = op->vtkMultiProcessController::GetNumberOfProcesses();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_SetSingleProcessObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleProcessObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkProcess *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProcess"))
    {
    if (ap.IsBound())
      {
      op->SetSingleProcessObject(temp0);
      }
    else
      {
      op->vtkMultiProcessController::SetSingleProcessObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->SingleMethodExecute();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->MultipleMethodExecute();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetLocalProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLocalProcessId();
      }
    else
      {
      tempr = op->vtkMultiProcessController::GetLocalProcessId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetGlobalController(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalController");

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkMultiProcessController::GetGlobalController();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_CreateOutputWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->CreateOutputWindow();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_CreateSubController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateSubController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkProcessGroup *temp0 = NULL;
  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProcessGroup"))
    {
    if (ap.IsBound())
      {
      tempr = op->CreateSubController(temp0);
      }
    else
      {
      tempr = op->vtkMultiProcessController::CreateSubController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_PartitionController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PartitionController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  int temp1;
  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->PartitionController(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMultiProcessController::PartitionController(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_RemoveFirstRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFirstRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->RemoveFirstRMI(temp0);
      }
    else
      {
      tempr = op->vtkMultiProcessController::RemoveFirstRMI(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_RemoveRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->RemoveRMI(temp0);
      }
    else
      {
      tempr = op->vtkMultiProcessController::RemoveRMI(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_RemoveAllRMICallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRMICallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllRMICallbacks(temp0);
      }
    else
      {
      op->vtkMultiProcessController::RemoveAllRMICallbacks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_RemoveRMICallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRMICallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long temp0;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->RemoveRMICallback(temp0);
      }
    else
      {
      tempr = op->vtkMultiProcessController::RemoveRMICallback(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_TriggerRMI_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  void  *temp1 = NULL;
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
      op->TriggerRMI(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkMultiProcessController::TriggerRMI(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMI_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
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
      op->TriggerRMI(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMultiProcessController::TriggerRMI(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMI_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->TriggerRMI(temp0, temp1);
      }
    else
      {
      op->vtkMultiProcessController::TriggerRMI(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMI(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkMultiProcessController_TriggerRMI_s1(self, args);
    case 3:
      return PyvtkMultiProcessController_TriggerRMI_s2(self, args);
    case 2:
      return PyvtkMultiProcessController_TriggerRMI_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TriggerRMI");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_TriggerBreakRMIs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerBreakRMIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TriggerBreakRMIs();
      }
    else
      {
      op->vtkMultiProcessController::TriggerBreakRMIs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_TriggerRMIOnAllChildren_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMIOnAllChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  void  *temp0 = NULL;
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
      op->TriggerRMIOnAllChildren(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMultiProcessController::TriggerRMIOnAllChildren(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMIOnAllChildren_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMIOnAllChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->TriggerRMIOnAllChildren(temp0, temp1);
      }
    else
      {
      op->vtkMultiProcessController::TriggerRMIOnAllChildren(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMIOnAllChildren_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMIOnAllChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->TriggerRMIOnAllChildren(temp0);
      }
    else
      {
      op->vtkMultiProcessController::TriggerRMIOnAllChildren(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMIOnAllChildren(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkMultiProcessController_TriggerRMIOnAllChildren_s1(self, args);
    case 2:
      return PyvtkMultiProcessController_TriggerRMIOnAllChildren_s2(self, args);
    case 1:
      return PyvtkMultiProcessController_TriggerRMIOnAllChildren_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "TriggerRMIOnAllChildren");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_ProcessRMIs_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessRMIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  int temp1 = 0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      tempr = op->ProcessRMIs(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMultiProcessController::ProcessRMIs(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_ProcessRMIs_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessRMIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->ProcessRMIs();
      }
    else
      {
      tempr = op->vtkMultiProcessController::ProcessRMIs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_ProcessRMIs(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
      return PyvtkMultiProcessController_ProcessRMIs_s1(self, args);
    case 0:
      return PyvtkMultiProcessController_ProcessRMIs_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ProcessRMIs");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_SetBreakFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBreakFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBreakFlag(temp0);
      }
    else
      {
      op->vtkMultiProcessController::SetBreakFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetBreakFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBreakFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBreakFlag();
      }
    else
      {
      tempr = op->vtkMultiProcessController::GetBreakFlag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkCommunicator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCommunicator();
      }
    else
      {
      tempr = op->vtkMultiProcessController::GetCommunicator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetBreakRMITag(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBreakRMITag");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkMultiProcessController::GetBreakRMITag();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetRMITag(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRMITag");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkMultiProcessController::GetRMITag();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetRMIArgTag(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRMIArgTag");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkMultiProcessController::GetRMIArgTag();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Barrier();
      }
    else
      {
      op->vtkMultiProcessController::Barrier();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_SetGlobalController(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalController");

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    vtkMultiProcessController::SetGlobalController(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_Send_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->Send(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkMultiProcessController::Send(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Send_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataObject *temp0 = NULL;
  int temp1;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->Send(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkMultiProcessController::Send(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Send_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  int temp1;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->Send(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkMultiProcessController::Send(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_Send_Methods[] = {
  {NULL, PyvtkMultiProcessController_Send_s2, 1,
   (char*)"@Oii *vtkDataObject"},
  {NULL, PyvtkMultiProcessController_Send_s3, 1,
   (char*)"@Oii *vtkDataArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiProcessController_Send(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_Send_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkMultiProcessController_Send_s1(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Send");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_Receive_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->Receive(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkMultiProcessController::Receive(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Receive_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataObject *temp0 = NULL;
  int temp1;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->Receive(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkMultiProcessController::Receive(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Receive_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  int temp1;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->Receive(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkMultiProcessController::Receive(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_Receive_Methods[] = {
  {NULL, PyvtkMultiProcessController_Receive_s2, 1,
   (char*)"@Oii *vtkDataObject"},
  {NULL, PyvtkMultiProcessController_Receive_s3, 1,
   (char*)"@Oii *vtkDataArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiProcessController_Receive(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_Receive_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkMultiProcessController_Receive_s1(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Receive");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_ReceiveDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  int temp1;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->ReceiveDataObject(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMultiProcessController::ReceiveDataObject(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCount();
      }
    else
      {
      tempr = op->vtkMultiProcessController::GetCount();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_Broadcast_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->Broadcast(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkMultiProcessController::Broadcast(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Broadcast_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataObject *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->Broadcast(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMultiProcessController::Broadcast(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Broadcast_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->Broadcast(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMultiProcessController::Broadcast(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_Broadcast_Methods[] = {
  {NULL, PyvtkMultiProcessController_Broadcast_s2, 1,
   (char*)"@Oi *vtkDataObject"},
  {NULL, PyvtkMultiProcessController_Broadcast_s3, 1,
   (char*)"@Oi *vtkDataArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkMultiProcessController_Broadcast(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_Broadcast_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkMultiProcessController_Broadcast_s1(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Broadcast");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_Gather_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkIdType temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->Gather(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkMultiProcessController::Gather(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Gather_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->Gather(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkMultiProcessController::Gather(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Gather(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkMultiProcessController_Gather_s1(self, args);
    case 3:
      return PyvtkMultiProcessController_Gather_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Gather");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_GatherV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->GatherV(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkMultiProcessController::GatherV(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_Scatter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkIdType temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->Scatter(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkMultiProcessController::Scatter(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Scatter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->Scatter(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkMultiProcessController::Scatter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Scatter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkMultiProcessController_Scatter_s1(self, args);
    case 3:
      return PyvtkMultiProcessController_Scatter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Scatter");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_AllGather_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkIdType temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->AllGather(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkMultiProcessController::AllGather(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGather_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->AllGather(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMultiProcessController::AllGather(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGather(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkMultiProcessController_AllGather_s1(self, args);
    case 2:
      return PyvtkMultiProcessController_AllGather_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AllGather");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_AllGatherV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->AllGatherV(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMultiProcessController::AllGatherV(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiProcessController_Reduce_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkIdType temp2;
  int temp3;
  int temp4;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      tempr = op->Reduce(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkMultiProcessController::Reduce(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Reduce_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->Reduce(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkMultiProcessController::Reduce(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Reduce(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkMultiProcessController_Reduce_s1(self, args);
    case 4:
      return PyvtkMultiProcessController_Reduce_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Reduce");
  return NULL;
}



static PyObject *
PyvtkMultiProcessController_AllReduce_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  vtkIdType temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->AllReduce(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkMultiProcessController::AllReduce(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllReduce_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->AllReduce(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkMultiProcessController::AllReduce(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllReduce(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkMultiProcessController_AllReduce_s1(self, args);
    case 3:
      return PyvtkMultiProcessController_AllReduce_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AllReduce");
  return NULL;
}


static PyMethodDef PyvtkMultiProcessController_Methods[] = {
  {(char*)"GetClassName", PyvtkMultiProcessController_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMultiProcessController_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMultiProcessController_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMultiProcessController\nC++: vtkMultiProcessController *NewInstance()\n\n"},
  {(char*)"Finalize", PyvtkMultiProcessController_Finalize, 1,
   (char*)"V.Finalize()\nC++: virtual void Finalize()\nV.Finalize(int)\nC++: virtual void Finalize(int finalizedExternally)\n\nThis method is for cleaning up. If a subclass needs to clean up\nprocess communication (i.e. MPI) it would over ride this method.\n"},
  {(char*)"SetNumberOfProcesses", PyvtkMultiProcessController_SetNumberOfProcesses, 1,
   (char*)"V.SetNumberOfProcesses(int)\nC++: void SetNumberOfProcesses(int num)\n\nSet the number of processes you will be using.  This defaults to\nthe maximum number available.  If you set this to a value higher\nthan the default, you will get an error.\n"},
  {(char*)"GetNumberOfProcesses", PyvtkMultiProcessController_GetNumberOfProcesses, 1,
   (char*)"V.GetNumberOfProcesses() -> int\nC++: int GetNumberOfProcesses()\n\nSet the number of processes you will be using.  This defaults to\nthe maximum number available.  If you set this to a value higher\nthan the default, you will get an error.\n"},
  {(char*)"SetSingleProcessObject", PyvtkMultiProcessController_SetSingleProcessObject, 1,
   (char*)"V.SetSingleProcessObject(vtkProcess)\nC++: void SetSingleProcessObject(vtkProcess *p)\n\nObject-oriented flavor of SetSingleMethod(). Instead of passing\nsome function pointer and user data, a vtkProcess object is\npassed where the method to execute is Execute() and the data the\nobject itself.\n"},
  {(char*)"SingleMethodExecute", PyvtkMultiProcessController_SingleMethodExecute, 1,
   (char*)"V.SingleMethodExecute()\nC++: virtual void SingleMethodExecute()\n\nExecute the SingleMethod (as define by SetSingleMethod) using\nthis->NumberOfProcesses processes.  This will only return when\nall the processes finish executing their methods.\n"},
  {(char*)"MultipleMethodExecute", PyvtkMultiProcessController_MultipleMethodExecute, 1,
   (char*)"V.MultipleMethodExecute()\nC++: virtual void MultipleMethodExecute()\n\nExecute the MultipleMethods (as define by calling\nSetMultipleMethod for each of the required\nthis->NumberOfProcesses methods) using this->NumberOfProcesses\nprocesses.\n"},
  {(char*)"GetLocalProcessId", PyvtkMultiProcessController_GetLocalProcessId, 1,
   (char*)"V.GetLocalProcessId() -> int\nC++: int GetLocalProcessId()\n\nTells you which process [0, NumProcess) you are in.\n"},
  {(char*)"GetGlobalController", PyvtkMultiProcessController_GetGlobalController, 1,
   (char*)"V.GetGlobalController() -> vtkMultiProcessController\nC++: static vtkMultiProcessController *GetGlobalController()\n\nThis convenience method returns the controller associated with\nthe local process.  It returns NULL until the processes are\nspawned. It is better if you hang on to the controller passed as\nan argument to the SingleMethod or MultipleMethod functions.\n"},
  {(char*)"CreateOutputWindow", PyvtkMultiProcessController_CreateOutputWindow, 1,
   (char*)"V.CreateOutputWindow()\nC++: virtual void CreateOutputWindow()\n\nThis method can be used to tell the controller to create a\nspecial output window in which all messages are preceded by the\nprocess id.\n"},
  {(char*)"CreateSubController", PyvtkMultiProcessController_CreateSubController, 1,
   (char*)"V.CreateSubController(vtkProcessGroup)\n    -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *CreateSubController(\n    vtkProcessGroup *group)\n\nCreates a new controller with the processes specified by the\ngiven group. The new controller will already be initialized for\nyou.  You are responsible for deleting the controller once you\nare done.  It is invalid to pass this method a group with a\ndifferent communicator than is used by this controller.  This\noperation is collective accross all processes defined in the\ngroup.  It is undefined what will happen if the group is not the\nsame on all processes.  This method must be called by all\nprocesses in the controller regardless of whether they are in the\ngroup.  NULL is returned on all process not in the group.\n"},
  {(char*)"PartitionController", PyvtkMultiProcessController_PartitionController, 1,
   (char*)"V.PartitionController(int, int) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *PartitionController(\n    int localColor, int localKey)\n\nPartitions this controller based on a coloring.  That is, each\nprocess passes in a color.  All processes with the same color are\ngrouped into the same partition.  The processes are ordered by\ntheir self-assigned key. Lower keys have lower process ids.  Ties\nare broken by the current process ids.  (For example, if all the\nkeys are 0, then the resulting processes will be ordered in the\nsame way.)  This method returns a new controller to each process\nthat represents the local partition.  This is basically the same\noperation as MPI_Comm_split.\n"},
  {(char*)"RemoveFirstRMI", PyvtkMultiProcessController_RemoveFirstRMI, 1,
   (char*)"V.RemoveFirstRMI(int) -> int\nC++: int RemoveFirstRMI(int tag)\n\nRemove the first RMI matching the tag.\n"},
  {(char*)"RemoveRMI", PyvtkMultiProcessController_RemoveRMI, 1,
   (char*)"V.RemoveRMI(int) -> int\nC++: int RemoveRMI(unsigned long id)\n\nRemove the  RMI matching the id. The id is the same id returned\nby AddRMI().\n"},
  {(char*)"RemoveAllRMICallbacks", PyvtkMultiProcessController_RemoveAllRMICallbacks, 1,
   (char*)"V.RemoveAllRMICallbacks(int)\nC++: void RemoveAllRMICallbacks(int tag)\n\nThese methods are a part of the newer API to add multiple rmi\ncallbacks. When the RMI is triggered, all the callbacks are\ncalled Removes all callbacks for the tag.\n"},
  {(char*)"RemoveRMICallback", PyvtkMultiProcessController_RemoveRMICallback, 1,
   (char*)"V.RemoveRMICallback(int) -> bool\nC++: bool RemoveRMICallback(unsigned long id)\n\nRemove a callback. Returns true is the remove was successful.\n"},
  {(char*)"TriggerRMI", PyvtkMultiProcessController_TriggerRMI, 1,
   (char*)"V.TriggerRMI(int, , int, int)\nC++: void TriggerRMI(int remoteProcessId, void *arg,\n    int argLength, int tag)\nV.TriggerRMI(int, string, int)\nC++: void TriggerRMI(int remoteProcessId, const char *arg,\n    int tag)\nV.TriggerRMI(int, int)\nC++: void TriggerRMI(int remoteProcessId, int tag)\n\nA method to trigger a method invocation in another process.\n"},
  {(char*)"TriggerBreakRMIs", PyvtkMultiProcessController_TriggerBreakRMIs, 1,
   (char*)"V.TriggerBreakRMIs()\nC++: void TriggerBreakRMIs()\n\nA conveniance method.  Called on process 0 to break \"ProcessRMIs\"\nloop on all other processes.\n"},
  {(char*)"TriggerRMIOnAllChildren", PyvtkMultiProcessController_TriggerRMIOnAllChildren, 1,
   (char*)"V.TriggerRMIOnAllChildren(, int, int)\nC++: void TriggerRMIOnAllChildren(void *arg, int argLength,\n    int tag)\nV.TriggerRMIOnAllChildren(string, int)\nC++: void TriggerRMIOnAllChildren(const char *arg, int tag)\nV.TriggerRMIOnAllChildren(int)\nC++: void TriggerRMIOnAllChildren(int tag)\n\nThis is a convenicence method to trigger an RMI call on all the\n\"children\" of the current node. The children of the current node\ncan be determined by drawing a binary tree starting at node 0 and\nthen assigned nodes ids incrementally in a breadth-first fashion\nfrom left to right. This is designed to be used when trigger an\nRMI call on all satellites from the root node.\n"},
  {(char*)"ProcessRMIs", PyvtkMultiProcessController_ProcessRMIs, 1,
   (char*)"V.ProcessRMIs(int, int) -> int\nC++: int ProcessRMIs(int reportErrors, int dont_loop=0)\nV.ProcessRMIs() -> int\nC++: int ProcessRMIs()\n\nCalling this method gives control to the controller to start\nprocessing RMIs. Possible return values are: RMI_NO_ERROR,\nRMI_TAG_ERROR : rmi tag could not be received, RMI_ARG_ERROR :\nrmi arg could not be received. If reportErrors is false, no\nvtkErrorMacro is called. ProcessRMIs() calls ProcessRMIs(int)\nwith reportErrors = 0. If dont_loop is 1, this call just process\none RMI message and exits.\n"},
  {(char*)"SetBreakFlag", PyvtkMultiProcessController_SetBreakFlag, 1,
   (char*)"V.SetBreakFlag(int)\nC++: void SetBreakFlag(int a)\n\nSetting this flag to 1 will cause the ProcessRMIs loop to return.\nThis also causes vtkUpStreamPorts to return from their\nWaitForUpdate loops.\n"},
  {(char*)"GetBreakFlag", PyvtkMultiProcessController_GetBreakFlag, 1,
   (char*)"V.GetBreakFlag() -> int\nC++: int GetBreakFlag()\n\nSetting this flag to 1 will cause the ProcessRMIs loop to return.\nThis also causes vtkUpStreamPorts to return from their\nWaitForUpdate loops.\n"},
  {(char*)"GetCommunicator", PyvtkMultiProcessController_GetCommunicator, 1,
   (char*)"V.GetCommunicator() -> vtkCommunicator\nC++: vtkCommunicator *GetCommunicator()\n\nReturns the communicator associated with this controller. A\ndefault communicator is created in constructor.\n"},
  {(char*)"GetBreakRMITag", PyvtkMultiProcessController_GetBreakRMITag, 1,
   (char*)"V.GetBreakRMITag() -> int\nC++: static int GetBreakRMITag()\n\nAccessor to some default tags.\n"},
  {(char*)"GetRMITag", PyvtkMultiProcessController_GetRMITag, 1,
   (char*)"V.GetRMITag() -> int\nC++: static int GetRMITag()\n\nAccessor to some default tags.\n"},
  {(char*)"GetRMIArgTag", PyvtkMultiProcessController_GetRMIArgTag, 1,
   (char*)"V.GetRMIArgTag() -> int\nC++: static int GetRMIArgTag()\n\nAccessor to some default tags.\n"},
  {(char*)"Barrier", PyvtkMultiProcessController_Barrier, 1,
   (char*)"V.Barrier()\nC++: void Barrier()\n\nThis method can be used to synchronize processes.\n"},
  {(char*)"SetGlobalController", PyvtkMultiProcessController_SetGlobalController, 1,
   (char*)"V.SetGlobalController(vtkMultiProcessController)\nC++: static void SetGlobalController(\n    vtkMultiProcessController *controller)\n\n"},
  {(char*)"Send", PyvtkMultiProcessController_Send, 1,
   (char*)"V.Send(string, int, int, int) -> int\nC++: int Send(const char *data, vtkIdType length,\n    int remoteProcessId, int tag)\nV.Send(vtkDataObject, int, int) -> int\nC++: int Send(vtkDataObject *data, int remoteId, int tag)\nV.Send(vtkDataArray, int, int) -> int\nC++: int Send(vtkDataArray *data, int remoteId, int tag)\n\nThis method sends data to another process.  Tag eliminates\nambiguity when multiple sends or receives exist in the same\nprocess. It is recommended to use custom tag number over 100.\nvtkMultiProcessController has reserved tags between 1 and 4.\nvtkCommunicator has reserved tags between 10 and 16.\n"},
  {(char*)"Receive", PyvtkMultiProcessController_Receive, 1,
   (char*)"V.Receive(string, int, int, int) -> int\nC++: int Receive(char *data, vtkIdType maxlength,\n    int remoteProcessId, int tag)\nV.Receive(vtkDataObject, int, int) -> int\nC++: int Receive(vtkDataObject *data, int remoteId, int tag)\nV.Receive(vtkDataArray, int, int) -> int\nC++: int Receive(vtkDataArray *data, int remoteId, int tag)\n\nThis method receives data from a corresponding send. It blocks\nuntil the receive is finished.  It calls methods in \"data\" to\ncommunicate the sending data. In the overrloads that take in a \\c\nmaxlength argument, this length is the maximum length of the\nmessage to receive. If the maxlength is less than the length of\nthe message sent by the sender, an error will be flagged. Once a\nmessage is received, use the GetCount() method to determine the\nactual size of the data received.\n"},
  {(char*)"ReceiveDataObject", PyvtkMultiProcessController_ReceiveDataObject, 1,
   (char*)"V.ReceiveDataObject(int, int) -> vtkDataObject\nC++: vtkDataObject *ReceiveDataObject(int remoteId, int tag)\n\nReceive a stream from the other processes.\n"},
  {(char*)"GetCount", PyvtkMultiProcessController_GetCount, 1,
   (char*)"V.GetCount() -> int\nC++: vtkIdType GetCount()\n\nReturns the number of words received by the most recent\nReceive(). Note that this is not the number of bytes received,\nbut the number of items of the data-type received by the most\nrecent Receive() eg. if Receive(int*,..) was used, then this\nreturns the number of ints received; if Receive(double*,..) was\nused, then this returns the number of doubles received etc. The\nreturn value is valid only after a successful Receive().\n"},
  {(char*)"Broadcast", PyvtkMultiProcessController_Broadcast, 1,
   (char*)"V.Broadcast(string, int, int) -> int\nC++: int Broadcast(char *data, vtkIdType length, int srcProcessId)\nV.Broadcast(vtkDataObject, int) -> int\nC++: int Broadcast(vtkDataObject *data, int srcProcessId)\nV.Broadcast(vtkDataArray, int) -> int\nC++: int Broadcast(vtkDataArray *data, int srcProcessId)\n\nBroadcast sends the array in the process with id srcProcessId to\nall of the other processes.  All processes must call these method\nwith the same arguments in order for it to complete.\n"},
  {(char*)"Gather", PyvtkMultiProcessController_Gather, 1,
   (char*)"V.Gather(string, string, int, int) -> int\nC++: int Gather(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int destProcessId)\nV.Gather(vtkDataArray, vtkDataArray, int) -> int\nC++: int Gather(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int destProcessId)\n\nGather collects arrays in the process with id destProcessId. \nEach process (including the destination) sends the contents of\nits send buffer to the destination process.  The destination\nprocess receives the messages and stores them in rank order.  The\nlength argument (which must be the same on all processes) is the\nlength of the sendBuffers.  The recvBuffer (on te destination\nprocess) must be of length length*numProcesses.  Gather is the\ninverse operation of Scatter.\n"},
  {(char*)"GatherV", PyvtkMultiProcessController_GatherV, 1,
   (char*)"V.GatherV(vtkDataArray, vtkDataArray, int) -> int\nC++: int GatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int destProcessId)\n\nThis special form of GatherV will automatically determine\nrecvLengths and offsets to tightly pack the data in the\nrecvBuffer in process order.  It will also resize recvBuffer in\norder to accommodate the incoming data (unlike the other GatherV\nvariants).\n"},
  {(char*)"Scatter", PyvtkMultiProcessController_Scatter, 1,
   (char*)"V.Scatter(string, string, int, int) -> int\nC++: int Scatter(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int srcProcessId)\nV.Scatter(vtkDataArray, vtkDataArray, int) -> int\nC++: int Scatter(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int srcProcessId)\n\nScatter takes an array in the process with id srcProcessId and\ndistributes it.  Each process (including the source) receives a\nportion of the send buffer.  Process 0 receives the first length\nvalues, process 1 receives the second length values, and so on. \nScatter is the inverse operation of Gather.\n"},
  {(char*)"AllGather", PyvtkMultiProcessController_AllGather, 1,
   (char*)"V.AllGather(string, string, int) -> int\nC++: int AllGather(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length)\nV.AllGather(vtkDataArray, vtkDataArray) -> int\nC++: int AllGather(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer)\n\nSame as gather except that the result ends up on all processes.\n"},
  {(char*)"AllGatherV", PyvtkMultiProcessController_AllGatherV, 1,
   (char*)"V.AllGatherV(vtkDataArray, vtkDataArray) -> int\nC++: int AllGatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer)\n\nThis special form of AllGatherV will automatically determine\nrecvLengths and offsets to tightly pack the data in the\nrecvBuffer in process order.  It will also resize recvBuffer in\norder to accommodate the incoming data (unlike the other GatherV\nvariants).\n"},
  {(char*)"Reduce", PyvtkMultiProcessController_Reduce, 1,
   (char*)"V.Reduce(string, string, int, int, int) -> int\nC++: int Reduce(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nV.Reduce(vtkDataArray, vtkDataArray, int, int) -> int\nC++: int Reduce(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int operation, int destProcessId)\n\nReduce an array to the given destination process.  This version\nof Reduce takes an identifier defined in the\nvtkCommunicator::StandardOperations enum to define the operation.\n"},
  {(char*)"AllReduce", PyvtkMultiProcessController_AllReduce, 1,
   (char*)"V.AllReduce(string, string, int, int) -> int\nC++: int AllReduce(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int operation)\nV.AllReduce(vtkDataArray, vtkDataArray, int) -> int\nC++: int AllReduce(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int operation)\n\nSame as Reduce except that the result is placed in all of the\nprocesses.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkMultiProcessControllerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkMultiProcessController_Methods,
    "vtkMultiProcessController", modulename,
    NULL, NULL,
    PyvtkMultiProcessController_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"RMI_NO_ERROR", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"RMI_TAG_ERROR", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"RMI_ARG_ERROR", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(-1);
    if (o && PyDict_SetItemString(d, (char *)"ANY_SOURCE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(-2);
    if (o && PyDict_SetItemString(d, (char *)"INVALID_SOURCE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"RMI_TAG", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"RMI_ARG_TAG", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"BREAK_RMI_TAG", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"XML_WRITER_DATA_INFO", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkMultiProcessController_Doc()
{
  static const char *docstring[] = {
    "vtkMultiProcessController - Multiprocessing communication superclass\n\n",
    "Superclass: vtkObject\n\n",
    "vtkMultiProcessController is used to control multiple processes in a\ndistributed computing environment. It has methods for executing\nsingle/multiple method(s) on multiple processors, triggering\nregistered callbacks (Remote Methods) (AddRMI(), TriggerRMI()) and\ncommunication. Please note that the communication is done using the\ncommunicator which is accessible to the user. Therefore it is\npossible ",
    "to get the communicator with GetCommunicator() and use it to\nsend and receive data. This is the encouraged communication method.\nThe internal (RMI) communications are done using a second internal\ncommunicator (called RMICommunicator).\n\nSee Also:\n\nvtkMPIController vtkCommunicator vtkMPICommunicator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMultiProcessController(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMultiProcessControllerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMultiProcessController", o) != 0)
    {
    Py_DECREF(o);
    }

}

