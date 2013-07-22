// python wrapper for vtkGeoProjectionSource
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
#include "vtkGeoProjectionSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoProjectionSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoProjectionSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoProjectionSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoProjectionSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGeoSourceNew
extern "C" { PyObject *PyVTKClass_vtkGeoSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkGeoSourceNew
#endif

static const char **PyvtkGeoProjectionSource_Doc();


static PyObject *
PyvtkGeoProjectionSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjectionSource *op = static_cast<vtkGeoProjectionSource *>(vp);

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
      tempr = op->vtkGeoProjectionSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjectionSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjectionSource *op = static_cast<vtkGeoProjectionSource *>(vp);

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
      tempr = op->vtkGeoProjectionSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjectionSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjectionSource *op = static_cast<vtkGeoProjectionSource *>(vp);

  vtkGeoProjectionSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoProjectionSource::NewInstance();
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
PyvtkGeoProjectionSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoProjectionSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoProjectionSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjectionSource_FetchRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FetchRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjectionSource *op = static_cast<vtkGeoProjectionSource *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode"))
    {
    if (ap.IsBound())
      {
      tempr = op->FetchRoot(temp0);
      }
    else
      {
      tempr = op->vtkGeoProjectionSource::FetchRoot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjectionSource_FetchChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FetchChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjectionSource *op = static_cast<vtkGeoProjectionSource *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  int temp1;
  vtkGeoTreeNode *temp2 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGeoTreeNode"))
    {
    if (ap.IsBound())
      {
      tempr = op->FetchChild(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkGeoProjectionSource::FetchChild(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjectionSource_GetProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjectionSource *op = static_cast<vtkGeoProjectionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjection();
      }
    else
      {
      tempr = op->vtkGeoProjectionSource::GetProjection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjectionSource_SetProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjectionSource *op = static_cast<vtkGeoProjectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjection(temp0);
      }
    else
      {
      op->vtkGeoProjectionSource::SetProjection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjectionSource_GetMinCellsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinCellsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjectionSource *op = static_cast<vtkGeoProjectionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinCellsPerNode();
      }
    else
      {
      tempr = op->vtkGeoProjectionSource::GetMinCellsPerNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjectionSource_SetMinCellsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinCellsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjectionSource *op = static_cast<vtkGeoProjectionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinCellsPerNode(temp0);
      }
    else
      {
      op->vtkGeoProjectionSource::SetMinCellsPerNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoProjectionSource_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoProjectionSource *op = static_cast<vtkGeoProjectionSource *>(vp);

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
      tempr = op->vtkGeoProjectionSource::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoProjectionSource_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoProjectionSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoProjectionSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoProjectionSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoProjectionSource\nC++: vtkGeoProjectionSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoProjectionSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoProjectionSource\nC++: vtkGeoProjectionSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"FetchRoot", PyvtkGeoProjectionSource_FetchRoot, 1,
   (char*)"V.FetchRoot(vtkGeoTreeNode) -> bool\nC++: virtual bool FetchRoot(vtkGeoTreeNode *root)\n\nBlocking methods for sources with low latency.\n"},
  {(char*)"FetchChild", PyvtkGeoProjectionSource_FetchChild, 1,
   (char*)"V.FetchChild(vtkGeoTreeNode, int, vtkGeoTreeNode) -> bool\nC++: virtual bool FetchChild(vtkGeoTreeNode *node, int index,\n    vtkGeoTreeNode *child)\n\nBlocking methods for sources with low latency.\n"},
  {(char*)"GetProjection", PyvtkGeoProjectionSource_GetProjection, 1,
   (char*)"V.GetProjection() -> int\nC++: int GetProjection()\n\nThe projection ID defining the projection. Initial value is 0.\n"},
  {(char*)"SetProjection", PyvtkGeoProjectionSource_SetProjection, 1,
   (char*)"V.SetProjection(int)\nC++: virtual void SetProjection(int projection)\n\nThe projection ID defining the projection. Initial value is 0.\n"},
  {(char*)"GetMinCellsPerNode", PyvtkGeoProjectionSource_GetMinCellsPerNode, 1,
   (char*)"V.GetMinCellsPerNode() -> int\nC++: int GetMinCellsPerNode()\n\nThe minimum number of cells per node.\n"},
  {(char*)"SetMinCellsPerNode", PyvtkGeoProjectionSource_SetMinCellsPerNode, 1,
   (char*)"V.SetMinCellsPerNode(int)\nC++: void SetMinCellsPerNode(int a)\n\nThe minimum number of cells per node.\n"},
  {(char*)"GetTransform", PyvtkGeoProjectionSource_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform()\n\nReturn the projection transformation used by this 2D terrain.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoProjectionSource_StaticNew()
{
  return vtkGeoProjectionSource::New();
}

PyObject *PyVTKClass_vtkGeoProjectionSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoProjectionSource_StaticNew,
    PyvtkGeoProjectionSource_Methods,
    "vtkGeoProjectionSource", modulename,
    NULL, NULL,
    PyvtkGeoProjectionSource_Doc(),
    PyVTKClass_vtkGeoSourceNew(modulename));
  return cls;
}

const char **PyvtkGeoProjectionSource_Doc()
{
  static const char *docstring[] = {
    "vtkGeoProjectionSource - A 2D geographic geometry source\n\n",
    "Superclass: vtkGeoSource\n\n",
    "vtkGeoProjectionSource is a vtkGeoSource suitable for use in\nvtkTerrain2D. This source uses the libproj4 library to produce\ngeometry patches at multiple resolutions. Each patch covers a\nspecific region in projected space.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoProjectionSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoProjectionSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoProjectionSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

