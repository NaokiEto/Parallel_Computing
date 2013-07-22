// python wrapper for vtkHyperOctreeSurfaceFilter
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
#include "vtkHyperOctreeSurfaceFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHyperOctreeSurfaceFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHyperOctreeSurfaceFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHyperOctreeSurfaceFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHyperOctreeSurfaceFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkHyperOctreeSurfaceFilter_Doc();


static PyObject *
PyvtkHyperOctreeSurfaceFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSurfaceFilter *op = static_cast<vtkHyperOctreeSurfaceFilter *>(vp);

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
      tempr = op->vtkHyperOctreeSurfaceFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSurfaceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSurfaceFilter *op = static_cast<vtkHyperOctreeSurfaceFilter *>(vp);

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
      tempr = op->vtkHyperOctreeSurfaceFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSurfaceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSurfaceFilter *op = static_cast<vtkHyperOctreeSurfaceFilter *>(vp);

  vtkHyperOctreeSurfaceFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHyperOctreeSurfaceFilter::NewInstance();
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
PyvtkHyperOctreeSurfaceFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHyperOctreeSurfaceFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHyperOctreeSurfaceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSurfaceFilter_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSurfaceFilter *op = static_cast<vtkHyperOctreeSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMerging(temp0);
      }
    else
      {
      op->vtkHyperOctreeSurfaceFilter::SetMerging(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSurfaceFilter_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSurfaceFilter *op = static_cast<vtkHyperOctreeSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMerging();
      }
    else
      {
      tempr = op->vtkHyperOctreeSurfaceFilter::GetMerging();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSurfaceFilter_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSurfaceFilter *op = static_cast<vtkHyperOctreeSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOn();
      }
    else
      {
      op->vtkHyperOctreeSurfaceFilter::MergingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSurfaceFilter_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSurfaceFilter *op = static_cast<vtkHyperOctreeSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergingOff();
      }
    else
      {
      op->vtkHyperOctreeSurfaceFilter::MergingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSurfaceFilter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSurfaceFilter *op = static_cast<vtkHyperOctreeSurfaceFilter *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkHyperOctreeSurfaceFilter::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSurfaceFilter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSurfaceFilter *op = static_cast<vtkHyperOctreeSurfaceFilter *>(vp);

  vtkIncrementalPointLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLocator();
      }
    else
      {
      tempr = op->vtkHyperOctreeSurfaceFilter::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSurfaceFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSurfaceFilter *op = static_cast<vtkHyperOctreeSurfaceFilter *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkHyperOctreeSurfaceFilter::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSurfaceFilter_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSurfaceFilter *op = static_cast<vtkHyperOctreeSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThroughCellIds(temp0);
      }
    else
      {
      op->vtkHyperOctreeSurfaceFilter::SetPassThroughCellIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSurfaceFilter_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSurfaceFilter *op = static_cast<vtkHyperOctreeSurfaceFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassThroughCellIds();
      }
    else
      {
      tempr = op->vtkHyperOctreeSurfaceFilter::GetPassThroughCellIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSurfaceFilter_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSurfaceFilter *op = static_cast<vtkHyperOctreeSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughCellIdsOn();
      }
    else
      {
      op->vtkHyperOctreeSurfaceFilter::PassThroughCellIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeSurfaceFilter_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeSurfaceFilter *op = static_cast<vtkHyperOctreeSurfaceFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughCellIdsOff();
      }
    else
      {
      op->vtkHyperOctreeSurfaceFilter::PassThroughCellIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperOctreeSurfaceFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperOctreeSurfaceFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperOctreeSurfaceFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperOctreeSurfaceFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHyperOctreeSurfaceFilter\nC++: vtkHyperOctreeSurfaceFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperOctreeSurfaceFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperOctreeSurfaceFilter\nC++: vtkHyperOctreeSurfaceFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMerging", PyvtkHyperOctreeSurfaceFilter_SetMerging, 1,
   (char*)"V.SetMerging(int)\nC++: void SetMerging(int a)\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"GetMerging", PyvtkHyperOctreeSurfaceFilter_GetMerging, 1,
   (char*)"V.GetMerging() -> int\nC++: int GetMerging()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"MergingOn", PyvtkHyperOctreeSurfaceFilter_MergingOn, 1,
   (char*)"V.MergingOn()\nC++: void MergingOn()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"MergingOff", PyvtkHyperOctreeSurfaceFilter_MergingOff, 1,
   (char*)"V.MergingOff()\nC++: void MergingOff()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {(char*)"SetLocator", PyvtkHyperOctreeSurfaceFilter_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkHyperOctreeSurfaceFilter_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetMTime", PyvtkHyperOctreeSurfaceFilter_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the locator.\n"},
  {(char*)"SetPassThroughCellIds", PyvtkHyperOctreeSurfaceFilter_SetPassThroughCellIds, 1,
   (char*)"V.SetPassThroughCellIds(int)\nC++: void SetPassThroughCellIds(int a)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory.\n"},
  {(char*)"GetPassThroughCellIds", PyvtkHyperOctreeSurfaceFilter_GetPassThroughCellIds, 1,
   (char*)"V.GetPassThroughCellIds() -> int\nC++: int GetPassThroughCellIds()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory.\n"},
  {(char*)"PassThroughCellIdsOn", PyvtkHyperOctreeSurfaceFilter_PassThroughCellIdsOn, 1,
   (char*)"V.PassThroughCellIdsOn()\nC++: void PassThroughCellIdsOn()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory.\n"},
  {(char*)"PassThroughCellIdsOff", PyvtkHyperOctreeSurfaceFilter_PassThroughCellIdsOff, 1,
   (char*)"V.PassThroughCellIdsOff()\nC++: void PassThroughCellIdsOff()\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperOctreeSurfaceFilter_StaticNew()
{
  return vtkHyperOctreeSurfaceFilter::New();
}

PyObject *PyVTKClass_vtkHyperOctreeSurfaceFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperOctreeSurfaceFilter_StaticNew,
    PyvtkHyperOctreeSurfaceFilter_Methods,
    "vtkHyperOctreeSurfaceFilter", modulename,
    NULL, NULL,
    PyvtkHyperOctreeSurfaceFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHyperOctreeSurfaceFilter_Doc()
{
  static const char *docstring[] = {
    "vtkHyperOctreeSurfaceFilter - Extracts outer (polygonal) surface.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkHyperOctreeSurfaceFilter extracts the surface of an hyperoctree.\n\nSee Also:\n\nvtkGeometryFilter vtkStructuredGridGeometryFilter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperOctreeSurfaceFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperOctreeSurfaceFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperOctreeSurfaceFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

