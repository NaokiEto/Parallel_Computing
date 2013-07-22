// python wrapper for vtkReebGraphSimplificationFilter
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
#include "vtkReebGraphSimplificationFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkReebGraphSimplificationFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkReebGraphSimplificationFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkReebGraphSimplificationFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkReebGraphSimplificationFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDirectedGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDirectedGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDirectedGraphAlgorithmNew
#endif

static const char **PyvtkReebGraphSimplificationFilter_Doc();


static PyObject *
PyvtkReebGraphSimplificationFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationFilter *op = static_cast<vtkReebGraphSimplificationFilter *>(vp);

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
      tempr = op->vtkReebGraphSimplificationFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationFilter *op = static_cast<vtkReebGraphSimplificationFilter *>(vp);

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
      tempr = op->vtkReebGraphSimplificationFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationFilter *op = static_cast<vtkReebGraphSimplificationFilter *>(vp);

  vtkReebGraphSimplificationFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkReebGraphSimplificationFilter::NewInstance();
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
PyvtkReebGraphSimplificationFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkReebGraphSimplificationFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkReebGraphSimplificationFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationFilter_SetSimplificationThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSimplificationThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationFilter *op = static_cast<vtkReebGraphSimplificationFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSimplificationThreshold(temp0);
      }
    else
      {
      op->vtkReebGraphSimplificationFilter::SetSimplificationThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationFilter_GetSimplificationThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSimplificationThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationFilter *op = static_cast<vtkReebGraphSimplificationFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSimplificationThreshold();
      }
    else
      {
      tempr = op->vtkReebGraphSimplificationFilter::GetSimplificationThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationFilter_SetSimplificationMetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSimplificationMetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationFilter *op = static_cast<vtkReebGraphSimplificationFilter *>(vp);

  vtkReebGraphSimplificationMetric *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkReebGraphSimplificationMetric"))
    {
    if (ap.IsBound())
      {
      op->SetSimplificationMetric(temp0);
      }
    else
      {
      op->vtkReebGraphSimplificationFilter::SetSimplificationMetric(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReebGraphSimplificationFilter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReebGraphSimplificationFilter *op = static_cast<vtkReebGraphSimplificationFilter *>(vp);

  vtkReebGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkReebGraphSimplificationFilter::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkReebGraphSimplificationFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkReebGraphSimplificationFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkReebGraphSimplificationFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkReebGraphSimplificationFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkReebGraphSimplificationFilter\nC++: vtkReebGraphSimplificationFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkReebGraphSimplificationFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkReebGraphSimplificationFilter\nC++: vtkReebGraphSimplificationFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSimplificationThreshold", PyvtkReebGraphSimplificationFilter_SetSimplificationThreshold, 1,
   (char*)"V.SetSimplificationThreshold(float)\nC++: void SetSimplificationThreshold(double a)\n\nSet the persistence threshold for simplification (from 0 to 1).\nDefault value: 0 (no simplification).\n"},
  {(char*)"GetSimplificationThreshold", PyvtkReebGraphSimplificationFilter_GetSimplificationThreshold, 1,
   (char*)"V.GetSimplificationThreshold() -> float\nC++: double GetSimplificationThreshold()\n\nSet the persistence threshold for simplification (from 0 to 1).\nDefault value: 0 (no simplification).\n"},
  {(char*)"SetSimplificationMetric", PyvtkReebGraphSimplificationFilter_SetSimplificationMetric, 1,
   (char*)"V.SetSimplificationMetric(vtkReebGraphSimplificationMetric)\nC++: void SetSimplificationMetric(\n    vtkReebGraphSimplificationMetric *metric)\n\nSet the persistence metric evaluation code Default value: NULL\n(standard topological persistence).\n"},
  {(char*)"GetOutput", PyvtkReebGraphSimplificationFilter_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkReebGraph\nC++: vtkReebGraph *GetOutput()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkReebGraphSimplificationFilter_StaticNew()
{
  return vtkReebGraphSimplificationFilter::New();
}

PyObject *PyVTKClass_vtkReebGraphSimplificationFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkReebGraphSimplificationFilter_StaticNew,
    PyvtkReebGraphSimplificationFilter_Methods,
    "vtkReebGraphSimplificationFilter", modulename,
    NULL, NULL,
    PyvtkReebGraphSimplificationFilter_Doc(),
    PyVTKClass_vtkDirectedGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkReebGraphSimplificationFilter_Doc()
{
  static const char *docstring[] = {
    "vtkReebGraphSimplificationFilter - simplify an input Reeb graph.\n\n",
    "Superclass: vtkDirectedGraphAlgorithm\n\n",
    "The filter takes an input vtkReebGraph object and outputs a\nvtkReebGraph object.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkReebGraphSimplificationFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkReebGraphSimplificationFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkReebGraphSimplificationFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

