// python wrapper for vtkInteractorEventRecorder
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
#include "vtkInteractorEventRecorder.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInteractorEventRecorder(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInteractorEventRecorder(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInteractorEventRecorderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInteractorEventRecorderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorObserverNew
extern "C" { PyObject *PyVTKClass_vtkInteractorObserverNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorObserverNew
#endif

static const char **PyvtkInteractorEventRecorder_Doc();


static PyObject *
PyvtkInteractorEventRecorder_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

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
      tempr = op->vtkInteractorEventRecorder::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

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
      tempr = op->vtkInteractorEventRecorder::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  vtkInteractorEventRecorder *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInteractorEventRecorder::NewInstance();
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
PyvtkInteractorEventRecorder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInteractorEventRecorder *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInteractorEventRecorder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkInteractorEventRecorder::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  vtkRenderWindowInteractor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->SetInteractor(temp0);
      }
    else
      {
      op->vtkInteractorEventRecorder::SetInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkInteractorEventRecorder::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkInteractorEventRecorder::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_Record(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Record");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Record();
      }
    else
      {
      op->vtkInteractorEventRecorder::Record();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_Play(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Play");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Play();
      }
    else
      {
      op->vtkInteractorEventRecorder::Play();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Stop();
      }
    else
      {
      op->vtkInteractorEventRecorder::Stop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_Rewind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rewind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Rewind();
      }
    else
      {
      op->vtkInteractorEventRecorder::Rewind();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadFromInputString(temp0);
      }
    else
      {
      op->vtkInteractorEventRecorder::SetReadFromInputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_GetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadFromInputString();
      }
    else
      {
      tempr = op->vtkInteractorEventRecorder::GetReadFromInputString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_ReadFromInputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadFromInputStringOn();
      }
    else
      {
      op->vtkInteractorEventRecorder::ReadFromInputStringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_ReadFromInputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadFromInputStringOff();
      }
    else
      {
      op->vtkInteractorEventRecorder::ReadFromInputStringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_SetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputString(temp0);
      }
    else
      {
      op->vtkInteractorEventRecorder::SetInputString(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorEventRecorder_GetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorEventRecorder *op = static_cast<vtkInteractorEventRecorder *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputString();
      }
    else
      {
      tempr = op->vtkInteractorEventRecorder::GetInputString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorEventRecorder_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorEventRecorder_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorEventRecorder_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorEventRecorder_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInteractorEventRecorder\nC++: vtkInteractorEventRecorder *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorEventRecorder_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorEventRecorder\nC++: vtkInteractorEventRecorder *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnabled", PyvtkInteractorEventRecorder_SetEnabled, 1,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\n"},
  {(char*)"SetInteractor", PyvtkInteractorEventRecorder_SetInteractor, 1,
   (char*)"V.SetInteractor(vtkRenderWindowInteractor)\nC++: virtual void SetInteractor(vtkRenderWindowInteractor *iren)\n\n"},
  {(char*)"SetFileName", PyvtkInteractorEventRecorder_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet/Get the name of a file events should be written to/from.\n"},
  {(char*)"GetFileName", PyvtkInteractorEventRecorder_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet/Get the name of a file events should be written to/from.\n"},
  {(char*)"Record", PyvtkInteractorEventRecorder_Record, 1,
   (char*)"V.Record()\nC++: void Record()\n\nInvoke this method to begin recording events. The events will be\nrecorded to the filename indicated.\n"},
  {(char*)"Play", PyvtkInteractorEventRecorder_Play, 1,
   (char*)"V.Play()\nC++: void Play()\n\nInvoke this method to begin playing events from the current\nposition. The events will be played back from the filename\nindicated.\n"},
  {(char*)"Stop", PyvtkInteractorEventRecorder_Stop, 1,
   (char*)"V.Stop()\nC++: void Stop()\n\nInvoke this method to stop recording/playing events.\n"},
  {(char*)"Rewind", PyvtkInteractorEventRecorder_Rewind, 1,
   (char*)"V.Rewind()\nC++: void Rewind()\n\nRewind to the beginning of the file.\n"},
  {(char*)"SetReadFromInputString", PyvtkInteractorEventRecorder_SetReadFromInputString, 1,
   (char*)"V.SetReadFromInputString(int)\nC++: void SetReadFromInputString(int a)\n\nEnable reading from an InputString as compared to the default\nbehavior, which is to read from a file.\n"},
  {(char*)"GetReadFromInputString", PyvtkInteractorEventRecorder_GetReadFromInputString, 1,
   (char*)"V.GetReadFromInputString() -> int\nC++: int GetReadFromInputString()\n\nEnable reading from an InputString as compared to the default\nbehavior, which is to read from a file.\n"},
  {(char*)"ReadFromInputStringOn", PyvtkInteractorEventRecorder_ReadFromInputStringOn, 1,
   (char*)"V.ReadFromInputStringOn()\nC++: void ReadFromInputStringOn()\n\nEnable reading from an InputString as compared to the default\nbehavior, which is to read from a file.\n"},
  {(char*)"ReadFromInputStringOff", PyvtkInteractorEventRecorder_ReadFromInputStringOff, 1,
   (char*)"V.ReadFromInputStringOff()\nC++: void ReadFromInputStringOff()\n\nEnable reading from an InputString as compared to the default\nbehavior, which is to read from a file.\n"},
  {(char*)"SetInputString", PyvtkInteractorEventRecorder_SetInputString, 1,
   (char*)"V.SetInputString(string)\nC++: void SetInputString(char *)\n\nSet/Get the string to read from.\n"},
  {(char*)"GetInputString", PyvtkInteractorEventRecorder_GetInputString, 1,
   (char*)"V.GetInputString() -> string\nC++: char *GetInputString()\n\nSet/Get the string to read from.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorEventRecorder_StaticNew()
{
  return vtkInteractorEventRecorder::New();
}

PyObject *PyVTKClass_vtkInteractorEventRecorderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorEventRecorder_StaticNew,
    PyvtkInteractorEventRecorder_Methods,
    "vtkInteractorEventRecorder", modulename,
    NULL, NULL,
    PyvtkInteractorEventRecorder_Doc(),
    PyVTKClass_vtkInteractorObserverNew(modulename));
  return cls;
}

const char **PyvtkInteractorEventRecorder_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorEventRecorder - record and play VTK events passing\nthrough a vtkRenderWindowInteractor\n\n",
    "Superclass: vtkInteractorObserver\n\n",
    "vtkInteractorEventRecorder records all VTK events invoked from a\nvtkRenderWindowInteractor. The events are recorded to a file.\nvtkInteractorEventRecorder can also be used to play those events back\nand invoke them on an vtkRenderWindowInteractor. (Note: the events\ncan also be played back from a file or string.)\n\nThe format of the event file is simple. It is:\n EventName X Y ctrl shift keycode repeat",
    "Count keySym The format also\nallows \"#\" comments.\n\nSee Also:\n\nvtkInteractorObserver vtkCallback\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorEventRecorder(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorEventRecorderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorEventRecorder", o) != 0)
    {
    Py_DECREF(o);
    }

}

