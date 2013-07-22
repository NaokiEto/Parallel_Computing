// python wrapper for vtkAbstractPointLocator
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
#include "vtkAbstractPointLocator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAbstractPointLocator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAbstractPointLocator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAbstractPointLocatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAbstractPointLocatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkLocatorNew
extern "C" { PyObject *PyVTKClass_vtkLocatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkLocatorNew
#endif

static const char **PyvtkAbstractPointLocator_Doc();


static PyObject *
PyvtkAbstractPointLocator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

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
      tempr = op->vtkAbstractPointLocator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPointLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

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
      tempr = op->vtkAbstractPointLocator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPointLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  vtkAbstractPointLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAbstractPointLocator::NewInstance();
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
PyvtkAbstractPointLocator_FindClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    tempr = op->FindClosestPoint(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractPointLocator_FindClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->FindClosestPoint(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkAbstractPointLocator::FindClosestPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractPointLocator_FindClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAbstractPointLocator_FindClosestPoint_s1(self, args);
    case 3:
      return PyvtkAbstractPointLocator_FindClosestPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPoint");
  return NULL;
}



static PyObject *
PyvtkAbstractPointLocator_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  double temp0;
  double temp1[3];
  const int size1 = 3;
  double temp2;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    tempr = op->FindClosestPointWithinRadius(temp0, temp1, temp2);

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
PyvtkAbstractPointLocator_FindClosestNPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  int temp0;
  double temp1[3];
  const int size1 = 3;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    op->FindClosestNPoints(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractPointLocator_FindClosestNPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  vtkIdList *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->FindClosestNPoints(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkAbstractPointLocator::FindClosestNPoints(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractPointLocator_FindClosestNPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAbstractPointLocator_FindClosestNPoints_s1(self, args);
    case 5:
      return PyvtkAbstractPointLocator_FindClosestNPoints_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestNPoints");
  return NULL;
}



static PyObject *
PyvtkAbstractPointLocator_FindPointsWithinRadius_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  double temp0;
  double temp1[3];
  const int size1 = 3;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    op->FindPointsWithinRadius(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractPointLocator_FindPointsWithinRadius_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  vtkIdList *temp4 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->FindPointsWithinRadius(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkAbstractPointLocator::FindPointsWithinRadius(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractPointLocator_FindPointsWithinRadius(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkAbstractPointLocator_FindPointsWithinRadius_s1(self, args);
    case 5:
      return PyvtkAbstractPointLocator_FindPointsWithinRadius_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindPointsWithinRadius");
  return NULL;
}



static PyObject *
PyvtkAbstractPointLocator_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->FreeSearchStructure();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPointLocator_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->BuildLocator();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractPointLocator_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPointLocator *op = static_cast<vtkAbstractPointLocator *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    op->GenerateRepresentation(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractPointLocator_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractPointLocator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractPointLocator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractPointLocator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAbstractPointLocator\nC++: vtkAbstractPointLocator *NewInstance()\n\n"},
  {(char*)"FindClosestPoint", PyvtkAbstractPointLocator_FindClosestPoint, 1,
   (char*)"V.FindClosestPoint((float, float, float)) -> int\nC++: virtual vtkIdType FindClosestPoint(const double x[3])\nV.FindClosestPoint(float, float, float) -> int\nC++: vtkIdType FindClosestPoint(double x, double y, double z)\n\nGiven a position x, return the id of the point closest to it.\nAlternative method requires separate x-y-z values. These methods\nare thread safe if BuildLocator() is directly or indirectly\ncalled from a single thread first.\n"},
  {(char*)"FindClosestPointWithinRadius", PyvtkAbstractPointLocator_FindClosestPointWithinRadius, 1,
   (char*)"V.FindClosestPointWithinRadius(float, (float, float, float),\n    float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double radius,\n     const double x[3], double &dist2)\n\nGiven a position x and a radius r, return the id of the point\nclosest to the point in that radius. dist2 returns the squared\ndistance to the point.\n"},
  {(char*)"FindClosestNPoints", PyvtkAbstractPointLocator_FindClosestNPoints, 1,
   (char*)"V.FindClosestNPoints(int, (float, float, float), vtkIdList)\nC++: virtual void FindClosestNPoints(int N, const double x[3],\n    vtkIdList *result)\nV.FindClosestNPoints(int, float, float, float, vtkIdList)\nC++: void FindClosestNPoints(int N, double x, double y, double z,\n    vtkIdList *result)\n\nFind the closest N points to a position. This returns the closest\nN points to a position. A faster method could be created that\nreturned N close points to a position, but necessarily the exact\nN closest. The returned points are sorted from closest to\nfarthest. These methods are thread safe if BuildLocator() is\ndirectly or indirectly called from a single thread first.\n"},
  {(char*)"FindPointsWithinRadius", PyvtkAbstractPointLocator_FindPointsWithinRadius, 1,
   (char*)"V.FindPointsWithinRadius(float, (float, float, float), vtkIdList)\nC++: virtual void FindPointsWithinRadius(double R,\n    const double x[3], vtkIdList *result)\nV.FindPointsWithinRadius(float, float, float, float, vtkIdList)\nC++: void FindPointsWithinRadius(double R, double x, double y,\n    double z, vtkIdList *result)\n\nFind all points within a specified radius R of position x. The\nresult is not sorted in any specific manner. These methods are\nthread safe if BuildLocator() is directly or indirectly called\nfrom a single thread first.\n"},
  {(char*)"FreeSearchStructure", PyvtkAbstractPointLocator_FreeSearchStructure, 1,
   (char*)"V.FreeSearchStructure()\nC++: virtual void FreeSearchStructure()\n\nSee vtkLocator interface documentation. These methods are not\nthread safe.\n"},
  {(char*)"BuildLocator", PyvtkAbstractPointLocator_BuildLocator, 1,
   (char*)"V.BuildLocator()\nC++: virtual void BuildLocator()\n\nSee vtkLocator interface documentation. These methods are not\nthread safe.\n"},
  {(char*)"GenerateRepresentation", PyvtkAbstractPointLocator_GenerateRepresentation, 1,
   (char*)"V.GenerateRepresentation(int, vtkPolyData)\nC++: virtual void GenerateRepresentation(int level,\n    vtkPolyData *pd)\n\nSee vtkLocator interface documentation. These methods are not\nthread safe.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractPointLocatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractPointLocator_Methods,
    "vtkAbstractPointLocator", modulename,
    NULL, NULL,
    PyvtkAbstractPointLocator_Doc(),
    PyVTKClass_vtkLocatorNew(modulename));
  return cls;
}

const char **PyvtkAbstractPointLocator_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractPointLocator - abstract class to quickly locate points in\n3-space\n\n",
    "Superclass: vtkLocator\n\n",
    "vtkAbstractPointLocator is an abstract spatial search object to\nquickly locate points in 3D. vtkAbstractPointLocator works by\ndividing a specified region of space into \"rectangular\" buckets, and\nthen keeping a list of points that lie in each bucket. Typical\noperation involves giving a position in 3D and finding the closest\npoint.  The points are provided from the specified dataset input.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractPointLocator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractPointLocatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractPointLocator", o) != 0)
    {
    Py_DECREF(o);
    }

}

