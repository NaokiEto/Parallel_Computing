// python wrapper for vtkGeoGlobeSource
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
#include "vtkGeoGlobeSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoGlobeSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoGlobeSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoGlobeSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoGlobeSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGeoSourceNew
extern "C" { PyObject *PyVTKClass_vtkGeoSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkGeoSourceNew
#endif

static const char **PyvtkGeoGlobeSource_Doc();


static PyObject *
PyvtkGeoGlobeSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGlobeSource *op = static_cast<vtkGeoGlobeSource *>(vp);

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
      tempr = op->vtkGeoGlobeSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGlobeSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGlobeSource *op = static_cast<vtkGeoGlobeSource *>(vp);

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
      tempr = op->vtkGeoGlobeSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGlobeSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGlobeSource *op = static_cast<vtkGeoGlobeSource *>(vp);

  vtkGeoGlobeSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoGlobeSource::NewInstance();
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
PyvtkGeoGlobeSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoGlobeSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoGlobeSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGlobeSource_FetchRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FetchRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGlobeSource *op = static_cast<vtkGeoGlobeSource *>(vp);

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
      tempr = op->vtkGeoGlobeSource::FetchRoot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoGlobeSource_FetchChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FetchChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoGlobeSource *op = static_cast<vtkGeoGlobeSource *>(vp);

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
      tempr = op->vtkGeoGlobeSource::FetchChild(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoGlobeSource_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoGlobeSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoGlobeSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoGlobeSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoGlobeSource\nC++: vtkGeoGlobeSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoGlobeSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoGlobeSource\nC++: vtkGeoGlobeSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"FetchRoot", PyvtkGeoGlobeSource_FetchRoot, 1,
   (char*)"V.FetchRoot(vtkGeoTreeNode) -> bool\nC++: virtual bool FetchRoot(vtkGeoTreeNode *root)\n\nFetches a low-resolution sphere for the entire globe.\n"},
  {(char*)"FetchChild", PyvtkGeoGlobeSource_FetchChild, 1,
   (char*)"V.FetchChild(vtkGeoTreeNode, int, vtkGeoTreeNode) -> bool\nC++: virtual bool FetchChild(vtkGeoTreeNode *node, int index,\n    vtkGeoTreeNode *child)\n\nFetches a refined geometry patch, a section of a sphere.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoGlobeSource_StaticNew()
{
  return vtkGeoGlobeSource::New();
}

PyObject *PyVTKClass_vtkGeoGlobeSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoGlobeSource_StaticNew,
    PyvtkGeoGlobeSource_Methods,
    "vtkGeoGlobeSource", modulename,
    NULL, NULL,
    PyvtkGeoGlobeSource_Doc(),
    PyVTKClass_vtkGeoSourceNew(modulename));
  return cls;
}

const char **PyvtkGeoGlobeSource_Doc()
{
  static const char *docstring[] = {
    "vtkGeoGlobeSource - Spherical globe source.\n\n",
    "Superclass: vtkGeoSource\n\n",
    "vtkGeoGlobeSource is a 3D vtkGeoSource suitable for use in\nvtkGeoTerrain. It uses the vtkGlobeSource filter to produce terrain\npatches.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoGlobeSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoGlobeSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoGlobeSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

