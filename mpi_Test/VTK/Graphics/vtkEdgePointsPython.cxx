// python wrapper for vtkEdgePoints
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
#include "vtkEdgePoints.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkEdgePoints(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkEdgePoints(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkEdgePointsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkEdgePointsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkEdgePoints_Doc();


static PyObject *
PyvtkEdgePoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgePoints *op = static_cast<vtkEdgePoints *>(vp);

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
      tempr = op->vtkEdgePoints::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgePoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgePoints *op = static_cast<vtkEdgePoints *>(vp);

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
      tempr = op->vtkEdgePoints::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgePoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgePoints *op = static_cast<vtkEdgePoints *>(vp);

  vtkEdgePoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkEdgePoints::NewInstance();
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
PyvtkEdgePoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkEdgePoints *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkEdgePoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEdgePoints_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgePoints *op = static_cast<vtkEdgePoints *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0);
      }
    else
      {
      op->vtkEdgePoints::SetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEdgePoints_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEdgePoints *op = static_cast<vtkEdgePoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValue();
      }
    else
      {
      tempr = op->vtkEdgePoints::GetValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEdgePoints_Methods[] = {
  {(char*)"GetClassName", PyvtkEdgePoints_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEdgePoints_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEdgePoints_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkEdgePoints\nC++: vtkEdgePoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEdgePoints_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEdgePoints\nC++: vtkEdgePoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetValue", PyvtkEdgePoints_SetValue, 1,
   (char*)"V.SetValue(float)\nC++: void SetValue(double a)\n\nSet/get the contour value.\n"},
  {(char*)"GetValue", PyvtkEdgePoints_GetValue, 1,
   (char*)"V.GetValue() -> float\nC++: double GetValue()\n\nSet/get the contour value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEdgePoints_StaticNew()
{
  return vtkEdgePoints::New();
}

PyObject *PyVTKClass_vtkEdgePointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEdgePoints_StaticNew,
    PyvtkEdgePoints_Methods,
    "vtkEdgePoints", modulename,
    NULL, NULL,
    PyvtkEdgePoints_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkEdgePoints_Doc()
{
  static const char *docstring[] = {
    "vtkEdgePoints - generate points on isosurface\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkEdgePoints is a filter that takes as input any dataset and\ngenerates for output a set of points that lie on an isosurface. The\npoints are created by interpolation along cells edges whose\nend-points are below and above the contour value.\n\nCaveats:\n\nvtkEdgePoints can be considered a \"poor man's\" dividing cubes\nalgorithm (see vtkDividingCubes). Points are generated only on the\nedges of cells, not ",
    "in the interior, and at lower density than\ndividing cubes. However, it is more general than dividing cubes since\nit treats any type of dataset.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEdgePoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEdgePointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEdgePoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

