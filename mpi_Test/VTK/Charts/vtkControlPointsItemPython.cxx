// python wrapper for vtkControlPointsItem
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
#include "vtkVector.h"
#include "vtkControlPointsItem.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkControlPointsItem(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkControlPointsItem(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkControlPointsItemNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkControlPointsItemNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPlotNew
extern "C" { PyObject *PyVTKClass_vtkPlotNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlotNew
#endif

static const char **PyvtkControlPointsItem_Doc();


static PyObject *
PyvtkControlPointsItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

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
      tempr = op->vtkControlPointsItem::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

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
      tempr = op->vtkControlPointsItem::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkControlPointsItem *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkControlPointsItem::NewInstance();
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
PyvtkControlPointsItem_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkControlPointsItem::GetBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetUserBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetUserBounds(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkControlPointsItem::SetUserBounds(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkControlPointsItem_SetUserBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetUserBounds(temp0);
      }
    else
      {
      op->vtkControlPointsItem::SetUserBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkControlPointsItem_SetUserBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkControlPointsItem_SetUserBounds_s1(self, args);
    case 1:
      return PyvtkControlPointsItem_SetUserBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetUserBounds");
  return NULL;
}



static PyObject *
PyvtkControlPointsItem_GetUserBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUserBounds();
      }
    else
      {
      tempr = op->vtkControlPointsItem::GetUserBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkContext2D *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    if (ap.IsBound())
      {
      tempr = op->Paint(temp0);
      }
    else
      {
      tempr = op->vtkControlPointsItem::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SelectPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectPoint(temp0);
      }
    else
      {
      op->vtkControlPointsItem::SelectPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SelectAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SelectAllPoints();
      }
    else
      {
      op->vtkControlPointsItem::SelectAllPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_DeselectPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeselectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DeselectPoint(temp0);
      }
    else
      {
      op->vtkControlPointsItem::DeselectPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_DeselectAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeselectAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeselectAllPoints();
      }
    else
      {
      op->vtkControlPointsItem::DeselectAllPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_ToggleSelectPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToggleSelectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ToggleSelectPoint(temp0);
      }
    else
      {
      op->vtkControlPointsItem::ToggleSelectPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SelectPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkVector2f *temp1 = NULL;
  PyObject *pobj1 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2f"))
    {
    if (ap.IsBound())
      {
      tempr = op->SelectPoints(*temp0, *temp1);
      }
    else
      {
      tempr = op->vtkControlPointsItem::SelectPoints(*temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetStrokeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrokeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStrokeMode();
      }
    else
      {
      tempr = op->vtkControlPointsItem::GetStrokeMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetSwitchPointsMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwitchPointsMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSwitchPointsMode(temp0);
      }
    else
      {
      op->vtkControlPointsItem::SetSwitchPointsMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetSwitchPointsMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwitchPointsMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSwitchPointsMode();
      }
    else
      {
      tempr = op->vtkControlPointsItem::GetSwitchPointsMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetNumberOfPoints();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetCurrentPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentPoint();
      }
    else
      {
      tempr = op->vtkControlPointsItem::GetCurrentPoint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetCurrentPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentPoint(temp0);
      }
    else
      {
      op->vtkControlPointsItem::SetCurrentPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkControlPointsItem_ResetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetBounds();
      }
    else
      {
      op->vtkControlPointsItem::ResetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkControlPointsItem_Methods[] = {
  {(char*)"GetClassName", PyvtkControlPointsItem_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkControlPointsItem_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkControlPointsItem_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkControlPointsItem\nC++: vtkControlPointsItem *NewInstance()\n\n"},
  {(char*)"GetBounds", PyvtkControlPointsItem_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nBounds of the item, typically the bound of all the control points\nexcept if custom bounds have been set \\sa SetUserBounds.\n"},
  {(char*)"SetUserBounds", PyvtkControlPointsItem_SetUserBounds, 1,
   (char*)"V.SetUserBounds(float, float, float, float)\nC++: void SetUserBounds(double, double, double, double)\nV.SetUserBounds((float, float, float, float))\nC++: void SetUserBounds(double a[4])\n\n"},
  {(char*)"GetUserBounds", PyvtkControlPointsItem_GetUserBounds, 1,
   (char*)"V.GetUserBounds() -> (float, float, float, float)\nC++: double *GetUserBounds()\n\n"},
  {(char*)"Paint", PyvtkControlPointsItem_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint the points with a fixed size (cosmetic) which doesn't\ndepend on the scene zoom factor. Selected and unselected points\nare drawn with a different color.\n"},
  {(char*)"SelectPoint", PyvtkControlPointsItem_SelectPoint, 1,
   (char*)"V.SelectPoint(int)\nC++: void SelectPoint(vtkIdType pointId)\n\nSelect a point by its ID\n"},
  {(char*)"SelectAllPoints", PyvtkControlPointsItem_SelectAllPoints, 1,
   (char*)"V.SelectAllPoints()\nC++: void SelectAllPoints()\n\nSelect all the points\n"},
  {(char*)"DeselectPoint", PyvtkControlPointsItem_DeselectPoint, 1,
   (char*)"V.DeselectPoint(int)\nC++: void DeselectPoint(vtkIdType pointId)\n\nUnselect a point by its ID\n"},
  {(char*)"DeselectAllPoints", PyvtkControlPointsItem_DeselectAllPoints, 1,
   (char*)"V.DeselectAllPoints()\nC++: void DeselectAllPoints()\n\nUnselect all the previously selected points\n"},
  {(char*)"ToggleSelectPoint", PyvtkControlPointsItem_ToggleSelectPoint, 1,
   (char*)"V.ToggleSelectPoint(int)\nC++: void ToggleSelectPoint(vtkIdType pointId)\n\nToggle the selection of a point by its ID. If the point was\nselected then unselect it, otherwise select it.\n"},
  {(char*)"SelectPoints", PyvtkControlPointsItem_SelectPoints, 1,
   (char*)"V.SelectPoints(vtkVector2f, vtkVector2f) -> bool\nC++: virtual bool SelectPoints(const vtkVector2f &min,\n    const vtkVector2f &max)\n\nSelect all points in the specified rectangle.\n"},
  {(char*)"GetStrokeMode", PyvtkControlPointsItem_GetStrokeMode, 1,
   (char*)"V.GetStrokeMode() -> bool\nC++: bool GetStrokeMode()\n\nControls whether or not control points are drawn (true) or\nclicked and moved (false). False by default.\n"},
  {(char*)"SetSwitchPointsMode", PyvtkControlPointsItem_SetSwitchPointsMode, 1,
   (char*)"V.SetSwitchPointsMode(bool)\nC++: void SetSwitchPointsMode(bool a)\n\nIf DrawPoints is false, SwitchPoints controls the behavior when a\ncontrol point is dragged past another point. The crossed point\nbecomes current (true) or the current point is blocked/stopped\n(false). False by default.\n"},
  {(char*)"GetSwitchPointsMode", PyvtkControlPointsItem_GetSwitchPointsMode, 1,
   (char*)"V.GetSwitchPointsMode() -> bool\nC++: bool GetSwitchPointsMode()\n\nIf DrawPoints is false, SwitchPoints controls the behavior when a\ncontrol point is dragged past another point. The crossed point\nbecomes current (true) or the current point is blocked/stopped\n(false). False by default.\n"},
  {(char*)"GetNumberOfPoints", PyvtkControlPointsItem_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: virtual int GetNumberOfPoints()\n\nReturns the total number of points\n"},
  {(char*)"GetCurrentPoint", PyvtkControlPointsItem_GetCurrentPoint, 1,
   (char*)"V.GetCurrentPoint() -> int\nC++: vtkIdType GetCurrentPoint()\n\nReturns the current point selected.\n"},
  {(char*)"SetCurrentPoint", PyvtkControlPointsItem_SetCurrentPoint, 1,
   (char*)"V.SetCurrentPoint(int)\nC++: void SetCurrentPoint(vtkIdType index)\n\nSets the current point selected.\n"},
  {(char*)"ResetBounds", PyvtkControlPointsItem_ResetBounds, 1,
   (char*)"V.ResetBounds()\nC++: void ResetBounds()\n\nRecompute the bounds next time they are requested. You shouldn't\nhave to call it but it is provided for rare cases.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkControlPointsItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkControlPointsItem_Methods,
    "vtkControlPointsItem", modulename,
    NULL, NULL,
    PyvtkControlPointsItem_Doc(),
    PyVTKClass_vtkPlotNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(vtkCommand::UserEvent);
    if (o && PyDict_SetItemString(d, (char *)"CurrentPointChangedEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(vtkCommand::UserEvent + 1);
    if (o && PyDict_SetItemString(d, (char *)"CurrentPointEditEvent", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkControlPointsItem_Doc()
{
  static const char *docstring[] = {
    "vtkControlPointsItem - Abstract class for control points items.\n\n",
    "Superclass: vtkPlot\n\n",
    "vtkControlPointsItem provides control point painting and management\nfor subclasses that provide points (typically control points of a\ntransfer function)\n\nSee Also:\n\nvtkScalarsToColorsItem vtkPiecewiseControlPointsItem\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkControlPointsItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkControlPointsItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkControlPointsItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

