// python wrapper for vtkInteractorStyleJoystickCamera
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
#include "vtkInteractorStyleJoystickCamera.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInteractorStyleJoystickCamera(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInteractorStyleJoystickCamera(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInteractorStyleJoystickCameraNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleJoystickCameraNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleNew
#endif

static const char **PyvtkInteractorStyleJoystickCamera_Doc();


static PyObject *
PyvtkInteractorStyleJoystickCamera_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

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
      tempr = op->vtkInteractorStyleJoystickCamera::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

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
      tempr = op->vtkInteractorStyleJoystickCamera::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  vtkInteractorStyleJoystickCamera *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInteractorStyleJoystickCamera::NewInstance();
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
PyvtkInteractorStyleJoystickCamera_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInteractorStyleJoystickCamera *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInteractorStyleJoystickCamera::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleJoystickCamera::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleJoystickCamera::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleJoystickCamera::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkInteractorStyleJoystickCamera::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkInteractorStyleJoystickCamera::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkInteractorStyleJoystickCamera::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkInteractorStyleJoystickCamera::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnMouseWheelForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseWheelForward();
      }
    else
      {
      op->vtkInteractorStyleJoystickCamera::OnMouseWheelForward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_OnMouseWheelBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseWheelBackward();
      }
    else
      {
      op->vtkInteractorStyleJoystickCamera::OnMouseWheelBackward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Rotate();
      }
    else
      {
      op->vtkInteractorStyleJoystickCamera::Rotate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_Spin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Spin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Spin();
      }
    else
      {
      op->vtkInteractorStyleJoystickCamera::Spin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_Pan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Pan();
      }
    else
      {
      op->vtkInteractorStyleJoystickCamera::Pan();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickCamera_Dolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickCamera *op = static_cast<vtkInteractorStyleJoystickCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Dolly();
      }
    else
      {
      op->vtkInteractorStyleJoystickCamera::Dolly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleJoystickCamera_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleJoystickCamera_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleJoystickCamera_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleJoystickCamera_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInteractorStyleJoystickCamera\nC++: vtkInteractorStyleJoystickCamera *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleJoystickCamera_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleJoystickCamera\nC++: vtkInteractorStyleJoystickCamera *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleJoystickCamera_OnMouseMove, 1,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleJoystickCamera_OnLeftButtonDown, 1,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleJoystickCamera_OnLeftButtonUp, 1,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMiddleButtonDown", PyvtkInteractorStyleJoystickCamera_OnMiddleButtonDown, 1,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMiddleButtonUp", PyvtkInteractorStyleJoystickCamera_OnMiddleButtonUp, 1,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonDown", PyvtkInteractorStyleJoystickCamera_OnRightButtonDown, 1,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonUp", PyvtkInteractorStyleJoystickCamera_OnRightButtonUp, 1,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMouseWheelForward", PyvtkInteractorStyleJoystickCamera_OnMouseWheelForward, 1,
   (char*)"V.OnMouseWheelForward()\nC++: virtual void OnMouseWheelForward()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMouseWheelBackward", PyvtkInteractorStyleJoystickCamera_OnMouseWheelBackward, 1,
   (char*)"V.OnMouseWheelBackward()\nC++: virtual void OnMouseWheelBackward()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"Rotate", PyvtkInteractorStyleJoystickCamera_Rotate, 1,
   (char*)"V.Rotate()\nC++: virtual void Rotate()\n\n"},
  {(char*)"Spin", PyvtkInteractorStyleJoystickCamera_Spin, 1,
   (char*)"V.Spin()\nC++: virtual void Spin()\n\n"},
  {(char*)"Pan", PyvtkInteractorStyleJoystickCamera_Pan, 1,
   (char*)"V.Pan()\nC++: virtual void Pan()\n\n"},
  {(char*)"Dolly", PyvtkInteractorStyleJoystickCamera_Dolly, 1,
   (char*)"V.Dolly()\nC++: virtual void Dolly()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleJoystickCamera_StaticNew()
{
  return vtkInteractorStyleJoystickCamera::New();
}

PyObject *PyVTKClass_vtkInteractorStyleJoystickCameraNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleJoystickCamera_StaticNew,
    PyvtkInteractorStyleJoystickCamera_Methods,
    "vtkInteractorStyleJoystickCamera", modulename,
    NULL, NULL,
    PyvtkInteractorStyleJoystickCamera_Doc(),
    PyVTKClass_vtkInteractorStyleNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleJoystickCamera_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleJoystickCamera - interactive manipulation of the\ncamera\n\n",
    "Superclass: vtkInteractorStyle\n\n",
    "vtkInteractorStyleJoystickCamera allows the user to move (rotate,\npan, etc.) the camera, the point of view for the scene.  The position\nof the mouse relative to the center of the scene determines the speed\nat which the camera moves, and the speed of the mouse movement\ndetermines the acceleration of the camera, so the camera continues to\nmove even if the mouse if not moving. For a 3-button mouse, t",
    "he left\nbutton is for rotation, the right button for zooming, the middle\nbutton for panning, and ctrl + left button for spinning.  (With fewer\nmouse buttons, ctrl + shift + left button is for zooming, and shift +\nleft button is for panning.)\n\nSee Also:\n\nvtkInteractorStyleJoystickActor vtkInteractorStyleTrackballCamera\nvtkInteractorStyleTrackballActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleJoystickCamera(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleJoystickCameraNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleJoystickCamera", o) != 0)
    {
    Py_DECREF(o);
    }

}

