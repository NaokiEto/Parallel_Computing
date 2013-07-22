// python wrapper for vtkGeoTreeNodeCache
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
#include "vtkGeoTreeNodeCache.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoTreeNodeCache(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoTreeNodeCache(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoTreeNodeCacheNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoTreeNodeCacheNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGeoTreeNodeCache_Doc();


static PyObject *
PyvtkGeoTreeNodeCache_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNodeCache *op = static_cast<vtkGeoTreeNodeCache *>(vp);

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
      tempr = op->vtkGeoTreeNodeCache::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNodeCache_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNodeCache *op = static_cast<vtkGeoTreeNodeCache *>(vp);

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
      tempr = op->vtkGeoTreeNodeCache::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNodeCache_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNodeCache *op = static_cast<vtkGeoTreeNodeCache *>(vp);

  vtkGeoTreeNodeCache *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoTreeNodeCache::NewInstance();
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
PyvtkGeoTreeNodeCache_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoTreeNodeCache *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoTreeNodeCache::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNodeCache_SetCacheMaximumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheMaximumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNodeCache *op = static_cast<vtkGeoTreeNodeCache *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheMaximumLimit(temp0);
      }
    else
      {
      op->vtkGeoTreeNodeCache::SetCacheMaximumLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNodeCache_GetCacheMaximumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMaximumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNodeCache *op = static_cast<vtkGeoTreeNodeCache *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCacheMaximumLimit();
      }
    else
      {
      tempr = op->vtkGeoTreeNodeCache::GetCacheMaximumLimit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNodeCache_SetCacheMinimumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheMinimumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNodeCache *op = static_cast<vtkGeoTreeNodeCache *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheMinimumLimit(temp0);
      }
    else
      {
      op->vtkGeoTreeNodeCache::SetCacheMinimumLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNodeCache_GetCacheMinimumLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMinimumLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNodeCache *op = static_cast<vtkGeoTreeNodeCache *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCacheMinimumLimit();
      }
    else
      {
      tempr = op->vtkGeoTreeNodeCache::GetCacheMinimumLimit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNodeCache_SendToFront(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendToFront");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNodeCache *op = static_cast<vtkGeoTreeNodeCache *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode"))
    {
    if (ap.IsBound())
      {
      op->SendToFront(temp0);
      }
    else
      {
      op->vtkGeoTreeNodeCache::SendToFront(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNodeCache_RemoveNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNodeCache *op = static_cast<vtkGeoTreeNodeCache *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode"))
    {
    if (ap.IsBound())
      {
      op->RemoveNode(temp0);
      }
    else
      {
      op->vtkGeoTreeNodeCache::RemoveNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNodeCache_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNodeCache *op = static_cast<vtkGeoTreeNodeCache *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSize();
      }
    else
      {
      tempr = op->vtkGeoTreeNodeCache::GetSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoTreeNodeCache_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoTreeNodeCache_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoTreeNodeCache_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoTreeNodeCache_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoTreeNodeCache\nC++: vtkGeoTreeNodeCache *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoTreeNodeCache_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoTreeNodeCache\nC++: vtkGeoTreeNodeCache *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCacheMaximumLimit", PyvtkGeoTreeNodeCache_SetCacheMaximumLimit, 1,
   (char*)"V.SetCacheMaximumLimit(int)\nC++: void SetCacheMaximumLimit(int a)\n\nThe size of the cache of geospatial nodes. When the size reaches\nthis limit, the list of non-empty nodes will be shortened to\nCacheMinimumLimit.\n"},
  {(char*)"GetCacheMaximumLimit", PyvtkGeoTreeNodeCache_GetCacheMaximumLimit, 1,
   (char*)"V.GetCacheMaximumLimit() -> int\nC++: int GetCacheMaximumLimit()\n\nThe size of the cache of geospatial nodes. When the size reaches\nthis limit, the list of non-empty nodes will be shortened to\nCacheMinimumLimit.\n"},
  {(char*)"SetCacheMinimumLimit", PyvtkGeoTreeNodeCache_SetCacheMinimumLimit, 1,
   (char*)"V.SetCacheMinimumLimit(int)\nC++: void SetCacheMinimumLimit(int a)\n\nThe cache is reduced to this size when the maximum limit is\nreached.\n"},
  {(char*)"GetCacheMinimumLimit", PyvtkGeoTreeNodeCache_GetCacheMinimumLimit, 1,
   (char*)"V.GetCacheMinimumLimit() -> int\nC++: int GetCacheMinimumLimit()\n\nThe cache is reduced to this size when the maximum limit is\nreached.\n"},
  {(char*)"SendToFront", PyvtkGeoTreeNodeCache_SendToFront, 1,
   (char*)"V.SendToFront(vtkGeoTreeNode)\nC++: void SendToFront(vtkGeoTreeNode *node)\n\nSend a node to the front of the list. Perform this whenever a\nnode is accessed, so that the most recently accessed nodes' data\nare not deleted.\n"},
  {(char*)"RemoveNode", PyvtkGeoTreeNodeCache_RemoveNode, 1,
   (char*)"V.RemoveNode(vtkGeoTreeNode)\nC++: void RemoveNode(vtkGeoTreeNode *node)\n\nRemove the node from the list.\n"},
  {(char*)"GetSize", PyvtkGeoTreeNodeCache_GetSize, 1,
   (char*)"V.GetSize() -> int\nC++: int GetSize()\n\nThe current size of the list.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoTreeNodeCache_StaticNew()
{
  return vtkGeoTreeNodeCache::New();
}

PyObject *PyVTKClass_vtkGeoTreeNodeCacheNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoTreeNodeCache_StaticNew,
    PyvtkGeoTreeNodeCache_Methods,
    "vtkGeoTreeNodeCache", modulename,
    NULL, NULL,
    PyvtkGeoTreeNodeCache_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGeoTreeNodeCache_Doc()
{
  static const char *docstring[] = {
    "vtkGeoTreeNodeCache - Manages a list of vtkGeoTreeNodes.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkGeoTreeNodeCache keeps track of a linked list of vtkGeoTreeNodes,\nand has operations to move nodes to the front of the list and to\ndelete data from the least used nodes. This is used to recover memory\nfrom nodes that store data that hasn't been used in a while.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoTreeNodeCache(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoTreeNodeCacheNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoTreeNodeCache", o) != 0)
    {
    Py_DECREF(o);
    }

}

