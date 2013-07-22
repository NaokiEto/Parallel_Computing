// python wrapper for vtkInteractorStyleRubberBand2D
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
#include "vtkInteractorStyleRubberBand2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInteractorStyleRubberBand2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInteractorStyleRubberBand2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInteractorStyleRubberBand2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleRubberBand2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleNew
#endif

static const char **PyvtkInteractorStyleRubberBand2D_Doc();


static PyObject *
PyvtkInteractorStyleRubberBand2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

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
      tempr = op->vtkInteractorStyleRubberBand2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

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
      tempr = op->vtkInteractorStyleRubberBand2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  vtkInteractorStyleRubberBand2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInteractorStyleRubberBand2D::NewInstance();
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
PyvtkInteractorStyleRubberBand2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInteractorStyleRubberBand2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInteractorStyleRubberBand2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnMouseWheelForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseWheelForward();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnMouseWheelForward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_OnMouseWheelBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseWheelBackward();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::OnMouseWheelBackward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_SetRenderOnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderOnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

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
      op->vtkInteractorStyleRubberBand2D::SetRenderOnMouseMove(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_GetRenderOnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderOnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

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
      tempr = op->vtkInteractorStyleRubberBand2D::GetRenderOnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_RenderOnMouseMoveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOnMouseMoveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderOnMouseMoveOn();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::RenderOnMouseMoveOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_RenderOnMouseMoveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOnMouseMoveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RenderOnMouseMoveOff();
      }
    else
      {
      op->vtkInteractorStyleRubberBand2D::RenderOnMouseMoveOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_GetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

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
      tempr = op->vtkInteractorStyleRubberBand2D::GetInteraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_GetStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

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
      tempr = op->vtkInteractorStyleRubberBand2D::GetStartPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBand2D_GetEndPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBand2D *op = static_cast<vtkInteractorStyleRubberBand2D *>(vp);

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
      tempr = op->vtkInteractorStyleRubberBand2D::GetEndPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleRubberBand2D_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleRubberBand2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleRubberBand2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleRubberBand2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInteractorStyleRubberBand2D\nC++: vtkInteractorStyleRubberBand2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleRubberBand2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleRubberBand2D\nC++: vtkInteractorStyleRubberBand2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleRubberBand2D_OnLeftButtonDown, 1,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleRubberBand2D_OnLeftButtonUp, 1,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\n"},
  {(char*)"OnMiddleButtonDown", PyvtkInteractorStyleRubberBand2D_OnMiddleButtonDown, 1,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\n"},
  {(char*)"OnMiddleButtonUp", PyvtkInteractorStyleRubberBand2D_OnMiddleButtonUp, 1,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\n"},
  {(char*)"OnRightButtonDown", PyvtkInteractorStyleRubberBand2D_OnRightButtonDown, 1,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\n"},
  {(char*)"OnRightButtonUp", PyvtkInteractorStyleRubberBand2D_OnRightButtonUp, 1,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleRubberBand2D_OnMouseMove, 1,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\n"},
  {(char*)"OnMouseWheelForward", PyvtkInteractorStyleRubberBand2D_OnMouseWheelForward, 1,
   (char*)"V.OnMouseWheelForward()\nC++: virtual void OnMouseWheelForward()\n\n"},
  {(char*)"OnMouseWheelBackward", PyvtkInteractorStyleRubberBand2D_OnMouseWheelBackward, 1,
   (char*)"V.OnMouseWheelBackward()\nC++: virtual void OnMouseWheelBackward()\n\n"},
  {(char*)"SetRenderOnMouseMove", PyvtkInteractorStyleRubberBand2D_SetRenderOnMouseMove, 1,
   (char*)"V.SetRenderOnMouseMove(bool)\nC++: void SetRenderOnMouseMove(bool a)\n\nWhether to invoke a render when the mouse moves.\n"},
  {(char*)"GetRenderOnMouseMove", PyvtkInteractorStyleRubberBand2D_GetRenderOnMouseMove, 1,
   (char*)"V.GetRenderOnMouseMove() -> bool\nC++: bool GetRenderOnMouseMove()\n\nWhether to invoke a render when the mouse moves.\n"},
  {(char*)"RenderOnMouseMoveOn", PyvtkInteractorStyleRubberBand2D_RenderOnMouseMoveOn, 1,
   (char*)"V.RenderOnMouseMoveOn()\nC++: void RenderOnMouseMoveOn()\n\nWhether to invoke a render when the mouse moves.\n"},
  {(char*)"RenderOnMouseMoveOff", PyvtkInteractorStyleRubberBand2D_RenderOnMouseMoveOff, 1,
   (char*)"V.RenderOnMouseMoveOff()\nC++: void RenderOnMouseMoveOff()\n\nWhether to invoke a render when the mouse moves.\n"},
  {(char*)"GetInteraction", PyvtkInteractorStyleRubberBand2D_GetInteraction, 1,
   (char*)"V.GetInteraction() -> int\nC++: int GetInteraction()\n\nCurrent interaction state\n"},
  {(char*)"GetStartPosition", PyvtkInteractorStyleRubberBand2D_GetStartPosition, 1,
   (char*)"V.GetStartPosition() -> (int, int)\nC++: int *GetStartPosition()\n\n"},
  {(char*)"GetEndPosition", PyvtkInteractorStyleRubberBand2D_GetEndPosition, 1,
   (char*)"V.GetEndPosition() -> (int, int)\nC++: int *GetEndPosition()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleRubberBand2D_StaticNew()
{
  return vtkInteractorStyleRubberBand2D::New();
}

PyObject *PyVTKClass_vtkInteractorStyleRubberBand2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleRubberBand2D_StaticNew,
    PyvtkInteractorStyleRubberBand2D_Methods,
    "vtkInteractorStyleRubberBand2D", modulename,
    NULL, NULL,
    PyvtkInteractorStyleRubberBand2D_Doc(),
    PyVTKClass_vtkInteractorStyleNew(modulename));

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
    if (o && PyDict_SetItemString(d, (char *)"SELECTING", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkInteractorStyleRubberBand2D_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleRubberBand2D - A rubber band interactor for a 2D\nview\n\n",
    "Superclass: vtkInteractorStyle\n\n",
    "vtkInteractorStyleRubberBand2D manages interaction in a 2D view.\nCamera rotation is not allowed with this interactor style. Zooming\naffects the camera's parallel scale only, and assumes that the camera\nis in parallel projection mode. The style also allows draws a rubber\nband using the left button. All camera changes invoke\nInteractionBeginEvent when the button is pressed, InteractionEvent\nwhen the",
    " mouse (or wheel) is moved, and InteractionEndEvent when the\nbutton is released.  The bindings are as follows: Left mouse - Select\n(invokes a SelectionChangedEvent). Right mouse - Zoom. Middle mouse -\nPan. Scroll wheel - Zoom.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleRubberBand2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleRubberBand2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleRubberBand2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

