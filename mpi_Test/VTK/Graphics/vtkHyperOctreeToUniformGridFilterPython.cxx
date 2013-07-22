// python wrapper for vtkHyperOctreeToUniformGridFilter
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
#include "vtkHyperOctreeToUniformGridFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHyperOctreeToUniformGridFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHyperOctreeToUniformGridFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHyperOctreeToUniformGridFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHyperOctreeToUniformGridFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkHyperOctreeToUniformGridFilter_Doc();


static PyObject *
PyvtkHyperOctreeToUniformGridFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeToUniformGridFilter *op = static_cast<vtkHyperOctreeToUniformGridFilter *>(vp);

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
      tempr = op->vtkHyperOctreeToUniformGridFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeToUniformGridFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeToUniformGridFilter *op = static_cast<vtkHyperOctreeToUniformGridFilter *>(vp);

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
      tempr = op->vtkHyperOctreeToUniformGridFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeToUniformGridFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeToUniformGridFilter *op = static_cast<vtkHyperOctreeToUniformGridFilter *>(vp);

  vtkHyperOctreeToUniformGridFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHyperOctreeToUniformGridFilter::NewInstance();
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
PyvtkHyperOctreeToUniformGridFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHyperOctreeToUniformGridFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHyperOctreeToUniformGridFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperOctreeToUniformGridFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperOctreeToUniformGridFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperOctreeToUniformGridFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperOctreeToUniformGridFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHyperOctreeToUniformGridFilter\nC++: vtkHyperOctreeToUniformGridFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperOctreeToUniformGridFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperOctreeToUniformGridFilter\nC++: vtkHyperOctreeToUniformGridFilter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperOctreeToUniformGridFilter_StaticNew()
{
  return vtkHyperOctreeToUniformGridFilter::New();
}

PyObject *PyVTKClass_vtkHyperOctreeToUniformGridFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperOctreeToUniformGridFilter_StaticNew,
    PyvtkHyperOctreeToUniformGridFilter_Methods,
    "vtkHyperOctreeToUniformGridFilter", modulename,
    NULL, NULL,
    PyvtkHyperOctreeToUniformGridFilter_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHyperOctreeToUniformGridFilter_Doc()
{
  static const char *docstring[] = {
    "vtkHyperOctreeToUniformGridFilter - Flat the octree into a uniform\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkHyperOctreeToUniformGridFilter creates a uniform grid with a\nresolution based on the number of levels of the hyperoctree. Then, it\ncopies celldata in each cell of the uniform grid that belongs to an\nactual leaf of the hyperoctree.\n\nSee Also:\n\nvtkGeometryFilter vtkStructuredGridGeometryFilter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperOctreeToUniformGridFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperOctreeToUniformGridFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperOctreeToUniformGridFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

