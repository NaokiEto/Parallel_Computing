// python wrapper for vtkTreeOrbitLayoutStrategy
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
#include "vtkTreeOrbitLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTreeOrbitLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTreeOrbitLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTreeOrbitLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTreeOrbitLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkGraphLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
#endif

static const char **PyvtkTreeOrbitLayoutStrategy_Doc();


static PyObject *
PyvtkTreeOrbitLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

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
      tempr = op->vtkTreeOrbitLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

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
      tempr = op->vtkTreeOrbitLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  vtkTreeOrbitLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTreeOrbitLayoutStrategy::NewInstance();
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
PyvtkTreeOrbitLayoutStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTreeOrbitLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTreeOrbitLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Layout();
      }
    else
      {
      op->vtkTreeOrbitLayoutStrategy::Layout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_SetLogSpacingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogSpacingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLogSpacingValue(temp0);
      }
    else
      {
      op->vtkTreeOrbitLayoutStrategy::SetLogSpacingValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_GetLogSpacingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogSpacingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLogSpacingValue();
      }
    else
      {
      tempr = op->vtkTreeOrbitLayoutStrategy::GetLogSpacingValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_SetLeafSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeafSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLeafSpacing(temp0);
      }
    else
      {
      op->vtkTreeOrbitLayoutStrategy::SetLeafSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_GetLeafSpacingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafSpacingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeafSpacingMinValue();
      }
    else
      {
      tempr = op->vtkTreeOrbitLayoutStrategy::GetLeafSpacingMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_GetLeafSpacingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafSpacingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeafSpacingMaxValue();
      }
    else
      {
      tempr = op->vtkTreeOrbitLayoutStrategy::GetLeafSpacingMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_GetLeafSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeafSpacing();
      }
    else
      {
      tempr = op->vtkTreeOrbitLayoutStrategy::GetLeafSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_SetChildRadiusFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChildRadiusFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetChildRadiusFactor(temp0);
      }
    else
      {
      op->vtkTreeOrbitLayoutStrategy::SetChildRadiusFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_GetChildRadiusFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildRadiusFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetChildRadiusFactor();
      }
    else
      {
      tempr = op->vtkTreeOrbitLayoutStrategy::GetChildRadiusFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeOrbitLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeOrbitLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeOrbitLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeOrbitLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTreeOrbitLayoutStrategy\nC++: vtkTreeOrbitLayoutStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeOrbitLayoutStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeOrbitLayoutStrategy\nC++: vtkTreeOrbitLayoutStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Layout", PyvtkTreeOrbitLayoutStrategy_Layout, 1,
   (char*)"V.Layout()\nC++: void Layout()\n\nPerform the orbital layout.\n"},
  {(char*)"SetLogSpacingValue", PyvtkTreeOrbitLayoutStrategy_SetLogSpacingValue, 1,
   (char*)"V.SetLogSpacingValue(float)\nC++: void SetLogSpacingValue(double a)\n\nThe spacing of orbital levels. Levels near zero give more space\nto levels near the root, while levels near one (the default)\ncreate evenly-spaced levels. Levels above one give more space to\nlevels near the leaves.\n"},
  {(char*)"GetLogSpacingValue", PyvtkTreeOrbitLayoutStrategy_GetLogSpacingValue, 1,
   (char*)"V.GetLogSpacingValue() -> float\nC++: double GetLogSpacingValue()\n\nThe spacing of orbital levels. Levels near zero give more space\nto levels near the root, while levels near one (the default)\ncreate evenly-spaced levels. Levels above one give more space to\nlevels near the leaves.\n"},
  {(char*)"SetLeafSpacing", PyvtkTreeOrbitLayoutStrategy_SetLeafSpacing, 1,
   (char*)"V.SetLeafSpacing(float)\nC++: void SetLeafSpacing(double)\n\nThe spacing of leaves.  Levels near one evenly space leaves with\nno gaps between subtrees.  Levels near zero creates large gaps\nbetween subtrees.\n"},
  {(char*)"GetLeafSpacingMinValue", PyvtkTreeOrbitLayoutStrategy_GetLeafSpacingMinValue, 1,
   (char*)"V.GetLeafSpacingMinValue() -> float\nC++: double GetLeafSpacingMinValue()\n\nThe spacing of leaves.  Levels near one evenly space leaves with\nno gaps between subtrees.  Levels near zero creates large gaps\nbetween subtrees.\n"},
  {(char*)"GetLeafSpacingMaxValue", PyvtkTreeOrbitLayoutStrategy_GetLeafSpacingMaxValue, 1,
   (char*)"V.GetLeafSpacingMaxValue() -> float\nC++: double GetLeafSpacingMaxValue()\n\nThe spacing of leaves.  Levels near one evenly space leaves with\nno gaps between subtrees.  Levels near zero creates large gaps\nbetween subtrees.\n"},
  {(char*)"GetLeafSpacing", PyvtkTreeOrbitLayoutStrategy_GetLeafSpacing, 1,
   (char*)"V.GetLeafSpacing() -> float\nC++: double GetLeafSpacing()\n\nThe spacing of leaves.  Levels near one evenly space leaves with\nno gaps between subtrees.  Levels near zero creates large gaps\nbetween subtrees.\n"},
  {(char*)"SetChildRadiusFactor", PyvtkTreeOrbitLayoutStrategy_SetChildRadiusFactor, 1,
   (char*)"V.SetChildRadiusFactor(float)\nC++: void SetChildRadiusFactor(double a)\n\nThis is a magic number right now. Controls the radius of the\nchild layout, all of this should be fixed at some point with a\nmore logical layout. Defaults to .5 :)\n"},
  {(char*)"GetChildRadiusFactor", PyvtkTreeOrbitLayoutStrategy_GetChildRadiusFactor, 1,
   (char*)"V.GetChildRadiusFactor() -> float\nC++: double GetChildRadiusFactor()\n\nThis is a magic number right now. Controls the radius of the\nchild layout, all of this should be fixed at some point with a\nmore logical layout. Defaults to .5 :)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTreeOrbitLayoutStrategy_StaticNew()
{
  return vtkTreeOrbitLayoutStrategy::New();
}

PyObject *PyVTKClass_vtkTreeOrbitLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTreeOrbitLayoutStrategy_StaticNew,
    PyvtkTreeOrbitLayoutStrategy_Methods,
    "vtkTreeOrbitLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkTreeOrbitLayoutStrategy_Doc(),
    PyVTKClass_vtkGraphLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkTreeOrbitLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkTreeOrbitLayoutStrategy - hierarchical orbital layout\n\n",
    "Superclass: vtkGraphLayoutStrategy\n\n",
    "Assigns points to the nodes of a tree to an orbital layout. Each\nparent is orbited by its children, recursively.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeOrbitLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeOrbitLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeOrbitLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

