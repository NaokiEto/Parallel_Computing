// python wrapper for vtkPSphereSource
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
#include "vtkPSphereSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPSphereSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPSphereSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPSphereSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPSphereSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSphereSourceNew
extern "C" { PyObject *PyVTKClass_vtkSphereSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkSphereSourceNew
#endif

static const char **PyvtkPSphereSource_Doc();


static PyObject *
PyvtkPSphereSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSphereSource *op = static_cast<vtkPSphereSource *>(vp);

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
      tempr = op->vtkPSphereSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSphereSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSphereSource *op = static_cast<vtkPSphereSource *>(vp);

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
      tempr = op->vtkPSphereSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSphereSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSphereSource *op = static_cast<vtkPSphereSource *>(vp);

  vtkPSphereSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPSphereSource::NewInstance();
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
PyvtkPSphereSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPSphereSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPSphereSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPSphereSource_GetEstimatedMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSphereSource *op = static_cast<vtkPSphereSource *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEstimatedMemorySize();
      }
    else
      {
      tempr = op->vtkPSphereSource::GetEstimatedMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPSphereSource_Methods[] = {
  {(char*)"GetClassName", PyvtkPSphereSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPSphereSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPSphereSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPSphereSource\nC++: vtkPSphereSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPSphereSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPSphereSource\nC++: vtkPSphereSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetEstimatedMemorySize", PyvtkPSphereSource_GetEstimatedMemorySize, 1,
   (char*)"V.GetEstimatedMemorySize() -> int\nC++: unsigned long GetEstimatedMemorySize()\n\nGet the estimated memory size in 1024 bytes\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPSphereSource_StaticNew()
{
  return vtkPSphereSource::New();
}

PyObject *PyVTKClass_vtkPSphereSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPSphereSource_StaticNew,
    PyvtkPSphereSource_Methods,
    "vtkPSphereSource", modulename,
    NULL, NULL,
    PyvtkPSphereSource_Doc(),
    PyVTKClass_vtkSphereSourceNew(modulename));
  return cls;
}

const char **PyvtkPSphereSource_Doc()
{
  static const char *docstring[] = {
    "vtkPSphereSource - sphere source that supports pieces\n\n",
    "Superclass: vtkSphereSource\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPSphereSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPSphereSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPSphereSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

