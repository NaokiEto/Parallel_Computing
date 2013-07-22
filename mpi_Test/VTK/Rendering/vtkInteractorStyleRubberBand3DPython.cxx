// python wrapper for vtkInteractorStyleRubberBand3D
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
#include "vtkInteractorStyleRubberBand3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInteractorStyleRubberBand3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInteractorStyleRubberBand3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInteractorStyleRubberBand3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleRubberBand3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleTrackballCameraNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
#endif

static const char **PyvtkInteractorStyleRubberBand3D_Doc();


static PyObject *
PyvtkInteractorStyleRubberBand3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

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
      tempr = op->vtkInteractorStyleRubberBand3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

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
      tempr = op->vtkInteractorStyleRubberBand3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  vtkInteractorStyleRubberBand3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInteractorStyleRubberBand3D::NewInstance();
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
PyvtkInteractorStyleRubberBand3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInteractorStyleRubberBand3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInteractorStyleRubberBand3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnMouseWheelForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseWheelForward();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnMouseWheelForward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_OnMouseWheelBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseWheelBackward();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::OnMouseWheelBackward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_SetRenderOnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderOnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderOnMouseMove(temp0);
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::SetRenderOnMouseMove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_GetRenderOnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderOnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderOnMouseMove();
      }
    else
      {
      tempr = op->vtkInteractorStyleRubberBand3D::GetRenderOnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_RenderOnMouseMoveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOnMouseMoveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderOnMouseMoveOn();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::RenderOnMouseMoveOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_RenderOnMouseMoveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOnMouseMoveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderOnMouseMoveOff();
      }
    else
      {
      op->vtkInteractorStyleRubberBand3D::RenderOnMouseMoveOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_GetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteraction();
      }
    else
      {
      tempr = op->vtkInteractorStyleRubberBand3D::GetInteraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_GetStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartPosition();
      }
    else
      {
      tempr = op->vtkInteractorStyleRubberBand3D::GetStartPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand3D_GetEndPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand3D *op = static_cast<vtkInteractorStyleRubberBand3D *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEndPosition();
      }
    else
      {
      tempr = op->vtkInteractorStyleRubberBand3D::GetEndPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleRubberBand3D_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleRubberBand3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleRubberBand3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleRubberBand3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInteractorStyleRubberBand3D\nC++: vtkInteractorStyleRubberBand3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleRubberBand3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleRubberBand3D\nC++: vtkInteractorStyleRubberBand3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleRubberBand3D_OnLeftButtonDown, 1,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleRubberBand3D_OnLeftButtonUp, 1,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\n"},
  {(char*)"OnMiddleButtonDown", PyvtkInteractorStyleRubberBand3D_OnMiddleButtonDown, 1,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\n"},
  {(char*)"OnMiddleButtonUp", PyvtkInteractorStyleRubberBand3D_OnMiddleButtonUp, 1,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\n"},
  {(char*)"OnRightButtonDown", PyvtkInteractorStyleRubberBand3D_OnRightButtonDown, 1,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\n"},
  {(char*)"OnRightButtonUp", PyvtkInteractorStyleRubberBand3D_OnRightButtonUp, 1,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleRubberBand3D_OnMouseMove, 1,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\n"},
  {(char*)"OnMouseWheelForward", PyvtkInteractorStyleRubberBand3D_OnMouseWheelForward, 1,
   (char*)"V.OnMouseWheelForward()\nC++: virtual void OnMouseWheelForward()\n\n"},
  {(char*)"OnMouseWheelBackward", PyvtkInteractorStyleRubberBand3D_OnMouseWheelBackward, 1,
   (char*)"V.OnMouseWheelBackward()\nC++: virtual void OnMouseWheelBackward()\n\n"},
  {(char*)"SetRenderOnMouseMove", PyvtkInteractorStyleRubberBand3D_SetRenderOnMouseMove, 1,
   (char*)"V.SetRenderOnMouseMove(bool)\nC++: void SetRenderOnMouseMove(bool a)\n\nWhether to invoke a render when the mouse moves.\n"},
  {(char*)"GetRenderOnMouseMove", PyvtkInteractorStyleRubberBand3D_GetRenderOnMouseMove, 1,
   (char*)"V.GetRenderOnMouseMove() -> bool\nC++: bool GetRenderOnMouseMove()\n\nWhether to invoke a render when the mouse moves.\n"},
  {(char*)"RenderOnMouseMoveOn", PyvtkInteractorStyleRubberBand3D_RenderOnMouseMoveOn, 1,
   (char*)"V.RenderOnMouseMoveOn()\nC++: void RenderOnMouseMoveOn()\n\nWhether to invoke a render when the mouse moves.\n"},
  {(char*)"RenderOnMouseMoveOff", PyvtkInteractorStyleRubberBand3D_RenderOnMouseMoveOff, 1,
   (char*)"V.RenderOnMouseMoveOff()\nC++: void RenderOnMouseMoveOff()\n\nWhether to invoke a render when the mouse moves.\n"},
  {(char*)"GetInteraction", PyvtkInteractorStyleRubberBand3D_GetInteraction, 1,
   (char*)"V.GetInteraction() -> int\nC++: int GetInteraction()\n\nCurrent interaction state\n"},
  {(char*)"GetStartPosition", PyvtkInteractorStyleRubberBand3D_GetStartPosition, 1,
   (char*)"V.GetStartPosition() -> (int, int)\nC++: int *GetStartPosition()\n\n"},
  {(char*)"GetEndPosition", PyvtkInteractorStyleRubberBand3D_GetEndPosition, 1,
   (char*)"V.GetEndPosition() -> (int, int)\nC++: int *GetEndPosition()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleRubberBand3D_StaticNew()
{
  return vtkInteractorStyleRubberBand3D::New();
}

PyObject *PyVTKClass_vtkInteractorStyleRubberBand3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleRubberBand3D_StaticNew,
    PyvtkInteractorStyleRubberBand3D_Methods,
    "vtkInteractorStyleRubberBand3D", modulename,
    NULL, NULL,
    PyvtkInteractorStyleRubberBand3D_Doc(),
    PyVTKClass_vtkInteractorStyleTrackballCameraNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"SELECT_NORMAL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"SELECT_UNION", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"NONE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"PANNING", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"ZOOMING", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"ROTATING", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"SELECTING", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkInteractorStyleRubberBand3D_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleRubberBand3D - A rubber band interactor for a 3D\nview\n\n",
    "Superclass: vtkInteractorStyleTrackballCamera\n\n",
    "vtkInteractorStyleRubberBand3D manages interaction in a 3D view. The\nstyle also allows draws a rubber band using the left button. All\ncamera changes invoke InteractionBeginEvent when the button is\npressed, InteractionEvent when the mouse (or wheel) is moved, and\nInteractionEndEvent when the button is released.  The bindings are as\nfollows: Left mouse - Select (invokes a SelectionChangedEvent). Rig",
    "ht\nmouse - Rotate. Shift + right mouse - Zoom. Middle mouse - Pan.\nScroll wheel - Zoom.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleRubberBand3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleRubberBand3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleRubberBand3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

