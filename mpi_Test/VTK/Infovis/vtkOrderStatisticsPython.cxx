// python wrapper for vtkOrderStatistics
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
#include "vtkVariant.h"
#include "vtkOrderStatistics.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOrderStatistics(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOrderStatistics(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOrderStatisticsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOrderStatisticsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnivariateStatisticsAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnivariateStatisticsAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnivariateStatisticsAlgorithmNew
#endif

static const char **PyvtkOrderStatistics_Doc();


static PyObject *
PyvtkOrderStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

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
      tempr = op->vtkOrderStatistics::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

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
      tempr = op->vtkOrderStatistics::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  vtkOrderStatistics *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOrderStatistics::NewInstance();
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
PyvtkOrderStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOrderStatistics *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOrderStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_SetNumericType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumericType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumericType(temp0);
      }
    else
      {
      op->vtkOrderStatistics::SetNumericType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_GetNumericType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumericType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumericType();
      }
    else
      {
      tempr = op->vtkOrderStatistics::GetNumericType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_NumericTypeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NumericTypeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NumericTypeOn();
      }
    else
      {
      op->vtkOrderStatistics::NumericTypeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_NumericTypeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NumericTypeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NumericTypeOff();
      }
    else
      {
      op->vtkOrderStatistics::NumericTypeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_SetNumberOfIntervals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIntervals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfIntervals(temp0);
      }
    else
      {
      op->vtkOrderStatistics::SetNumberOfIntervals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_GetNumberOfIntervals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIntervals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfIntervals();
      }
    else
      {
      tempr = op->vtkOrderStatistics::GetNumberOfIntervals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_SetQuantileDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuantileDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQuantileDefinition(temp0);
      }
    else
      {
      op->vtkOrderStatistics::SetQuantileDefinition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_GetQuantileDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuantileDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQuantileDefinition();
      }
    else
      {
      tempr = op->vtkOrderStatistics::GetQuantileDefinition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOrderStatistics_SetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

  char *temp0 = NULL;
  int temp1;
  vtkVariant *temp2 = NULL;
  PyObject *pobj2 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      tempr = op->SetParameter(temp0, temp1, *temp2);
      }
    else
      {
      tempr = op->vtkOrderStatistics::SetParameter(temp0, temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj2);

  return result;
}


static PyObject *
PyvtkOrderStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderStatistics *op = static_cast<vtkOrderStatistics *>(vp);

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
      op->vtkOrderStatistics::Aggregate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOrderStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkOrderStatistics_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOrderStatistics_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOrderStatistics_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOrderStatistics\nC++: vtkOrderStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOrderStatistics_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOrderStatistics\nC++: vtkOrderStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumericType", PyvtkOrderStatistics_SetNumericType, 1,
   (char*)"V.SetNumericType(int)\nC++: void SetNumericType(int a)\n\nSet/get whether histograms and assessment data should be treated\nas numeric data. Otherwise, then everything is treated as\nstrings, which always works, and is thus the the default. Note\nthat if the data is indeed numeric but this is not set, some\nstrange results will occur because of the use of the\nlexicographic order instead of the order on reals.\n"},
  {(char*)"GetNumericType", PyvtkOrderStatistics_GetNumericType, 1,
   (char*)"V.GetNumericType() -> int\nC++: int GetNumericType()\n\nSet/get whether histograms and assessment data should be treated\nas numeric data. Otherwise, then everything is treated as\nstrings, which always works, and is thus the the default. Note\nthat if the data is indeed numeric but this is not set, some\nstrange results will occur because of the use of the\nlexicographic order instead of the order on reals.\n"},
  {(char*)"NumericTypeOn", PyvtkOrderStatistics_NumericTypeOn, 1,
   (char*)"V.NumericTypeOn()\nC++: void NumericTypeOn()\n\nSet/get whether histograms and assessment data should be treated\nas numeric data. Otherwise, then everything is treated as\nstrings, which always works, and is thus the the default. Note\nthat if the data is indeed numeric but this is not set, some\nstrange results will occur because of the use of the\nlexicographic order instead of the order on reals.\n"},
  {(char*)"NumericTypeOff", PyvtkOrderStatistics_NumericTypeOff, 1,
   (char*)"V.NumericTypeOff()\nC++: void NumericTypeOff()\n\nSet/get whether histograms and assessment data should be treated\nas numeric data. Otherwise, then everything is treated as\nstrings, which always works, and is thus the the default. Note\nthat if the data is indeed numeric but this is not set, some\nstrange results will occur because of the use of the\nlexicographic order instead of the order on reals.\n"},
  {(char*)"SetNumberOfIntervals", PyvtkOrderStatistics_SetNumberOfIntervals, 1,
   (char*)"V.SetNumberOfIntervals(int)\nC++: void SetNumberOfIntervals(vtkIdType a)\n\nSet/Get the number of quantiles (with uniform spacing).\n"},
  {(char*)"GetNumberOfIntervals", PyvtkOrderStatistics_GetNumberOfIntervals, 1,
   (char*)"V.GetNumberOfIntervals() -> int\nC++: vtkIdType GetNumberOfIntervals()\n\nSet/Get the number of quantiles (with uniform spacing).\n"},
  {(char*)"SetQuantileDefinition", PyvtkOrderStatistics_SetQuantileDefinition, 1,
   (char*)"V.SetQuantileDefinition(int)\nC++: void SetQuantileDefinition(int)\n\nSet the quantile definition.\n"},
  {(char*)"GetQuantileDefinition", PyvtkOrderStatistics_GetQuantileDefinition, 1,
   (char*)"V.GetQuantileDefinition() -> int\nC++: vtkIdType GetQuantileDefinition()\n\nGet the quantile definition.\n"},
  {(char*)"SetParameter", PyvtkOrderStatistics_SetParameter, 1,
   (char*)"V.SetParameter(string, int, vtkVariant) -> bool\nC++: virtual bool SetParameter(const char *parameter, int index,\n    vtkVariant value)\n\nA convenience method (in particular for access from other\napplications) to set parameter values. Return true if setting of\nrequested parameter name was excuted, false otherwise.\n"},
  {(char*)"Aggregate", PyvtkOrderStatistics_Aggregate, 1,
   (char*)"V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model NB: not\nimplemented\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOrderStatistics_StaticNew()
{
  return vtkOrderStatistics::New();
}

PyObject *PyVTKClass_vtkOrderStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOrderStatistics_StaticNew,
    PyvtkOrderStatistics_Methods,
    "vtkOrderStatistics", modulename,
    NULL, NULL,
    PyvtkOrderStatistics_Doc(),
    PyVTKClass_vtkUnivariateStatisticsAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"InverseCDF", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"InverseCDFAveragedSteps", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkOrderStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkOrderStatistics - A class for univariate order statistics\n\n",
    "Superclass: vtkUnivariateStatisticsAlgorithm\n\n",
    "Given a selection of columns of interest in an input data table, this\nclass provides the following functionalities, depending on the\nexecution mode it is executed in:\n* Learn: calculate arbitrary quantiles. Provide specific names when\n  5-point statistics (minimum, 1st quartile, median, third quartile,\n  maximum) requested.\n* Assess: given an input data set and a set of q-quantiles, label\n  each d",
    "atum either with the quantile interval to which it belongs,\n  or 0 if it is smaller than smaller quantile, or q if it is larger\n  than largest quantile.\n\nThanks:\n\nThanks to Philippe Pebay and David Thompson from Sandia National\nLaboratories for implementing this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOrderStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOrderStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOrderStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

