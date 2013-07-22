// python wrapper for vtkSocketController
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
#include "vtkSocketController.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSocketController(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSocketController(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSocketControllerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSocketControllerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMultiProcessControllerNew
extern "C" { PyObject *PyVTKClass_vtkMultiProcessControllerNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiProcessControllerNew
#endif

static const char **PyvtkSocketController_Doc();


static PyObject *
PyvtkSocketController_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

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
      tempr = op->vtkSocketController::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

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
      tempr = op->vtkSocketController::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  vtkSocketController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSocketController::NewInstance();
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
PyvtkSocketController_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSocketController *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSocketController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkSocketController::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_Finalize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finalize();
      }
    else
      {
      op->vtkSocketController::Finalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSocketController_Finalize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Finalize(temp0);
      }
    else
      {
      op->vtkSocketController::Finalize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSocketController_Finalize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSocketController_Finalize_s1(self, args);
    case 1:
      return PyvtkSocketController_Finalize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Finalize");
  return NULL;
}



static PyObject *
PyvtkSocketController_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SingleMethodExecute();
      }
    else
      {
      op->vtkSocketController::SingleMethodExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultipleMethodExecute();
      }
    else
      {
      op->vtkSocketController::MultipleMethodExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_CreateOutputWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateOutputWindow();
      }
    else
      {
      op->vtkSocketController::CreateOutputWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_WaitForConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

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
      tempr = op->vtkSocketController::WaitForConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_CloseConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CloseConnection();
      }
    else
      {
      op->vtkSocketController::CloseConnection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_ConnectTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConnectTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

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
      tempr = op->vtkSocketController::ConnectTo(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_GetSwapBytesInReceivedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBytesInReceivedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

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
      tempr = op->vtkSocketController::GetSwapBytesInReceivedData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_SetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  vtkSocketCommunicator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSocketCommunicator"))
    {
    if (ap.IsBound())
      {
      op->SetCommunicator(temp0);
      }
    else
      {
      op->vtkSocketController::SetCommunicator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocketController_CreateCompliantController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCompliantController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->CreateCompliantController();
      }
    else
      {
      tempr = op->vtkSocketController::CreateCompliantController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSocketController_Methods[] = {
  {(char*)"GetClassName", PyvtkSocketController_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSocketController_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSocketController_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSocketController\nC++: vtkSocketController *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSocketController_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSocketController\nC++: vtkSocketController *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkSocketController_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nThis method is for initialiazing sockets. One of these is\nREQUIRED for Windows.\n"},
  {(char*)"Finalize", PyvtkSocketController_Finalize, 1,
   (char*)"V.Finalize()\nC++: void Finalize()\nV.Finalize(int)\nC++: void Finalize(int)\n\nDoes not apply to sockets. Does nothing.\n"},
  {(char*)"SingleMethodExecute", PyvtkSocketController_SingleMethodExecute, 1,
   (char*)"V.SingleMethodExecute()\nC++: void SingleMethodExecute()\n\nDoes not apply to sockets. Does nothing.\n"},
  {(char*)"MultipleMethodExecute", PyvtkSocketController_MultipleMethodExecute, 1,
   (char*)"V.MultipleMethodExecute()\nC++: void MultipleMethodExecute()\n\nDoes not apply to sockets.  Does nothing.\n"},
  {(char*)"CreateOutputWindow", PyvtkSocketController_CreateOutputWindow, 1,
   (char*)"V.CreateOutputWindow()\nC++: void CreateOutputWindow()\n\nDoes not apply to sockets. Does nothing.\n"},
  {(char*)"WaitForConnection", PyvtkSocketController_WaitForConnection, 1,
   (char*)"V.WaitForConnection(int) -> int\nC++: virtual int WaitForConnection(int port)\n\nWait for connection on a given port, forwarded to the\ncommunicator\n"},
  {(char*)"CloseConnection", PyvtkSocketController_CloseConnection, 1,
   (char*)"V.CloseConnection()\nC++: virtual void CloseConnection()\n\nClose a connection, forwarded to the communicator\n"},
  {(char*)"ConnectTo", PyvtkSocketController_ConnectTo, 1,
   (char*)"V.ConnectTo(string, int) -> int\nC++: virtual int ConnectTo(const char *hostName, int port)\n\nOpen a connection to a give machine, forwarded to the\ncommunicator\n"},
  {(char*)"GetSwapBytesInReceivedData", PyvtkSocketController_GetSwapBytesInReceivedData, 1,
   (char*)"V.GetSwapBytesInReceivedData() -> int\nC++: int GetSwapBytesInReceivedData()\n\n"},
  {(char*)"SetCommunicator", PyvtkSocketController_SetCommunicator, 1,
   (char*)"V.SetCommunicator(vtkSocketCommunicator)\nC++: void SetCommunicator(vtkSocketCommunicator *comm)\n\nSet the communicator used in normal and rmi communications.\n"},
  {(char*)"CreateCompliantController", PyvtkSocketController_CreateCompliantController, 1,
   (char*)"V.CreateCompliantController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *CreateCompliantController()\n\nFOOLISH MORTALS!  Thou hast forsaken the sacred laws of ad-hoc\npolymorphism when thou broke a critical assumption of the\nsuperclass (namely, each process has thine own id).  The time\nframe to fix thy error has passed. Too much code has come to rely\non this abhorrent behavior.  Instead, we offer this gift: a\nmethod for creating an equivalent communicator with correct\nprocess id semantics.  The calling code is responsible for\ndeleting this controller.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSocketController_StaticNew()
{
  return vtkSocketController::New();
}

PyObject *PyVTKClass_vtkSocketControllerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSocketController_StaticNew,
    PyvtkSocketController_Methods,
    "vtkSocketController", modulename,
    NULL, NULL,
    PyvtkSocketController_Doc(),
    PyVTKClass_vtkMultiProcessControllerNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(1010580540);
    if (o && PyDict_SetItemString(d, (char *)"ENDIAN_TAG", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1027423549);
    if (o && PyDict_SetItemString(d, (char *)"IDTYPESIZE_TAG", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1044266558);
    if (o && PyDict_SetItemString(d, (char *)"VERSION_TAG", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x3f3f3f3f);
    if (o && PyDict_SetItemString(d, (char *)"HASH_TAG", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkSocketController_Doc()
{
  static const char *docstring[] = {
    "vtkSocketController - Process communication using Sockets\n\n",
    "Superclass: vtkMultiProcessController\n\n",
    "This is a concrete implementation of vtkMultiProcessController. It\nsupports one-to-one communication using sockets. Note that process 0\nwill always correspond to self and process 1 to the remote process.\nThis class is best used with ports.\n\nSee Also:\n\nvtkMultiProcessController vtkSocketCommunicator vtkInputPort\nvtkOutputPort\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSocketController(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSocketControllerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSocketController", o) != 0)
    {
    Py_DECREF(o);
    }

}

