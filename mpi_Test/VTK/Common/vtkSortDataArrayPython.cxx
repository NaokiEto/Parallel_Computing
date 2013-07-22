// python wrapper for vtkSortDataArray
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
#include "vtkSortDataArray.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSortDataArray(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSortDataArray(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSortDataArrayNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSortDataArrayNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSortDataArray_Doc();


static PyObject *
PyvtkSortDataArray_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortDataArray *op = static_cast<vtkSortDataArray *>(vp);

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
      tempr = op->vtkSortDataArray::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortDataArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortDataArray *op = static_cast<vtkSortDataArray *>(vp);

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
      tempr = op->vtkSortDataArray::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortDataArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortDataArray *op = static_cast<vtkSortDataArray *>(vp);

  vtkSortDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSortDataArray::NewInstance();
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
PyvtkSortDataArray_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSortDataArray *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSortDataArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSortDataArray_Sort_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkIdList *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    vtkSortDataArray::Sort(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    vtkSortDataArray::Sort(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkIdList *temp0 = NULL;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    vtkSortDataArray::Sort(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkIdList *temp0 = NULL;
  vtkAbstractArray *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
    {
    vtkSortDataArray::Sort(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkAbstractArray *temp0 = NULL;
  vtkIdList *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkIdList"))
    {
    vtkSortDataArray::Sort(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s6(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkAbstractArray *temp0 = NULL;
  vtkAbstractArray *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
    {
    vtkSortDataArray::Sort(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSortDataArray_Sort_Methods[] = {
  {NULL, PyvtkSortDataArray_Sort_s1, 1,
   (char*)"O *vtkIdList"},
  {NULL, PyvtkSortDataArray_Sort_s2, 1,
   (char*)"O *vtkAbstractArray"},
  {NULL, PyvtkSortDataArray_Sort_s3, 1,
   (char*)"OO *vtkIdList *vtkIdList"},
  {NULL, PyvtkSortDataArray_Sort_s4, 1,
   (char*)"OO *vtkIdList *vtkAbstractArray"},
  {NULL, PyvtkSortDataArray_Sort_s5, 1,
   (char*)"OO *vtkAbstractArray *vtkIdList"},
  {NULL, PyvtkSortDataArray_Sort_s6, 1,
   (char*)"OO *vtkAbstractArray *vtkAbstractArray"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSortDataArray_Sort(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSortDataArray_Sort_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Sort");
  return NULL;
}



static PyObject *
PyvtkSortDataArray_SortArrayByComponent(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SortArrayByComponent");

  vtkAbstractArray *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetValue(temp1))
    {
    vtkSortDataArray::SortArrayByComponent(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSortDataArray_Methods[] = {
  {(char*)"GetClassName", PyvtkSortDataArray_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSortDataArray_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSortDataArray_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSortDataArray\nC++: vtkSortDataArray *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSortDataArray_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSortDataArray\nC++: vtkSortDataArray *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Sort", PyvtkSortDataArray_Sort, 1,
   (char*)"V.Sort(vtkIdList)\nC++: static void Sort(vtkIdList *keys)\nV.Sort(vtkAbstractArray)\nC++: static void Sort(vtkAbstractArray *keys)\nV.Sort(vtkIdList, vtkIdList)\nC++: static void Sort(vtkIdList *keys, vtkIdList *values)\nV.Sort(vtkIdList, vtkAbstractArray)\nC++: static void Sort(vtkIdList *keys, vtkAbstractArray *values)\nV.Sort(vtkAbstractArray, vtkIdList)\nC++: static void Sort(vtkAbstractArray *keys, vtkIdList *values)\nV.Sort(vtkAbstractArray, vtkAbstractArray)\nC++: static void Sort(vtkAbstractArray *keys,\n    vtkAbstractArray *values)\n\nSorts the given array.\n"},
  {(char*)"SortArrayByComponent", PyvtkSortDataArray_SortArrayByComponent, 1,
   (char*)"V.SortArrayByComponent(vtkAbstractArray, int)\nC++: static void SortArrayByComponent(vtkAbstractArray *arr,\n    int k)\n\nSorts the given data array using the specified component as a\nkey. Think of the array as a 2-D grid with each tuple\nrepresenting a row. Tuples are swapped until the k-th column of\nthe grid is monotonically increasing. Where two tuples have the\nsame value for the k-th component, their order in the final\nresult is unspecified.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSortDataArray_StaticNew()
{
  return vtkSortDataArray::New();
}

PyObject *PyVTKClass_vtkSortDataArrayNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSortDataArray_StaticNew,
    PyvtkSortDataArray_Methods,
    "vtkSortDataArray", modulename,
    NULL, NULL,
    PyvtkSortDataArray_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkSortDataArray_Doc()
{
  static const char *docstring[] = {
    "vtkSortDataArray - Provides several methods for sorting vtk arrays.\n\n",
    "Superclass: vtkObject\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSortDataArray(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSortDataArrayNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSortDataArray", o) != 0)
    {
    Py_DECREF(o);
    }

}

