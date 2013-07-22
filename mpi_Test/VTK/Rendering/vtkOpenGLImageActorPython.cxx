// python wrapper for vtkOpenGLImageActor
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
#include "vtkOpenGLImageActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLImageActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLImageActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLImageActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLImageActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageActorNew
extern "C" { PyObject *PyVTKClass_vtkImageActorNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageActorNew
#endif

static const char **PyvtkOpenGLImageActor_Doc();


static PyObject *
PyvtkOpenGLImageActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageActor *op = static_cast<vtkOpenGLImageActor *>(vp);

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
      tempr = op->vtkOpenGLImageActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLImageActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageActor *op = static_cast<vtkOpenGLImageActor *>(vp);

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
      tempr = op->vtkOpenGLImageActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLImageActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageActor *op = static_cast<vtkOpenGLImageActor *>(vp);

  vtkOpenGLImageActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLImageActor::NewInstance();
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
PyvtkOpenGLImageActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLImageActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLImageActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLImageActor_Load(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageActor *op = static_cast<vtkOpenGLImageActor *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->Load(temp0);
      }
    else
      {
      op->vtkOpenGLImageActor::Load(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLImageActor_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageActor *op = static_cast<vtkOpenGLImageActor *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0);
      }
    else
      {
      op->vtkOpenGLImageActor::Render(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLImageActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLImageActor *op = static_cast<vtkOpenGLImageActor *>(vp);

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
      op->vtkOpenGLImageActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLImageActor_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLImageActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLImageActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLImageActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLImageActor\nC++: vtkOpenGLImageActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLImageActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLImageActor\nC++: vtkOpenGLImageActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Load", PyvtkOpenGLImageActor_Load, 1,
   (char*)"V.Load(vtkRenderer)\nC++: void Load(vtkRenderer *ren)\n\nImplement base class method.\n"},
  {(char*)"Render", PyvtkOpenGLImageActor_Render, 1,
   (char*)"V.Render(vtkRenderer)\nC++: void Render(vtkRenderer *ren)\n\nImplement base class method.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkOpenGLImageActor_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\ntexture. The parameter window could be used to determine which\ngraphic resources to release. Using the same texture object in\nmultiple render windows is NOT currently supported.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLImageActor_StaticNew()
{
  return vtkOpenGLImageActor::New();
}

PyObject *PyVTKClass_vtkOpenGLImageActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLImageActor_StaticNew,
    PyvtkOpenGLImageActor_Methods,
    "vtkOpenGLImageActor", modulename,
    NULL, NULL,
    PyvtkOpenGLImageActor_Doc(),
    PyVTKClass_vtkImageActorNew(modulename));
  return cls;
}

const char **PyvtkOpenGLImageActor_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLImageActor - OpenGL texture map\n\n",
    "Superclass: vtkImageActor\n\n",
    "vtkOpenGLImageActor is a concrete implementation of the abstract\nclass vtkImageActor. vtkOpenGLImageActor interfaces to the OpenGL\nrendering library.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLImageActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLImageActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLImageActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

