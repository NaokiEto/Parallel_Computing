// python wrapper for vtkShrinkFilter
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
#include "vtkShrinkFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkShrinkFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkShrinkFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkShrinkFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkShrinkFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkShrinkFilter_Doc();


static PyObject *
PyvtkShrinkFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

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
      tempr = op->vtkShrinkFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

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
      tempr = op->vtkShrinkFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  vtkShrinkFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkShrinkFilter::NewInstance();
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
PyvtkShrinkFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkShrinkFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkShrinkFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkFilter_SetShrinkFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShrinkFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShrinkFactor(temp0);
      }
    else
      {
      op->vtkShrinkFilter::SetShrinkFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkFilter_GetShrinkFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShrinkFactorMinValue();
      }
    else
      {
      tempr = op->vtkShrinkFilter::GetShrinkFactorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkFilter_GetShrinkFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShrinkFactorMaxValue();
      }
    else
      {
      tempr = op->vtkShrinkFilter::GetShrinkFactorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkShrinkFilter_GetShrinkFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShrinkFilter *op = static_cast<vtkShrinkFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShrinkFactor();
      }
    else
      {
      tempr = op->vtkShrinkFilter::GetShrinkFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkShrinkFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkShrinkFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkShrinkFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkShrinkFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkShrinkFilter\nC++: vtkShrinkFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkShrinkFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkShrinkFilter\nC++: vtkShrinkFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetShrinkFactor", PyvtkShrinkFilter_SetShrinkFactor, 1,
   (char*)"V.SetShrinkFactor(float)\nC++: void SetShrinkFactor(double)\n\nGet/Set the fraction of shrink for each cell. The default is 0.5.\n"},
  {(char*)"GetShrinkFactorMinValue", PyvtkShrinkFilter_GetShrinkFactorMinValue, 1,
   (char*)"V.GetShrinkFactorMinValue() -> float\nC++: double GetShrinkFactorMinValue()\n\nGet/Set the fraction of shrink for each cell. The default is 0.5.\n"},
  {(char*)"GetShrinkFactorMaxValue", PyvtkShrinkFilter_GetShrinkFactorMaxValue, 1,
   (char*)"V.GetShrinkFactorMaxValue() -> float\nC++: double GetShrinkFactorMaxValue()\n\nGet/Set the fraction of shrink for each cell. The default is 0.5.\n"},
  {(char*)"GetShrinkFactor", PyvtkShrinkFilter_GetShrinkFactor, 1,
   (char*)"V.GetShrinkFactor() -> float\nC++: double GetShrinkFactor()\n\nGet/Set the fraction of shrink for each cell. The default is 0.5.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkShrinkFilter_StaticNew()
{
  return vtkShrinkFilter::New();
}

PyObject *PyVTKClass_vtkShrinkFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkShrinkFilter_StaticNew,
    PyvtkShrinkFilter_Methods,
    "vtkShrinkFilter", modulename,
    NULL, NULL,
    PyvtkShrinkFilter_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkShrinkFilter_Doc()
{
  static const char *docstring[] = {
    "vtkShrinkFilter - shrink cells composing an arbitrary data set\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkShrinkFilter shrinks cells composing an arbitrary data set towards\ntheir centroid. The centroid of a cell is computed as the average\nposition of the cell points. Shrinking results in disconnecting the\ncells from one another. The output of this filter is of general\ndataset type vtkUnstructuredGrid.\n\nCaveats:\n\nIt is possible to turn cells inside out or cause self intersection in\nspecial cases.\n\nS",
    "ee Also:\n\nvtkShrinkPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkShrinkFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkShrinkFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkShrinkFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

