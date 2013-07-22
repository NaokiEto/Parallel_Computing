// python wrapper for vtkStackedTreeLayoutStrategy
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
#include "vtkStackedTreeLayoutStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStackedTreeLayoutStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStackedTreeLayoutStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStackedTreeLayoutStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStackedTreeLayoutStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAreaLayoutStrategyNew
extern "C" { PyObject *PyVTKClass_vtkAreaLayoutStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkAreaLayoutStrategyNew
#endif

static const char **PyvtkStackedTreeLayoutStrategy_Doc();


static PyObject *
PyvtkStackedTreeLayoutStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

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
      tempr = op->vtkStackedTreeLayoutStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

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
      tempr = op->vtkStackedTreeLayoutStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  vtkStackedTreeLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStackedTreeLayoutStrategy::NewInstance();
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
PyvtkStackedTreeLayoutStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStackedTreeLayoutStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStackedTreeLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

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
      op->vtkStackedTreeLayoutStrategy::Layout(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_LayoutEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LayoutEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

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
      op->vtkStackedTreeLayoutStrategy::LayoutEdgePoints(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_SetInteriorRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteriorRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteriorRadius(temp0);
      }
    else
      {
      op->vtkStackedTreeLayoutStrategy::SetInteriorRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_GetInteriorRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteriorRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteriorRadius();
      }
    else
      {
      tempr = op->vtkStackedTreeLayoutStrategy::GetInteriorRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_SetRingThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRingThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRingThickness(temp0);
      }
    else
      {
      op->vtkStackedTreeLayoutStrategy::SetRingThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_GetRingThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRingThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRingThickness();
      }
    else
      {
      tempr = op->vtkStackedTreeLayoutStrategy::GetRingThickness();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_SetRootStartAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootStartAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRootStartAngle(temp0);
      }
    else
      {
      op->vtkStackedTreeLayoutStrategy::SetRootStartAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_GetRootStartAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootStartAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRootStartAngle();
      }
    else
      {
      tempr = op->vtkStackedTreeLayoutStrategy::GetRootStartAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_SetRootEndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootEndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRootEndAngle(temp0);
      }
    else
      {
      op->vtkStackedTreeLayoutStrategy::SetRootEndAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_GetRootEndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootEndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRootEndAngle();
      }
    else
      {
      tempr = op->vtkStackedTreeLayoutStrategy::GetRootEndAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_SetUseRectangularCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRectangularCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseRectangularCoordinates(temp0);
      }
    else
      {
      op->vtkStackedTreeLayoutStrategy::SetUseRectangularCoordinates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_GetUseRectangularCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRectangularCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseRectangularCoordinates();
      }
    else
      {
      tempr = op->vtkStackedTreeLayoutStrategy::GetUseRectangularCoordinates();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_UseRectangularCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRectangularCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseRectangularCoordinatesOn();
      }
    else
      {
      op->vtkStackedTreeLayoutStrategy::UseRectangularCoordinatesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_UseRectangularCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRectangularCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseRectangularCoordinatesOff();
      }
    else
      {
      op->vtkStackedTreeLayoutStrategy::UseRectangularCoordinatesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_SetReverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReverse(temp0);
      }
    else
      {
      op->vtkStackedTreeLayoutStrategy::SetReverse(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_GetReverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReverse();
      }
    else
      {
      tempr = op->vtkStackedTreeLayoutStrategy::GetReverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_ReverseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseOn();
      }
    else
      {
      op->vtkStackedTreeLayoutStrategy::ReverseOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_ReverseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseOff();
      }
    else
      {
      op->vtkStackedTreeLayoutStrategy::ReverseOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_SetInteriorLogSpacingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteriorLogSpacingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteriorLogSpacingValue(temp0);
      }
    else
      {
      op->vtkStackedTreeLayoutStrategy::SetInteriorLogSpacingValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_GetInteriorLogSpacingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteriorLogSpacingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteriorLogSpacingValue();
      }
    else
      {
      tempr = op->vtkStackedTreeLayoutStrategy::GetInteriorLogSpacingValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_FindVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  vtkTree *temp0 = NULL;
  vtkDataArray *temp1 = NULL;
  float temp2[2];
  float save2[2];
  const int size2 = 2;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTree") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      tempr = op->FindVertex(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkStackedTreeLayoutStrategy::FindVertex(temp0, temp1, temp2);
      }

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

static PyMethodDef PyvtkStackedTreeLayoutStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkStackedTreeLayoutStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStackedTreeLayoutStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStackedTreeLayoutStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStackedTreeLayoutStrategy\nC++: vtkStackedTreeLayoutStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStackedTreeLayoutStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStackedTreeLayoutStrategy\nC++: vtkStackedTreeLayoutStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Layout", PyvtkStackedTreeLayoutStrategy_Layout, 1,
   (char*)"V.Layout(vtkTree, vtkDataArray, vtkDataArray)\nC++: virtual void Layout(vtkTree *inputTree,\n    vtkDataArray *sectorArray, vtkDataArray *sizeArray)\n\nPerform the layout of the input tree, and store the sector bounds\nof each vertex as a tuple (innerRadius, outerRadius, startAngle,\nendAngle) in a data array.\n"},
  {(char*)"LayoutEdgePoints", PyvtkStackedTreeLayoutStrategy_LayoutEdgePoints, 1,
   (char*)"V.LayoutEdgePoints(vtkTree, vtkDataArray, vtkDataArray, vtkTree)\nC++: virtual void LayoutEdgePoints(vtkTree *inputTree,\n    vtkDataArray *sectorArray, vtkDataArray *sizeArray,\n    vtkTree *edgeRoutingTree)\n\nFill edgeRoutingTree with points suitable for routing edges of an\noverlaid graph.\n"},
  {(char*)"SetInteriorRadius", PyvtkStackedTreeLayoutStrategy_SetInteriorRadius, 1,
   (char*)"V.SetInteriorRadius(float)\nC++: void SetInteriorRadius(double a)\n\nDefine the tree ring's interior radius.\n"},
  {(char*)"GetInteriorRadius", PyvtkStackedTreeLayoutStrategy_GetInteriorRadius, 1,
   (char*)"V.GetInteriorRadius() -> float\nC++: double GetInteriorRadius()\n\nDefine the tree ring's interior radius.\n"},
  {(char*)"SetRingThickness", PyvtkStackedTreeLayoutStrategy_SetRingThickness, 1,
   (char*)"V.SetRingThickness(float)\nC++: void SetRingThickness(double a)\n\nDefine the thickness of each of the tree rings.\n"},
  {(char*)"GetRingThickness", PyvtkStackedTreeLayoutStrategy_GetRingThickness, 1,
   (char*)"V.GetRingThickness() -> float\nC++: double GetRingThickness()\n\nDefine the thickness of each of the tree rings.\n"},
  {(char*)"SetRootStartAngle", PyvtkStackedTreeLayoutStrategy_SetRootStartAngle, 1,
   (char*)"V.SetRootStartAngle(float)\nC++: void SetRootStartAngle(double a)\n\nDefine the start angle for the root node. NOTE: It is assumed\nthat the root end angle is greater than the root start angle and\nsubtends no more than 360 degrees.\n"},
  {(char*)"GetRootStartAngle", PyvtkStackedTreeLayoutStrategy_GetRootStartAngle, 1,
   (char*)"V.GetRootStartAngle() -> float\nC++: double GetRootStartAngle()\n\nDefine the start angle for the root node. NOTE: It is assumed\nthat the root end angle is greater than the root start angle and\nsubtends no more than 360 degrees.\n"},
  {(char*)"SetRootEndAngle", PyvtkStackedTreeLayoutStrategy_SetRootEndAngle, 1,
   (char*)"V.SetRootEndAngle(float)\nC++: void SetRootEndAngle(double a)\n\nDefine the end angle for the root node. NOTE: It is assumed that\nthe root end angle is greater than the root start angle and\nsubtends no more than 360 degrees.\n"},
  {(char*)"GetRootEndAngle", PyvtkStackedTreeLayoutStrategy_GetRootEndAngle, 1,
   (char*)"V.GetRootEndAngle() -> float\nC++: double GetRootEndAngle()\n\nDefine the end angle for the root node. NOTE: It is assumed that\nthe root end angle is greater than the root start angle and\nsubtends no more than 360 degrees.\n"},
  {(char*)"SetUseRectangularCoordinates", PyvtkStackedTreeLayoutStrategy_SetUseRectangularCoordinates, 1,
   (char*)"V.SetUseRectangularCoordinates(bool)\nC++: void SetUseRectangularCoordinates(bool a)\n\nDefine whether or not rectangular coordinates are being used (as\nopposed to polar coordinates).\n"},
  {(char*)"GetUseRectangularCoordinates", PyvtkStackedTreeLayoutStrategy_GetUseRectangularCoordinates, 1,
   (char*)"V.GetUseRectangularCoordinates() -> bool\nC++: bool GetUseRectangularCoordinates()\n\nDefine whether or not rectangular coordinates are being used (as\nopposed to polar coordinates).\n"},
  {(char*)"UseRectangularCoordinatesOn", PyvtkStackedTreeLayoutStrategy_UseRectangularCoordinatesOn, 1,
   (char*)"V.UseRectangularCoordinatesOn()\nC++: void UseRectangularCoordinatesOn()\n\nDefine whether or not rectangular coordinates are being used (as\nopposed to polar coordinates).\n"},
  {(char*)"UseRectangularCoordinatesOff", PyvtkStackedTreeLayoutStrategy_UseRectangularCoordinatesOff, 1,
   (char*)"V.UseRectangularCoordinatesOff()\nC++: void UseRectangularCoordinatesOff()\n\nDefine whether or not rectangular coordinates are being used (as\nopposed to polar coordinates).\n"},
  {(char*)"SetReverse", PyvtkStackedTreeLayoutStrategy_SetReverse, 1,
   (char*)"V.SetReverse(bool)\nC++: void SetReverse(bool a)\n\nDefine whether to reverse the order of the tree stacks from low\nto high.\n"},
  {(char*)"GetReverse", PyvtkStackedTreeLayoutStrategy_GetReverse, 1,
   (char*)"V.GetReverse() -> bool\nC++: bool GetReverse()\n\nDefine whether to reverse the order of the tree stacks from low\nto high.\n"},
  {(char*)"ReverseOn", PyvtkStackedTreeLayoutStrategy_ReverseOn, 1,
   (char*)"V.ReverseOn()\nC++: void ReverseOn()\n\nDefine whether to reverse the order of the tree stacks from low\nto high.\n"},
  {(char*)"ReverseOff", PyvtkStackedTreeLayoutStrategy_ReverseOff, 1,
   (char*)"V.ReverseOff()\nC++: void ReverseOff()\n\nDefine whether to reverse the order of the tree stacks from low\nto high.\n"},
  {(char*)"SetInteriorLogSpacingValue", PyvtkStackedTreeLayoutStrategy_SetInteriorLogSpacingValue, 1,
   (char*)"V.SetInteriorLogSpacingValue(float)\nC++: void SetInteriorLogSpacingValue(double a)\n\nThe spacing of tree levels in the edge routing tree. Levels near\nzero give more space to levels near the root, while levels near\none (the default) create evenly-spaced levels. Levels above one\ngive more space to levels near the leaves.\n"},
  {(char*)"GetInteriorLogSpacingValue", PyvtkStackedTreeLayoutStrategy_GetInteriorLogSpacingValue, 1,
   (char*)"V.GetInteriorLogSpacingValue() -> float\nC++: double GetInteriorLogSpacingValue()\n\nThe spacing of tree levels in the edge routing tree. Levels near\nzero give more space to levels near the root, while levels near\none (the default) create evenly-spaced levels. Levels above one\ngive more space to levels near the leaves.\n"},
  {(char*)"FindVertex", PyvtkStackedTreeLayoutStrategy_FindVertex, 1,
   (char*)"V.FindVertex(vtkTree, vtkDataArray, [float, float]) -> int\nC++: virtual vtkIdType FindVertex(vtkTree *tree,\n    vtkDataArray *array, float pnt[2])\n\nReturns the vertex id that contains pnt (or -1 if no one contains\nit).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStackedTreeLayoutStrategy_StaticNew()
{
  return vtkStackedTreeLayoutStrategy::New();
}

PyObject *PyVTKClass_vtkStackedTreeLayoutStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStackedTreeLayoutStrategy_StaticNew,
    PyvtkStackedTreeLayoutStrategy_Methods,
    "vtkStackedTreeLayoutStrategy", modulename,
    NULL, NULL,
    PyvtkStackedTreeLayoutStrategy_Doc(),
    PyVTKClass_vtkAreaLayoutStrategyNew(modulename));
  return cls;
}

const char **PyvtkStackedTreeLayoutStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkStackedTreeLayoutStrategy - lays out tree in stacked boxes or rings\n\n",
    "Superclass: vtkAreaLayoutStrategy\n\n",
    "Performs a tree ring layout or \"icicle\" layout on a tree. This\ninvolves assigning a sector region to each vertex in the tree, and\nplacing that information in a data array with four components per\ntuple representing (innerRadius, outerRadius, startAngle, endAngle).\n\nThis class may be assigned as the layout strategy to vtkAreaLayout.\n\nThanks:\n\nThanks to Jason Shepherd from Sandia National Laboratori",
    "es for help\ndeveloping this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStackedTreeLayoutStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStackedTreeLayoutStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStackedTreeLayoutStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

