// python wrapper for vtkSocketCommunicator
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
#include "vtkSocketCommunicator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSocketCommunicator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSocketCommunicator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSocketCommunicatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSocketCommunicatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCommunicatorNew
extern "C" { PyObject *PyVTKClass_vtkCommunicatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkCommunicatorNew
#endif

static const char **PyvtkSocketCommunicator_Doc();


static PyObject *
PyvtkSocketCommunicator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      tempr = op->vtkSocketCommunicator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      tempr = op->vtkSocketCommunicator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  vtkSocketCommunicator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSocketCommunicator::NewInstance();
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
PyvtkSocketCommunicator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSocketCommunicator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSocketCommunicator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_WaitForConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->WaitForConnection(temp0);
      }
    else
      {
      tempr = op->vtkSocketCommunicator::WaitForConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSocketCommunicator_WaitForConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  vtkServerSocket *temp0 = NULL;
  unsigned long temp1 = 0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkServerSocket") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      tempr = op->WaitForConnection(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSocketCommunicator::WaitForConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSocketCommunicator_WaitForConnection_Methods[] = {
  {NULL, PyvtkSocketCommunicator_WaitForConnection_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkSocketCommunicator_WaitForConnection_s2, 1,
   (char*)"@O|k *vtkServerSocket"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSocketCommunicator_WaitForConnection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSocketCommunicator_WaitForConnection_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSocketCommunicator_WaitForConnection_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "WaitForConnection");
  return NULL;
}



static PyObject *
PyvtkSocketCommunicator_CloseConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CloseConnection();
      }
    else
      {
      op->vtkSocketCommunicator::CloseConnection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ConnectTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConnectTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  char *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->ConnectTo(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSocketCommunicator::ConnectTo(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetSwapBytesInReceivedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBytesInReceivedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSwapBytesInReceivedData();
      }
    else
      {
      tempr = op->vtkSocketCommunicator::GetSwapBytesInReceivedData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetIsConnected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsConnected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIsConnected();
      }
    else
      {
      tempr = op->vtkSocketCommunicator::GetIsConnected();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_SetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::SetNumberOfProcesses(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_SendVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      tempr = op->vtkSocketCommunicator::SendVoidArray(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ReceiveVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      tempr = op->vtkSocketCommunicator::ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Barrier();
      }
    else
      {
      op->vtkSocketCommunicator::Barrier();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_BroadcastVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      tempr = op->vtkSocketCommunicator::BroadcastVoidArray(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      tempr = op->vtkSocketCommunicator::GatherVoidArray(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ScatterVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      tempr = op->vtkSocketCommunicator::ScatterVoidArray(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_AllGatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      tempr = op->vtkSocketCommunicator::AllGatherVoidArray(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      tempr = op->vtkSocketCommunicator::ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_AllReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      tempr = op->vtkSocketCommunicator::AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_SetPerformHandshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPerformHandshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPerformHandshake(temp0);
      }
    else
      {
      op->vtkSocketCommunicator::SetPerformHandshake(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetPerformHandshakeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPerformHandshakeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPerformHandshakeMinValue();
      }
    else
      {
      tempr = op->vtkSocketCommunicator::GetPerformHandshakeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetPerformHandshakeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPerformHandshakeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPerformHandshakeMaxValue();
      }
    else
      {
      tempr = op->vtkSocketCommunicator::GetPerformHandshakeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_PerformHandshakeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerformHandshakeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PerformHandshakeOn();
      }
    else
      {
      op->vtkSocketCommunicator::PerformHandshakeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_PerformHandshakeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerformHandshakeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PerformHandshakeOff();
      }
    else
      {
      op->vtkSocketCommunicator::PerformHandshakeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetPerformHandshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPerformHandshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPerformHandshake();
      }
    else
      {
      tempr = op->vtkSocketCommunicator::GetPerformHandshake();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_LogToFile_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogToFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->LogToFile(temp0);
      }
    else
      {
      tempr = op->vtkSocketCommunicator::LogToFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSocketCommunicator_LogToFile_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogToFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  char *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->LogToFile(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSocketCommunicator::LogToFile(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSocketCommunicator_LogToFile(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSocketCommunicator_LogToFile_s1(self, args);
    case 2:
      return PyvtkSocketCommunicator_LogToFile_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "LogToFile");
  return NULL;
}



static PyObject *
PyvtkSocketCommunicator_SetReportErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReportErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReportErrors(temp0);
      }
    else
      {
      op->vtkSocketCommunicator::SetReportErrors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetReportErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReportErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReportErrors();
      }
    else
      {
      tempr = op->vtkSocketCommunicator::GetReportErrors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetSocket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  vtkClientSocket *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSocket();
      }
    else
      {
      tempr = op->vtkSocketCommunicator::GetSocket();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_SetSocket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSocket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  vtkClientSocket *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientSocket"))
    {
    if (ap.IsBound())
      {
      op->SetSocket(temp0);
      }
    else
      {
      op->vtkSocketCommunicator::SetSocket(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_Handshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Handshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Handshake();
      }
    else
      {
      tempr = op->vtkSocketCommunicator::Handshake();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ServerSideHandshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ServerSideHandshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->ServerSideHandshake();
      }
    else
      {
      tempr = op->vtkSocketCommunicator::ServerSideHandshake();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ClientSideHandshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClientSideHandshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->ClientSideHandshake();
      }
    else
      {
      tempr = op->vtkSocketCommunicator::ClientSideHandshake();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetIsServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIsServer();
      }
    else
      {
      tempr = op->vtkSocketCommunicator::GetIsServer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSocketCommunicator_Methods[] = {
  {(char*)"GetClassName", PyvtkSocketCommunicator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSocketCommunicator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSocketCommunicator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSocketCommunicator\nC++: vtkSocketCommunicator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSocketCommunicator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSocketCommunicator\nC++: vtkSocketCommunicator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"WaitForConnection", PyvtkSocketCommunicator_WaitForConnection, 1,
   (char*)"V.WaitForConnection(int) -> int\nC++: virtual int WaitForConnection(int port)\nV.WaitForConnection(vtkServerSocket, int) -> int\nC++: virtual int WaitForConnection(vtkServerSocket *socket,\n    unsigned long msec=0)\n\nWait for connection on a given port. These methods return 1 on\nsuccess, 0 on error.\n"},
  {(char*)"CloseConnection", PyvtkSocketCommunicator_CloseConnection, 1,
   (char*)"V.CloseConnection()\nC++: virtual void CloseConnection()\n\nClose a connection.\n"},
  {(char*)"ConnectTo", PyvtkSocketCommunicator_ConnectTo, 1,
   (char*)"V.ConnectTo(string, int) -> int\nC++: virtual int ConnectTo(const char *hostName, int port)\n\nOpen a connection to host.\n"},
  {(char*)"GetSwapBytesInReceivedData", PyvtkSocketCommunicator_GetSwapBytesInReceivedData, 1,
   (char*)"V.GetSwapBytesInReceivedData() -> int\nC++: int GetSwapBytesInReceivedData()\n\nReturns 1 if bytes must be swapped in received ints, floats, etc\n"},
  {(char*)"GetIsConnected", PyvtkSocketCommunicator_GetIsConnected, 1,
   (char*)"V.GetIsConnected() -> int\nC++: int GetIsConnected()\n\nIs the communicator connected?.\n"},
  {(char*)"SetNumberOfProcesses", PyvtkSocketCommunicator_SetNumberOfProcesses, 1,
   (char*)"V.SetNumberOfProcesses(int)\nC++: virtual void SetNumberOfProcesses(int num)\n\nSet the number of processes you will be using.\n"},
  {(char*)"SendVoidArray", PyvtkSocketCommunicator_SendVoidArray, 1,
   (char*)"V.SendVoidArray(, int, int, int, int) -> int\nC++: virtual int SendVoidArray(const void *data, vtkIdType length,\n     int type, int remoteHandle, int tag)\n\nPerforms the actual communication.  You will usually use the\nconvenience Send functions defined in the superclass.\n"},
  {(char*)"ReceiveVoidArray", PyvtkSocketCommunicator_ReceiveVoidArray, 1,
   (char*)"V.ReceiveVoidArray(, int, int, int, int) -> int\nC++: virtual int ReceiveVoidArray(void *data, vtkIdType length,\n    int type, int remoteHandle, int tag)\n\nPerforms the actual communication.  You will usually use the\nconvenience Send functions defined in the superclass.\n"},
  {(char*)"Barrier", PyvtkSocketCommunicator_Barrier, 1,
   (char*)"V.Barrier()\nC++: virtual void Barrier()\n\nThis class foolishly breaks the conventions of the superclass, so\nthis overload fixes the method.\n"},
  {(char*)"BroadcastVoidArray", PyvtkSocketCommunicator_BroadcastVoidArray, 1,
   (char*)"V.BroadcastVoidArray(, int, int, int) -> int\nC++: virtual int BroadcastVoidArray(void *data, vtkIdType length,\n    int type, int srcProcessId)\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {(char*)"GatherVoidArray", PyvtkSocketCommunicator_GatherVoidArray, 1,
   (char*)"V.GatherVoidArray(, , int, int, int) -> int\nC++: virtual int GatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int destProcessId)\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {(char*)"ScatterVoidArray", PyvtkSocketCommunicator_ScatterVoidArray, 1,
   (char*)"V.ScatterVoidArray(, , int, int, int) -> int\nC++: virtual int ScatterVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int srcProcessId)\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {(char*)"AllGatherVoidArray", PyvtkSocketCommunicator_AllGatherVoidArray, 1,
   (char*)"V.AllGatherVoidArray(, , int, int) -> int\nC++: virtual int AllGatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type)\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {(char*)"ReduceVoidArray", PyvtkSocketCommunicator_ReduceVoidArray, 1,
   (char*)"V.ReduceVoidArray(, , int, int, int, int) -> int\nC++: virtual int ReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation,\n    int destProcessId)\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {(char*)"AllReduceVoidArray", PyvtkSocketCommunicator_AllReduceVoidArray, 1,
   (char*)"V.AllReduceVoidArray(, , int, int, int) -> int\nC++: virtual int AllReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation)\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {(char*)"SetPerformHandshake", PyvtkSocketCommunicator_SetPerformHandshake, 1,
   (char*)"V.SetPerformHandshake(int)\nC++: void SetPerformHandshake(int)\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {(char*)"GetPerformHandshakeMinValue", PyvtkSocketCommunicator_GetPerformHandshakeMinValue, 1,
   (char*)"V.GetPerformHandshakeMinValue() -> int\nC++: int GetPerformHandshakeMinValue()\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {(char*)"GetPerformHandshakeMaxValue", PyvtkSocketCommunicator_GetPerformHandshakeMaxValue, 1,
   (char*)"V.GetPerformHandshakeMaxValue() -> int\nC++: int GetPerformHandshakeMaxValue()\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {(char*)"PerformHandshakeOn", PyvtkSocketCommunicator_PerformHandshakeOn, 1,
   (char*)"V.PerformHandshakeOn()\nC++: void PerformHandshakeOn()\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {(char*)"PerformHandshakeOff", PyvtkSocketCommunicator_PerformHandshakeOff, 1,
   (char*)"V.PerformHandshakeOff()\nC++: void PerformHandshakeOff()\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {(char*)"GetPerformHandshake", PyvtkSocketCommunicator_GetPerformHandshake, 1,
   (char*)"V.GetPerformHandshake() -> int\nC++: int GetPerformHandshake()\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {(char*)"LogToFile", PyvtkSocketCommunicator_LogToFile, 1,
   (char*)"V.LogToFile(string) -> int\nC++: virtual int LogToFile(const char *name)\nV.LogToFile(string, int) -> int\nC++: virtual int LogToFile(const char *name, int append)\n\nLog messages to the given file.  The file is truncated unless the\nsecond argument is non-zero (default is to truncate).  If the\nfile name is empty or NULL, logging is disabled.  Returns 0 if\nthe file failed to open, and 1 otherwise.\n"},
  {(char*)"SetReportErrors", PyvtkSocketCommunicator_SetReportErrors, 1,
   (char*)"V.SetReportErrors(int)\nC++: void SetReportErrors(int a)\n\nIf ReportErrors if false, all vtkErrorMacros are suppressed.\n"},
  {(char*)"GetReportErrors", PyvtkSocketCommunicator_GetReportErrors, 1,
   (char*)"V.GetReportErrors() -> int\nC++: int GetReportErrors()\n\nIf ReportErrors if false, all vtkErrorMacros are suppressed.\n"},
  {(char*)"GetSocket", PyvtkSocketCommunicator_GetSocket, 1,
   (char*)"V.GetSocket() -> vtkClientSocket\nC++: vtkClientSocket *GetSocket()\n\nGet/Set the actual socket used for communication.\n"},
  {(char*)"SetSocket", PyvtkSocketCommunicator_SetSocket, 1,
   (char*)"V.SetSocket(vtkClientSocket)\nC++: void SetSocket(vtkClientSocket *)\n\nGet/Set the actual socket used for communication.\n"},
  {(char*)"Handshake", PyvtkSocketCommunicator_Handshake, 1,
   (char*)"V.Handshake() -> int\nC++: int Handshake()\n\nPerforms handshake. This uses vtkClientSocket::ConnectingSide to\ndecide whether to perform ServerSideHandshake or\nClientSideHandshake.\n"},
  {(char*)"ServerSideHandshake", PyvtkSocketCommunicator_ServerSideHandshake, 1,
   (char*)"V.ServerSideHandshake() -> int\nC++: int ServerSideHandshake()\n\nPerforms ServerSide handshake. One should preferably use\nHandshake() which calls ServerSideHandshake or\nClientSideHandshake as required.\n"},
  {(char*)"ClientSideHandshake", PyvtkSocketCommunicator_ClientSideHandshake, 1,
   (char*)"V.ClientSideHandshake() -> int\nC++: int ClientSideHandshake()\n\nPerforms ClientSide handshake. One should preferably use\nHandshake() which calls ServerSideHandshake or\nClientSideHandshake as required.\n"},
  {(char*)"GetIsServer", PyvtkSocketCommunicator_GetIsServer, 1,
   (char*)"V.GetIsServer() -> int\nC++: int GetIsServer()\n\nReturns true if this side of the socket is the server.  The\nresult is invalid if the socket is not connected.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSocketCommunicator_StaticNew()
{
  return vtkSocketCommunicator::New();
}

PyObject *PyVTKClass_vtkSocketCommunicatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSocketCommunicator_StaticNew,
    PyvtkSocketCommunicator_Methods,
    "vtkSocketCommunicator", modulename,
    NULL, NULL,
    PyvtkSocketCommunicator_Doc(),
    PyVTKClass_vtkCommunicatorNew(modulename));
  return cls;
}

const char **PyvtkSocketCommunicator_Doc()
{
  static const char *docstring[] = {
    "vtkSocketCommunicator - Process communication using Sockets\n\n",
    "Superclass: vtkCommunicator\n\n",
    "This is a concrete implementation of vtkCommunicator which supports\ninterprocess communication using BSD style sockets. It supports byte\nswapping for the communication of  machines with different\nendianness.\n\nCaveats:\n\nCommunication between 32 bit and 64 bit systems is not fully\nsupported. If a type does not have the same length on both systems,\nthis communicator can not be used to transfer data o",
    "f that type.\n\nSee Also:\n\nvtkCommunicator vtkSocketController\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSocketCommunicator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSocketCommunicatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSocketCommunicator", o) != 0)
    {
    Py_DECREF(o);
    }

}

