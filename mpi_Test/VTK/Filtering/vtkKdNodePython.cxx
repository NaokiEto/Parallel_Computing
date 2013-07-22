// python wrapper for vtkKdNode
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
#include "vtkKdNode.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkKdNode(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkKdNode(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkKdNodeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkKdNodeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkKdNode_Doc();


static PyObject *
PyvtkKdNode_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      tempr = op->vtkKdNode::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      tempr = op->vtkKdNode::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkKdNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkKdNode::NewInstance();
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
PyvtkKdNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkKdNode *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkKdNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetDim(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDim");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDim(temp0);
      }
    else
      {
      op->vtkKdNode::SetDim(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetDim(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDim");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDim();
      }
    else
      {
      tempr = op->vtkKdNode::GetDim();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetDivisionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDivisionPosition();
      }
    else
      {
      tempr = op->vtkKdNode::GetDivisionPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      op->vtkKdNode::SetNumberOfPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      tempr = op->vtkKdNode::GetNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      op->vtkKdNode::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkKdNode_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      op->vtkKdNode::SetBounds(temp0);
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
PyvtkKdNode_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkKdNode_SetBounds_s1(self, args);
    case 1:
      return PyvtkKdNode_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkKdNode_SetDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      op->vtkKdNode::SetDataBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetMinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinBounds();
      }
    else
      {
      tempr = op->vtkKdNode::GetMinBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetMaxBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxBounds();
      }
    else
      {
      tempr = op->vtkKdNode::GetMaxBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetMinDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinDataBounds();
      }
    else
      {
      tempr = op->vtkKdNode::GetMinDataBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetMaxDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxDataBounds();
      }
    else
      {
      tempr = op->vtkKdNode::GetMaxDataBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetID(temp0);
      }
    else
      {
      op->vtkKdNode::SetID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      tempr = op->vtkKdNode::GetID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetMinID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      tempr = op->vtkKdNode::GetMinID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetMaxID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxID();
      }
    else
      {
      tempr = op->vtkKdNode::GetMaxID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetMinID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinID(temp0);
      }
    else
      {
      op->vtkKdNode::SetMinID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetMaxID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxID(temp0);
      }
    else
      {
      op->vtkKdNode::SetMaxID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_AddChildNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddChildNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkKdNode *temp0 = NULL;
  vtkKdNode *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkKdNode") &&
      ap.GetVTKObject(temp1, "vtkKdNode"))
    {
    if (ap.IsBound())
      {
      op->AddChildNodes(temp0, temp1);
      }
    else
      {
      op->vtkKdNode::AddChildNodes(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_DeleteChildNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteChildNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeleteChildNodes();
      }
    else
      {
      op->vtkKdNode::DeleteChildNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkKdNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeft();
      }
    else
      {
      tempr = op->vtkKdNode::GetLeft();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkKdNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKdNode"))
    {
    if (ap.IsBound())
      {
      op->SetLeft(temp0);
      }
    else
      {
      op->vtkKdNode::SetLeft(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkKdNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRight();
      }
    else
      {
      tempr = op->vtkKdNode::GetRight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkKdNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKdNode"))
    {
    if (ap.IsBound())
      {
      op->SetRight(temp0);
      }
    else
      {
      op->vtkKdNode::SetRight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkKdNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUp();
      }
    else
      {
      tempr = op->vtkKdNode::GetUp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_SetUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkKdNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKdNode"))
    {
    if (ap.IsBound())
      {
      op->SetUp(temp0);
      }
    else
      {
      op->vtkKdNode::SetUp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_IntersectsBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  int temp6;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    if (ap.IsBound())
      {
      tempr = op->IntersectsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      tempr = op->vtkKdNode::IntersectsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_IntersectsSphere2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsSphere2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  int temp4;
  int tempr;
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
      tempr = op->IntersectsSphere2(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkKdNode::IntersectsSphere2(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_IntersectsRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      tempr = op->vtkKdNode::IntersectsRegion(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_ContainsBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  int temp6;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    if (ap.IsBound())
      {
      tempr = op->ContainsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      tempr = op->vtkKdNode::ContainsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_ContainsPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      tempr = op->vtkKdNode::ContainsPoint(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetDistance2ToBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int temp3;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistance2ToBoundary(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkKdNode::GetDistance2ToBoundary(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_GetDistance2ToInnerBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToInnerBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistance2ToInnerBoundary(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkKdNode::GetDistance2ToInnerBoundary(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_PrintNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->PrintNode(temp0);
      }
    else
      {
      op->vtkKdNode::PrintNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKdNode_PrintVerboseNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintVerboseNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->PrintVerboseNode(temp0);
      }
    else
      {
      op->vtkKdNode::PrintVerboseNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkKdNode_Methods[] = {
  {(char*)"GetClassName", PyvtkKdNode_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkKdNode_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkKdNode_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkKdNode\nC++: vtkKdNode *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkKdNode_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkKdNode\nC++: vtkKdNode *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDim", PyvtkKdNode_SetDim, 1,
   (char*)"V.SetDim(int)\nC++: void SetDim(int a)\n\nSet/Get the dimension along which this region is divided. (0 - x,\n1 - y, 2 - z, 3 - leaf node (default)).\n"},
  {(char*)"GetDim", PyvtkKdNode_GetDim, 1,
   (char*)"V.GetDim() -> int\nC++: int GetDim()\n\nSet/Get the dimension along which this region is divided. (0 - x,\n1 - y, 2 - z, 3 - leaf node (default)).\n"},
  {(char*)"GetDivisionPosition", PyvtkKdNode_GetDivisionPosition, 1,
   (char*)"V.GetDivisionPosition() -> float\nC++: virtual double GetDivisionPosition()\n\nGet the location of the division plane along the axis the region\nis divided.  See also GetDim().  The result is undertermined if\nthis node is not divided (a leaf node).\n"},
  {(char*)"SetNumberOfPoints", PyvtkKdNode_SetNumberOfPoints, 1,
   (char*)"V.SetNumberOfPoints(int)\nC++: void SetNumberOfPoints(int a)\n\nSet/Get the number of points contained in this region.\n"},
  {(char*)"GetNumberOfPoints", PyvtkKdNode_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: int GetNumberOfPoints()\n\nSet/Get the number of points contained in this region.\n"},
  {(char*)"SetBounds", PyvtkKdNode_SetBounds, 1,
   (char*)"V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double x1, double x2, double y1, double y2,\n    double z1, double z2)\nV.SetBounds([float, float, float, float, float, float])\nC++: void SetBounds(double b[6])\n\nSet/Get the bounds of the spatial region represented by this\nnode.\n  Caller allocates storage for 6-vector in GetBounds.\n"},
  {(char*)"SetDataBounds", PyvtkKdNode_SetDataBounds, 1,
   (char*)"V.SetDataBounds(float, float, float, float, float, float)\nC++: void SetDataBounds(double x1, double x2, double y1,\n    double y2, double z1, double z2)\n\nSet/Get the bounds of the points contained in this spatial\nregion.\n  This may be smaller than the bounds of the region itself.\n  Caller allocates storage for 6-vector in GetDataBounds.\n"},
  {(char*)"GetMinBounds", PyvtkKdNode_GetMinBounds, 1,
   (char*)"V.GetMinBounds() -> (float, float, float)\nC++: double *GetMinBounds()\n\nGet a pointer to the 3 bound minima (xmin, ymin and zmin) or the\n  3 bound maxima (xmax, ymax, zmax).  Don't free this pointer.\n"},
  {(char*)"GetMaxBounds", PyvtkKdNode_GetMaxBounds, 1,
   (char*)"V.GetMaxBounds() -> (float, float, float)\nC++: double *GetMaxBounds()\n\nGet a pointer to the 3 bound minima (xmin, ymin and zmin) or the\n  3 bound maxima (xmax, ymax, zmax).  Don't free this pointer.\n"},
  {(char*)"GetMinDataBounds", PyvtkKdNode_GetMinDataBounds, 1,
   (char*)"V.GetMinDataBounds() -> (float, float, float)\nC++: double *GetMinDataBounds()\n\nGet a pointer to the 3 data bound minima (xmin, ymin and zmin) or\nthe\n  3 data bound maxima (xmax, ymax, zmax).  Don't free this\npointer.\n"},
  {(char*)"GetMaxDataBounds", PyvtkKdNode_GetMaxDataBounds, 1,
   (char*)"V.GetMaxDataBounds() -> (float, float, float)\nC++: double *GetMaxDataBounds()\n\nGet a pointer to the 3 data bound minima (xmin, ymin and zmin) or\nthe\n  3 data bound maxima (xmax, ymax, zmax).  Don't free this\npointer.\n"},
  {(char*)"SetID", PyvtkKdNode_SetID, 1,
   (char*)"V.SetID(int)\nC++: void SetID(int a)\n\nSet/Get the ID associated with the region described by this node.\n If\n  this is not a leaf node, this value should be -1.\n"},
  {(char*)"GetID", PyvtkKdNode_GetID, 1,
   (char*)"V.GetID() -> int\nC++: int GetID()\n\nSet/Get the ID associated with the region described by this node.\n If\n  this is not a leaf node, this value should be -1.\n"},
  {(char*)"GetMinID", PyvtkKdNode_GetMinID, 1,
   (char*)"V.GetMinID() -> int\nC++: int GetMinID()\n\nIf this node is not a leaf node, there are leaf nodes below it\nwhose\n  regions represent a partitioning of this region.  The IDs of\nthese\n  leaf nodes form a contigous set.  Set/Get the range of the IDs\nof\n  the leaf nodes below this node.  If this is already a leaf\nnode, these\n  values should be the same as the ID.\n"},
  {(char*)"GetMaxID", PyvtkKdNode_GetMaxID, 1,
   (char*)"V.GetMaxID() -> int\nC++: int GetMaxID()\n\nIf this node is not a leaf node, there are leaf nodes below it\nwhose\n  regions represent a partitioning of this region.  The IDs of\nthese\n  leaf nodes form a contigous set.  Set/Get the range of the IDs\nof\n  the leaf nodes below this node.  If this is already a leaf\nnode, these\n  values should be the same as the ID.\n"},
  {(char*)"SetMinID", PyvtkKdNode_SetMinID, 1,
   (char*)"V.SetMinID(int)\nC++: void SetMinID(int a)\n\nIf this node is not a leaf node, there are leaf nodes below it\nwhose\n  regions represent a partitioning of this region.  The IDs of\nthese\n  leaf nodes form a contigous set.  Set/Get the range of the IDs\nof\n  the leaf nodes below this node.  If this is already a leaf\nnode, these\n  values should be the same as the ID.\n"},
  {(char*)"SetMaxID", PyvtkKdNode_SetMaxID, 1,
   (char*)"V.SetMaxID(int)\nC++: void SetMaxID(int a)\n\nIf this node is not a leaf node, there are leaf nodes below it\nwhose\n  regions represent a partitioning of this region.  The IDs of\nthese\n  leaf nodes form a contigous set.  Set/Get the range of the IDs\nof\n  the leaf nodes below this node.  If this is already a leaf\nnode, these\n  values should be the same as the ID.\n"},
  {(char*)"AddChildNodes", PyvtkKdNode_AddChildNodes, 1,
   (char*)"V.AddChildNodes(vtkKdNode, vtkKdNode)\nC++: void AddChildNodes(vtkKdNode *left, vtkKdNode *right)\n\nAdd the left and right children.\n"},
  {(char*)"DeleteChildNodes", PyvtkKdNode_DeleteChildNodes, 1,
   (char*)"V.DeleteChildNodes()\nC++: void DeleteChildNodes()\n\nDelete the left and right children.\n"},
  {(char*)"GetLeft", PyvtkKdNode_GetLeft, 1,
   (char*)"V.GetLeft() -> vtkKdNode\nC++: vtkKdNode *GetLeft()\n\nSet/Get a pointer to the left child of this node.\n"},
  {(char*)"SetLeft", PyvtkKdNode_SetLeft, 1,
   (char*)"V.SetLeft(vtkKdNode)\nC++: void SetLeft(vtkKdNode *left)\n\nSet/Get a pointer to the left child of this node.\n"},
  {(char*)"GetRight", PyvtkKdNode_GetRight, 1,
   (char*)"V.GetRight() -> vtkKdNode\nC++: vtkKdNode *GetRight()\n\nSet/Get a pointer to the right child of this node.\n"},
  {(char*)"SetRight", PyvtkKdNode_SetRight, 1,
   (char*)"V.SetRight(vtkKdNode)\nC++: void SetRight(vtkKdNode *right)\n\nSet/Get a pointer to the right child of this node.\n"},
  {(char*)"GetUp", PyvtkKdNode_GetUp, 1,
   (char*)"V.GetUp() -> vtkKdNode\nC++: vtkKdNode *GetUp()\n\nSet/Get a pointer to the parent of this node.\n"},
  {(char*)"SetUp", PyvtkKdNode_SetUp, 1,
   (char*)"V.SetUp(vtkKdNode)\nC++: void SetUp(vtkKdNode *up)\n\nSet/Get a pointer to the parent of this node.\n"},
  {(char*)"IntersectsBox", PyvtkKdNode_IntersectsBox, 1,
   (char*)"V.IntersectsBox(float, float, float, float, float, float, int)\n    -> int\nC++: int IntersectsBox(double x1, double x2, double y1, double y2,\n     double z1, double z2, int useDataBounds)\n\nReturn 1 if this spatial region intersects the axis-aligned box\ngiven\n  by the bounds passed in.  Use the possibly smaller bounds of\nthe points\n  within the region if useDataBounds is non-zero.\n"},
  {(char*)"IntersectsSphere2", PyvtkKdNode_IntersectsSphere2, 1,
   (char*)"V.IntersectsSphere2(float, float, float, float, int) -> int\nC++: int IntersectsSphere2(double x, double y, double z,\n    double rSquared, int useDataBounds)\n\nReturn 1 if this spatial region intersects a sphere described by\n  it's center and the square of it's radius. Use the possibly\nsmaller\n  bounds of the points within the region if useDataBounds is\nnon-zero.\n"},
  {(char*)"IntersectsRegion", PyvtkKdNode_IntersectsRegion, 1,
   (char*)"V.IntersectsRegion(vtkPlanesIntersection, int) -> int\nC++: int IntersectsRegion(vtkPlanesIntersection *pi,\n    int useDataBounds)\n\nA vtkPlanesIntersection object represents a convex 3D region\nbounded\n  by planes, and it is capable of computing intersections of\n  boxes with itself.  Return 1 if this spatial region intersects\n  the spatial region described by the vtkPlanesIntersection\nobject.\n  Use the possibly smaller bounds of the points within the region\n  if useDataBounds is non-zero.\n"},
  {(char*)"ContainsBox", PyvtkKdNode_ContainsBox, 1,
   (char*)"V.ContainsBox(float, float, float, float, float, float, int)\n    -> int\nC++: int ContainsBox(double x1, double x2, double y1, double y2,\n    double z1, double z2, int useDataBounds)\n\nReturn 1 if this spatial region entirely contains a box specified\n  by it's bounds. Use the possibly smaller\n  bounds of the points within the region if useDataBounds is\nnon-zero.\n"},
  {(char*)"ContainsPoint", PyvtkKdNode_ContainsPoint, 1,
   (char*)"V.ContainsPoint(float, float, float, int) -> int\nC++: int ContainsPoint(double x, double y, double z,\n    int useDataBounds)\n\nReturn 1 if this spatial region entirely contains the given\npoint.\n  Use the possibly smaller bounds of the points within the region\n  if useDataBounds is non-zero.\n"},
  {(char*)"GetDistance2ToBoundary", PyvtkKdNode_GetDistance2ToBoundary, 1,
   (char*)"V.GetDistance2ToBoundary(float, float, float, int) -> float\nC++: double GetDistance2ToBoundary(double x, double y, double z,\n    int useDataBounds)\n\nCalculate the distance squared from any point to the boundary of\nthis\n  region.  Use the boundary of the points within the region if\nuseDataBounds\n  is non-zero.\n"},
  {(char*)"GetDistance2ToInnerBoundary", PyvtkKdNode_GetDistance2ToInnerBoundary, 1,
   (char*)"V.GetDistance2ToInnerBoundary(float, float, float) -> float\nC++: double GetDistance2ToInnerBoundary(double x, double y,\n    double z)\n\nCalculate the distance from the specified point (which is\nrequired to\n  be inside this spatial region) to an interior boundary.  An\ninterior\n  boundary is one that is not also an boundary of the entire\nspace\n  partitioned by the tree of vtkKdNode's.\n"},
  {(char*)"PrintNode", PyvtkKdNode_PrintNode, 1,
   (char*)"V.PrintNode(int)\nC++: void PrintNode(int depth)\n\nFor debugging purposes, print out this node.\n"},
  {(char*)"PrintVerboseNode", PyvtkKdNode_PrintVerboseNode, 1,
   (char*)"V.PrintVerboseNode(int)\nC++: void PrintVerboseNode(int depth)\n\nFor debugging purposes, print out this node.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkKdNode_StaticNew()
{
  return vtkKdNode::New();
}

PyObject *PyVTKClass_vtkKdNodeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkKdNode_StaticNew,
    PyvtkKdNode_Methods,
    "vtkKdNode", modulename,
    NULL, NULL,
    PyvtkKdNode_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkKdNode_Doc()
{
  static const char *docstring[] = {
    "vtkKdNode - This class represents a single spatial region\n\n",
    "Superclass: vtkObject\n\n",
    "See Also:\n\n\n     vtkKdTree vtkOBSPCuts\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkKdNode(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkKdNodeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkKdNode", o) != 0)
    {
    Py_DECREF(o);
    }

}

