// python wrapper for vtkInteractorStyleRubberBandZoom
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
#include "vtkInteractorStyleRubberBandZoom.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInteractorStyleRubberBandZoom(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInteractorStyleRubberBandZoom(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInteractorStyleRubberBandZoomNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleRubberBandZoomNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInteractorStyleNew
extern "C" { PyObject *PyVTKClass_vtkInteractorStyleNew(const char *); }
#define DECLARED_PyVTKClass_vtkInteractorStyleNew
#endif

static const char **PyvtkInteractorStyleRubberBandZoom_Doc();


static PyObject *
PyvtkInteractorStyleRubberBandZoom_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

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
      tempr = op->vtkInteractorStyleRubberBandZoom::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

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
      tempr = op->vtkInteractorStyleRubberBandZoom::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  vtkInteractorStyleRubberBandZoom *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInteractorStyleRubberBandZoom::NewInstance();
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
PyvtkInteractorStyleRubberBandZoom_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInteractorStyleRubberBandZoom *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInteractorStyleRubberBandZoom::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnMouseMove();
      }
    else
      {
      op->vtkInteractorStyleRubberBandZoom::OnMouseMove();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonDown();
      }
    else
      {
      op->vtkInteractorStyleRubberBandZoom::OnLeftButtonDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInteractorStyleRubberBandZoom_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleRubberBandZoom *op = static_cast<vtkInteractorStyleRubberBandZoom *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OnLeftButtonUp();
      }
    else
      {
      op->vtkInteractorStyleRubberBandZoom::OnLeftButtonUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInteractorStyleRubberBandZoom_Methods[] = {
  {(char*)"GetClassName", PyvtkInteractorStyleRubberBandZoom_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInteractorStyleRubberBandZoom_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInteractorStyleRubberBandZoom_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInteractorStyleRubberBandZoom\nC++: vtkInteractorStyleRubberBandZoom *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInteractorStyleRubberBandZoom_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInteractorStyleRubberBandZoom\nC++: vtkInteractorStyleRubberBandZoom *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"OnMouseMove", PyvtkInteractorStyleRubberBandZoom_OnMouseMove, 1,
   (char*)"V.OnMouseMove()\nC++: virtual void OnMouseMove()\n\nEvent bindings\n"},
  {(char*)"OnLeftButtonDown", PyvtkInteractorStyleRubberBandZoom_OnLeftButtonDown, 1,
   (char*)"V.OnLeftButtonDown()\nC++: virtual void OnLeftButtonDown()\n\nEvent bindings\n"},
  {(char*)"OnLeftButtonUp", PyvtkInteractorStyleRubberBandZoom_OnLeftButtonUp, 1,
   (char*)"V.OnLeftButtonUp()\nC++: virtual void OnLeftButtonUp()\n\nEvent bindings\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInteractorStyleRubberBandZoom_StaticNew()
{
  return vtkInteractorStyleRubberBandZoom::New();
}

PyObject *PyVTKClass_vtkInteractorStyleRubberBandZoomNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInteractorStyleRubberBandZoom_StaticNew,
    PyvtkInteractorStyleRubberBandZoom_Methods,
    "vtkInteractorStyleRubberBandZoom", modulename,
    NULL, NULL,
    PyvtkInteractorStyleRubberBandZoom_Doc(),
    PyVTKClass_vtkInteractorStyleNew(modulename));
  return cls;
}

const char **PyvtkInteractorStyleRubberBandZoom_Doc()
{
  static const char *docstring[] = {
    "vtkInteractorStyleRubberBandZoom - zoom in by amount indicated by\nrubber band box\n\n",
    "Superclass: vtkInteractorStyle\n\n",
    "This interactor style allows the user to draw a rectangle in the\nrender window using the left mouse button.  When the mouse button is\nreleased, the current camera zooms by an amount determined from the\nshorter side of the drawn rectangle.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInteractorStyleRubberBandZoom(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInteractorStyleRubberBandZoomNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInteractorStyleRubberBandZoom", o) != 0)
    {
    Py_DECREF(o);
    }

}

