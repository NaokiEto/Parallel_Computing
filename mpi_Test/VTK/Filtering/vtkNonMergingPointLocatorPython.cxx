// python wrapper for vtkNonMergingPointLocator
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
#include "vtkNonMergingPointLocator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkNonMergingPointLocator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkNonMergingPointLocator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkNonMergingPointLocatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkNonMergingPointLocatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointLocatorNew
extern "C" { PyObject *PyVTKClass_vtkPointLocatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointLocatorNew
#endif

static const char **PyvtkNonMergingPointLocator_Doc();


static PyObject *
PyvtkNonMergingPointLocator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

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
      tempr = op->vtkNonMergingPointLocator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonMergingPointLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

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
      tempr = op->vtkNonMergingPointLocator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonMergingPointLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

  vtkNonMergingPointLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkNonMergingPointLocator::NewInstance();
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
PyvtkNonMergingPointLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkNonMergingPointLocator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkNonMergingPointLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNonMergingPointLocator_IsInsertedPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

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
      tempr = op->vtkNonMergingPointLocator::IsInsertedPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkNonMergingPointLocator_IsInsertedPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

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
      tempr = op->vtkNonMergingPointLocator::IsInsertedPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkNonMergingPointLocator_IsInsertedPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkNonMergingPointLocator_IsInsertedPoint_s1(self, args);
    case 3:
      return PyvtkNonMergingPointLocator_IsInsertedPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsInsertedPoint");
  return NULL;
}



static PyObject *
PyvtkNonMergingPointLocator_InsertUniquePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniquePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

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
      tempr = op->vtkNonMergingPointLocator::InsertUniquePoint(temp0, temp1);
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

static PyMethodDef PyvtkNonMergingPointLocator_Methods[] = {
  {(char*)"GetClassName", PyvtkNonMergingPointLocator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNonMergingPointLocator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNonMergingPointLocator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkNonMergingPointLocator\nC++: vtkNonMergingPointLocator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNonMergingPointLocator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNonMergingPointLocator\nC++: vtkNonMergingPointLocator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"IsInsertedPoint", PyvtkNonMergingPointLocator_IsInsertedPoint, 1,
   (char*)"V.IsInsertedPoint((float, float, float)) -> int\nC++: virtual vtkIdType IsInsertedPoint(const double[3])\nV.IsInsertedPoint(float, float, float) -> int\nC++: virtual vtkIdType IsInsertedPoint(double, double, double)\n\nDetermine whether a given point x has been inserted into the\npoints list. Return the id of the already inserted point if it is\ntrue, or -1 else. Note this function always returns -1 since any\npoint is always inserted.\n"},
  {(char*)"InsertUniquePoint", PyvtkNonMergingPointLocator_InsertUniquePoint, 1,
   (char*)"V.InsertUniquePoint((float, float, float), int) -> int\nC++: virtual int InsertUniquePoint(const double x[3],\n    vtkIdType &ptId)\n\nDetermine whether a given point x has been inserted into the\npoints list. Return 0 if a duplicate has been inserted in the\nlist, or 1 else. Note this function always returns 1 since any\npoint is always inserted. The index of the point is returned via\nptId.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNonMergingPointLocator_StaticNew()
{
  return vtkNonMergingPointLocator::New();
}

PyObject *PyVTKClass_vtkNonMergingPointLocatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNonMergingPointLocator_StaticNew,
    PyvtkNonMergingPointLocator_Methods,
    "vtkNonMergingPointLocator", modulename,
    NULL, NULL,
    PyvtkNonMergingPointLocator_Doc(),
    PyVTKClass_vtkPointLocatorNew(modulename));
  return cls;
}

const char **PyvtkNonMergingPointLocator_Doc()
{
  static const char *docstring[] = {
    "vtkNonMergingPointLocator - direct / check-free point insertion.\n\n",
    "Superclass: vtkPointLocator\n\n",
    "As a special sub-class of vtkPointLocator, vtkNonMergingPointLocator\nis\n intended for direct / check-free insertion of points into a\nvtkPoints\n object. In other words, any given point is always directly inserted.\n The name emphasizes the difference between this class and its\nsibling\n class vtkMergePoints in that the latter class performs check-based\nzero\n tolerance point insertion (or to 'merge' e",
    "xactly duplicate /\ncoincident\n points) by exploiting the uniform bin mechanism employed by the\nparent\n class vtkPointLocator. vtkPointLocator allows for generic (zero and\nnon-\n zero) tolerance point insertion as well as point location.\n\nSee Also:\n\n\n vtkIncrementalPointLocator vtkPointLocator vtkMergePoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNonMergingPointLocator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNonMergingPointLocatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNonMergingPointLocator", o) != 0)
    {
    Py_DECREF(o);
    }

}

