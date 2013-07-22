// python wrapper for vtkAdjacentVertexIterator
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
#include "vtkAdjacentVertexIterator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAdjacentVertexIterator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAdjacentVertexIterator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAdjacentVertexIteratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAdjacentVertexIteratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAdjacentVertexIterator_Doc();


static PyObject *
PyvtkAdjacentVertexIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacentVertexIterator *op = static_cast<vtkAdjacentVertexIterator *>(vp);

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
      tempr = op->vtkAdjacentVertexIterator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacentVertexIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacentVertexIterator *op = static_cast<vtkAdjacentVertexIterator *>(vp);

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
      tempr = op->vtkAdjacentVertexIterator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacentVertexIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacentVertexIterator *op = static_cast<vtkAdjacentVertexIterator *>(vp);

  vtkAdjacentVertexIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAdjacentVertexIterator::NewInstance();
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
PyvtkAdjacentVertexIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAdjacentVertexIterator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAdjacentVertexIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacentVertexIterator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacentVertexIterator *op = static_cast<vtkAdjacentVertexIterator *>(vp);

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
      op->vtkAdjacentVertexIterator::Initialize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacentVertexIterator_GetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacentVertexIterator *op = static_cast<vtkAdjacentVertexIterator *>(vp);

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
      tempr = op->vtkAdjacentVertexIterator::GetGraph();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacentVertexIterator_GetVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacentVertexIterator *op = static_cast<vtkAdjacentVertexIterator *>(vp);

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
      tempr = op->vtkAdjacentVertexIterator::GetVertex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacentVertexIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacentVertexIterator *op = static_cast<vtkAdjacentVertexIterator *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Next();
      }
    else
      {
      tempr = op->vtkAdjacentVertexIterator::Next();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAdjacentVertexIterator_HasNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdjacentVertexIterator *op = static_cast<vtkAdjacentVertexIterator *>(vp);

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
      tempr = op->vtkAdjacentVertexIterator::HasNext();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAdjacentVertexIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkAdjacentVertexIterator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAdjacentVertexIterator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAdjacentVertexIterator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAdjacentVertexIterator\nC++: vtkAdjacentVertexIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAdjacentVertexIterator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAdjacentVertexIterator\nC++: vtkAdjacentVertexIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkAdjacentVertexIterator_Initialize, 1,
   (char*)"V.Initialize(vtkGraph, int)\nC++: void Initialize(vtkGraph *g, vtkIdType v)\n\nInitialize the iterator with a graph and vertex.\n"},
  {(char*)"GetGraph", PyvtkAdjacentVertexIterator_GetGraph, 1,
   (char*)"V.GetGraph() -> vtkGraph\nC++: vtkGraph *GetGraph()\n\nGet the graph and vertex associated with this iterator.\n"},
  {(char*)"GetVertex", PyvtkAdjacentVertexIterator_GetVertex, 1,
   (char*)"V.GetVertex() -> int\nC++: vtkIdType GetVertex()\n\nGet the graph and vertex associated with this iterator.\n"},
  {(char*)"Next", PyvtkAdjacentVertexIterator_Next, 1,
   (char*)"V.Next() -> int\nC++: vtkIdType Next()\n\nReturns the next edge in the graph.\n"},
  {(char*)"HasNext", PyvtkAdjacentVertexIterator_HasNext, 1,
   (char*)"V.HasNext() -> bool\nC++: bool HasNext()\n\nWhether this iterator has more edges.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAdjacentVertexIterator_StaticNew()
{
  return vtkAdjacentVertexIterator::New();
}

PyObject *PyVTKClass_vtkAdjacentVertexIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAdjacentVertexIterator_StaticNew,
    PyvtkAdjacentVertexIterator_Methods,
    "vtkAdjacentVertexIterator", modulename,
    NULL, NULL,
    PyvtkAdjacentVertexIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAdjacentVertexIterator_Doc()
{
  static const char *docstring[] = {
    "vtkAdjacentVertexIterator - Iterates through adjacent vertices in a\ngraph.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkAdjacentVertexIterator iterates through all vertices adjacent to a\nvertex, i.e. the vertices which may be reached by traversing an out\nedge of the source vertex. Use graph->GetAdjacentVertices(v, it) to\ninitialize the iterator.\n\nSee Also:\n\nThanks:\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAdjacentVertexIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAdjacentVertexIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAdjacentVertexIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

