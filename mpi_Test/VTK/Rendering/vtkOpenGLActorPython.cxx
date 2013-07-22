// python wrapper for vtkOpenGLActor
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
#include "vtkOpenGLActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkActorNew
extern "C" { PyObject *PyVTKClass_vtkActorNew(const char *); }
#define DECLARED_PyVTKClass_vtkActorNew
#endif

static const char **PyvtkOpenGLActor_Doc();


static PyObject *
PyvtkOpenGLActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLActor *op = static_cast<vtkOpenGLActor *>(vp);

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
      tempr = op->vtkOpenGLActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLActor *op = static_cast<vtkOpenGLActor *>(vp);

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
      tempr = op->vtkOpenGLActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLActor *op = static_cast<vtkOpenGLActor *>(vp);

  vtkOpenGLActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLActor::NewInstance();
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
PyvtkOpenGLActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLActor_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLActor *op = static_cast<vtkOpenGLActor *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkMapper *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkMapper"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1);
      }
    else
      {
      op->vtkOpenGLActor::Render(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLActor_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLActor\nC++: vtkOpenGLActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLActor\nC++: vtkOpenGLActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkOpenGLActor_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkMapper)\nC++: void Render(vtkRenderer *ren, vtkMapper *mapper)\n\nActual actor render method.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLActor_StaticNew()
{
  return vtkOpenGLActor::New();
}

PyObject *PyVTKClass_vtkOpenGLActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLActor_StaticNew,
    PyvtkOpenGLActor_Methods,
    "vtkOpenGLActor", modulename,
    NULL, NULL,
    PyvtkOpenGLActor_Doc(),
    PyVTKClass_vtkActorNew(modulename));
  return cls;
}

const char **PyvtkOpenGLActor_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLActor - OpenGL actor\n\n",
    "Superclass: vtkActor\n\n",
    "vtkOpenGLActor is a concrete implementation of the abstract class\nvtkActor. vtkOpenGLActor interfaces to the OpenGL rendering library.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

