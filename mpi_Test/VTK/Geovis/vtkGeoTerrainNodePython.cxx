// python wrapper for vtkGeoTerrainNode
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
#include "vtkGeoTerrainNode.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoTerrainNode(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoTerrainNode(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoTerrainNodeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoTerrainNodeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGeoTreeNodeNew
extern "C" { PyObject *PyVTKClass_vtkGeoTreeNodeNew(const char *); }
#define DECLARED_PyVTKClass_vtkGeoTreeNodeNew
#endif

static const char **PyvtkGeoTerrainNode_Doc();


static PyObject *
PyvtkGeoTerrainNode_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

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
      tempr = op->vtkGeoTerrainNode::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

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
      tempr = op->vtkGeoTerrainNode::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  vtkGeoTerrainNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoTerrainNode::NewInstance();
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
PyvtkGeoTerrainNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoTerrainNode *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoTerrainNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_GetChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  int temp0;
  vtkGeoTerrainNode *tempr;
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
      tempr = op->vtkGeoTerrainNode::GetChild(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  vtkGeoTerrainNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParent();
      }
    else
      {
      tempr = op->vtkGeoTerrainNode::GetParent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_GetAltitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAltitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  double temp0;
  double temp1;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAltitude(temp0, temp1);
      }
    else
      {
      tempr = op->vtkGeoTerrainNode::GetAltitude(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_GetModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetModel();
      }
    else
      {
      tempr = op->vtkGeoTerrainNode::GetModel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_SetModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetModel(temp0);
      }
    else
      {
      op->vtkGeoTerrainNode::SetModel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_UpdateBoundingSphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateBoundingSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateBoundingSphere();
      }
    else
      {
      op->vtkGeoTerrainNode::UpdateBoundingSphere();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_GetBoundingSphereRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingSphereRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBoundingSphereRadius();
      }
    else
      {
      tempr = op->vtkGeoTerrainNode::GetBoundingSphereRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_GetBoundingSphereCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingSphereCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBoundingSphereCenter();
      }
    else
      {
      tempr = op->vtkGeoTerrainNode::GetBoundingSphereCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_GetCornerNormal00(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerNormal00");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerNormal00();
      }
    else
      {
      tempr = op->vtkGeoTerrainNode::GetCornerNormal00();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_GetCornerNormal01(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerNormal01");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerNormal01();
      }
    else
      {
      tempr = op->vtkGeoTerrainNode::GetCornerNormal01();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_GetCornerNormal10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerNormal10");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerNormal10();
      }
    else
      {
      tempr = op->vtkGeoTerrainNode::GetCornerNormal10();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_GetCornerNormal11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerNormal11");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerNormal11();
      }
    else
      {
      tempr = op->vtkGeoTerrainNode::GetCornerNormal11();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_GetProjectionBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjectionBounds();
      }
    else
      {
      tempr = op->vtkGeoTerrainNode::GetProjectionBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_SetProjectionBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

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
      op->SetProjectionBounds(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkGeoTerrainNode::SetProjectionBounds(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeoTerrainNode_SetProjectionBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionBounds(temp0);
      }
    else
      {
      op->vtkGeoTerrainNode::SetProjectionBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeoTerrainNode_SetProjectionBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkGeoTerrainNode_SetProjectionBounds_s1(self, args);
    case 1:
      return PyvtkGeoTerrainNode_SetProjectionBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetProjectionBounds");
  return NULL;
}



static PyObject *
PyvtkGeoTerrainNode_GetGraticuleLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraticuleLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGraticuleLevel();
      }
    else
      {
      tempr = op->vtkGeoTerrainNode::GetGraticuleLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_SetGraticuleLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraticuleLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGraticuleLevel(temp0);
      }
    else
      {
      op->vtkGeoTerrainNode::SetGraticuleLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetError();
      }
    else
      {
      tempr = op->vtkGeoTerrainNode::GetError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_SetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetError(temp0);
      }
    else
      {
      op->vtkGeoTerrainNode::SetError(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_GetCoverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCoverage();
      }
    else
      {
      tempr = op->vtkGeoTerrainNode::GetCoverage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_SetCoverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCoverage(temp0);
      }
    else
      {
      op->vtkGeoTerrainNode::SetCoverage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkGeoTerrainNode::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkGeoTerrainNode::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_HasData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasData();
      }
    else
      {
      tempr = op->vtkGeoTerrainNode::HasData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTerrainNode_DeleteData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTerrainNode *op = static_cast<vtkGeoTerrainNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeleteData();
      }
    else
      {
      op->vtkGeoTerrainNode::DeleteData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoTerrainNode_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoTerrainNode_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoTerrainNode_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoTerrainNode_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoTerrainNode\nC++: vtkGeoTerrainNode *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoTerrainNode_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoTerrainNode\nC++: vtkGeoTerrainNode *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetChild", PyvtkGeoTerrainNode_GetChild, 1,
   (char*)"V.GetChild(int) -> vtkGeoTerrainNode\nC++: vtkGeoTerrainNode *GetChild(int idx)\n\nEvery subclass implements these methods returning the specific\ntype. This is easier than templating.\n"},
  {(char*)"GetParent", PyvtkGeoTerrainNode_GetParent, 1,
   (char*)"V.GetParent() -> vtkGeoTerrainNode\nC++: vtkGeoTerrainNode *GetParent()\n\nEvery subclass implements these methods returning the specific\ntype. This is easier than templating.\n"},
  {(char*)"GetAltitude", PyvtkGeoTerrainNode_GetAltitude, 1,
   (char*)"V.GetAltitude(float, float) -> float\nC++: double GetAltitude(double longitude, double latitude)\n\nGiven, a long, lat position, return altitude in meters relative\nto  sea level.\n"},
  {(char*)"GetModel", PyvtkGeoTerrainNode_GetModel, 1,
   (char*)"V.GetModel() -> vtkPolyData\nC++: vtkPolyData *GetModel()\n\nGet the terrrain model.  The user has to copy the terrain into\nthis object.\n"},
  {(char*)"SetModel", PyvtkGeoTerrainNode_SetModel, 1,
   (char*)"V.SetModel(vtkPolyData)\nC++: void SetModel(vtkPolyData *model)\n\nGet the terrrain model.  The user has to copy the terrain into\nthis object.\n"},
  {(char*)"UpdateBoundingSphere", PyvtkGeoTerrainNode_UpdateBoundingSphere, 1,
   (char*)"V.UpdateBoundingSphere()\nC++: void UpdateBoundingSphere()\n\nBounding sphere is precomputed for faster updates of terrain.\n"},
  {(char*)"GetBoundingSphereRadius", PyvtkGeoTerrainNode_GetBoundingSphereRadius, 1,
   (char*)"V.GetBoundingSphereRadius() -> float\nC++: double GetBoundingSphereRadius()\n\nBounding sphere is precomputed for faster updates of terrain.\n"},
  {(char*)"GetBoundingSphereCenter", PyvtkGeoTerrainNode_GetBoundingSphereCenter, 1,
   (char*)"V.GetBoundingSphereCenter() -> (float, float, float)\nC++: double *GetBoundingSphereCenter()\n\n"},
  {(char*)"GetCornerNormal00", PyvtkGeoTerrainNode_GetCornerNormal00, 1,
   (char*)"V.GetCornerNormal00() -> (float, float, float)\nC++: double *GetCornerNormal00()\n\n"},
  {(char*)"GetCornerNormal01", PyvtkGeoTerrainNode_GetCornerNormal01, 1,
   (char*)"V.GetCornerNormal01() -> (float, float, float)\nC++: double *GetCornerNormal01()\n\n"},
  {(char*)"GetCornerNormal10", PyvtkGeoTerrainNode_GetCornerNormal10, 1,
   (char*)"V.GetCornerNormal10() -> (float, float, float)\nC++: double *GetCornerNormal10()\n\n"},
  {(char*)"GetCornerNormal11", PyvtkGeoTerrainNode_GetCornerNormal11, 1,
   (char*)"V.GetCornerNormal11() -> (float, float, float)\nC++: double *GetCornerNormal11()\n\n"},
  {(char*)"GetProjectionBounds", PyvtkGeoTerrainNode_GetProjectionBounds, 1,
   (char*)"V.GetProjectionBounds() -> (float, float, float, float)\nC++: double *GetProjectionBounds()\n\n"},
  {(char*)"SetProjectionBounds", PyvtkGeoTerrainNode_SetProjectionBounds, 1,
   (char*)"V.SetProjectionBounds(float, float, float, float)\nC++: void SetProjectionBounds(double, double, double, double)\nV.SetProjectionBounds((float, float, float, float))\nC++: void SetProjectionBounds(double a[4])\n\n"},
  {(char*)"GetGraticuleLevel", PyvtkGeoTerrainNode_GetGraticuleLevel, 1,
   (char*)"V.GetGraticuleLevel() -> int\nC++: int GetGraticuleLevel()\n\nFor 2D projections, store the granularity of the graticule in\nthis node.\n"},
  {(char*)"SetGraticuleLevel", PyvtkGeoTerrainNode_SetGraticuleLevel, 1,
   (char*)"V.SetGraticuleLevel(int)\nC++: void SetGraticuleLevel(int a)\n\nFor 2D projections, store the granularity of the graticule in\nthis node.\n"},
  {(char*)"GetError", PyvtkGeoTerrainNode_GetError, 1,
   (char*)"V.GetError() -> float\nC++: double GetError()\n\nFor 2D projections, store the maximum deviation of line segment\ncenters from the actual projection value.\n"},
  {(char*)"SetError", PyvtkGeoTerrainNode_SetError, 1,
   (char*)"V.SetError(float)\nC++: void SetError(double a)\n\nFor 2D projections, store the maximum deviation of line segment\ncenters from the actual projection value.\n"},
  {(char*)"GetCoverage", PyvtkGeoTerrainNode_GetCoverage, 1,
   (char*)"V.GetCoverage() -> float\nC++: float GetCoverage()\n\nFor 2D projections, store the maximum deviation of line segment\ncenters from the actual projection value.\n"},
  {(char*)"SetCoverage", PyvtkGeoTerrainNode_SetCoverage, 1,
   (char*)"V.SetCoverage(float)\nC++: void SetCoverage(float a)\n\nFor 2D projections, store the maximum deviation of line segment\ncenters from the actual projection value.\n"},
  {(char*)"ShallowCopy", PyvtkGeoTerrainNode_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkGeoTreeNode)\nC++: virtual void ShallowCopy(vtkGeoTreeNode *src)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkGeoTerrainNode_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkGeoTreeNode)\nC++: virtual void DeepCopy(vtkGeoTreeNode *src)\n\nShallow and Deep copy.\n"},
  {(char*)"HasData", PyvtkGeoTerrainNode_HasData, 1,
   (char*)"V.HasData() -> bool\nC++: virtual bool HasData()\n\nReturns whether this node has valid data associated with it, or\nif it is an \"empty\" node.\n"},
  {(char*)"DeleteData", PyvtkGeoTerrainNode_DeleteData, 1,
   (char*)"V.DeleteData()\nC++: virtual void DeleteData()\n\nDeletes the data associated with the node to make this an \"empty\"\nnode. This is performed when the node has been unused for a\ncertain amount of time.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoTerrainNode_StaticNew()
{
  return vtkGeoTerrainNode::New();
}

PyObject *PyVTKClass_vtkGeoTerrainNodeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoTerrainNode_StaticNew,
    PyvtkGeoTerrainNode_Methods,
    "vtkGeoTerrainNode", modulename,
    NULL, NULL,
    PyvtkGeoTerrainNode_Doc(),
    PyVTKClass_vtkGeoTreeNodeNew(modulename));
  return cls;
}

const char **PyvtkGeoTerrainNode_Doc()
{
  static const char *docstring[] = {
    "vtkGeoTerrainNode - \n\n",
    "Superclass: vtkGeoTreeNode\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoTerrainNode(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoTerrainNodeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoTerrainNode", o) != 0)
    {
    Py_DECREF(o);
    }

}

