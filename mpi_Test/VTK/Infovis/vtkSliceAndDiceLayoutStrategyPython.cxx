// python wrapper for vtkSliceAndDiceLayoutStrategy
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
#include "vtkSliceAndDiceLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSliceAndDiceLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSliceAndDiceLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSliceAndDiceLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSliceAndDiceLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTreeMapLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkTreeMapLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeMapLayoutStrategyNew
#endif

static const char **PyvtkSliceAndDiceLayoutStrategy_Doc();


static PyObject *
PyvtkSliceAndDiceLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceAndDiceLayoutStrategy *op = static_cast<vtkSliceAndDiceLayoutStrategy *>(vp);

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
      tempr = op->vtkSliceAndDiceLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliceAndDiceLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceAndDiceLayoutStrategy *op = static_cast<vtkSliceAndDiceLayoutStrategy *>(vp);

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
      tempr = op->vtkSliceAndDiceLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliceAndDiceLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceAndDiceLayoutStrategy *op = static_cast<vtkSliceAndDiceLayoutStrategy *>(vp);

  vtkSliceAndDiceLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSliceAndDiceLayoutStrategy::NewInstance();
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
PyvtkSliceAndDiceLayoutStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSliceAndDiceLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSliceAndDiceLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSliceAndDiceLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliceAndDiceLayoutStrategy *op = static_cast<vtkSliceAndDiceLayoutStrategy *>(vp);

  vtkTree *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTree") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->Layout(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSliceAndDiceLayoutStrategy::Layout(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSliceAndDiceLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkSliceAndDiceLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSliceAndDiceLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSliceAndDiceLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSliceAndDiceLayoutStrategy\nC++: vtkSliceAndDiceLayoutStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSliceAndDiceLayoutStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSliceAndDiceLayoutStrategy\nC++: vtkSliceAndDiceLayoutStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Layout", PyvtkSliceAndDiceLayoutStrategy_Layout, 1,
   (char*)"V.Layout(vtkTree, vtkDataArray, vtkDataArray)\nC++: void Layout(vtkTree *inputTree, vtkDataArray *coordsArray,\n    vtkDataArray *sizeArray)\n\nPerform the layout of a tree and place the results as 4-tuples in\ncoordsArray (Xmin, Xmax, Ymin, Ymax).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSliceAndDiceLayoutStrategy_StaticNew()
{
  return vtkSliceAndDiceLayoutStrategy::New();
}

PyObject *PyVTKClass_vtkSliceAndDiceLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSliceAndDiceLayoutStrategy_StaticNew,
    PyvtkSliceAndDiceLayoutStrategy_Methods,
    "vtkSliceAndDiceLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkSliceAndDiceLayoutStrategy_Doc(),
    PyVTKClass_vtkTreeMapLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkSliceAndDiceLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkSliceAndDiceLayoutStrategy - a horizontal and vertical slicing\ntree map layout\n\n",
    "Superclass: vtkTreeMapLayoutStrategy\n\n",
    "Lays out a tree-map alternating between horizontal and vertical\nslices, taking into account the relative size of each vertex.\n\nThanks:\n\nSlice and dice algorithm comes from: Shneiderman, B. 1992. Tree\nvisualization with tree-maps: 2-d space-filling approach. ACM Trans.\nGraph. 11, 1 (Jan. 1992), 92-99.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSliceAndDiceLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSliceAndDiceLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSliceAndDiceLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

