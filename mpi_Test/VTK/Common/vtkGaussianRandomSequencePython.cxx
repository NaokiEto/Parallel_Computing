// python wrapper for vtkGaussianRandomSequence
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
#include "vtkGaussianRandomSequence.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGaussianRandomSequence(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGaussianRandomSequence(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGaussianRandomSequenceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGaussianRandomSequenceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRandomSequenceNew
extern "C" { PyObject *PyVTKClass_vtkRandomSequenceNew(const char *); }
#define DECLARED_PyVTKClass_vtkRandomSequenceNew
#endif

static const char **PyvtkGaussianRandomSequence_Doc();


static PyObject *
PyvtkGaussianRandomSequence_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianRandomSequence *op = static_cast<vtkGaussianRandomSequence *>(vp);

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
      tempr = op->vtkGaussianRandomSequence::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianRandomSequence_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianRandomSequence *op = static_cast<vtkGaussianRandomSequence *>(vp);

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
      tempr = op->vtkGaussianRandomSequence::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianRandomSequence_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianRandomSequence *op = static_cast<vtkGaussianRandomSequence *>(vp);

  vtkGaussianRandomSequence *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGaussianRandomSequence::NewInstance();
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
PyvtkGaussianRandomSequence_GetScaledValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaledValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianRandomSequence *op = static_cast<vtkGaussianRandomSequence *>(vp);

  double temp0;
  double temp1;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaledValue(temp0, temp1);
      }
    else
      {
      tempr = op->vtkGaussianRandomSequence::GetScaledValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGaussianRandomSequence_Methods[] = {
  {(char*)"GetClassName", PyvtkGaussianRandomSequence_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGaussianRandomSequence_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGaussianRandomSequence_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGaussianRandomSequence\nC++: vtkGaussianRandomSequence *NewInstance()\n\n"},
  {(char*)"GetScaledValue", PyvtkGaussianRandomSequence_GetScaledValue, 1,
   (char*)"V.GetScaledValue(float, float) -> float\nC++: virtual double GetScaledValue(double mean,\n    double standardDeviation)\n\nConvenient method to return a value given the mean and standard\ndeviation of the Gaussian distribution from the the Gaussian\ndistribution of mean=0 and standard deviation=1.0. There is an\ninitial implementation that can be overridden by a subclass.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGaussianRandomSequenceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGaussianRandomSequence_Methods,
    "vtkGaussianRandomSequence", modulename,
    NULL, NULL,
    PyvtkGaussianRandomSequence_Doc(),
    PyVTKClass_vtkRandomSequenceNew(modulename));
  return cls;
}

const char **PyvtkGaussianRandomSequence_Doc()
{
  static const char *docstring[] = {
    "vtkGaussianRandomSequence - Gaussian sequence of pseudo random numbers\n\n",
    "Superclass: vtkRandomSequence\n\n",
    "vtkGaussianRandomSequence is a sequence of pseudo random numbers\ndistributed according to the Gaussian/normal distribution (mean=0 and\nstandard deviation=1)\n\nThis is just an interface.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGaussianRandomSequence(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGaussianRandomSequenceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGaussianRandomSequence", o) != 0)
    {
    Py_DECREF(o);
    }

}

