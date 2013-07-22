// python wrapper for vtkMergePoints
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
#include "vtkMergePoints.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMergePoints(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMergePoints(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMergePointsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMergePointsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointLocatorNew
extern "C" { PyObject *PyVTKClass_vtkPointLocatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointLocatorNew
#endif

static const char **PyvtkMergePoints_Doc();


static PyObject *
PyvtkMergePoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

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
      tempr = op->vtkMergePoints::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergePoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

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
      tempr = op->vtkMergePoints::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergePoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

  vtkMergePoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMergePoints::NewInstance();
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
PyvtkMergePoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMergePoints *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMergePoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMergePoints_IsInsertedPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsInsertedPoint(temp0);
      }
    else
      {
      tempr = op->vtkMergePoints::IsInsertedPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMergePoints_IsInsertedPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

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
      tempr = op->IsInsertedPoint(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkMergePoints::IsInsertedPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMergePoints_IsInsertedPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkMergePoints_IsInsertedPoint_s1(self, args);
    case 3:
      return PyvtkMergePoints_IsInsertedPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsInsertedPoint");
  return NULL;
}



static PyObject *
PyvtkMergePoints_InsertUniquePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniquePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergePoints *op = static_cast<vtkMergePoints *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIdType temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertUniquePoint(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMergePoints::InsertUniquePoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMergePoints_Methods[] = {
  {(char*)"GetClassName", PyvtkMergePoints_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMergePoints_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMergePoints_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMergePoints\nC++: vtkMergePoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMergePoints_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMergePoints\nC++: vtkMergePoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsInsertedPoint", PyvtkMergePoints_IsInsertedPoint, 1,
   (char*)"V.IsInsertedPoint((float, float, float)) -> int\nC++: vtkIdType IsInsertedPoint(const double x[3])\nV.IsInsertedPoint(float, float, float) -> int\nC++: vtkIdType IsInsertedPoint(double x, double y, double z)\n\nDetermine whether point given by x[3] has been inserted into\npoints list. Return id of previously inserted point if this is\ntrue, otherwise return\n-1.\n"},
  {(char*)"InsertUniquePoint", PyvtkMergePoints_InsertUniquePoint, 1,
   (char*)"V.InsertUniquePoint((float, float, float), int) -> int\nC++: int InsertUniquePoint(const double x[3], vtkIdType &ptId)\n\nDetermine whether point given by x[3] has been inserted into\npoints list. Return 0 if point was already in the list, otherwise\nreturn 1. If the point was not in the list, it will be ADDED.  In\neither case, the id of the point (newly inserted or not) is\nreturned in the ptId argument. Note this combines the\nfunctionality of IsInsertedPoint() followed by a call to\nInsertNextPoint().\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMergePoints_StaticNew()
{
  return vtkMergePoints::New();
}

PyObject *PyVTKClass_vtkMergePointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMergePoints_StaticNew,
    PyvtkMergePoints_Methods,
    "vtkMergePoints", modulename,
    NULL, NULL,
    PyvtkMergePoints_Doc(),
    PyVTKClass_vtkPointLocatorNew(modulename));
  return cls;
}

const char **PyvtkMergePoints_Doc()
{
  static const char *docstring[] = {
    "vtkMergePoints - merge exactly coincident points\n\n",
    "Superclass: vtkPointLocator\n\n",
    "vtkMergePoints is a locator object to quickly locate points in 3D.\nThe primary difference between vtkMergePoints and its superclass\nvtkPointLocator is that vtkMergePoints merges precisely coincident\npoints and is therefore much faster.\n\nSee Also:\n\nvtkCleanPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMergePoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMergePointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMergePoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

