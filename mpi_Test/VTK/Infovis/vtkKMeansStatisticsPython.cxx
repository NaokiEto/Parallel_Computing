// python wrapper for vtkKMeansStatistics
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
#include "vtkKMeansStatistics.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkKMeansStatistics(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkKMeansStatistics(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkKMeansStatisticsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkKMeansStatisticsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
#endif

static const char **PyvtkKMeansStatistics_Doc();


static PyObject *
PyvtkKMeansStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

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
      tempr = op->vtkKMeansStatistics::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

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
      tempr = op->vtkKMeansStatistics::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  vtkKMeansStatistics *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkKMeansStatistics::NewInstance();
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
PyvtkKMeansStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkKMeansStatistics *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkKMeansStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_SetDistanceFunctor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceFunctor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  vtkKMeansDistanceFunctor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKMeansDistanceFunctor"))
    {
    if (ap.IsBound())
      {
      op->SetDistanceFunctor(temp0);
      }
    else
      {
      op->vtkKMeansStatistics::SetDistanceFunctor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_GetDistanceFunctor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceFunctor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  vtkKMeansDistanceFunctor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistanceFunctor();
      }
    else
      {
      tempr = op->vtkKMeansStatistics::GetDistanceFunctor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_SetDefaultNumberOfClusters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNumberOfClusters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultNumberOfClusters(temp0);
      }
    else
      {
      op->vtkKMeansStatistics::SetDefaultNumberOfClusters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_GetDefaultNumberOfClusters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNumberOfClusters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultNumberOfClusters();
      }
    else
      {
      tempr = op->vtkKMeansStatistics::GetDefaultNumberOfClusters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_SetKValuesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKValuesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKValuesArrayName(temp0);
      }
    else
      {
      op->vtkKMeansStatistics::SetKValuesArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_GetKValuesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKValuesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKValuesArrayName();
      }
    else
      {
      tempr = op->vtkKMeansStatistics::GetKValuesArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_SetMaxNumIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxNumIterations(temp0);
      }
    else
      {
      op->vtkKMeansStatistics::SetMaxNumIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_GetMaxNumIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxNumIterations();
      }
    else
      {
      tempr = op->vtkKMeansStatistics::GetMaxNumIterations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkKMeansStatistics::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTolerance();
      }
    else
      {
      tempr = op->vtkKMeansStatistics::GetTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

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
      op->vtkKMeansStatistics::Aggregate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansStatistics_SetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansStatistics *op = static_cast<vtkKMeansStatistics *>(vp);

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
      tempr = op->vtkKMeansStatistics::SetParameter(temp0, temp1, *temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj2);

  return result;
}

static PyMethodDef PyvtkKMeansStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkKMeansStatistics_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkKMeansStatistics_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkKMeansStatistics_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkKMeansStatistics\nC++: vtkKMeansStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkKMeansStatistics_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkKMeansStatistics\nC++: vtkKMeansStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDistanceFunctor", PyvtkKMeansStatistics_SetDistanceFunctor, 1,
   (char*)"V.SetDistanceFunctor(vtkKMeansDistanceFunctor)\nC++: virtual void SetDistanceFunctor(vtkKMeansDistanceFunctor *)\n\nSet the DistanceFunctor.\n"},
  {(char*)"GetDistanceFunctor", PyvtkKMeansStatistics_GetDistanceFunctor, 1,
   (char*)"V.GetDistanceFunctor() -> vtkKMeansDistanceFunctor\nC++: vtkKMeansDistanceFunctor *GetDistanceFunctor()\n\nSet the DistanceFunctor.\n"},
  {(char*)"SetDefaultNumberOfClusters", PyvtkKMeansStatistics_SetDefaultNumberOfClusters, 1,
   (char*)"V.SetDefaultNumberOfClusters(int)\nC++: void SetDefaultNumberOfClusters(int a)\n\nSet/get the DefaultNumberOfClusters, used when no initial cluster\ncoordinates are specified.\n"},
  {(char*)"GetDefaultNumberOfClusters", PyvtkKMeansStatistics_GetDefaultNumberOfClusters, 1,
   (char*)"V.GetDefaultNumberOfClusters() -> int\nC++: int GetDefaultNumberOfClusters()\n\nSet/get the DefaultNumberOfClusters, used when no initial cluster\ncoordinates are specified.\n"},
  {(char*)"SetKValuesArrayName", PyvtkKMeansStatistics_SetKValuesArrayName, 1,
   (char*)"V.SetKValuesArrayName(string)\nC++: void SetKValuesArrayName(char *)\n\nSet/get the KValuesArrayName.\n"},
  {(char*)"GetKValuesArrayName", PyvtkKMeansStatistics_GetKValuesArrayName, 1,
   (char*)"V.GetKValuesArrayName() -> string\nC++: char *GetKValuesArrayName()\n\nSet/get the KValuesArrayName.\n"},
  {(char*)"SetMaxNumIterations", PyvtkKMeansStatistics_SetMaxNumIterations, 1,
   (char*)"V.SetMaxNumIterations(int)\nC++: void SetMaxNumIterations(int a)\n\nSet/get the MaxNumIterations used to terminate iterations on\ncluster center coordinates when the relative tolerance can not be\nmet.\n"},
  {(char*)"GetMaxNumIterations", PyvtkKMeansStatistics_GetMaxNumIterations, 1,
   (char*)"V.GetMaxNumIterations() -> int\nC++: int GetMaxNumIterations()\n\nSet/get the MaxNumIterations used to terminate iterations on\ncluster center coordinates when the relative tolerance can not be\nmet.\n"},
  {(char*)"SetTolerance", PyvtkKMeansStatistics_SetTolerance, 1,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double a)\n\nSet/get the relative Tolerance used to terminate iterations on\ncluster center coordinates.\n"},
  {(char*)"GetTolerance", PyvtkKMeansStatistics_GetTolerance, 1,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nSet/get the relative Tolerance used to terminate iterations on\ncluster center coordinates.\n"},
  {(char*)"Aggregate", PyvtkKMeansStatistics_Aggregate, 1,
   (char*)"V.Aggregate(vtkDataObjectCollection, vtkMultiBlockDataSet)\nC++: virtual void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *)\n\nGiven a collection of models, calculate aggregate model NB: not\nimplemented\n"},
  {(char*)"SetParameter", PyvtkKMeansStatistics_SetParameter, 1,
   (char*)"V.SetParameter(string, int, vtkVariant) -> bool\nC++: virtual bool SetParameter(const char *parameter, int index,\n    vtkVariant value)\n\nA convenience method for setting properties by name.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkKMeansStatistics_StaticNew()
{
  return vtkKMeansStatistics::New();
}

PyObject *PyVTKClass_vtkKMeansStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkKMeansStatistics_StaticNew,
    PyvtkKMeansStatistics_Methods,
    "vtkKMeansStatistics", modulename,
    NULL, NULL,
    PyvtkKMeansStatistics_Doc(),
    PyVTKClass_vtkStatisticsAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkKMeansStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkKMeansStatistics - A class for KMeans clustering\n\n",
    "Superclass: vtkStatisticsAlgorithm\n\n",
    "This class takes as input an optional vtkTable on port\nLEARN_PARAMETERS specifying initial  set(s) of cluster values of the\nfollowing form:\n\n\n          K     | Col1            |  ...    | ColN\n-----------+-----------------+---------+--------------- M    \n    |clustCoord(1, 1) |  ...    | clustCoord(1, N) M    \n    |clustCoord(2, 1) |  ...    | clustCoord(2, N) .     |       .   \n     |   .     |  ",
    "      . .     |       .         |   .     |       \n    . .     |       .         |   .     |        . M    \n    |clustCoord(M, 1) |  ...    | clustCoord(M, N) L    \n    |clustCoord(1, 1) |  ...    | clustCoord(1, N) L    \n    |clustCoord(2, 1) |  ...    | clustCoord(2, N) .     |       .   \n     |   .     |        . .     |       .         |   .     |       \n    . .     |       .         |   .    ",
    " |        . L    \n    |clustCoord(L, 1) |  ...    | clustCoord(L, N) \n\nBecause the desired value of K is often not known in advance and the\nresults of the algorithm are dependent on the initial cluster\ncenters, we provide a mechanism for the user to test multiple runs or\nsets of cluster centers within a single call to the Learn phase.  The\nfirst column of the table identifies the number of cluster",
    "s K in the\nparticular run (the entries in this column should be of type\nvtkIdType), while the remaining columns are a subset of the columns\ncontained in the table on port INPUT_DATA.  We require that all user\nspecified clusters be of the same dimension N and consequently, that\nthe LEARN_PARAMETERS table have N+1 columns. Due to this restriction,\nonly one request can be processed for each call to t",
    "he Learn phase\nand subsequent requests are silently ignored. Note that, if the first\ncolumn of the LEARN_PARAMETERS table is not of type vtkIdType, then\nthe table will be ignored and a single run will be performed using\nthe first DefaultNumberOfClusters input data observations as initial\ncluster centers.\n\nWhen the user does not supply an initial set of clusters, then the\nfirst DefaultNumberOfClust",
    "ers input data observations are used as\ninitial cluster centers and a single run is performed.\n\nThis class provides the following functionalities, depending on the\nmode it is executed in:\n* Learn: calculates new cluster centers for each run.  The output\n  metadata on port OUTPUT_MODEL is a multiblock dataset containing at\na minimum one vtkTable with columns specifying the following for each\nrun: t",
    "he run ID, number of clusters, number of iterations required\n  for convergence, total error associated with the cluster (sum of\n  squared Euclidean distance from each observation to its nearest\n  cluster center), the cardinality of the cluster, and the new\n  cluster coordinates.\n\n*Derive:  An additional vtkTable is stored in the multiblock dataset\n    output on port OUTPUT_MODEL. This table contai",
    "ns columns that\n    store for each run: the runID, number of clusters, total error\n    for all clusters in the run, local rank, and global rank. The\n    local rank is computed by comparing squared Euclidean errors of\n    all runs with the same number of clusters.  The global rank is\n    computed analagously across all runs.\n\n* Assess: This requires a multiblock dataset (as computed from Learn\n  an",
    "d Derive) on input port INPUT_MODEL and tabular data on input\n  port INPUT_DATA that contains column names matching those of the\n  tables on input port INPUT_MODEL. The assess mode reports the\n  closest cluster center and associated squared Euclidean distance of\neach observation in port INPUT_DATA's table to the cluster centers\n  for each run in the multiblock dataset provided on port\n  INPUT_MODE",
    "L.\n\nThe code can handle a wide variety of data types as it operates on\nvtkAbstractArrays and is not limited to vtkDataArrays.  A default\ndistance functor that computes the sum of the squares of the\nEuclidean distance between two objects is provided\n(vtkKMeansDistanceFunctor). The default distance functor can be\noverridden to use alternative distance metrics.\n\nThanks:\n\nThanks to Janine Bennett, Dav",
    "id Thompson, and Philippe Pebay of\nSandia National Laboratories for implementing this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkKMeansStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkKMeansStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkKMeansStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

