// python wrapper for vtkMutableGraphHelper
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
#include "vtkMutableGraphHelper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMutableGraphHelper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMutableGraphHelper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMutableGraphHelperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMutableGraphHelperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMutableGraphHelper_Doc();


static PyObject *
PyvtkMutableGraphHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

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
      tempr = op->vtkMutableGraphHelper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

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
      tempr = op->vtkMutableGraphHelper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkMutableGraphHelper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMutableGraphHelper::NewInstance();
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
PyvtkMutableGraphHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMutableGraphHelper *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMutableGraphHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_SetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

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
      op->vtkMutableGraphHelper::SetGraph(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_GetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraph();
      }
    else
      {
      tempr = op->vtkMutableGraphHelper::GetGraph();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_AddGraphEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGraphEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkGraphEdge *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->AddGraphEdge(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMutableGraphHelper::AddGraphEdge(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_AddVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->AddVertex();
      }
    else
      {
      tempr = op->vtkMutableGraphHelper::AddVertex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_RemoveVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveVertex(temp0);
      }
    else
      {
      op->vtkMutableGraphHelper::RemoveVertex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_RemoveVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->RemoveVertices(temp0);
      }
    else
      {
      op->vtkMutableGraphHelper::RemoveVertices(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_RemoveEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveEdge(temp0);
      }
    else
      {
      op->vtkMutableGraphHelper::RemoveEdge(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_RemoveEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->RemoveEdges(temp0);
      }
    else
      {
      op->vtkMutableGraphHelper::RemoveEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMutableGraphHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkMutableGraphHelper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMutableGraphHelper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMutableGraphHelper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMutableGraphHelper\nC++: vtkMutableGraphHelper *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMutableGraphHelper_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMutableGraphHelper\nC++: vtkMutableGraphHelper *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGraph", PyvtkMutableGraphHelper_SetGraph, 1,
   (char*)"V.SetGraph(vtkGraph)\nC++: void SetGraph(vtkGraph *g)\n\nSet the underlying graph that you want to modify with this\nhelper. The graph must be an instance of vtkMutableDirectedGraph\nor vtkMutableUndirectedGraph.\n"},
  {(char*)"GetGraph", PyvtkMutableGraphHelper_GetGraph, 1,
   (char*)"V.GetGraph() -> vtkGraph\nC++: vtkGraph *GetGraph()\n\nSet the underlying graph that you want to modify with this\nhelper. The graph must be an instance of vtkMutableDirectedGraph\nor vtkMutableUndirectedGraph.\n"},
  {(char*)"AddGraphEdge", PyvtkMutableGraphHelper_AddGraphEdge, 1,
   (char*)"V.AddGraphEdge(int, int) -> vtkGraphEdge\nC++: vtkGraphEdge *AddGraphEdge(vtkIdType u, vtkIdType v)\n\nAdd an edge to the underlying mutable graph.\n"},
  {(char*)"AddVertex", PyvtkMutableGraphHelper_AddVertex, 1,
   (char*)"V.AddVertex() -> int\nC++: vtkIdType AddVertex()\n\nAdd a vertex to the underlying mutable graph.\n"},
  {(char*)"RemoveVertex", PyvtkMutableGraphHelper_RemoveVertex, 1,
   (char*)"V.RemoveVertex(int)\nC++: void RemoveVertex(vtkIdType v)\n\nRemove a vertex from the underlying mutable graph.\n"},
  {(char*)"RemoveVertices", PyvtkMutableGraphHelper_RemoveVertices, 1,
   (char*)"V.RemoveVertices(vtkIdTypeArray)\nC++: void RemoveVertices(vtkIdTypeArray *verts)\n\nRemove a collection of vertices from the underlying mutable\ngraph.\n"},
  {(char*)"RemoveEdge", PyvtkMutableGraphHelper_RemoveEdge, 1,
   (char*)"V.RemoveEdge(int)\nC++: void RemoveEdge(vtkIdType e)\n\nRemove an edge from the underlying mutable graph.\n"},
  {(char*)"RemoveEdges", PyvtkMutableGraphHelper_RemoveEdges, 1,
   (char*)"V.RemoveEdges(vtkIdTypeArray)\nC++: void RemoveEdges(vtkIdTypeArray *edges)\n\nRemove a collection of edges from the underlying mutable graph.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMutableGraphHelper_StaticNew()
{
  return vtkMutableGraphHelper::New();
}

PyObject *PyVTKClass_vtkMutableGraphHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMutableGraphHelper_StaticNew,
    PyvtkMutableGraphHelper_Methods,
    "vtkMutableGraphHelper", modulename,
    NULL, NULL,
    PyvtkMutableGraphHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMutableGraphHelper_Doc()
{
  static const char *docstring[] = {
    "vtkMutableGraphHelper - Helper class for building a directed or\n\n",
    "Superclass: vtkObject\n\n",
    "vtkMutableGraphHelper has helper methods AddVertex and AddEdge which\nadd vertices/edges to the underlying mutable graph. This is helpful\nin filters which need to (re)construct graphs which may be either\ndirected or undirected.\n\nSee Also:\n\nvtkGraph vtkMutableDirectedGraph vtkMutableUndirectedGraph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMutableGraphHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMutableGraphHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMutableGraphHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

