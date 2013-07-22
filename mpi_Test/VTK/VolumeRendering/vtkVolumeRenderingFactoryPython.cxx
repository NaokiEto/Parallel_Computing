// python wrapper for vtkVolumeRenderingFactory
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
#include "vtkVolumeRenderingFactory.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVolumeRenderingFactory(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVolumeRenderingFactory(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVolumeRenderingFactoryNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVolumeRenderingFactoryNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkVolumeRenderingFactory_Doc();


static PyObject *
PyvtkVolumeRenderingFactory_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRenderingFactory *op = static_cast<vtkVolumeRenderingFactory *>(vp);

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
      tempr = op->vtkVolumeRenderingFactory::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRenderingFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRenderingFactory *op = static_cast<vtkVolumeRenderingFactory *>(vp);

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
      tempr = op->vtkVolumeRenderingFactory::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRenderingFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRenderingFactory *op = static_cast<vtkVolumeRenderingFactory *>(vp);

  vtkVolumeRenderingFactory *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVolumeRenderingFactory::NewInstance();
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
PyvtkVolumeRenderingFactory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVolumeRenderingFactory *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVolumeRenderingFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVolumeRenderingFactory_CreateInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateInstance");

  char *temp0 = NULL;
  vtkObject *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkVolumeRenderingFactory::CreateInstance(temp0);

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

static PyMethodDef PyvtkVolumeRenderingFactory_Methods[] = {
  {(char*)"GetClassName", PyvtkVolumeRenderingFactory_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVolumeRenderingFactory_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVolumeRenderingFactory_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVolumeRenderingFactory\nC++: vtkVolumeRenderingFactory *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVolumeRenderingFactory_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVolumeRenderingFactory\nC++: vtkVolumeRenderingFactory *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CreateInstance", PyvtkVolumeRenderingFactory_CreateInstance, 1,
   (char*)"V.CreateInstance(string) -> vtkObject\nC++: static vtkObject *CreateInstance(const char *vtkclassname)\n\nCreate and return an instance of the named vtk object. This\nmethod first checks the vtkObjectFactory to support dynamic\nloading.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVolumeRenderingFactory_StaticNew()
{
  return vtkVolumeRenderingFactory::New();
}

PyObject *PyVTKClass_vtkVolumeRenderingFactoryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVolumeRenderingFactory_StaticNew,
    PyvtkVolumeRenderingFactory_Methods,
    "vtkVolumeRenderingFactory", modulename,
    NULL, NULL,
    PyvtkVolumeRenderingFactory_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkVolumeRenderingFactory_Doc()
{
  static const char *docstring[] = {
    "vtkVolumeRenderingFactory - \n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVolumeRenderingFactory(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVolumeRenderingFactoryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVolumeRenderingFactory", o) != 0)
    {
    Py_DECREF(o);
    }

}

