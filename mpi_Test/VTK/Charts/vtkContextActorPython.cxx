// python wrapper for vtkContextActor
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
#include "vtkContextActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkContextActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkContextActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkContextActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkContextActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPropNew
extern "C" { PyObject *PyVTKClass_vtkPropNew(const char *); }
#define DECLARED_PyVTKClass_vtkPropNew
#endif

static const char **PyvtkContextActor_Doc();


static PyObject *
PyvtkContextActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextActor *op = static_cast<vtkContextActor *>(vp);

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
      tempr = op->vtkContextActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextActor *op = static_cast<vtkContextActor *>(vp);

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
      tempr = op->vtkContextActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextActor *op = static_cast<vtkContextActor *>(vp);

  vtkContextActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkContextActor::NewInstance();
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
PyvtkContextActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkContextActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkContextActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextActor *op = static_cast<vtkContextActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOverlay(temp0);
      }
    else
      {
      tempr = op->vtkContextActor::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextActor_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextActor *op = static_cast<vtkContextActor *>(vp);

  vtkContext2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    if (ap.IsBound())
      {
      op->SetContext(temp0);
      }
    else
      {
      op->vtkContextActor::SetContext(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextActor_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextActor *op = static_cast<vtkContextActor *>(vp);

  vtkContext2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetContext();
      }
    else
      {
      tempr = op->vtkContextActor::GetContext();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextActor_GetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextActor *op = static_cast<vtkContextActor *>(vp);

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
      tempr = op->vtkContextActor::GetScene();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextActor_SetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextActor *op = static_cast<vtkContextActor *>(vp);

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
      op->vtkContextActor::SetScene(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextActor *op = static_cast<vtkContextActor *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkContextActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContextActor_Methods[] = {
  {(char*)"GetClassName", PyvtkContextActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkContextActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkContextActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkContextActor\nC++: vtkContextActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkContextActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkContextActor\nC++: vtkContextActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"RenderOverlay", PyvtkContextActor_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nWe only render in the overlay for the context scene.\n"},
  {(char*)"SetContext", PyvtkContextActor_SetContext, 1,
   (char*)"V.SetContext(vtkContext2D)\nC++: virtual void SetContext(vtkContext2D *context)\n\nSet the vtkContext2D for the actor.\n"},
  {(char*)"GetContext", PyvtkContextActor_GetContext, 1,
   (char*)"V.GetContext() -> vtkContext2D\nC++: vtkContext2D *GetContext()\n\nSet/Get the vtk2DPainter.\n"},
  {(char*)"GetScene", PyvtkContextActor_GetScene, 1,
   (char*)"V.GetScene() -> vtkContextScene\nC++: vtkContextScene *GetScene()\n\nGet the chart object for the Actor.\n"},
  {(char*)"SetScene", PyvtkContextActor_SetScene, 1,
   (char*)"V.SetScene(vtkContextScene)\nC++: virtual void SetScene(vtkContextScene *scene)\n\nSet the chart object for the Actor.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkContextActor_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *window)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkContextActor_StaticNew()
{
  return vtkContextActor::New();
}

PyObject *PyVTKClass_vtkContextActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkContextActor_StaticNew,
    PyvtkContextActor_Methods,
    "vtkContextActor", modulename,
    NULL, NULL,
    PyvtkContextActor_Doc(),
    PyVTKClass_vtkPropNew(modulename));
  return cls;
}

const char **PyvtkContextActor_Doc()
{
  static const char *docstring[] = {
    "vtkContextActor - provides a vtkProp derived object.\n\n",
    "Superclass: vtkProp\n\n",
    "This object provides the entry point for the vtkContextScene to be\nrendered in a vtkRenderer. Uses the RenderOverlay pass to render the\n2D vtkContextScene.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContextActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContextActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContextActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

