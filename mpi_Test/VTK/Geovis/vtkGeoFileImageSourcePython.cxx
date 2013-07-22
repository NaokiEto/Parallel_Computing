// python wrapper for vtkGeoFileImageSource
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
#include "vtkGeoFileImageSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoFileImageSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoFileImageSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoFileImageSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoFileImageSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGeoSourceNew
extern "C" { PyObject *PyVTKClass_vtkGeoSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkGeoSourceNew
#endif

static const char **PyvtkGeoFileImageSource_Doc();


static PyObject *
PyvtkGeoFileImageSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoFileImageSource *op = static_cast<vtkGeoFileImageSource *>(vp);

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
      tempr = op->vtkGeoFileImageSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoFileImageSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoFileImageSource *op = static_cast<vtkGeoFileImageSource *>(vp);

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
      tempr = op->vtkGeoFileImageSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoFileImageSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoFileImageSource *op = static_cast<vtkGeoFileImageSource *>(vp);

  vtkGeoFileImageSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoFileImageSource::NewInstance();
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
PyvtkGeoFileImageSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoFileImageSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoFileImageSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoFileImageSource_FetchRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FetchRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoFileImageSource *op = static_cast<vtkGeoFileImageSource *>(vp);

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
      tempr = op->vtkGeoFileImageSource::FetchRoot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoFileImageSource_FetchChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FetchChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoFileImageSource *op = static_cast<vtkGeoFileImageSource *>(vp);

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
      tempr = op->vtkGeoFileImageSource::FetchChild(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoFileImageSource_SetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoFileImageSource *op = static_cast<vtkGeoFileImageSource *>(vp);

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
      op->vtkGeoFileImageSource::SetPath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoFileImageSource_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoFileImageSource *op = static_cast<vtkGeoFileImageSource *>(vp);

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
      tempr = op->vtkGeoFileImageSource::GetPath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoFileImageSource_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoFileImageSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoFileImageSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoFileImageSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoFileImageSource\nC++: vtkGeoFileImageSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoFileImageSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoFileImageSource\nC++: vtkGeoFileImageSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"FetchRoot", PyvtkGeoFileImageSource_FetchRoot, 1,
   (char*)"V.FetchRoot(vtkGeoTreeNode) -> bool\nC++: virtual bool FetchRoot(vtkGeoTreeNode *root)\n\nFetches the root image representing the whole globe.\n"},
  {(char*)"FetchChild", PyvtkGeoFileImageSource_FetchChild, 1,
   (char*)"V.FetchChild(vtkGeoTreeNode, int, vtkGeoTreeNode) -> bool\nC++: virtual bool FetchChild(vtkGeoTreeNode *node, int index,\n    vtkGeoTreeNode *child)\n\nFetches the child image of a parent from disk.\n"},
  {(char*)"SetPath", PyvtkGeoFileImageSource_SetPath, 1,
   (char*)"V.SetPath(string)\nC++: void SetPath(char *)\n\nThe path the tiled image database.\n"},
  {(char*)"GetPath", PyvtkGeoFileImageSource_GetPath, 1,
   (char*)"V.GetPath() -> string\nC++: char *GetPath()\n\nThe path the tiled image database.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoFileImageSource_StaticNew()
{
  return vtkGeoFileImageSource::New();
}

PyObject *PyVTKClass_vtkGeoFileImageSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoFileImageSource_StaticNew,
    PyvtkGeoFileImageSource_Methods,
    "vtkGeoFileImageSource", modulename,
    NULL, NULL,
    PyvtkGeoFileImageSource_Doc(),
    PyVTKClass_vtkGeoSourceNew(modulename));
  return cls;
}

const char **PyvtkGeoFileImageSource_Doc()
{
  static const char *docstring[] = {
    "vtkGeoFileImageSource - A tiled image source on disk.\n\n",
    "Superclass: vtkGeoSource\n\n",
    "vtkGeoFileImageSource is a vtkGeoSource that fetches .vti images from\ndisk in a directory with a certain naming scheme. You may use\nvtkGeoAlignedImageRepresentation's SaveDatabase method to generate an\ndatabase of image tiles in this format.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoFileImageSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoFileImageSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoFileImageSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

