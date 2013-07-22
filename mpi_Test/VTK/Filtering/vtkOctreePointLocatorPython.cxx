// python wrapper for vtkOctreePointLocator
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
#include "vtkOctreePointLocator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOctreePointLocator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOctreePointLocator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOctreePointLocatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOctreePointLocatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractPointLocatorNew
extern "C" { PyObject *PyVTKClass_vtkAbstractPointLocatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractPointLocatorNew
#endif

static const char **PyvtkOctreePointLocator_Doc();


static PyObject *
PyvtkOctreePointLocator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

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
      tempr = op->vtkOctreePointLocator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

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
      tempr = op->vtkOctreePointLocator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  vtkOctreePointLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOctreePointLocator::NewInstance();
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
PyvtkOctreePointLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOctreePointLocator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOctreePointLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_SetMaximumPointsPerRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPointsPerRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumPointsPerRegion(temp0);
      }
    else
      {
      op->vtkOctreePointLocator::SetMaximumPointsPerRegion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GetMaximumPointsPerRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPointsPerRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumPointsPerRegion();
      }
    else
      {
      tempr = op->vtkOctreePointLocator::GetMaximumPointsPerRegion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_SetCreateCubicOctants(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateCubicOctants");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCreateCubicOctants(temp0);
      }
    else
      {
      op->vtkOctreePointLocator::SetCreateCubicOctants(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GetCreateCubicOctants(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateCubicOctants");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCreateCubicOctants();
      }
    else
      {
      tempr = op->vtkOctreePointLocator::GetCreateCubicOctants();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GetFudgeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFudgeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFudgeFactor();
      }
    else
      {
      tempr = op->vtkOctreePointLocator::GetFudgeFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_SetFudgeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFudgeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFudgeFactor(temp0);
      }
    else
      {
      op->vtkOctreePointLocator::SetFudgeFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GetNumberOfLeafNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLeafNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfLeafNodes();
      }
    else
      {
      tempr = op->vtkOctreePointLocator::GetNumberOfLeafNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GetRegionBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetRegionBounds(temp0, temp1);
      }
    else
      {
      op->vtkOctreePointLocator::GetRegionBounds(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GetRegionDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetRegionDataBounds(temp0, temp1);
      }
    else
      {
      op->vtkOctreePointLocator::GetRegionDataBounds(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GetRegionContainingPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionContainingPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRegionContainingPoint(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkOctreePointLocator::GetRegionContainingPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildLocator();
      }
    else
      {
      op->vtkOctreePointLocator::BuildLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_FindClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      tempr = op->FindClosestPoint(temp0);
      }
    else
      {
      tempr = op->vtkOctreePointLocator::FindClosestPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOctreePointLocator_FindClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->FindClosestPoint(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkOctreePointLocator::FindClosestPoint(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkOctreePointLocator_FindClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkOctreePointLocator_FindClosestPoint_s1(self, args);
    case 4:
      return PyvtkOctreePointLocator_FindClosestPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPoint");
  return NULL;
}



static PyObject *
PyvtkOctreePointLocator_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  double temp0;
  double temp1[3];
  const int size1 = 3;
  double temp2;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->FindClosestPointWithinRadius(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkOctreePointLocator::FindClosestPointWithinRadius(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_FindClosestPointInRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointInRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      tempr = op->FindClosestPointInRegion(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkOctreePointLocator::FindClosestPointInRegion(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_FindPointsWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  double temp0;
  double temp1[3];
  const int size1 = 3;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->FindPointsWithinRadius(temp0, temp1, temp2);
      }
    else
      {
      op->vtkOctreePointLocator::FindPointsWithinRadius(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_FindClosestNPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int temp0;
  double temp1[3];
  const int size1 = 3;
  vtkIdList *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->FindClosestNPoints(temp0, temp1, temp2);
      }
    else
      {
      op->vtkOctreePointLocator::FindClosestNPoints(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GetPointsInRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsInRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int temp0;
  vtkIdTypeArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointsInRegion(temp0);
      }
    else
      {
      tempr = op->vtkOctreePointLocator::GetPointsInRegion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeSearchStructure();
      }
    else
      {
      op->vtkOctreePointLocator::FreeSearchStructure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOctreePointLocator_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocator *op = static_cast<vtkOctreePointLocator *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GenerateRepresentation(temp0, temp1);
      }
    else
      {
      op->vtkOctreePointLocator::GenerateRepresentation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkOctreePointLocator_Methods[] = {
  {(char*)"GetClassName", PyvtkOctreePointLocator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOctreePointLocator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOctreePointLocator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOctreePointLocator\nC++: vtkOctreePointLocator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOctreePointLocator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOctreePointLocator\nC++: vtkOctreePointLocator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaximumPointsPerRegion", PyvtkOctreePointLocator_SetMaximumPointsPerRegion, 1,
   (char*)"V.SetMaximumPointsPerRegion(int)\nC++: void SetMaximumPointsPerRegion(int a)\n\nMaximum number of points per spatial region.  Default is 100.\n"},
  {(char*)"GetMaximumPointsPerRegion", PyvtkOctreePointLocator_GetMaximumPointsPerRegion, 1,
   (char*)"V.GetMaximumPointsPerRegion() -> int\nC++: int GetMaximumPointsPerRegion()\n\nMaximum number of points per spatial region.  Default is 100.\n"},
  {(char*)"SetCreateCubicOctants", PyvtkOctreePointLocator_SetCreateCubicOctants, 1,
   (char*)"V.SetCreateCubicOctants(int)\nC++: void SetCreateCubicOctants(int a)\n\nGet/Set macro for CreateCubicOctants.\n"},
  {(char*)"GetCreateCubicOctants", PyvtkOctreePointLocator_GetCreateCubicOctants, 1,
   (char*)"V.GetCreateCubicOctants() -> int\nC++: int GetCreateCubicOctants()\n\nGet/Set macro for CreateCubicOctants.\n"},
  {(char*)"GetFudgeFactor", PyvtkOctreePointLocator_GetFudgeFactor, 1,
   (char*)"V.GetFudgeFactor() -> float\nC++: double GetFudgeFactor()\n\nSome algorithms on octrees require a value that is a very\n small distance relative to the diameter of the entire space\n divided by the octree.  This factor is the maximum axis-aligned\n width of the space multipled by 10e-6.\n"},
  {(char*)"SetFudgeFactor", PyvtkOctreePointLocator_SetFudgeFactor, 1,
   (char*)"V.SetFudgeFactor(float)\nC++: void SetFudgeFactor(double a)\n\nSome algorithms on octrees require a value that is a very\n small distance relative to the diameter of the entire space\n divided by the octree.  This factor is the maximum axis-aligned\n width of the space multipled by 10e-6.\n"},
  {(char*)"GetNumberOfLeafNodes", PyvtkOctreePointLocator_GetNumberOfLeafNodes, 1,
   (char*)"V.GetNumberOfLeafNodes() -> int\nC++: int GetNumberOfLeafNodes()\n\nThe number of leaf nodes of the tree, the spatial regions\n"},
  {(char*)"GetRegionBounds", PyvtkOctreePointLocator_GetRegionBounds, 1,
   (char*)"V.GetRegionBounds(int, [float, float, float, float, float, float])\nC++: void GetRegionBounds(int regionID, double bounds[6])\n\nGet the spatial bounds of octree region\n"},
  {(char*)"GetRegionDataBounds", PyvtkOctreePointLocator_GetRegionDataBounds, 1,
   (char*)"V.GetRegionDataBounds(int, [float, float, float, float, float,\n    float])\nC++: void GetRegionDataBounds(int leafNodeID, double bounds[6])\n\nGet the bounds of the data within the leaf node\n"},
  {(char*)"GetRegionContainingPoint", PyvtkOctreePointLocator_GetRegionContainingPoint, 1,
   (char*)"V.GetRegionContainingPoint(float, float, float) -> int\nC++: int GetRegionContainingPoint(double x, double y, double z)\n\nGet the id of the leaf region containing the specified location.\n"},
  {(char*)"BuildLocator", PyvtkOctreePointLocator_BuildLocator, 1,
   (char*)"V.BuildLocator()\nC++: virtual void BuildLocator()\n\nCreate the octree decomposition of the cells of the data set or\ndata sets.  Cells are assigned to octree spatial regions based on\nthe location of their centroids.\n"},
  {(char*)"FindClosestPoint", PyvtkOctreePointLocator_FindClosestPoint, 1,
   (char*)"V.FindClosestPoint((float, float, float)) -> int\nC++: virtual vtkIdType FindClosestPoint(const double x[3])\nV.FindClosestPoint(float, float, float, float) -> int\nC++: vtkIdType FindClosestPoint(double x, double y, double z,\n    double &dist2)\n\nReturn the Id of the point that is closest to the given point.\nSet the square of the distance between the two points.\n"},
  {(char*)"FindClosestPointWithinRadius", PyvtkOctreePointLocator_FindClosestPointWithinRadius, 1,
   (char*)"V.FindClosestPointWithinRadius(float, (float, float, float),\n    float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double radius,\n     const double x[3], double &dist2)\n\nGiven a position x and a radius r, return the id of the point\nclosest to the point in that radius. dist2 returns the squared\ndistance to the point.\n"},
  {(char*)"FindClosestPointInRegion", PyvtkOctreePointLocator_FindClosestPointInRegion, 1,
   (char*)"V.FindClosestPointInRegion(int, float, float, float, float) -> int\nC++: vtkIdType FindClosestPointInRegion(int regionId, double x,\n    double y, double z, double &dist2)\n\nFind the Id of the point in the given leaf region which is\nclosest to the given point.  Return the ID of the point, and set\nthe square of the distance of between the points.\n"},
  {(char*)"FindPointsWithinRadius", PyvtkOctreePointLocator_FindPointsWithinRadius, 1,
   (char*)"V.FindPointsWithinRadius(float, (float, float, float), vtkIdList)\nC++: virtual void FindPointsWithinRadius(double radius,\n    const double x[3], vtkIdList *result)\n\nFind all points within a specified radius of position x. The\nresult is not sorted in any specific manner.\n"},
  {(char*)"FindClosestNPoints", PyvtkOctreePointLocator_FindClosestNPoints, 1,
   (char*)"V.FindClosestNPoints(int, (float, float, float), vtkIdList)\nC++: void FindClosestNPoints(int N, const double x[3],\n    vtkIdList *result)\n\nFind the closest N points to a position. This returns the closest\nN points to a position. A faster method could be created that\nreturned N close points to a position, but not necessarily the\nexact N closest. The returned points are sorted from closest to\nfarthest. These methods are thread safe if BuildLocator() is\ndirectly or indirectly called from a single thread first.\n"},
  {(char*)"GetPointsInRegion", PyvtkOctreePointLocator_GetPointsInRegion, 1,
   (char*)"V.GetPointsInRegion(int) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetPointsInRegion(int leafNodeId)\n\nGet a list of the original IDs of all points in a leaf node.\n"},
  {(char*)"FreeSearchStructure", PyvtkOctreePointLocator_FreeSearchStructure, 1,
   (char*)"V.FreeSearchStructure()\nC++: virtual void FreeSearchStructure()\n\nDelete the octree data structure.\n"},
  {(char*)"GenerateRepresentation", PyvtkOctreePointLocator_GenerateRepresentation, 1,
   (char*)"V.GenerateRepresentation(int, vtkPolyData)\nC++: void GenerateRepresentation(int level, vtkPolyData *pd)\n\nCreate a polydata representation of the boundaries of the octree\nregions.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOctreePointLocator_StaticNew()
{
  return vtkOctreePointLocator::New();
}

PyObject *PyVTKClass_vtkOctreePointLocatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOctreePointLocator_StaticNew,
    PyvtkOctreePointLocator_Methods,
    "vtkOctreePointLocator", modulename,
    NULL, NULL,
    PyvtkOctreePointLocator_Doc(),
    PyVTKClass_vtkAbstractPointLocatorNew(modulename));
  return cls;
}

const char **PyvtkOctreePointLocator_Doc()
{
  static const char *docstring[] = {
    "vtkOctreePointLocator - a octree spatial decomposition of a set of\npoints\n\n",
    "Superclass: vtkAbstractPointLocator\n\n",
    "Given a vtkDataSetxs, create an octree that is locally refined\n    such that all leaf octants contain less than a certain\n    amount of points.  Note that there is no size constraint that\n    a leaf octant in relation to any of its neighbors.\n\n\n    This class can also generate a PolyData representation of\n    the boundaries of the spatial regions in the decomposition.\n\nSee Also:\n\n\n     vtkPointLoc",
    "ator vtkOctreePointLocatorNode\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOctreePointLocator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOctreePointLocatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOctreePointLocator", o) != 0)
    {
    Py_DECREF(o);
    }

}

