// python wrapper for vtkApproximatingSubdivisionFilter
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
#include "vtkApproximatingSubdivisionFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkApproximatingSubdivisionFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkApproximatingSubdivisionFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkApproximatingSubdivisionFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkApproximatingSubdivisionFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkApproximatingSubdivisionFilter_Doc();


static PyObject *
PyvtkApproximatingSubdivisionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApproximatingSubdivisionFilter *op = static_cast<vtkApproximatingSubdivisionFilter *>(vp);

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
      tempr = op->vtkApproximatingSubdivisionFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApproximatingSubdivisionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApproximatingSubdivisionFilter *op = static_cast<vtkApproximatingSubdivisionFilter *>(vp);

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
      tempr = op->vtkApproximatingSubdivisionFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApproximatingSubdivisionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApproximatingSubdivisionFilter *op = static_cast<vtkApproximatingSubdivisionFilter *>(vp);

  vtkApproximatingSubdivisionFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkApproximatingSubdivisionFilter::NewInstance();
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
PyvtkApproximatingSubdivisionFilter_SetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApproximatingSubdivisionFilter *op = static_cast<vtkApproximatingSubdivisionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSubdivisions(temp0);
      }
    else
      {
      op->vtkApproximatingSubdivisionFilter::SetNumberOfSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApproximatingSubdivisionFilter_GetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApproximatingSubdivisionFilter *op = static_cast<vtkApproximatingSubdivisionFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSubdivisions();
      }
    else
      {
      tempr = op->vtkApproximatingSubdivisionFilter::GetNumberOfSubdivisions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkApproximatingSubdivisionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkApproximatingSubdivisionFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkApproximatingSubdivisionFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkApproximatingSubdivisionFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkApproximatingSubdivisionFilter\nC++: vtkApproximatingSubdivisionFilter *NewInstance()\n\n"},
  {(char*)"SetNumberOfSubdivisions", PyvtkApproximatingSubdivisionFilter_SetNumberOfSubdivisions, 1,
   (char*)"V.SetNumberOfSubdivisions(int)\nC++: void SetNumberOfSubdivisions(int a)\n\nSet/get the number of subdivisions.\n"},
  {(char*)"GetNumberOfSubdivisions", PyvtkApproximatingSubdivisionFilter_GetNumberOfSubdivisions, 1,
   (char*)"V.GetNumberOfSubdivisions() -> int\nC++: int GetNumberOfSubdivisions()\n\nSet/get the number of subdivisions.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkApproximatingSubdivisionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkApproximatingSubdivisionFilter_Methods,
    "vtkApproximatingSubdivisionFilter", modulename,
    NULL, NULL,
    PyvtkApproximatingSubdivisionFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkApproximatingSubdivisionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkApproximatingSubdivisionFilter - generate a subdivision surface\nusing an Approximating Scheme\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkApproximatingSubdivisionFilter is an abstract class that defines\nthe protocol for Approximating subdivision surface filters.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkApproximatingSubdivisionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkApproximatingSubdivisionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkApproximatingSubdivisionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

