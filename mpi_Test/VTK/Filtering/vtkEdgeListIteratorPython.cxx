// python wrapper for vtkEdgeListIterator
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
#include "vtkEdgeListIterator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkEdgeListIterator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkEdgeListIterator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkEdgeListIteratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkEdgeListIteratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkEdgeListIterator_Doc();


static PyObject *
PyvtkEdgeListIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeListIterator *op = static_cast<vtkEdgeListIterator *>(vp);

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
      tempr = op->vtkEdgeListIterator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeListIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeListIterator *op = static_cast<vtkEdgeListIterator *>(vp);

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
      tempr = op->vtkEdgeListIterator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeListIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeListIterator *op = static_cast<vtkEdgeListIterator *>(vp);

  vtkEdgeListIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkEdgeListIterator::NewInstance();
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
PyvtkEdgeListIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkEdgeListIterator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkEdgeListIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeListIterator_GetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeListIterator *op = static_cast<vtkEdgeListIterator *>(vp);

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
      tempr = op->vtkEdgeListIterator::GetGraph();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeListIterator_SetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeListIterator *op = static_cast<vtkEdgeListIterator *>(vp);

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
      op->vtkEdgeListIterator::SetGraph(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeListIterator_NextGraphEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NextGraphEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeListIterator *op = static_cast<vtkEdgeListIterator *>(vp);

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
      tempr = op->vtkEdgeListIterator::NextGraphEdge();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgeListIterator_HasNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgeListIterator *op = static_cast<vtkEdgeListIterator *>(vp);

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
      tempr = op->vtkEdgeListIterator::HasNext();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEdgeListIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkEdgeListIterator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEdgeListIterator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEdgeListIterator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkEdgeListIterator\nC++: vtkEdgeListIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEdgeListIterator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEdgeListIterator\nC++: vtkEdgeListIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetGraph", PyvtkEdgeListIterator_GetGraph, 1,
   (char*)"V.GetGraph() -> vtkGraph\nC++: vtkGraph *GetGraph()\n\n"},
  {(char*)"SetGraph", PyvtkEdgeListIterator_SetGraph, 1,
   (char*)"V.SetGraph(vtkGraph)\nC++: virtual void SetGraph(vtkGraph *graph)\n\n"},
  {(char*)"NextGraphEdge", PyvtkEdgeListIterator_NextGraphEdge, 1,
   (char*)"V.NextGraphEdge() -> vtkGraphEdge\nC++: vtkGraphEdge *NextGraphEdge()\n\nJust like Next(), but returns heavy-weight vtkGraphEdge object\ninstead of the vtkEdgeType struct, for use with wrappers. The\ngraph edge is owned by this iterator, and changes after each call\nto NextGraphEdge().\n"},
  {(char*)"HasNext", PyvtkEdgeListIterator_HasNext, 1,
   (char*)"V.HasNext() -> bool\nC++: bool HasNext()\n\nWhether this iterator has more edges.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEdgeListIterator_StaticNew()
{
  return vtkEdgeListIterator::New();
}

PyObject *PyVTKClass_vtkEdgeListIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEdgeListIterator_StaticNew,
    PyvtkEdgeListIterator_Methods,
    "vtkEdgeListIterator", modulename,
    NULL, NULL,
    PyvtkEdgeListIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkEdgeListIterator_Doc()
{
  static const char *docstring[] = {
    "vtkEdgeListIterator - Iterates through all edges in a graph.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkEdgeListIterator iterates through all the edges in a graph, by\ntraversing the adjacency list for each vertex. You may instantiate\nthis class directly and call SetGraph() to traverse a certain graph.\nYou may also call the graph's GetEdges() method to set up the\niterator for a certain graph.\n\nNote that this class does NOT guarantee that the edges will be\nprocessed in order of their ids (i.e. it w",
    "ill not necessarily return\nedge 0, then edge 1, etc.).\n\nSee Also:\n\nvtkGraph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEdgeListIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEdgeListIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEdgeListIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}
