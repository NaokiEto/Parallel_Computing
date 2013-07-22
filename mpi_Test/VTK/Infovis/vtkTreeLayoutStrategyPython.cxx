// python wrapper for vtkTreeLayoutStrategy
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
#include "vtkTreeLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTreeLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTreeLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTreeLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTreeLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkGraphLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkGraphLayoutStrategyNew
#endif

static const char **PyvtkTreeLayoutStrategy_Doc();


static PyObject *
PyvtkTreeLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

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
      tempr = op->vtkTreeLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

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
      tempr = op->vtkTreeLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  vtkTreeLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTreeLayoutStrategy::NewInstance();
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
PyvtkTreeLayoutStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTreeLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTreeLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Layout();
      }
    else
      {
      op->vtkTreeLayoutStrategy::Layout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAngle(temp0);
      }
    else
      {
      op->vtkTreeLayoutStrategy::SetAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAngleMinValue();
      }
    else
      {
      tempr = op->vtkTreeLayoutStrategy::GetAngleMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAngleMaxValue();
      }
    else
      {
      tempr = op->vtkTreeLayoutStrategy::GetAngleMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAngle();
      }
    else
      {
      tempr = op->vtkTreeLayoutStrategy::GetAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_SetRadial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadial(temp0);
      }
    else
      {
      op->vtkTreeLayoutStrategy::SetRadial(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetRadial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadial();
      }
    else
      {
      tempr = op->vtkTreeLayoutStrategy::GetRadial();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_RadialOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RadialOn();
      }
    else
      {
      op->vtkTreeLayoutStrategy::RadialOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_RadialOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RadialOff();
      }
    else
      {
      op->vtkTreeLayoutStrategy::RadialOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_SetLogSpacingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogSpacingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

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
      op->vtkTreeLayoutStrategy::SetLogSpacingValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetLogSpacingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogSpacingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

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
      tempr = op->vtkTreeLayoutStrategy::GetLogSpacingValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_SetLeafSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeafSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

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
      op->vtkTreeLayoutStrategy::SetLeafSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetLeafSpacingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafSpacingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

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
      tempr = op->vtkTreeLayoutStrategy::GetLeafSpacingMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetLeafSpacingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafSpacingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

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
      tempr = op->vtkTreeLayoutStrategy::GetLeafSpacingMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetLeafSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

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
      tempr = op->vtkTreeLayoutStrategy::GetLeafSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_SetDistanceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistanceArrayName(temp0);
      }
    else
      {
      op->vtkTreeLayoutStrategy::SetDistanceArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetDistanceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistanceArrayName();
      }
    else
      {
      tempr = op->vtkTreeLayoutStrategy::GetDistanceArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_SetRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRotation(temp0);
      }
    else
      {
      op->vtkTreeLayoutStrategy::SetRotation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRotation();
      }
    else
      {
      tempr = op->vtkTreeLayoutStrategy::GetRotation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_SetReverseEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReverseEdges(temp0);
      }
    else
      {
      op->vtkTreeLayoutStrategy::SetReverseEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetReverseEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReverseEdges();
      }
    else
      {
      tempr = op->vtkTreeLayoutStrategy::GetReverseEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_ReverseEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseEdgesOn();
      }
    else
      {
      op->vtkTreeLayoutStrategy::ReverseEdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_ReverseEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseEdgesOff();
      }
    else
      {
      op->vtkTreeLayoutStrategy::ReverseEdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTreeLayoutStrategy\nC++: vtkTreeLayoutStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeLayoutStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeLayoutStrategy\nC++: vtkTreeLayoutStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Layout", PyvtkTreeLayoutStrategy_Layout, 1,
   (char*)"V.Layout()\nC++: void Layout()\n\nPerform the tree layout.\n"},
  {(char*)"SetAngle", PyvtkTreeLayoutStrategy_SetAngle, 1,
   (char*)"V.SetAngle(float)\nC++: void SetAngle(double)\n\nThe sweep angle of the tree. For a standard tree layout, this\nshould be between 0 and 180. For a radial tree layout, this can\nbe between 0 and 360.\n"},
  {(char*)"GetAngleMinValue", PyvtkTreeLayoutStrategy_GetAngleMinValue, 1,
   (char*)"V.GetAngleMinValue() -> float\nC++: double GetAngleMinValue()\n\nThe sweep angle of the tree. For a standard tree layout, this\nshould be between 0 and 180. For a radial tree layout, this can\nbe between 0 and 360.\n"},
  {(char*)"GetAngleMaxValue", PyvtkTreeLayoutStrategy_GetAngleMaxValue, 1,
   (char*)"V.GetAngleMaxValue() -> float\nC++: double GetAngleMaxValue()\n\nThe sweep angle of the tree. For a standard tree layout, this\nshould be between 0 and 180. For a radial tree layout, this can\nbe between 0 and 360.\n"},
  {(char*)"GetAngle", PyvtkTreeLayoutStrategy_GetAngle, 1,
   (char*)"V.GetAngle() -> float\nC++: double GetAngle()\n\nThe sweep angle of the tree. For a standard tree layout, this\nshould be between 0 and 180. For a radial tree layout, this can\nbe between 0 and 360.\n"},
  {(char*)"SetRadial", PyvtkTreeLayoutStrategy_SetRadial, 1,
   (char*)"V.SetRadial(bool)\nC++: void SetRadial(bool a)\n\nIf set, the tree is laid out with levels on concentric circles\naround the root. If unset (default), the tree is laid out with\nlevels on horizontal lines.\n"},
  {(char*)"GetRadial", PyvtkTreeLayoutStrategy_GetRadial, 1,
   (char*)"V.GetRadial() -> bool\nC++: bool GetRadial()\n\nIf set, the tree is laid out with levels on concentric circles\naround the root. If unset (default), the tree is laid out with\nlevels on horizontal lines.\n"},
  {(char*)"RadialOn", PyvtkTreeLayoutStrategy_RadialOn, 1,
   (char*)"V.RadialOn()\nC++: void RadialOn()\n\nIf set, the tree is laid out with levels on concentric circles\naround the root. If unset (default), the tree is laid out with\nlevels on horizontal lines.\n"},
  {(char*)"RadialOff", PyvtkTreeLayoutStrategy_RadialOff, 1,
   (char*)"V.RadialOff()\nC++: void RadialOff()\n\nIf set, the tree is laid out with levels on concentric circles\naround the root. If unset (default), the tree is laid out with\nlevels on horizontal lines.\n"},
  {(char*)"SetLogSpacingValue", PyvtkTreeLayoutStrategy_SetLogSpacingValue, 1,
   (char*)"V.SetLogSpacingValue(float)\nC++: void SetLogSpacingValue(double a)\n\nThe spacing of tree levels. Levels near zero give more space to\nlevels near the root, while levels near one (the default) create\nevenly-spaced levels. Levels above one give more space to levels\nnear the leaves.\n"},
  {(char*)"GetLogSpacingValue", PyvtkTreeLayoutStrategy_GetLogSpacingValue, 1,
   (char*)"V.GetLogSpacingValue() -> float\nC++: double GetLogSpacingValue()\n\nThe spacing of tree levels. Levels near zero give more space to\nlevels near the root, while levels near one (the default) create\nevenly-spaced levels. Levels above one give more space to levels\nnear the leaves.\n"},
  {(char*)"SetLeafSpacing", PyvtkTreeLayoutStrategy_SetLeafSpacing, 1,
   (char*)"V.SetLeafSpacing(float)\nC++: void SetLeafSpacing(double)\n\nThe spacing of leaves.  Levels near one evenly space leaves with\nno gaps between subtrees.  Levels near zero creates large gaps\nbetween subtrees.\n"},
  {(char*)"GetLeafSpacingMinValue", PyvtkTreeLayoutStrategy_GetLeafSpacingMinValue, 1,
   (char*)"V.GetLeafSpacingMinValue() -> float\nC++: double GetLeafSpacingMinValue()\n\nThe spacing of leaves.  Levels near one evenly space leaves with\nno gaps between subtrees.  Levels near zero creates large gaps\nbetween subtrees.\n"},
  {(char*)"GetLeafSpacingMaxValue", PyvtkTreeLayoutStrategy_GetLeafSpacingMaxValue, 1,
   (char*)"V.GetLeafSpacingMaxValue() -> float\nC++: double GetLeafSpacingMaxValue()\n\nThe spacing of leaves.  Levels near one evenly space leaves with\nno gaps between subtrees.  Levels near zero creates large gaps\nbetween subtrees.\n"},
  {(char*)"GetLeafSpacing", PyvtkTreeLayoutStrategy_GetLeafSpacing, 1,
   (char*)"V.GetLeafSpacing() -> float\nC++: double GetLeafSpacing()\n\nThe spacing of leaves.  Levels near one evenly space leaves with\nno gaps between subtrees.  Levels near zero creates large gaps\nbetween subtrees.\n"},
  {(char*)"SetDistanceArrayName", PyvtkTreeLayoutStrategy_SetDistanceArrayName, 1,
   (char*)"V.SetDistanceArrayName(string)\nC++: void SetDistanceArrayName(char *)\n\nGet/Set the array to use to determine the distance from the root.\n"},
  {(char*)"GetDistanceArrayName", PyvtkTreeLayoutStrategy_GetDistanceArrayName, 1,
   (char*)"V.GetDistanceArrayName() -> string\nC++: char *GetDistanceArrayName()\n\nGet/Set the array to use to determine the distance from the root.\n"},
  {(char*)"SetRotation", PyvtkTreeLayoutStrategy_SetRotation, 1,
   (char*)"V.SetRotation(float)\nC++: void SetRotation(double a)\n\nThe amount of counter-clockwise rotation to apply after the\nlayout.\n"},
  {(char*)"GetRotation", PyvtkTreeLayoutStrategy_GetRotation, 1,
   (char*)"V.GetRotation() -> float\nC++: double GetRotation()\n\nThe amount of counter-clockwise rotation to apply after the\nlayout.\n"},
  {(char*)"SetReverseEdges", PyvtkTreeLayoutStrategy_SetReverseEdges, 1,
   (char*)"V.SetReverseEdges(bool)\nC++: void SetReverseEdges(bool a)\n\nIf set and the input is not a tree but a general graph, the\nfilter will reverse the edges on the graph before extracting a\ntree using breadth first search.\n"},
  {(char*)"GetReverseEdges", PyvtkTreeLayoutStrategy_GetReverseEdges, 1,
   (char*)"V.GetReverseEdges() -> bool\nC++: bool GetReverseEdges()\n\nIf set and the input is not a tree but a general graph, the\nfilter will reverse the edges on the graph before extracting a\ntree using breadth first search.\n"},
  {(char*)"ReverseEdgesOn", PyvtkTreeLayoutStrategy_ReverseEdgesOn, 1,
   (char*)"V.ReverseEdgesOn()\nC++: void ReverseEdgesOn()\n\nIf set and the input is not a tree but a general graph, the\nfilter will reverse the edges on the graph before extracting a\ntree using breadth first search.\n"},
  {(char*)"ReverseEdgesOff", PyvtkTreeLayoutStrategy_ReverseEdgesOff, 1,
   (char*)"V.ReverseEdgesOff()\nC++: void ReverseEdgesOff()\n\nIf set and the input is not a tree but a general graph, the\nfilter will reverse the edges on the graph before extracting a\ntree using breadth first search.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTreeLayoutStrategy_StaticNew()
{
  return vtkTreeLayoutStrategy::New();
}

PyObject *PyVTKClass_vtkTreeLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTreeLayoutStrategy_StaticNew,
    PyvtkTreeLayoutStrategy_Methods,
    "vtkTreeLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkTreeLayoutStrategy_Doc(),
    PyVTKClass_vtkGraphLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkTreeLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkTreeLayoutStrategy - hierarchical layout\n\n",
    "Superclass: vtkGraphLayoutStrategy\n\n",
    "Assigns points to the nodes of a tree in either a standard or radial\nlayout. The standard layout places each level on a horizontal line,\nwhile the radial layout places each level on a concentric circle. You\nmay specify the sweep angle of the tree which constrains the tree to\nbe contained within a wedge. Also, you may indicate the log scale of\nthe tree, which diminishes the length of arcs at lower ",
    "levels of the\ntree. Values near zero give a large proportion of the space to the\ntree levels near the root, while values near one give nearly equal\nproportions of space to all tree levels.\n\nThe user may also specify an array to use to indicate the distance\nfrom the root, either vertically (for standard layout) or radially\n(for radial layout).  You specify this with SetDistanceArrayName().\n\nIf the ",
    "input is not a tree but a general graph, this strategy first\nextracts a tree from the graph using a breadth-first search starting\nat vertex ID 0.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

