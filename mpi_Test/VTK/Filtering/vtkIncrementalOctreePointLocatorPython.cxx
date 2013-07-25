// python wrapper for vtkIncrementalOctreePointLocator
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
#include "vtkIncrementalOctreePointLocator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkIncrementalOctreePointLocator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkIncrementalOctreePointLocator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkIncrementalOctreePointLocatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkIncrementalOctreePointLocatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkIncrementalPointLocatorNew
extern "C" { PyObject *PyVTKClass_vtkIncrementalPointLocatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkIncrementalPointLocatorNew
#endif

static const char **PyvtkIncrementalOctreePointLocator_Doc();


static PyObject *
PyvtkIncrementalOctreePointLocator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

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
      tempr = op->vtkIncrementalOctreePointLocator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

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
      tempr = op->vtkIncrementalOctreePointLocator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  vtkIncrementalOctreePointLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkIncrementalOctreePointLocator::NewInstance();
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
PyvtkIncrementalOctreePointLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkIncrementalOctreePointLocator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkIncrementalOctreePointLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_SetMaxPointsPerLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxPointsPerLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxPointsPerLeaf(temp0);
      }
    else
      {
      op->vtkIncrementalOctreePointLocator::SetMaxPointsPerLeaf(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_GetMaxPointsPerLeafMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxPointsPerLeafMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxPointsPerLeafMinValue();
      }
    else
      {
      tempr = op->vtkIncrementalOctreePointLocator::GetMaxPointsPerLeafMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_GetMaxPointsPerLeafMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxPointsPerLeafMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxPointsPerLeafMaxValue();
      }
    else
      {
      tempr = op->vtkIncrementalOctreePointLocator::GetMaxPointsPerLeafMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_GetMaxPointsPerLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxPointsPerLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxPointsPerLeaf();
      }
    else
      {
      tempr = op->vtkIncrementalOctreePointLocator::GetMaxPointsPerLeaf();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_SetBuildCubicOctree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBuildCubicOctree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBuildCubicOctree(temp0);
      }
    else
      {
      op->vtkIncrementalOctreePointLocator::SetBuildCubicOctree(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_GetBuildCubicOctree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuildCubicOctree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBuildCubicOctree();
      }
    else
      {
      tempr = op->vtkIncrementalOctreePointLocator::GetBuildCubicOctree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_BuildCubicOctreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildCubicOctreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildCubicOctreeOn();
      }
    else
      {
      op->vtkIncrementalOctreePointLocator::BuildCubicOctreeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_BuildCubicOctreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildCubicOctreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildCubicOctreeOff();
      }
    else
      {
      op->vtkIncrementalOctreePointLocator::BuildCubicOctreeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_GetLocatorPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocatorPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  vtkPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLocatorPoints();
      }
    else
      {
      tempr = op->vtkIncrementalOctreePointLocator::GetLocatorPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkIncrementalOctreePointLocator::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeSearchStructure();
      }
    else
      {
      op->vtkIncrementalOctreePointLocator::FreeSearchStructure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

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
      tempr = op->vtkIncrementalOctreePointLocator::GetNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_FindClosestInsertedPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      tempr = op->FindClosestInsertedPoint(temp0);
      }
    else
      {
      tempr = op->vtkIncrementalOctreePointLocator::FindClosestInsertedPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

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
      op->vtkIncrementalOctreePointLocator::GenerateRepresentation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildLocator();
      }
    else
      {
      op->vtkIncrementalOctreePointLocator::BuildLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_FindClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

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
      tempr = op->vtkIncrementalOctreePointLocator::FindClosestPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkIncrementalOctreePointLocator_FindClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->FindClosestPoint(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkIncrementalOctreePointLocator::FindClosestPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkIncrementalOctreePointLocator_FindClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkIncrementalOctreePointLocator_FindClosestPoint_s1(self, args);
    case 3:
      return PyvtkIncrementalOctreePointLocator_FindClosestPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPoint");
  return NULL;
}



static PyObject *
PyvtkIncrementalOctreePointLocator_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

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
      tempr = op->vtkIncrementalOctreePointLocator::FindClosestPointWithinRadius(temp0, temp1, temp2);
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
PyvtkIncrementalOctreePointLocator_FindClosestPointWithinSquaredRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinSquaredRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

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
      tempr = op->FindClosestPointWithinSquaredRadius(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkIncrementalOctreePointLocator::FindClosestPointWithinSquaredRadius(temp0, temp1, temp2);
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
PyvtkIncrementalOctreePointLocator_FindPointsWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

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
      op->vtkIncrementalOctreePointLocator::FindPointsWithinRadius(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_FindPointsWithinSquaredRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinSquaredRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

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
      op->FindPointsWithinSquaredRadius(temp0, temp1, temp2);
      }
    else
      {
      op->vtkIncrementalOctreePointLocator::FindPointsWithinSquaredRadius(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_FindClosestNPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

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
      op->vtkIncrementalOctreePointLocator::FindClosestNPoints(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_InitPointInsertion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  vtkPoints *temp0 = NULL;
  double temp1[6];
  const int size1 = 6;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      tempr = op->InitPointInsertion(temp0, temp1);
      }
    else
      {
      tempr = op->vtkIncrementalOctreePointLocator::InitPointInsertion(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkIncrementalOctreePointLocator_InitPointInsertion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  vtkPoints *temp0 = NULL;
  double temp1[6];
  const int size1 = 6;
  vtkIdType temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->InitPointInsertion(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkIncrementalOctreePointLocator::InitPointInsertion(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkIncrementalOctreePointLocator_InitPointInsertion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkIncrementalOctreePointLocator_InitPointInsertion_s1(self, args);
    case 3:
      return PyvtkIncrementalOctreePointLocator_InitPointInsertion_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InitPointInsertion");
  return NULL;
}



static PyObject *
PyvtkIncrementalOctreePointLocator_IsInsertedPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsInsertedPoint(temp0);
      }
    else
      {
      tempr = op->vtkIncrementalOctreePointLocator::IsInsertedPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkIncrementalOctreePointLocator_IsInsertedPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->IsInsertedPoint(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkIncrementalOctreePointLocator::IsInsertedPoint(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkIncrementalOctreePointLocator_IsInsertedPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkIncrementalOctreePointLocator_IsInsertedPoint_s1(self, args);
    case 3:
      return PyvtkIncrementalOctreePointLocator_IsInsertedPoint_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsInsertedPoint");
  return NULL;
}



static PyObject *
PyvtkIncrementalOctreePointLocator_InsertUniquePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniquePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIdType temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertUniquePoint(temp0, temp1);
      }
    else
      {
      tempr = op->vtkIncrementalOctreePointLocator::InsertUniquePoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_InsertPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  vtkIdType temp0;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->InsertPoint(temp0, temp1);
      }
    else
      {
      op->vtkIncrementalOctreePointLocator::InsertPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_InsertNextPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertNextPoint(temp0);
      }
    else
      {
      tempr = op->vtkIncrementalOctreePointLocator::InsertNextPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIncrementalOctreePointLocator_InsertPointWithoutChecking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPointWithoutChecking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreePointLocator *op = static_cast<vtkIncrementalOctreePointLocator *>(vp);

  double temp0[3];
  const int size0 = 3;
  vtkIdType temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->InsertPointWithoutChecking(temp0, temp1, temp2);
      }
    else
      {
      op->vtkIncrementalOctreePointLocator::InsertPointWithoutChecking(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkIncrementalOctreePointLocator_Methods[] = {
  {(char*)"GetClassName", PyvtkIncrementalOctreePointLocator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIncrementalOctreePointLocator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIncrementalOctreePointLocator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkIncrementalOctreePointLocator\nC++: vtkIncrementalOctreePointLocator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIncrementalOctreePointLocator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIncrementalOctreePointLocator\nC++: vtkIncrementalOctreePointLocator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaxPointsPerLeaf", PyvtkIncrementalOctreePointLocator_SetMaxPointsPerLeaf, 1,
   (char*)"V.SetMaxPointsPerLeaf(int)\nC++: void SetMaxPointsPerLeaf(int)\n\nSet/Get the maximum number of points that a leaf node may\nmaintain. Note that the actual number of points maintained by a\nleaf node might exceed this threshold if there is a large number\n(equal to or greater than the threshold) of exactly duplicate\npoints (with zero distance) to be inserted (e.g., to construct an\noctree for subsequent point location) in extreme cases.\nRespecting this threshold in such scenarios would cause endless\nnode sub-division. Thus this threshold is broken, but only in\ncase of such situations.\n"},
  {(char*)"GetMaxPointsPerLeafMinValue", PyvtkIncrementalOctreePointLocator_GetMaxPointsPerLeafMinValue, 1,
   (char*)"V.GetMaxPointsPerLeafMinValue() -> int\nC++: int GetMaxPointsPerLeafMinValue()\n\nSet/Get the maximum number of points that a leaf node may\nmaintain. Note that the actual number of points maintained by a\nleaf node might exceed this threshold if there is a large number\n(equal to or greater than the threshold) of exactly duplicate\npoints (with zero distance) to be inserted (e.g., to construct an\noctree for subsequent point location) in extreme cases.\nRespecting this threshold in such scenarios would cause endless\nnode sub-division. Thus this threshold is broken, but only in\ncase of such situations.\n"},
  {(char*)"GetMaxPointsPerLeafMaxValue", PyvtkIncrementalOctreePointLocator_GetMaxPointsPerLeafMaxValue, 1,
   (char*)"V.GetMaxPointsPerLeafMaxValue() -> int\nC++: int GetMaxPointsPerLeafMaxValue()\n\nSet/Get the maximum number of points that a leaf node may\nmaintain. Note that the actual number of points maintained by a\nleaf node might exceed this threshold if there is a large number\n(equal to or greater than the threshold) of exactly duplicate\npoints (with zero distance) to be inserted (e.g., to construct an\noctree for subsequent point location) in extreme cases.\nRespecting this threshold in such scenarios would cause endless\nnode sub-division. Thus this threshold is broken, but only in\ncase of such situations.\n"},
  {(char*)"GetMaxPointsPerLeaf", PyvtkIncrementalOctreePointLocator_GetMaxPointsPerLeaf, 1,
   (char*)"V.GetMaxPointsPerLeaf() -> int\nC++: int GetMaxPointsPerLeaf()\n\nSet/Get the maximum number of points that a leaf node may\nmaintain. Note that the actual number of points maintained by a\nleaf node might exceed this threshold if there is a large number\n(equal to or greater than the threshold) of exactly duplicate\npoints (with zero distance) to be inserted (e.g., to construct an\noctree for subsequent point location) in extreme cases.\nRespecting this threshold in such scenarios would cause endless\nnode sub-division. Thus this threshold is broken, but only in\ncase of such situations.\n"},
  {(char*)"SetBuildCubicOctree", PyvtkIncrementalOctreePointLocator_SetBuildCubicOctree, 1,
   (char*)"V.SetBuildCubicOctree(int)\nC++: void SetBuildCubicOctree(int a)\n\nSet/Get whether the search octree is built as a cubic shape or\nnot.\n"},
  {(char*)"GetBuildCubicOctree", PyvtkIncrementalOctreePointLocator_GetBuildCubicOctree, 1,
   (char*)"V.GetBuildCubicOctree() -> int\nC++: int GetBuildCubicOctree()\n\nSet/Get whether the search octree is built as a cubic shape or\nnot.\n"},
  {(char*)"BuildCubicOctreeOn", PyvtkIncrementalOctreePointLocator_BuildCubicOctreeOn, 1,
   (char*)"V.BuildCubicOctreeOn()\nC++: void BuildCubicOctreeOn()\n\nSet/Get whether the search octree is built as a cubic shape or\nnot.\n"},
  {(char*)"BuildCubicOctreeOff", PyvtkIncrementalOctreePointLocator_BuildCubicOctreeOff, 1,
   (char*)"V.BuildCubicOctreeOff()\nC++: void BuildCubicOctreeOff()\n\nSet/Get whether the search octree is built as a cubic shape or\nnot.\n"},
  {(char*)"GetLocatorPoints", PyvtkIncrementalOctreePointLocator_GetLocatorPoints, 1,
   (char*)"V.GetLocatorPoints() -> vtkPoints\nC++: vtkPoints *GetLocatorPoints()\n\nGet access to the vtkPoints object in which point coordinates are\nstored for either point location or point insertion.\n"},
  {(char*)"Initialize", PyvtkIncrementalOctreePointLocator_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nDelete the octree search structure.\n"},
  {(char*)"FreeSearchStructure", PyvtkIncrementalOctreePointLocator_FreeSearchStructure, 1,
   (char*)"V.FreeSearchStructure()\nC++: virtual void FreeSearchStructure()\n\nDelete the octree search structure.\n"},
  {(char*)"GetNumberOfPoints", PyvtkIncrementalOctreePointLocator_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: int GetNumberOfPoints()\n\nGet the number of points maintained by the octree.\n"},
  {(char*)"FindClosestInsertedPoint", PyvtkIncrementalOctreePointLocator_FindClosestInsertedPoint, 1,
   (char*)"V.FindClosestInsertedPoint((float, float, float)) -> int\nC++: virtual vtkIdType FindClosestInsertedPoint(const double x[3])\n\nGiven a point x assumed to be covered by the octree, return the\nindex of the closest in-octree point regardless of the associated\nminimum squared distance relative to the squared\ninsertion-tolerance distance. This method is used when performing\nincremental point insertion. Note -1 indicates that no point is\nfound. InitPointInsertion() should have been called in advance.\n"},
  {(char*)"GenerateRepresentation", PyvtkIncrementalOctreePointLocator_GenerateRepresentation, 1,
   (char*)"V.GenerateRepresentation(int, vtkPolyData)\nC++: virtual void GenerateRepresentation(int nodeLevel,\n    vtkPolyData *polysData)\n\nCreate a polygonal representation of the octree boundary (from\nthe root node to a specified level).\n"},
  {(char*)"BuildLocator", PyvtkIncrementalOctreePointLocator_BuildLocator, 1,
   (char*)"V.BuildLocator()\nC++: virtual void BuildLocator()\n\nLoad points from a dataset to construct an octree for point\nlocation. This function resorts to InitPointInsertion() to\nfulfill some of the work.\n"},
  {(char*)"FindClosestPoint", PyvtkIncrementalOctreePointLocator_FindClosestPoint, 1,
   (char*)"V.FindClosestPoint((float, float, float)) -> int\nC++: virtual vtkIdType FindClosestPoint(const double x[3])\nV.FindClosestPoint(float, float, float) -> int\nC++: virtual vtkIdType FindClosestPoint(double x, double y,\n    double z)\n\nGiven a point x, return the id of the closest point.\nBuildLocator() should have been called prior to this function.\nThis method is thread safe if BuildLocator() is directly or\nindirectly called from a single thread first.\n"},
  {(char*)"FindClosestPointWithinRadius", PyvtkIncrementalOctreePointLocator_FindClosestPointWithinRadius, 1,
   (char*)"V.FindClosestPointWithinRadius(float, (float, float, float),\n    float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double radius,\n     const double x[3], double &dist2)\n\nGiven a point x and a radius, return the id of the closest point\nwithin the radius and the associated minimum squared distance\n(via dist2, this returned distance is valid only if the point id\nis not -1). Note that BuildLocator() should have been called\nprior to this function. This method is thread safe if\nBuildLocator() is directly or indirectly called from a single\nthread first.\n"},
  {(char*)"FindClosestPointWithinSquaredRadius", PyvtkIncrementalOctreePointLocator_FindClosestPointWithinSquaredRadius, 1,
   (char*)"V.FindClosestPointWithinSquaredRadius(float, (float, float, float)\n    , float) -> int\nC++: vtkIdType FindClosestPointWithinSquaredRadius(double radius2,\n     const double x[3], double &dist2)\n\nGiven a point x and a squared radius radius2, return the id of\nthe closest point within the radius and the associated minimum\nsquared distance (via dist2, note this returned distance is valid\nonly if the point id is not\n-1). BuildLocator() should have been called prior to this\n    function.This method is thread safe if BuildLocator() is\n    directly or indirectly called from a single thread first.\n"},
  {(char*)"FindPointsWithinRadius", PyvtkIncrementalOctreePointLocator_FindPointsWithinRadius, 1,
   (char*)"V.FindPointsWithinRadius(float, (float, float, float), vtkIdList)\nC++: virtual void FindPointsWithinRadius(double R,\n    const double x[3], vtkIdList *result)\n\nFind all points within a radius R relative to a given point x.\nThe returned point ids (stored in result) are not sorted in any\nway. BuildLocator() should have been called prior to this\nfunction. This method is thread safe if BuildLocator() is\ndirectly or indirectly called from a single thread first.\n"},
  {(char*)"FindPointsWithinSquaredRadius", PyvtkIncrementalOctreePointLocator_FindPointsWithinSquaredRadius, 1,
   (char*)"V.FindPointsWithinSquaredRadius(float, (float, float, float),\n    vtkIdList)\nC++: void FindPointsWithinSquaredRadius(double R2,\n    const double x[3], vtkIdList *result)\n\nFind all points within a squared radius R2 relative to a given\npoint x. The returned point ids (stored in result) are not sorted\nin any way. BuildLocator() should have been called prior to this\nfunction. This method is thread safe if BuildLocator() is\ndirectly or indirectly called from a single thread first.\n"},
  {(char*)"FindClosestNPoints", PyvtkIncrementalOctreePointLocator_FindClosestNPoints, 1,
   (char*)"V.FindClosestNPoints(int, (float, float, float), vtkIdList)\nC++: virtual void FindClosestNPoints(int N, const double x[3],\n    vtkIdList *result)\n\nFind the closest N points to a given point. The returned point\nids (via result) are sorted from closest to farthest.\nBuildLocator() should have been called prior to this function.\nThis method is thread safe if BuildLocator() is directly or\nindirectly called from a single thread first.\n"},
  {(char*)"InitPointInsertion", PyvtkIncrementalOctreePointLocator_InitPointInsertion, 1,
   (char*)"V.InitPointInsertion(vtkPoints, (float, float, float, float,\n    float, float)) -> int\nC++: virtual int InitPointInsertion(vtkPoints *points,\n    const double bounds[6])\nV.InitPointInsertion(vtkPoints, (float, float, float, float,\n    float, float), int) -> int\nC++: virtual int InitPointInsertion(vtkPoints *points,\n    const double bounds[6], vtkIdType estSize)\n\nInitialize the point insertion process. points is an object,\nstoring 3D point coordinates, to which incremental point\ninsertion put coordinates. It is created and provided by an\nexternal VTK class. Argument bounds represents the spatial\nbounding box, into which the points fall. In fact, an adjusted\nversion of the bounding box is used to build the octree to make\nsure no any point (to be inserted) falls outside the octree. This\nfunction is not thread safe.\n"},
  {(char*)"IsInsertedPoint", PyvtkIncrementalOctreePointLocator_IsInsertedPoint, 1,
   (char*)"V.IsInsertedPoint((float, float, float)) -> int\nC++: virtual vtkIdType IsInsertedPoint(const double x[3])\nV.IsInsertedPoint(float, float, float) -> int\nC++: virtual vtkIdType IsInsertedPoint(double x, double y,\n    double z)\n\nDetermine whether or not a given point has been inserted into the\noctree. Return the id of the already inserted point if true,\notherwise return -1. InitPointInsertion() should have been called\nin advance.\n"},
  {(char*)"InsertUniquePoint", PyvtkIncrementalOctreePointLocator_InsertUniquePoint, 1,
   (char*)"V.InsertUniquePoint((float, float, float), int) -> int\nC++: virtual int InsertUniquePoint(const double point[3],\n    vtkIdType &pntId)\n\nInsert a point to the octree unless there has been a duplciate\npoint. Whether the point is actually inserted (return 1) or not\n(return 0 upon a rejection by an existing duplicate), the index\nof the point (either new or the duplicate) is returned via pntId.\nNote that InitPointInsertion() should have been called prior to\nthis function. vtkPoints::InsertNextPoint() is invoked. This\nmethod is not thread safe.\n"},
  {(char*)"InsertPoint", PyvtkIncrementalOctreePointLocator_InsertPoint, 1,
   (char*)"V.InsertPoint(int, (float, float, float))\nC++: virtual void InsertPoint(vtkIdType ptId, const double x[3])\n\nInsert a given point into the octree with a specified point index\nptId. InitPointInsertion() should have been called prior to this\nfunction. In addition, IsInsertedPoint() should have been called\nin advance to ensure that the given point has not been inserted\nunless point duplication is allowed (Note that in this case, this\nfunction involves a repeated leaf container location).\nvtkPoints::InsertPoint() is invoked.\n"},
  {(char*)"InsertNextPoint", PyvtkIncrementalOctreePointLocator_InsertNextPoint, 1,
   (char*)"V.InsertNextPoint((float, float, float)) -> int\nC++: virtual vtkIdType InsertNextPoint(const double x[3])\n\nInsert a given point into the octree and return the point index.\nNote that InitPointInsertion() should have been called prior to\nthis function. In addition, IsInsertedPoint() should have been\ncalled in advance to ensure that the given point has not been\ninserted unless point duplication is allowed (in this case, this\nfunction invovles a repeated leaf container location).\nvtkPoints::InsertNextPoint() is invoked.\n"},
  {(char*)"InsertPointWithoutChecking", PyvtkIncrementalOctreePointLocator_InsertPointWithoutChecking, 1,
   (char*)"V.InsertPointWithoutChecking((float, float, float), int, int)\nC++: void InsertPointWithoutChecking(const double point[3],\n    vtkIdType &pntId, int insert)\n\n\"Insert\" a point to the octree without any checking. Argument\ninsert means whether vtkPoints::InsertNextPoint() upon 1 is\ncalled or the point itself is not inserted to the vtkPoints at\nall but instead only the point index is inserted to a vtkIdList\nupon 0. For case 0, the point index needs to be specified via\npntId. For case 1, the actual point index is returned via pntId.\nInitPointInsertion() should have been called.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIncrementalOctreePointLocator_StaticNew()
{
  return vtkIncrementalOctreePointLocator::New();
}

PyObject *PyVTKClass_vtkIncrementalOctreePointLocatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIncrementalOctreePointLocator_StaticNew,
    PyvtkIncrementalOctreePointLocator_Methods,
    "vtkIncrementalOctreePointLocator", modulename,
    NULL, NULL,
    PyvtkIncrementalOctreePointLocator_Doc(),
    PyVTKClass_vtkIncrementalPointLocatorNew(modulename));
  return cls;
}

const char **PyvtkIncrementalOctreePointLocator_Doc()
{
  static const char *docstring[] = {
    "vtkIncrementalOctreePointLocator - Incremental octree in support\n\n",
    "Superclass: vtkIncrementalPointLocator\n\n",
    "As opposed to the uniform bin-based search structure (adopted in\nclass\n vtkPointLocator) with a fixed spatial resolution, an octree\nmechanism\n employs a hierarchy of tree-like sub-division of the 3D data domain.\nThus\n it enables data-aware multi-resolution and accordingly accelerated\npoint\n location as well as insertion, particularly when handling a\nradically\n imbalanced layout of points as not un",
    "common in datasets defined on\n adaptive meshes. Compared to a static point locator supporting pure\n location functionalities through some search structure established\nfrom\n a fixed set of points, an incremental point locator allows for, in\naddition,\n point insertion capabilities, with the search structure maintaining\na\n dynamically increasing number of points.\n Class vtkIncrementalOctreePointLocat",
    "or is an octree-based\naccelerated\n implementation of the functionalities of the uniform bin-based\nincremental\n point locator vtkPointLocator. For point location, an octree is\nbuilt by\n accessing a vtkDataSet, specifically a vtkPointSet. For point\ninsertion,\n an empty octree is inited and then incrementally populated as points\nare\n inserted. Three increasingly complex point insertion modes, i.e.,\nd",
    "irect\n check-free insertion, zero tolerance insertion, and non-zero\ntolerance\n insertion, are supported. In fact, the octree used in the point\nlocation\n mode is actually constructed via direct check-free point insertion.\nThis\n class also provides a polygonal representation of the octree\nboundary.\n\nSee Also:\n\n\n vtkAbstractPointLocator, vtkIncrementalPointLocator,\nvtkPointLocator,\n vtkMergePoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIncrementalOctreePointLocator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIncrementalOctreePointLocatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIncrementalOctreePointLocator", o) != 0)
    {
    Py_DECREF(o);
    }

}
