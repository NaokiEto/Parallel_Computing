// python wrapper for vtkGeoTreeNode
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
#include "vtkGeoTreeNode.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoTreeNode(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoTreeNode(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoTreeNodeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoTreeNodeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGeoTreeNode_Doc();


static PyObject *
PyvtkGeoTreeNode_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

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
      tempr = op->vtkGeoTreeNode::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

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
      tempr = op->vtkGeoTreeNode::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  vtkGeoTreeNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoTreeNode::NewInstance();
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
PyvtkGeoTreeNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoTreeNode *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoTreeNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_SetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetId(temp0);
      }
    else
      {
      op->vtkGeoTreeNode::SetId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetId();
      }
    else
      {
      tempr = op->vtkGeoTreeNode::GetId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLevel(temp0);
      }
    else
      {
      op->vtkGeoTreeNode::SetLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLevel();
      }
    else
      {
      tempr = op->vtkGeoTreeNode::GetLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_SetLongitudeRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLongitudeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLongitudeRange(temp0, temp1);
      }
    else
      {
      op->vtkGeoTreeNode::SetLongitudeRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeoTreeNode_SetLongitudeRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLongitudeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetLongitudeRange(temp0);
      }
    else
      {
      op->vtkGeoTreeNode::SetLongitudeRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeoTreeNode_SetLongitudeRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGeoTreeNode_SetLongitudeRange_s1(self, args);
    case 1:
      return PyvtkGeoTreeNode_SetLongitudeRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLongitudeRange");
  return NULL;
}



static PyObject *
PyvtkGeoTreeNode_GetLongitudeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLongitudeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLongitudeRange();
      }
    else
      {
      tempr = op->vtkGeoTreeNode::GetLongitudeRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_SetLatitudeRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatitudeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLatitudeRange(temp0, temp1);
      }
    else
      {
      op->vtkGeoTreeNode::SetLatitudeRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeoTreeNode_SetLatitudeRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatitudeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetLatitudeRange(temp0);
      }
    else
      {
      op->vtkGeoTreeNode::SetLatitudeRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeoTreeNode_SetLatitudeRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGeoTreeNode_SetLatitudeRange_s1(self, args);
    case 1:
      return PyvtkGeoTreeNode_SetLatitudeRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLatitudeRange");
  return NULL;
}



static PyObject *
PyvtkGeoTreeNode_GetLatitudeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatitudeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLatitudeRange();
      }
    else
      {
      tempr = op->vtkGeoTreeNode::GetLatitudeRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_SetChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetChild(temp0, temp1);
      }
    else
      {
      op->vtkGeoTreeNode::SetChild(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_SetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode"))
    {
    if (ap.IsBound())
      {
      op->SetParent(temp0);
      }
    else
      {
      op->vtkGeoTreeNode::SetParent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_SetOlder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOlder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode"))
    {
    if (ap.IsBound())
      {
      op->SetOlder(temp0);
      }
    else
      {
      op->vtkGeoTreeNode::SetOlder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_GetOlder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOlder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  vtkGeoTreeNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOlder();
      }
    else
      {
      tempr = op->vtkGeoTreeNode::GetOlder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_SetNewer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNewer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode"))
    {
    if (ap.IsBound())
      {
      op->SetNewer(temp0);
      }
    else
      {
      op->vtkGeoTreeNode::SetNewer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_GetNewer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNewer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  vtkGeoTreeNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNewer();
      }
    else
      {
      tempr = op->vtkGeoTreeNode::GetNewer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_HasData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

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
      tempr = op->vtkGeoTreeNode::HasData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_DeleteData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeleteData();
      }
    else
      {
      op->vtkGeoTreeNode::DeleteData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_GetWhichChildAreYou(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWhichChildAreYou");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWhichChildAreYou();
      }
    else
      {
      tempr = op->vtkGeoTreeNode::GetWhichChildAreYou();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_IsDescendantOf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDescendantOf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode"))
    {
    if (ap.IsBound())
      {
      tempr = op->IsDescendantOf(temp0);
      }
    else
      {
      tempr = op->vtkGeoTreeNode::IsDescendantOf(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_CreateChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->CreateChildren();
      }
    else
      {
      tempr = op->vtkGeoTreeNode::CreateChildren();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_GetChildTreeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildTreeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  int temp0;
  vtkGeoTreeNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetChildTreeNode(temp0);
      }
    else
      {
      tempr = op->vtkGeoTreeNode::GetChildTreeNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_GetParentTreeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentTreeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

  vtkGeoTreeNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParentTreeNode();
      }
    else
      {
      tempr = op->vtkGeoTreeNode::GetParentTreeNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

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
      op->vtkGeoTreeNode::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoTreeNode_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoTreeNode *op = static_cast<vtkGeoTreeNode *>(vp);

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
      op->vtkGeoTreeNode::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoTreeNode_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoTreeNode_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoTreeNode_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoTreeNode_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoTreeNode\nC++: vtkGeoTreeNode *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoTreeNode_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoTreeNode\nC++: vtkGeoTreeNode *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetId", PyvtkGeoTreeNode_SetId, 1,
   (char*)"V.SetId(int)\nC++: void SetId(unsigned long a)\n\nThe id uniquely specified this node. For this implementation I am\ngoing to store the branch path in the bits.\n"},
  {(char*)"GetId", PyvtkGeoTreeNode_GetId, 1,
   (char*)"V.GetId() -> int\nC++: unsigned long GetId()\n\nThe id uniquely specified this node. For this implementation I am\ngoing to store the branch path in the bits.\n"},
  {(char*)"SetLevel", PyvtkGeoTreeNode_SetLevel, 1,
   (char*)"V.SetLevel(int)\nC++: void SetLevel(int a)\n\n"},
  {(char*)"GetLevel", PyvtkGeoTreeNode_GetLevel, 1,
   (char*)"V.GetLevel() -> int\nC++: int GetLevel()\n\n"},
  {(char*)"SetLongitudeRange", PyvtkGeoTreeNode_SetLongitudeRange, 1,
   (char*)"V.SetLongitudeRange(float, float)\nC++: void SetLongitudeRange(double, double)\nV.SetLongitudeRange((float, float))\nC++: void SetLongitudeRange(double a[2])\n\n"},
  {(char*)"GetLongitudeRange", PyvtkGeoTreeNode_GetLongitudeRange, 1,
   (char*)"V.GetLongitudeRange() -> (float, float)\nC++: double *GetLongitudeRange()\n\n"},
  {(char*)"SetLatitudeRange", PyvtkGeoTreeNode_SetLatitudeRange, 1,
   (char*)"V.SetLatitudeRange(float, float)\nC++: void SetLatitudeRange(double, double)\nV.SetLatitudeRange((float, float))\nC++: void SetLatitudeRange(double a[2])\n\n"},
  {(char*)"GetLatitudeRange", PyvtkGeoTreeNode_GetLatitudeRange, 1,
   (char*)"V.GetLatitudeRange() -> (float, float)\nC++: double *GetLatitudeRange()\n\n"},
  {(char*)"SetChild", PyvtkGeoTreeNode_SetChild, 1,
   (char*)"V.SetChild(vtkGeoTreeNode, int)\nC++: void SetChild(vtkGeoTreeNode *node, int idx)\n\nGet a child of this node. If one is set, then they all should\nset.  No not mix subclasses.\n"},
  {(char*)"SetParent", PyvtkGeoTreeNode_SetParent, 1,
   (char*)"V.SetParent(vtkGeoTreeNode)\nC++: void SetParent(vtkGeoTreeNode *node)\n\nWhen we merge children to a lower resolution parent, we need this\nreference.  It is not referenced counted to avoid reference\nloops. A child should never exist when the parent is destructed\nanyway.\n"},
  {(char*)"SetOlder", PyvtkGeoTreeNode_SetOlder, 1,
   (char*)"V.SetOlder(vtkGeoTreeNode)\nC++: void SetOlder(vtkGeoTreeNode *node)\n\nManage links to older and newer tree nodes. These are used to\nperiodically delete unused patches.\n"},
  {(char*)"GetOlder", PyvtkGeoTreeNode_GetOlder, 1,
   (char*)"V.GetOlder() -> vtkGeoTreeNode\nC++: vtkGeoTreeNode *GetOlder()\n\nManage links to older and newer tree nodes. These are used to\nperiodically delete unused patches.\n"},
  {(char*)"SetNewer", PyvtkGeoTreeNode_SetNewer, 1,
   (char*)"V.SetNewer(vtkGeoTreeNode)\nC++: void SetNewer(vtkGeoTreeNode *node)\n\nManage links to older and newer tree nodes. These are used to\nperiodically delete unused patches.\n"},
  {(char*)"GetNewer", PyvtkGeoTreeNode_GetNewer, 1,
   (char*)"V.GetNewer() -> vtkGeoTreeNode\nC++: vtkGeoTreeNode *GetNewer()\n\nManage links to older and newer tree nodes. These are used to\nperiodically delete unused patches.\n"},
  {(char*)"HasData", PyvtkGeoTreeNode_HasData, 1,
   (char*)"V.HasData() -> bool\nC++: virtual bool HasData()\n\nReturns whether this node has valid data associated with it, or\nif it is an \"empty\" node.\n"},
  {(char*)"DeleteData", PyvtkGeoTreeNode_DeleteData, 1,
   (char*)"V.DeleteData()\nC++: virtual void DeleteData()\n\nDeletes the data associated with the node to make this an \"empty\"\nnode. This is performed when the node has been unused for a\ncertain amount of time.\n"},
  {(char*)"GetWhichChildAreYou", PyvtkGeoTreeNode_GetWhichChildAreYou, 1,
   (char*)"V.GetWhichChildAreYou() -> int\nC++: int GetWhichChildAreYou()\n\nGet this nodes child index in node's parent.\n"},
  {(char*)"IsDescendantOf", PyvtkGeoTreeNode_IsDescendantOf, 1,
   (char*)"V.IsDescendantOf(vtkGeoTreeNode) -> bool\nC++: bool IsDescendantOf(vtkGeoTreeNode *elder)\n\nThis method returns true if this node descends from the elder\nnode.  The descision is made from the node ids, so the nodes do\nnot have to be in the same tree!\n"},
  {(char*)"CreateChildren", PyvtkGeoTreeNode_CreateChildren, 1,
   (char*)"V.CreateChildren() -> int\nC++: int CreateChildren()\n\nCreate children of the same type as parent. Id, level and\nLatitude-Longitude ranges are set. Returns VTK_ERROR if level\ngets too deep to create children.\n"},
  {(char*)"GetChildTreeNode", PyvtkGeoTreeNode_GetChildTreeNode, 1,
   (char*)"V.GetChildTreeNode(int) -> vtkGeoTreeNode\nC++: vtkGeoTreeNode *GetChildTreeNode(int idx)\n\nGet the child as a vtkGeoTreeNode. Subclasses also implement\nGetChild() which returns the child as the appropriate subclass\ntype.\n"},
  {(char*)"GetParentTreeNode", PyvtkGeoTreeNode_GetParentTreeNode, 1,
   (char*)"V.GetParentTreeNode() -> vtkGeoTreeNode\nC++: vtkGeoTreeNode *GetParentTreeNode()\n\nGet the parent as a vtkGeoTreeNode. Subclasses also implement\nGetParent() which returns the parent as the appropriate subclass\ntype.\n"},
  {(char*)"ShallowCopy", PyvtkGeoTreeNode_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkGeoTreeNode)\nC++: virtual void ShallowCopy(vtkGeoTreeNode *src)\n\nShallow and Deep copy. Deep copy performs a shallow copy of the\nChild nodes.\n"},
  {(char*)"DeepCopy", PyvtkGeoTreeNode_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkGeoTreeNode)\nC++: virtual void DeepCopy(vtkGeoTreeNode *src)\n\nShallow and Deep copy. Deep copy performs a shallow copy of the\nChild nodes.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoTreeNode_StaticNew()
{
  return vtkGeoTreeNode::New();
}

PyObject *PyVTKClass_vtkGeoTreeNodeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoTreeNode_StaticNew,
    PyvtkGeoTreeNode_Methods,
    "vtkGeoTreeNode", modulename,
    NULL, NULL,
    PyvtkGeoTreeNode_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"NONE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"PROCESSING", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkGeoTreeNode_Doc()
{
  static const char *docstring[] = {
    "vtkGeoTreeNode - Stores data for a patch of the globe.\n\n",
    "Superclass: vtkObject\n\n",
    "A self-referential data structure for storing geometry or imagery for\nthe geospatial views. The data is organized in a quadtree. Each node\ncontains a pointer to its parent and owns references to its four\nchild nodes. The ID of each node is unique in its level, and encodes\nthe path from the root node in its bits.\n\nSee Also:\n\nvtkGeoView vtkGeoView2D vtkGeoTerrain\nvtkGeoAlignedImageRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoTreeNode(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoTreeNodeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoTreeNode", o) != 0)
    {
    Py_DECREF(o);
    }

}

