// python wrapper for vtkDummyController
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
#include "vtkDummyController.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDummyController(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDummyController(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDummyControllerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDummyControllerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMultiProcessControllerNew
extern "C" { PyObject *PyVTKClass_vtkMultiProcessControllerNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiProcessControllerNew
#endif

static const char **PyvtkDummyController_Doc();


static PyObject *
PyvtkDummyController_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

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
      tempr = op->vtkDummyController::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

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
      tempr = op->vtkDummyController::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  vtkDummyController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDummyController::NewInstance();
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
PyvtkDummyController_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDummyController *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDummyController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_Finalize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finalize();
      }
    else
      {
      op->vtkDummyController::Finalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDummyController_Finalize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

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
      op->vtkDummyController::Finalize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDummyController_Finalize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkDummyController_Finalize_s1(self, args);
    case 1:
      return PyvtkDummyController_Finalize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Finalize");
  return NULL;
}



static PyObject *
PyvtkDummyController_GetLocalProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

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
      tempr = op->vtkDummyController::GetLocalProcessId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SingleMethodExecute();
      }
    else
      {
      op->vtkDummyController::SingleMethodExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultipleMethodExecute();
      }
    else
      {
      op->vtkDummyController::MultipleMethodExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_CreateOutputWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateOutputWindow();
      }
    else
      {
      op->vtkDummyController::CreateOutputWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_GetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

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
      tempr = op->vtkDummyController::GetCommunicator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_GetRMICommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRMICommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  vtkCommunicator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRMICommunicator();
      }
    else
      {
      tempr = op->vtkDummyController::GetRMICommunicator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_SetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  vtkCommunicator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommunicator"))
    {
    if (ap.IsBound())
      {
      op->SetCommunicator(temp0);
      }
    else
      {
      op->vtkDummyController::SetCommunicator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDummyController_SetRMICommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRMICommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  vtkCommunicator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommunicator"))
    {
    if (ap.IsBound())
      {
      op->SetRMICommunicator(temp0);
      }
    else
      {
      op->vtkDummyController::SetRMICommunicator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDummyController_Methods[] = {
  {(char*)"GetClassName", PyvtkDummyController_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDummyController_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDummyController_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDummyController\nC++: vtkDummyController *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDummyController_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDummyController\nC++: vtkDummyController *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Finalize", PyvtkDummyController_Finalize, 1,
   (char*)"V.Finalize()\nC++: virtual void Finalize()\nV.Finalize(int)\nC++: virtual void Finalize(int)\n\nThis method is for setting up the processes.\n"},
  {(char*)"GetLocalProcessId", PyvtkDummyController_GetLocalProcessId, 1,
   (char*)"V.GetLocalProcessId() -> int\nC++: int GetLocalProcessId()\n\nThis method always returns 0.\n"},
  {(char*)"SingleMethodExecute", PyvtkDummyController_SingleMethodExecute, 1,
   (char*)"V.SingleMethodExecute()\nC++: virtual void SingleMethodExecute()\n\nDirectly calls the single method.\n"},
  {(char*)"MultipleMethodExecute", PyvtkDummyController_MultipleMethodExecute, 1,
   (char*)"V.MultipleMethodExecute()\nC++: virtual void MultipleMethodExecute()\n\nDirectly calls multiple method 0.\n"},
  {(char*)"CreateOutputWindow", PyvtkDummyController_CreateOutputWindow, 1,
   (char*)"V.CreateOutputWindow()\nC++: virtual void CreateOutputWindow()\n\nDoes nothing.\n"},
  {(char*)"GetCommunicator", PyvtkDummyController_GetCommunicator, 1,
   (char*)"V.GetCommunicator() -> vtkCommunicator\nC++: vtkCommunicator *GetCommunicator()\n\nIf you don't need any special functionality from the controller,\nyou can swap out the dummy communicator for another one.\n"},
  {(char*)"GetRMICommunicator", PyvtkDummyController_GetRMICommunicator, 1,
   (char*)"V.GetRMICommunicator() -> vtkCommunicator\nC++: vtkCommunicator *GetRMICommunicator()\n\nIf you don't need any special functionality from the controller,\nyou can swap out the dummy communicator for another one.\n"},
  {(char*)"SetCommunicator", PyvtkDummyController_SetCommunicator, 1,
   (char*)"V.SetCommunicator(vtkCommunicator)\nC++: virtual void SetCommunicator(vtkCommunicator *)\n\nIf you don't need any special functionality from the controller,\nyou can swap out the dummy communicator for another one.\n"},
  {(char*)"SetRMICommunicator", PyvtkDummyController_SetRMICommunicator, 1,
   (char*)"V.SetRMICommunicator(vtkCommunicator)\nC++: virtual void SetRMICommunicator(vtkCommunicator *)\n\nIf you don't need any special functionality from the controller,\nyou can swap out the dummy communicator for another one.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDummyController_StaticNew()
{
  return vtkDummyController::New();
}

PyObject *PyVTKClass_vtkDummyControllerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDummyController_StaticNew,
    PyvtkDummyController_Methods,
    "vtkDummyController", modulename,
    NULL, NULL,
    PyvtkDummyController_Doc(),
    PyVTKClass_vtkMultiProcessControllerNew(modulename));
  return cls;
}

const char **PyvtkDummyController_Doc()
{
  static const char *docstring[] = {
    "vtkDummyController - Dummy controller for single process applications\n\n",
    "Superclass: vtkMultiProcessController\n\n",
    "This is a dummy controller which can be used by applications which\nalways require a controller but are also compile on systems without\nthreads or mpi.\n\nSee Also:\n\nvtkMultiProcessController\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDummyController(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDummyControllerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDummyController", o) != 0)
    {
    Py_DECREF(o);
    }

}

