// python wrapper for vtkMeanValueCoordinatesInterpolator
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
#include "vtkMeanValueCoordinatesInterpolator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMeanValueCoordinatesInterpolator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMeanValueCoordinatesInterpolator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMeanValueCoordinatesInterpolatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMeanValueCoordinatesInterpolatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMeanValueCoordinatesInterpolator_Doc();


static PyObject *
PyvtkMeanValueCoordinatesInterpolator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeanValueCoordinatesInterpolator *op = static_cast<vtkMeanValueCoordinatesInterpolator *>(vp);

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
      tempr = op->vtkMeanValueCoordinatesInterpolator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeanValueCoordinatesInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeanValueCoordinatesInterpolator *op = static_cast<vtkMeanValueCoordinatesInterpolator *>(vp);

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
      tempr = op->vtkMeanValueCoordinatesInterpolator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeanValueCoordinatesInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeanValueCoordinatesInterpolator *op = static_cast<vtkMeanValueCoordinatesInterpolator *>(vp);

  vtkMeanValueCoordinatesInterpolator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMeanValueCoordinatesInterpolator::NewInstance();
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
PyvtkMeanValueCoordinatesInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMeanValueCoordinatesInterpolator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMeanValueCoordinatesInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMeanValueCoordinatesInterpolator_Methods[] = {
  {(char*)"GetClassName", PyvtkMeanValueCoordinatesInterpolator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMeanValueCoordinatesInterpolator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMeanValueCoordinatesInterpolator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMeanValueCoordinatesInterpolator\nC++: vtkMeanValueCoordinatesInterpolator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMeanValueCoordinatesInterpolator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMeanValueCoordinatesInterpolator\nC++: vtkMeanValueCoordinatesInterpolator *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMeanValueCoordinatesInterpolator_StaticNew()
{
  return vtkMeanValueCoordinatesInterpolator::New();
}

PyObject *PyVTKClass_vtkMeanValueCoordinatesInterpolatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMeanValueCoordinatesInterpolator_StaticNew,
    PyvtkMeanValueCoordinatesInterpolator_Methods,
    "vtkMeanValueCoordinatesInterpolator", modulename,
    NULL, NULL,
    PyvtkMeanValueCoordinatesInterpolator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMeanValueCoordinatesInterpolator_Doc()
{
  static const char *docstring[] = {
    "vtkMeanValueCoordinatesInterpolator - compute interpolation computes\n\n",
    "Superclass: vtkObject\n\n",
    "vtkMeanValueCoordinatesInterpolator computes interpolation weights\nfor a closed, manifold polyhedron mesh.  Once computed, the\ninterpolation weights can be used to interpolate data anywhere\ninterior or exterior to the mesh. This work implements two MVC\nalgorithms. The first one is for triangular meshes which is\ndocumented in the Siggraph 2005 paper by Tao Ju, Scot Schaefer and\nJoe Warren from Rice",
    " University \"Mean Value Coordinates for Closed\nTriangular Meshes\". The second one is for general polyhedron mesh\nwhich is documented in the Eurographics Symposium on Geometry\nProcessing 2006 paper by Torsten Langer, Alexander Belyaev and\nHans-Peter Seidel from MPI Informatik \"Spherical Barycentric\nCoordinates\". The filter will automatically choose which algorithm to\nuse based on whether the input ",
    "mesh is triangulated or not.\n\nIn VTK this class was initially created to interpolate data across\npolyhedral cells. In addition, the class can be used to interpolate\ndata values from a polyhedron mesh, and to smoothly deform a mesh\nfrom an associated control mesh.\n\nSee Also:\n\nvtkPolyhedralCell\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMeanValueCoordinatesInterpolator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMeanValueCoordinatesInterpolatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMeanValueCoordinatesInterpolator", o) != 0)
    {
    Py_DECREF(o);
    }

}

