// python wrapper for vtkGeoSource
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
#include "vtkGeoSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGeoSource_Doc();


static PyObject *
PyvtkGeoSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSource *op = static_cast<vtkGeoSource *>(vp);

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
      tempr = op->vtkGeoSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSource *op = static_cast<vtkGeoSource *>(vp);

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
      tempr = op->vtkGeoSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSource *op = static_cast<vtkGeoSource *>(vp);

  vtkGeoSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoSource::NewInstance();
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
PyvtkGeoSource_FetchRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FetchRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSource *op = static_cast<vtkGeoSource *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode"))
    {
    tempr = op->FetchRoot(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSource_FetchChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FetchChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSource *op = static_cast<vtkGeoSource *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  int temp1;
  vtkGeoTreeNode *temp2 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGeoTreeNode"))
    {
    tempr = op->FetchChild(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSource_RequestChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequestChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSource *op = static_cast<vtkGeoSource *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode"))
    {
    if (ap.IsBound())
      {
      op->RequestChildren(temp0);
      }
    else
      {
      op->vtkGeoSource::RequestChildren(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSource_GetRequestedNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestedNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSource *op = static_cast<vtkGeoSource *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  vtkCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRequestedNodes(temp0);
      }
    else
      {
      tempr = op->vtkGeoSource::GetRequestedNodes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSource_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSource *op = static_cast<vtkGeoSource *>(vp);

  int temp0 = 1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkGeoSource::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSource_ShutDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShutDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSource *op = static_cast<vtkGeoSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShutDown();
      }
    else
      {
      op->vtkGeoSource::ShutDown();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSource_WorkerThread(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WorkerThread");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSource *op = static_cast<vtkGeoSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WorkerThread();
      }
    else
      {
      op->vtkGeoSource::WorkerThread();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSource_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSource *op = static_cast<vtkGeoSource *>(vp);

  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransform();
      }
    else
      {
      tempr = op->vtkGeoSource::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoSource_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoSource\nC++: vtkGeoSource *NewInstance()\n\n"},
  {(char*)"FetchRoot", PyvtkGeoSource_FetchRoot, 1,
   (char*)"V.FetchRoot(vtkGeoTreeNode) -> bool\nC++: virtual bool FetchRoot(vtkGeoTreeNode *root)\n\nBlocking access methods to be implemented in subclasses.\n"},
  {(char*)"FetchChild", PyvtkGeoSource_FetchChild, 1,
   (char*)"V.FetchChild(vtkGeoTreeNode, int, vtkGeoTreeNode) -> bool\nC++: virtual bool FetchChild(vtkGeoTreeNode *node, int index,\n    vtkGeoTreeNode *child)\n\nBlocking access methods to be implemented in subclasses.\n"},
  {(char*)"RequestChildren", PyvtkGeoSource_RequestChildren, 1,
   (char*)"V.RequestChildren(vtkGeoTreeNode)\nC++: virtual void RequestChildren(vtkGeoTreeNode *node)\n\nNon-blocking methods for to use from the main application. After\ncalling RequestChildren() for a certain node, GetRequestedNodes()\nwill after a certain period of time return a non-null pointer to\na collection of four vtkGeoTreeNode objects, which are the four\nchildren of the requested node. The collection is reference\ncounted, so you need to eventually call Delete() on the returned\ncollection pointer (if it is non-null).\n"},
  {(char*)"GetRequestedNodes", PyvtkGeoSource_GetRequestedNodes, 1,
   (char*)"V.GetRequestedNodes(vtkGeoTreeNode) -> vtkCollection\nC++: virtual vtkCollection *GetRequestedNodes(\n    vtkGeoTreeNode *node)\n\nNon-blocking methods for to use from the main application. After\ncalling RequestChildren() for a certain node, GetRequestedNodes()\nwill after a certain period of time return a non-null pointer to\na collection of four vtkGeoTreeNode objects, which are the four\nchildren of the requested node. The collection is reference\ncounted, so you need to eventually call Delete() on the returned\ncollection pointer (if it is non-null).\n"},
  {(char*)"Initialize", PyvtkGeoSource_Initialize, 1,
   (char*)"V.Initialize(int)\nC++: void Initialize(int numThreads=1)\n\nSpawn worker threads.\n"},
  {(char*)"ShutDown", PyvtkGeoSource_ShutDown, 1,
   (char*)"V.ShutDown()\nC++: void ShutDown()\n\nShut down the source. This terminates the thread and releases\nmemory.\n"},
  {(char*)"WorkerThread", PyvtkGeoSource_WorkerThread, 1,
   (char*)"V.WorkerThread()\nC++: void WorkerThread()\n\n"},
  {(char*)"GetTransform", PyvtkGeoSource_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform()\n\nReturn the projection transformation used by this source.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkGeoSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkGeoSource_Methods,
    "vtkGeoSource", modulename,
    NULL, NULL,
    PyvtkGeoSource_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGeoSource_Doc()
{
  static const char *docstring[] = {
    "vtkGeoSource - A multi-resolution geographic data source\n\n",
    "Superclass: vtkObject\n\n",
    "vtkGeoSource is an abstract superclass for all multi-resolution data\nsources shown in a geographic view like vtkGeoView or vtkGeoView2D.\nvtkGeoSource subclasses need to implement the FetchRoot() method,\nwhich fills a vtkGeoTreeNode with the low-res data at the root, and\nFetchChild(), which produces a refinement of a parent node. Other\ngeovis classes such as vtkGeoTerrain, vtkGeoTerrain2D, and\nvtkG",
    "eoAlignedImageSource use a vtkGeoSource subclass to build their\ngeometry or image caches which are stored in trees. The source itself\ndoes not maintain the tree, but simply provides a mechanism for\ngenerating refined tree nodes.\n\nSources are multi-threaded. Each source may have one or more worker\nthreads associated with it, which this superclass manages. It is\nessential that the FetchChild() metho",
    "d is thread-safe, since it may\nbe called from multiple workers simultaneously.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

