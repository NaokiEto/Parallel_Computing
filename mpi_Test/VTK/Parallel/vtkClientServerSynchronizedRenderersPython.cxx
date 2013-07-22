// python wrapper for vtkClientServerSynchronizedRenderers
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
#include "vtkClientServerSynchronizedRenderers.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkClientServerSynchronizedRenderers(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkClientServerSynchronizedRenderers(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkClientServerSynchronizedRenderersNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkClientServerSynchronizedRenderersNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSynchronizedRenderersNew
extern "C" { PyObject *PyVTKClass_vtkSynchronizedRenderersNew(const char *); }
#define DECLARED_PyVTKClass_vtkSynchronizedRenderersNew
#endif

static const char **PyvtkClientServerSynchronizedRenderers_Doc();


static PyObject *
PyvtkClientServerSynchronizedRenderers_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerSynchronizedRenderers *op = static_cast<vtkClientServerSynchronizedRenderers *>(vp);

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
      tempr = op->vtkClientServerSynchronizedRenderers::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerSynchronizedRenderers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerSynchronizedRenderers *op = static_cast<vtkClientServerSynchronizedRenderers *>(vp);

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
      tempr = op->vtkClientServerSynchronizedRenderers::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkClientServerSynchronizedRenderers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClientServerSynchronizedRenderers *op = static_cast<vtkClientServerSynchronizedRenderers *>(vp);

  vtkClientServerSynchronizedRenderers *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkClientServerSynchronizedRenderers::NewInstance();
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
PyvtkClientServerSynchronizedRenderers_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkClientServerSynchronizedRenderers *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkClientServerSynchronizedRenderers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkClientServerSynchronizedRenderers_Methods[] = {
  {(char*)"GetClassName", PyvtkClientServerSynchronizedRenderers_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkClientServerSynchronizedRenderers_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkClientServerSynchronizedRenderers_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkClientServerSynchronizedRenderers\nC++: vtkClientServerSynchronizedRenderers *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkClientServerSynchronizedRenderers_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkClientServerSynchronizedRenderers\nC++: vtkClientServerSynchronizedRenderers *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkClientServerSynchronizedRenderers_StaticNew()
{
  return vtkClientServerSynchronizedRenderers::New();
}

PyObject *PyVTKClass_vtkClientServerSynchronizedRenderersNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkClientServerSynchronizedRenderers_StaticNew,
    PyvtkClientServerSynchronizedRenderers_Methods,
    "vtkClientServerSynchronizedRenderers", modulename,
    NULL, NULL,
    PyvtkClientServerSynchronizedRenderers_Doc(),
    PyVTKClass_vtkSynchronizedRenderersNew(modulename));
  return cls;
}

const char **PyvtkClientServerSynchronizedRenderers_Doc()
{
  static const char *docstring[] = {
    "vtkClientServerSynchronizedRenderers \n\n",
    "Superclass: vtkSynchronizedRenderers\n\n",
    "vtkClientServerSynchronizedRenderers is a vtkSynchronizedRenderers\nsubclass designed to be used in 2 processes, client-server mode.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkClientServerSynchronizedRenderers(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkClientServerSynchronizedRenderersNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkClientServerSynchronizedRenderers", o) != 0)
    {
    Py_DECREF(o);
    }

}

