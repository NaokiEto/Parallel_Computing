// python wrapper for vtkKdTreePointLocator
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
#include "vtkKdTreePointLocator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkKdTreePointLocator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkKdTreePointLocator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkKdTreePointLocatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkKdTreePointLocatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractPointLocatorNew
extern "C" { PyObject *PyVTKClass_vtkAbstractPointLocatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractPointLocatorNew
#endif

static const char **PyvtkKdTreePointLocator_Doc();


static PyObject *
PyvtkKdTreePointLocator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreePointLocator *op = static_cast<vtkKdTreePointLocator *>(vp);

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
      tempr = op->vtkKdTreePointLocator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreePointLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreePointLocator *op = static_cast<vtkKdTreePointLocator *>(vp);

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
      tempr = op->vtkKdTreePointLocator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreePointLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreePointLocator *op = static_cast<vtkKdTreePointLocator *>(vp);

  vtkKdTreePointLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkKdTreePointLocator::NewInstance();
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
PyvtkKdTreePointLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkKdTreePointLocator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkKdTreePointLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreePointLocator_FindClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreePointLocator *op = static_cast<vtkKdTreePointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      tempr = op->FindClosestPoint(temp0);
      }
    else
      {
      tempr = op->vtkKdTreePointLocator::FindClosestPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreePointLocator_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreePointLocator *op = static_cast<vtkKdTreePointLocator *>(vp);

  double temp0;
  double temp1[3];
  const int size1 = 3;
  double temp2;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->FindClosestPointWithinRadius(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkKdTreePointLocator::FindClosestPointWithinRadius(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreePointLocator_FindClosestNPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreePointLocator *op = static_cast<vtkKdTreePointLocator *>(vp);

  int temp0;
  double temp1[3];
  const int size1 = 3;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->FindClosestNPoints(temp0, temp1, temp2);
      }
    else
      {
      op->vtkKdTreePointLocator::FindClosestNPoints(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreePointLocator_FindPointsWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreePointLocator *op = static_cast<vtkKdTreePointLocator *>(vp);

  double temp0;
  double temp1[3];
  const int size1 = 3;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->FindPointsWithinRadius(temp0, temp1, temp2);
      }
    else
      {
      op->vtkKdTreePointLocator::FindPointsWithinRadius(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreePointLocator_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreePointLocator *op = static_cast<vtkKdTreePointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeSearchStructure();
      }
    else
      {
      op->vtkKdTreePointLocator::FreeSearchStructure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreePointLocator_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreePointLocator *op = static_cast<vtkKdTreePointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildLocator();
      }
    else
      {
      op->vtkKdTreePointLocator::BuildLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdTreePointLocator_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreePointLocator *op = static_cast<vtkKdTreePointLocator *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GenerateRepresentation(temp0, temp1);
      }
    else
      {
      op->vtkKdTreePointLocator::GenerateRepresentation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkKdTreePointLocator_Methods[] = {
  {(char*)"GetClassName", PyvtkKdTreePointLocator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkKdTreePointLocator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkKdTreePointLocator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkKdTreePointLocator\nC++: vtkKdTreePointLocator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkKdTreePointLocator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkKdTreePointLocator\nC++: vtkKdTreePointLocator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"FindClosestPoint", PyvtkKdTreePointLocator_FindClosestPoint, 1,
   (char*)"V.FindClosestPoint((float, float, float)) -> int\nC++: virtual vtkIdType FindClosestPoint(const double x[3])\n\nGiven a position x, return the id of the point closest to it.\nAlternative method requires separate x-y-z values. These methods\nare thread safe if BuildLocator() is directly or indirectly\ncalled from a single thread first.\n"},
  {(char*)"FindClosestPointWithinRadius", PyvtkKdTreePointLocator_FindClosestPointWithinRadius, 1,
   (char*)"V.FindClosestPointWithinRadius(float, (float, float, float),\n    float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double radius,\n     const double x[3], double &dist2)\n\nGiven a position x and a radius r, return the id of the point\nclosest to the point in that radius. dist2 returns the squared\ndistance to the point.\n"},
  {(char*)"FindClosestNPoints", PyvtkKdTreePointLocator_FindClosestNPoints, 1,
   (char*)"V.FindClosestNPoints(int, (float, float, float), vtkIdList)\nC++: virtual void FindClosestNPoints(int N, const double x[3],\n    vtkIdList *result)\n\nFind the closest N points to a position. This returns the closest\nN points to a position. A faster method could be created that\nreturned N close points to a position, but necessarily the exact\nN closest. The returned points are sorted from closest to\nfarthest. These methods are thread safe if BuildLocator() is\ndirectly or indirectly called from a single thread first.\n"},
  {(char*)"FindPointsWithinRadius", PyvtkKdTreePointLocator_FindPointsWithinRadius, 1,
   (char*)"V.FindPointsWithinRadius(float, (float, float, float), vtkIdList)\nC++: virtual void FindPointsWithinRadius(double R,\n    const double x[3], vtkIdList *result)\n\nFind all points within a specified radius R of position x. The\nresult is not sorted in any specific manner. These methods are\nthread safe if BuildLocator() is directly or indirectly called\nfrom a single thread first.\n"},
  {(char*)"FreeSearchStructure", PyvtkKdTreePointLocator_FreeSearchStructure, 1,
   (char*)"V.FreeSearchStructure()\nC++: virtual void FreeSearchStructure()\n\nSee vtkLocator interface documentation. These methods are not\nthread safe.\n"},
  {(char*)"BuildLocator", PyvtkKdTreePointLocator_BuildLocator, 1,
   (char*)"V.BuildLocator()\nC++: virtual void BuildLocator()\n\nSee vtkLocator interface documentation. These methods are not\nthread safe.\n"},
  {(char*)"GenerateRepresentation", PyvtkKdTreePointLocator_GenerateRepresentation, 1,
   (char*)"V.GenerateRepresentation(int, vtkPolyData)\nC++: virtual void GenerateRepresentation(int level,\n    vtkPolyData *pd)\n\nSee vtkLocator interface documentation. These methods are not\nthread safe.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkKdTreePointLocator_StaticNew()
{
  return vtkKdTreePointLocator::New();
}

PyObject *PyVTKClass_vtkKdTreePointLocatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkKdTreePointLocator_StaticNew,
    PyvtkKdTreePointLocator_Methods,
    "vtkKdTreePointLocator", modulename,
    NULL, NULL,
    PyvtkKdTreePointLocator_Doc(),
    PyVTKClass_vtkAbstractPointLocatorNew(modulename));
  return cls;
}

const char **PyvtkKdTreePointLocator_Doc()
{
  static const char *docstring[] = {
    "vtkKdTreePointLocator - class to quickly locate points in 3-space\n\n",
    "Superclass: vtkAbstractPointLocator\n\n",
    "vtkKdTreePointLocator is a wrapper class that derives from\nvtkAbstractPointLocator and calls the search functions in vtkKdTree.\n\nSee Also:\n\nvtkKdTree\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkKdTreePointLocator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkKdTreePointLocatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkKdTreePointLocator", o) != 0)
    {
    Py_DECREF(o);
    }

}

