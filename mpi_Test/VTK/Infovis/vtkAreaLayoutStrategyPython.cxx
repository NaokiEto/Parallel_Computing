// python wrapper for vtkAreaLayoutStrategy
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
#include "vtkAreaLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAreaLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAreaLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAreaLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAreaLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAreaLayoutStrategy_Doc();


static PyObject *
PyvtkAreaLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

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
      tempr = op->vtkAreaLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

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
      tempr = op->vtkAreaLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  vtkAreaLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAreaLayoutStrategy::NewInstance();
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
PyvtkAreaLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  vtkTree *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTree") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
    {
    op->Layout(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_LayoutEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LayoutEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  vtkTree *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  vtkDataArray *temp2 = NULL;
  vtkTree *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTree") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkTree"))
    {
    if (ap.IsBound())
      {
      op->LayoutEdgePoints(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkAreaLayoutStrategy::LayoutEdgePoints(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_FindVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  vtkTree *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  float temp2[2];
  float save2[2];
  const int size2 = 2;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTree") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    tempr = op->FindVertex(temp0, temp1, temp2);

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_SetShrinkPercentage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShrinkPercentage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShrinkPercentage(temp0);
      }
    else
      {
      op->vtkAreaLayoutStrategy::SetShrinkPercentage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_GetShrinkPercentageMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkPercentageMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShrinkPercentageMinValue();
      }
    else
      {
      tempr = op->vtkAreaLayoutStrategy::GetShrinkPercentageMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_GetShrinkPercentageMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkPercentageMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShrinkPercentageMaxValue();
      }
    else
      {
      tempr = op->vtkAreaLayoutStrategy::GetShrinkPercentageMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAreaLayoutStrategy_GetShrinkPercentage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkPercentage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaLayoutStrategy *op = static_cast<vtkAreaLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShrinkPercentage();
      }
    else
      {
      tempr = op->vtkAreaLayoutStrategy::GetShrinkPercentage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAreaLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkAreaLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAreaLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAreaLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAreaLayoutStrategy\nC++: vtkAreaLayoutStrategy *NewInstance()\n\n"},
  {(char*)"Layout", PyvtkAreaLayoutStrategy_Layout, 1,
   (char*)"V.Layout(vtkTree, vtkDataArray, vtkDataArray)\nC++: virtual void Layout(vtkTree *inputTree,\n    vtkDataArray *areaArray, vtkDataArray *sizeArray)\n\nPerform the layout of the input tree, and store the sector bounds\nof each vertex as a tuple in a data array. For radial layout,\nthis is (innerRadius, outerRadius, startAngle, endAngle). For\nrectangular layout, this is (xmin, xmax, ymin, ymax).\n\nThe sizeArray may be NULL, or may contain the desired size of\neach vertex in the tree.\n"},
  {(char*)"LayoutEdgePoints", PyvtkAreaLayoutStrategy_LayoutEdgePoints, 1,
   (char*)"V.LayoutEdgePoints(vtkTree, vtkDataArray, vtkDataArray, vtkTree)\nC++: virtual void LayoutEdgePoints(vtkTree *inputTree,\n    vtkDataArray *areaArray, vtkDataArray *sizeArray,\n    vtkTree *edgeLayoutTree)\n\n"},
  {(char*)"FindVertex", PyvtkAreaLayoutStrategy_FindVertex, 1,
   (char*)"V.FindVertex(vtkTree, vtkDataArray, [float, float]) -> int\nC++: virtual vtkIdType FindVertex(vtkTree *tree,\n    vtkDataArray *array, float pnt[2])\n\nReturns the vertex id that contains pnt (or -1 if no one contains\nit)\n"},
  {(char*)"SetShrinkPercentage", PyvtkAreaLayoutStrategy_SetShrinkPercentage, 1,
   (char*)"V.SetShrinkPercentage(float)\nC++: void SetShrinkPercentage(double)\n\n"},
  {(char*)"GetShrinkPercentageMinValue", PyvtkAreaLayoutStrategy_GetShrinkPercentageMinValue, 1,
   (char*)"V.GetShrinkPercentageMinValue() -> float\nC++: double GetShrinkPercentageMinValue()\n\n"},
  {(char*)"GetShrinkPercentageMaxValue", PyvtkAreaLayoutStrategy_GetShrinkPercentageMaxValue, 1,
   (char*)"V.GetShrinkPercentageMaxValue() -> float\nC++: double GetShrinkPercentageMaxValue()\n\n"},
  {(char*)"GetShrinkPercentage", PyvtkAreaLayoutStrategy_GetShrinkPercentage, 1,
   (char*)"V.GetShrinkPercentage() -> float\nC++: double GetShrinkPercentage()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAreaLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAreaLayoutStrategy_Methods,
    "vtkAreaLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkAreaLayoutStrategy_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAreaLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkAreaLayoutStrategy - abstract superclass for all area layout\nstrategies\n\n",
    "Superclass: vtkObject\n\n",
    "All subclasses of this class perform a area layout on a tree. This\ninvolves assigning a region to each vertex in the tree, and placing\nthat information in a data array with four components per tuple\nrepresenting (innerRadius, outerRadius, startAngle, endAngle).\n\nInstances of subclasses of this class may be assigned as the layout\nstrategy to vtkAreaLayout\n\nThanks:\n\nThanks to Jason Shepherd from San",
    "dia National Laboratories for help\ndeveloping this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAreaLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAreaLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAreaLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

