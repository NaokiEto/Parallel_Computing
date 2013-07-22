// python wrapper for vtkRenderViewBase
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
#include "vtkRenderViewBase.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRenderViewBase(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRenderViewBase(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRenderViewBaseNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRenderViewBaseNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkViewNew
extern "C" { PyObject *PyVTKClass_vtkViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkViewNew
#endif

static const char **PyvtkRenderViewBase_Doc();


static PyObject *
PyvtkRenderViewBase_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

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
      tempr = op->vtkRenderViewBase::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderViewBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

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
      tempr = op->vtkRenderViewBase::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderViewBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  vtkRenderViewBase *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRenderViewBase::NewInstance();
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
PyvtkRenderViewBase_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRenderViewBase *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRenderViewBase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderViewBase_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  vtkRenderer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderer();
      }
    else
      {
      tempr = op->vtkRenderViewBase::GetRenderer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderViewBase_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkRenderViewBase::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderViewBase_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  vtkRenderWindow *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderWindow();
      }
    else
      {
      tempr = op->vtkRenderViewBase::GetRenderWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderViewBase_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  vtkRenderWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    if (ap.IsBound())
      {
      op->SetRenderWindow(temp0);
      }
    else
      {
      op->vtkRenderViewBase::SetRenderWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderViewBase_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  vtkRenderWindowInteractor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteractor();
      }
    else
      {
      tempr = op->vtkRenderViewBase::GetInteractor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRenderViewBase_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  vtkRenderWindowInteractor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
    {
    if (ap.IsBound())
      {
      op->SetInteractor(temp0);
      }
    else
      {
      op->vtkRenderViewBase::SetInteractor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderViewBase_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Render();
      }
    else
      {
      op->vtkRenderViewBase::Render();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderViewBase_ResetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetCamera();
      }
    else
      {
      op->vtkRenderViewBase::ResetCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRenderViewBase_ResetCameraClippingRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCameraClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderViewBase *op = static_cast<vtkRenderViewBase *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetCameraClippingRange();
      }
    else
      {
      op->vtkRenderViewBase::ResetCameraClippingRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRenderViewBase_Methods[] = {
  {(char*)"GetClassName", PyvtkRenderViewBase_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRenderViewBase_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRenderViewBase_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRenderViewBase\nC++: vtkRenderViewBase *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRenderViewBase_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRenderViewBase\nC++: vtkRenderViewBase *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetRenderer", PyvtkRenderViewBase_GetRenderer, 1,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nGets the renderer for this view.\n"},
  {(char*)"SetRenderer", PyvtkRenderViewBase_SetRenderer, 1,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\n"},
  {(char*)"GetRenderWindow", PyvtkRenderViewBase_GetRenderWindow, 1,
   (char*)"V.GetRenderWindow() -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nGet a handle to the render window.\n"},
  {(char*)"SetRenderWindow", PyvtkRenderViewBase_SetRenderWindow, 1,
   (char*)"V.SetRenderWindow(vtkRenderWindow)\nC++: virtual void SetRenderWindow(vtkRenderWindow *win)\n\nSet the render window for this view. Note that this requires\nspecial handling in order to do correctly - see the notes in the\ndetailed description of vtkRenderViewBase.\n"},
  {(char*)"GetInteractor", PyvtkRenderViewBase_GetInteractor, 1,
   (char*)"V.GetInteractor() -> vtkRenderWindowInteractor\nC++: virtual vtkRenderWindowInteractor *GetInteractor()\n\nThe render window interactor. Note that this requires special\nhandling in order to do correctly - see the notes in the detailed\ndescription of vtkRenderViewBase.\n"},
  {(char*)"SetInteractor", PyvtkRenderViewBase_SetInteractor, 1,
   (char*)"V.SetInteractor(vtkRenderWindowInteractor)\nC++: virtual void SetInteractor(vtkRenderWindowInteractor *)\n\nThe render window interactor. Note that this requires special\nhandling in order to do correctly - see the notes in the detailed\ndescription of vtkRenderViewBase.\n"},
  {(char*)"Render", PyvtkRenderViewBase_Render, 1,
   (char*)"V.Render()\nC++: virtual void Render()\n\nUpdates the representations, then calls Render() on the render\nwindow associated with this view.\n"},
  {(char*)"ResetCamera", PyvtkRenderViewBase_ResetCamera, 1,
   (char*)"V.ResetCamera()\nC++: virtual void ResetCamera()\n\nUpdates the representations, then calls ResetCamera() on the\nrenderer associated with this view.\n"},
  {(char*)"ResetCameraClippingRange", PyvtkRenderViewBase_ResetCameraClippingRange, 1,
   (char*)"V.ResetCameraClippingRange()\nC++: virtual void ResetCameraClippingRange()\n\nUpdates the representations, then calls\nResetCameraClippingRange() on the renderer associated with this\nview.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRenderViewBase_StaticNew()
{
  return vtkRenderViewBase::New();
}

PyObject *PyVTKClass_vtkRenderViewBaseNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRenderViewBase_StaticNew,
    PyvtkRenderViewBase_Methods,
    "vtkRenderViewBase", modulename,
    NULL, NULL,
    PyvtkRenderViewBase_Doc(),
    PyVTKClass_vtkViewNew(modulename));
  return cls;
}

const char **PyvtkRenderViewBase_Doc()
{
  static const char *docstring[] = {
    "vtkRenderViewBase - A base view containing a renderer.\n\n",
    "Superclass: vtkView\n\n",
    "vtkRenderViewBase is a view which contains a vtkRenderer.  You may\nadd vtkActors directly to the renderer.\n\nThis class is also the parent class for any more specialized view\nwhich uses a renderer.\n\nIn order to use the view with a QVTKWidget the following code is\nrequired to ensure the interactor and render window are initialized\nproperly.QVTKWidget *widget = new QVTKWidget;\nvtkContextView *view = ",
    "vtkContextView::New();\nview->SetInteractor(widget->GetInteractor());\nwidget->SetRenderWindow(view->GetRenderWindow());\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRenderViewBase(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRenderViewBaseNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRenderViewBase", o) != 0)
    {
    Py_DECREF(o);
    }

}

