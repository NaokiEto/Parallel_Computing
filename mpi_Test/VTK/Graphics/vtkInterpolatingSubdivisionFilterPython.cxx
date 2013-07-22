// python wrapper for vtkInterpolatingSubdivisionFilter
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
#include "vtkInterpolatingSubdivisionFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInterpolatingSubdivisionFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInterpolatingSubdivisionFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInterpolatingSubdivisionFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInterpolatingSubdivisionFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkInterpolatingSubdivisionFilter_Doc();


static PyObject *
PyvtkInterpolatingSubdivisionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatingSubdivisionFilter *op = static_cast<vtkInterpolatingSubdivisionFilter *>(vp);

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
      tempr = op->vtkInterpolatingSubdivisionFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInterpolatingSubdivisionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatingSubdivisionFilter *op = static_cast<vtkInterpolatingSubdivisionFilter *>(vp);

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
      tempr = op->vtkInterpolatingSubdivisionFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInterpolatingSubdivisionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatingSubdivisionFilter *op = static_cast<vtkInterpolatingSubdivisionFilter *>(vp);

  vtkInterpolatingSubdivisionFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInterpolatingSubdivisionFilter::NewInstance();
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
PyvtkInterpolatingSubdivisionFilter_SetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatingSubdivisionFilter *op = static_cast<vtkInterpolatingSubdivisionFilter *>(vp);

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
      op->vtkInterpolatingSubdivisionFilter::SetNumberOfSubdivisions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInterpolatingSubdivisionFilter_GetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolatingSubdivisionFilter *op = static_cast<vtkInterpolatingSubdivisionFilter *>(vp);

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
      tempr = op->vtkInterpolatingSubdivisionFilter::GetNumberOfSubdivisions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInterpolatingSubdivisionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkInterpolatingSubdivisionFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInterpolatingSubdivisionFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInterpolatingSubdivisionFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInterpolatingSubdivisionFilter\nC++: vtkInterpolatingSubdivisionFilter *NewInstance()\n\n"},
  {(char*)"SetNumberOfSubdivisions", PyvtkInterpolatingSubdivisionFilter_SetNumberOfSubdivisions, 1,
   (char*)"V.SetNumberOfSubdivisions(int)\nC++: void SetNumberOfSubdivisions(int a)\n\nSet/get the number of subdivisions.\n"},
  {(char*)"GetNumberOfSubdivisions", PyvtkInterpolatingSubdivisionFilter_GetNumberOfSubdivisions, 1,
   (char*)"V.GetNumberOfSubdivisions() -> int\nC++: int GetNumberOfSubdivisions()\n\nSet/get the number of subdivisions.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkInterpolatingSubdivisionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkInterpolatingSubdivisionFilter_Methods,
    "vtkInterpolatingSubdivisionFilter", modulename,
    NULL, NULL,
    PyvtkInterpolatingSubdivisionFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkInterpolatingSubdivisionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkInterpolatingSubdivisionFilter - generate a subdivision surface\nusing an Interpolating Scheme\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkInterpolatingSubdivisionFilter is an abstract class that defines\nthe protocol for interpolating subdivision surface filters.\n\nSee Also:\n\nvtkLinearSubdivisionFilter vtkButterflySubdivisionFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInterpolatingSubdivisionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInterpolatingSubdivisionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInterpolatingSubdivisionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

