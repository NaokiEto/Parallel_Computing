// python wrapper for vtkPriorityQueue
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
#include "vtkPriorityQueue.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPriorityQueue(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPriorityQueue(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPriorityQueueNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPriorityQueueNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPriorityQueue_Doc();


static PyObject *
PyvtkPriorityQueue_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

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
      tempr = op->vtkPriorityQueue::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPriorityQueue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

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
      tempr = op->vtkPriorityQueue::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPriorityQueue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  vtkPriorityQueue *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPriorityQueue::NewInstance();
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
PyvtkPriorityQueue_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPriorityQueue *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPriorityQueue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPriorityQueue_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  vtkIdType temp0;
  vtkIdType temp1 = 1000;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->Allocate(temp0, temp1);
      }
    else
      {
      op->vtkPriorityQueue::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPriorityQueue_Insert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Insert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  double temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Insert(temp0, temp1);
      }
    else
      {
      op->vtkPriorityQueue::Insert(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPriorityQueue_Pop_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  vtkIdType temp0;
  double temp1;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->Pop(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPriorityQueue::Pop(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPriorityQueue_Pop_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  vtkIdType temp0 = 0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      tempr = op->Pop(temp0);
      }
    else
      {
      tempr = op->vtkPriorityQueue::Pop(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPriorityQueue_Pop(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPriorityQueue_Pop_s1(self, args);
    case 0:
    case 1:
      return PyvtkPriorityQueue_Pop_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Pop");
  return NULL;
}



static PyObject *
PyvtkPriorityQueue_Peek_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Peek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  vtkIdType temp0;
  double temp1;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->Peek(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPriorityQueue::Peek(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPriorityQueue_Peek_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Peek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  vtkIdType temp0 = 0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      tempr = op->Peek(temp0);
      }
    else
      {
      tempr = op->vtkPriorityQueue::Peek(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPriorityQueue_Peek(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkPriorityQueue_Peek_s1(self, args);
    case 0:
    case 1:
      return PyvtkPriorityQueue_Peek_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Peek");
  return NULL;
}



static PyObject *
PyvtkPriorityQueue_DeleteId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  vtkIdType temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->DeleteId(temp0);
      }
    else
      {
      tempr = op->vtkPriorityQueue::DeleteId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPriorityQueue_GetPriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  vtkIdType temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPriority(temp0);
      }
    else
      {
      tempr = op->vtkPriorityQueue::GetPriority(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPriorityQueue_GetNumberOfItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfItems();
      }
    else
      {
      tempr = op->vtkPriorityQueue::GetNumberOfItems();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPriorityQueue_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkPriorityQueue::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPriorityQueue_Methods[] = {
  {(char*)"GetClassName", PyvtkPriorityQueue_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPriorityQueue_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPriorityQueue_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPriorityQueue\nC++: vtkPriorityQueue *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPriorityQueue_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPriorityQueue\nC++: vtkPriorityQueue *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Allocate", PyvtkPriorityQueue_Allocate, 1,
   (char*)"V.Allocate(int, int)\nC++: void Allocate(const vtkIdType sz, const vtkIdType ext=1000)\n\nAllocate initial space for priority queue.\n"},
  {(char*)"Insert", PyvtkPriorityQueue_Insert, 1,
   (char*)"V.Insert(float, int)\nC++: void Insert(double priority, vtkIdType id)\n\nInsert id with priority specified. The id is generally an index\nlike a point id or cell id.\n"},
  {(char*)"Pop", PyvtkPriorityQueue_Pop, 1,
   (char*)"V.Pop(int, float) -> int\nC++: vtkIdType Pop(vtkIdType location, double &priority)\nV.Pop(int) -> int\nC++: vtkIdType Pop(vtkIdType location=0)\n\nRemoves item at specified location from tree; then reorders and\nbalances tree. The location == 0 is the root of the tree. If\nqueue is exhausted, then a value < 0 is returned. (Note: the\nlocation is not the same as deleting an id; id is mapped to\nlocation.)\n"},
  {(char*)"Peek", PyvtkPriorityQueue_Peek, 1,
   (char*)"V.Peek(int, float) -> int\nC++: vtkIdType Peek(vtkIdType location, double &priority)\nV.Peek(int) -> int\nC++: vtkIdType Peek(vtkIdType location=0)\n\nPeek into the queue without actually removing anything. Returns\nthe id and the priority.\n"},
  {(char*)"DeleteId", PyvtkPriorityQueue_DeleteId, 1,
   (char*)"V.DeleteId(int) -> float\nC++: double DeleteId(vtkIdType id)\n\nDelete entry in queue with specified id. Returns priority value\nassociated with that id; or VTK_DOUBLE_MAX if not in queue.\n"},
  {(char*)"GetPriority", PyvtkPriorityQueue_GetPriority, 1,
   (char*)"V.GetPriority(int) -> float\nC++: double GetPriority(vtkIdType id)\n\nGet the priority of an entry in the queue with specified id.\nReturns priority value of that id or VTK_DOUBLE_MAX if not in\nqueue.\n"},
  {(char*)"GetNumberOfItems", PyvtkPriorityQueue_GetNumberOfItems, 1,
   (char*)"V.GetNumberOfItems() -> int\nC++: vtkIdType GetNumberOfItems()\n\nReturn the number of items in this queue.\n"},
  {(char*)"Reset", PyvtkPriorityQueue_Reset, 1,
   (char*)"V.Reset()\nC++: void Reset()\n\nEmpty the queue but without releasing memory. This avoids the\noverhead of memory allocation/deletion.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPriorityQueue_StaticNew()
{
  return vtkPriorityQueue::New();
}

PyObject *PyVTKClass_vtkPriorityQueueNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPriorityQueue_StaticNew,
    PyvtkPriorityQueue_Methods,
    "vtkPriorityQueue", modulename,
    NULL, NULL,
    PyvtkPriorityQueue_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPriorityQueue_Doc()
{
  static const char *docstring[] = {
    "vtkPriorityQueue - an list of ids arranged in priority order\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPriorityQueue is a general object for creating and manipulating\nlists of object ids (e.g., point or cell ids). Object ids are sorted\naccording to a user-specified priority, where entries at the top of\nthe queue have the smallest values.\n\nThis implementation provides a feature beyond the usual ability to\ninsert and retrieve (or pop) values from the queue. It is also\npossible to pop any item in t",
    "he queue given its id number. This\nallows you to delete entries in the queue which can useful for\nreinserting an item into the queue.\n\nCaveats:\n\nThis implementation is a variation of the priority queue described in \"Data Structures &\nAlgorithms\" by Aho, Hopcroft, Ullman. It creates a balanced,\npartially ordered binary tree implemented as an ordered array. This\navoids the overhead associated with p",
    "arent/child pointers, and\nfrequent memory allocation and deallocation.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPriorityQueue(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPriorityQueueNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPriorityQueue", o) != 0)
    {
    Py_DECREF(o);
    }

}

