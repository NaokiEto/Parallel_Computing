// python wrapper for vtkAlgorithm
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
#include "vtkAlgorithm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAlgorithm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAlgorithm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAlgorithm_Doc();


static PyObject *
PyvtkAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

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
      tempr = op->vtkAlgorithm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

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
      tempr = op->vtkAlgorithm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAlgorithm::NewInstance();
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
PyvtkAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAlgorithm *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_HasExecutive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasExecutive();
      }
    else
      {
      tempr = op->vtkAlgorithm::HasExecutive();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetExecutive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkExecutive *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExecutive();
      }
    else
      {
      tempr = op->vtkAlgorithm::GetExecutive();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetExecutive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkExecutive *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
    {
    if (ap.IsBound())
      {
      op->SetExecutive(temp0);
      }
    else
      {
      op->vtkAlgorithm::SetExecutive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_ProcessRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkInformation *temp0 = NULL;
  vtkCollection *temp1 = NULL;
  vtkInformationVector *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkInformationVector"))
    {
    if (ap.IsBound())
      {
      tempr = op->ProcessRequest(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkAlgorithm::ProcessRequest(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_ModifyRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ModifyRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->ModifyRequest(temp0, temp1);
      }
    else
      {
      tempr = op->vtkAlgorithm::ModifyRequest(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputPortInformation(temp0);
      }
    else
      {
      tempr = op->vtkAlgorithm::GetInputPortInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetOutputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputPortInformation(temp0);
      }
    else
      {
      tempr = op->vtkAlgorithm::GetOutputPortInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

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
      tempr = op->vtkAlgorithm::GetInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

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
      op->vtkAlgorithm::SetInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetNumberOfInputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfInputPorts();
      }
    else
      {
      tempr = op->vtkAlgorithm::GetNumberOfInputPorts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetNumberOfOutputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfOutputPorts();
      }
    else
      {
      tempr = op->vtkAlgorithm::GetNumberOfOutputPorts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetAbortExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbortExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAbortExecute(temp0);
      }
    else
      {
      op->vtkAlgorithm::SetAbortExecute(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetAbortExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbortExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAbortExecute();
      }
    else
      {
      tempr = op->vtkAlgorithm::GetAbortExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_AbortExecuteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortExecuteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AbortExecuteOn();
      }
    else
      {
      op->vtkAlgorithm::AbortExecuteOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_AbortExecuteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortExecuteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AbortExecuteOff();
      }
    else
      {
      op->vtkAlgorithm::AbortExecuteOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProgress(temp0);
      }
    else
      {
      op->vtkAlgorithm::SetProgress(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetProgressMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProgressMinValue();
      }
    else
      {
      tempr = op->vtkAlgorithm::GetProgressMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetProgressMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProgressMaxValue();
      }
    else
      {
      tempr = op->vtkAlgorithm::GetProgressMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProgress();
      }
    else
      {
      tempr = op->vtkAlgorithm::GetProgress();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_UpdateProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->UpdateProgress(temp0);
      }
    else
      {
      op->vtkAlgorithm::UpdateProgress(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetProgressText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProgressText(temp0);
      }
    else
      {
      op->vtkAlgorithm::SetProgressText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetProgressText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProgressText();
      }
    else
      {
      tempr = op->vtkAlgorithm::GetProgressText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetErrorCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetErrorCode();
      }
    else
      {
      tempr = op->vtkAlgorithm::GetErrorCode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_IS_OPTIONAL(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_IS_OPTIONAL");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAlgorithm::INPUT_IS_OPTIONAL();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_IS_REPEATABLE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_IS_REPEATABLE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAlgorithm::INPUT_IS_REPEATABLE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_REQUIRED_FIELDS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_REQUIRED_FIELDS");

  vtkInformationInformationVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAlgorithm::INPUT_REQUIRED_FIELDS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_REQUIRED_DATA_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_REQUIRED_DATA_TYPE");

  vtkInformationStringVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAlgorithm::INPUT_REQUIRED_DATA_TYPE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_ARRAYS_TO_PROCESS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_ARRAYS_TO_PROCESS");

  vtkInformationInformationVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAlgorithm::INPUT_ARRAYS_TO_PROCESS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_PORT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_PORT");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAlgorithm::INPUT_PORT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_CONNECTION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_CONNECTION");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAlgorithm::INPUT_CONNECTION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  char *temp4 = NULL;
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
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkAlgorithm::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
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
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkAlgorithm::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputArrayToProcess_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1);
      }
    else
      {
      op->vtkAlgorithm::SetInputArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputArrayToProcess_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  char *temp3 = NULL;
  char *temp4 = NULL;
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
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkAlgorithm::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAlgorithm_SetInputArrayToProcess_Methods[] = {
  {NULL, PyvtkAlgorithm_SetInputArrayToProcess_s1, 1,
   (char*)"@iiiiz"},
  {NULL, PyvtkAlgorithm_SetInputArrayToProcess_s2, 1,
   (char*)"@iiiii"},
  {NULL, PyvtkAlgorithm_SetInputArrayToProcess_s4, 1,
   (char*)"@iiizz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAlgorithm_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAlgorithm_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAlgorithm_SetInputArrayToProcess_s3(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_GetInputArrayInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArrayInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputArrayInformation(temp0);
      }
    else
      {
      tempr = op->vtkAlgorithm::GetInputArrayInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_RemoveAllInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllInputs();
      }
    else
      {
      op->vtkAlgorithm::RemoveAllInputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetOutputDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputDataObject(temp0);
      }
    else
      {
      tempr = op->vtkAlgorithm::GetOutputDataObject(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetInputDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

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
      tempr = op->GetInputDataObject(temp0, temp1);
      }
    else
      {
      tempr = op->vtkAlgorithm::GetInputDataObject(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkAlgorithm::SetInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputConnection(temp0);
      }
    else
      {
      op->vtkAlgorithm::SetInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAlgorithm_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkAlgorithm_SetInputConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_AddInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->AddInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkAlgorithm::AddInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_AddInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->AddInputConnection(temp0);
      }
    else
      {
      op->vtkAlgorithm::AddInputConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_AddInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAlgorithm_AddInputConnection_s1(self, args);
    case 1:
      return PyvtkAlgorithm_AddInputConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInputConnection");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_RemoveInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->RemoveInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkAlgorithm::RemoveInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputPort(temp0);
      }
    else
      {
      tempr = op->vtkAlgorithm::GetOutputPort(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputPort();
      }
    else
      {
      tempr = op->vtkAlgorithm::GetOutputPort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetOutputPort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAlgorithm_GetOutputPort_s1(self, args);
    case 0:
      return PyvtkAlgorithm_GetOutputPort_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputPort");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_GetNumberOfInputConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfInputConnections(temp0);
      }
    else
      {
      tempr = op->vtkAlgorithm::GetNumberOfInputConnections(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetTotalNumberOfInputConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfInputConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTotalNumberOfInputConnections();
      }
    else
      {
      tempr = op->vtkAlgorithm::GetTotalNumberOfInputConnections();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  vtkAlgorithmOutput *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputConnection(temp0, temp1);
      }
    else
      {
      tempr = op->vtkAlgorithm::GetInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkAlgorithm::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_UpdateInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateInformation();
      }
    else
      {
      op->vtkAlgorithm::UpdateInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_UpdateWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateWholeExtent();
      }
    else
      {
      op->vtkAlgorithm::UpdateWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_ConvertTotalInputToPortConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertTotalInputToPortConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

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
      op->ConvertTotalInputToPortConnection(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAlgorithm::ConvertTotalInputToPortConnection(temp0, temp1, temp2);
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
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetReleaseDataFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReleaseDataFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

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
      op->vtkAlgorithm::SetReleaseDataFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetReleaseDataFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReleaseDataFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

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
      tempr = op->vtkAlgorithm::GetReleaseDataFlag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_ReleaseDataFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseDataFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseDataFlagOn();
      }
    else
      {
      op->vtkAlgorithm::ReleaseDataFlagOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_ReleaseDataFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseDataFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseDataFlagOff();
      }
    else
      {
      op->vtkAlgorithm::ReleaseDataFlagOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_UpdateExtentIsEmpty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateExtentIsEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkDataObject *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      tempr = op->UpdateExtentIsEmpty(temp0);
      }
    else
      {
      tempr = op->vtkAlgorithm::UpdateExtentIsEmpty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_UpdateExtentIsEmpty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateExtentIsEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->UpdateExtentIsEmpty(temp0, temp1);
      }
    else
      {
      tempr = op->vtkAlgorithm::UpdateExtentIsEmpty(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAlgorithm_UpdateExtentIsEmpty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAlgorithm_UpdateExtentIsEmpty_s1(self, args);
    case 2:
      return PyvtkAlgorithm_UpdateExtentIsEmpty_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "UpdateExtentIsEmpty");
  return NULL;
}



static PyObject *
PyvtkAlgorithm_SetDefaultExecutivePrototype(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDefaultExecutivePrototype");

  vtkExecutive *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
    {
    vtkAlgorithm::SetDefaultExecutivePrototype(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_ComputePriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputePriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->ComputePriority();
      }
    else
      {
      tempr = op->vtkAlgorithm::ComputePriority();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_PRESERVES_DATASET(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PRESERVES_DATASET");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAlgorithm::PRESERVES_DATASET();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_PRESERVES_GEOMETRY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PRESERVES_GEOMETRY");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAlgorithm::PRESERVES_GEOMETRY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_PRESERVES_BOUNDS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PRESERVES_BOUNDS");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAlgorithm::PRESERVES_BOUNDS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_PRESERVES_TOPOLOGY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PRESERVES_TOPOLOGY");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAlgorithm::PRESERVES_TOPOLOGY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_PRESERVES_ATTRIBUTES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PRESERVES_ATTRIBUTES");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAlgorithm::PRESERVES_ATTRIBUTES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAlgorithm_PRESERVES_RANGES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PRESERVES_RANGES");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkAlgorithm::PRESERVES_RANGES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkAlgorithm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAlgorithm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAlgorithm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAlgorithm\nC++: vtkAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAlgorithm_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAlgorithm\nC++: vtkAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"HasExecutive", PyvtkAlgorithm_HasExecutive, 1,
   (char*)"V.HasExecutive() -> int\nC++: int HasExecutive()\n\nCheck whether this algorithm has an assigned executive.  This\nwill NOT create a default executive.\n"},
  {(char*)"GetExecutive", PyvtkAlgorithm_GetExecutive, 1,
   (char*)"V.GetExecutive() -> vtkExecutive\nC++: vtkExecutive *GetExecutive()\n\nGet this algorithm's executive.  If it has none, a default\nexecutive will be created.\n"},
  {(char*)"SetExecutive", PyvtkAlgorithm_SetExecutive, 1,
   (char*)"V.SetExecutive(vtkExecutive)\nC++: virtual void SetExecutive(vtkExecutive *executive)\n\nSet this algorithm's executive.  This algorithm is removed from\nany executive to which it has previously been assigned and then\nassigned to the given executive.\n"},
  {(char*)"ProcessRequest", PyvtkAlgorithm_ProcessRequest, 1,
   (char*)"V.ProcessRequest(vtkInformation, vtkCollection,\n    vtkInformationVector) -> int\nC++: int ProcessRequest(vtkInformation *request,\n    vtkCollection *inInfo, vtkInformationVector *outInfo)\n\nVersion of ProcessRequest() that is wrapped. This converts the\ncollection to an array and calls the other version.\n"},
  {(char*)"ModifyRequest", PyvtkAlgorithm_ModifyRequest, 1,
   (char*)"V.ModifyRequest(vtkInformation, int) -> int\nC++: virtual int ModifyRequest(vtkInformation *request, int when)\n\nThis method gives the algorithm a chance to modify the contents\nof a request before or after (specified in the when argument) it\nis forwarded. The default implementation is empty. Returns 1 on\nsuccess, 0 on failure. When can be either\nvtkExecutive::BeforeForward or vtkExecutive::AfterForward.\n"},
  {(char*)"GetInputPortInformation", PyvtkAlgorithm_GetInputPortInformation, 1,
   (char*)"V.GetInputPortInformation(int) -> vtkInformation\nC++: vtkInformation *GetInputPortInformation(int port)\n\nGet the information object associated with an input port.  There\nis one input port per kind of input to the algorithm.  Each input\nport tells executives what kind of data and downstream requests\nthis algorithm can handle for that input.\n"},
  {(char*)"GetOutputPortInformation", PyvtkAlgorithm_GetOutputPortInformation, 1,
   (char*)"V.GetOutputPortInformation(int) -> vtkInformation\nC++: vtkInformation *GetOutputPortInformation(int port)\n\nGet the information object associated with an output port.  There\nis one output port per output from the algorithm.  Each output\nport tells executives what kind of upstream requests this\nalgorithm can handle for that output.\n"},
  {(char*)"GetInformation", PyvtkAlgorithm_GetInformation, 1,
   (char*)"V.GetInformation() -> vtkInformation\nC++: vtkInformation *GetInformation()\n\nSet/Get the information object associated with this algorithm.\n"},
  {(char*)"SetInformation", PyvtkAlgorithm_SetInformation, 1,
   (char*)"V.SetInformation(vtkInformation)\nC++: virtual void SetInformation(vtkInformation *)\n\nSet/Get the information object associated with this algorithm.\n"},
  {(char*)"GetNumberOfInputPorts", PyvtkAlgorithm_GetNumberOfInputPorts, 1,
   (char*)"V.GetNumberOfInputPorts() -> int\nC++: int GetNumberOfInputPorts()\n\nGet the number of input ports used by the algorithm.\n"},
  {(char*)"GetNumberOfOutputPorts", PyvtkAlgorithm_GetNumberOfOutputPorts, 1,
   (char*)"V.GetNumberOfOutputPorts() -> int\nC++: int GetNumberOfOutputPorts()\n\nGet the number of output ports provided by the algorithm.\n"},
  {(char*)"SetAbortExecute", PyvtkAlgorithm_SetAbortExecute, 1,
   (char*)"V.SetAbortExecute(int)\nC++: void SetAbortExecute(int a)\n\nSet/Get the AbortExecute flag for the process object. Process\nobjects may handle premature termination of execution in\ndifferent ways.\n"},
  {(char*)"GetAbortExecute", PyvtkAlgorithm_GetAbortExecute, 1,
   (char*)"V.GetAbortExecute() -> int\nC++: int GetAbortExecute()\n\nSet/Get the AbortExecute flag for the process object. Process\nobjects may handle premature termination of execution in\ndifferent ways.\n"},
  {(char*)"AbortExecuteOn", PyvtkAlgorithm_AbortExecuteOn, 1,
   (char*)"V.AbortExecuteOn()\nC++: void AbortExecuteOn()\n\nSet/Get the AbortExecute flag for the process object. Process\nobjects may handle premature termination of execution in\ndifferent ways.\n"},
  {(char*)"AbortExecuteOff", PyvtkAlgorithm_AbortExecuteOff, 1,
   (char*)"V.AbortExecuteOff()\nC++: void AbortExecuteOff()\n\nSet/Get the AbortExecute flag for the process object. Process\nobjects may handle premature termination of execution in\ndifferent ways.\n"},
  {(char*)"SetProgress", PyvtkAlgorithm_SetProgress, 1,
   (char*)"V.SetProgress(float)\nC++: void SetProgress(double)\n\nSet/Get the execution progress of a process object.\n"},
  {(char*)"GetProgressMinValue", PyvtkAlgorithm_GetProgressMinValue, 1,
   (char*)"V.GetProgressMinValue() -> float\nC++: double GetProgressMinValue()\n\nSet/Get the execution progress of a process object.\n"},
  {(char*)"GetProgressMaxValue", PyvtkAlgorithm_GetProgressMaxValue, 1,
   (char*)"V.GetProgressMaxValue() -> float\nC++: double GetProgressMaxValue()\n\nSet/Get the execution progress of a process object.\n"},
  {(char*)"GetProgress", PyvtkAlgorithm_GetProgress, 1,
   (char*)"V.GetProgress() -> float\nC++: double GetProgress()\n\nSet/Get the execution progress of a process object.\n"},
  {(char*)"UpdateProgress", PyvtkAlgorithm_UpdateProgress, 1,
   (char*)"V.UpdateProgress(float)\nC++: void UpdateProgress(double amount)\n\nUpdate the progress of the process object. If a ProgressMethod\nexists, executes it.  Then set the Progress ivar to amount. The\nparameter amount should range between (0,1).\n"},
  {(char*)"SetProgressText", PyvtkAlgorithm_SetProgressText, 1,
   (char*)"V.SetProgressText(string)\nC++: void SetProgressText(const char *ptext)\n\nSet the current text message associated with the progress state.\nThis may be used by a calling process/GUI. Note: Because\nSetProgressText() is called from inside RequestData() it does not\nmodify the algorithm object. Algorithms are not allowed to modify\nthemselves from inside RequestData().\n"},
  {(char*)"GetProgressText", PyvtkAlgorithm_GetProgressText, 1,
   (char*)"V.GetProgressText() -> string\nC++: char *GetProgressText()\n\nSet the current text message associated with the progress state.\nThis may be used by a calling process/GUI. Note: Because\nSetProgressText() is called from inside RequestData() it does not\nmodify the algorithm object. Algorithms are not allowed to modify\nthemselves from inside RequestData().\n"},
  {(char*)"GetErrorCode", PyvtkAlgorithm_GetErrorCode, 1,
   (char*)"V.GetErrorCode() -> int\nC++: unsigned long GetErrorCode()\n\nThe error code contains a possible error that occured while\nreading or writing the file.\n"},
  {(char*)"INPUT_IS_OPTIONAL", PyvtkAlgorithm_INPUT_IS_OPTIONAL, 1,
   (char*)"V.INPUT_IS_OPTIONAL() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INPUT_IS_OPTIONAL()\n\nKeys used to specify input port requirements.\n"},
  {(char*)"INPUT_IS_REPEATABLE", PyvtkAlgorithm_INPUT_IS_REPEATABLE, 1,
   (char*)"V.INPUT_IS_REPEATABLE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INPUT_IS_REPEATABLE()\n\nKeys used to specify input port requirements.\n"},
  {(char*)"INPUT_REQUIRED_FIELDS", PyvtkAlgorithm_INPUT_REQUIRED_FIELDS, 1,
   (char*)"V.INPUT_REQUIRED_FIELDS() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *INPUT_REQUIRED_FIELDS(\n    )\n\nKeys used to specify input port requirements.\n"},
  {(char*)"INPUT_REQUIRED_DATA_TYPE", PyvtkAlgorithm_INPUT_REQUIRED_DATA_TYPE, 1,
   (char*)"V.INPUT_REQUIRED_DATA_TYPE() -> vtkInformationStringVectorKey\nC++: static vtkInformationStringVectorKey *INPUT_REQUIRED_DATA_TYPE(\n    )\n\nKeys used to specify input port requirements.\n"},
  {(char*)"INPUT_ARRAYS_TO_PROCESS", PyvtkAlgorithm_INPUT_ARRAYS_TO_PROCESS, 1,
   (char*)"V.INPUT_ARRAYS_TO_PROCESS() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *INPUT_ARRAYS_TO_PROCESS(\n    )\n\nKeys used to specify input port requirements.\n"},
  {(char*)"INPUT_PORT", PyvtkAlgorithm_INPUT_PORT, 1,
   (char*)"V.INPUT_PORT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INPUT_PORT()\n\nKeys used to specify input port requirements.\n"},
  {(char*)"INPUT_CONNECTION", PyvtkAlgorithm_INPUT_CONNECTION, 1,
   (char*)"V.INPUT_CONNECTION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INPUT_CONNECTION()\n\nKeys used to specify input port requirements.\n"},
  {(char*)"SetInputArrayToProcess", PyvtkAlgorithm_SetInputArrayToProcess, 1,
   (char*)"V.SetInputArrayToProcess(int, int, int, int, string)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, const char *name)\nV.SetInputArrayToProcess(int, int, int, int, int)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, int fieldAttributeType)\nV.SetInputArrayToProcess(int, vtkInformation)\nC++: virtual void SetInputArrayToProcess(int idx,\n    vtkInformation *info)\nV.SetInputArrayToProcess(int, int, int, string, string)\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, const char *fieldAssociation,\n    const char *attributeTypeorName)\n\nSet the input data arrays that this algorithm will process.\nSpecifically the idx array that this algorithm will process\n(starting from 0) is the array on port, connection with the\nspecified association and name or attribute type (such as\nSCALARS). The fieldAssociation refers to which field in the data\nobject the array is stored. See vtkDataObject::FieldAssociations\nfor detail.\n"},
  {(char*)"GetInputArrayInformation", PyvtkAlgorithm_GetInputArrayInformation, 1,
   (char*)"V.GetInputArrayInformation(int) -> vtkInformation\nC++: vtkInformation *GetInputArrayInformation(int idx)\n\nGet the info object for the specified input array to this\nalgorithm\n"},
  {(char*)"RemoveAllInputs", PyvtkAlgorithm_RemoveAllInputs, 1,
   (char*)"V.RemoveAllInputs()\nC++: void RemoveAllInputs()\n\nRemove all the input data.\n"},
  {(char*)"GetOutputDataObject", PyvtkAlgorithm_GetOutputDataObject, 1,
   (char*)"V.GetOutputDataObject(int) -> vtkDataObject\nC++: vtkDataObject *GetOutputDataObject(int port)\n\nGet the data object that will contain the algorithm output for\nthe given port.\n"},
  {(char*)"GetInputDataObject", PyvtkAlgorithm_GetInputDataObject, 1,
   (char*)"V.GetInputDataObject(int, int) -> vtkDataObject\nC++: vtkDataObject *GetInputDataObject(int port, int connection)\n\nGet the data object that will contain the algorithm input for the\ngiven port and given connection.\n"},
  {(char*)"SetInputConnection", PyvtkAlgorithm_SetInputConnection, 1,
   (char*)"V.SetInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(int port,\n    vtkAlgorithmOutput *input)\nV.SetInputConnection(vtkAlgorithmOutput)\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *input)\n\nSet the connection for the given input port index.  Each input\nport of a filter has a specific purpose.  A port may have zero or\nmore connections and the required number is specified by each\nfilter.  Setting the connection with this method removes all\nother connections from the port.  To add more than one connection\nuse AddInputConnection().\n\nThe input for the connection is the output port of another\nfilter, which is obtained with GetOutputPort().  Typical usage is\n\n\n  filter2->SetInputConnection(0, filter1->GetOutputPort(0)).\n"},
  {(char*)"AddInputConnection", PyvtkAlgorithm_AddInputConnection, 1,
   (char*)"V.AddInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void AddInputConnection(int port,\n    vtkAlgorithmOutput *input)\nV.AddInputConnection(vtkAlgorithmOutput)\nC++: virtual void AddInputConnection(vtkAlgorithmOutput *input)\n\nAdd a connection to the given input port index.  See\nSetInputConnection() for details on input connections.  This\nmethod is the complement to RemoveInputConnection() in that it\nadds only the connection specified without affecting other\nconnections.  Typical usage is\n\n\n  filter2->AddInputConnection(0, filter1->GetOutputPort(0)).\n"},
  {(char*)"RemoveInputConnection", PyvtkAlgorithm_RemoveInputConnection, 1,
   (char*)"V.RemoveInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void RemoveInputConnection(int port,\n    vtkAlgorithmOutput *input)\n\nRemove a connection from the given input port index.  See\nSetInputConnection() for details on input connection.  This\nmethod is the complement to AddInputConnection() in that it\nremoves only the connection specified without affecting other\nconnections.  Typical usage is\n\n\n  filter2->RemoveInputConnection(0, filter1->GetOutputPort(0)).\n"},
  {(char*)"GetOutputPort", PyvtkAlgorithm_GetOutputPort, 1,
   (char*)"V.GetOutputPort(int) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetOutputPort(int index)\nV.GetOutputPort() -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetOutputPort()\n\nGet a proxy object corresponding to the given output port of this\nalgorithm.  The proxy object can be passed to another algorithm's\nSetInputConnection(), AddInputConnection(), and\nRemoveInputConnection() methods to modify pipeline connectivity.\n"},
  {(char*)"GetNumberOfInputConnections", PyvtkAlgorithm_GetNumberOfInputConnections, 1,
   (char*)"V.GetNumberOfInputConnections(int) -> int\nC++: int GetNumberOfInputConnections(int port)\n\nGet the number of inputs currently connected to a port.\n"},
  {(char*)"GetTotalNumberOfInputConnections", PyvtkAlgorithm_GetTotalNumberOfInputConnections, 1,
   (char*)"V.GetTotalNumberOfInputConnections() -> int\nC++: int GetTotalNumberOfInputConnections()\n\nGet the total number of inputs for this algorithm\n"},
  {(char*)"GetInputConnection", PyvtkAlgorithm_GetInputConnection, 1,
   (char*)"V.GetInputConnection(int, int) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetInputConnection(int port, int index)\n\nGet the algorithm output port connected to an input port.\n"},
  {(char*)"Update", PyvtkAlgorithm_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nBring this algorithm's outputs up-to-date.\n"},
  {(char*)"UpdateInformation", PyvtkAlgorithm_UpdateInformation, 1,
   (char*)"V.UpdateInformation()\nC++: virtual void UpdateInformation()\n\nBackward compatibility method to invoke UpdateInformation on\nexecutive.\n"},
  {(char*)"UpdateWholeExtent", PyvtkAlgorithm_UpdateWholeExtent, 1,
   (char*)"V.UpdateWholeExtent()\nC++: virtual void UpdateWholeExtent()\n\nBring this algorithm's outputs up-to-date.\n"},
  {(char*)"ConvertTotalInputToPortConnection", PyvtkAlgorithm_ConvertTotalInputToPortConnection, 1,
   (char*)"V.ConvertTotalInputToPortConnection(int, int, int)\nC++: void ConvertTotalInputToPortConnection(int ind, int &port,\n    int &conn)\n\nConvenience routine to convert from a linear ordering of input\nconnections to a port/connection pair.\n"},
  {(char*)"SetReleaseDataFlag", PyvtkAlgorithm_SetReleaseDataFlag, 1,
   (char*)"V.SetReleaseDataFlag(int)\nC++: virtual void SetReleaseDataFlag(int)\n\nTurn release data flag on or off for all output ports.\n"},
  {(char*)"GetReleaseDataFlag", PyvtkAlgorithm_GetReleaseDataFlag, 1,
   (char*)"V.GetReleaseDataFlag() -> int\nC++: virtual int GetReleaseDataFlag()\n\nTurn release data flag on or off for all output ports.\n"},
  {(char*)"ReleaseDataFlagOn", PyvtkAlgorithm_ReleaseDataFlagOn, 1,
   (char*)"V.ReleaseDataFlagOn()\nC++: void ReleaseDataFlagOn()\n\nTurn release data flag on or off for all output ports.\n"},
  {(char*)"ReleaseDataFlagOff", PyvtkAlgorithm_ReleaseDataFlagOff, 1,
   (char*)"V.ReleaseDataFlagOff()\nC++: void ReleaseDataFlagOff()\n\nTurn release data flag on or off for all output ports.\n"},
  {(char*)"UpdateExtentIsEmpty", PyvtkAlgorithm_UpdateExtentIsEmpty, 1,
   (char*)"V.UpdateExtentIsEmpty(vtkDataObject) -> int\nC++: int UpdateExtentIsEmpty(vtkDataObject *output)\nV.UpdateExtentIsEmpty(vtkInformation, int) -> int\nC++: int UpdateExtentIsEmpty(vtkInformation *pinfo,\n    int extentType)\n\nThis detects when the UpdateExtent will generate no data This\ncondition is satisfied when the UpdateExtent has zero volume\n(0,-1,...) or the UpdateNumberOfPieces is 0. The source uses this\ncall to determine whether to call Execute.\n"},
  {(char*)"SetDefaultExecutivePrototype", PyvtkAlgorithm_SetDefaultExecutivePrototype, 1,
   (char*)"V.SetDefaultExecutivePrototype(vtkExecutive)\nC++: static void SetDefaultExecutivePrototype(vtkExecutive *proto)\n\nIf the DefaultExecutivePrototype is set, a copy of it is created\nin CreateDefaultExecutive() using NewInstance().\n"},
  {(char*)"ComputePriority", PyvtkAlgorithm_ComputePriority, 1,
   (char*)"V.ComputePriority() -> float\nC++: virtual double ComputePriority()\n\nReturns the priority of the piece described by the current update\nextent. The priority is a number between 0.0 and 1.0 with 0\nmeaning skippable (REQUEST_DATA not needed) and 1.0 meaning\nimportant.\n"},
  {(char*)"PRESERVES_DATASET", PyvtkAlgorithm_PRESERVES_DATASET, 1,
   (char*)"V.PRESERVES_DATASET() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PRESERVES_DATASET()\n\nThese are flags that can be set that let the pipeline keep\naccurate meta-information for ComputePriority.\n"},
  {(char*)"PRESERVES_GEOMETRY", PyvtkAlgorithm_PRESERVES_GEOMETRY, 1,
   (char*)"V.PRESERVES_GEOMETRY() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PRESERVES_GEOMETRY()\n\nThese are flags that can be set that let the pipeline keep\naccurate meta-information for ComputePriority.\n"},
  {(char*)"PRESERVES_BOUNDS", PyvtkAlgorithm_PRESERVES_BOUNDS, 1,
   (char*)"V.PRESERVES_BOUNDS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PRESERVES_BOUNDS()\n\nThese are flags that can be set that let the pipeline keep\naccurate meta-information for ComputePriority.\n"},
  {(char*)"PRESERVES_TOPOLOGY", PyvtkAlgorithm_PRESERVES_TOPOLOGY, 1,
   (char*)"V.PRESERVES_TOPOLOGY() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PRESERVES_TOPOLOGY()\n\nThese are flags that can be set that let the pipeline keep\naccurate meta-information for ComputePriority.\n"},
  {(char*)"PRESERVES_ATTRIBUTES", PyvtkAlgorithm_PRESERVES_ATTRIBUTES, 1,
   (char*)"V.PRESERVES_ATTRIBUTES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PRESERVES_ATTRIBUTES()\n\nThese are flags that can be set that let the pipeline keep\naccurate meta-information for ComputePriority.\n"},
  {(char*)"PRESERVES_RANGES", PyvtkAlgorithm_PRESERVES_RANGES, 1,
   (char*)"V.PRESERVES_RANGES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PRESERVES_RANGES()\n\nThese are flags that can be set that let the pipeline keep\naccurate meta-information for ComputePriority.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAlgorithm_StaticNew()
{
  return vtkAlgorithm::New();
}

PyObject *PyVTKClass_vtkAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAlgorithm_StaticNew,
    PyvtkAlgorithm_Methods,
    "vtkAlgorithm", modulename,
    NULL, NULL,
    PyvtkAlgorithm_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkAlgorithm - Superclass for all sources, filters, and sinks in VTK.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkAlgorithm is the superclass for all sources, filters, and sinks in\nVTK.  It defines a generalized interface for executing data\nprocessing algorithms.  Pipeline connections are associated with\ninput and output ports that are independent of the type of data\npassing through the connections.\n\nInstances may be used independently or within pipelines with a\nvariety of architectures and update mechanis",
    "ms.  Pipelines are\ncontrolled by instances of vtkExecutive.  Every vtkAlgorithm instance\nhas an associated vtkExecutive when it is used in a pipeline.  The\nexecutive is responsible for data flow.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

