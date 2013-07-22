// python wrapper for vtkMPICommunicator
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
#include "vtkMPICommunicator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMPICommunicator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMPICommunicator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMPICommunicatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMPICommunicatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCommunicatorNew
extern "C" { PyObject *PyVTKClass_vtkCommunicatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkCommunicatorNew
#endif

static const char **PyvtkMPICommunicator_Doc();


static PyObject *
PyvtkMPICommunicator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
      tempr = op->vtkMPICommunicator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

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
      tempr = op->vtkMPICommunicator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  vtkMPICommunicator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMPICommunicator::NewInstance();
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
PyvtkMPICommunicator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMPICommunicator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMPICommunicator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GetWorldCommunicator(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetWorldCommunicator");

  vtkMPICommunicator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkMPICommunicator::GetWorldCommunicator();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  vtkProcessGroup *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProcessGroup"))
    {
    if (ap.IsBound())
      {
      tempr = op->Initialize(temp0);
      }
    else
      {
      tempr = op->vtkMPICommunicator::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_SplitInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  vtkCommunicator *temp0 = NULL;
  int temp1;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkCommunicator") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->SplitInitialize(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkMPICommunicator::SplitInitialize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_SendVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
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
      tempr = op->SendVoidArray(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkMPICommunicator::SendVoidArray(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_ReceiveVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
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
      tempr = op->ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkMPICommunicator::ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Barrier();
      }
    else
      {
      op->vtkMPICommunicator::Barrier();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_BroadcastVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
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
      tempr = op->BroadcastVoidArray(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkMPICommunicator::BroadcastVoidArray(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
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
      tempr = op->GatherVoidArray(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkMPICommunicator::GatherVoidArray(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_ScatterVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
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
      tempr = op->ScatterVoidArray(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkMPICommunicator::ScatterVoidArray(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_AllGatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
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
      tempr = op->AllGatherVoidArray(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkMPICommunicator::AllGatherVoidArray(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_ReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
  vtkIdType temp2;
  int temp3;
  int temp4;
  int temp5;
  int tempr;
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
      tempr = op->ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      tempr = op->vtkMPICommunicator::ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_AllReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  void  *temp0 = NULL;
  void  *temp1 = NULL;
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
      tempr = op->AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkMPICommunicator::AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GetMPIComm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMPIComm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  vtkMPICommunicatorOpaqueComm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMPIComm();
      }
    else
      {
      tempr = op->vtkMPICommunicator::GetMPIComm();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_Allocate(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Allocate");

  size_t temp0;
  char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkMPICommunicator::Allocate(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_Free(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Free");

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkMPICommunicator::Free(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_SetUseSsend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseSsend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseSsend(temp0);
      }
    else
      {
      op->vtkMPICommunicator::SetUseSsend(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GetUseSsendMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSsendMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseSsendMinValue();
      }
    else
      {
      tempr = op->vtkMPICommunicator::GetUseSsendMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GetUseSsendMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSsendMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseSsendMaxValue();
      }
    else
      {
      tempr = op->vtkMPICommunicator::GetUseSsendMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_GetUseSsend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSsend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseSsend();
      }
    else
      {
      tempr = op->vtkMPICommunicator::GetUseSsend();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_UseSsendOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSsendOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseSsendOn();
      }
    else
      {
      op->vtkMPICommunicator::UseSsendOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_UseSsendOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSsendOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseSsendOff();
      }
    else
      {
      op->vtkMPICommunicator::UseSsendOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMPICommunicator_CopyFrom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPICommunicator *op = static_cast<vtkMPICommunicator *>(vp);

  vtkMPICommunicator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMPICommunicator"))
    {
    if (ap.IsBound())
      {
      op->CopyFrom(temp0);
      }
    else
      {
      op->vtkMPICommunicator::CopyFrom(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMPICommunicator_Methods[] = {
  {(char*)"GetClassName", PyvtkMPICommunicator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMPICommunicator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMPICommunicator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMPICommunicator\nC++: vtkMPICommunicator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMPICommunicator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMPICommunicator\nC++: vtkMPICommunicator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetWorldCommunicator", PyvtkMPICommunicator_GetWorldCommunicator, 1,
   (char*)"V.GetWorldCommunicator() -> vtkMPICommunicator\nC++: static vtkMPICommunicator *GetWorldCommunicator()\n\nReturns the singleton which behaves as the global communicator\n(MPI_COMM_WORLD)\n"},
  {(char*)"Initialize", PyvtkMPICommunicator_Initialize, 1,
   (char*)"V.Initialize(vtkProcessGroup) -> int\nC++: int Initialize(vtkProcessGroup *group)\n\nUsed to initialize the communicator (i.e. create the underlying\nMPI_Comm). The group must be associated with a valid\nvtkMPICommunicator.\n"},
  {(char*)"SplitInitialize", PyvtkMPICommunicator_SplitInitialize, 1,
   (char*)"V.SplitInitialize(vtkCommunicator, int, int) -> int\nC++: int SplitInitialize(vtkCommunicator *oldcomm, int color,\n    int key)\n\nUsed to initialize the communicator (i.e. create the underlying\nMPI_Comm) using MPI_Comm_split on the given communicator.\n"},
  {(char*)"SendVoidArray", PyvtkMPICommunicator_SendVoidArray, 1,
   (char*)"V.SendVoidArray(, int, int, int, int) -> int\nC++: virtual int SendVoidArray(const void *data, vtkIdType length,\n     int type, int remoteProcessId, int tag)\n\nPerforms the actual communication.  You will usually use the\nconvenience Send functions defined in the superclass.\n"},
  {(char*)"ReceiveVoidArray", PyvtkMPICommunicator_ReceiveVoidArray, 1,
   (char*)"V.ReceiveVoidArray(, int, int, int, int) -> int\nC++: virtual int ReceiveVoidArray(void *data, vtkIdType length,\n    int type, int remoteProcessId, int tag)\n\nPerforms the actual communication.  You will usually use the\nconvenience Send functions defined in the superclass.\n"},
  {(char*)"Barrier", PyvtkMPICommunicator_Barrier, 1,
   (char*)"V.Barrier()\nC++: virtual void Barrier()\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands.\n"},
  {(char*)"BroadcastVoidArray", PyvtkMPICommunicator_BroadcastVoidArray, 1,
   (char*)"V.BroadcastVoidArray(, int, int, int) -> int\nC++: virtual int BroadcastVoidArray(void *data, vtkIdType length,\n    int type, int srcProcessId)\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands.\n"},
  {(char*)"GatherVoidArray", PyvtkMPICommunicator_GatherVoidArray, 1,
   (char*)"V.GatherVoidArray(, , int, int, int) -> int\nC++: virtual int GatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int destProcessId)\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands.\n"},
  {(char*)"ScatterVoidArray", PyvtkMPICommunicator_ScatterVoidArray, 1,
   (char*)"V.ScatterVoidArray(, , int, int, int) -> int\nC++: virtual int ScatterVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int srcProcessId)\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands.\n"},
  {(char*)"AllGatherVoidArray", PyvtkMPICommunicator_AllGatherVoidArray, 1,
   (char*)"V.AllGatherVoidArray(, , int, int) -> int\nC++: virtual int AllGatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type)\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands.\n"},
  {(char*)"ReduceVoidArray", PyvtkMPICommunicator_ReduceVoidArray, 1,
   (char*)"V.ReduceVoidArray(, , int, int, int, int) -> int\nC++: virtual int ReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation,\n    int destProcessId)\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands.\n"},
  {(char*)"AllReduceVoidArray", PyvtkMPICommunicator_AllReduceVoidArray, 1,
   (char*)"V.AllReduceVoidArray(, , int, int, int) -> int\nC++: virtual int AllReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation)\n\nMore efficient implementations of collective operations that use\nthe equivalent MPI commands.\n"},
  {(char*)"GetMPIComm", PyvtkMPICommunicator_GetMPIComm, 1,
   (char*)"V.GetMPIComm() -> vtkMPICommunicatorOpaqueComm\nC++: vtkMPICommunicatorOpaqueComm *GetMPIComm()\n\n"},
  {(char*)"Allocate", PyvtkMPICommunicator_Allocate, 1,
   (char*)"V.Allocate(int) -> string\nC++: static char *Allocate(size_t size)\n\n"},
  {(char*)"Free", PyvtkMPICommunicator_Free, 1,
   (char*)"V.Free(string)\nC++: static void Free(char *ptr)\n\n"},
  {(char*)"SetUseSsend", PyvtkMPICommunicator_SetUseSsend, 1,
   (char*)"V.SetUseSsend(int)\nC++: void SetUseSsend(int)\n\nWhen set to 1, all MPI_Send calls are replaced by MPI_Ssend\ncalls. Default is 0.\n"},
  {(char*)"GetUseSsendMinValue", PyvtkMPICommunicator_GetUseSsendMinValue, 1,
   (char*)"V.GetUseSsendMinValue() -> int\nC++: int GetUseSsendMinValue()\n\nWhen set to 1, all MPI_Send calls are replaced by MPI_Ssend\ncalls. Default is 0.\n"},
  {(char*)"GetUseSsendMaxValue", PyvtkMPICommunicator_GetUseSsendMaxValue, 1,
   (char*)"V.GetUseSsendMaxValue() -> int\nC++: int GetUseSsendMaxValue()\n\nWhen set to 1, all MPI_Send calls are replaced by MPI_Ssend\ncalls. Default is 0.\n"},
  {(char*)"GetUseSsend", PyvtkMPICommunicator_GetUseSsend, 1,
   (char*)"V.GetUseSsend() -> int\nC++: int GetUseSsend()\n\nWhen set to 1, all MPI_Send calls are replaced by MPI_Ssend\ncalls. Default is 0.\n"},
  {(char*)"UseSsendOn", PyvtkMPICommunicator_UseSsendOn, 1,
   (char*)"V.UseSsendOn()\nC++: void UseSsendOn()\n\nWhen set to 1, all MPI_Send calls are replaced by MPI_Ssend\ncalls. Default is 0.\n"},
  {(char*)"UseSsendOff", PyvtkMPICommunicator_UseSsendOff, 1,
   (char*)"V.UseSsendOff()\nC++: void UseSsendOff()\n\nWhen set to 1, all MPI_Send calls are replaced by MPI_Ssend\ncalls. Default is 0.\n"},
  {(char*)"CopyFrom", PyvtkMPICommunicator_CopyFrom, 1,
   (char*)"V.CopyFrom(vtkMPICommunicator)\nC++: void CopyFrom(vtkMPICommunicator *source)\n\nCopies all the attributes of source, deleting previously stored\ndata. The MPI communicator handle is also copied. Normally, this\nshould not be needed. It is used during the construction of a new\ncommunicator for copying the world communicator, keeping the same\ncontext.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMPICommunicator_StaticNew()
{
  return vtkMPICommunicator::New();
}

PyObject *PyVTKClass_vtkMPICommunicatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMPICommunicator_StaticNew,
    PyvtkMPICommunicator_Methods,
    "vtkMPICommunicator", modulename,
    NULL, NULL,
    PyvtkMPICommunicator_Doc(),
    PyVTKClass_vtkCommunicatorNew(modulename));
  return cls;
}

const char **PyvtkMPICommunicator_Doc()
{
  static const char *docstring[] = {
    "vtkMPICommunicator - Class for creating user defined MPI\ncommunicators.\n\n",
    "Superclass: vtkCommunicator\n\n",
    "This class can be used to create user defined MPI communicators. The\nactual creation (with MPI_Comm_create) occurs in Initialize which\ntakes as arguments a super-communicator and a group of process ids.\nThe new communicator is created by including the processes contained\nin the group. The global communicator (equivalent to MPI_COMM_WORLD)\ncan be obtained using the class method GetWorldCommunicator",
    ". It is\nimportant to note that this communicator should not be used on the\nprocesses not contained in the group. For example, if the group\ncontains processes 0 and 1, controller->SetCommunicator(communicator)\nwould cause an MPI error on any other process.\n\nSee Also:\n\nvtkMPIController vtkProcessGroup\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMPICommunicator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMPICommunicatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMPICommunicator", o) != 0)
    {
    Py_DECREF(o);
    }

}

