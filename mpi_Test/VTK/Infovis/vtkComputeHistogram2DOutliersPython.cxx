// python wrapper for vtkComputeHistogram2DOutliers
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
#include "vtkComputeHistogram2DOutliers.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkComputeHistogram2DOutliers(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkComputeHistogram2DOutliers(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkComputeHistogram2DOutliersNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkComputeHistogram2DOutliersNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkSelectionAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
#endif

static const char **PyvtkComputeHistogram2DOutliers_Doc();


static PyObject *
PyvtkComputeHistogram2DOutliers_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

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
      tempr = op->vtkComputeHistogram2DOutliers::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

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
      tempr = op->vtkComputeHistogram2DOutliers::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  vtkComputeHistogram2DOutliers *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkComputeHistogram2DOutliers::NewInstance();
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
PyvtkComputeHistogram2DOutliers_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkComputeHistogram2DOutliers *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkComputeHistogram2DOutliers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_SetPreferredNumberOfOutliers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreferredNumberOfOutliers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreferredNumberOfOutliers(temp0);
      }
    else
      {
      op->vtkComputeHistogram2DOutliers::SetPreferredNumberOfOutliers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_GetPreferredNumberOfOutliers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreferredNumberOfOutliers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPreferredNumberOfOutliers();
      }
    else
      {
      tempr = op->vtkComputeHistogram2DOutliers::GetPreferredNumberOfOutliers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_GetOutputTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  vtkTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputTable();
      }
    else
      {
      tempr = op->vtkComputeHistogram2DOutliers::GetOutputTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_SetInputTableConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputTableConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputTableConnection(temp0);
      }
    else
      {
      op->vtkComputeHistogram2DOutliers::SetInputTableConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_SetInputHistogramImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputHistogramImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputHistogramImageDataConnection(temp0);
      }
    else
      {
      op->vtkComputeHistogram2DOutliers::SetInputHistogramImageDataConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_SetInputHistogramMultiBlockConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputHistogramMultiBlockConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetInputHistogramMultiBlockConnection(temp0);
      }
    else
      {
      op->vtkComputeHistogram2DOutliers::SetInputHistogramMultiBlockConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkComputeHistogram2DOutliers_Methods[] = {
  {(char*)"GetClassName", PyvtkComputeHistogram2DOutliers_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkComputeHistogram2DOutliers_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkComputeHistogram2DOutliers_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkComputeHistogram2DOutliers\nC++: vtkComputeHistogram2DOutliers *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkComputeHistogram2DOutliers_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkComputeHistogram2DOutliers\nC++: vtkComputeHistogram2DOutliers *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPreferredNumberOfOutliers", PyvtkComputeHistogram2DOutliers_SetPreferredNumberOfOutliers, 1,
   (char*)"V.SetPreferredNumberOfOutliers(int)\nC++: void SetPreferredNumberOfOutliers(int a)\n\n"},
  {(char*)"GetPreferredNumberOfOutliers", PyvtkComputeHistogram2DOutliers_GetPreferredNumberOfOutliers, 1,
   (char*)"V.GetPreferredNumberOfOutliers() -> int\nC++: int GetPreferredNumberOfOutliers()\n\n"},
  {(char*)"GetOutputTable", PyvtkComputeHistogram2DOutliers_GetOutputTable, 1,
   (char*)"V.GetOutputTable() -> vtkTable\nC++: vtkTable *GetOutputTable()\n\n"},
  {(char*)"SetInputTableConnection", PyvtkComputeHistogram2DOutliers_SetInputTableConnection, 1,
   (char*)"V.SetInputTableConnection(vtkAlgorithmOutput)\nC++: void SetInputTableConnection(vtkAlgorithmOutput *cxn)\n\nSet the source table data, from which data will be filtered.\n"},
  {(char*)"SetInputHistogramImageDataConnection", PyvtkComputeHistogram2DOutliers_SetInputHistogramImageDataConnection, 1,
   (char*)"V.SetInputHistogramImageDataConnection(vtkAlgorithmOutput)\nC++: void SetInputHistogramImageDataConnection(\n    vtkAlgorithmOutput *cxn)\n\nSet the input histogram data as a (repeatable) vtkImageData\n"},
  {(char*)"SetInputHistogramMultiBlockConnection", PyvtkComputeHistogram2DOutliers_SetInputHistogramMultiBlockConnection, 1,
   (char*)"V.SetInputHistogramMultiBlockConnection(vtkAlgorithmOutput)\nC++: void SetInputHistogramMultiBlockConnection(\n    vtkAlgorithmOutput *cxn)\n\nSet the input histogram data as a vtkMultiBlockData set\ncontaining multiple vtkImageData objects.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkComputeHistogram2DOutliers_StaticNew()
{
  return vtkComputeHistogram2DOutliers::New();
}

PyObject *PyVTKClass_vtkComputeHistogram2DOutliersNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkComputeHistogram2DOutliers_StaticNew,
    PyvtkComputeHistogram2DOutliers_Methods,
    "vtkComputeHistogram2DOutliers", modulename,
    NULL, NULL,
    PyvtkComputeHistogram2DOutliers_Doc(),
    PyVTKClass_vtkSelectionAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"INPUT_TABLE_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"INPUT_HISTOGRAMS_IMAGE_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"INPUT_HISTOGRAMS_MULTIBLOCK", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"OUTPUT_SELECTED_ROWS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"OUTPUT_SELECTED_TABLE_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkComputeHistogram2DOutliers_Doc()
{
  static const char *docstring[] = {
    "vtkComputeHistogram2DOutliers - compute the outliers in a set\n\n",
    "Superclass: vtkSelectionAlgorithm\n\n",
    "This class takes a table and one or more vtkImageData histograms as\ninput\n and computes the outliers in that data.  In general it does so by\n identifying histogram bins that are removed by a median (salt and\npepper)\n filter and below a threshold.  This threshold is automatically\nidentified\n to retrieve a number of outliers close to a user-determined value. \nThis\n value is set by calling SetPreferr",
    "edNumberOfOutliers(int).\n\n\n The image data input can come either as a multiple vtkImageData via\nthe\n repeatable INPUT_HISTOGRAM_IMAGE_DATA port, or as a single\n vtkMultiBlockDataSet containing vtkImageData objects as blocks.  One\n or the other must be set, not both (or neither).\n\n\n The output can be retrieved as a set of row ids in a vtkSelection or\n as a vtkTable containing the actual outlier row",
    " data.\n\nSee Also:\n\n\n vtkExtractHistogram2D vtkPComputeHistogram2DOutliers\n\nThanks:\n\n\n Developed by David Feng at Sandia National Laboratories\n----------------------------------------------------------------------\n    --------\n----------------------------------------------------------------------\n    --------\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkComputeHistogram2DOutliers(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkComputeHistogram2DOutliersNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkComputeHistogram2DOutliers", o) != 0)
    {
    Py_DECREF(o);
    }

}

