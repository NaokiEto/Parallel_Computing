// python wrapper for vtkInteractorStyleImage
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
#include "vtkInteractorStyleImage.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInteractorStyleImage(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInteractorStyleImage(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInteractorStyleImageNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleImageNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleTrackballCameraNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
#endif

static const char **PyvtkInteractorStyleImage_Doc();


static PyObject *
PyvtkInteractorStyleImage_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      tempr = op->vtkInteractorStyleImage::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      tempr = op->vtkInteractorStyleImage::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  vtkInteractorStyleImage *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInteractorStyleImage::NewInstance();
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
PyvtkInteractorStyleImage_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInteractorStyleImage *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInteractorStyleImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetWindowLevelStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevelStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWindowLevelStartPosition();
      }
    else
      {
      tempr = op->vtkInteractorStyleImage::GetWindowLevelStartPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetWindowLevelCurrentPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevelCurrentPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWindowLevelCurrentPosition();
      }
    else
      {
      tempr = op->vtkInteractorStyleImage::GetWindowLevelCurrentPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleImage::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleImage::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleImage::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonDown();
      }
    else
      {
      op->vtkInteractorStyleImage::OnRightButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnRightButtonUp();
      }
    else
      {
      op->vtkInteractorStyleImage::OnRightButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnChar();
      }
    else
      {
      op->vtkInteractorStyleImage::OnChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_WindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WindowLevel();
      }
    else
      {
      op->vtkInteractorStyleImage::WindowLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_Pick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Pick();
      }
    else
      {
      op->vtkInteractorStyleImage::Pick();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_StartWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartWindowLevel();
      }
    else
      {
      op->vtkInteractorStyleImage::StartWindowLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_EndWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndWindowLevel();
      }
    else
      {
      op->vtkInteractorStyleImage::EndWindowLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_StartPick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartPick();
      }
    else
      {
      op->vtkInteractorStyleImage::StartPick();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_EndPick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndPick();
      }
    else
      {
      op->vtkInteractorStyleImage::EndPick();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleImage_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleImage_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleImage_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleImage_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInteractorStyleImage\nC++: vtkInteractorStyleImage *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleImage_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleImage\nC++: vtkInteractorStyleImage *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetWindowLevelStartPosition", PyvtkInteractorStyleImage_GetWindowLevelStartPosition, 1,
   (char*)"V.GetWindowLevelStartPosition() -> (int, int)\nC++: int *GetWindowLevelStartPosition()\n\n"},
  {(char*)"GetWindowLevelCurrentPosition", PyvtkInteractorStyleImage_GetWindowLevelCurrentPosition, 1,
   (char*)"V.GetWindowLevelCurrentPosition() -> (int, int)\nC++: int *GetWindowLevelCurrentPosition()\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleImage_OnMouseMove, 1,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleImage_OnLeftButtonDown, 1,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleImage_OnLeftButtonUp, 1,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonDown", PyvtkInteractorStyleImage_OnRightButtonDown, 1,
   (char*)"V.OnRightButtonDown()\nC++: virtual void OnRightButtonDown()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnRightButtonUp", PyvtkInteractorStyleImage_OnRightButtonUp, 1,
   (char*)"V.OnRightButtonUp()\nC++: virtual void OnRightButtonUp()\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {(char*)"OnChar", PyvtkInteractorStyleImage_OnChar, 1,
   (char*)"V.OnChar()\nC++: virtual void OnChar()\n\nOverride the \"fly-to\" (f keypress) for images.\n"},
  {(char*)"WindowLevel", PyvtkInteractorStyleImage_WindowLevel, 1,
   (char*)"V.WindowLevel()\nC++: virtual void WindowLevel()\n\n"},
  {(char*)"Pick", PyvtkInteractorStyleImage_Pick, 1,
   (char*)"V.Pick()\nC++: virtual void Pick()\n\n"},
  {(char*)"StartWindowLevel", PyvtkInteractorStyleImage_StartWindowLevel, 1,
   (char*)"V.StartWindowLevel()\nC++: virtual void StartWindowLevel()\n\n"},
  {(char*)"EndWindowLevel", PyvtkInteractorStyleImage_EndWindowLevel, 1,
   (char*)"V.EndWindowLevel()\nC++: virtual void EndWindowLevel()\n\n"},
  {(char*)"StartPick", PyvtkInteractorStyleImage_StartPick, 1,
   (char*)"V.StartPick()\nC++: virtual void StartPick()\n\n"},
  {(char*)"EndPick", PyvtkInteractorStyleImage_EndPick, 1,
   (char*)"V.EndPick()\nC++: virtual void EndPick()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleImage_StaticNew()
{
  return vtkInteractorStyleImage::New();
}

PyObject *PyVTKClass_vtkInteractorStyleImageNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleImage_StaticNew,
    PyvtkInteractorStyleImage_Methods,
    "vtkInteractorStyleImage", modulename,
    NULL, NULL,
    PyvtkInteractorStyleImage_Doc(),
    PyVTKClass_vtkInteractorStyleTrackballCameraNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleImage_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleImage - interactive manipulation of the camera\nspecialized for images\n\n",
    "Superclass: vtkInteractorStyleTrackballCamera\n\n",
    "vtkInteractorStyleImage allows the user to interactively manipulate\n(rotate, pan, zoomm etc.) the camera. vtkInteractorStyleImage is\nspecially designed to work with images that are being rendered with\nvtkImageActor. Several events are overloaded from its superclass\nvtkInteractorStyle, hence the mouse bindings are different. (The\nbindings keep the camera's view plane normal perpendicular to the x-y",
    "\nplane.) In summary the mouse events are as follows: + Left Mouse\nbutton triggers window level events + CTRL Left Mouse spins the\ncamera around its view plane normal + SHIFT Left Mouse pans the\ncamera + CTRL SHIFT Left Mouse dollys (a positional zoom) the camera\n+ Middle mouse button pans the camera + Right mouse button dollys the\ncamera. + SHIFT Right Mouse triggers pick events\n\nNote that the ren",
    "derer's actors are not moved; instead the camera is\nmoved.\n\nSee Also:\n\nvtkInteractorStyle vtkInteractorStyleTrackballActor\nvtkInteractorStyleJoystickCamera vtkInteractorStyleJoystickActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleImage(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleImageNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleImage", o) != 0)
    {
    Py_DECREF(o);
    }

}

