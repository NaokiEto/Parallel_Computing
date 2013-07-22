// python wrapper for vtkRandomLayoutStrategy
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
#include "vtkRandomLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRandomLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRandomLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRandomLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRandomLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkGraphLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
#endif

static const char **PyvtkRandomLayoutStrategy_Doc();


static PyObject *
PyvtkRandomLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

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
      tempr = op->vtkRandomLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

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
      tempr = op->vtkRandomLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  vtkRandomLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRandomLayoutStrategy::NewInstance();
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
PyvtkRandomLayoutStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRandomLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRandomLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_SetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRandomSeed(temp0);
      }
    else
      {
      op->vtkRandomLayoutStrategy::SetRandomSeed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_GetRandomSeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRandomSeedMinValue();
      }
    else
      {
      tempr = op->vtkRandomLayoutStrategy::GetRandomSeedMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_GetRandomSeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRandomSeedMaxValue();
      }
    else
      {
      tempr = op->vtkRandomLayoutStrategy::GetRandomSeedMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_GetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRandomSeed();
      }
    else
      {
      tempr = op->vtkRandomLayoutStrategy::GetRandomSeed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_SetGraphBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetGraphBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkRandomLayoutStrategy::SetGraphBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRandomLayoutStrategy_SetGraphBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGraphBounds(temp0);
      }
    else
      {
      op->vtkRandomLayoutStrategy::SetGraphBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRandomLayoutStrategy_SetGraphBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkRandomLayoutStrategy_SetGraphBounds_s1(self, args);
    case 1:
      return PyvtkRandomLayoutStrategy_SetGraphBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphBounds");
  return NULL;
}



static PyObject *
PyvtkRandomLayoutStrategy_GetGraphBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraphBounds();
      }
    else
      {
      tempr = op->vtkRandomLayoutStrategy::GetGraphBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_SetAutomaticBoundsComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticBoundsComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutomaticBoundsComputation(temp0);
      }
    else
      {
      op->vtkRandomLayoutStrategy::SetAutomaticBoundsComputation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_GetAutomaticBoundsComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticBoundsComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutomaticBoundsComputation();
      }
    else
      {
      tempr = op->vtkRandomLayoutStrategy::GetAutomaticBoundsComputation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_AutomaticBoundsComputationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticBoundsComputationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticBoundsComputationOn();
      }
    else
      {
      op->vtkRandomLayoutStrategy::AutomaticBoundsComputationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_AutomaticBoundsComputationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticBoundsComputationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticBoundsComputationOff();
      }
    else
      {
      op->vtkRandomLayoutStrategy::AutomaticBoundsComputationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_SetThreeDimensionalLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreeDimensionalLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThreeDimensionalLayout(temp0);
      }
    else
      {
      op->vtkRandomLayoutStrategy::SetThreeDimensionalLayout(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_GetThreeDimensionalLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreeDimensionalLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThreeDimensionalLayout();
      }
    else
      {
      tempr = op->vtkRandomLayoutStrategy::GetThreeDimensionalLayout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_ThreeDimensionalLayoutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLayoutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThreeDimensionalLayoutOn();
      }
    else
      {
      op->vtkRandomLayoutStrategy::ThreeDimensionalLayoutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_ThreeDimensionalLayoutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLayoutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThreeDimensionalLayoutOff();
      }
    else
      {
      op->vtkRandomLayoutStrategy::ThreeDimensionalLayoutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_SetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  vtkGraph *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
    {
    if (ap.IsBound())
      {
      op->SetGraph(temp0);
      }
    else
      {
      op->vtkRandomLayoutStrategy::SetGraph(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Layout();
      }
    else
      {
      op->vtkRandomLayoutStrategy::Layout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRandomLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkRandomLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRandomLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRandomLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRandomLayoutStrategy\nC++: vtkRandomLayoutStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRandomLayoutStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRandomLayoutStrategy\nC++: vtkRandomLayoutStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRandomSeed", PyvtkRandomLayoutStrategy_SetRandomSeed, 1,
   (char*)"V.SetRandomSeed(int)\nC++: void SetRandomSeed(int)\n\nSeed the random number generator used to compute point positions.\nThis has a significant effect on their final positions when the\nlayout is complete.\n"},
  {(char*)"GetRandomSeedMinValue", PyvtkRandomLayoutStrategy_GetRandomSeedMinValue, 1,
   (char*)"V.GetRandomSeedMinValue() -> int\nC++: int GetRandomSeedMinValue()\n\nSeed the random number generator used to compute point positions.\nThis has a significant effect on their final positions when the\nlayout is complete.\n"},
  {(char*)"GetRandomSeedMaxValue", PyvtkRandomLayoutStrategy_GetRandomSeedMaxValue, 1,
   (char*)"V.GetRandomSeedMaxValue() -> int\nC++: int GetRandomSeedMaxValue()\n\nSeed the random number generator used to compute point positions.\nThis has a significant effect on their final positions when the\nlayout is complete.\n"},
  {(char*)"GetRandomSeed", PyvtkRandomLayoutStrategy_GetRandomSeed, 1,
   (char*)"V.GetRandomSeed() -> int\nC++: int GetRandomSeed()\n\nSeed the random number generator used to compute point positions.\nThis has a significant effect on their final positions when the\nlayout is complete.\n"},
  {(char*)"SetGraphBounds", PyvtkRandomLayoutStrategy_SetGraphBounds, 1,
   (char*)"V.SetGraphBounds(float, float, float, float, float, float)\nC++: void SetGraphBounds(double, double, double, double, double,\n    double)\nV.SetGraphBounds((float, float, float, float, float, float))\nC++: void SetGraphBounds(double a[6])\n\n"},
  {(char*)"GetGraphBounds", PyvtkRandomLayoutStrategy_GetGraphBounds, 1,
   (char*)"V.GetGraphBounds() -> (float, float, float, float, float, float)\nC++: double *GetGraphBounds()\n\nSet / get the region in space in which to place the final graph.\nThe GraphBounds only affects the results if\nAutomaticBoundsComputation is off.\n"},
  {(char*)"SetAutomaticBoundsComputation", PyvtkRandomLayoutStrategy_SetAutomaticBoundsComputation, 1,
   (char*)"V.SetAutomaticBoundsComputation(int)\nC++: void SetAutomaticBoundsComputation(int a)\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {(char*)"GetAutomaticBoundsComputation", PyvtkRandomLayoutStrategy_GetAutomaticBoundsComputation, 1,
   (char*)"V.GetAutomaticBoundsComputation() -> int\nC++: int GetAutomaticBoundsComputation()\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {(char*)"AutomaticBoundsComputationOn", PyvtkRandomLayoutStrategy_AutomaticBoundsComputationOn, 1,
   (char*)"V.AutomaticBoundsComputationOn()\nC++: void AutomaticBoundsComputationOn()\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {(char*)"AutomaticBoundsComputationOff", PyvtkRandomLayoutStrategy_AutomaticBoundsComputationOff, 1,
   (char*)"V.AutomaticBoundsComputationOff()\nC++: void AutomaticBoundsComputationOff()\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {(char*)"SetThreeDimensionalLayout", PyvtkRandomLayoutStrategy_SetThreeDimensionalLayout, 1,
   (char*)"V.SetThreeDimensionalLayout(int)\nC++: void SetThreeDimensionalLayout(int a)\n\nTurn on/off layout of graph in three dimensions. If off, graph\nlayout occurs in two dimensions. By default, three dimensional\nlayout is on.\n"},
  {(char*)"GetThreeDimensionalLayout", PyvtkRandomLayoutStrategy_GetThreeDimensionalLayout, 1,
   (char*)"V.GetThreeDimensionalLayout() -> int\nC++: int GetThreeDimensionalLayout()\n\nTurn on/off layout of graph in three dimensions. If off, graph\nlayout occurs in two dimensions. By default, three dimensional\nlayout is on.\n"},
  {(char*)"ThreeDimensionalLayoutOn", PyvtkRandomLayoutStrategy_ThreeDimensionalLayoutOn, 1,
   (char*)"V.ThreeDimensionalLayoutOn()\nC++: void ThreeDimensionalLayoutOn()\n\nTurn on/off layout of graph in three dimensions. If off, graph\nlayout occurs in two dimensions. By default, three dimensional\nlayout is on.\n"},
  {(char*)"ThreeDimensionalLayoutOff", PyvtkRandomLayoutStrategy_ThreeDimensionalLayoutOff, 1,
   (char*)"V.ThreeDimensionalLayoutOff()\nC++: void ThreeDimensionalLayoutOff()\n\nTurn on/off layout of graph in three dimensions. If off, graph\nlayout occurs in two dimensions. By default, three dimensional\nlayout is on.\n"},
  {(char*)"SetGraph", PyvtkRandomLayoutStrategy_SetGraph, 1,
   (char*)"V.SetGraph(vtkGraph)\nC++: void SetGraph(vtkGraph *graph)\n\nSet the graph to layout.\n"},
  {(char*)"Layout", PyvtkRandomLayoutStrategy_Layout, 1,
   (char*)"V.Layout()\nC++: void Layout()\n\nPerform the random layout.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRandomLayoutStrategy_StaticNew()
{
  return vtkRandomLayoutStrategy::New();
}

PyObject *PyVTKClass_vtkRandomLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRandomLayoutStrategy_StaticNew,
    PyvtkRandomLayoutStrategy_Methods,
    "vtkRandomLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkRandomLayoutStrategy_Doc(),
    PyVTKClass_vtkGraphLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkRandomLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkRandomLayoutStrategy - randomly places vertices in 2 or 3\ndimensions\n\n",
    "Superclass: vtkGraphLayoutStrategy\n\n",
    "Assigns points to the vertices of a graph randomly within a bounded\nrange.\n\n.SECION Thanks Thanks to Brian Wylie from Sandia National\nLaboratories for adding incremental layout capabilities.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRandomLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRandomLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRandomLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

