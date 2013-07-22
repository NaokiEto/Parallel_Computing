// python wrapper for vtkCompositedSynchronizedRenderers
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
#include "vtkCompositedSynchronizedRenderers.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCompositedSynchronizedRenderers(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCompositedSynchronizedRenderers(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCompositedSynchronizedRenderersNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCompositedSynchronizedRenderersNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSynchronizedRenderersNew
extern "C" { PyObject *PyVTKClass_vtkSynchronizedRenderersNew(const char *); }
#define DECLARED_PyVTKClass_vtkSynchronizedRenderersNew
#endif

static const char **PyvtkCompositedSynchronizedRenderers_Doc();


static PyObject *
PyvtkCompositedSynchronizedRenderers_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositedSynchronizedRenderers *op = static_cast<vtkCompositedSynchronizedRenderers *>(vp);

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
      tempr = op->vtkCompositedSynchronizedRenderers::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositedSynchronizedRenderers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositedSynchronizedRenderers *op = static_cast<vtkCompositedSynchronizedRenderers *>(vp);

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
      tempr = op->vtkCompositedSynchronizedRenderers::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositedSynchronizedRenderers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositedSynchronizedRenderers *op = static_cast<vtkCompositedSynchronizedRenderers *>(vp);

  vtkCompositedSynchronizedRenderers *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCompositedSynchronizedRenderers::NewInstance();
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
PyvtkCompositedSynchronizedRenderers_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCompositedSynchronizedRenderers *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCompositedSynchronizedRenderers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositedSynchronizedRenderers_SetCompositer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositedSynchronizedRenderers *op = static_cast<vtkCompositedSynchronizedRenderers *>(vp);

  vtkCompositer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositer"))
    {
    if (ap.IsBound())
      {
      op->SetCompositer(temp0);
      }
    else
      {
      op->vtkCompositedSynchronizedRenderers::SetCompositer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositedSynchronizedRenderers_GetCompositer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositedSynchronizedRenderers *op = static_cast<vtkCompositedSynchronizedRenderers *>(vp);

  vtkCompositer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompositer();
      }
    else
      {
      tempr = op->vtkCompositedSynchronizedRenderers::GetCompositer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositedSynchronizedRenderers_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositedSynchronizedRenderers_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositedSynchronizedRenderers_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositedSynchronizedRenderers_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCompositedSynchronizedRenderers\nC++: vtkCompositedSynchronizedRenderers *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositedSynchronizedRenderers_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositedSynchronizedRenderers\nC++: vtkCompositedSynchronizedRenderers *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetCompositer", PyvtkCompositedSynchronizedRenderers_SetCompositer, 1,
   (char*)"V.SetCompositer(vtkCompositer)\nC++: void SetCompositer(vtkCompositer *)\n\nGet/Set the composite. vtkTreeCompositer is used by default.\n"},
  {(char*)"GetCompositer", PyvtkCompositedSynchronizedRenderers_GetCompositer, 1,
   (char*)"V.GetCompositer() -> vtkCompositer\nC++: vtkCompositer *GetCompositer()\n\nGet/Set the composite. vtkTreeCompositer is used by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositedSynchronizedRenderers_StaticNew()
{
  return vtkCompositedSynchronizedRenderers::New();
}

PyObject *PyVTKClass_vtkCompositedSynchronizedRenderersNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositedSynchronizedRenderers_StaticNew,
    PyvtkCompositedSynchronizedRenderers_Methods,
    "vtkCompositedSynchronizedRenderers", modulename,
    NULL, NULL,
    PyvtkCompositedSynchronizedRenderers_Doc(),
    PyVTKClass_vtkSynchronizedRenderersNew(modulename));
  return cls;
}

const char **PyvtkCompositedSynchronizedRenderers_Doc()
{
  static const char *docstring[] = {
    "vtkCompositedSynchronizedRenderers\n\n",
    "Superclass: vtkSynchronizedRenderers\n\n",
    "vtkCompositedSynchronizedRenderers is vtkSynchronizedRenderers that\nuses vtkCompositer to composite the images on  the root node.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositedSynchronizedRenderers(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositedSynchronizedRenderersNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositedSynchronizedRenderers", o) != 0)
    {
    Py_DECREF(o);
    }

}

