// python wrapper for vtkImageIterateFilter
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
#include "vtkImageIterateFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageIterateFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageIterateFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageIterateFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageIterateFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageIterateFilter_Doc();


static PyObject *
PyvtkImageIterateFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIterateFilter *op = static_cast<vtkImageIterateFilter *>(vp);

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
      tempr = op->vtkImageIterateFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIterateFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIterateFilter *op = static_cast<vtkImageIterateFilter *>(vp);

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
      tempr = op->vtkImageIterateFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIterateFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIterateFilter *op = static_cast<vtkImageIterateFilter *>(vp);

  vtkImageIterateFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageIterateFilter::NewInstance();
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
PyvtkImageIterateFilter_GetIteration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIteration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIterateFilter *op = static_cast<vtkImageIterateFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIteration();
      }
    else
      {
      tempr = op->vtkImageIterateFilter::GetIteration();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIterateFilter_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIterateFilter *op = static_cast<vtkImageIterateFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfIterations();
      }
    else
      {
      tempr = op->vtkImageIterateFilter::GetNumberOfIterations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageIterateFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageIterateFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageIterateFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageIterateFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageIterateFilter\nC++: vtkImageIterateFilter *NewInstance()\n\n"},
  {(char*)"GetIteration", PyvtkImageIterateFilter_GetIteration, 1,
   (char*)"V.GetIteration() -> int\nC++: int GetIteration()\n\nGet which iteration is current being performed. Normally the user\nwill not access this method.\n"},
  {(char*)"GetNumberOfIterations", PyvtkImageIterateFilter_GetNumberOfIterations, 1,
   (char*)"V.GetNumberOfIterations() -> int\nC++: int GetNumberOfIterations()\n\nGet which iteration is current being performed. Normally the user\nwill not access this method.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageIterateFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageIterateFilter_Methods,
    "vtkImageIterateFilter", modulename,
    NULL, NULL,
    PyvtkImageIterateFilter_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageIterateFilter_Doc()
{
  static const char *docstring[] = {
    "vtkImageIterateFilter - Multiple executes per update.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageIterateFilter is a filter superclass that supports calling\nexecute multiple times per update.  The largest hack/open issue is\nthat the input and output caches are temporarily changed to \"fool\"\nthe subclasses.  I believe the correct solution is to pass the in and\nout cache to the subclasses methods as arguments.  Now the data is\npasses.  Can the caches be passed, and data retrieved from the",
    " cache?\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageIterateFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageIterateFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageIterateFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

