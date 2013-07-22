// python wrapper for vtkImagingFactory
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
#include "vtkImagingFactory.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImagingFactory(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImagingFactory(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImagingFactoryNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImagingFactoryNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkImagingFactory_Doc();


static PyObject *
PyvtkImagingFactory_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagingFactory *op = static_cast<vtkImagingFactory *>(vp);

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
      tempr = op->vtkImagingFactory::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagingFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagingFactory *op = static_cast<vtkImagingFactory *>(vp);

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
      tempr = op->vtkImagingFactory::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagingFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagingFactory *op = static_cast<vtkImagingFactory *>(vp);

  vtkImagingFactory *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImagingFactory::NewInstance();
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
PyvtkImagingFactory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImagingFactory *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImagingFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagingFactory_CreateInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateInstance");

  char *temp0 = NULL;
  vtkObject *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkImagingFactory::CreateInstance(temp0);

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
PyvtkImagingFactory_SetUseMesaClasses(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUseMesaClasses");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkImagingFactory::SetUseMesaClasses(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagingFactory_GetUseMesaClasses(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUseMesaClasses");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkImagingFactory::GetUseMesaClasses();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImagingFactory_Methods[] = {
  {(char*)"GetClassName", PyvtkImagingFactory_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImagingFactory_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImagingFactory_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImagingFactory\nC++: vtkImagingFactory *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImagingFactory_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImagingFactory\nC++: vtkImagingFactory *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CreateInstance", PyvtkImagingFactory_CreateInstance, 1,
   (char*)"V.CreateInstance(string) -> vtkObject\nC++: static vtkObject *CreateInstance(const char *vtkclassname)\n\nCreate and return an instance of the named vtk object. This\nmethod first checks the vtkObjectFactory to support dynamic\nloading.\n"},
  {(char*)"SetUseMesaClasses", PyvtkImagingFactory_SetUseMesaClasses, 1,
   (char*)"V.SetUseMesaClasses(int)\nC++: static void SetUseMesaClasses(int use)\n\nThis option enables the creation of Mesa classes instead of the\nOpenGL classes when using mangled Mesa.\n"},
  {(char*)"GetUseMesaClasses", PyvtkImagingFactory_GetUseMesaClasses, 1,
   (char*)"V.GetUseMesaClasses() -> int\nC++: static int GetUseMesaClasses()\n\nThis option enables the creation of Mesa classes instead of the\nOpenGL classes when using mangled Mesa.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImagingFactory_StaticNew()
{
  return vtkImagingFactory::New();
}

PyObject *PyVTKClass_vtkImagingFactoryNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImagingFactory_StaticNew,
    PyvtkImagingFactory_Methods,
    "vtkImagingFactory", modulename,
    NULL, NULL,
    PyvtkImagingFactory_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkImagingFactory_Doc()
{
  static const char *docstring[] = {
    "vtkImagingFactory - \n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImagingFactory(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImagingFactoryNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImagingFactory", o) != 0)
    {
    Py_DECREF(o);
    }

}

