// python wrapper for vtkEvent
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
#include "vtkEvent.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkEvent(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkEvent(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkEventNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkEventNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkEvent_Doc();


static PyObject *
PyvtkEvent_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

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
      tempr = op->vtkEvent::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

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
      tempr = op->vtkEvent::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  vtkEvent *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkEvent::NewInstance();
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
PyvtkEvent_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkEvent *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkEvent::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_SetEventId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEventId(temp0);
      }
    else
      {
      op->vtkEvent::SetEventId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_GetEventId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEventId();
      }
    else
      {
      tempr = op->vtkEvent::GetEventId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_SetModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetModifier(temp0);
      }
    else
      {
      op->vtkEvent::SetModifier(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_GetModifier_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetModifier();
      }
    else
      {
      tempr = op->vtkEvent::GetModifier();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkEvent_GetModifier_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetModifier");

  vtkRenderWindowInteractor *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
    {
    tempr = vtkEvent::GetModifier(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkEvent_GetModifier(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkEvent_GetModifier_s1(self, args);
    case 1:
      return PyvtkEvent_GetModifier_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetModifier");
  return NULL;
}



static PyObject *
PyvtkEvent_SetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeyCode(temp0);
      }
    else
      {
      op->vtkEvent::SetKeyCode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_GetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  char tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeyCode();
      }
    else
      {
      tempr = op->vtkEvent::GetKeyCode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_SetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepeatCount(temp0);
      }
    else
      {
      op->vtkEvent::SetRepeatCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_GetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRepeatCount();
      }
    else
      {
      tempr = op->vtkEvent::GetRepeatCount();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_SetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKeySym(temp0);
      }
    else
      {
      op->vtkEvent::SetKeySym(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEvent_GetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKeySym();
      }
    else
      {
      tempr = op->vtkEvent::GetKeySym();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEvent_Methods[] = {
  {(char*)"GetClassName", PyvtkEvent_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard macros.\n"},
  {(char*)"IsA", PyvtkEvent_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard macros.\n"},
  {(char*)"NewInstance", PyvtkEvent_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkEvent\nC++: vtkEvent *NewInstance()\n\nStandard macros.\n"},
  {(char*)"SafeDownCast", PyvtkEvent_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEvent\nC++: vtkEvent *SafeDownCast(vtkObject* o)\n\nStandard macros.\n"},
  {(char*)"SetEventId", PyvtkEvent_SetEventId, 1,
   (char*)"V.SetEventId(int)\nC++: void SetEventId(unsigned long a)\n\nSet the modifier for the event.\n"},
  {(char*)"GetEventId", PyvtkEvent_GetEventId, 1,
   (char*)"V.GetEventId() -> int\nC++: unsigned long GetEventId()\n\nSet the modifier for the event.\n"},
  {(char*)"SetModifier", PyvtkEvent_SetModifier, 1,
   (char*)"V.SetModifier(int)\nC++: void SetModifier(int a)\n\nSet the modifier for the event.\n"},
  {(char*)"GetModifier", PyvtkEvent_GetModifier, 1,
   (char*)"V.GetModifier() -> int\nC++: int GetModifier()\nV.GetModifier(vtkRenderWindowInteractor) -> int\nC++: static int GetModifier(vtkRenderWindowInteractor *)\n\nSet the modifier for the event.\n"},
  {(char*)"SetKeyCode", PyvtkEvent_SetKeyCode, 1,
   (char*)"V.SetKeyCode(char)\nC++: void SetKeyCode(char a)\n\nSet the KeyCode for the event.\n"},
  {(char*)"GetKeyCode", PyvtkEvent_GetKeyCode, 1,
   (char*)"V.GetKeyCode() -> char\nC++: char GetKeyCode()\n\nSet the KeyCode for the event.\n"},
  {(char*)"SetRepeatCount", PyvtkEvent_SetRepeatCount, 1,
   (char*)"V.SetRepeatCount(int)\nC++: void SetRepeatCount(int a)\n\nSet the repease count for the event.\n"},
  {(char*)"GetRepeatCount", PyvtkEvent_GetRepeatCount, 1,
   (char*)"V.GetRepeatCount() -> int\nC++: int GetRepeatCount()\n\nSet the repease count for the event.\n"},
  {(char*)"SetKeySym", PyvtkEvent_SetKeySym, 1,
   (char*)"V.SetKeySym(string)\nC++: void SetKeySym(char *)\n\nSet the complex key symbol (compound key strokes) for the event.\n"},
  {(char*)"GetKeySym", PyvtkEvent_GetKeySym, 1,
   (char*)"V.GetKeySym() -> string\nC++: char *GetKeySym()\n\nSet the complex key symbol (compound key strokes) for the event.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEvent_StaticNew()
{
  return vtkEvent::New();
}

PyObject *PyVTKClass_vtkEventNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEvent_StaticNew,
    PyvtkEvent_Methods,
    "vtkEvent", modulename,
    NULL, NULL,
    PyvtkEvent_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(-1);
    if (o && PyDict_SetItemString(d, (char *)"AnyModifier", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"NoModifier", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"ShiftModifier", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"ControlModifier", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"AltModifier", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkEvent_Doc()
{
  static const char *docstring[] = {
    "vtkEvent - a complete specification of a VTK event including all\nmodifiers\n\n",
    "Superclass: vtkObject\n\n",
    "vtkEvent is a class that fully describes a VTK event. It is used by\nthe widgets to help specify the mapping between VTK events and widget\nevents.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEvent(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEventNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEvent", o) != 0)
    {
    Py_DECREF(o);
    }

}

