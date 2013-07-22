// python wrapper for vtkSquarifyLayoutStrategy
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
#include "vtkSquarifyLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSquarifyLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSquarifyLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSquarifyLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSquarifyLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTreeMapLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkTreeMapLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeMapLayoutStrategyNew
#endif

static const char **PyvtkSquarifyLayoutStrategy_Doc();


static PyObject *
PyvtkSquarifyLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquarifyLayoutStrategy *op = static_cast<vtkSquarifyLayoutStrategy *>(vp);

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
      tempr = op->vtkSquarifyLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSquarifyLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquarifyLayoutStrategy *op = static_cast<vtkSquarifyLayoutStrategy *>(vp);

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
      tempr = op->vtkSquarifyLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSquarifyLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquarifyLayoutStrategy *op = static_cast<vtkSquarifyLayoutStrategy *>(vp);

  vtkSquarifyLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSquarifyLayoutStrategy::NewInstance();
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
PyvtkSquarifyLayoutStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSquarifyLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSquarifyLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSquarifyLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquarifyLayoutStrategy *op = static_cast<vtkSquarifyLayoutStrategy *>(vp);

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
      op->vtkSquarifyLayoutStrategy::Layout(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSquarifyLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkSquarifyLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSquarifyLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSquarifyLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSquarifyLayoutStrategy\nC++: vtkSquarifyLayoutStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSquarifyLayoutStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSquarifyLayoutStrategy\nC++: vtkSquarifyLayoutStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Layout", PyvtkSquarifyLayoutStrategy_Layout, 1,
   (char*)"V.Layout(vtkTree, vtkDataArray, vtkDataArray)\nC++: void Layout(vtkTree *inputTree, vtkDataArray *coordsArray,\n    vtkDataArray *sizeArray)\n\nPerform the layout of a tree and place the results as 4-tuples in\ncoordsArray (Xmin, Xmax, Ymin, Ymax).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSquarifyLayoutStrategy_StaticNew()
{
  return vtkSquarifyLayoutStrategy::New();
}

PyObject *PyVTKClass_vtkSquarifyLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSquarifyLayoutStrategy_StaticNew,
    PyvtkSquarifyLayoutStrategy_Methods,
    "vtkSquarifyLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkSquarifyLayoutStrategy_Doc(),
    PyVTKClass_vtkTreeMapLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkSquarifyLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkSquarifyLayoutStrategy - uses the squarify tree map layout\nalgorithm\n\n",
    "Superclass: vtkTreeMapLayoutStrategy\n\n",
    "vtkSquarifyLayoutStrategy partitions the space for child vertices\ninto regions that use all available space and are as close to squares\nas possible. The algorithm also takes into account the relative\nvertex size.\n\nThanks:\n\nThe squarified tree map algorithm comes from: Bruls, D.M., C.\nHuizing, J.J. van Wijk. Squarified Treemaps. In: W. de Leeuw, R. van\nLiere (eds.), Data Visualization 2000, Proceed",
    "ings of the joint\nEurographics and IEEE TCVG Symposium on Visualization, 2000,\nSpringer, Vienna, p. 33-42.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSquarifyLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSquarifyLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSquarifyLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

