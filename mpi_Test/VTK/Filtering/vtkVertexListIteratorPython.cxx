// python wrapper for vtkVertexListIterator
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
#include "vtkVertexListIterator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVertexListIterator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVertexListIterator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVertexListIteratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVertexListIteratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkVertexListIterator_Doc();


static PyObject *
PyvtkVertexListIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVertexListIterator *op = static_cast<vtkVertexListIterator *>(vp);

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
      tempr = op->vtkVertexListIterator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVertexListIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVertexListIterator *op = static_cast<vtkVertexListIterator *>(vp);

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
      tempr = op->vtkVertexListIterator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVertexListIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVertexListIterator *op = static_cast<vtkVertexListIterator *>(vp);

  vtkVertexListIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVertexListIterator::NewInstance();
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
PyvtkVertexListIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVertexListIterator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVertexListIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVertexListIterator_SetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVertexListIterator *op = static_cast<vtkVertexListIterator *>(vp);

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
      op->vtkVertexListIterator::SetGraph(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVertexListIterator_GetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVertexListIterator *op = static_cast<vtkVertexListIterator *>(vp);

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
      tempr = op->vtkVertexListIterator::GetGraph();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVertexListIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVertexListIterator *op = static_cast<vtkVertexListIterator *>(vp);

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
      tempr = op->vtkVertexListIterator::Next();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVertexListIterator_HasNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVertexListIterator *op = static_cast<vtkVertexListIterator *>(vp);

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
      tempr = op->vtkVertexListIterator::HasNext();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVertexListIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkVertexListIterator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVertexListIterator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVertexListIterator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVertexListIterator\nC++: vtkVertexListIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVertexListIterator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVertexListIterator\nC++: vtkVertexListIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGraph", PyvtkVertexListIterator_SetGraph, 1,
   (char*)"V.SetGraph(vtkGraph)\nC++: virtual void SetGraph(vtkGraph *graph)\n\nSetup the iterator with a graph.\n"},
  {(char*)"GetGraph", PyvtkVertexListIterator_GetGraph, 1,
   (char*)"V.GetGraph() -> vtkGraph\nC++: vtkGraph *GetGraph()\n\nGet the graph associated with this iterator.\n"},
  {(char*)"Next", PyvtkVertexListIterator_Next, 1,
   (char*)"V.Next() -> int\nC++: vtkIdType Next()\n\nReturns the next edge in the graph.\n"},
  {(char*)"HasNext", PyvtkVertexListIterator_HasNext, 1,
   (char*)"V.HasNext() -> bool\nC++: bool HasNext()\n\nWhether this iterator has more edges.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVertexListIterator_StaticNew()
{
  return vtkVertexListIterator::New();
}

PyObject *PyVTKClass_vtkVertexListIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVertexListIterator_StaticNew,
    PyvtkVertexListIterator_Methods,
    "vtkVertexListIterator", modulename,
    NULL, NULL,
    PyvtkVertexListIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkVertexListIterator_Doc()
{
  static const char *docstring[] = {
    "vtkVertexListIterator - Iterates all vertices in a graph.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkVertexListIterator iterates through all vertices in a graph.\nCreate an instance of this and call graph->GetVertices(it) to\ninitialize this iterator. You may alternately call SetGraph() to\ninitialize the iterator.\n\nSee Also:\n\nvtkGraph\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVertexListIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVertexListIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVertexListIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

