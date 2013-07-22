// python wrapper for vtkMultiCorrelativeStatistics
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
#include "vtkMultiCorrelativeStatistics.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMultiCorrelativeStatistics(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMultiCorrelativeStatistics(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMultiCorrelativeStatisticsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMultiCorrelativeStatisticsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
#endif

static const char **PyvtkMultiCorrelativeStatistics_Doc();


static PyObject *
PyvtkMultiCorrelativeStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiCorrelativeStatistics *op = static_cast<vtkMultiCorrelativeStatistics *>(vp);

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
      tempr = op->vtkMultiCorrelativeStatistics::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiCorrelativeStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiCorrelativeStatistics *op = static_cast<vtkMultiCorrelativeStatistics *>(vp);

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
      tempr = op->vtkMultiCorrelativeStatistics::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiCorrelativeStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiCorrelativeStatistics *op = static_cast<vtkMultiCorrelativeStatistics *>(vp);

  vtkMultiCorrelativeStatistics *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMultiCorrelativeStatistics::NewInstance();
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
PyvtkMultiCorrelativeStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMultiCorrelativeStatistics *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMultiCorrelativeStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiCorrelativeStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiCorrelativeStatistics *op = static_cast<vtkMultiCorrelativeStatistics *>(vp);

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
      op->vtkMultiCorrelativeStatistics::Aggregate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiCorrelativeStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkMultiCorrelativeStatistics_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMultiCorrelativeStatistics_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMultiCorrelativeStatistics_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMultiCorrelativeStatistics\nC++: vtkMultiCorrelativeStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMultiCorrelativeStatistics_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMultiCorrelativeStatistics\nC++: vtkMultiCorrelativeStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Aggregate", PyvtkMultiCorrelativeStatistics_Aggregate, 1,
   (char*)"V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMultiCorrelativeStatistics_StaticNew()
{
  return vtkMultiCorrelativeStatistics::New();
}

PyObject *PyVTKClass_vtkMultiCorrelativeStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMultiCorrelativeStatistics_StaticNew,
    PyvtkMultiCorrelativeStatistics_Methods,
    "vtkMultiCorrelativeStatistics", modulename,
    NULL, NULL,
    PyvtkMultiCorrelativeStatistics_Doc(),
    PyVTKClass_vtkStatisticsAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMultiCorrelativeStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkMultiCorrelativeStatistics - A class for linear correlation\n\n",
    "Superclass: vtkStatisticsAlgorithm\n\n",
    "Given a selection of sets of columns of interest, this class provides\nthe following functionalities, depending on the execution mode it is\nexecuted in:\n* Learn: calculates means, unbiased variance and covariance\n  estimators of column pairs coefficient. More precisely, Learn\n  calculates the averages and centered variance/covariance sums; if\n  finalize is set to true (default), the final statistic",
    "s are\n  calculated. The output metadata on port OUTPUT_MODEL is a\n  multiblock dataset containing at a minimum one vtkTable holding the\nraw sums in a sparse matrix style. If finalize is true, then one\n  additional vtkTable will be present for each requested set of\n  column correlations. These additional tables contain column\n  averages, the upper triangular portion of the covariance matrix (in\nthe",
    " upper right hand portion of the table) and the Cholesky\n  decomposition of the covariance matrix (in the lower portion of the\ntable beneath the covariance triangle). The leftmost column will be a\nvector of column averages. The last entry in the column averages\n  vector is the number of samples. As an example, consider a request\n  for a 3-column correlation with columns named ColA, ColB, and ColC.",
    "\n  The resulting table will look like this:\n\n\n     Column  |Mean     |ColA     |ColB     |ColC\n--------+---------+---------+---------+--------- ColA    |avg(A)  \n    |cov(A,A) |cov(A,B) |cov(A,C) ColB    |avg(B)  \n    |chol(1,1)|cov(B,B) |cov(B,C) ColC    |avg(C)  \n    |chol(2,1)|chol(2,2)|cov(C,C)\n    Cholesky|length(A)|chol(3,1)|chol(3,2)|chol(3,3) \n* Assess: given a set of results matrices as s",
    "pecified above in input\nport INPUT_MODEL and tabular data on input port INPUT_DATA that\n  contains column names matching those of the tables on input port\n  INPUT_MODEL, the assess mode computes the relative deviation of\n  each observation in port INPUT_DATA's table according to the linear\n  correlations implied by each table in port INPUT_MODEL.\n\nThanks:\n\nThanks to Philippe Pebay, Jackson Mayo, a",
    "nd David Thompson of Sandia\nNational Laboratories for implementing this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMultiCorrelativeStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMultiCorrelativeStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMultiCorrelativeStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

