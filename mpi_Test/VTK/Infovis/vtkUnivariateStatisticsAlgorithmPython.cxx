// python wrapper for vtkUnivariateStatisticsAlgorithm
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
#include "vtkUnivariateStatisticsAlgorithm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnivariateStatisticsAlgorithm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnivariateStatisticsAlgorithm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnivariateStatisticsAlgorithmNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnivariateStatisticsAlgorithmNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStatisticsAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStatisticsAlgorithmNew
#endif

static const char **PyvtkUnivariateStatisticsAlgorithm_Doc();


static PyObject *
PyvtkUnivariateStatisticsAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnivariateStatisticsAlgorithm *op = static_cast<vtkUnivariateStatisticsAlgorithm *>(vp);

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
      tempr = op->vtkUnivariateStatisticsAlgorithm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnivariateStatisticsAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnivariateStatisticsAlgorithm *op = static_cast<vtkUnivariateStatisticsAlgorithm *>(vp);

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
      tempr = op->vtkUnivariateStatisticsAlgorithm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnivariateStatisticsAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnivariateStatisticsAlgorithm *op = static_cast<vtkUnivariateStatisticsAlgorithm *>(vp);

  vtkUnivariateStatisticsAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnivariateStatisticsAlgorithm::NewInstance();
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
PyvtkUnivariateStatisticsAlgorithm_AddColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnivariateStatisticsAlgorithm *op = static_cast<vtkUnivariateStatisticsAlgorithm *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddColumn(temp0);
      }
    else
      {
      op->vtkUnivariateStatisticsAlgorithm::AddColumn(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnivariateStatisticsAlgorithm_RequestSelectedColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestSelectedColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnivariateStatisticsAlgorithm *op = static_cast<vtkUnivariateStatisticsAlgorithm *>(vp);

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
      tempr = op->vtkUnivariateStatisticsAlgorithm::RequestSelectedColumns();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnivariateStatisticsAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkUnivariateStatisticsAlgorithm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnivariateStatisticsAlgorithm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnivariateStatisticsAlgorithm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnivariateStatisticsAlgorithm\nC++: vtkUnivariateStatisticsAlgorithm *NewInstance()\n\n"},
  {(char*)"AddColumn", PyvtkUnivariateStatisticsAlgorithm_AddColumn, 1,
   (char*)"V.AddColumn(string)\nC++: void AddColumn(const char *namCol)\n\nConvenience method to create a request with a single column name\nnamCol in a single call; this is the preferred method to select\ncolumns, ensuring selection consistency (a single column per\nrequest). Warning: no name checking is performed on namCol; it is\nthe user's responsibility to use valid column names.\n"},
  {(char*)"RequestSelectedColumns", PyvtkUnivariateStatisticsAlgorithm_RequestSelectedColumns, 1,
   (char*)"V.RequestSelectedColumns() -> int\nC++: virtual int RequestSelectedColumns()\n\nUse the current column status values to produce a new request for\nstatistics to be produced when RequestData() is called. Unlike\nthe superclass implementation, this version adds a new request\nfor each selected column instead of a single request containing\nall the columns.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkUnivariateStatisticsAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkUnivariateStatisticsAlgorithm_Methods,
    "vtkUnivariateStatisticsAlgorithm", modulename,
    NULL, NULL,
    PyvtkUnivariateStatisticsAlgorithm_Doc(),
    PyVTKClass_vtkStatisticsAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkUnivariateStatisticsAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkUnivariateStatistics - Base class for univariate statistics \n\n",
    "Superclass: vtkStatisticsAlgorithm\n\n",
    "This class specializes statistics algorithms to the univariate case,\nwhere a number of columns of interest can be selected in the input\ndata set. This is done by the means of the following functions:\n\nResetColumns() - reset the list of columns of interest.\nAdd/RemoveColum( namCol ) - try to add/remove column with name namCol\nto/from the list. SetColumnStatus ( namCol, status ) - mostly for UI\nwrap",
    "ping purposes, try to add/remove (depending on status) namCol\nfrom the list of columns of interest. The verb \"try\" is used in the\nsense that neither attempting to repeat an existing entry nor to\nremove a non-existent entry will work.\n\nThanks:\n\nThanks to Philippe Pebay and David Thompson from Sandia National\nLaboratories for implementing this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnivariateStatisticsAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnivariateStatisticsAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnivariateStatisticsAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

