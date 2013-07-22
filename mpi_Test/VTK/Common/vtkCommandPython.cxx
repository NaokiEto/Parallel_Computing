// python wrapper for vtkCommand
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
#include "vtkCommand.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCommand(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCommand(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCommandNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCommandNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectBaseNew
extern "C" { PyObject *PyVTKClass_vtkObjectBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectBaseNew
#endif

static const char **PyvtkCommand_Doc();


static PyObject *
PyvtkCommand_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

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
      tempr = op->vtkCommand::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

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
      tempr = op->vtkCommand::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  vtkCommand *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCommand::NewInstance();
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
PyvtkCommand_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  vtkObject *temp0 = NULL;
  unsigned long temp1;
  void  *temp2 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    op->Execute(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_GetStringFromEventId(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromEventId");

  unsigned long temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkCommand::GetStringFromEventId(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_GetEventIdFromString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventIdFromString");

  char *temp0 = NULL;
  unsigned long tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkCommand::GetEventIdFromString(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_SetAbortFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbortFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAbortFlag(temp0);
      }
    else
      {
      op->vtkCommand::SetAbortFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_GetAbortFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbortFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAbortFlag();
      }
    else
      {
      tempr = op->vtkCommand::GetAbortFlag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_AbortFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AbortFlagOn();
      }
    else
      {
      op->vtkCommand::AbortFlagOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_AbortFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AbortFlagOff();
      }
    else
      {
      op->vtkCommand::AbortFlagOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_SetPassiveObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassiveObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassiveObserver(temp0);
      }
    else
      {
      op->vtkCommand::SetPassiveObserver(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_GetPassiveObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassiveObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassiveObserver();
      }
    else
      {
      tempr = op->vtkCommand::GetPassiveObserver();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_PassiveObserverOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassiveObserverOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassiveObserverOn();
      }
    else
      {
      op->vtkCommand::PassiveObserverOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCommand_PassiveObserverOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassiveObserverOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommand *op = static_cast<vtkCommand *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassiveObserverOff();
      }
    else
      {
      op->vtkCommand::PassiveObserverOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCommand_Methods[] = {
  {(char*)"GetClassName", PyvtkCommand_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCommand_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCommand_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCommand\nC++: vtkCommand *NewInstance()\n\n"},
  {(char*)"Execute", PyvtkCommand_Execute, 1,
   (char*)"V.Execute(vtkObject, int, )\nC++: virtual void Execute(vtkObject *caller,\n    unsigned long eventId, void *callData)\n\nAll derived classes of vtkCommand must implement this method.\nThis is the method that actually does the work of the callback.\nThe caller argument is the object invoking the event, the eventId\nparameter is the id of the event, and callData parameter is data\nthat can be passed into the execute method. (Note:\nvtkObject::InvokeEvent() takes two parameters: the event id (or\nname) and call data. Typically call data is NULL, but the user\ncan package data and pass it this way. Alternatively, a derived\nclass of vtkCommand can be used to pass data.)\n"},
  {(char*)"GetStringFromEventId", PyvtkCommand_GetStringFromEventId, 1,
   (char*)"V.GetStringFromEventId(int) -> string\nC++: static const char *GetStringFromEventId(unsigned long event)\n\nConvenience methods for translating between event names and event\nids.\n"},
  {(char*)"GetEventIdFromString", PyvtkCommand_GetEventIdFromString, 1,
   (char*)"V.GetEventIdFromString(string) -> int\nC++: static unsigned long GetEventIdFromString(const char *event)\n\nConvenience methods for translating between event names and event\nids.\n"},
  {(char*)"SetAbortFlag", PyvtkCommand_SetAbortFlag, 1,
   (char*)"V.SetAbortFlag(int)\nC++: void SetAbortFlag(int f)\n\nSet/Get the abort flag. If this is set to true no further\ncommands are executed.\n"},
  {(char*)"GetAbortFlag", PyvtkCommand_GetAbortFlag, 1,
   (char*)"V.GetAbortFlag() -> int\nC++: int GetAbortFlag()\n\nSet/Get the abort flag. If this is set to true no further\ncommands are executed.\n"},
  {(char*)"AbortFlagOn", PyvtkCommand_AbortFlagOn, 1,
   (char*)"V.AbortFlagOn()\nC++: void AbortFlagOn()\n\nSet/Get the abort flag. If this is set to true no further\ncommands are executed.\n"},
  {(char*)"AbortFlagOff", PyvtkCommand_AbortFlagOff, 1,
   (char*)"V.AbortFlagOff()\nC++: void AbortFlagOff()\n\nSet/Get the abort flag. If this is set to true no further\ncommands are executed.\n"},
  {(char*)"SetPassiveObserver", PyvtkCommand_SetPassiveObserver, 1,
   (char*)"V.SetPassiveObserver(int)\nC++: void SetPassiveObserver(int f)\n\nSet/Get the passive observer flag. If this is set to true, this\nindicates that this command does not change the state of the\nsystem in any way. Passive observers are processed first, and are\nnot called even when another command has focus.\n"},
  {(char*)"GetPassiveObserver", PyvtkCommand_GetPassiveObserver, 1,
   (char*)"V.GetPassiveObserver() -> int\nC++: int GetPassiveObserver()\n\nSet/Get the passive observer flag. If this is set to true, this\nindicates that this command does not change the state of the\nsystem in any way. Passive observers are processed first, and are\nnot called even when another command has focus.\n"},
  {(char*)"PassiveObserverOn", PyvtkCommand_PassiveObserverOn, 1,
   (char*)"V.PassiveObserverOn()\nC++: void PassiveObserverOn()\n\nSet/Get the passive observer flag. If this is set to true, this\nindicates that this command does not change the state of the\nsystem in any way. Passive observers are processed first, and are\nnot called even when another command has focus.\n"},
  {(char*)"PassiveObserverOff", PyvtkCommand_PassiveObserverOff, 1,
   (char*)"V.PassiveObserverOff()\nC++: void PassiveObserverOff()\n\nSet/Get the passive observer flag. If this is set to true, this\nindicates that this command does not change the state of the\nsystem in any way. Passive observers are processed first, and are\nnot called even when another command has focus.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkCommandNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkCommand_Methods,
    "vtkCommand", modulename,
    NULL, NULL,
    PyvtkCommand_Doc(),
    PyVTKClass_vtkObjectBaseNew(modulename));

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
    if (o && PyDict_SetItemString(d, (char *)"AnyEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"DeleteEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"StartEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"EndEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"RenderEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"ProgressEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"PickEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"StartPickEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(9);
    if (o && PyDict_SetItemString(d, (char *)"EndPickEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(10);
    if (o && PyDict_SetItemString(d, (char *)"AbortCheckEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(11);
    if (o && PyDict_SetItemString(d, (char *)"ExitEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(12);
    if (o && PyDict_SetItemString(d, (char *)"LeftButtonPressEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(13);
    if (o && PyDict_SetItemString(d, (char *)"LeftButtonReleaseEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(14);
    if (o && PyDict_SetItemString(d, (char *)"MiddleButtonPressEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(15);
    if (o && PyDict_SetItemString(d, (char *)"MiddleButtonReleaseEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(16);
    if (o && PyDict_SetItemString(d, (char *)"RightButtonPressEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(17);
    if (o && PyDict_SetItemString(d, (char *)"RightButtonReleaseEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(18);
    if (o && PyDict_SetItemString(d, (char *)"EnterEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(19);
    if (o && PyDict_SetItemString(d, (char *)"LeaveEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(20);
    if (o && PyDict_SetItemString(d, (char *)"KeyPressEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(21);
    if (o && PyDict_SetItemString(d, (char *)"KeyReleaseEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(22);
    if (o && PyDict_SetItemString(d, (char *)"CharEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(23);
    if (o && PyDict_SetItemString(d, (char *)"ExposeEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(24);
    if (o && PyDict_SetItemString(d, (char *)"ConfigureEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(25);
    if (o && PyDict_SetItemString(d, (char *)"TimerEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(26);
    if (o && PyDict_SetItemString(d, (char *)"MouseMoveEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(27);
    if (o && PyDict_SetItemString(d, (char *)"MouseWheelForwardEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(28);
    if (o && PyDict_SetItemString(d, (char *)"MouseWheelBackwardEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(29);
    if (o && PyDict_SetItemString(d, (char *)"ActiveCameraEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(30);
    if (o && PyDict_SetItemString(d, (char *)"CreateCameraEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(31);
    if (o && PyDict_SetItemString(d, (char *)"ResetCameraEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(32);
    if (o && PyDict_SetItemString(d, (char *)"ResetCameraClippingRangeEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(33);
    if (o && PyDict_SetItemString(d, (char *)"ModifiedEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(34);
    if (o && PyDict_SetItemString(d, (char *)"WindowLevelEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(35);
    if (o && PyDict_SetItemString(d, (char *)"StartWindowLevelEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(36);
    if (o && PyDict_SetItemString(d, (char *)"EndWindowLevelEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(37);
    if (o && PyDict_SetItemString(d, (char *)"ResetWindowLevelEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(38);
    if (o && PyDict_SetItemString(d, (char *)"SetOutputEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(39);
    if (o && PyDict_SetItemString(d, (char *)"ErrorEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(40);
    if (o && PyDict_SetItemString(d, (char *)"WarningEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(41);
    if (o && PyDict_SetItemString(d, (char *)"StartInteractionEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(42);
    if (o && PyDict_SetItemString(d, (char *)"InteractionEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(43);
    if (o && PyDict_SetItemString(d, (char *)"EndInteractionEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(44);
    if (o && PyDict_SetItemString(d, (char *)"EnableEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(45);
    if (o && PyDict_SetItemString(d, (char *)"DisableEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(46);
    if (o && PyDict_SetItemString(d, (char *)"CreateTimerEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(47);
    if (o && PyDict_SetItemString(d, (char *)"DestroyTimerEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(48);
    if (o && PyDict_SetItemString(d, (char *)"PlacePointEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(49);
    if (o && PyDict_SetItemString(d, (char *)"PlaceWidgetEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(50);
    if (o && PyDict_SetItemString(d, (char *)"CursorChangedEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(51);
    if (o && PyDict_SetItemString(d, (char *)"ExecuteInformationEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(52);
    if (o && PyDict_SetItemString(d, (char *)"RenderWindowMessageEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(53);
    if (o && PyDict_SetItemString(d, (char *)"WrongTagEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(54);
    if (o && PyDict_SetItemString(d, (char *)"StartAnimationCueEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(55);
    if (o && PyDict_SetItemString(d, (char *)"AnimationCueTickEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(56);
    if (o && PyDict_SetItemString(d, (char *)"EndAnimationCueEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(57);
    if (o && PyDict_SetItemString(d, (char *)"VolumeMapperRenderEndEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(58);
    if (o && PyDict_SetItemString(d, (char *)"VolumeMapperRenderProgressEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(59);
    if (o && PyDict_SetItemString(d, (char *)"VolumeMapperRenderStartEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(60);
    if (o && PyDict_SetItemString(d, (char *)"VolumeMapperComputeGradientsEndEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(61);
    if (o && PyDict_SetItemString(d, (char *)"VolumeMapperComputeGradientsProgressEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(62);
    if (o && PyDict_SetItemString(d, (char *)"VolumeMapperComputeGradientsStartEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(63);
    if (o && PyDict_SetItemString(d, (char *)"WidgetModifiedEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(64);
    if (o && PyDict_SetItemString(d, (char *)"WidgetValueChangedEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(65);
    if (o && PyDict_SetItemString(d, (char *)"WidgetActivateEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(66);
    if (o && PyDict_SetItemString(d, (char *)"ConnectionCreatedEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(67);
    if (o && PyDict_SetItemString(d, (char *)"ConnectionClosedEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(68);
    if (o && PyDict_SetItemString(d, (char *)"DomainModifiedEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(69);
    if (o && PyDict_SetItemString(d, (char *)"PropertyModifiedEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(70);
    if (o && PyDict_SetItemString(d, (char *)"UpdateEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(71);
    if (o && PyDict_SetItemString(d, (char *)"RegisterEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(72);
    if (o && PyDict_SetItemString(d, (char *)"UnRegisterEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(73);
    if (o && PyDict_SetItemString(d, (char *)"UpdateInformationEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(74);
    if (o && PyDict_SetItemString(d, (char *)"AnnotationChangedEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(75);
    if (o && PyDict_SetItemString(d, (char *)"SelectionChangedEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(76);
    if (o && PyDict_SetItemString(d, (char *)"UpdatePropertyEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(77);
    if (o && PyDict_SetItemString(d, (char *)"ViewProgressEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(78);
    if (o && PyDict_SetItemString(d, (char *)"UpdateDataEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(79);
    if (o && PyDict_SetItemString(d, (char *)"CurrentChangedEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(80);
    if (o && PyDict_SetItemString(d, (char *)"ComputeVisiblePropBoundsEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(81);
    if (o && PyDict_SetItemString(d, (char *)"TDxMotionEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(82);
    if (o && PyDict_SetItemString(d, (char *)"TDxButtonPressEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(83);
    if (o && PyDict_SetItemString(d, (char *)"TDxButtonReleaseEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(84);
    if (o && PyDict_SetItemString(d, (char *)"HoverEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(85);
    if (o && PyDict_SetItemString(d, (char *)"LoadStateEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(86);
    if (o && PyDict_SetItemString(d, (char *)"SaveStateEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(87);
    if (o && PyDict_SetItemString(d, (char *)"StateChangedEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(88);
    if (o && PyDict_SetItemString(d, (char *)"WindowMakeCurrentEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(89);
    if (o && PyDict_SetItemString(d, (char *)"WindowIsCurrentEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(90);
    if (o && PyDict_SetItemString(d, (char *)"WindowFrameEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(91);
    if (o && PyDict_SetItemString(d, (char *)"HighlightEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(92);
    if (o && PyDict_SetItemString(d, (char *)"WindowSupportsOpenGLEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(93);
    if (o && PyDict_SetItemString(d, (char *)"WindowIsDirectEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1000);
    if (o && PyDict_SetItemString(d, (char *)"UserEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkCommand_Doc()
{
  static const char *docstring[] = {
    "vtkCommand - superclass for callback/observer methods\n\n",
    "Superclass: vtkObjectBase\n\n",
    "vtkCommand is an implementation of the observer/command design\npattern.  In this design pattern, any instance of vtkObject can be\n\"observed\" for any events it might invoke. For example, vtkRenderer\ninvokes a StartEvent as it begins to render and a EndEvent when it\nfinishes rendering. Filters (subclasses of vtkProcessObject) invoke\nStartEvent, ProgressEvent, and EndEvent as the filter processes dat",
    "a.\nObservers of events are added with the AddObserver() method found in\nvtkObject.  AddObserver(), besides requiring an event id or name,\nalso takes an instance of vtkCommand (or a subclasses). Note that\nvtkCommand is meant to be subclassed, so that you can package the\ninformation necessary to support your callback.\n\nEvent processing can be organized in priority lists, so it is\npossible to truncat",
    "e the processing of a particular event by setting\nthe AbortFlag variable. The priority is set using the AddObserver()\nmethod.  By default the priority is 0, events of the same priority\nare processed in last-in-first-processed order. The ordering/aborting\nof events is important for things like 3D widgets, which handle an\nevent if the widget is selected (and then aborting further processing\nof that ",
    "event).  Otherwise. the event is passed along for further\nprocessing.\n\nWhen an instance of vtkObject invokes an event, it also passes an\noptional void pointer to a callData. This callData is NULL most of\nthe time. The callData is not specific to a type of event but\nspecific to a type of vtkObject invoking a specific event. For\ninstance, vtkCommand::PickEvent is invoked by vtkProp with a NULL\ncallD",
    "ata but is invoked by vtkInteractorStyleImage with a pointer to\nthe vtkInteractorStyleImage object itself.\n\nHere is the list of events that may be invoked with a none NULL\ncallData.\n- vtkCommand::ProgressEvent\n- most of the objects return a pointer to a double value ranged\n  between 0.0 and 1.0\n- Infovis/vtkFixedWidthTextReader returns a pointer to a float value\n  equal to the number of lines read",
    " so far.\n- vtkCommand::ErrorEvent\n- an error message as a const char * string\n- vtkCommand::WarningEvent\n- a warning message as a const char * string\n- vtkCommand::StartAnimationCueEvent\n- a pointer to a vtkAnimationCue::AnimationCueInfo object\n- vtkCommand::EndAnimationCueEvent\n- a pointer to a vtkAnimationCue::AnimationCueInfo object\n- vtkCommand::AnimationCueTickEvent\n- a pointer to a vtkAnimat",
    "ionCue::AnimationCueInfo object\n- vtkCommand::PickEvent\n- Common/vtkProp returns NULL\n- Rendering/vtkInteractorStyleImage returns a pointer to itself\n- vtkCommand::StartPickEvent\n- Rendering/vtkPropPicker returns NULL\n- Rendering/vtkInteractorStyleImage returns a pointer to itself\n- vtkCommand::EndPickEvent\n- Rendering/vtkPropPicker returns NULL\n- Rendering/vtkInteractorStyleImage returns a pointe",
    "r to itself\n- vtkCommand::WrongTagEvent\n- Parallel/vtkSocketCommunicator returns a received tag as a char *\n- vtkCommand::SelectionChangedEvent\n- Views/vtkView returns NULL\n- Views/vtkDataRepresentation returns a pointer to a vtkSelection\n- Rendering/vtkInteractorStyleRubberBand2D returns an array of 5\n  unsigned integers (p1x, p1y, p2x, p2y, mode), where mode is\n  vtkInteractorStyleRubberBand2D::",
    "SELECT_UNION or\n  vtkInteractorStyleRubberBand2D::SELECT_NORMAL\n- vtkCommand::AnnotationChangedEvent\n- GUISupport/Qt/vtkQtAnnotationView returns a pointer to a\n  vtkAnnotationLayers\n- vtkCommand::PlacePointEvent\n- Widgets/vtkSeedWidget returns a pointer to an int, being the\n  current handle number\n- vtkCommand::ResetWindowLevelEvent\n- Widgets/vtkImagePlaneWidget returns an array of 2 double values",
    "\n  (window and level)\n- Rendering/vtkInteractorStyleImage returns a pointer to itself\n- vtkCommand::StartWindowLevelEvent\n- Widgets/vtkImagePlaneWidget returns an array of 2 double values\n  (window and level)\n- Rendering/vtkInteractorStyleImage returns a pointer to itself\n- vtkCommand::EndWindowLevelEvent\n- Widgets/vtkImagePlaneWidget returns an array of 2 double values\n  (window and level)\n- Rend",
    "ering/vtkInteractorStyleImage returns a pointer to itself\n- vtkCommand::WindowLevelEvent\n- Widgets/vtkImagePlaneWidget returns an array of 2 double values\n  (window and level)\n- Rendering/vtkInteractorStyleImage returns a pointer to itself\n- vtkCommand::CharEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QKeyEvent *\n- vtkCommand::TimerEvent\n- most of the objects return",
    " a to an int representing a timer id\n- Rendering/vtkXRenderWindowTclInteractor returns NULL\n- Widgets/vtkHoverWidget returns NULL\n- vtkCommand::CreateTimerEvent\n- Rendering/vtkGenericRenderWindowInteractor returns a to an int\n  representing a timer id\n- vtkCommand::DestroyTimerEvent\n- Rendering/vtkGenericRenderWindowInteractor returns a to an int\n  representing a timer id\n- vtkCommand::UserEvent\n-",
    " most of the objects return NULL\n- Infovis/vtkInteractorStyleTreeMapHover returns a pointer to a\n  vtkIdType representing a pedigree id\n- vtkCommand::KeyPressEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QKeyEvent*\n- vtkCommand::KeyReleaseEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QKeyEvent*\n- vtkCommand::LeftButtonPressEvent\n- most ",
    "of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QMouseEvent*\n- vtkCommand::LeftButtonReleaseEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QMouseEvent*\n- vtkCommand::MouseMoveEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QMouseEvent*\n- vtkCommand::MouseWheelForwardEvent\n- most of the objects return NULL\n- GUISupport/Qt/QV",
    "TKWidget returns a QWheelEvent*\n- vtkCommand::MouseWheelBackwardEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QWheelEvent*\n- vtkCommand::RightButtonPressEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QMouseEvent*\n- vtkCommand::RightButtonReleaseEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QMouseEvent*\n- vt",
    "kCommand::MiddleButtonPressEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QMouseEvent*\n- vtkCommand::MiddleButtonReleaseEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QMouseEvent*\n- vtkCommand::CursorChangedEvent\n- most of the objects return a pointer to an int representing a shape\n- Rendering/vtkInteractorObserver returns NULL\n- vtkComma",
    "nd::ResetCameraEvent\n- Rendering/vtkRenderer returns a pointer to itself\n- vtkCommand::ResetCameraClippingRangeEvent\n- Rendering/vtkRenderer returns a pointer to itself\n- vtkCommand::ActiveCameraEvent\n- Rendering/vtkRenderer returns a pointer to the active camera\n- vtkCommand::CreateCameraEvent\n- Rendering/vtkRenderer returns a pointer to the created camera\n- vtkCommand::EnterEvent\n- most of the o",
    "bjects return NULL\n- GUISupport/Qt/QVTKWidget returns a QEvent*\n- vtkCommand::LeaveEvent\n- most of the objects return NULL\n- GUISupport/Qt/QVTKWidget returns a QEvent*\n- vtkCommand::RenderWindowMessageEvent\n- Rendering/vtkWin32OpenGLRenderWindow return a pointer to a UINT\n  message\n- vtkCommand::ComputeVisiblePropBoundsEvent\n- Rendering/vtkRenderer returns a pointer to itself\n- QVTKWidget::Context",
    "MenuEvent\n- GUISupport/Qt/QVTKWidget returns a QContextMenuEvent*\n- QVTKWidget::DragEnterEvent\n- GUISupport/Qt/QVTKWidget returns a QDragEnterEvent*\n- QVTKWidget::DragMoveEvent\n- GUISupport/Qt/QVTKWidget returns a QDragMoveEvent*\n- QVTKWidget::DragLeaveEvent\n- GUISupport/Qt/QVTKWidget returns a QDragLeaveEvent*\n- QVTKWidget::DropEvent\n- GUISupport/Qt/QVTKWidget returns a QDropEvent*\n- vtkCommand::",
    "ViewProgressEvent\n- View/vtkView returns a ViewProgressEventCallData*\n- vtkCommand::VolumeMapperRenderProgressEvent\n- A pointer to a double value between 0.0 and 1.0\n- vtkCommand::VolumeMapperComputeGradientsProgressEvent\n- A pointer to a double value between 0.0 and 1.0\n- vtkCommand::TDxMotionEvent (TDx=3DConnexion)\n- A vtkTDxMotionEventInfo*\n- vtkCommand::TDxButtonPressEvent\n- A int* being the n",
    "umber of the button\n- vtkCommand::TDxButtonReleaseEvent\n- A int* being the number of the button\n\nSee Also:\n\nvtkObject vtkCallbackCommand vtkOldStyleCallbackCommand\nvtkInteractorObserver vtk3DWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCommand(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCommandNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCommand", o) != 0)
    {
    Py_DECREF(o);
    }

}

