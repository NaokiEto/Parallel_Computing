// python wrapper for vtkClientSocket
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
#include "vtkClientSocket.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkClientSocket(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkClientSocket(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkClientSocketNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkClientSocketNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSocketNew
extern "C" { PyObject *PyVTKClass_vtkSocketNew(const char *); }
#define DECLARED_PyVTKClass_vtkSocketNew
#endif

static const char **PyvtkClientSocket_Doc();


static PyObject *
PyvtkClientSocket_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientSocket *op = static_cast<vtkClientSocket *>(vp);

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
      tempr = op->vtkClientSocket::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientSocket_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientSocket *op = static_cast<vtkClientSocket *>(vp);

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
      tempr = op->vtkClientSocket::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientSocket_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientSocket *op = static_cast<vtkClientSocket *>(vp);

  vtkClientSocket *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkClientSocket::NewInstance();
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
PyvtkClientSocket_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkClientSocket *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkClientSocket::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientSocket_ConnectToServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConnectToServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientSocket *op = static_cast<vtkClientSocket *>(vp);

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
      tempr = op->ConnectToServer(temp0, temp1);
      }
    else
      {
      tempr = op->vtkClientSocket::ConnectToServer(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientSocket_GetConnectingSide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnectingSide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientSocket *op = static_cast<vtkClientSocket *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConnectingSide();
      }
    else
      {
      tempr = op->vtkClientSocket::GetConnectingSide();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkClientSocket_Methods[] = {
  {(char*)"GetClassName", PyvtkClientSocket_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkClientSocket_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkClientSocket_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkClientSocket\nC++: vtkClientSocket *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkClientSocket_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkClientSocket\nC++: vtkClientSocket *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ConnectToServer", PyvtkClientSocket_ConnectToServer, 1,
   (char*)"V.ConnectToServer(string, int) -> int\nC++: int ConnectToServer(const char *hostname, int port)\n\nConnects to host. Returns 0 on success, -1 on error.\n"},
  {(char*)"GetConnectingSide", PyvtkClientSocket_GetConnectingSide, 1,
   (char*)"V.GetConnectingSide() -> bool\nC++: bool GetConnectingSide()\n\nReturns if the socket is on the connecting side (the side that\nrequests a ConnectToServer() or on the connected side (the side\nthat was waiting for the client to connect). This is used to\ndisambiguate the two ends of a socket connection.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkClientSocket_StaticNew()
{
  return vtkClientSocket::New();
}

PyObject *PyVTKClass_vtkClientSocketNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkClientSocket_StaticNew,
    PyvtkClientSocket_Methods,
    "vtkClientSocket", modulename,
    NULL, NULL,
    PyvtkClientSocket_Doc(),
    PyVTKClass_vtkSocketNew(modulename));
  return cls;
}

const char **PyvtkClientSocket_Doc()
{
  static const char *docstring[] = {
    "vtkClientSocket - Encapsulates a client socket.\n\n",
    "Superclass: vtkSocket\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkClientSocket(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkClientSocketNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkClientSocket", o) != 0)
    {
    Py_DECREF(o);
    }

}

