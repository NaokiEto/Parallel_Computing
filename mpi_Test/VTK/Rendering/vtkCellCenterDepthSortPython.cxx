// python wrapper for vtkCellCenterDepthSort
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
#include "vtkCellCenterDepthSort.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCellCenterDepthSort(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCellCenterDepthSort(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCellCenterDepthSortNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCellCenterDepthSortNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkVisibilitySortNew
extern "C" { PyObject *PyVTKClass_vtkVisibilitySortNew(const char *); }
#define DECLARED_PyVTKClass_vtkVisibilitySortNew
#endif

static const char **PyvtkCellCenterDepthSort_Doc();


static PyObject *
PyvtkCellCenterDepthSort_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenterDepthSort *op = static_cast<vtkCellCenterDepthSort *>(vp);

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
      tempr = op->vtkCellCenterDepthSort::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenterDepthSort_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenterDepthSort *op = static_cast<vtkCellCenterDepthSort *>(vp);

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
      tempr = op->vtkCellCenterDepthSort::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenterDepthSort_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenterDepthSort *op = static_cast<vtkCellCenterDepthSort *>(vp);

  vtkCellCenterDepthSort *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCellCenterDepthSort::NewInstance();
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
PyvtkCellCenterDepthSort_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCellCenterDepthSort *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCellCenterDepthSort::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenterDepthSort_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenterDepthSort *op = static_cast<vtkCellCenterDepthSort *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InitTraversal();
      }
    else
      {
      op->vtkCellCenterDepthSort::InitTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellCenterDepthSort_GetNextCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenterDepthSort *op = static_cast<vtkCellCenterDepthSort *>(vp);

  vtkIdTypeArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextCells();
      }
    else
      {
      tempr = op->vtkCellCenterDepthSort::GetNextCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCellCenterDepthSort_Methods[] = {
  {(char*)"GetClassName", PyvtkCellCenterDepthSort_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCellCenterDepthSort_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCellCenterDepthSort_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCellCenterDepthSort\nC++: vtkCellCenterDepthSort *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCellCenterDepthSort_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCellCenterDepthSort\nC++: vtkCellCenterDepthSort *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"InitTraversal", PyvtkCellCenterDepthSort_InitTraversal, 1,
   (char*)"V.InitTraversal()\nC++: virtual void InitTraversal()\n\n"},
  {(char*)"GetNextCells", PyvtkCellCenterDepthSort_GetNextCells, 1,
   (char*)"V.GetNextCells() -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetNextCells()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCellCenterDepthSort_StaticNew()
{
  return vtkCellCenterDepthSort::New();
}

PyObject *PyVTKClass_vtkCellCenterDepthSortNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCellCenterDepthSort_StaticNew,
    PyvtkCellCenterDepthSort_Methods,
    "vtkCellCenterDepthSort", modulename,
    NULL, NULL,
    PyvtkCellCenterDepthSort_Doc(),
    PyVTKClass_vtkVisibilitySortNew(modulename));
  return cls;
}

const char **PyvtkCellCenterDepthSort_Doc()
{
  static const char *docstring[] = {
    "vtkCellCenterDepthSort - A simple implementation of vtkCellDepthSort.\n\n",
    "Superclass: vtkVisibilitySort\n\n",
    "vtkCellCenterDepthSort is a simple and fast implementation of depth\nsort, but it only provides approximate results.  The sorting\nalgorithm finds the centroids of all the cells.  It then performs the\ndot product of the centroids against a vector pointing in the\ndirection of the camera transformed into object space.  It then\nperforms an ordinary sort on the result.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellCenterDepthSort(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellCenterDepthSortNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellCenterDepthSort", o) != 0)
    {
    Py_DECREF(o);
    }

}

