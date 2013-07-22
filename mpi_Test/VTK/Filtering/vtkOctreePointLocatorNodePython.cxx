// python wrapper for vtkOctreePointLocatorNode
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
#include "vtkOctreePointLocatorNode.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOctreePointLocatorNode(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOctreePointLocatorNode(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOctreePointLocatorNodeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOctreePointLocatorNodeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkOctreePointLocatorNode_Doc();


static PyObject *
PyvtkOctreePointLocatorNode_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

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
      tempr = op->vtkOctreePointLocatorNode::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

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
      tempr = op->vtkOctreePointLocatorNode::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  vtkOctreePointLocatorNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOctreePointLocatorNode::NewInstance();
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
PyvtkOctreePointLocatorNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOctreePointLocatorNode *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOctreePointLocatorNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPoints(temp0);
      }
    else
      {
      op->vtkOctreePointLocatorNode::SetNumberOfPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPoints();
      }
    else
      {
      tempr = op->vtkOctreePointLocatorNode::GetNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkOctreePointLocatorNode::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkOctreePointLocatorNode_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetBounds(temp0);
      }
    else
      {
      op->vtkOctreePointLocatorNode::SetBounds(temp0);
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
PyvtkOctreePointLocatorNode_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkOctreePointLocatorNode_SetBounds_s1(self, args);
    case 1:
      return PyvtkOctreePointLocatorNode_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkOctreePointLocatorNode_SetDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

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
      op->SetDataBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkOctreePointLocatorNode::SetDataBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_SetMinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetMinBounds(temp0);
      }
    else
      {
      op->vtkOctreePointLocatorNode::SetMinBounds(temp0);
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
PyvtkOctreePointLocatorNode_SetMaxBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetMaxBounds(temp0);
      }
    else
      {
      op->vtkOctreePointLocatorNode::SetMaxBounds(temp0);
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
PyvtkOctreePointLocatorNode_SetMinDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetMinDataBounds(temp0);
      }
    else
      {
      op->vtkOctreePointLocatorNode::SetMinDataBounds(temp0);
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
PyvtkOctreePointLocatorNode_SetMaxDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetMaxDataBounds(temp0);
      }
    else
      {
      op->vtkOctreePointLocatorNode::SetMaxDataBounds(temp0);
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
PyvtkOctreePointLocatorNode_GetID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetID();
      }
    else
      {
      tempr = op->vtkOctreePointLocatorNode::GetID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_GetMinID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinID();
      }
    else
      {
      tempr = op->vtkOctreePointLocatorNode::GetMinID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_CreateChildNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateChildNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateChildNodes();
      }
    else
      {
      op->vtkOctreePointLocatorNode::CreateChildNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_DeleteChildNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteChildNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeleteChildNodes();
      }
    else
      {
      op->vtkOctreePointLocatorNode::DeleteChildNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_GetChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  int temp0;
  vtkOctreePointLocatorNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetChild(temp0);
      }
    else
      {
      tempr = op->vtkOctreePointLocatorNode::GetChild(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_IntersectsRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  vtkPlanesIntersection *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPlanesIntersection") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->IntersectsRegion(temp0, temp1);
      }
    else
      {
      tempr = op->vtkOctreePointLocatorNode::IntersectsRegion(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_ContainsPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->ContainsPoint(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkOctreePointLocatorNode::ContainsPoint(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_GetDistance2ToBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkOctreePointLocatorNode *temp3 = NULL;
  int temp4;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkOctreePointLocatorNode") &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistance2ToBoundary(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkOctreePointLocatorNode::GetDistance2ToBoundary(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_GetDistance2ToInnerBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToInnerBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkOctreePointLocatorNode *temp3 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkOctreePointLocatorNode"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistance2ToInnerBoundary(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkOctreePointLocatorNode::GetDistance2ToInnerBoundary(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOctreePointLocatorNode_Methods[] = {
  {(char*)"GetClassName", PyvtkOctreePointLocatorNode_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOctreePointLocatorNode_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOctreePointLocatorNode_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOctreePointLocatorNode\nC++: vtkOctreePointLocatorNode *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOctreePointLocatorNode_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOctreePointLocatorNode\nC++: vtkOctreePointLocatorNode *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfPoints", PyvtkOctreePointLocatorNode_SetNumberOfPoints, 1,
   (char*)"V.SetNumberOfPoints(int)\nC++: void SetNumberOfPoints(int numberOfPoints)\n\nSet/Get the number of points contained in this region.\n"},
  {(char*)"GetNumberOfPoints", PyvtkOctreePointLocatorNode_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: int GetNumberOfPoints()\n\nSet/Get the number of points contained in this region.\n"},
  {(char*)"SetBounds", PyvtkOctreePointLocatorNode_SetBounds, 1,
   (char*)"V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\nV.SetBounds([float, float, float, float, float, float])\nC++: void SetBounds(double b[6])\n\nSet/Get the bounds of the spatial region represented by this\nnode.\n  Caller allocates storage for 6-vector in GetBounds.\n"},
  {(char*)"SetDataBounds", PyvtkOctreePointLocatorNode_SetDataBounds, 1,
   (char*)"V.SetDataBounds(float, float, float, float, float, float)\nC++: void SetDataBounds(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\n\nSet/Get the bounds of the points contained in this spatial\nregion.\n  This may be smaller than the bounds of the region itself.\n  Caller allocates storage for 6-vector in GetDataBounds.\n"},
  {(char*)"SetMinBounds", PyvtkOctreePointLocatorNode_SetMinBounds, 1,
   (char*)"V.SetMinBounds([float, float, float])\nC++: void SetMinBounds(double minBounds[3])\n\nSet the xmin, ymin and zmin value of the bounds of this region\n"},
  {(char*)"SetMaxBounds", PyvtkOctreePointLocatorNode_SetMaxBounds, 1,
   (char*)"V.SetMaxBounds([float, float, float])\nC++: void SetMaxBounds(double maxBounds[3])\n\nSet the xmax, ymax and zmax value of the bounds of this region\n"},
  {(char*)"SetMinDataBounds", PyvtkOctreePointLocatorNode_SetMinDataBounds, 1,
   (char*)"V.SetMinDataBounds([float, float, float])\nC++: void SetMinDataBounds(double minDataBounds[3])\n\nSet the xmin, ymin and zmin value of the bounds of this\n  data within this region.\n"},
  {(char*)"SetMaxDataBounds", PyvtkOctreePointLocatorNode_SetMaxDataBounds, 1,
   (char*)"V.SetMaxDataBounds([float, float, float])\nC++: void SetMaxDataBounds(double maxDataBounds[3])\n\nSet the xmax, ymax and zmax value of the bounds of this\n  data within this region.\n"},
  {(char*)"GetID", PyvtkOctreePointLocatorNode_GetID, 1,
   (char*)"V.GetID() -> int\nC++: int GetID()\n\nGet the ID associated with the region described by this node.  If\n  this is not a leaf node, this value should be -1.\n"},
  {(char*)"GetMinID", PyvtkOctreePointLocatorNode_GetMinID, 1,
   (char*)"V.GetMinID() -> int\nC++: int GetMinID()\n\nIf this node is not a leaf node, there are leaf nodes below it\nwhose\n  regions represent a partitioning of this region.  The IDs of\nthese\n  leaf nodes form a contigous set.  Get the first of the first\npoint's\n  ID that is contained in this node.\n"},
  {(char*)"CreateChildNodes", PyvtkOctreePointLocatorNode_CreateChildNodes, 1,
   (char*)"V.CreateChildNodes()\nC++: void CreateChildNodes()\n\nAdd the 8 children.\n"},
  {(char*)"DeleteChildNodes", PyvtkOctreePointLocatorNode_DeleteChildNodes, 1,
   (char*)"V.DeleteChildNodes()\nC++: void DeleteChildNodes()\n\nDelete the 8 children.\n"},
  {(char*)"GetChild", PyvtkOctreePointLocatorNode_GetChild, 1,
   (char*)"V.GetChild(int) -> vtkOctreePointLocatorNode\nC++: vtkOctreePointLocatorNode *GetChild(int i)\n\nGet a pointer to the ith child of this node.\n"},
  {(char*)"IntersectsRegion", PyvtkOctreePointLocatorNode_IntersectsRegion, 1,
   (char*)"V.IntersectsRegion(vtkPlanesIntersection, int) -> int\nC++: int IntersectsRegion(vtkPlanesIntersection *pi,\n    int useDataBounds)\n\nA vtkPlanesIntersection object represents a convex 3D region\nbounded\n  by planes, and it is capable of computing intersections of\n  boxes with itself.  Return 1 if this spatial region intersects\n  the spatial region described by the vtkPlanesIntersection\nobject.\n  Use the possibly smaller bounds of the points within the region\n  if useDataBounds is non-zero.\n"},
  {(char*)"ContainsPoint", PyvtkOctreePointLocatorNode_ContainsPoint, 1,
   (char*)"V.ContainsPoint(float, float, float, int) -> int\nC++: int ContainsPoint(double x, double y, double z,\n    int useDataBounds)\n\nReturn 1 if this spatial region entirely contains the given\npoint.\n  Use the possibly smaller bounds of the points within the region\n  if useDataBounds is non-zero.\n"},
  {(char*)"GetDistance2ToBoundary", PyvtkOctreePointLocatorNode_GetDistance2ToBoundary, 1,
   (char*)"V.GetDistance2ToBoundary(float, float, float,\n    vtkOctreePointLocatorNode, int) -> float\nC++: double GetDistance2ToBoundary(double x, double y, double z,\n    vtkOctreePointLocatorNode *top, int useDataBounds)\n\nCalculate the distance squared from any point to the boundary of\nthis\n  region.  Use the boundary of the points within the region if\nuseDataBounds\n  is non-zero.\n"},
  {(char*)"GetDistance2ToInnerBoundary", PyvtkOctreePointLocatorNode_GetDistance2ToInnerBoundary, 1,
   (char*)"V.GetDistance2ToInnerBoundary(float, float, float,\n    vtkOctreePointLocatorNode) -> float\nC++: double GetDistance2ToInnerBoundary(double x, double y,\n    double z, vtkOctreePointLocatorNode *top)\n\nCalculate the distance from the specified point (which is\nrequired to\n  be inside this spatial region) to an interior boundary.  An\ninterior\n  boundary is one that is not also an boundary of the entire\nspace\n  partitioned by the tree of vtkOctreePointLocatorNode's.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOctreePointLocatorNode_StaticNew()
{
  return vtkOctreePointLocatorNode::New();
}

PyObject *PyVTKClass_vtkOctreePointLocatorNodeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOctreePointLocatorNode_StaticNew,
    PyvtkOctreePointLocatorNode_Methods,
    "vtkOctreePointLocatorNode", modulename,
    NULL, NULL,
    PyvtkOctreePointLocatorNode_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkOctreePointLocatorNode_Doc()
{
  static const char *docstring[] = {
    "vtkOctreePointLocatorNode - Octree node that has 8 children each of\nequal size\n\n",
    "Superclass: vtkObject\n\n",
    "This class represents a single spatial region in a 3D axis octant\npartitioning.  It is intended to work efficiently with the\nvtkOctreePointLocator and is not meant for general use.  It is\nassumed the region bounds some set of points.  The ordering of the\nchildren is\n(-x,-y,-z),(+x,-y,-z),(-x,+y,-z),(+x,+y,-z),(-x,-y,+z),(+x,-y,+z),\n(-x,+y,+z),(+x,+y,+z).  The portion of the domain assigned to an\no",
    "ctant is Min < x <= Max.\n\nSee Also:\n\n\n     vtkOctreePointLocator\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOctreePointLocatorNode(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOctreePointLocatorNodeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOctreePointLocatorNode", o) != 0)
    {
    Py_DECREF(o);
    }

}

