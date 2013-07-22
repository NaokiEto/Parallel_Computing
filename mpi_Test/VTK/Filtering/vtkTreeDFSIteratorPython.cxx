// python wrapper for vtkTreeDFSIterator
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
#include "vtkTreeDFSIterator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTreeDFSIterator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTreeDFSIterator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTreeDFSIteratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTreeDFSIteratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTreeDFSIterator_Doc();


static PyObject *
PyvtkTreeDFSIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

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
      tempr = op->vtkTreeDFSIterator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

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
      tempr = op->vtkTreeDFSIterator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

  vtkTreeDFSIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTreeDFSIterator::NewInstance();
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
PyvtkTreeDFSIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTreeDFSIterator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTreeDFSIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_SetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

  vtkTree *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTree"))
    {
    if (ap.IsBound())
      {
      op->SetTree(temp0);
      }
    else
      {
      op->vtkTreeDFSIterator::SetTree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMode(temp0);
      }
    else
      {
      op->vtkTreeDFSIterator::SetMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMode();
      }
    else
      {
      tempr = op->vtkTreeDFSIterator::GetMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_SetStartVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartVertex(temp0);
      }
    else
      {
      op->vtkTreeDFSIterator::SetStartVertex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_GetStartVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartVertex();
      }
    else
      {
      tempr = op->vtkTreeDFSIterator::GetStartVertex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

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
      tempr = op->vtkTreeDFSIterator::Next();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeDFSIterator_HasNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDFSIterator *op = static_cast<vtkTreeDFSIterator *>(vp);

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
      tempr = op->vtkTreeDFSIterator::HasNext();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeDFSIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeDFSIterator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeDFSIterator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeDFSIterator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTreeDFSIterator\nC++: vtkTreeDFSIterator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeDFSIterator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeDFSIterator\nC++: vtkTreeDFSIterator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTree", PyvtkTreeDFSIterator_SetTree, 1,
   (char*)"V.SetTree(vtkTree)\nC++: void SetTree(vtkTree *graph)\n\nSet the graph to iterate over.\n"},
  {(char*)"SetMode", PyvtkTreeDFSIterator_SetMode, 1,
   (char*)"V.SetMode(int)\nC++: void SetMode(int mode)\n\nSet the visit mode of the iterator.  Mode can be\n  DISCOVER (0): Order by discovery time\n  FINISH   (1): Order by finish time Default is DISCOVER. Use\nDISCOVER for top-down algorithms where parents need to be\nprocessed before children. Use FINISH for bottom-up algorithms\nwhere children need to be processed before parents.\n"},
  {(char*)"GetMode", PyvtkTreeDFSIterator_GetMode, 1,
   (char*)"V.GetMode() -> int\nC++: int GetMode()\n\nSet the visit mode of the iterator.  Mode can be\n  DISCOVER (0): Order by discovery time\n  FINISH   (1): Order by finish time Default is DISCOVER. Use\nDISCOVER for top-down algorithms where parents need to be\nprocessed before children. Use FINISH for bottom-up algorithms\nwhere children need to be processed before parents.\n"},
  {(char*)"SetStartVertex", PyvtkTreeDFSIterator_SetStartVertex, 1,
   (char*)"V.SetStartVertex(int)\nC++: void SetStartVertex(vtkIdType vertex)\n\nThe start vertex of the seedgeh. The tree iterator will only\niterate over the subtree rooted at vertex. If not set (or set to\na negative value), starts at the root of the tree.\n"},
  {(char*)"GetStartVertex", PyvtkTreeDFSIterator_GetStartVertex, 1,
   (char*)"V.GetStartVertex() -> int\nC++: vtkIdType GetStartVertex()\n\nThe start vertex of the seedgeh. The tree iterator will only\niterate over the subtree rooted at vertex. If not set (or set to\na negative value), starts at the root of the tree.\n"},
  {(char*)"Next", PyvtkTreeDFSIterator_Next, 1,
   (char*)"V.Next() -> int\nC++: vtkIdType Next()\n\nThe next vertex visited in the graph.\n"},
  {(char*)"HasNext", PyvtkTreeDFSIterator_HasNext, 1,
   (char*)"V.HasNext() -> bool\nC++: bool HasNext()\n\nReturn true when all vertices have been visited.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTreeDFSIterator_StaticNew()
{
  return vtkTreeDFSIterator::New();
}

PyObject *PyVTKClass_vtkTreeDFSIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTreeDFSIterator_StaticNew,
    PyvtkTreeDFSIterator_Methods,
    "vtkTreeDFSIterator", modulename,
    NULL, NULL,
    PyvtkTreeDFSIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"DISCOVER", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"FINISH", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkTreeDFSIterator_Doc()
{
  static const char *docstring[] = {
    "vtkTreeDFSIterator - depth first seedgeh iterator through a vtkGraph\n\n",
    "Superclass: vtkObject\n\n",
    "vtkTreeDFSIterator performs a depth first seedgeh of a tree.  First,\nyou must set the tree on which you are going to iterate, and set the\nstarting vertex and mode.  The mode is either DISCOVER, in which case\nvertices are visited as they are first reached, or FINISH, in which\ncase vertices are visited when they are done, i.e. all adjacent\nvertices have been discovered already.\n\nAfter setting up the",
    " iterator, the normal mode of operation is to set\nup a while(iter->HasNext())loop, with the statement vtkIdType vertex\n= iter->Next()inside the loop.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeDFSIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeDFSIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeDFSIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

