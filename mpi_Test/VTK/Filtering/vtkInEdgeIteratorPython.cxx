// python wrapper for vtkInEdgeIterator
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
#include "vtkInEdgeIterator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInEdgeIterator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInEdgeIterator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInEdgeIteratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInEdgeIteratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkInEdgeIterator_Doc();


static PyObject *
PyvtkInEdgeIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

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
      tempr = op->vtkInEdgeIterator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

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
      tempr = op->vtkInEdgeIterator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

  vtkInEdgeIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInEdgeIterator::NewInstance();
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
PyvtkInEdgeIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInEdgeIterator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInEdgeIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

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
      op->vtkInEdgeIterator::Initialize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_GetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

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
      tempr = op->vtkInEdgeIterator::GetGraph();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_GetVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

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
      tempr = op->vtkInEdgeIterator::GetVertex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_NextGraphEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NextGraphEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

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
      tempr = op->vtkInEdgeIterator::NextGraphEdge();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInEdgeIterator_HasNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInEdgeIterator *op = static_cast<vtkInEdgeIterator *>(vp);

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
      tempr = op->vtkInEdgeIterator::HasNext();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInEdgeIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkInEdgeIterator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInEdgeIterator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInEdgeIterator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInEdgeIterator\nC++: vtkInEdgeIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInEdgeIterator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInEdgeIterator\nC++: vtkInEdgeIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkInEdgeIterator_Initialize, 1,
   (char*)"V.Initialize(vtkGraph, int)\nC++: void Initialize(vtkGraph *g, vtkIdType v)\n\nInitialize the iterator with a graph and vertex.\n"},
  {(char*)"GetGraph", PyvtkInEdgeIterator_GetGraph, 1,
   (char*)"V.GetGraph() -> vtkGraph\nC++: vtkGraph *GetGraph()\n\nGet the graph and vertex associated with this iterator.\n"},
  {(char*)"GetVertex", PyvtkInEdgeIterator_GetVertex, 1,
   (char*)"V.GetVertex() -> int\nC++: vtkIdType GetVertex()\n\nGet the graph and vertex associated with this iterator.\n"},
  {(char*)"NextGraphEdge", PyvtkInEdgeIterator_NextGraphEdge, 1,
   (char*)"V.NextGraphEdge() -> vtkGraphEdge\nC++: vtkGraphEdge *NextGraphEdge()\n\nJust like Next(), but returns heavy-weight vtkGraphEdge object\ninstead of the vtkEdgeType struct, for use with wrappers. The\ngraph edge is owned by this iterator, and changes after each call\nto NextGraphEdge().\n"},
  {(char*)"HasNext", PyvtkInEdgeIterator_HasNext, 1,
   (char*)"V.HasNext() -> bool\nC++: bool HasNext()\n\nWhether this iterator has more edges.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInEdgeIterator_StaticNew()
{
  return vtkInEdgeIterator::New();
}

PyObject *PyVTKClass_vtkInEdgeIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInEdgeIterator_StaticNew,
    PyvtkInEdgeIterator_Methods,
    "vtkInEdgeIterator", modulename,
    NULL, NULL,
    PyvtkInEdgeIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkInEdgeIterator_Doc()
{
  static const char *docstring[] = {
    "vtkInEdgeIterator - Iterates through all incoming edges to a vertex.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkInEdgeIterator iterates through all edges whose target is a\nparticular vertex. Instantiate this class directly and call\nInitialize() to traverse the vertex of a graph. Alternately, use\nGetInEdges() on the graph to initialize the iterator. it->Next()\nreturns a vtkInEdgeType structure, which contains Id, the edge's id, and Source, the\nedge's source vertex.\n\nSee Also:\n\nvtkGraph vtkOutEdgeIterator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInEdgeIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInEdgeIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInEdgeIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

