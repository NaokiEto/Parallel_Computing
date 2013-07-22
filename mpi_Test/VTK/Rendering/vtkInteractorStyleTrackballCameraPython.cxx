// python wrapper for vtkInteractorStyleTrackballCamera
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
#include "vtkInteractorStyleTrackballCamera.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInteractorStyleTrackballCamera(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInteractorStyleTrackballCamera(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInteractorStyleTrackballCameraNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleTrackballCameraNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleNew
#endif

static const char **PyvtkInteractorStyleTrackballCamera_Doc();


static PyObject *
PyvtkInteractorStyleTrackballCamera_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

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
      tempr = op->vtkInteractorStyleTrackballCamera::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

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
      tempr = op->vtkInteractorStyleTrackballCamera::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

  vtkInteractorStyleTrackballCamera *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInteractorStyleTrackballCamera::NewInstance();
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
PyvtkInteractorStyleTrackballCamera_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInteractorStyleTrackballCamera *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInteractorStyleTrackballCamera::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleTrackballCamera::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleTrackballCamera::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleTrackballCamera::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkInteractorStyleTrackballCamera::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkInteractorStyleTrackballCamera::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkInteractorStyleTrackballCamera::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkInteractorStyleTrackballCamera::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_OnMouseWheelForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseWheelForward();
      }
    else
      {
      op->vtkInteractorStyleTrackballCamera::OnMouseWheelForward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_OnMouseWheelBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseWheelBackward();
      }
    else
      {
      op->vtkInteractorStyleTrackballCamera::OnMouseWheelBackward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Rotate();
      }
    else
      {
      op->vtkInteractorStyleTrackballCamera::Rotate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_Spin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Spin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Spin();
      }
    else
      {
      op->vtkInteractorStyleTrackballCamera::Spin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_Pan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Pan();
      }
    else
      {
      op->vtkInteractorStyleTrackballCamera::Pan();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_Dolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Dolly();
      }
    else
      {
      op->vtkInteractorStyleTrackballCamera::Dolly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_SetMotionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMotionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMotionFactor(temp0);
      }
    else
      {
      op->vtkInteractorStyleTrackballCamera::SetMotionFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballCamera_GetMotionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMotionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballCamera *op = static_cast<vtkInteractorStyleTrackballCamera *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMotionFactor();
      }
    else
      {
      tempr = op->vtkInteractorStyleTrackballCamera::GetMotionFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleTrackballCamera_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleTrackballCamera_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleTrackballCamera_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleTrackballCamera_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInteractorStyleTrackballCamera\nC++: vtkInteractorStyleTrackballCamera *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleTrackballCamera_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleTrackballCamera\nC++: vtkInteractorStyleTrackballCamera *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleTrackballCamera_OnMouseMove, 1,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleTrackballCamera_OnLeftButtonDown, 1,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleTrackballCamera_OnLeftButtonUp, 1,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMiddleButtonDown", PyvtkInteractorStyleTrackballCamera_OnMiddleButtonDown, 1,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMiddleButtonUp", PyvtkInteractorStyleTrackballCamera_OnMiddleButtonUp, 1,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonDown", PyvtkInteractorStyleTrackballCamera_OnRightButtonDown, 1,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonUp", PyvtkInteractorStyleTrackballCamera_OnRightButtonUp, 1,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMouseWheelForward", PyvtkInteractorStyleTrackballCamera_OnMouseWheelForward, 1,
   (char*)"V.OnMouseWheelForward()\nC++: virtual void OnMouseWheelForward()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMouseWheelBackward", PyvtkInteractorStyleTrackballCamera_OnMouseWheelBackward, 1,
   (char*)"V.OnMouseWheelBackward()\nC++: virtual void OnMouseWheelBackward()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"Rotate", PyvtkInteractorStyleTrackballCamera_Rotate, 1,
   (char*)"V.Rotate()\nC++: virtual void Rotate()\n\n"},
  {(char*)"Spin", PyvtkInteractorStyleTrackballCamera_Spin, 1,
   (char*)"V.Spin()\nC++: virtual void Spin()\n\n"},
  {(char*)"Pan", PyvtkInteractorStyleTrackballCamera_Pan, 1,
   (char*)"V.Pan()\nC++: virtual void Pan()\n\n"},
  {(char*)"Dolly", PyvtkInteractorStyleTrackballCamera_Dolly, 1,
   (char*)"V.Dolly()\nC++: virtual void Dolly()\n\n"},
  {(char*)"SetMotionFactor", PyvtkInteractorStyleTrackballCamera_SetMotionFactor, 1,
   (char*)"V.SetMotionFactor(float)\nC++: void SetMotionFactor(double a)\n\nSet the apparent sensitivity of the interactor style to mouse\nmotion.\n"},
  {(char*)"GetMotionFactor", PyvtkInteractorStyleTrackballCamera_GetMotionFactor, 1,
   (char*)"V.GetMotionFactor() -> float\nC++: double GetMotionFactor()\n\nSet the apparent sensitivity of the interactor style to mouse\nmotion.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleTrackballCamera_StaticNew()
{
  return vtkInteractorStyleTrackballCamera::New();
}

PyObject *PyVTKClass_vtkInteractorStyleTrackballCameraNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleTrackballCamera_StaticNew,
    PyvtkInteractorStyleTrackballCamera_Methods,
    "vtkInteractorStyleTrackballCamera", modulename,
    NULL, NULL,
    PyvtkInteractorStyleTrackballCamera_Doc(),
    PyVTKClass_vtkInteractorStyleNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleTrackballCamera_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleTrackballCamera - interactive manipulation of the\ncamera\n\n",
    "Superclass: vtkInteractorStyle\n\n",
    "vtkInteractorStyleTrackballCamera allows the user to interactively\nmanipulate (rotate, pan, etc.) the camera, the viewpoint of the\nscene.  In trackball interaction, the magnitude of the mouse motion\nis proportional to the camera motion associated with a particular\nmouse binding. For example, small left-button motions cause small\nchanges in the rotation of the camera around its focal point. For a\n3",
    "-button mouse, the left button is for rotation, the right button for\nzooming, the middle button for panning, and ctrl + left button for\nspinning.  (With fewer mouse buttons, ctrl + shift + left button is\nfor zooming, and shift + left button is for panning.)\n\nSee Also:\n\nvtkInteractorStyleTrackballActor vtkInteractorStyleJoystickCamera\nvtkInteractorStyleJoystickActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleTrackballCamera(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleTrackballCameraNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleTrackballCamera", o) != 0)
    {
    Py_DECREF(o);
    }

}

