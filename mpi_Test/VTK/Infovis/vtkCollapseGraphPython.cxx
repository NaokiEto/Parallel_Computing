// python wrapper for vtkCollapseGraph
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
#include "vtkCollapseGraph.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCollapseGraph(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCollapseGraph(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCollapseGraphNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCollapseGraphNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphAlgorithmNew
#endif

static const char **PyvtkCollapseGraph_Doc();


static PyObject *
PyvtkCollapseGraph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseGraph *op = static_cast<vtkCollapseGraph *>(vp);

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
      tempr = op->vtkCollapseGraph::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseGraph *op = static_cast<vtkCollapseGraph *>(vp);

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
      tempr = op->vtkCollapseGraph::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseGraph *op = static_cast<vtkCollapseGraph *>(vp);

  vtkCollapseGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCollapseGraph::NewInstance();
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
PyvtkCollapseGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCollapseGraph *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCollapseGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseGraph_SetGraphConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseGraph *op = static_cast<vtkCollapseGraph *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetGraphConnection(temp0);
      }
    else
      {
      op->vtkCollapseGraph::SetGraphConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollapseGraph_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseGraph *op = static_cast<vtkCollapseGraph *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionConnection(temp0);
      }
    else
      {
      op->vtkCollapseGraph::SetSelectionConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCollapseGraph_Methods[] = {
  {(char*)"GetClassName", PyvtkCollapseGraph_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCollapseGraph_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCollapseGraph_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCollapseGraph\nC++: vtkCollapseGraph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCollapseGraph_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCollapseGraph\nC++: vtkCollapseGraph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGraphConnection", PyvtkCollapseGraph_SetGraphConnection, 1,
   (char*)"V.SetGraphConnection(vtkAlgorithmOutput)\nC++: void SetGraphConnection(vtkAlgorithmOutput *)\n\n"},
  {(char*)"SetSelectionConnection", PyvtkCollapseGraph_SetSelectionConnection, 1,
   (char*)"V.SetSelectionConnection(vtkAlgorithmOutput)\nC++: void SetSelectionConnection(vtkAlgorithmOutput *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCollapseGraph_StaticNew()
{
  return vtkCollapseGraph::New();
}

PyObject *PyVTKClass_vtkCollapseGraphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCollapseGraph_StaticNew,
    PyvtkCollapseGraph_Methods,
    "vtkCollapseGraph", modulename,
    NULL, NULL,
    PyvtkCollapseGraph_Doc(),
    PyVTKClass_vtkGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCollapseGraph_Doc()
{
  static const char *docstring[] = {
    "vtkCollapseGraph - \"Collapses\" vertices onto their neighbors.\n\n",
    "Superclass: vtkGraphAlgorithm\n\n",
    "vtkCollapseGraph \"collapses\" vertices onto their neighbors, while\nmaintaining connectivity.  Two inputs are required - a graph\n(directed or undirected), and a vertex selection that can be\nconverted to indices.\n\nConceptually, each of the vertices specified in the input selection\nexpands, \"swallowing\" adacent vertices.  Edges to-or-from the\n\"swallowed\" vertices become edges to-or-from the expanding ",
    "vertices,\nmaintaining the overall graph connectivity.\n\nIn the case of directed graphs, expanding vertices only swallow\nvertices that are connected via out edges.  This rule provides\nintuitive behavior when working with trees, so that \"child\" vertices\ncollapse into their parents when the parents are part of the input\nselection.\n\nInput port 0: graph Input port 1: selection\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCollapseGraph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCollapseGraphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCollapseGraph", o) != 0)
    {
    Py_DECREF(o);
    }

}

