// python wrapper for vtkGeodesicPath
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
#include "vtkGeodesicPath.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeodesicPath(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeodesicPath(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeodesicPathNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeodesicPathNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGeodesicPath_Doc();


static PyObject *
PyvtkGeodesicPath_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeodesicPath *op = static_cast<vtkGeodesicPath *>(vp);

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
      tempr = op->vtkGeodesicPath::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeodesicPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeodesicPath *op = static_cast<vtkGeodesicPath *>(vp);

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
      tempr = op->vtkGeodesicPath::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeodesicPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeodesicPath *op = static_cast<vtkGeodesicPath *>(vp);

  vtkGeodesicPath *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeodesicPath::NewInstance();
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
PyvtkGeodesicPath_GetGeodesicLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeodesicLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeodesicPath *op = static_cast<vtkGeodesicPath *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetGeodesicLength();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeodesicPath_Methods[] = {
  {(char*)"GetClassName", PyvtkGeodesicPath_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"IsA", PyvtkGeodesicPath_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"NewInstance", PyvtkGeodesicPath_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeodesicPath\nC++: vtkGeodesicPath *NewInstance()\n\nStandard methids for printing and determining type information.\n"},
  {(char*)"GetGeodesicLength", PyvtkGeodesicPath_GetGeodesicLength, 1,
   (char*)"V.GetGeodesicLength() -> float\nC++: virtual double GetGeodesicLength()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGeodesicPathNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGeodesicPath_Methods,
    "vtkGeodesicPath", modulename,
    NULL, NULL,
    PyvtkGeodesicPath_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGeodesicPath_Doc()
{
  static const char *docstring[] = {
    "vtkGeodesicPath - Abstract base for classes that generate a geodesic\npath\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "Serves as a base class for algorithms that trace a geodesic path on a\npolygonal dataset.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeodesicPath(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeodesicPathNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeodesicPath", o) != 0)
    {
    Py_DECREF(o);
    }

}

