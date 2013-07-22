// python wrapper for vtkGenericRenderWindowInteractor
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
#include "vtkGenericRenderWindowInteractor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericRenderWindowInteractor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericRenderWindowInteractor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericRenderWindowInteractorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericRenderWindowInteractorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderWindowInteractorNew
extern "C" { PyObject *PyVTKClass_vtkRenderWindowInteractorNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderWindowInteractorNew
#endif

static const char **PyvtkGenericRenderWindowInteractor_Doc();


static PyObject *
PyvtkGenericRenderWindowInteractor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

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
      tempr = op->vtkGenericRenderWindowInteractor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

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
      tempr = op->vtkGenericRenderWindowInteractor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  vtkGenericRenderWindowInteractor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericRenderWindowInteractor::NewInstance();
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
PyvtkGenericRenderWindowInteractor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGenericRenderWindowInteractor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGenericRenderWindowInteractor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_TimerEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimerEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TimerEvent();
      }
    else
      {
      op->vtkGenericRenderWindowInteractor::TimerEvent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_SetTimerEventResetsTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerEventResetsTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimerEventResetsTimer(temp0);
      }
    else
      {
      op->vtkGenericRenderWindowInteractor::SetTimerEventResetsTimer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_GetTimerEventResetsTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerEventResetsTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimerEventResetsTimer();
      }
    else
      {
      tempr = op->vtkGenericRenderWindowInteractor::GetTimerEventResetsTimer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_TimerEventResetsTimerOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimerEventResetsTimerOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TimerEventResetsTimerOn();
      }
    else
      {
      op->vtkGenericRenderWindowInteractor::TimerEventResetsTimerOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericRenderWindowInteractor_TimerEventResetsTimerOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimerEventResetsTimerOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericRenderWindowInteractor *op = static_cast<vtkGenericRenderWindowInteractor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TimerEventResetsTimerOff();
      }
    else
      {
      op->vtkGenericRenderWindowInteractor::TimerEventResetsTimerOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericRenderWindowInteractor_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericRenderWindowInteractor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericRenderWindowInteractor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericRenderWindowInteractor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericRenderWindowInteractor\nC++: vtkGenericRenderWindowInteractor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericRenderWindowInteractor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericRenderWindowInteractor\nC++: vtkGenericRenderWindowInteractor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"TimerEvent", PyvtkGenericRenderWindowInteractor_TimerEvent, 1,
   (char*)"V.TimerEvent()\nC++: virtual void TimerEvent()\n\nFire TimerEvent. SetEventInformation should be called just prior\nto calling any of these methods. These methods will Invoke the\ncorresponding vtk event.\n"},
  {(char*)"SetTimerEventResetsTimer", PyvtkGenericRenderWindowInteractor_SetTimerEventResetsTimer, 1,
   (char*)"V.SetTimerEventResetsTimer(int)\nC++: void SetTimerEventResetsTimer(int a)\n\nFlag that indicates whether the TimerEvent method should call\nResetTimer to simulate repeating timers with an endless stream of\none shot timers. By default this flag is on and all repeating\ntimers are implemented as a stream of sequential one shot timers.\nIf the observer of CreateTimerEvent actually creates a \"natively\nrepeating\" timer, setting this flag to off will prevent (perhaps\nmany many) unnecessary calls to ResetTimer. Having the flag on by\ndefault means that \"natively one shot\" timers can be either one\nshot or repeating timers with no additional work. Also, \"natively\nrepeating\" timers still work with the default setting, but with\npotentially many create and destroy calls.\n"},
  {(char*)"GetTimerEventResetsTimer", PyvtkGenericRenderWindowInteractor_GetTimerEventResetsTimer, 1,
   (char*)"V.GetTimerEventResetsTimer() -> int\nC++: int GetTimerEventResetsTimer()\n\nFlag that indicates whether the TimerEvent method should call\nResetTimer to simulate repeating timers with an endless stream of\none shot timers. By default this flag is on and all repeating\ntimers are implemented as a stream of sequential one shot timers.\nIf the observer of CreateTimerEvent actually creates a \"natively\nrepeating\" timer, setting this flag to off will prevent (perhaps\nmany many) unnecessary calls to ResetTimer. Having the flag on by\ndefault means that \"natively one shot\" timers can be either one\nshot or repeating timers with no additional work. Also, \"natively\nrepeating\" timers still work with the default setting, but with\npotentially many create and destroy calls.\n"},
  {(char*)"TimerEventResetsTimerOn", PyvtkGenericRenderWindowInteractor_TimerEventResetsTimerOn, 1,
   (char*)"V.TimerEventResetsTimerOn()\nC++: void TimerEventResetsTimerOn()\n\nFlag that indicates whether the TimerEvent method should call\nResetTimer to simulate repeating timers with an endless stream of\none shot timers. By default this flag is on and all repeating\ntimers are implemented as a stream of sequential one shot timers.\nIf the observer of CreateTimerEvent actually creates a \"natively\nrepeating\" timer, setting this flag to off will prevent (perhaps\nmany many) unnecessary calls to ResetTimer. Having the flag on by\ndefault means that \"natively one shot\" timers can be either one\nshot or repeating timers with no additional work. Also, \"natively\nrepeating\" timers still work with the default setting, but with\npotentially many create and destroy calls.\n"},
  {(char*)"TimerEventResetsTimerOff", PyvtkGenericRenderWindowInteractor_TimerEventResetsTimerOff, 1,
   (char*)"V.TimerEventResetsTimerOff()\nC++: void TimerEventResetsTimerOff()\n\nFlag that indicates whether the TimerEvent method should call\nResetTimer to simulate repeating timers with an endless stream of\none shot timers. By default this flag is on and all repeating\ntimers are implemented as a stream of sequential one shot timers.\nIf the observer of CreateTimerEvent actually creates a \"natively\nrepeating\" timer, setting this flag to off will prevent (perhaps\nmany many) unnecessary calls to ResetTimer. Having the flag on by\ndefault means that \"natively one shot\" timers can be either one\nshot or repeating timers with no additional work. Also, \"natively\nrepeating\" timers still work with the default setting, but with\npotentially many create and destroy calls.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericRenderWindowInteractor_StaticNew()
{
  return vtkGenericRenderWindowInteractor::New();
}

PyObject *PyVTKClass_vtkGenericRenderWindowInteractorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericRenderWindowInteractor_StaticNew,
    PyvtkGenericRenderWindowInteractor_Methods,
    "vtkGenericRenderWindowInteractor", modulename,
    NULL, NULL,
    PyvtkGenericRenderWindowInteractor_Doc(),
    PyVTKClass_vtkRenderWindowInteractorNew(modulename));
  return cls;
}

const char **PyvtkGenericRenderWindowInteractor_Doc()
{
  static const char *docstring[] = {
    "vtkGenericRenderWindowInteractor - platform-independent programmable\nrender window interactor.\n\n",
    "Superclass: vtkRenderWindowInteractor\n\n",
    "vtkGenericRenderWindowInteractor provides a way to translate native\nmouse and keyboard events into vtk Events.   By calling the methods\non this class, vtk events will be invoked.   This will allow\nscripting languages to use vtkInteractorStyles and 3D widgets.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericRenderWindowInteractor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericRenderWindowInteractorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericRenderWindowInteractor", o) != 0)
    {
    Py_DECREF(o);
    }

}

