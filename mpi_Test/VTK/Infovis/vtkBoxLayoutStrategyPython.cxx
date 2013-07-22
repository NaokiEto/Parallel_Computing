// python wrapper for vtkBoxLayoutStrategy
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
#include "vtkBoxLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBoxLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBoxLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBoxLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBoxLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTreeMapLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkTreeMapLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeMapLayoutStrategyNew
#endif

static const char **PyvtkBoxLayoutStrategy_Doc();


static PyObject *
PyvtkBoxLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxLayoutStrategy *op = static_cast<vtkBoxLayoutStrategy *>(vp);

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
      tempr = op->vtkBoxLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxLayoutStrategy *op = static_cast<vtkBoxLayoutStrategy *>(vp);

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
      tempr = op->vtkBoxLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxLayoutStrategy *op = static_cast<vtkBoxLayoutStrategy *>(vp);

  vtkBoxLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBoxLayoutStrategy::NewInstance();
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
PyvtkBoxLayoutStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBoxLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBoxLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoxLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxLayoutStrategy *op = static_cast<vtkBoxLayoutStrategy *>(vp);

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
      op->vtkBoxLayoutStrategy::Layout(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBoxLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkBoxLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBoxLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBoxLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBoxLayoutStrategy\nC++: vtkBoxLayoutStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBoxLayoutStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBoxLayoutStrategy\nC++: vtkBoxLayoutStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Layout", PyvtkBoxLayoutStrategy_Layout, 1,
   (char*)"V.Layout(vtkTree, vtkDataArray, vtkDataArray)\nC++: virtual void Layout(vtkTree *inputTree,\n    vtkDataArray *coordsArray, vtkDataArray *sizeArray)\n\nPerform the layout of a tree and place the results as 4-tuples in\ncoordsArray (Xmin, Xmax, Ymin, Ymax).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBoxLayoutStrategy_StaticNew()
{
  return vtkBoxLayoutStrategy::New();
}

PyObject *PyVTKClass_vtkBoxLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBoxLayoutStrategy_StaticNew,
    PyvtkBoxLayoutStrategy_Methods,
    "vtkBoxLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkBoxLayoutStrategy_Doc(),
    PyVTKClass_vtkTreeMapLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkBoxLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkBoxLayoutStrategy - a tree map layout that puts vertices in\nsquare-ish boxes\n\n",
    "Superclass: vtkTreeMapLayoutStrategy\n\n",
    "vtkBoxLayoutStrategy recursively partitions the space for children\nvertices in a tree-map into square regions (or regions very close to\na square).\n\nThanks:\n\nThanks to Brian Wylie from Sandia National Laboratories for creating\nthis class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBoxLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBoxLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBoxLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

