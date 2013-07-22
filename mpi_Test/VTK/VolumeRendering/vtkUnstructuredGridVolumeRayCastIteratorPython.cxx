// python wrapper for vtkUnstructuredGridVolumeRayCastIterator
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
#include "vtkUnstructuredGridVolumeRayCastIterator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGridVolumeRayCastIterator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGridVolumeRayCastIterator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayCastIteratorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayCastIteratorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkUnstructuredGridVolumeRayCastIterator_Doc();


static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastIterator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

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
      tempr = op->vtkUnstructuredGridVolumeRayCastIterator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  vtkUnstructuredGridVolumeRayCastIterator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGridVolumeRayCastIterator::NewInstance();
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
PyvtkUnstructuredGridVolumeRayCastIterator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->Initialize(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_GetNextIntersections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextIntersections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  vtkIdList *temp0 = NULL;
  vtkDoubleArray *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  vtkDataArray *temp3 = NULL;
  vtkDataArray *temp4 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkDoubleArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetVTKObject(temp4, "vtkDataArray"))
    {
    tempr = op->GetNextIntersections(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0, temp1);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRayCastIterator::SetBounds(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRayCastIterator::SetBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkUnstructuredGridVolumeRayCastIterator_SetBounds_s1(self, args);
    case 1:
      return PyvtkUnstructuredGridVolumeRayCastIterator_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBounds();
      }
    else
      {
      tempr = op->vtkUnstructuredGridVolumeRayCastIterator::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_SetMaxNumberOfIntersections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumberOfIntersections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxNumberOfIntersections(temp0);
      }
    else
      {
      op->vtkUnstructuredGridVolumeRayCastIterator::SetMaxNumberOfIntersections(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastIterator_GetMaxNumberOfIntersections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIntersections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastIterator *op = static_cast<vtkUnstructuredGridVolumeRayCastIterator *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxNumberOfIntersections();
      }
    else
      {
      tempr = op->vtkUnstructuredGridVolumeRayCastIterator::GetMaxNumberOfIntersections();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridVolumeRayCastIterator_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridVolumeRayCastIterator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridVolumeRayCastIterator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridVolumeRayCastIterator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGridVolumeRayCastIterator\nC++: vtkUnstructuredGridVolumeRayCastIterator *NewInstance()\n\n"},
  {(char*)"Initialize", PyvtkUnstructuredGridVolumeRayCastIterator_Initialize, 1,
   (char*)"V.Initialize(int, int)\nC++: virtual void Initialize(int x, int y)\n\nInitializes the iteration to the start of the ray at the given\nscreen coordinates.\n"},
  {(char*)"GetNextIntersections", PyvtkUnstructuredGridVolumeRayCastIterator_GetNextIntersections, 1,
   (char*)"V.GetNextIntersections(vtkIdList, vtkDoubleArray, vtkDataArray,\n    vtkDataArray, vtkDataArray) -> int\nC++: virtual vtkIdType GetNextIntersections(\n    vtkIdList *intersectedCells,\n    vtkDoubleArray *intersectionLengths, vtkDataArray *scalars,\n    vtkDataArray *nearIntersections,\n    vtkDataArray *farIntersections)\n\nGet the intersections of the next several cells.  The cell ids\nare stored in intersectedCells and the length of each ray segment\nwithin the cell is stored in intersectionLengths.  The point\nscalars scalars are interpolated and stored in nearIntersections\nand farIntersections.  intersectedCells, intersectionLengths, or\nscalars may be NULL to supress passing the associated\ninformation.  The number of intersections actually encountered is\nreturned.  0 is returned if and only if no more intersections are\nto be found.\n"},
  {(char*)"SetBounds", PyvtkUnstructuredGridVolumeRayCastIterator_SetBounds, 1,
   (char*)"V.SetBounds(float, float)\nC++: void SetBounds(double, double)\nV.SetBounds((float, float))\nC++: void SetBounds(double a[2])\n\n"},
  {(char*)"GetBounds", PyvtkUnstructuredGridVolumeRayCastIterator_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float)\nC++: double *GetBounds()\n\n"},
  {(char*)"SetMaxNumberOfIntersections", PyvtkUnstructuredGridVolumeRayCastIterator_SetMaxNumberOfIntersections, 1,
   (char*)"V.SetMaxNumberOfIntersections(int)\nC++: void SetMaxNumberOfIntersections(vtkIdType a)\n\n"},
  {(char*)"GetMaxNumberOfIntersections", PyvtkUnstructuredGridVolumeRayCastIterator_GetMaxNumberOfIntersections, 1,
   (char*)"V.GetMaxNumberOfIntersections() -> int\nC++: vtkIdType GetMaxNumberOfIntersections()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkUnstructuredGridVolumeRayCastIteratorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkUnstructuredGridVolumeRayCastIterator_Methods,
    "vtkUnstructuredGridVolumeRayCastIterator", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridVolumeRayCastIterator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridVolumeRayCastIterator_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridVolumeRayCastIterator\n\n",
    "Superclass: vtkObject\n\n",
    "vtkUnstructuredGridVolumeRayCastIterator is a superclass for\niterating over the intersections of a viewing ray with a group of\nunstructured cells.  These iterators are created with a\nvtkUnstructuredGridVolumeRayCastFunction.\n\nSee Also:\n\nvtkUnstructuredGridVolumeRayCastFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridVolumeRayCastIterator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridVolumeRayCastIteratorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridVolumeRayCastIterator", o) != 0)
    {
    Py_DECREF(o);
    }

}

