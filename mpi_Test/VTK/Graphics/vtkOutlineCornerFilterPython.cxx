// python wrapper for vtkOutlineCornerFilter
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
#include "vtkOutlineCornerFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOutlineCornerFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOutlineCornerFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOutlineCornerFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOutlineCornerFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkOutlineCornerFilter_Doc();


static PyObject *
PyvtkOutlineCornerFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerFilter *op = static_cast<vtkOutlineCornerFilter *>(vp);

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
      tempr = op->vtkOutlineCornerFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerFilter *op = static_cast<vtkOutlineCornerFilter *>(vp);

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
      tempr = op->vtkOutlineCornerFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerFilter *op = static_cast<vtkOutlineCornerFilter *>(vp);

  vtkOutlineCornerFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOutlineCornerFilter::NewInstance();
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
PyvtkOutlineCornerFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOutlineCornerFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOutlineCornerFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerFilter_SetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerFilter *op = static_cast<vtkOutlineCornerFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCornerFactor(temp0);
      }
    else
      {
      op->vtkOutlineCornerFilter::SetCornerFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerFilter_GetCornerFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerFilter *op = static_cast<vtkOutlineCornerFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerFactorMinValue();
      }
    else
      {
      tempr = op->vtkOutlineCornerFilter::GetCornerFactorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerFilter_GetCornerFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerFilter *op = static_cast<vtkOutlineCornerFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerFactorMaxValue();
      }
    else
      {
      tempr = op->vtkOutlineCornerFilter::GetCornerFactorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerFilter_GetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerFilter *op = static_cast<vtkOutlineCornerFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerFactor();
      }
    else
      {
      tempr = op->vtkOutlineCornerFilter::GetCornerFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOutlineCornerFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkOutlineCornerFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOutlineCornerFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOutlineCornerFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOutlineCornerFilter\nC++: vtkOutlineCornerFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOutlineCornerFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOutlineCornerFilter\nC++: vtkOutlineCornerFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCornerFactor", PyvtkOutlineCornerFilter_SetCornerFactor, 1,
   (char*)"V.SetCornerFactor(float)\nC++: void SetCornerFactor(double)\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {(char*)"GetCornerFactorMinValue", PyvtkOutlineCornerFilter_GetCornerFactorMinValue, 1,
   (char*)"V.GetCornerFactorMinValue() -> float\nC++: double GetCornerFactorMinValue()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {(char*)"GetCornerFactorMaxValue", PyvtkOutlineCornerFilter_GetCornerFactorMaxValue, 1,
   (char*)"V.GetCornerFactorMaxValue() -> float\nC++: double GetCornerFactorMaxValue()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {(char*)"GetCornerFactor", PyvtkOutlineCornerFilter_GetCornerFactor, 1,
   (char*)"V.GetCornerFactor() -> float\nC++: double GetCornerFactor()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOutlineCornerFilter_StaticNew()
{
  return vtkOutlineCornerFilter::New();
}

PyObject *PyVTKClass_vtkOutlineCornerFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOutlineCornerFilter_StaticNew,
    PyvtkOutlineCornerFilter_Methods,
    "vtkOutlineCornerFilter", modulename,
    NULL, NULL,
    PyvtkOutlineCornerFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkOutlineCornerFilter_Doc()
{
  static const char *docstring[] = {
    "vtkOutlineCornerFilter - create wireframe outline corners for\narbitrary data set\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkOutlineCornerFilter is a filter that generates wireframe outline\ncorners of any data set. The outline consists of the eight corners of\nthe dataset bounding box.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOutlineCornerFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOutlineCornerFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOutlineCornerFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

