// python wrapper for vtkAnimationScene
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
#include "vtkAnimationScene.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAnimationScene(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAnimationScene(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAnimationSceneNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAnimationSceneNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAnimationCueNew
extern "C" { PyObject *PyVTKClass_vtkAnimationCueNew(const char *); }
#define DECLARED_PyVTKClass_vtkAnimationCueNew
#endif

static const char **PyvtkAnimationScene_Doc();


static PyObject *
PyvtkAnimationScene_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

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
      tempr = op->vtkAnimationScene::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

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
      tempr = op->vtkAnimationScene::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  vtkAnimationScene *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAnimationScene::NewInstance();
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
PyvtkAnimationScene_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAnimationScene *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAnimationScene::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetPlayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlayMode(temp0);
      }
    else
      {
      op->vtkAnimationScene::SetPlayMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetModeToSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetModeToSequence();
      }
    else
      {
      op->vtkAnimationScene::SetModeToSequence();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetModeToRealTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToRealTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetModeToRealTime();
      }
    else
      {
      op->vtkAnimationScene::SetModeToRealTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetPlayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlayMode();
      }
    else
      {
      tempr = op->vtkAnimationScene::GetPlayMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetFrameRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrameRate(temp0);
      }
    else
      {
      op->vtkAnimationScene::SetFrameRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetFrameRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFrameRate();
      }
    else
      {
      tempr = op->vtkAnimationScene::GetFrameRate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_AddCue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  vtkAnimationCue *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnimationCue"))
    {
    if (ap.IsBound())
      {
      op->AddCue(temp0);
      }
    else
      {
      op->vtkAnimationScene::AddCue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_RemoveCue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  vtkAnimationCue *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnimationCue"))
    {
    if (ap.IsBound())
      {
      op->RemoveCue(temp0);
      }
    else
      {
      op->vtkAnimationScene::RemoveCue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_RemoveAllCues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllCues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllCues();
      }
    else
      {
      op->vtkAnimationScene::RemoveAllCues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetNumberOfCues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCues();
      }
    else
      {
      tempr = op->vtkAnimationScene::GetNumberOfCues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_Play(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Play");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Play();
      }
    else
      {
      op->vtkAnimationScene::Play();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Stop();
      }
    else
      {
      op->vtkAnimationScene::Stop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLoop(temp0);
      }
    else
      {
      op->vtkAnimationScene::SetLoop(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLoop();
      }
    else
      {
      tempr = op->vtkAnimationScene::GetLoop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetAnimationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAnimationTime(temp0);
      }
    else
      {
      op->vtkAnimationScene::SetAnimationTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_GetAnimationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

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
      tempr = op->vtkAnimationScene::GetAnimationTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_SetTimeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

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
      op->vtkAnimationScene::SetTimeMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAnimationScene_IsInPlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInPlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimationScene *op = static_cast<vtkAnimationScene *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsInPlay();
      }
    else
      {
      tempr = op->vtkAnimationScene::IsInPlay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAnimationScene_Methods[] = {
  {(char*)"GetClassName", PyvtkAnimationScene_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAnimationScene_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAnimationScene_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAnimationScene\nC++: vtkAnimationScene *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAnimationScene_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAnimationScene\nC++: vtkAnimationScene *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPlayMode", PyvtkAnimationScene_SetPlayMode, 1,
   (char*)"V.SetPlayMode(int)\nC++: void SetPlayMode(int a)\n\nGet/Set the PlayMode for running/playing the animation scene. In\nthe Sequence mode, all the frames are generated one after the\nother. The time reported to each Tick of the constituent cues\n(during Play) is incremented by 1/frame rate, irrespective of the\ncurrent time. In the RealTime mode, time indicates the instance\nin time.\n"},
  {(char*)"SetModeToSequence", PyvtkAnimationScene_SetModeToSequence, 1,
   (char*)"V.SetModeToSequence()\nC++: void SetModeToSequence()\n\nGet/Set the PlayMode for running/playing the animation scene. In\nthe Sequence mode, all the frames are generated one after the\nother. The time reported to each Tick of the constituent cues\n(during Play) is incremented by 1/frame rate, irrespective of the\ncurrent time. In the RealTime mode, time indicates the instance\nin time.\n"},
  {(char*)"SetModeToRealTime", PyvtkAnimationScene_SetModeToRealTime, 1,
   (char*)"V.SetModeToRealTime()\nC++: void SetModeToRealTime()\n\nGet/Set the PlayMode for running/playing the animation scene. In\nthe Sequence mode, all the frames are generated one after the\nother. The time reported to each Tick of the constituent cues\n(during Play) is incremented by 1/frame rate, irrespective of the\ncurrent time. In the RealTime mode, time indicates the instance\nin time.\n"},
  {(char*)"GetPlayMode", PyvtkAnimationScene_GetPlayMode, 1,
   (char*)"V.GetPlayMode() -> int\nC++: int GetPlayMode()\n\nGet/Set the PlayMode for running/playing the animation scene. In\nthe Sequence mode, all the frames are generated one after the\nother. The time reported to each Tick of the constituent cues\n(during Play) is incremented by 1/frame rate, irrespective of the\ncurrent time. In the RealTime mode, time indicates the instance\nin time.\n"},
  {(char*)"SetFrameRate", PyvtkAnimationScene_SetFrameRate, 1,
   (char*)"V.SetFrameRate(float)\nC++: void SetFrameRate(double a)\n\nGet/Set the frame rate (in frames per second). This parameter\naffects only in the Sequence mode. The time interval indicated to\neach cue on every tick is progressed by 1/frame-rate seconds.\n"},
  {(char*)"GetFrameRate", PyvtkAnimationScene_GetFrameRate, 1,
   (char*)"V.GetFrameRate() -> float\nC++: double GetFrameRate()\n\nGet/Set the frame rate (in frames per second). This parameter\naffects only in the Sequence mode. The time interval indicated to\neach cue on every tick is progressed by 1/frame-rate seconds.\n"},
  {(char*)"AddCue", PyvtkAnimationScene_AddCue, 1,
   (char*)"V.AddCue(vtkAnimationCue)\nC++: void AddCue(vtkAnimationCue *cue)\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {(char*)"RemoveCue", PyvtkAnimationScene_RemoveCue, 1,
   (char*)"V.RemoveCue(vtkAnimationCue)\nC++: void RemoveCue(vtkAnimationCue *cue)\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {(char*)"RemoveAllCues", PyvtkAnimationScene_RemoveAllCues, 1,
   (char*)"V.RemoveAllCues()\nC++: void RemoveAllCues()\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {(char*)"GetNumberOfCues", PyvtkAnimationScene_GetNumberOfCues, 1,
   (char*)"V.GetNumberOfCues() -> int\nC++: int GetNumberOfCues()\n\nAdd/Remove an AnimationCue to/from the Scene. It's an error to\nadd a cue twice to the Scene.\n"},
  {(char*)"Play", PyvtkAnimationScene_Play, 1,
   (char*)"V.Play()\nC++: virtual void Play()\n\nStarts playing the animation scene. Fires a\nvtkCommand::StartEvent before play beings and\nvtkCommand::EndEvent after play ends.\n"},
  {(char*)"Stop", PyvtkAnimationScene_Stop, 1,
   (char*)"V.Stop()\nC++: void Stop()\n\nStops the animation scene that is running.\n"},
  {(char*)"SetLoop", PyvtkAnimationScene_SetLoop, 1,
   (char*)"V.SetLoop(int)\nC++: void SetLoop(int a)\n\nEnable/Disable animation loop.\n"},
  {(char*)"GetLoop", PyvtkAnimationScene_GetLoop, 1,
   (char*)"V.GetLoop() -> int\nC++: int GetLoop()\n\nEnable/Disable animation loop.\n"},
  {(char*)"SetAnimationTime", PyvtkAnimationScene_SetAnimationTime, 1,
   (char*)"V.SetAnimationTime(float)\nC++: void SetAnimationTime(double time)\n\nMakes the state of the scene same as the given time.\n"},
  {(char*)"GetAnimationTime", PyvtkAnimationScene_GetAnimationTime, 1,
   (char*)"V.GetAnimationTime() -> float\nC++: double GetAnimationTime()\n\nMakes the state of the scene same as the given time.\n"},
  {(char*)"SetTimeMode", PyvtkAnimationScene_SetTimeMode, 1,
   (char*)"V.SetTimeMode(int)\nC++: virtual void SetTimeMode(int mode)\n\nOverridden to allow change to Normalized mode only if none of the\nconstituent cues is in Relative time mode.\n"},
  {(char*)"IsInPlay", PyvtkAnimationScene_IsInPlay, 1,
   (char*)"V.IsInPlay() -> int\nC++: int IsInPlay()\n\nReturns if the animation is being played.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAnimationScene_StaticNew()
{
  return vtkAnimationScene::New();
}

PyObject *PyVTKClass_vtkAnimationSceneNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAnimationScene_StaticNew,
    PyvtkAnimationScene_Methods,
    "vtkAnimationScene", modulename,
    NULL, NULL,
    PyvtkAnimationScene_Doc(),
    PyVTKClass_vtkAnimationCueNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"PLAYMODE_SEQUENCE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"PLAYMODE_REALTIME", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkAnimationScene_Doc()
{
  static const char *docstring[] = {
    "vtkAnimationScene - the animation scene manager.\n\n",
    "Superclass: vtkAnimationCue\n\n",
    "vtkAnimationCue and vtkAnimationScene provide the framework to\nsupport animations in VTK. vtkAnimationCue represents an entity that\nchanges/ animates with time, while vtkAnimationScene represents scene\nor setup for the animation, which consists of individual cues or\nother scenes.\n\nA scene can be played in real time mode, or as a seqence of frames\n1/frame rate apart in time.\n\nSee Also:\n\nvtkAnimatio",
    "nCue\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAnimationScene(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAnimationSceneNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAnimationScene", o) != 0)
    {
    Py_DECREF(o);
    }

}

