// python wrapper for vtkGraphLayoutStrategy
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
#include "vtkGraphLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGraphLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGraphLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGraphLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGraphLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGraphLayoutStrategy_Doc();


static PyObject *
PyvtkGraphLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutStrategy *op = static_cast<vtkGraphLayoutStrategy *>(vp);

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
      tempr = op->vtkGraphLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutStrategy *op = static_cast<vtkGraphLayoutStrategy *>(vp);

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
      tempr = op->vtkGraphLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutStrategy *op = static_cast<vtkGraphLayoutStrategy *>(vp);

  vtkGraphLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGraphLayoutStrategy::NewInstance();
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
PyvtkGraphLayoutStrategy_SetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutStrategy *op = static_cast<vtkGraphLayoutStrategy *>(vp);

  vtkGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    if (ap.IsBound())
      {
      op->SetGraph(temp0);
      }
    else
      {
      op->vtkGraphLayoutStrategy::SetGraph(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutStrategy_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutStrategy *op = static_cast<vtkGraphLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkGraphLayoutStrategy::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutStrategy *op = static_cast<vtkGraphLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Layout();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutStrategy_IsLayoutComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLayoutComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutStrategy *op = static_cast<vtkGraphLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsLayoutComplete();
      }
    else
      {
      tempr = op->vtkGraphLayoutStrategy::IsLayoutComplete();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutStrategy_SetWeightEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeightEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutStrategy *op = static_cast<vtkGraphLayoutStrategy *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWeightEdges(temp0);
      }
    else
      {
      op->vtkGraphLayoutStrategy::SetWeightEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutStrategy_GetWeightEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeightEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutStrategy *op = static_cast<vtkGraphLayoutStrategy *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWeightEdges();
      }
    else
      {
      tempr = op->vtkGraphLayoutStrategy::GetWeightEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutStrategy_SetEdgeWeightField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWeightField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutStrategy *op = static_cast<vtkGraphLayoutStrategy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeWeightField(temp0);
      }
    else
      {
      op->vtkGraphLayoutStrategy::SetEdgeWeightField(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphLayoutStrategy_GetEdgeWeightField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWeightField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutStrategy *op = static_cast<vtkGraphLayoutStrategy *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeWeightField();
      }
    else
      {
      tempr = op->vtkGraphLayoutStrategy::GetEdgeWeightField();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGraphLayoutStrategy\nC++: vtkGraphLayoutStrategy *NewInstance()\n\n"},
  {(char*)"SetGraph", PyvtkGraphLayoutStrategy_SetGraph, 1,
   (char*)"V.SetGraph(vtkGraph)\nC++: virtual void SetGraph(vtkGraph *graph)\n\nSetting the graph for the layout strategy\n"},
  {(char*)"Initialize", PyvtkGraphLayoutStrategy_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nThis method allows the layout strategy to do initialization of\ndata structures or whatever else it might want to do.\n"},
  {(char*)"Layout", PyvtkGraphLayoutStrategy_Layout, 1,
   (char*)"V.Layout()\nC++: virtual void Layout()\n\nThis is the layout method where the graph that was set in\nSetGraph() is laid out. The method can either entirely layout the\ngraph or iteratively lay out the graph. If you have an iterative\nlayout please implement the IsLayoutComplete() method.\n"},
  {(char*)"IsLayoutComplete", PyvtkGraphLayoutStrategy_IsLayoutComplete, 1,
   (char*)"V.IsLayoutComplete() -> int\nC++: virtual int IsLayoutComplete()\n\nIf your concrete class is iterative than you should overload\nIsLayoutComplete() otherwise it simply returns 1 by default;\n"},
  {(char*)"SetWeightEdges", PyvtkGraphLayoutStrategy_SetWeightEdges, 1,
   (char*)"V.SetWeightEdges(bool)\nC++: virtual void SetWeightEdges(bool state)\n\nWhether to use edge weights in the layout or not.\n"},
  {(char*)"GetWeightEdges", PyvtkGraphLayoutStrategy_GetWeightEdges, 1,
   (char*)"V.GetWeightEdges() -> bool\nC++: bool GetWeightEdges()\n\nWhether to use edge weights in the layout or not.\n"},
  {(char*)"SetEdgeWeightField", PyvtkGraphLayoutStrategy_SetEdgeWeightField, 1,
   (char*)"V.SetEdgeWeightField(string)\nC++: virtual void SetEdgeWeightField(const char *field)\n\nSet/Get the field to use for the edge weights.\n"},
  {(char*)"GetEdgeWeightField", PyvtkGraphLayoutStrategy_GetEdgeWeightField, 1,
   (char*)"V.GetEdgeWeightField() -> string\nC++: char *GetEdgeWeightField()\n\nSet/Get the field to use for the edge weights.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGraphLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGraphLayoutStrategy_Methods,
    "vtkGraphLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkGraphLayoutStrategy_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGraphLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkGraphLayoutStrategy - abstract superclass for all graph layout\nstrategies\n\n",
    "Superclass: vtkObject\n\n",
    "All graph layouts should subclass from this class. \nvtkGraphLayoutStrategy works as a plug-in to the vtkGraphLayout\nalgorithm.  The Layout() function should perform some reasonable\n\"chunk\" of the layout. This allows the user to be able to see the\nprogress of the layout. Use IsLayoutComplete() to tell the user when\nthere is no more layout to perform.\n\nThanks:\n\nThanks to Brian Wylie from Sandia Nati",
    "onal Laboratories for adding\nincremental layout capabilities.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

