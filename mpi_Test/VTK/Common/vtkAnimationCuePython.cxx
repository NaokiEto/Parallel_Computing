// python wrapper for vtkAnimationCue
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
#include "vtkAnimationCue.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAnimationCue(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAnimationCue(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAnimationCueNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAnimationCueNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAnimationCue_Doc();


static PyObject *
PyvtkAnimationCue_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

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
      tempr = op->vtkAnimationCue::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

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
      tempr = op->vtkAnimationCue::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  vtkAnimationCue *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAnimationCue::NewInstance();
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
PyvtkAnimationCue_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAnimationCue *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAnimationCue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_SetTimeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeMode(temp0);
      }
    else
      {
      op->vtkAnimationCue::SetTimeMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetTimeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeMode();
      }
    else
      {
      tempr = op->vtkAnimationCue::GetTimeMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_SetTimeModeToRelative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeModeToRelative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTimeModeToRelative();
      }
    else
      {
      op->vtkAnimationCue::SetTimeModeToRelative();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_SetTimeModeToNormalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeModeToNormalized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTimeModeToNormalized();
      }
    else
      {
      op->vtkAnimationCue::SetTimeModeToNormalized();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_SetStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartTime(temp0);
      }
    else
      {
      op->vtkAnimationCue::SetStartTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartTime();
      }
    else
      {
      tempr = op->vtkAnimationCue::GetStartTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_SetEndTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndTime(temp0);
      }
    else
      {
      op->vtkAnimationCue::SetEndTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetEndTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEndTime();
      }
    else
      {
      tempr = op->vtkAnimationCue::GetEndTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_Tick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Tick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->Tick(temp0, temp1, temp2);
      }
    else
      {
      op->vtkAnimationCue::Tick(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkAnimationCue::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finalize();
      }
    else
      {
      op->vtkAnimationCue::Finalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetAnimationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAnimationTime();
      }
    else
      {
      tempr = op->vtkAnimationCue::GetAnimationTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetDeltaTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDeltaTime();
      }
    else
      {
      tempr = op->vtkAnimationCue::GetDeltaTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationCue_GetClockTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClockTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationCue *op = static_cast<vtkAnimationCue *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClockTime();
      }
    else
      {
      tempr = op->vtkAnimationCue::GetClockTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAnimationCue_Methods[] = {
  {(char*)"GetClassName", PyvtkAnimationCue_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAnimationCue_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAnimationCue_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAnimationCue\nC++: vtkAnimationCue *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAnimationCue_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAnimationCue\nC++: vtkAnimationCue *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTimeMode", PyvtkAnimationCue_SetTimeMode, 1,
   (char*)"V.SetTimeMode(int)\nC++: virtual void SetTimeMode(int mode)\n\nGet/Set the time mode. In Normalized mode, the start and end\ntimes of the cue are normalized [0,1] with respect to the start\nand end times of the container scene. In Relative mode the start\nand end time of the cue are specified in offset seconds relative\nto the start time of the container scene.\n"},
  {(char*)"GetTimeMode", PyvtkAnimationCue_GetTimeMode, 1,
   (char*)"V.GetTimeMode() -> int\nC++: int GetTimeMode()\n\nGet/Set the time mode. In Normalized mode, the start and end\ntimes of the cue are normalized [0,1] with respect to the start\nand end times of the container scene. In Relative mode the start\nand end time of the cue are specified in offset seconds relative\nto the start time of the container scene.\n"},
  {(char*)"SetTimeModeToRelative", PyvtkAnimationCue_SetTimeModeToRelative, 1,
   (char*)"V.SetTimeModeToRelative()\nC++: void SetTimeModeToRelative()\n\nGet/Set the time mode. In Normalized mode, the start and end\ntimes of the cue are normalized [0,1] with respect to the start\nand end times of the container scene. In Relative mode the start\nand end time of the cue are specified in offset seconds relative\nto the start time of the container scene.\n"},
  {(char*)"SetTimeModeToNormalized", PyvtkAnimationCue_SetTimeModeToNormalized, 1,
   (char*)"V.SetTimeModeToNormalized()\nC++: void SetTimeModeToNormalized()\n\nGet/Set the time mode. In Normalized mode, the start and end\ntimes of the cue are normalized [0,1] with respect to the start\nand end times of the container scene. In Relative mode the start\nand end time of the cue are specified in offset seconds relative\nto the start time of the container scene.\n"},
  {(char*)"SetStartTime", PyvtkAnimationCue_SetStartTime, 1,
   (char*)"V.SetStartTime(float)\nC++: void SetStartTime(double a)\n\nGet/Set the Start time for this cue. When the current time is >=\nStartTime, the Cue is in ACTIVE state. if Current time i <\nStartTime, the Cue is in UNINITIALIZED state. Whenever the cue\nenters the ACTIVE state from an INACTIVE state, it triggers the\nStartEvent. The Start time is in seconds relative to the start of\nthe container Scene (when in Relative time mode) or is normalized\nover the span of the container Scene (when in Normalized time\nmode).\n"},
  {(char*)"GetStartTime", PyvtkAnimationCue_GetStartTime, 1,
   (char*)"V.GetStartTime() -> float\nC++: double GetStartTime()\n\nGet/Set the Start time for this cue. When the current time is >=\nStartTime, the Cue is in ACTIVE state. if Current time i <\nStartTime, the Cue is in UNINITIALIZED state. Whenever the cue\nenters the ACTIVE state from an INACTIVE state, it triggers the\nStartEvent. The Start time is in seconds relative to the start of\nthe container Scene (when in Relative time mode) or is normalized\nover the span of the container Scene (when in Normalized time\nmode).\n"},
  {(char*)"SetEndTime", PyvtkAnimationCue_SetEndTime, 1,
   (char*)"V.SetEndTime(float)\nC++: void SetEndTime(double a)\n\nGet/Set the End time for this cue. When the current time is >\nEndTime, the Cue is in INACTIVE state. Whenever the cue leaves an\nACTIVE state to enter INACTIVE state, the EndEvent is triggered.\nThe End time is in seconds relative to the start of the container\nScene (when in Relative time mode) or is normalized over the span\nof the container Scene (when in Normalized time mode).\n"},
  {(char*)"GetEndTime", PyvtkAnimationCue_GetEndTime, 1,
   (char*)"V.GetEndTime() -> float\nC++: double GetEndTime()\n\nGet/Set the End time for this cue. When the current time is >\nEndTime, the Cue is in INACTIVE state. Whenever the cue leaves an\nACTIVE state to enter INACTIVE state, the EndEvent is triggered.\nThe End time is in seconds relative to the start of the container\nScene (when in Relative time mode) or is normalized over the span\nof the container Scene (when in Normalized time mode).\n"},
  {(char*)"Tick", PyvtkAnimationCue_Tick, 1,
   (char*)"V.Tick(float, float, float)\nC++: virtual void Tick(double currenttime, double deltatime,\n    double clocktime)\n\nIndicates a tick or point in time in the animation. Triggers a\nTick event if currenttime >= StartTime and currenttime <=\nEndTime. Whenever the state of the cue changes, either StartEvent\nor EndEvent is triggerred depending upon whether the cue entered\nActive state or quit active state respectively. The current time\nis relative to the start of the container Scene (when in Relative\ntime mode) or is normalized over the span of the container Scene\n(when in Normalized time mode). deltatime is the time since last\ncall to Tick. deltatime also can be in seconds relative to the\nstart of the container Scene or normalized depending upon the\ncue's Time mode. clocktime is the time from the scene i.e. it\ndoes not depend on the time mode for the cue. For the first call\nto Tick after a call to Initialize(), the deltatime is 0;\n"},
  {(char*)"Initialize", PyvtkAnimationCue_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nCalled when the playing of the scene begins. This will set the\nCue to UNINITIALIZED state.\n"},
  {(char*)"Finalize", PyvtkAnimationCue_Finalize, 1,
   (char*)"V.Finalize()\nC++: virtual void Finalize()\n\nCalled when the scene reaches the end. If the cue state is ACTIVE\nwhen this method is called, this will trigger a\nEndAnimationCueEvent.\n"},
  {(char*)"GetAnimationTime", PyvtkAnimationCue_GetAnimationTime, 1,
   (char*)"V.GetAnimationTime() -> float\nC++: double GetAnimationTime()\n\nThis is valid only in a AnimationCueTickEvent handler. Before\nfiring the event the animation cue sets the AnimationTime to the\ntime of the tick.\n"},
  {(char*)"GetDeltaTime", PyvtkAnimationCue_GetDeltaTime, 1,
   (char*)"V.GetDeltaTime() -> float\nC++: double GetDeltaTime()\n\nThis is valid only in a AnimationCueTickEvent handler. Before\nfiring the event the animation cue sets the DeltaTime to the\ndifference in time between the current tick and the last tick.\n"},
  {(char*)"GetClockTime", PyvtkAnimationCue_GetClockTime, 1,
   (char*)"V.GetClockTime() -> float\nC++: double GetClockTime()\n\nThis is valid only in a AnimationCueTickEvent handler. Before\nfiring the event the animation cue sets the ClockTime to the time\nof the tick. ClockTime is directly the time from the animation\nscene neither normalized nor offsetted to the start of the scene.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAnimationCue_StaticNew()
{
  return vtkAnimationCue::New();
}

PyObject *PyVTKClass_vtkAnimationCueNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAnimationCue_StaticNew,
    PyvtkAnimationCue_Methods,
    "vtkAnimationCue", modulename,
    NULL, NULL,
    PyvtkAnimationCue_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"TIMEMODE_NORMALIZED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"TIMEMODE_RELATIVE", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkAnimationCue_Doc()
{
  static const char *docstring[] = {
    "vtkAnimationCue - a seqin an animation.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkAnimationCue and vtkAnimationScene provide the framework to\nsupport animations in VTK. vtkAnimationCue represents an entity that\nchanges/ animates with time, while vtkAnimationScene represents scene\nor setup for the animation, which consists on individual cues or\nother scenes.\n\nA cue has three states: UNINITIALIZED, ACTIVE and INACTIVE.\nUNINITIALIZED represents an point in time before the start",
    " time of\nthe cue. The cue is in ACTIVE state at a point in time between start\ntime and end time for the cue. While, beyond the end time, it is in\nINACTIVE state. When the cue enters the ACTIVE state,\nStartAnimationCueEvent is fired. This event may be handled to\ninitialize the entity to be animated. When the cue leaves the ACTIVE\nstate, EndAnimationCueEvent is fired, which can be handled to cleanup",
    "\nafter having run the animation. For every request to render during\nthe ACTIVE state, AnimationCueTickEvent is fired, which must be\nhandled to perform the actual animation.\n\nSee Also:\n\nvtkAnimationScene\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAnimationCue(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAnimationCueNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAnimationCue", o) != 0)
    {
    Py_DECREF(o);
    }

}

