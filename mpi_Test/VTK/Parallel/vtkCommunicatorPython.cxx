// python wrapper for vtkCommunicator
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
#include "vtkCommunicator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCommunicator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCommunicator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCommunicatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCommunicatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCommunicator_Doc();


static PyObject *
PyvtkCommunicator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkCommunicator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCommunicator::NewInstance();
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
PyvtkCommunicator_SetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      op->vtkCommunicator::SetNumberOfProcesses(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::GetNumberOfProcesses();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_GetLocalProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::GetLocalProcessId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_Send_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::Send(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::Send(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::Send(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCommunicator_Send_Methods[] = {
  {NULL, PyvtkCommunicator_Send_s1, 1,
   (char*)"@Oii *vtkDataObject"},
  {NULL, PyvtkCommunicator_Send_s2, 1,
   (char*)"@Oii *vtkDataArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCommunicator_Send(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Send_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkCommunicator_Send_s3(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Send");
  return NULL;
}



static PyObject *
PyvtkCommunicator_SendVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  int temp3;
  int temp4;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    tempr = op->SendVoidArray(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_Receive_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::Receive(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Receive_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::Receive(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Receive_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::Receive(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCommunicator_Receive_Methods[] = {
  {NULL, PyvtkCommunicator_Receive_s1, 1,
   (char*)"@Oii *vtkDataObject"},
  {NULL, PyvtkCommunicator_Receive_s2, 1,
   (char*)"@Oii *vtkDataArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCommunicator_Receive(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Receive_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkCommunicator_Receive_s3(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Receive");
  return NULL;
}



static PyObject *
PyvtkCommunicator_ReceiveDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::ReceiveDataObject(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_ReceiveVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = NULL;
  vtkIdType temp1;
  int temp2;
  int temp3;
  int temp4;
  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    tempr = op->ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_GetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::GetCount();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Barrier();
      }
    else
      {
      op->vtkCommunicator::Barrier();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_Broadcast_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::Broadcast(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Broadcast_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::Broadcast(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Broadcast_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::Broadcast(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCommunicator_Broadcast_Methods[] = {
  {NULL, PyvtkCommunicator_Broadcast_s2, 1,
   (char*)"@Oi *vtkDataObject"},
  {NULL, PyvtkCommunicator_Broadcast_s3, 1,
   (char*)"@Oi *vtkDataArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkCommunicator_Broadcast(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Broadcast_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCommunicator_Broadcast_s1(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Broadcast");
  return NULL;
}



static PyObject *
PyvtkCommunicator_Gather_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::Gather(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Gather_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::Gather(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Gather(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkCommunicator_Gather_s1(self, args);
    case 3:
      return PyvtkCommunicator_Gather_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Gather");
  return NULL;
}



static PyObject *
PyvtkCommunicator_GatherV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::GatherV(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_Scatter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::Scatter(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Scatter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::Scatter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Scatter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkCommunicator_Scatter_s1(self, args);
    case 3:
      return PyvtkCommunicator_Scatter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Scatter");
  return NULL;
}



static PyObject *
PyvtkCommunicator_AllGather_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::AllGather(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGather_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::AllGather(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGather(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCommunicator_AllGather_s1(self, args);
    case 2:
      return PyvtkCommunicator_AllGather_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AllGather");
  return NULL;
}



static PyObject *
PyvtkCommunicator_AllGatherV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::AllGatherV(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_Reduce_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Reduce_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_Reduce(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkCommunicator_Reduce_s1(self, args);
    case 4:
      return PyvtkCommunicator_Reduce_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Reduce");
  return NULL;
}



static PyObject *
PyvtkCommunicator_AllReduce_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::AllReduce(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_AllReduce_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::AllReduce(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCommunicator_AllReduce(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkCommunicator_AllReduce_s1(self, args);
    case 3:
      return PyvtkCommunicator_AllReduce_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AllReduce");
  return NULL;
}



static PyObject *
PyvtkCommunicator_BroadcastVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::BroadcastVoidArray(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_GatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::GatherVoidArray(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_ScatterVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::ScatterVoidArray(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_AllGatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::AllGatherVoidArray(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_ReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_AllReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

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
      tempr = op->vtkCommunicator::AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_SetUseCopy(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUseCopy");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkCommunicator::SetUseCopy(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_GetParentProcessor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetParentProcessor");

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkCommunicator::GetParentProcessor(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_GetLeftChildProcessor(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLeftChildProcessor");

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkCommunicator::GetLeftChildProcessor(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_MarshalDataObject(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MarshalDataObject");

  vtkDataObject *temp0 = NULL;
  vtkCharArray *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetVTKObject(temp1, "vtkCharArray"))
    {
    tempr = vtkCommunicator::MarshalDataObject(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommunicator_UnMarshalDataObject(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "UnMarshalDataObject");

  vtkCharArray *temp0 = NULL;
  vtkDataObject *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCharArray") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    tempr = vtkCommunicator::UnMarshalDataObject(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCommunicator_Methods[] = {
  {(char*)"GetClassName", PyvtkCommunicator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCommunicator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCommunicator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCommunicator\nC++: vtkCommunicator *NewInstance()\n\n"},
  {(char*)"SetNumberOfProcesses", PyvtkCommunicator_SetNumberOfProcesses, 1,
   (char*)"V.SetNumberOfProcesses(int)\nC++: virtual void SetNumberOfProcesses(int num)\n\nSet the number of processes you will be using.  This defaults to\nthe maximum number available.  If you set this to a value higher\nthan the default, you will get an error.\n"},
  {(char*)"GetNumberOfProcesses", PyvtkCommunicator_GetNumberOfProcesses, 1,
   (char*)"V.GetNumberOfProcesses() -> int\nC++: int GetNumberOfProcesses()\n\nSet the number of processes you will be using.  This defaults to\nthe maximum number available.  If you set this to a value higher\nthan the default, you will get an error.\n"},
  {(char*)"GetLocalProcessId", PyvtkCommunicator_GetLocalProcessId, 1,
   (char*)"V.GetLocalProcessId() -> int\nC++: int GetLocalProcessId()\n\nTells you which process [0, NumProcess) you are in.\n"},
  {(char*)"Send", PyvtkCommunicator_Send, 1,
   (char*)"V.Send(vtkDataObject, int, int) -> int\nC++: int Send(vtkDataObject *data, int remoteHandle, int tag)\nV.Send(vtkDataArray, int, int) -> int\nC++: int Send(vtkDataArray *data, int remoteHandle, int tag)\nV.Send(string, int, int, int) -> int\nC++: int Send(const char *data, vtkIdType length,\n    int remoteHandle, int tag)\n\nThis method sends a data object to a destination. Tag eliminates\nambiguity and is used to match sends to receives.\n"},
  {(char*)"SendVoidArray", PyvtkCommunicator_SendVoidArray, 1,
   (char*)"V.SendVoidArray(, int, int, int, int) -> int\nC++: virtual int SendVoidArray(const void *data, vtkIdType length,\n     int type, int remoteHandle, int tag)\n\nSubclasses have to supply this method to send various arrays of\ndata. The type arg is one of the VTK type constants recognized by\nthe vtkTemplateMacro (VTK_FLOAT, VTK_INT, etc.).  length is\nmeasured in number of values (as opposed to number of bytes).\n"},
  {(char*)"Receive", PyvtkCommunicator_Receive, 1,
   (char*)"V.Receive(vtkDataObject, int, int) -> int\nC++: int Receive(vtkDataObject *data, int remoteHandle, int tag)\nV.Receive(vtkDataArray, int, int) -> int\nC++: int Receive(vtkDataArray *data, int remoteHandle, int tag)\nV.Receive(string, int, int, int) -> int\nC++: int Receive(char *data, vtkIdType maxlength,\n    int remoteHandle, int tag)\n\nThis method receives a data object from a corresponding send. It\nblocks until the receive is finished.\n"},
  {(char*)"ReceiveDataObject", PyvtkCommunicator_ReceiveDataObject, 1,
   (char*)"V.ReceiveDataObject(int, int) -> vtkDataObject\nC++: vtkDataObject *ReceiveDataObject(int remoteHandle, int tag)\n\nThe caller does not have to know the data type before this call\nis made. It returns the newly created object.\n"},
  {(char*)"ReceiveVoidArray", PyvtkCommunicator_ReceiveVoidArray, 1,
   (char*)"V.ReceiveVoidArray(, int, int, int, int) -> int\nC++: virtual int ReceiveVoidArray(void *data, vtkIdType maxlength,\n     int type, int remoteHandle, int tag)\n\nSubclasses have to supply this method to receive various arrays\nof data. The type arg is one of the VTK type constants recognized\nby the vtkTemplateMacro (VTK_FLOAT, VTK_INT, etc.).  maxlength is\nmeasured in number of values (as opposed to number of bytes) and\nis the maxmum length of the data to receive.  If the maxlength is\nless than the length of the message sent by the sender, an error\nwill be flagged. Once a message is received, use the GetCount()\nmethod to determine the actual size of the data received.\n"},
  {(char*)"GetCount", PyvtkCommunicator_GetCount, 1,
   (char*)"V.GetCount() -> int\nC++: vtkIdType GetCount()\n\nReturns the number of words received by the most recent\nReceive(). Note that this is not the number of bytes received,\nbut the number of items of the data-type received by the most\nrecent Receive() eg. if Receive(int*,..) was used, then this\nreturns the number of ints received; if Receive(double*,..) was\nused, then this returns the number of doubles received etc. The\nreturn value is valid only after a successful Receive().\n"},
  {(char*)"Barrier", PyvtkCommunicator_Barrier, 1,
   (char*)"V.Barrier()\nC++: virtual void Barrier()\n\nWill block the processes until all other processes reach the\nBarrier function.\n"},
  {(char*)"Broadcast", PyvtkCommunicator_Broadcast, 1,
   (char*)"V.Broadcast(string, int, int) -> int\nC++: int Broadcast(char *data, vtkIdType length, int srcProcessId)\nV.Broadcast(vtkDataObject, int) -> int\nC++: int Broadcast(vtkDataObject *data, int srcProcessId)\nV.Broadcast(vtkDataArray, int) -> int\nC++: int Broadcast(vtkDataArray *data, int srcProcessId)\n\nBroadcast sends the array in the process with id srcProcessId to\nall of the other processes.  All processes must call these method\nwith the same arguments in order for it to complete.\n"},
  {(char*)"Gather", PyvtkCommunicator_Gather, 1,
   (char*)"V.Gather(string, string, int, int) -> int\nC++: int Gather(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int destProcessId)\nV.Gather(vtkDataArray, vtkDataArray, int) -> int\nC++: int Gather(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int destProcessId)\n\nGather collects arrays in the process with id destProcessId. \nEach process (including the destination) sends the contents of\nits send buffer to the destination process.  The destination\nprocess receives the messages and stores them in rank order.  The\nlength argument (which must be the same on all processes) is the\nlength of the sendBuffers.  The recvBuffer (on te destination\nprocess) must be of length length*numProcesses.  Gather is the\ninverse operation of Scatter.\n"},
  {(char*)"GatherV", PyvtkCommunicator_GatherV, 1,
   (char*)"V.GatherV(vtkDataArray, vtkDataArray, int) -> int\nC++: int GatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int destProcessId)\n\nGatherV is the vector variant of Gather.  It extends the\nfunctionality of Gather by allowing a varying count of data from\neach process. GatherV collects arrays in the process with id\ndestProcessId.  Each process (including the destination) sends\nthe contents of its send buffer to the destination process.  The\ndestination process receives the messages and stores them in rank\norder.  The sendLength argument defines how much the local\nprocess sends to destProcessId andrecvLengths is an array\ncontaining the amount destProcessId receives from each process,\nin rank order.\n"},
  {(char*)"Scatter", PyvtkCommunicator_Scatter, 1,
   (char*)"V.Scatter(string, string, int, int) -> int\nC++: int Scatter(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int srcProcessId)\nV.Scatter(vtkDataArray, vtkDataArray, int) -> int\nC++: int Scatter(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int srcProcessId)\n\nScatter takes an array in the process with id srcProcessId and\ndistributes it.  Each process (including the source) receives a\nportion of the send buffer.  Process 0 receives the first length\nvalues, process 1 receives the second length values, and so on. \nScatter is the inverse operation of Gather.\n"},
  {(char*)"AllGather", PyvtkCommunicator_AllGather, 1,
   (char*)"V.AllGather(string, string, int) -> int\nC++: int AllGather(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length)\nV.AllGather(vtkDataArray, vtkDataArray) -> int\nC++: int AllGather(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer)\n\nSame as gather except that the result ends up on all processes.\n"},
  {(char*)"AllGatherV", PyvtkCommunicator_AllGatherV, 1,
   (char*)"V.AllGatherV(vtkDataArray, vtkDataArray) -> int\nC++: int AllGatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer)\n\nSame as GatherV except that the result is placed in all\nprocesses.\n"},
  {(char*)"Reduce", PyvtkCommunicator_Reduce, 1,
   (char*)"V.Reduce(string, string, int, int, int) -> int\nC++: int Reduce(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nV.Reduce(vtkDataArray, vtkDataArray, int, int) -> int\nC++: int Reduce(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int operation, int destProcessId)\n\nReduce an array to the given destination process.  This version\nof Reduce takes an identifier defined in the\nvtkCommunicator::StandardOperations enum to define the operation.\n"},
  {(char*)"AllReduce", PyvtkCommunicator_AllReduce, 1,
   (char*)"V.AllReduce(string, string, int, int) -> int\nC++: int AllReduce(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int operation)\nV.AllReduce(vtkDataArray, vtkDataArray, int) -> int\nC++: int AllReduce(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int operation)\n\nSame as Reduce except that the result is placed in all of the\nprocesses.\n"},
  {(char*)"BroadcastVoidArray", PyvtkCommunicator_BroadcastVoidArray, 1,
   (char*)"V.BroadcastVoidArray(, int, int, int) -> int\nC++: virtual int BroadcastVoidArray(void *data, vtkIdType length,\n    int type, int srcProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {(char*)"GatherVoidArray", PyvtkCommunicator_GatherVoidArray, 1,
   (char*)"V.GatherVoidArray(, , int, int, int) -> int\nC++: virtual int GatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int destProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {(char*)"ScatterVoidArray", PyvtkCommunicator_ScatterVoidArray, 1,
   (char*)"V.ScatterVoidArray(, , int, int, int) -> int\nC++: virtual int ScatterVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int srcProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {(char*)"AllGatherVoidArray", PyvtkCommunicator_AllGatherVoidArray, 1,
   (char*)"V.AllGatherVoidArray(, , int, int) -> int\nC++: virtual int AllGatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {(char*)"ReduceVoidArray", PyvtkCommunicator_ReduceVoidArray, 1,
   (char*)"V.ReduceVoidArray(, , int, int, int, int) -> int\nC++: virtual int ReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation,\n    int destProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {(char*)"AllReduceVoidArray", PyvtkCommunicator_AllReduceVoidArray, 1,
   (char*)"V.AllReduceVoidArray(, , int, int, int) -> int\nC++: virtual int AllReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {(char*)"SetUseCopy", PyvtkCommunicator_SetUseCopy, 1,
   (char*)"V.SetUseCopy(int)\nC++: static void SetUseCopy(int useCopy)\n\n"},
  {(char*)"GetParentProcessor", PyvtkCommunicator_GetParentProcessor, 1,
   (char*)"V.GetParentProcessor(int) -> int\nC++: static int GetParentProcessor(int pid)\n\nSome helper functions when dealing with heap tree - based\nalgorthims - we don't need a function for getting the right\nprocessor since it is 1 + theLeftProcessor\n"},
  {(char*)"GetLeftChildProcessor", PyvtkCommunicator_GetLeftChildProcessor, 1,
   (char*)"V.GetLeftChildProcessor(int) -> int\nC++: static int GetLeftChildProcessor(int pid)\n\nSome helper functions when dealing with heap tree - based\nalgorthims - we don't need a function for getting the right\nprocessor since it is 1 + theLeftProcessor\n"},
  {(char*)"MarshalDataObject", PyvtkCommunicator_MarshalDataObject, 1,
   (char*)"V.MarshalDataObject(vtkDataObject, vtkCharArray) -> int\nC++: static int MarshalDataObject(vtkDataObject *object,\n    vtkCharArray *buffer)\n\nConvert a data object into a string that can be transmitted and\nvice versa. Returns 1 for success and 0 for failure. WARNING:\nThis will only work for types that have a vtkDataWriter class.\n"},
  {(char*)"UnMarshalDataObject", PyvtkCommunicator_UnMarshalDataObject, 1,
   (char*)"V.UnMarshalDataObject(vtkCharArray, vtkDataObject) -> int\nC++: static int UnMarshalDataObject(vtkCharArray *buffer,\n    vtkDataObject *object)\n\nConvert a data object into a string that can be transmitted and\nvice versa. Returns 1 for success and 0 for failure. WARNING:\nThis will only work for types that have a vtkDataWriter class.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkCommunicatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkCommunicator_Methods,
    "vtkCommunicator", modulename,
    NULL, NULL,
    PyvtkCommunicator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(10);
    if (o && PyDict_SetItemString(d, (char *)"BROADCAST_TAG", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(11);
    if (o && PyDict_SetItemString(d, (char *)"GATHER_TAG", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(12);
    if (o && PyDict_SetItemString(d, (char *)"GATHERV_TAG", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(13);
    if (o && PyDict_SetItemString(d, (char *)"SCATTER_TAG", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(14);
    if (o && PyDict_SetItemString(d, (char *)"SCATTERV_TAG", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(15);
    if (o && PyDict_SetItemString(d, (char *)"REDUCE_TAG", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(16);
    if (o && PyDict_SetItemString(d, (char *)"BARRIER_TAG", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"MAX_OP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"MIN_OP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"SUM_OP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"PRODUCT_OP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"LOGICAL_AND_OP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"BITWISE_AND_OP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"LOGICAL_OR_OP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"BITWISE_OR_OP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"LOGICAL_XOR_OP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(9);
    if (o && PyDict_SetItemString(d, (char *)"BITWISE_XOR_OP", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkCommunicator_Doc()
{
  static const char *docstring[] = {
    "vtkCommunicator - Used to send/receive messages in a multiprocess\nenvironment.\n\n",
    "Superclass: vtkObject\n\n",
    "This is an abstact class which contains functionality for sending and\nreceiving inter-process messages. It contains methods for marshaling\nan object into a string (currently used by the MPI communicator but\nnot the shared memory communicator).\n\nCaveats:\n\nCommunication between systems with different vtkIdTypes is not\nsupported. All machines have to have the same vtkIdType.\n\nSee Also:\n\nvtkMPICommuni",
    "cator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCommunicator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCommunicatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCommunicator", o) != 0)
    {
    Py_DECREF(o);
    }

}

