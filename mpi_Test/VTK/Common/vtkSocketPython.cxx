// python wrapper for vtkSocket
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
#include "vtkSocket.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSocket(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSocket(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSocketNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSocketNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSocket_Doc();


static PyObject *
PyvtkSocket_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

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
      tempr = op->vtkSocket::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocket_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

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
      tempr = op->vtkSocket::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocket_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  vtkSocket *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSocket::NewInstance();
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
PyvtkSocket_GetConnected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConnected();
      }
    else
      {
      tempr = op->vtkSocket::GetConnected();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocket_CloseSocket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseSocket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CloseSocket();
      }
    else
      {
      op->vtkSocket::CloseSocket();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSocket_Send(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  void  *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->Send(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSocket::Send(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocket_Receive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  void  *temp0 = NULL;
  int temp1;
  int temp2 = 1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      tempr = op->Receive(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSocket::Receive(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSocket_GetSocketDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocketDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocket *op = static_cast<vtkSocket *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSocketDescriptor();
      }
    else
      {
      tempr = op->vtkSocket::GetSocketDescriptor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSocket_Methods[] = {
  {(char*)"GetClassName", PyvtkSocket_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSocket_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSocket_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSocket\nC++: vtkSocket *NewInstance()\n\n"},
  {(char*)"GetConnected", PyvtkSocket_GetConnected, 1,
   (char*)"V.GetConnected() -> int\nC++: int GetConnected()\n\nCheck is the socket is alive.\n"},
  {(char*)"CloseSocket", PyvtkSocket_CloseSocket, 1,
   (char*)"V.CloseSocket()\nC++: void CloseSocket()\n\nClose the socket.\n"},
  {(char*)"Send", PyvtkSocket_Send, 1,
   (char*)"V.Send(, int) -> int\nC++: int Send(const void *data, int length)\n\nThese methods send data over the socket. Returns 1 on success, 0\non error and raises vtkCommand::ErrorEvent.\n"},
  {(char*)"Receive", PyvtkSocket_Receive, 1,
   (char*)"V.Receive(, int, int) -> int\nC++: int Receive(void *data, int length, int readFully=1)\n\nReceive data from the socket. This call blocks until some data is\nread from the socket. When readFully is set, this call will block\nuntil all the requested data is read from the socket. 0 on error,\nelse number of bytes read is returned. On error,\nvtkCommand::ErrorEvent is raised.\n"},
  {(char*)"GetSocketDescriptor", PyvtkSocket_GetSocketDescriptor, 1,
   (char*)"V.GetSocketDescriptor() -> int\nC++: int GetSocketDescriptor()\n\nProvides access to  the internal socket descriptor. This is valid\nonly when GetConnected() returns true.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkSocketNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkSocket_Methods,
    "vtkSocket", modulename,
    NULL, NULL,
    PyvtkSocket_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSocket_Doc()
{
  static const char *docstring[] = {
    "vtkSocket - BSD socket encapsulation.\n\n",
    "Superclass: vtkObject\n\n",
    "This abstract class encapsulates a BSD socket. It provides an API for\nbasic socket operations.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSocket(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSocketNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSocket", o) != 0)
    {
    Py_DECREF(o);
    }

}

