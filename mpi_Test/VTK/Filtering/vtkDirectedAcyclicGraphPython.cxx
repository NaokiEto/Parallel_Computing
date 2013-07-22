// python wrapper for vtkDirectedAcyclicGraph
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
#include "vtkDirectedAcyclicGraph.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDirectedAcyclicGraph(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDirectedAcyclicGraph(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDirectedAcyclicGraphNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDirectedAcyclicGraphNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDirectedGraphNew
extern "C" { PyObject *PyVTKClass_vtkDirectedGraphNew(const char *); }
#define DECLARED_PyVTKClass_vtkDirectedGraphNew
#endif

static const char **PyvtkDirectedAcyclicGraph_Doc();


static PyObject *
PyvtkDirectedAcyclicGraph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectedAcyclicGraph *op = static_cast<vtkDirectedAcyclicGraph *>(vp);

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
      tempr = op->vtkDirectedAcyclicGraph::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectedAcyclicGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectedAcyclicGraph *op = static_cast<vtkDirectedAcyclicGraph *>(vp);

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
      tempr = op->vtkDirectedAcyclicGraph::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectedAcyclicGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectedAcyclicGraph *op = static_cast<vtkDirectedAcyclicGraph *>(vp);

  vtkDirectedAcyclicGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDirectedAcyclicGraph::NewInstance();
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
PyvtkDirectedAcyclicGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDirectedAcyclicGraph *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDirectedAcyclicGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectedAcyclicGraph_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectedAcyclicGraph *op = static_cast<vtkDirectedAcyclicGraph *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataObjectType();
      }
    else
      {
      tempr = op->vtkDirectedAcyclicGraph::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDirectedAcyclicGraph_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkDirectedAcyclicGraph *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkDirectedAcyclicGraph::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkDirectedAcyclicGraph_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkDirectedAcyclicGraph *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkDirectedAcyclicGraph::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDirectedAcyclicGraph_GetData_Methods[] = {
  {NULL, PyvtkDirectedAcyclicGraph_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkDirectedAcyclicGraph_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkDirectedAcyclicGraph_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDirectedAcyclicGraph_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkDirectedAcyclicGraph_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkDirectedAcyclicGraph_Methods[] = {
  {(char*)"GetClassName", PyvtkDirectedAcyclicGraph_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDirectedAcyclicGraph_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDirectedAcyclicGraph_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDirectedAcyclicGraph\nC++: vtkDirectedAcyclicGraph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDirectedAcyclicGraph_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDirectedAcyclicGraph\nC++: vtkDirectedAcyclicGraph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDataObjectType", PyvtkDirectedAcyclicGraph_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturn what type of dataset this is.\n"},
  {(char*)"GetData", PyvtkDirectedAcyclicGraph_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkDirectedAcyclicGraph\nC++: static vtkDirectedAcyclicGraph *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkDirectedAcyclicGraph\nC++: static vtkDirectedAcyclicGraph *GetData(\n    vtkInformationVector *v, int i=0)\n\nRetrieve a graph from an information vector.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDirectedAcyclicGraph_StaticNew()
{
  return vtkDirectedAcyclicGraph::New();
}

PyObject *PyVTKClass_vtkDirectedAcyclicGraphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDirectedAcyclicGraph_StaticNew,
    PyvtkDirectedAcyclicGraph_Methods,
    "vtkDirectedAcyclicGraph", modulename,
    NULL, NULL,
    PyvtkDirectedAcyclicGraph_Doc(),
    PyVTKClass_vtkDirectedGraphNew(modulename));
  return cls;
}

const char **PyvtkDirectedAcyclicGraph_Doc()
{
  static const char *docstring[] = {
    "vtkDirectedAcyclicGraph - A rooted tree data structure.\n\n",
    "Superclass: vtkDirectedGraph\n\n",
    "vtkDirectedAcyclicGraph is a connected directed graph with no cycles.\nA tree is a type of directed graph, so works with all graph\nalgorithms.\n\nvtkDirectedAcyclicGraph is a read-only data structure. To construct a\ntree, create an instance of vtkMutableDirectedGraph. Add vertices and\nedges with AddVertex() and AddEdge(). You may alternately start by\nadding a single vertex as the root then call graph",
    "->AddChild(parent)\nwhich adds a new vertex and connects the parent to the child. The\ntree MUST have all edges in the proper direction, from parent to\nchild. After building the tree, call tree->CheckedShallowCopy(graph)\nto copy the structure into a vtkDirectedAcyclicGraph. This method\nwill return false if the graph is an invalid tree.\n\nvtkDirectedAcyclicGraph provides some convenience methods for\no",
    "btaining the parent and children of a vertex, for finding the root,\nand determining if a vertex is a leaf (a vertex with no children).\n\nSee Also:\n\nvtkDirectedGraph vtkMutableDirectedGraph vtkGraph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDirectedAcyclicGraph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDirectedAcyclicGraphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDirectedAcyclicGraph", o) != 0)
    {
    Py_DECREF(o);
    }

}

