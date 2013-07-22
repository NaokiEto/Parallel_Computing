// python wrapper for vtkServerSocket
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
#include "vtkServerSocket.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkServerSocket(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkServerSocket(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkServerSocketNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkServerSocketNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSocketNew
extern "C" { PyObject *PyVTKClass_vtkSocketNew(const char *); }
#define DECLARED_PyVTKClass_vtkSocketNew
#endif

static const char **PyvtkServerSocket_Doc();


static PyObject *
PyvtkServerSocket_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

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
      tempr = op->vtkServerSocket::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkServerSocket_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

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
      tempr = op->vtkServerSocket::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkServerSocket_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

  vtkServerSocket *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkServerSocket::NewInstance();
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
PyvtkServerSocket_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkServerSocket *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkServerSocket::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkServerSocket_CreateServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->CreateServer(temp0);
      }
    else
      {
      tempr = op->vtkServerSocket::CreateServer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkServerSocket_WaitForConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

  unsigned long temp0 = 0;
  vtkClientSocket *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      tempr = op->WaitForConnection(temp0);
      }
    else
      {
      tempr = op->vtkServerSocket::WaitForConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkServerSocket_GetServerPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetServerPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkServerSocket *op = static_cast<vtkServerSocket *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetServerPort();
      }
    else
      {
      tempr = op->vtkServerSocket::GetServerPort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkServerSocket_Methods[] = {
  {(char*)"GetClassName", PyvtkServerSocket_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkServerSocket_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkServerSocket_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkServerSocket\nC++: vtkServerSocket *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkServerSocket_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkServerSocket\nC++: vtkServerSocket *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CreateServer", PyvtkServerSocket_CreateServer, 1,
   (char*)"V.CreateServer(int) -> int\nC++: int CreateServer(int port)\n\nCreates a server socket at a given port and binds to it. Returns\n-1 on error. 0 on success.\n"},
  {(char*)"WaitForConnection", PyvtkServerSocket_WaitForConnection, 1,
   (char*)"V.WaitForConnection(int) -> vtkClientSocket\nC++: vtkClientSocket *WaitForConnection(unsigned long msec=0)\n\nWaits for a connection. When a connection is received a new\nvtkClientSocket object is created and returned. Returns NULL on\ntimeout.\n"},
  {(char*)"GetServerPort", PyvtkServerSocket_GetServerPort, 1,
   (char*)"V.GetServerPort() -> int\nC++: int GetServerPort()\n\nReturns the port on which the server is running.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkServerSocket_StaticNew()
{
  return vtkServerSocket::New();
}

PyObject *PyVTKClass_vtkServerSocketNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkServerSocket_StaticNew,
    PyvtkServerSocket_Methods,
    "vtkServerSocket", modulename,
    NULL, NULL,
    PyvtkServerSocket_Doc(),
    PyVTKClass_vtkSocketNew(modulename));
  return cls;
}

const char **PyvtkServerSocket_Doc()
{
  static const char *docstring[] = {
    "vtkServerSocket - Encapsulate a socket that accepts connections.\n\n",
    "Superclass: vtkSocket\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkServerSocket(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkServerSocketNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkServerSocket", o) != 0)
    {
    Py_DECREF(o);
    }

}

