// python wrapper for vtkGeoFileTerrainSource
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
#include "vtkGeoFileTerrainSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoFileTerrainSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoFileTerrainSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoFileTerrainSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoFileTerrainSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGeoSourceNew
extern "C" { PyObject *PyVTKClass_vtkGeoSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkGeoSourceNew
#endif

static const char **PyvtkGeoFileTerrainSource_Doc();


static PyObject *
PyvtkGeoFileTerrainSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoFileTerrainSource *op = static_cast<vtkGeoFileTerrainSource *>(vp);

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
      tempr = op->vtkGeoFileTerrainSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoFileTerrainSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoFileTerrainSource *op = static_cast<vtkGeoFileTerrainSource *>(vp);

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
      tempr = op->vtkGeoFileTerrainSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoFileTerrainSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoFileTerrainSource *op = static_cast<vtkGeoFileTerrainSource *>(vp);

  vtkGeoFileTerrainSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoFileTerrainSource::NewInstance();
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
PyvtkGeoFileTerrainSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoFileTerrainSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoFileTerrainSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoFileTerrainSource_FetchRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FetchRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoFileTerrainSource *op = static_cast<vtkGeoFileTerrainSource *>(vp);

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
      tempr = op->vtkGeoFileTerrainSource::FetchRoot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoFileTerrainSource_FetchChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FetchChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoFileTerrainSource *op = static_cast<vtkGeoFileTerrainSource *>(vp);

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
      tempr = op->vtkGeoFileTerrainSource::FetchChild(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoFileTerrainSource_SetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoFileTerrainSource *op = static_cast<vtkGeoFileTerrainSource *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPath(temp0);
      }
    else
      {
      op->vtkGeoFileTerrainSource::SetPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoFileTerrainSource_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoFileTerrainSource *op = static_cast<vtkGeoFileTerrainSource *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPath();
      }
    else
      {
      tempr = op->vtkGeoFileTerrainSource::GetPath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoFileTerrainSource_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoFileTerrainSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoFileTerrainSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoFileTerrainSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoFileTerrainSource\nC++: vtkGeoFileTerrainSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoFileTerrainSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoFileTerrainSource\nC++: vtkGeoFileTerrainSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"FetchRoot", PyvtkGeoFileTerrainSource_FetchRoot, 1,
   (char*)"V.FetchRoot(vtkGeoTreeNode) -> bool\nC++: virtual bool FetchRoot(vtkGeoTreeNode *root)\n\nRetrieve the root geometry representing the entire globe.\n"},
  {(char*)"FetchChild", PyvtkGeoFileTerrainSource_FetchChild, 1,
   (char*)"V.FetchChild(vtkGeoTreeNode, int, vtkGeoTreeNode) -> bool\nC++: virtual bool FetchChild(vtkGeoTreeNode *node, int index,\n    vtkGeoTreeNode *child)\n\nRetreive the child's geometry from disk.\n"},
  {(char*)"SetPath", PyvtkGeoFileTerrainSource_SetPath, 1,
   (char*)"V.SetPath(string)\nC++: void SetPath(char *)\n\nThe path the tiled geometry database.\n"},
  {(char*)"GetPath", PyvtkGeoFileTerrainSource_GetPath, 1,
   (char*)"V.GetPath() -> string\nC++: char *GetPath()\n\nThe path the tiled geometry database.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoFileTerrainSource_StaticNew()
{
  return vtkGeoFileTerrainSource::New();
}

PyObject *PyVTKClass_vtkGeoFileTerrainSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoFileTerrainSource_StaticNew,
    PyvtkGeoFileTerrainSource_Methods,
    "vtkGeoFileTerrainSource", modulename,
    NULL, NULL,
    PyvtkGeoFileTerrainSource_Doc(),
    PyVTKClass_vtkGeoSourceNew(modulename));
  return cls;
}

const char **PyvtkGeoFileTerrainSource_Doc()
{
  static const char *docstring[] = {
    "vtkGeoFileTerrainSource - A source for tiled geometry on disk.\n\n",
    "Superclass: vtkGeoSource\n\n",
    "vtkGeoFileTerrainSource reads geometry tiles as .vtp files from a\ndirectory that follow a certain naming convention containing the\nlevel of the patch and the position within that level. Use\nvtkGeoTerrain's SaveDatabase method to create a database of files in\nthis format.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoFileTerrainSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoFileTerrainSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoFileTerrainSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

