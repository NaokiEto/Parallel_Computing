// python wrapper for vtkThresholdGraph
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
#include "vtkThresholdGraph.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkThresholdGraph(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkThresholdGraph(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkThresholdGraphNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkThresholdGraphNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkThresholdGraph_Doc();


static PyObject *
PyvtkThresholdGraph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdGraph *op = static_cast<vtkThresholdGraph *>(vp);

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
      tempr = op->vtkThresholdGraph::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdGraph *op = static_cast<vtkThresholdGraph *>(vp);

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
      tempr = op->vtkThresholdGraph::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdGraph *op = static_cast<vtkThresholdGraph *>(vp);

  vtkThresholdGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkThresholdGraph::NewInstance();
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
PyvtkThresholdGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkThresholdGraph *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkThresholdGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdGraph_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdGraph *op = static_cast<vtkThresholdGraph *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLowerThreshold();
      }
    else
      {
      tempr = op->vtkThresholdGraph::GetLowerThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdGraph_SetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdGraph *op = static_cast<vtkThresholdGraph *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLowerThreshold(temp0);
      }
    else
      {
      op->vtkThresholdGraph::SetLowerThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdGraph_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdGraph *op = static_cast<vtkThresholdGraph *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpperThreshold();
      }
    else
      {
      tempr = op->vtkThresholdGraph::GetUpperThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdGraph_SetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdGraph *op = static_cast<vtkThresholdGraph *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUpperThreshold(temp0);
      }
    else
      {
      op->vtkThresholdGraph::SetUpperThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkThresholdGraph_Methods[] = {
  {(char*)"GetClassName", PyvtkThresholdGraph_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkThresholdGraph_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkThresholdGraph_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkThresholdGraph\nC++: vtkThresholdGraph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkThresholdGraph_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkThresholdGraph\nC++: vtkThresholdGraph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetLowerThreshold", PyvtkThresholdGraph_GetLowerThreshold, 1,
   (char*)"V.GetLowerThreshold() -> float\nC++: double GetLowerThreshold()\n\nGet/Set lower threshold. This would be the value against which\nedge or vertex data array value will be compared.\n"},
  {(char*)"SetLowerThreshold", PyvtkThresholdGraph_SetLowerThreshold, 1,
   (char*)"V.SetLowerThreshold(float)\nC++: void SetLowerThreshold(double a)\n\nGet/Set lower threshold. This would be the value against which\nedge or vertex data array value will be compared.\n"},
  {(char*)"GetUpperThreshold", PyvtkThresholdGraph_GetUpperThreshold, 1,
   (char*)"V.GetUpperThreshold() -> float\nC++: double GetUpperThreshold()\n\nGet/Set upper threshold. This would be the value against which\nedge or vertex data array value will be compared.\n"},
  {(char*)"SetUpperThreshold", PyvtkThresholdGraph_SetUpperThreshold, 1,
   (char*)"V.SetUpperThreshold(float)\nC++: void SetUpperThreshold(double a)\n\nGet/Set upper threshold. This would be the value against which\nedge or vertex data array value will be compared.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkThresholdGraph_StaticNew()
{
  return vtkThresholdGraph::New();
}

PyObject *PyVTKClass_vtkThresholdGraphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkThresholdGraph_StaticNew,
    PyvtkThresholdGraph_Methods,
    "vtkThresholdGraph", modulename,
    NULL, NULL,
    PyvtkThresholdGraph_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkThresholdGraph_Doc()
{
  static const char *docstring[] = {
    "vtkThresholdGraph - Returns a subgraph of a vtkGraph.\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "Requires input array, lower and upper threshold. This filter than\nextracts the subgraph based on these three parameters.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkThresholdGraph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkThresholdGraphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkThresholdGraph", o) != 0)
    {
    Py_DECREF(o);
    }

}

