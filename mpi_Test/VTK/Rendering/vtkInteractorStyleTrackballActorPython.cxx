// python wrapper for vtkInteractorStyleTrackballActor
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
#include "vtkInteractorStyleTrackballActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInteractorStyleTrackballActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInteractorStyleTrackballActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInteractorStyleTrackballActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleTrackballActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleNew
#endif

static const char **PyvtkInteractorStyleTrackballActor_Doc();


static PyObject *
PyvtkInteractorStyleTrackballActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

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
      tempr = op->vtkInteractorStyleTrackballActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

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
      tempr = op->vtkInteractorStyleTrackballActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  vtkInteractorStyleTrackballActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInteractorStyleTrackballActor::NewInstance();
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
PyvtkInteractorStyleTrackballActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInteractorStyleTrackballActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInteractorStyleTrackballActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleTrackballActor::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleTrackballActor::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleTrackballActor::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkInteractorStyleTrackballActor::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkInteractorStyleTrackballActor::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkInteractorStyleTrackballActor::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkInteractorStyleTrackballActor::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Rotate();
      }
    else
      {
      op->vtkInteractorStyleTrackballActor::Rotate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_Spin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Spin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Spin();
      }
    else
      {
      op->vtkInteractorStyleTrackballActor::Spin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_Pan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Pan();
      }
    else
      {
      op->vtkInteractorStyleTrackballActor::Pan();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_Dolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Dolly();
      }
    else
      {
      op->vtkInteractorStyleTrackballActor::Dolly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_UniformScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UniformScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UniformScale();
      }
    else
      {
      op->vtkInteractorStyleTrackballActor::UniformScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleTrackballActor_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleTrackballActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleTrackballActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleTrackballActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInteractorStyleTrackballActor\nC++: vtkInteractorStyleTrackballActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleTrackballActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleTrackballActor\nC++: vtkInteractorStyleTrackballActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleTrackballActor_OnMouseMove, 1,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleTrackballActor_OnLeftButtonDown, 1,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleTrackballActor_OnLeftButtonUp, 1,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMiddleButtonDown", PyvtkInteractorStyleTrackballActor_OnMiddleButtonDown, 1,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMiddleButtonUp", PyvtkInteractorStyleTrackballActor_OnMiddleButtonUp, 1,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonDown", PyvtkInteractorStyleTrackballActor_OnRightButtonDown, 1,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonUp", PyvtkInteractorStyleTrackballActor_OnRightButtonUp, 1,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"Rotate", PyvtkInteractorStyleTrackballActor_Rotate, 1,
   (char*)"V.Rotate()\nC++: virtual void Rotate()\n\n"},
  {(char*)"Spin", PyvtkInteractorStyleTrackballActor_Spin, 1,
   (char*)"V.Spin()\nC++: virtual void Spin()\n\n"},
  {(char*)"Pan", PyvtkInteractorStyleTrackballActor_Pan, 1,
   (char*)"V.Pan()\nC++: virtual void Pan()\n\n"},
  {(char*)"Dolly", PyvtkInteractorStyleTrackballActor_Dolly, 1,
   (char*)"V.Dolly()\nC++: virtual void Dolly()\n\n"},
  {(char*)"UniformScale", PyvtkInteractorStyleTrackballActor_UniformScale, 1,
   (char*)"V.UniformScale()\nC++: virtual void UniformScale()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleTrackballActor_StaticNew()
{
  return vtkInteractorStyleTrackballActor::New();
}

PyObject *PyVTKClass_vtkInteractorStyleTrackballActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleTrackballActor_StaticNew,
    PyvtkInteractorStyleTrackballActor_Methods,
    "vtkInteractorStyleTrackballActor", modulename,
    NULL, NULL,
    PyvtkInteractorStyleTrackballActor_Doc(),
    PyVTKClass_vtkInteractorStyleNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleTrackballActor_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleTrackballActor - manipulate objects in the scene\nindependent of each other\n\n",
    "Superclass: vtkInteractorStyle\n\n",
    "vtkInteractorStyleTrackballActor allows the user to interact with\n(rotate, pan, etc.) objects in the scene indendent of each other.  In\ntrackball interaction, the magnitude of the mouse motion is\nproportional to the actor motion associated with a particular mouse\nbinding. For example, small left-button motions cause small changes\nin the rotation of the actor around its center point.\n\nThe mouse bin",
    "dings are as follows. For a 3-button mouse, the left\nbutton is for rotation, the right button for zooming, the middle\nbutton for panning, and ctrl + left button for spinning.  (With fewer\nmouse buttons, ctrl + shift + left button is for zooming, and shift +\nleft button is for panning.)\n\nSee Also:\n\nvtkInteractorStyleTrackballCamera vtkInteractorStyleJoystickActor\nvtkInteractorStyleJoystickCamera\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleTrackballActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleTrackballActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleTrackballActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

