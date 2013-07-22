// python wrapper for vtkInteractorStyleRubberBandPick
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
#include "vtkInteractorStyleRubberBandPick.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInteractorStyleRubberBandPick(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInteractorStyleRubberBandPick(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInteractorStyleRubberBandPickNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleRubberBandPickNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleTrackballCameraNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleTrackballCameraNew
#endif

static const char **PyvtkInteractorStyleRubberBandPick_Doc();


static PyObject *
PyvtkInteractorStyleRubberBandPick_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

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
      tempr = op->vtkInteractorStyleRubberBandPick::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

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
      tempr = op->vtkInteractorStyleRubberBandPick::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  vtkInteractorStyleRubberBandPick *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInteractorStyleRubberBandPick::NewInstance();
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
PyvtkInteractorStyleRubberBandPick_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInteractorStyleRubberBandPick *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInteractorStyleRubberBandPick::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_StartSelect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartSelect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartSelect();
      }
    else
      {
      op->vtkInteractorStyleRubberBandPick::StartSelect();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleRubberBandPick::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleRubberBandPick::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleRubberBandPick::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandPick_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandPick *op = static_cast<vtkInteractorStyleRubberBandPick *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnChar();
      }
    else
      {
      op->vtkInteractorStyleRubberBandPick::OnChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleRubberBandPick_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleRubberBandPick_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleRubberBandPick_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleRubberBandPick_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInteractorStyleRubberBandPick\nC++: vtkInteractorStyleRubberBandPick *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleRubberBandPick_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleRubberBandPick\nC++: vtkInteractorStyleRubberBandPick *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"StartSelect", PyvtkInteractorStyleRubberBandPick_StartSelect, 1,
   (char*)"V.StartSelect()\nC++: void StartSelect()\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleRubberBandPick_OnMouseMove, 1,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nEvent bindings\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleRubberBandPick_OnLeftButtonDown, 1,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nEvent bindings\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleRubberBandPick_OnLeftButtonUp, 1,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nEvent bindings\n"},
  {(char*)"OnChar", PyvtkInteractorStyleRubberBandPick_OnChar, 1,
   (char*)"V.OnChar()\nC++: virtual void OnChar()\n\nEvent bindings\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleRubberBandPick_StaticNew()
{
  return vtkInteractorStyleRubberBandPick::New();
}

PyObject *PyVTKClass_vtkInteractorStyleRubberBandPickNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleRubberBandPick_StaticNew,
    PyvtkInteractorStyleRubberBandPick_Methods,
    "vtkInteractorStyleRubberBandPick", modulename,
    NULL, NULL,
    PyvtkInteractorStyleRubberBandPick_Doc(),
    PyVTKClass_vtkInteractorStyleTrackballCameraNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleRubberBandPick_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleRubberBandPick - Like TrackBallCamera, but this can\npick props underneath a rubber band selection rectangle.\n\n",
    "Superclass: vtkInteractorStyleTrackballCamera\n\n",
    "This interactor style allows the user to draw a rectangle in the\nrender window by hitting 'r' and then using the left mouse button.\nWhen the mouse button is released, the attached picker operates on\nthe pixel in the center of the selection rectangle. If the picker\nhappens to be a vtkAreaPicker it will operate on the entire selection\nrectangle. When the 'p' key is hit the above pick operation occur",
    "s on\na 1x1 rectangle. In other respects it behaves the same as its parent\nclass.\n\nSee Also:\n\nvtkAreaPicker\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleRubberBandPick(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleRubberBandPickNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleRubberBandPick", o) != 0)
    {
    Py_DECREF(o);
    }

}

