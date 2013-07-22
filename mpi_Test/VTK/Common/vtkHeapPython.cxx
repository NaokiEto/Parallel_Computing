// python wrapper for vtkHeap
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
#include "vtkHeap.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHeap(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHeap(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHeapNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHeapNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkHeap_Doc();


static PyObject *
PyvtkHeap_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

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
      tempr = op->vtkHeap::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHeap_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

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
      tempr = op->vtkHeap::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHeap_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  vtkHeap *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHeap::NewInstance();
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
PyvtkHeap_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHeap *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHeap::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHeap_AllocateMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  size_t temp0;
  void  *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->AllocateMemory(temp0);
      }
    else
      {
      tempr = op->vtkHeap::AllocateMemory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHeap_SetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  size_t temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBlockSize(temp0);
      }
    else
      {
      op->vtkHeap::SetBlockSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHeap_GetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  size_t tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlockSize();
      }
    else
      {
      tempr = op->vtkHeap::GetBlockSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHeap_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfBlocks();
      }
    else
      {
      tempr = op->vtkHeap::GetNumberOfBlocks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHeap_GetNumberOfAllocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAllocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfAllocations();
      }
    else
      {
      tempr = op->vtkHeap::GetNumberOfAllocations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHeap_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkHeap::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHeap_StringDup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StringDup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  char *temp0 = NULL;
  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->StringDup(temp0);
      }
    else
      {
      tempr = op->vtkHeap::StringDup(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHeap_Methods[] = {
  {(char*)"GetClassName", PyvtkHeap_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHeap_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHeap_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHeap\nC++: vtkHeap *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHeap_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHeap\nC++: vtkHeap *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AllocateMemory", PyvtkHeap_AllocateMemory, 1,
   (char*)"V.AllocateMemory(int) ->\nC++: void *AllocateMemory(size_t n)\n\nAllocate the memory requested.\n"},
  {(char*)"SetBlockSize", PyvtkHeap_SetBlockSize, 1,
   (char*)"V.SetBlockSize(int)\nC++: virtual void SetBlockSize(size_t)\n\nSet/Get the size at which blocks are allocated. If a memory\nrequest is bigger than the block size, then that size will be\nallocated.\n"},
  {(char*)"GetBlockSize", PyvtkHeap_GetBlockSize, 1,
   (char*)"V.GetBlockSize() -> int\nC++: virtual size_t GetBlockSize()\n\nSet/Get the size at which blocks are allocated. If a memory\nrequest is bigger than the block size, then that size will be\nallocated.\n"},
  {(char*)"GetNumberOfBlocks", PyvtkHeap_GetNumberOfBlocks, 1,
   (char*)"V.GetNumberOfBlocks() -> int\nC++: int GetNumberOfBlocks()\n\nGet the number of allocations thus far.\n"},
  {(char*)"GetNumberOfAllocations", PyvtkHeap_GetNumberOfAllocations, 1,
   (char*)"V.GetNumberOfAllocations() -> int\nC++: int GetNumberOfAllocations()\n\nGet the number of allocations thus far.\n"},
  {(char*)"Reset", PyvtkHeap_Reset, 1,
   (char*)"V.Reset()\nC++: void Reset()\n\nThis methods resets the current allocation location back to the\nbeginning of the heap. This allows reuse of previously allocated\nmemory which may be beneficial to performance in many cases.\n"},
  {(char*)"StringDup", PyvtkHeap_StringDup, 1,
   (char*)"V.StringDup(string) -> string\nC++: char *StringDup(const char *str)\n\nConvenience method performs string duplication.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHeap_StaticNew()
{
  return vtkHeap::New();
}

PyObject *PyVTKClass_vtkHeapNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHeap_StaticNew,
    PyvtkHeap_Methods,
    "vtkHeap", modulename,
    NULL, NULL,
    PyvtkHeap_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkHeap_Doc()
{
  static const char *docstring[] = {
    "vtkHeap - replacement for malloc/free and new/delete\n\n",
    "Superclass: vtkObject\n\n",
    "This class is a replacement for malloc/free and new/delete for\nsoftware that has inherent memory leak or performance problems. For\nexample, external software such as the PLY library (vtkPLY) and VRML\nimporter (vtkVRMLImporter) are often written with lots of malloc()\ncalls but without the corresponding free() invocations. The class\nvtkOrderedTriangulator may create and delete millions of new/delete",
    "\ncalls. This class allows the overloading of the C++ new operator (or\nother memory allocation requests) by using the method\nAllocateMemory(). Memory is deleted with an invocation of CleanAll()\n(which deletes ALL memory; any given memory allocation cannot be\ndeleted). Note: a block size can be used to control the size of each\nmemory allocation. Requests for memory are fulfilled from the block\nuntil",
    " the block runs out, then a new block is created.\n\nCaveats:\n\nDo not use this class as a general replacement for system memory\nallocation.  This class should be used only as a last resort if\nmemory leaks cannot be tracked down and eliminated by conventional\nmeans. Also, deleting memory from vtkHeap is not supported. Only the\ndeletion of the entire heap is. (A Reset() method allows you to reuse\nprev",
    "iously allocated memory.)\n\nSee Also:\n\nvtkVRMLImporter vtkPLY vtkOrderedTriangulator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHeap(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHeapNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHeap", o) != 0)
    {
    Py_DECREF(o);
    }

}

