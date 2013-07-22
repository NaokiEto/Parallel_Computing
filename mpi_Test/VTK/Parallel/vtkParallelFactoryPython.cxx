// python wrapper for vtkParallelFactory
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
#include "vtkParallelFactory.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkParallelFactory(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkParallelFactory(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkParallelFactoryNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkParallelFactoryNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectFactoryNew
extern "C" { PyObject *PyVTKClass_vtkObjectFactoryNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectFactoryNew
#endif

static const char **PyvtkParallelFactory_Doc();


static PyObject *
PyvtkParallelFactory_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelFactory *op = static_cast<vtkParallelFactory *>(vp);

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
      tempr = op->vtkParallelFactory::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelFactory *op = static_cast<vtkParallelFactory *>(vp);

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
      tempr = op->vtkParallelFactory::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelFactory *op = static_cast<vtkParallelFactory *>(vp);

  vtkParallelFactory *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkParallelFactory::NewInstance();
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
PyvtkParallelFactory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkParallelFactory *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkParallelFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelFactory_GetVTKSourceVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKSourceVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelFactory *op = static_cast<vtkParallelFactory *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVTKSourceVersion();
      }
    else
      {
      tempr = op->vtkParallelFactory::GetVTKSourceVersion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelFactory_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelFactory *op = static_cast<vtkParallelFactory *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDescription();
      }
    else
      {
      tempr = op->vtkParallelFactory::GetDescription();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkParallelFactory_Methods[] = {
  {(char*)"GetClassName", PyvtkParallelFactory_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParallelFactory_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParallelFactory_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkParallelFactory\nC++: vtkParallelFactory *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParallelFactory_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParallelFactory\nC++: vtkParallelFactory *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetVTKSourceVersion", PyvtkParallelFactory_GetVTKSourceVersion, 1,
   (char*)"V.GetVTKSourceVersion() -> string\nC++: virtual const char *GetVTKSourceVersion()\n\n"},
  {(char*)"GetDescription", PyvtkParallelFactory_GetDescription, 1,
   (char*)"V.GetDescription() -> string\nC++: virtual const char *GetDescription()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParallelFactory_StaticNew()
{
  return vtkParallelFactory::New();
}

PyObject *PyVTKClass_vtkParallelFactoryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParallelFactory_StaticNew,
    PyvtkParallelFactory_Methods,
    "vtkParallelFactory", modulename,
    NULL, NULL,
    PyvtkParallelFactory_Doc(),
    PyVTKClass_vtkObjectFactoryNew(modulename));
  return cls;
}

const char **PyvtkParallelFactory_Doc()
{
  static const char *docstring[] = {
    "vtkParallelFactory - \n\n",
    "Superclass: vtkObjectFactory\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParallelFactory(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParallelFactoryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParallelFactory", o) != 0)
    {
    Py_DECREF(o);
    }

}

