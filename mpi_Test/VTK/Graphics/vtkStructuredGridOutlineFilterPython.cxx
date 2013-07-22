// python wrapper for vtkStructuredGridOutlineFilter
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
#include "vtkStructuredGridOutlineFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredGridOutlineFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredGridOutlineFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredGridOutlineFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredGridOutlineFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkStructuredGridOutlineFilter_Doc();


static PyObject *
PyvtkStructuredGridOutlineFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridOutlineFilter *op = static_cast<vtkStructuredGridOutlineFilter *>(vp);

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
      tempr = op->vtkStructuredGridOutlineFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridOutlineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridOutlineFilter *op = static_cast<vtkStructuredGridOutlineFilter *>(vp);

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
      tempr = op->vtkStructuredGridOutlineFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredGridOutlineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridOutlineFilter *op = static_cast<vtkStructuredGridOutlineFilter *>(vp);

  vtkStructuredGridOutlineFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredGridOutlineFilter::NewInstance();
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
PyvtkStructuredGridOutlineFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStructuredGridOutlineFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStructuredGridOutlineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStructuredGridOutlineFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredGridOutlineFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredGridOutlineFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredGridOutlineFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredGridOutlineFilter\nC++: vtkStructuredGridOutlineFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStructuredGridOutlineFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStructuredGridOutlineFilter\nC++: vtkStructuredGridOutlineFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStructuredGridOutlineFilter_StaticNew()
{
  return vtkStructuredGridOutlineFilter::New();
}

PyObject *PyVTKClass_vtkStructuredGridOutlineFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStructuredGridOutlineFilter_StaticNew,
    PyvtkStructuredGridOutlineFilter_Methods,
    "vtkStructuredGridOutlineFilter", modulename,
    NULL, NULL,
    PyvtkStructuredGridOutlineFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkStructuredGridOutlineFilter_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredGridOutlineFilter - create wireframe outline for\nstructured grid\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkStructuredGridOutlineFilter is a filter that generates a wireframe\noutline of a structured grid (vtkStructuredGrid). Structured data is\ntopologically a cube, so the outline will have 12 \"edges\".\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredGridOutlineFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredGridOutlineFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredGridOutlineFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

