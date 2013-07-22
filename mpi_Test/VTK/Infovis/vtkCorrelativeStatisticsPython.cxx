// python wrapper for vtkCorrelativeStatistics
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
#include "vtkCorrelativeStatistics.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCorrelativeStatistics(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCorrelativeStatistics(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCorrelativeStatisticsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCorrelativeStatisticsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkBivariateStatisticsAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkBivariateStatisticsAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkBivariateStatisticsAlgorithmNew
#endif

static const char **PyvtkCorrelativeStatistics_Doc();


static PyObject *
PyvtkCorrelativeStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCorrelativeStatistics *op = static_cast<vtkCorrelativeStatistics *>(vp);

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
      tempr = op->vtkCorrelativeStatistics::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCorrelativeStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCorrelativeStatistics *op = static_cast<vtkCorrelativeStatistics *>(vp);

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
      tempr = op->vtkCorrelativeStatistics::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCorrelativeStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCorrelativeStatistics *op = static_cast<vtkCorrelativeStatistics *>(vp);

  vtkCorrelativeStatistics *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCorrelativeStatistics::NewInstance();
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
PyvtkCorrelativeStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCorrelativeStatistics *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCorrelativeStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCorrelativeStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCorrelativeStatistics *op = static_cast<vtkCorrelativeStatistics *>(vp);

  vtkDataObjectCollection *temp0 = NULL;
  vtkMultiBlockDataSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectCollection") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet"))
    {
    if (ap.IsBound())
      {
      op->Aggregate(temp0, temp1);
      }
    else
      {
      op->vtkCorrelativeStatistics::Aggregate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCorrelativeStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkCorrelativeStatistics_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCorrelativeStatistics_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCorrelativeStatistics_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCorrelativeStatistics\nC++: vtkCorrelativeStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCorrelativeStatistics_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCorrelativeStatistics\nC++: vtkCorrelativeStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Aggregate", PyvtkCorrelativeStatistics_Aggregate, 1,
   (char*)"V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCorrelativeStatistics_StaticNew()
{
  return vtkCorrelativeStatistics::New();
}

PyObject *PyVTKClass_vtkCorrelativeStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCorrelativeStatistics_StaticNew,
    PyvtkCorrelativeStatistics_Methods,
    "vtkCorrelativeStatistics", modulename,
    NULL, NULL,
    PyvtkCorrelativeStatistics_Doc(),
    PyVTKClass_vtkBivariateStatisticsAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCorrelativeStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkCorrelativeStatistics - A class for linear correlation\n\n",
    "Superclass: vtkBivariateStatisticsAlgorithm\n\n",
    "Given a selection of pairs of columns of interest, this class\nprovides the following functionalities, depending on the chosen\nexecution options:\n* Learn: calculate extremal values, sample mean, and M2 aggregates\n  (cf. P. Pebay, Formulas for robust, one-pass parallel computation\n  of covariances and Arbitrary-Order Statistical Moments, Sandia\n  Report SAND2008-6212, Sep 2008,\n  http://infoserve.sa",
    "ndia.gov/sand_doc/2008/086212.pdf for details)\n* Derive: calculate unbiased variance and covariance estimators,\n  estimator of standard deviations, linear regressions, and Pearson\n  correlation coefficient.\n* Assess: given an input data set, two means and a 2x2 covariance\n  matrix, mark each datum with corresponding relative deviation\n  (2-dimensional Mahlanobis distance).\n* Test: no statistical t",
    "ests available yet.\n\nThanks:\n\nThanks to Philippe Pebay and David Thompson from Sandia National\nLaboratories for implementing this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCorrelativeStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCorrelativeStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCorrelativeStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

