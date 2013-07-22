// python wrapper for vtkOutEdgeIterator
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
#include "vtkOutEdgeIterator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOutEdgeIterator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOutEdgeIterator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOutEdgeIteratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOutEdgeIteratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkOutEdgeIterator_Doc();


static PyObject *
PyvtkOutEdgeIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

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
      tempr = op->vtkOutEdgeIterator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

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
      tempr = op->vtkOutEdgeIterator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

  vtkOutEdgeIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOutEdgeIterator::NewInstance();
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
PyvtkOutEdgeIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOutEdgeIterator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOutEdgeIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

  vtkGraph *temp0 = NULL;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGraph") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0, temp1);
      }
    else
      {
      op->vtkOutEdgeIterator::Initialize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_GetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

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
      tempr = op->vtkOutEdgeIterator::GetGraph();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_GetVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVertex();
      }
    else
      {
      tempr = op->vtkOutEdgeIterator::GetVertex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_NextGraphEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NextGraphEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

  vtkGraphEdge *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NextGraphEdge();
      }
    else
      {
      tempr = op->vtkOutEdgeIterator::NextGraphEdge();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutEdgeIterator_HasNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutEdgeIterator *op = static_cast<vtkOutEdgeIterator *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasNext();
      }
    else
      {
      tempr = op->vtkOutEdgeIterator::HasNext();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOutEdgeIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkOutEdgeIterator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOutEdgeIterator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOutEdgeIterator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOutEdgeIterator\nC++: vtkOutEdgeIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOutEdgeIterator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOutEdgeIterator\nC++: vtkOutEdgeIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkOutEdgeIterator_Initialize, 1,
   (char*)"V.Initialize(vtkGraph, int)\nC++: void Initialize(vtkGraph *g, vtkIdType v)\n\nInitialize the iterator with a graph and vertex.\n"},
  {(char*)"GetGraph", PyvtkOutEdgeIterator_GetGraph, 1,
   (char*)"V.GetGraph() -> vtkGraph\nC++: vtkGraph *GetGraph()\n\nGet the graph and vertex associated with this iterator.\n"},
  {(char*)"GetVertex", PyvtkOutEdgeIterator_GetVertex, 1,
   (char*)"V.GetVertex() -> int\nC++: vtkIdType GetVertex()\n\nGet the graph and vertex associated with this iterator.\n"},
  {(char*)"NextGraphEdge", PyvtkOutEdgeIterator_NextGraphEdge, 1,
   (char*)"V.NextGraphEdge() -> vtkGraphEdge\nC++: vtkGraphEdge *NextGraphEdge()\n\nJust like Next(), but returns heavy-weight vtkGraphEdge object\ninstead of the vtkEdgeType struct, for use with wrappers. The\ngraph edge is owned by this iterator, and changes after each call\nto NextGraphEdge().\n"},
  {(char*)"HasNext", PyvtkOutEdgeIterator_HasNext, 1,
   (char*)"V.HasNext() -> bool\nC++: bool HasNext()\n\nWhether this iterator has more edges.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOutEdgeIterator_StaticNew()
{
  return vtkOutEdgeIterator::New();
}

PyObject *PyVTKClass_vtkOutEdgeIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOutEdgeIterator_StaticNew,
    PyvtkOutEdgeIterator_Methods,
    "vtkOutEdgeIterator", modulename,
    NULL, NULL,
    PyvtkOutEdgeIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkOutEdgeIterator_Doc()
{
  static const char *docstring[] = {
    "vtkOutEdgeIterator - Iterates through all outgoing edges from a\nvertex.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkOutEdgeIterator iterates through all edges whose source is a\nparticular vertex. Instantiate this class directly and call\nInitialize() to traverse the vertex of a graph. Alternately, use\nGetInEdges() on the graph to initialize the iterator. it->Next()\nreturns a vtkOutEdgeType structure, which contains Id, the edge's id, and Target, the\nedge's target vertex.\n\nSee Also:\n\nvtkGraph vtkInEdgeIterator",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOutEdgeIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOutEdgeIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOutEdgeIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

