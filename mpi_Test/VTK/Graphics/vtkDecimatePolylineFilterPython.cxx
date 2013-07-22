// python wrapper for vtkDecimatePolylineFilter
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
#include "vtkDecimatePolylineFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDecimatePolylineFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDecimatePolylineFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDecimatePolylineFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDecimatePolylineFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkDecimatePolylineFilter_Doc();


static PyObject *
PyvtkDecimatePolylineFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

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
      tempr = op->vtkDecimatePolylineFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

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
      tempr = op->vtkDecimatePolylineFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  vtkDecimatePolylineFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDecimatePolylineFilter::NewInstance();
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
PyvtkDecimatePolylineFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDecimatePolylineFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDecimatePolylineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_SetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTargetReduction(temp0);
      }
    else
      {
      op->vtkDecimatePolylineFilter::SetTargetReduction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetTargetReductionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTargetReductionMinValue();
      }
    else
      {
      tempr = op->vtkDecimatePolylineFilter::GetTargetReductionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetTargetReductionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTargetReductionMaxValue();
      }
    else
      {
      tempr = op->vtkDecimatePolylineFilter::GetTargetReductionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDecimatePolylineFilter_GetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePolylineFilter *op = static_cast<vtkDecimatePolylineFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTargetReduction();
      }
    else
      {
      tempr = op->vtkDecimatePolylineFilter::GetTargetReduction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDecimatePolylineFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkDecimatePolylineFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for type information and printing.\n"},
  {(char*)"IsA", PyvtkDecimatePolylineFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for type information and printing.\n"},
  {(char*)"NewInstance", PyvtkDecimatePolylineFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDecimatePolylineFilter\nC++: vtkDecimatePolylineFilter *NewInstance()\n\nStandard methods for type information and printing.\n"},
  {(char*)"SafeDownCast", PyvtkDecimatePolylineFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDecimatePolylineFilter\nC++: vtkDecimatePolylineFilter *SafeDownCast(vtkObject* o)\n\nStandard methods for type information and printing.\n"},
  {(char*)"SetTargetReduction", PyvtkDecimatePolylineFilter_SetTargetReduction, 1,
   (char*)"V.SetTargetReduction(float)\nC++: void SetTargetReduction(double)\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size).\n"},
  {(char*)"GetTargetReductionMinValue", PyvtkDecimatePolylineFilter_GetTargetReductionMinValue, 1,
   (char*)"V.GetTargetReductionMinValue() -> float\nC++: double GetTargetReductionMinValue()\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size).\n"},
  {(char*)"GetTargetReductionMaxValue", PyvtkDecimatePolylineFilter_GetTargetReductionMaxValue, 1,
   (char*)"V.GetTargetReductionMaxValue() -> float\nC++: double GetTargetReductionMaxValue()\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size).\n"},
  {(char*)"GetTargetReduction", PyvtkDecimatePolylineFilter_GetTargetReduction, 1,
   (char*)"V.GetTargetReduction() -> float\nC++: double GetTargetReduction()\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDecimatePolylineFilter_StaticNew()
{
  return vtkDecimatePolylineFilter::New();
}

PyObject *PyVTKClass_vtkDecimatePolylineFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDecimatePolylineFilter_StaticNew,
    PyvtkDecimatePolylineFilter_Methods,
    "vtkDecimatePolylineFilter", modulename,
    NULL, NULL,
    PyvtkDecimatePolylineFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDecimatePolylineFilter_Doc()
{
  static const char *docstring[] = {
    "vtkDecimatePolylineFilter - reduce the number of lines in a polyline\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkDecimatePolylineFilter is a filter to reduce the number of lines\nin a polyline. The algorithm functions by evaluating an error metric\nfor each vertex (i.e., the distance of the vertex to a line defined\nfrom the two vertices on either side of the vertex). Then, these\nvertices are placed into a priority queue, and those with larger\nerrors are deleted first. The decimation continues until the targ",
    "et\nreduction is reached.\n\nCaveats:\n\nThis algorithm is a very simple implementation that overlooks some\npotential complexities. First, if a vertex is multiply connected,\nmeaning that it is used by multiple polylines, then the extra\ntopological constraints are ignored. Second, the error is not updated\nas vertices are deleted (similar to iteratively computing a quadric\nerror metric). Thus, once calcu",
    "lated, the error is used to determine\nwhich vertices are removed. This can produce less than optimal\nresults.\n\nSee Also:\n\nvtkDecimate vtkDecimateProp vtkQuadricClustering vtkQuadricDecimation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDecimatePolylineFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDecimatePolylineFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDecimatePolylineFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

