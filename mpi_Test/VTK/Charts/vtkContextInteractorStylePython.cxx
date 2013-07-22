// python wrapper for vtkContextInteractorStyle
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
#include "vtkContextInteractorStyle.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkContextInteractorStyle(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkContextInteractorStyle(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkContextInteractorStyleNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkContextInteractorStyleNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleNew
#endif

static const char **PyvtkContextInteractorStyle_Doc();


static PyObject *
PyvtkContextInteractorStyle_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

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
      tempr = op->vtkContextInteractorStyle::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

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
      tempr = op->vtkContextInteractorStyle::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  vtkContextInteractorStyle *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkContextInteractorStyle::NewInstance();
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
PyvtkContextInteractorStyle_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkContextInteractorStyle *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkContextInteractorStyle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_SetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  vtkContextScene *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContextScene"))
    {
    if (ap.IsBound())
      {
      op->SetScene(temp0);
      }
    else
      {
      op->vtkContextInteractorStyle::SetScene(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_GetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  vtkContextScene *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScene();
      }
    else
      {
      tempr = op->vtkContextInteractorStyle::GetScene();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnSceneModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnSceneModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnSceneModified();
      }
    else
      {
      op->vtkContextInteractorStyle::OnSceneModified();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkContextInteractorStyle::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkContextInteractorStyle::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkContextInteractorStyle::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonDown();
      }
    else
      {
      op->vtkContextInteractorStyle::OnMiddleButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMiddleButtonUp();
      }
    else
      {
      op->vtkContextInteractorStyle::OnMiddleButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkContextInteractorStyle::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkContextInteractorStyle::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnMouseWheelForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseWheelForward();
      }
    else
      {
      op->vtkContextInteractorStyle::OnMouseWheelForward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnMouseWheelBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseWheelBackward();
      }
    else
      {
      op->vtkContextInteractorStyle::OnMouseWheelBackward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextInteractorStyle_OnSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextInteractorStyle *op = static_cast<vtkContextInteractorStyle *>(vp);

  unsigned int temp0[5];
  unsigned int save0[5];
  const int size0 = 5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->OnSelection(temp0);
      }
    else
      {
      op->vtkContextInteractorStyle::OnSelection(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContextInteractorStyle_Methods[] = {
  {(char*)"GetClassName", PyvtkContextInteractorStyle_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkContextInteractorStyle_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkContextInteractorStyle_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkContextInteractorStyle\nC++: vtkContextInteractorStyle *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkContextInteractorStyle_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkContextInteractorStyle\nC++: vtkContextInteractorStyle *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetScene", PyvtkContextInteractorStyle_SetScene, 1,
   (char*)"V.SetScene(vtkContextScene)\nC++: void SetScene(vtkContextScene *scene)\n\nSet the scene to forward user events to. Refresh the view when\nthe scene is dirty and no event is being processed. The scene is\nobserved (vtkCommand::ModifiedEvent) and a refresh on the view is\ncalled appropriately: scene is dirty and no event is being\nprocessed.\n"},
  {(char*)"GetScene", PyvtkContextInteractorStyle_GetScene, 1,
   (char*)"V.GetScene() -> vtkContextScene\nC++: vtkContextScene *GetScene()\n\nReturn the observed scene.\n"},
  {(char*)"OnSceneModified", PyvtkContextInteractorStyle_OnSceneModified, 1,
   (char*)"V.OnSceneModified()\nC++: virtual void OnSceneModified()\n\nCalled when the scene is modified. Refresh the scene if needed.\n"},
  {(char*)"OnMouseMove", PyvtkContextInteractorStyle_OnMouseMove, 1,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nCalled when the user moves the mouse Default behavior forwards\nthe event to the observed scene.\n"},
  {(char*)"OnLeftButtonDown", PyvtkContextInteractorStyle_OnLeftButtonDown, 1,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nCalled when the user clicks the mouse left button. Default\nbehavior forwards the event to the observed scene.\n"},
  {(char*)"OnLeftButtonUp", PyvtkContextInteractorStyle_OnLeftButtonUp, 1,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nCalled when the user releases the mouse left button. Default\nbehavior forwards the event to the observed scene.\n"},
  {(char*)"OnMiddleButtonDown", PyvtkContextInteractorStyle_OnMiddleButtonDown, 1,
   (char*)"V.OnMiddleButtonDown()\nC++: virtual void OnMiddleButtonDown()\n\nCalled when the user clicks the mouse middle button. Default\nbehavior forwards the event to the observed scene.\n"},
  {(char*)"OnMiddleButtonUp", PyvtkContextInteractorStyle_OnMiddleButtonUp, 1,
   (char*)"V.OnMiddleButtonUp()\nC++: virtual void OnMiddleButtonUp()\n\nCalled when the user releases the mouse middle button. Default\nbehavior forwards the event to the observed scene.\n"},
  {(char*)"OnRightButtonDown", PyvtkContextInteractorStyle_OnRightButtonDown, 1,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\nCalled when the user clicks the mouse right button. Default\nbehavior forwards the event to the observed scene.\n"},
  {(char*)"OnRightButtonUp", PyvtkContextInteractorStyle_OnRightButtonUp, 1,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\nCalled when the user releases the mouse right button. Default\nbehavior forwards the event to the observed scene.\n"},
  {(char*)"OnMouseWheelForward", PyvtkContextInteractorStyle_OnMouseWheelForward, 1,
   (char*)"V.OnMouseWheelForward()\nC++: virtual void OnMouseWheelForward()\n\nCalled when the user moves the mouse wheel forward. Default\nbehavior forwards the event to the observed scene.\n"},
  {(char*)"OnMouseWheelBackward", PyvtkContextInteractorStyle_OnMouseWheelBackward, 1,
   (char*)"V.OnMouseWheelBackward()\nC++: virtual void OnMouseWheelBackward()\n\nCalled when the user moves the mouse wheel backward. Default\nbehavior forwards the event to the observed scene.\n"},
  {(char*)"OnSelection", PyvtkContextInteractorStyle_OnSelection, 1,
   (char*)"V.OnSelection([int, int, int, int, int])\nC++: virtual void OnSelection(unsigned int rect[5])\n\nPlace holder for future implementation. Default behavior forwards\nthe event to the observed scene.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkContextInteractorStyle_StaticNew()
{
  return vtkContextInteractorStyle::New();
}

PyObject *PyVTKClass_vtkContextInteractorStyleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkContextInteractorStyle_StaticNew,
    PyvtkContextInteractorStyle_Methods,
    "vtkContextInteractorStyle", modulename,
    NULL, NULL,
    PyvtkContextInteractorStyle_Doc(),
    PyVTKClass_vtkInteractorStyleNew(modulename));
  return cls;
}

const char **PyvtkContextInteractorStyle_Doc()
{
  static const char *docstring[] = {
    "vtkContextInteractorStyle - An interactor for chart views\n\n",
    "Superclass: vtkInteractorStyle\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContextInteractorStyle(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContextInteractorStyleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContextInteractorStyle", o) != 0)
    {
    Py_DECREF(o);
    }

}

