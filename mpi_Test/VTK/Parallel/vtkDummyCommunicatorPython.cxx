// python wrapper for vtkDummyCommunicator
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
#include "vtkDummyCommunicator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDummyCommunicator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDummyCommunicator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDummyCommunicatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDummyCommunicatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCommunicatorNew
extern "C" { PyObject *PyVTKClass_vtkCommunicatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkCommunicatorNew
#endif

static const char **PyvtkDummyCommunicator_Doc();


static PyObject *
PyvtkDummyCommunicator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyCommunicator *op = static_cast<vtkDummyCommunicator *>(vp);

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
      tempr = op->vtkDummyCommunicator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyCommunicator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyCommunicator *op = static_cast<vtkDummyCommunicator *>(vp);

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
      tempr = op->vtkDummyCommunicator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyCommunicator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyCommunicator *op = static_cast<vtkDummyCommunicator *>(vp);

  vtkDummyCommunicator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDummyCommunicator::NewInstance();
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
PyvtkDummyCommunicator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDummyCommunicator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDummyCommunicator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyCommunicator_SendVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyCommunicator *op = static_cast<vtkDummyCommunicator *>(vp);

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
      tempr = op->vtkDummyCommunicator::SendVoidArray(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyCommunicator_ReceiveVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyCommunicator *op = static_cast<vtkDummyCommunicator *>(vp);

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
      tempr = op->vtkDummyCommunicator::ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDummyCommunicator_Methods[] = {
  {(char*)"GetClassName", PyvtkDummyCommunicator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDummyCommunicator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDummyCommunicator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDummyCommunicator\nC++: vtkDummyCommunicator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDummyCommunicator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDummyCommunicator\nC++: vtkDummyCommunicator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SendVoidArray", PyvtkDummyCommunicator_SendVoidArray, 1,
   (char*)"V.SendVoidArray(, int, int, int, int) -> int\nC++: virtual int SendVoidArray(const void *, vtkIdType, int, int,\n    int)\n\nSince there is no one to communicate with, these methods just\nreport an error.\n"},
  {(char*)"ReceiveVoidArray", PyvtkDummyCommunicator_ReceiveVoidArray, 1,
   (char*)"V.ReceiveVoidArray(, int, int, int, int) -> int\nC++: virtual int ReceiveVoidArray(void *, vtkIdType, int, int,\n    int)\n\nSince there is no one to communicate with, these methods just\nreport an error.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDummyCommunicator_StaticNew()
{
  return vtkDummyCommunicator::New();
}

PyObject *PyVTKClass_vtkDummyCommunicatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDummyCommunicator_StaticNew,
    PyvtkDummyCommunicator_Methods,
    "vtkDummyCommunicator", modulename,
    NULL, NULL,
    PyvtkDummyCommunicator_Doc(),
    PyVTKClass_vtkCommunicatorNew(modulename));
  return cls;
}

const char **PyvtkDummyCommunicator_Doc()
{
  static const char *docstring[] = {
    "vtkDummyCommunicator - Dummy controller for single process\napplications.\n\n",
    "Superclass: vtkCommunicator\n\n",
    "This is a dummy communicator, which can be used by applications that\nalways require a controller but are also compiled on systems without\nthreads or MPI. Because there is always only one process, no real\ncommunication takes place.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDummyCommunicator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDummyCommunicatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDummyCommunicator", o) != 0)
    {
    Py_DECREF(o);
    }

}

