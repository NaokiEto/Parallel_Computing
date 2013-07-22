// python wrapper for vtkVisibilitySort
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
#include "vtkVisibilitySort.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVisibilitySort(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVisibilitySort(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVisibilitySortNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVisibilitySortNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkVisibilitySort_Doc();


static PyObject *
PyvtkVisibilitySort_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

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
      tempr = op->vtkVisibilitySort::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

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
      tempr = op->vtkVisibilitySort::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  vtkVisibilitySort *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVisibilitySort::NewInstance();
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
PyvtkVisibilitySort_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->InitTraversal();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetNextCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  vtkIdTypeArray *tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetNextCells();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetMaxCellsReturned(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxCellsReturned");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxCellsReturned(temp0);
      }
    else
      {
      op->vtkVisibilitySort::SetMaxCellsReturned(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetMaxCellsReturnedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellsReturnedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxCellsReturnedMinValue();
      }
    else
      {
      tempr = op->vtkVisibilitySort::GetMaxCellsReturnedMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetMaxCellsReturnedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellsReturnedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxCellsReturnedMaxValue();
      }
    else
      {
      tempr = op->vtkVisibilitySort::GetMaxCellsReturnedMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetMaxCellsReturned(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellsReturned");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxCellsReturned();
      }
    else
      {
      tempr = op->vtkVisibilitySort::GetMaxCellsReturned();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetModelTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetModelTransform(temp0);
      }
    else
      {
      op->vtkVisibilitySort::SetModelTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetModelTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  vtkMatrix4x4 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetModelTransform();
      }
    else
      {
      tempr = op->vtkVisibilitySort::GetModelTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetInverseModelTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseModelTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  vtkMatrix4x4 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInverseModelTransform();
      }
    else
      {
      tempr = op->vtkVisibilitySort::GetInverseModelTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  vtkCamera *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->SetCamera(temp0);
      }
    else
      {
      op->vtkVisibilitySort::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  vtkCamera *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCamera();
      }
    else
      {
      tempr = op->vtkVisibilitySort::GetCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkVisibilitySort::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkVisibilitySort::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDirection();
      }
    else
      {
      tempr = op->vtkVisibilitySort::GetDirection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDirection(temp0);
      }
    else
      {
      op->vtkVisibilitySort::SetDirection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetDirectionToBackToFront(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToBackToFront");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDirectionToBackToFront();
      }
    else
      {
      op->vtkVisibilitySort::SetDirectionToBackToFront();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetDirectionToFrontToBack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToFrontToBack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDirectionToFrontToBack();
      }
    else
      {
      op->vtkVisibilitySort::SetDirectionToFrontToBack();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkVisibilitySort_Methods[] = {
  {(char*)"GetClassName", PyvtkVisibilitySort_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVisibilitySort_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVisibilitySort_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVisibilitySort\nC++: vtkVisibilitySort *NewInstance()\n\n"},
  {(char*)"InitTraversal", PyvtkVisibilitySort_InitTraversal, 1,
   (char*)"V.InitTraversal()\nC++: virtual void InitTraversal()\n\nTo facilitate incremental sorting algorithms, the cells are\nretrieved in an iteration process.  That is, call InitTraversal\nto start the iteration and call GetNextCells to get the cell IDs\nin order. However, for efficiencies sake, GetNextCells returns an\nordered list of several id's in once call (but not necessarily\nall).  GetNextCells will return NULL once the entire sorted list\nis output.  The vtkIdTypeArray returned from GetNextCells is a\ncached array, so do not delete it.  At the same note, do not\nexpect the array to be valid after subsequent calls to\nGetNextCells.\n"},
  {(char*)"GetNextCells", PyvtkVisibilitySort_GetNextCells, 1,
   (char*)"V.GetNextCells() -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetNextCells()\n\nTo facilitate incremental sorting algorithms, the cells are\nretrieved in an iteration process.  That is, call InitTraversal\nto start the iteration and call GetNextCells to get the cell IDs\nin order. However, for efficiencies sake, GetNextCells returns an\nordered list of several id's in once call (but not necessarily\nall).  GetNextCells will return NULL once the entire sorted list\nis output.  The vtkIdTypeArray returned from GetNextCells is a\ncached array, so do not delete it.  At the same note, do not\nexpect the array to be valid after subsequent calls to\nGetNextCells.\n"},
  {(char*)"SetMaxCellsReturned", PyvtkVisibilitySort_SetMaxCellsReturned, 1,
   (char*)"V.SetMaxCellsReturned(int)\nC++: void SetMaxCellsReturned(int)\n\nSet/Get the maximum number of cells that GetNextCells will return\nin one invocation.\n"},
  {(char*)"GetMaxCellsReturnedMinValue", PyvtkVisibilitySort_GetMaxCellsReturnedMinValue, 1,
   (char*)"V.GetMaxCellsReturnedMinValue() -> int\nC++: int GetMaxCellsReturnedMinValue()\n\nSet/Get the maximum number of cells that GetNextCells will return\nin one invocation.\n"},
  {(char*)"GetMaxCellsReturnedMaxValue", PyvtkVisibilitySort_GetMaxCellsReturnedMaxValue, 1,
   (char*)"V.GetMaxCellsReturnedMaxValue() -> int\nC++: int GetMaxCellsReturnedMaxValue()\n\nSet/Get the maximum number of cells that GetNextCells will return\nin one invocation.\n"},
  {(char*)"GetMaxCellsReturned", PyvtkVisibilitySort_GetMaxCellsReturned, 1,
   (char*)"V.GetMaxCellsReturned() -> int\nC++: int GetMaxCellsReturned()\n\nSet/Get the maximum number of cells that GetNextCells will return\nin one invocation.\n"},
  {(char*)"SetModelTransform", PyvtkVisibilitySort_SetModelTransform, 1,
   (char*)"V.SetModelTransform(vtkMatrix4x4)\nC++: virtual void SetModelTransform(vtkMatrix4x4 *mat)\n\nSet/Get the matrix that transforms from object space to world\nspace. Generally, you get this matrix from a call to GetMatrix of\na vtkProp3D (vtkActor).\n"},
  {(char*)"GetModelTransform", PyvtkVisibilitySort_GetModelTransform, 1,
   (char*)"V.GetModelTransform() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetModelTransform()\n\nSet/Get the matrix that transforms from object space to world\nspace. Generally, you get this matrix from a call to GetMatrix of\na vtkProp3D (vtkActor).\n"},
  {(char*)"GetInverseModelTransform", PyvtkVisibilitySort_GetInverseModelTransform, 1,
   (char*)"V.GetInverseModelTransform() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetInverseModelTransform()\n\n"},
  {(char*)"SetCamera", PyvtkVisibilitySort_SetCamera, 1,
   (char*)"V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *camera)\n\nSet/Get the camera that specifies the viewing parameters.\n"},
  {(char*)"GetCamera", PyvtkVisibilitySort_GetCamera, 1,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nSet/Get the camera that specifies the viewing parameters.\n"},
  {(char*)"SetInput", PyvtkVisibilitySort_SetInput, 1,
   (char*)"V.SetInput(vtkDataSet)\nC++: virtual void SetInput(vtkDataSet *data)\n\nSet/Get the data set containing the cells to sort.\n"},
  {(char*)"GetInput", PyvtkVisibilitySort_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nSet/Get the data set containing the cells to sort.\n"},
  {(char*)"GetDirection", PyvtkVisibilitySort_GetDirection, 1,
   (char*)"V.GetDirection() -> int\nC++: int GetDirection()\n\nSet/Get the sorting direction.  Be default, the direction is set\nto back to front.\n"},
  {(char*)"SetDirection", PyvtkVisibilitySort_SetDirection, 1,
   (char*)"V.SetDirection(int)\nC++: void SetDirection(int a)\n\nSet/Get the sorting direction.  Be default, the direction is set\nto back to front.\n"},
  {(char*)"SetDirectionToBackToFront", PyvtkVisibilitySort_SetDirectionToBackToFront, 1,
   (char*)"V.SetDirectionToBackToFront()\nC++: void SetDirectionToBackToFront()\n\nSet/Get the sorting direction.  Be default, the direction is set\nto back to front.\n"},
  {(char*)"SetDirectionToFrontToBack", PyvtkVisibilitySort_SetDirectionToFrontToBack, 1,
   (char*)"V.SetDirectionToFrontToBack()\nC++: void SetDirectionToFrontToBack()\n\nSet/Get the sorting direction.  Be default, the direction is set\nto back to front.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkVisibilitySortNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkVisibilitySort_Methods,
    "vtkVisibilitySort", modulename,
    NULL, NULL,
    PyvtkVisibilitySort_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"BACK_TO_FRONT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"FRONT_TO_BACK", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkVisibilitySort_Doc()
{
  static const char *docstring[] = {
    "vtkVisibilitySort - Abstract class that can sort cell data along a\nviewpoint.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkVisibilitySort encapsulates a method for depth sorting the cells\nof a vtkDataSet for a given viewpoint.  It should be noted that\nsubclasses are not required to give an absolutely correct sorting. \nMany types of unstructured grids may have sorting cycles, meaning\nthat there is no possible correct sorting.  Some subclasses also only\ngive an approximate sorting in the interest of speed.\n\nNote:\n\nTh",
    "e Input field of this class tends to causes reference cycles.  To\nhelp break these cycles, garbage collection is enabled on this object\nand the input parameter is traced.  For this to work, though, an\nobject in the loop holding the visibility sort should also report\nthat to the garbage collector.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVisibilitySort(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVisibilitySortNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVisibilitySort", o) != 0)
    {
    Py_DECREF(o);
    }

}

