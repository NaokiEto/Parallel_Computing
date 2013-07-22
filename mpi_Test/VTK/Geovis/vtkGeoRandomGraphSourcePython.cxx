// python wrapper for vtkGeoRandomGraphSource
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
#include "vtkGeoRandomGraphSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoRandomGraphSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoRandomGraphSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoRandomGraphSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoRandomGraphSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRandomGraphSourceNew
extern "C" { PyObject *PyVTKClass_vtkRandomGraphSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkRandomGraphSourceNew
#endif

static const char **PyvtkGeoRandomGraphSource_Doc();


static PyObject *
PyvtkGeoRandomGraphSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoRandomGraphSource *op = static_cast<vtkGeoRandomGraphSource *>(vp);

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
      tempr = op->vtkGeoRandomGraphSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoRandomGraphSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoRandomGraphSource *op = static_cast<vtkGeoRandomGraphSource *>(vp);

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
      tempr = op->vtkGeoRandomGraphSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoRandomGraphSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoRandomGraphSource *op = static_cast<vtkGeoRandomGraphSource *>(vp);

  vtkGeoRandomGraphSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoRandomGraphSource::NewInstance();
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
PyvtkGeoRandomGraphSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoRandomGraphSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoRandomGraphSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoRandomGraphSource_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoRandomGraphSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoRandomGraphSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoRandomGraphSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoRandomGraphSource\nC++: vtkGeoRandomGraphSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoRandomGraphSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoRandomGraphSource\nC++: vtkGeoRandomGraphSource *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoRandomGraphSource_StaticNew()
{
  return vtkGeoRandomGraphSource::New();
}

PyObject *PyVTKClass_vtkGeoRandomGraphSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoRandomGraphSource_StaticNew,
    PyvtkGeoRandomGraphSource_Methods,
    "vtkGeoRandomGraphSource", modulename,
    NULL, NULL,
    PyvtkGeoRandomGraphSource_Doc(),
    PyVTKClass_vtkRandomGraphSourceNew(modulename));
  return cls;
}

const char **PyvtkGeoRandomGraphSource_Doc()
{
  static const char *docstring[] = {
    "vtkGeoRandomGraphSource - A geospatial graph with random edges\n\n",
    "Superclass: vtkRandomGraphSource\n\n",
    "Generates a graph with a specified number of vertices, with the\ndensity of edges specified by either an exact number of edges or the\nprobability of an edge.  You may additionally specify whether to\nbegin with a random tree (which enforces graph connectivity).\n\nThe filter also adds random vertex attributes called latitude and\nlongitude. The latitude is distributed uniformly from -90 to 90,\nwhile lo",
    "ngitude is distributed uniformly from -180 to 180.\n\nSee Also:\n\nvtkRandomGraphSource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoRandomGraphSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoRandomGraphSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoRandomGraphSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

