// python wrapper for vtkUnstructuredGridBunykRayCastFunction
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
#include "vtkUnstructuredGridBunykRayCastFunction.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGridBunykRayCastFunction(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGridBunykRayCastFunction(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridBunykRayCastFunctionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridBunykRayCastFunctionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridVolumeRayCastFunctionNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayCastFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridVolumeRayCastFunctionNew
#endif

static const char **PyvtkUnstructuredGridBunykRayCastFunction_Doc();


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

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
      tempr = op->vtkUnstructuredGridBunykRayCastFunction::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

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
      tempr = op->vtkUnstructuredGridBunykRayCastFunction::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  vtkUnstructuredGridBunykRayCastFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGridBunykRayCastFunction::NewInstance();
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
PyvtkUnstructuredGridBunykRayCastFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUnstructuredGridBunykRayCastFunction *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUnstructuredGridBunykRayCastFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGridBunykRayCastFunction::Initialize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Finalize();
      }
    else
      {
      op->vtkUnstructuredGridBunykRayCastFunction::Finalize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  vtkUnstructuredGridVolumeRayCastIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewIterator();
      }
    else
      {
      tempr = op->vtkUnstructuredGridBunykRayCastFunction::NewIterator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_GetViewToWorldMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewToWorldMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  vtkMatrix4x4 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetViewToWorldMatrix();
      }
    else
      {
      tempr = op->vtkUnstructuredGridBunykRayCastFunction::GetViewToWorldMatrix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_GetImageOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageOrigin();
      }
    else
      {
      tempr = op->vtkUnstructuredGridBunykRayCastFunction::GetImageOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBunykRayCastFunction_GetImageViewportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBunykRayCastFunction *op = static_cast<vtkUnstructuredGridBunykRayCastFunction *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageViewportSize();
      }
    else
      {
      tempr = op->vtkUnstructuredGridBunykRayCastFunction::GetImageViewportSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridBunykRayCastFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridBunykRayCastFunction_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridBunykRayCastFunction_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridBunykRayCastFunction_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGridBunykRayCastFunction\nC++: vtkUnstructuredGridBunykRayCastFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGridBunykRayCastFunction_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkUnstructuredGridBunykRayCastFunction\nC++: vtkUnstructuredGridBunykRayCastFunction *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkUnstructuredGridBunykRayCastFunction_Initialize, 1,
   (char*)"V.Initialize(vtkRenderer, vtkVolume)\nC++: virtual void Initialize(vtkRenderer *ren, vtkVolume *vol)\n\nCalled by the ray cast mapper at the start of rendering\n"},
  {(char*)"Finalize", PyvtkUnstructuredGridBunykRayCastFunction_Finalize, 1,
   (char*)"V.Finalize()\nC++: virtual void Finalize()\n\nCalled by the ray cast mapper at the end of rendering\n"},
  {(char*)"NewIterator", PyvtkUnstructuredGridBunykRayCastFunction_NewIterator, 1,
   (char*)"V.NewIterator() -> vtkUnstructuredGridVolumeRayCastIterator\nC++: virtual vtkUnstructuredGridVolumeRayCastIterator *NewIterator(\n    )\n\n"},
  {(char*)"GetViewToWorldMatrix", PyvtkUnstructuredGridBunykRayCastFunction_GetViewToWorldMatrix, 1,
   (char*)"V.GetViewToWorldMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetViewToWorldMatrix()\n\nAccess to an internal structure for the templated method.\n"},
  {(char*)"GetImageOrigin", PyvtkUnstructuredGridBunykRayCastFunction_GetImageOrigin, 1,
   (char*)"V.GetImageOrigin() -> (int, int)\nC++: int *GetImageOrigin()\n\nAccess to an internal structure for the templated method.\n"},
  {(char*)"GetImageViewportSize", PyvtkUnstructuredGridBunykRayCastFunction_GetImageViewportSize, 1,
   (char*)"V.GetImageViewportSize() -> (int, int)\nC++: int *GetImageViewportSize()\n\nAccess to an internal structure for the templated method.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGridBunykRayCastFunction_StaticNew()
{
  return vtkUnstructuredGridBunykRayCastFunction::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridBunykRayCastFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGridBunykRayCastFunction_StaticNew,
    PyvtkUnstructuredGridBunykRayCastFunction_Methods,
    "vtkUnstructuredGridBunykRayCastFunction", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridBunykRayCastFunction_Doc(),
    PyVTKClass_vtkUnstructuredGridVolumeRayCastFunctionNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridBunykRayCastFunction_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridBunykRayCastFunction - a superclass for ray\ncasting functions\n\n",
    "Superclass: vtkUnstructuredGridVolumeRayCastFunction\n\n",
    "vtkUnstructuredGridBunykRayCastFunction is a concrete implementation\nof a ray cast function for unstructured grid data. This class was\nbased on the paper \"Simple, Fast, Robust Ray Casting of Irregular\nGrids\" by Paul Bunyk, Arie Kaufmna, and Claudio Silva. This method is\nquite memory intensive (with extra explicit copies of the data) and\ntherefore should not be used for very large data. This method",
    " assumes\nthat the input data is composed entirely of tetras - use\nvtkDataSetTriangleFilter before setting the input on the mapper.\n\nThe basic idea of this method is as follows:\n\n1) Enumerate the triangles. At each triangle have space for some\n   information that will be used during rendering. This includes\n   which tetra the triangles belong to, the plane equation and the\n   Barycentric coefficien",
    "ts.\n\n2) Keep a reference to all four triangles for each tetra.\n\n3) At the beginning of each render, do the precomputation. This\n   includes creating an array of transformed points (in view\n   coordinates) and computing the view dependent info per triangle\n   (plane equations and barycentric coords in view space)\n\n4) Find all front facing boundary triangles (a triangle is on the\n   boundary if it b",
    "elongs to only one tetra). For each triangle, find\nall pixels in the image that intersect the triangle, and add this to\n   the sorted (by depth) intersection list at each pixel.\n\n5) For each ray cast, traverse the intersection list. At each\n   intersection, accumulate opacity and color contribution per tetra\n   along the ray until you reach an exiting triangle (on the\n   boundary).\n\nSee Also:\n\nvtk",
    "UnstructuredGridVolumeRayCastMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridBunykRayCastFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridBunykRayCastFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridBunykRayCastFunction", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(10000);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BUNYKRCF_MAX_ARRAYS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(10000);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_BUNYKRCF_ARRAY_SIZE", o) != 0)
    {
    Py_DECREF(o);
    }

}

