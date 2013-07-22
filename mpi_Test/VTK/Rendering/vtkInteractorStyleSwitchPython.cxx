// python wrapper for vtkInteractorStyleSwitch
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
#include "vtkInteractorStyleSwitch.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInteractorStyleSwitch(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInteractorStyleSwitch(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInteractorStyleSwitchNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleSwitchNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleNew
#endif

static const char **PyvtkInteractorStyleSwitch_Doc();


static PyObject *
PyvtkInteractorStyleSwitch_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

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
      tempr = op->vtkInteractorStyleSwitch::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

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
      tempr = op->vtkInteractorStyleSwitch::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  vtkInteractorStyleSwitch *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInteractorStyleSwitch::NewInstance();
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
PyvtkInteractorStyleSwitch_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInteractorStyleSwitch *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInteractorStyleSwitch::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

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
      op->vtkInteractorStyleSwitch::SetInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SetAutoAdjustCameraClippingRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoAdjustCameraClippingRange(temp0);
      }
    else
      {
      op->vtkInteractorStyleSwitch::SetAutoAdjustCameraClippingRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_GetCurrentStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  vtkInteractorStyle *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentStyle();
      }
    else
      {
      tempr = op->vtkInteractorStyleSwitch::GetCurrentStyle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SetCurrentStyleToJoystickActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentStyleToJoystickActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentStyleToJoystickActor();
      }
    else
      {
      op->vtkInteractorStyleSwitch::SetCurrentStyleToJoystickActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SetCurrentStyleToJoystickCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentStyleToJoystickCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentStyleToJoystickCamera();
      }
    else
      {
      op->vtkInteractorStyleSwitch::SetCurrentStyleToJoystickCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SetCurrentStyleToTrackballActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentStyleToTrackballActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentStyleToTrackballActor();
      }
    else
      {
      op->vtkInteractorStyleSwitch::SetCurrentStyleToTrackballActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SetCurrentStyleToTrackballCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentStyleToTrackballCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentStyleToTrackballCamera();
      }
    else
      {
      op->vtkInteractorStyleSwitch::SetCurrentStyleToTrackballCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnChar();
      }
    else
      {
      op->vtkInteractorStyleSwitch::OnChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SetDefaultRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetDefaultRenderer(temp0);
      }
    else
      {
      op->vtkInteractorStyleSwitch::SetDefaultRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleSwitch_SetCurrentRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleSwitch *op = static_cast<vtkInteractorStyleSwitch *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetCurrentRenderer(temp0);
      }
    else
      {
      op->vtkInteractorStyleSwitch::SetCurrentRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleSwitch_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleSwitch_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleSwitch_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleSwitch_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInteractorStyleSwitch\nC++: vtkInteractorStyleSwitch *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleSwitch_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleSwitch\nC++: vtkInteractorStyleSwitch *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInteractor", PyvtkInteractorStyleSwitch_SetInteractor, 1,
   (char*)"V.SetInteractor(vtkRenderWindowInteractor)\nC++: void SetInteractor(vtkRenderWindowInteractor *iren)\n\nThe sub styles need the interactor too.\n"},
  {(char*)"SetAutoAdjustCameraClippingRange", PyvtkInteractorStyleSwitch_SetAutoAdjustCameraClippingRange, 1,
   (char*)"V.SetAutoAdjustCameraClippingRange(int)\nC++: void SetAutoAdjustCameraClippingRange(int value)\n\nWe must override this method in order to pass the setting down to\nthe underlying styles\n"},
  {(char*)"GetCurrentStyle", PyvtkInteractorStyleSwitch_GetCurrentStyle, 1,
   (char*)"V.GetCurrentStyle() -> vtkInteractorStyle\nC++: vtkInteractorStyle *GetCurrentStyle()\n\nSet/Get current style\n"},
  {(char*)"SetCurrentStyleToJoystickActor", PyvtkInteractorStyleSwitch_SetCurrentStyleToJoystickActor, 1,
   (char*)"V.SetCurrentStyleToJoystickActor()\nC++: void SetCurrentStyleToJoystickActor()\n\nSet/Get current style\n"},
  {(char*)"SetCurrentStyleToJoystickCamera", PyvtkInteractorStyleSwitch_SetCurrentStyleToJoystickCamera, 1,
   (char*)"V.SetCurrentStyleToJoystickCamera()\nC++: void SetCurrentStyleToJoystickCamera()\n\nSet/Get current style\n"},
  {(char*)"SetCurrentStyleToTrackballActor", PyvtkInteractorStyleSwitch_SetCurrentStyleToTrackballActor, 1,
   (char*)"V.SetCurrentStyleToTrackballActor()\nC++: void SetCurrentStyleToTrackballActor()\n\nSet/Get current style\n"},
  {(char*)"SetCurrentStyleToTrackballCamera", PyvtkInteractorStyleSwitch_SetCurrentStyleToTrackballCamera, 1,
   (char*)"V.SetCurrentStyleToTrackballCamera()\nC++: void SetCurrentStyleToTrackballCamera()\n\nSet/Get current style\n"},
  {(char*)"OnChar", PyvtkInteractorStyleSwitch_OnChar, 1,
   (char*)"V.OnChar()\nC++: virtual void OnChar()\n\nOnly care about the char event, which is used to switch between\ndifferent styles.\n"},
  {(char*)"SetDefaultRenderer", PyvtkInteractorStyleSwitch_SetDefaultRenderer, 1,
   (char*)"V.SetDefaultRenderer(vtkRenderer)\nC++: virtual void SetDefaultRenderer(vtkRenderer *)\n\nOverridden from vtkInteractorObserver because the interactor\nstyles used by this class must also be updated.\n"},
  {(char*)"SetCurrentRenderer", PyvtkInteractorStyleSwitch_SetCurrentRenderer, 1,
   (char*)"V.SetCurrentRenderer(vtkRenderer)\nC++: virtual void SetCurrentRenderer(vtkRenderer *)\n\nOverridden from vtkInteractorObserver because the interactor\nstyles used by this class must also be updated.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleSwitch_StaticNew()
{
  return vtkInteractorStyleSwitch::New();
}

PyObject *PyVTKClass_vtkInteractorStyleSwitchNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleSwitch_StaticNew,
    PyvtkInteractorStyleSwitch_Methods,
    "vtkInteractorStyleSwitch", modulename,
    NULL, NULL,
    PyvtkInteractorStyleSwitch_Doc(),
    PyVTKClass_vtkInteractorStyleNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleSwitch_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleSwitch - class to swap between interactory styles\n\n",
    "Superclass: vtkInteractorStyle\n\n",
    "The class vtkInteractorStyleSwitch allows handles interactively\nswitching between four interactor styles -- joystick actor, joystick\ncamera, trackball actor, and trackball camera.  Type 'j' or 't' to\nselect joystick or trackball, and type 'c' or 'a' to select camera or\nactor. The default interactor style is joystick camera.\n\nSee Also:\n\nvtkInteractorStyleJoystickActor vtkInteractorStyleJoystickCame",
    "ra\nvtkInteractorStyleTrackballActor vtkInteractorStyleTrackballCamera\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleSwitch(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleSwitchNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleSwitch", o) != 0)
    {
    Py_DECREF(o);
    }

}

