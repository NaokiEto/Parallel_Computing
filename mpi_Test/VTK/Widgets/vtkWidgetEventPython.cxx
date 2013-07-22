// python wrapper for vtkWidgetEvent
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
#include "vtkWidgetEvent.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkWidgetEvent(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkWidgetEvent(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkWidgetEventNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkWidgetEventNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkWidgetEvent_Doc();


static PyObject *
PyvtkWidgetEvent_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEvent *op = static_cast<vtkWidgetEvent *>(vp);

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
      tempr = op->vtkWidgetEvent::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetEvent_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEvent *op = static_cast<vtkWidgetEvent *>(vp);

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
      tempr = op->vtkWidgetEvent::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetEvent_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEvent *op = static_cast<vtkWidgetEvent *>(vp);

  vtkWidgetEvent *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkWidgetEvent::NewInstance();
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
PyvtkWidgetEvent_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkWidgetEvent *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkWidgetEvent::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetEvent_GetStringFromEventId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromEventId");

  unsigned long temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkWidgetEvent::GetStringFromEventId(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWidgetEvent_GetEventIdFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventIdFromString");

  char *temp0 = NULL;
  unsigned long tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkWidgetEvent::GetEventIdFromString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkWidgetEvent_Methods[] = {
  {(char*)"GetClassName", PyvtkWidgetEvent_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard macros.\n"},
  {(char*)"IsA", PyvtkWidgetEvent_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard macros.\n"},
  {(char*)"NewInstance", PyvtkWidgetEvent_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkWidgetEvent\nC++: vtkWidgetEvent *NewInstance()\n\nStandard macros.\n"},
  {(char*)"SafeDownCast", PyvtkWidgetEvent_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWidgetEvent\nC++: vtkWidgetEvent *SafeDownCast(vtkObject* o)\n\nStandard macros.\n"},
  {(char*)"GetStringFromEventId", PyvtkWidgetEvent_GetStringFromEventId, 1,
   (char*)"V.GetStringFromEventId(int) -> string\nC++: static const char *GetStringFromEventId(unsigned long event)\n\nConvenience methods for translating between event names and event\nids.\n"},
  {(char*)"GetEventIdFromString", PyvtkWidgetEvent_GetEventIdFromString, 1,
   (char*)"V.GetEventIdFromString(string) -> int\nC++: static unsigned long GetEventIdFromString(const char *event)\n\nConvenience methods for translating between event names and event\nids.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWidgetEvent_StaticNew()
{
  return vtkWidgetEvent::New();
}

PyObject *PyVTKClass_vtkWidgetEventNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWidgetEvent_StaticNew,
    PyvtkWidgetEvent_Methods,
    "vtkWidgetEvent", modulename,
    NULL, NULL,
    PyvtkWidgetEvent_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"NoEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"Select", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"EndSelect", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"Delete", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"Translate", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"EndTranslate", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"Scale", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"EndScale", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"Resize", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(9);
    if (o && PyDict_SetItemString(d, (char *)"EndResize", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(10);
    if (o && PyDict_SetItemString(d, (char *)"Rotate", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(11);
    if (o && PyDict_SetItemString(d, (char *)"EndRotate", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(12);
    if (o && PyDict_SetItemString(d, (char *)"Move", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(13);
    if (o && PyDict_SetItemString(d, (char *)"SizeHandles", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(14);
    if (o && PyDict_SetItemString(d, (char *)"AddPoint", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(15);
    if (o && PyDict_SetItemString(d, (char *)"AddFinalPoint", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(16);
    if (o && PyDict_SetItemString(d, (char *)"Completed", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(17);
    if (o && PyDict_SetItemString(d, (char *)"TimedOut", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(18);
    if (o && PyDict_SetItemString(d, (char *)"ModifyEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(19);
    if (o && PyDict_SetItemString(d, (char *)"Reset", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkWidgetEvent_Doc()
{
  static const char *docstring[] = {
    "vtkWidgetEvent - define widget events\n\n",
    "Superclass: vtkObject\n\n",
    "vtkWidgetEvent defines widget events. These events are processed by\nsubclasses of vtkInteractorObserver.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWidgetEvent(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWidgetEventNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWidgetEvent", o) != 0)
    {
    Py_DECREF(o);
    }

}

