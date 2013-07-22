// python wrapper for vtkInteractorStyleJoystickActor
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
#include "vtkInteractorStyleJoystickActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInteractorStyleJoystickActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInteractorStyleJoystickActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInteractorStyleJoystickActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleJoystickActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleNew
#endif

static const char **PyvtkInteractorStyleJoystickActor_Doc();


static PyObject *
PyvtkInteractorStyleJoystickActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickActor *op = static_cast<vtkInteractorStyleJoystickActor *>(vp);

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
      tempr = op->vtkInteractorStyleJoystickActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickActor *op = static_cast<vtkInteractorStyleJoystickActor *>(vp);

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
      tempr = op->vtkInteractorStyleJoystickActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickActor *op = static_cast<vtkInteractorStyleJoystickActor *>(vp);

  vtkInteractorStyleJoystickActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInteractorStyleJoystickActor::NewInstance();
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
PyvtkInteractorStyleJoystickActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInteractorStyleJoystickActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInteractorStyleJoystickActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickActor_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickActor *op = static_cast<vtkInteractorStyleJoystickActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleJoystickActor::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickActor_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickActor *op = static_cast<vtkInteractorStyleJoystickActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleJoystickActor::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickActor_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickActor *op = static_cast<vtkInteractorStyleJoystickActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleJoystickActor::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickActor_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickActor *op = static_cast<vtkInteractorStyleJoystickActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkInteractorStyleJoystickActor::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickActor_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickActor *op = static_cast<vtkInteractorStyleJoystickActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkInteractorStyleJoystickActor::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickActor_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickActor *op = static_cast<vtkInteractorStyleJoystickActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkInteractorStyleJoystickActor::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickActor_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickActor *op = static_cast<vtkInteractorStyleJoystickActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkInteractorStyleJoystickActor::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickActor_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickActor *op = static_cast<vtkInteractorStyleJoystickActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Rotate();
      }
    else
      {
      op->vtkInteractorStyleJoystickActor::Rotate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickActor_Spin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Spin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickActor *op = static_cast<vtkInteractorStyleJoystickActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Spin();
      }
    else
      {
      op->vtkInteractorStyleJoystickActor::Spin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickActor_Pan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickActor *op = static_cast<vtkInteractorStyleJoystickActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Pan();
      }
    else
      {
      op->vtkInteractorStyleJoystickActor::Pan();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickActor_Dolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickActor *op = static_cast<vtkInteractorStyleJoystickActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Dolly();
      }
    else
      {
      op->vtkInteractorStyleJoystickActor::Dolly();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleJoystickActor_UniformScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UniformScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleJoystickActor *op = static_cast<vtkInteractorStyleJoystickActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UniformScale();
      }
    else
      {
      op->vtkInteractorStyleJoystickActor::UniformScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleJoystickActor_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleJoystickActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleJoystickActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleJoystickActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInteractorStyleJoystickActor\nC++: vtkInteractorStyleJoystickActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleJoystickActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleJoystickActor\nC++: vtkInteractorStyleJoystickActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleJoystickActor_OnMouseMove, 1,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleJoystickActor_OnLeftButtonDown, 1,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleJoystickActor_OnLeftButtonUp, 1,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMiddleButtonDown", PyvtkInteractorStyleJoystickActor_OnMiddleButtonDown, 1,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnMiddleButtonUp", PyvtkInteractorStyleJoystickActor_OnMiddleButtonUp, 1,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonDown", PyvtkInteractorStyleJoystickActor_OnRightButtonDown, 1,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonUp", PyvtkInteractorStyleJoystickActor_OnRightButtonUp, 1,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"Rotate", PyvtkInteractorStyleJoystickActor_Rotate, 1,
   (char*)"V.Rotate()\nC++: virtual void Rotate()\n\n"},
  {(char*)"Spin", PyvtkInteractorStyleJoystickActor_Spin, 1,
   (char*)"V.Spin()\nC++: virtual void Spin()\n\n"},
  {(char*)"Pan", PyvtkInteractorStyleJoystickActor_Pan, 1,
   (char*)"V.Pan()\nC++: virtual void Pan()\n\n"},
  {(char*)"Dolly", PyvtkInteractorStyleJoystickActor_Dolly, 1,
   (char*)"V.Dolly()\nC++: virtual void Dolly()\n\n"},
  {(char*)"UniformScale", PyvtkInteractorStyleJoystickActor_UniformScale, 1,
   (char*)"V.UniformScale()\nC++: virtual void UniformScale()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleJoystickActor_StaticNew()
{
  return vtkInteractorStyleJoystickActor::New();
}

PyObject *PyVTKClass_vtkInteractorStyleJoystickActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleJoystickActor_StaticNew,
    PyvtkInteractorStyleJoystickActor_Methods,
    "vtkInteractorStyleJoystickActor", modulename,
    NULL, NULL,
    PyvtkInteractorStyleJoystickActor_Doc(),
    PyVTKClass_vtkInteractorStyleNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleJoystickActor_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleJoystickActor - manipulate objects in the scene\nindependently of one another\n\n",
    "Superclass: vtkInteractorStyle\n\n",
    "The class vtkInteractorStyleJoystickActor allows the user to interact\nwith (rotate, zoom, etc.) separate objects in the scene independent\nof each other.  The position of the mouse relative to the center of\nthe object determines the speed of the object's motion.  The mouse's\nvelocity detemines the acceleration of the object's motion, so the\nobject will continue moving even when the mouse is not mov",
    "ing. For a\n3-button mouse, the left button is for rotation, the right button for\nzooming, the middle button for panning, and ctrl + left button for\nspinning.  (With fewer mouse buttons, ctrl + shift + left button is\nfor zooming, and shift + left button is for panning.)\n\nSee Also:\n\nvtkInteractorStyleJoystickCamera vtkInteractorStyleTrackballActor\nvtkInteractorStyleTrackballCamera\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleJoystickActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleJoystickActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleJoystickActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

