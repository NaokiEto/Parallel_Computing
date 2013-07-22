// python wrapper for vtkBivariateStatisticsAlgorithm
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
#include "vtkBivariateStatisticsAlgorithm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBivariateStatisticsAlgorithm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBivariateStatisticsAlgorithm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBivariateStatisticsAlgorithmNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBivariateStatisticsAlgorithmNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
#endif

static const char **PyvtkBivariateStatisticsAlgorithm_Doc();


static PyObject *
PyvtkBivariateStatisticsAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateStatisticsAlgorithm *op = static_cast<vtkBivariateStatisticsAlgorithm *>(vp);

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
      tempr = op->vtkBivariateStatisticsAlgorithm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateStatisticsAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateStatisticsAlgorithm *op = static_cast<vtkBivariateStatisticsAlgorithm *>(vp);

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
      tempr = op->vtkBivariateStatisticsAlgorithm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateStatisticsAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateStatisticsAlgorithm *op = static_cast<vtkBivariateStatisticsAlgorithm *>(vp);

  vtkBivariateStatisticsAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBivariateStatisticsAlgorithm::NewInstance();
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
PyvtkBivariateStatisticsAlgorithm_AddColumnPair(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumnPair");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateStatisticsAlgorithm *op = static_cast<vtkBivariateStatisticsAlgorithm *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddColumnPair(temp0, temp1);
      }
    else
      {
      op->vtkBivariateStatisticsAlgorithm::AddColumnPair(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBivariateStatisticsAlgorithm_RequestSelectedColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestSelectedColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBivariateStatisticsAlgorithm *op = static_cast<vtkBivariateStatisticsAlgorithm *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->RequestSelectedColumns();
      }
    else
      {
      tempr = op->vtkBivariateStatisticsAlgorithm::RequestSelectedColumns();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBivariateStatisticsAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkBivariateStatisticsAlgorithm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBivariateStatisticsAlgorithm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBivariateStatisticsAlgorithm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBivariateStatisticsAlgorithm\nC++: vtkBivariateStatisticsAlgorithm *NewInstance()\n\n"},
  {(char*)"AddColumnPair", PyvtkBivariateStatisticsAlgorithm_AddColumnPair, 1,
   (char*)"V.AddColumnPair(string, string)\nC++: void AddColumnPair(const char *namColX, const char *namColY)\n\nConvenience method to create a request with a single column name\npair\n ( namColX, namColY) in a single call; this is the preferred\nmethod to select columns pairs, ensuring selection consistency (a\npair of columns per request).\n\nUnlike SetColumnStatus(), you need not call\nRequestSelectedColumns() after AddColumnPair().\n\nWarning: namColX and namColY are only checked for their validity\nas strings; no check is made that either are valid column names.\n"},
  {(char*)"RequestSelectedColumns", PyvtkBivariateStatisticsAlgorithm_RequestSelectedColumns, 1,
   (char*)"V.RequestSelectedColumns() -> int\nC++: virtual int RequestSelectedColumns()\n\nUse the current column status values to produce a new request for\nstatistics to be produced when RequestData() is called. Unlike\nthe superclass implementation, this version adds a new request\nfor every possible pairing of the selected columns instead of a\nsingle request containing all the columns.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkBivariateStatisticsAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkBivariateStatisticsAlgorithm_Methods,
    "vtkBivariateStatisticsAlgorithm", modulename,
    NULL, NULL,
    PyvtkBivariateStatisticsAlgorithm_Doc(),
    PyVTKClass_vtkStatisticsAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkBivariateStatisticsAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkBivariateStatistics - Base class for bivariate statistics \n\n",
    "Superclass: vtkStatisticsAlgorithm\n\n",
    "This class specializes statistics algorithms to the bivariate case,\nwhere a number of pairs of columns of interest can be selected in the\ninput data set. This is done by the means of the following functions:\n\nResetColumns() - reset the list of columns of interest.\nAdd/RemoveColum( namColX, namColY ) - try to add/remove column pair (\nnamColX, namColy ) to/from the list. SetColumnStatus ( namCol, st",
    "atus\n) - mostly for UI wrapping purposes, try to add/remove (depending on\nstatus) namCol from a list of buffered columns, from which all\npossible pairs are generated. The verb \"try\" is used in the sense\nthat neither attempting to repeat an existing entry nor to remove a\nnon-existent entry will work.\n\nThanks:\n\nThanks to Philippe Pebay and David Thompson from Sandia National\nLaboratories for impleme",
    "nting this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBivariateStatisticsAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBivariateStatisticsAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBivariateStatisticsAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

