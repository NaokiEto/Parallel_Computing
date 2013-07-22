// python wrapper for vtkStreamGraph
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
#include "vtkStreamGraph.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStreamGraph(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStreamGraph(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStreamGraphNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStreamGraphNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkStreamGraph_Doc();


static PyObject *
PyvtkStreamGraph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

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
      tempr = op->vtkStreamGraph::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

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
      tempr = op->vtkStreamGraph::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  vtkStreamGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStreamGraph::NewInstance();
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
PyvtkStreamGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStreamGraph *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStreamGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_SetUseEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseEdgeWindow(temp0);
      }
    else
      {
      op->vtkStreamGraph::SetUseEdgeWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_GetUseEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseEdgeWindow();
      }
    else
      {
      tempr = op->vtkStreamGraph::GetUseEdgeWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_UseEdgeWindowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeWindowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseEdgeWindowOn();
      }
    else
      {
      op->vtkStreamGraph::UseEdgeWindowOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_UseEdgeWindowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeWindowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseEdgeWindowOff();
      }
    else
      {
      op->vtkStreamGraph::UseEdgeWindowOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_SetEdgeWindowArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWindowArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeWindowArrayName(temp0);
      }
    else
      {
      op->vtkStreamGraph::SetEdgeWindowArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_GetEdgeWindowArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWindowArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeWindowArrayName();
      }
    else
      {
      tempr = op->vtkStreamGraph::GetEdgeWindowArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_SetEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeWindow(temp0);
      }
    else
      {
      op->vtkStreamGraph::SetEdgeWindow(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamGraph_GetEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeWindow();
      }
    else
      {
      tempr = op->vtkStreamGraph::GetEdgeWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamGraph_Methods[] = {
  {(char*)"GetClassName", PyvtkStreamGraph_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStreamGraph_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStreamGraph_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStreamGraph\nC++: vtkStreamGraph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStreamGraph_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStreamGraph\nC++: vtkStreamGraph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetUseEdgeWindow", PyvtkStreamGraph_SetUseEdgeWindow, 1,
   (char*)"V.SetUseEdgeWindow(bool)\nC++: void SetUseEdgeWindow(bool a)\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {(char*)"GetUseEdgeWindow", PyvtkStreamGraph_GetUseEdgeWindow, 1,
   (char*)"V.GetUseEdgeWindow() -> bool\nC++: bool GetUseEdgeWindow()\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {(char*)"UseEdgeWindowOn", PyvtkStreamGraph_UseEdgeWindowOn, 1,
   (char*)"V.UseEdgeWindowOn()\nC++: void UseEdgeWindowOn()\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {(char*)"UseEdgeWindowOff", PyvtkStreamGraph_UseEdgeWindowOff, 1,
   (char*)"V.UseEdgeWindowOff()\nC++: void UseEdgeWindowOff()\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {(char*)"SetEdgeWindowArrayName", PyvtkStreamGraph_SetEdgeWindowArrayName, 1,
   (char*)"V.SetEdgeWindowArrayName(string)\nC++: void SetEdgeWindowArrayName(char *)\n\nThe edge window array. The default array name is \"time\".\n"},
  {(char*)"GetEdgeWindowArrayName", PyvtkStreamGraph_GetEdgeWindowArrayName, 1,
   (char*)"V.GetEdgeWindowArrayName() -> string\nC++: char *GetEdgeWindowArrayName()\n\nThe edge window array. The default array name is \"time\".\n"},
  {(char*)"SetEdgeWindow", PyvtkStreamGraph_SetEdgeWindow, 1,
   (char*)"V.SetEdgeWindow(float)\nC++: void SetEdgeWindow(double a)\n\nThe time window amount. Edges with values lower than the maximum\nvalue minus this window will be removed from the graph. The\ndefault edge window is 10000.\n"},
  {(char*)"GetEdgeWindow", PyvtkStreamGraph_GetEdgeWindow, 1,
   (char*)"V.GetEdgeWindow() -> float\nC++: double GetEdgeWindow()\n\nThe time window amount. Edges with values lower than the maximum\nvalue minus this window will be removed from the graph. The\ndefault edge window is 10000.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStreamGraph_StaticNew()
{
  return vtkStreamGraph::New();
}

PyObject *PyVTKClass_vtkStreamGraphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStreamGraph_StaticNew,
    PyvtkStreamGraph_Methods,
    "vtkStreamGraph", modulename,
    NULL, NULL,
    PyvtkStreamGraph_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkStreamGraph_Doc()
{
  static const char *docstring[] = {
    "vtkStreamGraph - combines two graphs\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "vtkStreamGraph iteratively collects information from the input graph\nand combines it in the output graph. It internally maintains a graph\ninstance that is incrementally updated every time the filter is\ncalled.\n\nEach update, vtkMergeGraphs is used to combine this filter's input\nwith the internal graph.\n\nIf you can use an edge window array to filter out old edges based on\na moving threshold.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStreamGraph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStreamGraphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStreamGraph", o) != 0)
    {
    Py_DECREF(o);
    }

}

