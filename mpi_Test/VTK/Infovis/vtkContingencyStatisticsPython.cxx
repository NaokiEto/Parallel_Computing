// python wrapper for vtkContingencyStatistics
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
#include "vtkContingencyStatistics.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkContingencyStatistics(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkContingencyStatistics(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkContingencyStatisticsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkContingencyStatisticsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkBivariateStatisticsAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkBivariateStatisticsAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkBivariateStatisticsAlgorithmNew
#endif

static const char **PyvtkContingencyStatistics_Doc();


static PyObject *
PyvtkContingencyStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContingencyStatistics *op = static_cast<vtkContingencyStatistics *>(vp);

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
      tempr = op->vtkContingencyStatistics::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContingencyStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContingencyStatistics *op = static_cast<vtkContingencyStatistics *>(vp);

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
      tempr = op->vtkContingencyStatistics::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContingencyStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContingencyStatistics *op = static_cast<vtkContingencyStatistics *>(vp);

  vtkContingencyStatistics *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkContingencyStatistics::NewInstance();
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
PyvtkContingencyStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkContingencyStatistics *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkContingencyStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContingencyStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContingencyStatistics *op = static_cast<vtkContingencyStatistics *>(vp);

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
      op->vtkContingencyStatistics::Aggregate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContingencyStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkContingencyStatistics_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkContingencyStatistics_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkContingencyStatistics_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkContingencyStatistics\nC++: vtkContingencyStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkContingencyStatistics_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkContingencyStatistics\nC++: vtkContingencyStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Aggregate", PyvtkContingencyStatistics_Aggregate, 1,
   (char*)"V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model NB: not\nimplemented\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkContingencyStatistics_StaticNew()
{
  return vtkContingencyStatistics::New();
}

PyObject *PyVTKClass_vtkContingencyStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkContingencyStatistics_StaticNew,
    PyvtkContingencyStatistics_Methods,
    "vtkContingencyStatistics", modulename,
    NULL, NULL,
    PyvtkContingencyStatistics_Doc(),
    PyVTKClass_vtkBivariateStatisticsAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkContingencyStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkContingencyStatistics - A class for correlation with contigency\n\n",
    "Superclass: vtkBivariateStatisticsAlgorithm\n\n",
    "Given a pair of columns of interest, this class provides the\nfollowing functionalities, depending on the execution mode it is\nexecuted in:\n* Learn: calculate contigency tables and corresponding discrete\n  bivariate probability distribution.\n* Assess: given two columns of interest with the same number of\n  entries as input in port INPUT_DATA, and a corresponding bivariate\n  probability distribution",
    ",\n\nThanks:\n\nThanks to Philippe Pebay and David Thompson from Sandia National\nLaboratories for implementing this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContingencyStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContingencyStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContingencyStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

