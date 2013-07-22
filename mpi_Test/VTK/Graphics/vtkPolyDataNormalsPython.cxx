// python wrapper for vtkPolyDataNormals
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
#include "vtkPolyDataNormals.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolyDataNormals(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolyDataNormals(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolyDataNormalsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolyDataNormalsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkPolyDataNormals_Doc();


static PyObject *
PyvtkPolyDataNormals_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

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
      tempr = op->vtkPolyDataNormals::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

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
      tempr = op->vtkPolyDataNormals::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  vtkPolyDataNormals *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolyDataNormals::NewInstance();
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
PyvtkPolyDataNormals_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPolyDataNormals *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPolyDataNormals::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFeatureAngle(temp0);
      }
    else
      {
      op->vtkPolyDataNormals::SetFeatureAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetFeatureAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFeatureAngleMinValue();
      }
    else
      {
      tempr = op->vtkPolyDataNormals::GetFeatureAngleMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetFeatureAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFeatureAngleMaxValue();
      }
    else
      {
      tempr = op->vtkPolyDataNormals::GetFeatureAngleMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFeatureAngle();
      }
    else
      {
      tempr = op->vtkPolyDataNormals::GetFeatureAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SetSplitting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSplitting(temp0);
      }
    else
      {
      op->vtkPolyDataNormals::SetSplitting(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetSplitting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSplitting();
      }
    else
      {
      tempr = op->vtkPolyDataNormals::GetSplitting();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SplittingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplittingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SplittingOn();
      }
    else
      {
      op->vtkPolyDataNormals::SplittingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SplittingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplittingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SplittingOff();
      }
    else
      {
      op->vtkPolyDataNormals::SplittingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SetConsistency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConsistency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConsistency(temp0);
      }
    else
      {
      op->vtkPolyDataNormals::SetConsistency(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetConsistency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConsistency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConsistency();
      }
    else
      {
      tempr = op->vtkPolyDataNormals::GetConsistency();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_ConsistencyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConsistencyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConsistencyOn();
      }
    else
      {
      op->vtkPolyDataNormals::ConsistencyOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_ConsistencyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConsistencyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConsistencyOff();
      }
    else
      {
      op->vtkPolyDataNormals::ConsistencyOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SetAutoOrientNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoOrientNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoOrientNormals(temp0);
      }
    else
      {
      op->vtkPolyDataNormals::SetAutoOrientNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetAutoOrientNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoOrientNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutoOrientNormals();
      }
    else
      {
      tempr = op->vtkPolyDataNormals::GetAutoOrientNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_AutoOrientNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoOrientNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoOrientNormalsOn();
      }
    else
      {
      op->vtkPolyDataNormals::AutoOrientNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_AutoOrientNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoOrientNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoOrientNormalsOff();
      }
    else
      {
      op->vtkPolyDataNormals::AutoOrientNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SetComputePointNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputePointNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputePointNormals(temp0);
      }
    else
      {
      op->vtkPolyDataNormals::SetComputePointNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetComputePointNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputePointNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputePointNormals();
      }
    else
      {
      tempr = op->vtkPolyDataNormals::GetComputePointNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_ComputePointNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputePointNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputePointNormalsOn();
      }
    else
      {
      op->vtkPolyDataNormals::ComputePointNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_ComputePointNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputePointNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputePointNormalsOff();
      }
    else
      {
      op->vtkPolyDataNormals::ComputePointNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SetComputeCellNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeCellNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeCellNormals(temp0);
      }
    else
      {
      op->vtkPolyDataNormals::SetComputeCellNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetComputeCellNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeCellNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeCellNormals();
      }
    else
      {
      tempr = op->vtkPolyDataNormals::GetComputeCellNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_ComputeCellNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeCellNormalsOn();
      }
    else
      {
      op->vtkPolyDataNormals::ComputeCellNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_ComputeCellNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeCellNormalsOff();
      }
    else
      {
      op->vtkPolyDataNormals::ComputeCellNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SetFlipNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFlipNormals(temp0);
      }
    else
      {
      op->vtkPolyDataNormals::SetFlipNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetFlipNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFlipNormals();
      }
    else
      {
      tempr = op->vtkPolyDataNormals::GetFlipNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_FlipNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlipNormalsOn();
      }
    else
      {
      op->vtkPolyDataNormals::FlipNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_FlipNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FlipNormalsOff();
      }
    else
      {
      op->vtkPolyDataNormals::FlipNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SetNonManifoldTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonManifoldTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNonManifoldTraversal(temp0);
      }
    else
      {
      op->vtkPolyDataNormals::SetNonManifoldTraversal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetNonManifoldTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonManifoldTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNonManifoldTraversal();
      }
    else
      {
      tempr = op->vtkPolyDataNormals::GetNonManifoldTraversal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_NonManifoldTraversalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldTraversalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NonManifoldTraversalOn();
      }
    else
      {
      op->vtkPolyDataNormals::NonManifoldTraversalOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_NonManifoldTraversalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldTraversalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NonManifoldTraversalOff();
      }
    else
      {
      op->vtkPolyDataNormals::NonManifoldTraversalOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataNormals_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataNormals_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolyDataNormals_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolyDataNormals_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolyDataNormals\nC++: vtkPolyDataNormals *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolyDataNormals_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyDataNormals\nC++: vtkPolyDataNormals *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFeatureAngle", PyvtkPolyDataNormals_SetFeatureAngle, 1,
   (char*)"V.SetFeatureAngle(float)\nC++: void SetFeatureAngle(double)\n\nSpecify the angle that defines a sharp edge. If the difference in\nangle across neighboring polygons is greater than this value, the\nshared edge is considered \"sharp\".\n"},
  {(char*)"GetFeatureAngleMinValue", PyvtkPolyDataNormals_GetFeatureAngleMinValue, 1,
   (char*)"V.GetFeatureAngleMinValue() -> float\nC++: double GetFeatureAngleMinValue()\n\nSpecify the angle that defines a sharp edge. If the difference in\nangle across neighboring polygons is greater than this value, the\nshared edge is considered \"sharp\".\n"},
  {(char*)"GetFeatureAngleMaxValue", PyvtkPolyDataNormals_GetFeatureAngleMaxValue, 1,
   (char*)"V.GetFeatureAngleMaxValue() -> float\nC++: double GetFeatureAngleMaxValue()\n\nSpecify the angle that defines a sharp edge. If the difference in\nangle across neighboring polygons is greater than this value, the\nshared edge is considered \"sharp\".\n"},
  {(char*)"GetFeatureAngle", PyvtkPolyDataNormals_GetFeatureAngle, 1,
   (char*)"V.GetFeatureAngle() -> float\nC++: double GetFeatureAngle()\n\nSpecify the angle that defines a sharp edge. If the difference in\nangle across neighboring polygons is greater than this value, the\nshared edge is considered \"sharp\".\n"},
  {(char*)"SetSplitting", PyvtkPolyDataNormals_SetSplitting, 1,
   (char*)"V.SetSplitting(int)\nC++: void SetSplitting(int a)\n\nTurn on/off the splitting of sharp edges.\n"},
  {(char*)"GetSplitting", PyvtkPolyDataNormals_GetSplitting, 1,
   (char*)"V.GetSplitting() -> int\nC++: int GetSplitting()\n\nTurn on/off the splitting of sharp edges.\n"},
  {(char*)"SplittingOn", PyvtkPolyDataNormals_SplittingOn, 1,
   (char*)"V.SplittingOn()\nC++: void SplittingOn()\n\nTurn on/off the splitting of sharp edges.\n"},
  {(char*)"SplittingOff", PyvtkPolyDataNormals_SplittingOff, 1,
   (char*)"V.SplittingOff()\nC++: void SplittingOff()\n\nTurn on/off the splitting of sharp edges.\n"},
  {(char*)"SetConsistency", PyvtkPolyDataNormals_SetConsistency, 1,
   (char*)"V.SetConsistency(int)\nC++: void SetConsistency(int a)\n\nTurn on/off the enforcement of consistent polygon ordering.\n"},
  {(char*)"GetConsistency", PyvtkPolyDataNormals_GetConsistency, 1,
   (char*)"V.GetConsistency() -> int\nC++: int GetConsistency()\n\nTurn on/off the enforcement of consistent polygon ordering.\n"},
  {(char*)"ConsistencyOn", PyvtkPolyDataNormals_ConsistencyOn, 1,
   (char*)"V.ConsistencyOn()\nC++: void ConsistencyOn()\n\nTurn on/off the enforcement of consistent polygon ordering.\n"},
  {(char*)"ConsistencyOff", PyvtkPolyDataNormals_ConsistencyOff, 1,
   (char*)"V.ConsistencyOff()\nC++: void ConsistencyOff()\n\nTurn on/off the enforcement of consistent polygon ordering.\n"},
  {(char*)"SetAutoOrientNormals", PyvtkPolyDataNormals_SetAutoOrientNormals, 1,
   (char*)"V.SetAutoOrientNormals(int)\nC++: void SetAutoOrientNormals(int a)\n\nTurn on/off the automatic determination of correct normal\norientation. NOTE: This assumes a completely closed surface (i.e.\nno boundary edges) and no non-manifold edges. If these\nconstraints do not hold, all bets are off. This option adds some\ncomputational complexity, and is useful if you don't want to have\nto inspect the rendered image to determine whether to turn on the\nFlipNormals flag. However, this flag can work with the\nFlipNormals flag, and if both are set, all the normals in the\noutput will point \"inward\".\n"},
  {(char*)"GetAutoOrientNormals", PyvtkPolyDataNormals_GetAutoOrientNormals, 1,
   (char*)"V.GetAutoOrientNormals() -> int\nC++: int GetAutoOrientNormals()\n\nTurn on/off the automatic determination of correct normal\norientation. NOTE: This assumes a completely closed surface (i.e.\nno boundary edges) and no non-manifold edges. If these\nconstraints do not hold, all bets are off. This option adds some\ncomputational complexity, and is useful if you don't want to have\nto inspect the rendered image to determine whether to turn on the\nFlipNormals flag. However, this flag can work with the\nFlipNormals flag, and if both are set, all the normals in the\noutput will point \"inward\".\n"},
  {(char*)"AutoOrientNormalsOn", PyvtkPolyDataNormals_AutoOrientNormalsOn, 1,
   (char*)"V.AutoOrientNormalsOn()\nC++: void AutoOrientNormalsOn()\n\nTurn on/off the automatic determination of correct normal\norientation. NOTE: This assumes a completely closed surface (i.e.\nno boundary edges) and no non-manifold edges. If these\nconstraints do not hold, all bets are off. This option adds some\ncomputational complexity, and is useful if you don't want to have\nto inspect the rendered image to determine whether to turn on the\nFlipNormals flag. However, this flag can work with the\nFlipNormals flag, and if both are set, all the normals in the\noutput will point \"inward\".\n"},
  {(char*)"AutoOrientNormalsOff", PyvtkPolyDataNormals_AutoOrientNormalsOff, 1,
   (char*)"V.AutoOrientNormalsOff()\nC++: void AutoOrientNormalsOff()\n\nTurn on/off the automatic determination of correct normal\norientation. NOTE: This assumes a completely closed surface (i.e.\nno boundary edges) and no non-manifold edges. If these\nconstraints do not hold, all bets are off. This option adds some\ncomputational complexity, and is useful if you don't want to have\nto inspect the rendered image to determine whether to turn on the\nFlipNormals flag. However, this flag can work with the\nFlipNormals flag, and if both are set, all the normals in the\noutput will point \"inward\".\n"},
  {(char*)"SetComputePointNormals", PyvtkPolyDataNormals_SetComputePointNormals, 1,
   (char*)"V.SetComputePointNormals(int)\nC++: void SetComputePointNormals(int a)\n\nTurn on/off the computation of point normals.\n"},
  {(char*)"GetComputePointNormals", PyvtkPolyDataNormals_GetComputePointNormals, 1,
   (char*)"V.GetComputePointNormals() -> int\nC++: int GetComputePointNormals()\n\nTurn on/off the computation of point normals.\n"},
  {(char*)"ComputePointNormalsOn", PyvtkPolyDataNormals_ComputePointNormalsOn, 1,
   (char*)"V.ComputePointNormalsOn()\nC++: void ComputePointNormalsOn()\n\nTurn on/off the computation of point normals.\n"},
  {(char*)"ComputePointNormalsOff", PyvtkPolyDataNormals_ComputePointNormalsOff, 1,
   (char*)"V.ComputePointNormalsOff()\nC++: void ComputePointNormalsOff()\n\nTurn on/off the computation of point normals.\n"},
  {(char*)"SetComputeCellNormals", PyvtkPolyDataNormals_SetComputeCellNormals, 1,
   (char*)"V.SetComputeCellNormals(int)\nC++: void SetComputeCellNormals(int a)\n\nTurn on/off the computation of cell normals.\n"},
  {(char*)"GetComputeCellNormals", PyvtkPolyDataNormals_GetComputeCellNormals, 1,
   (char*)"V.GetComputeCellNormals() -> int\nC++: int GetComputeCellNormals()\n\nTurn on/off the computation of cell normals.\n"},
  {(char*)"ComputeCellNormalsOn", PyvtkPolyDataNormals_ComputeCellNormalsOn, 1,
   (char*)"V.ComputeCellNormalsOn()\nC++: void ComputeCellNormalsOn()\n\nTurn on/off the computation of cell normals.\n"},
  {(char*)"ComputeCellNormalsOff", PyvtkPolyDataNormals_ComputeCellNormalsOff, 1,
   (char*)"V.ComputeCellNormalsOff()\nC++: void ComputeCellNormalsOff()\n\nTurn on/off the computation of cell normals.\n"},
  {(char*)"SetFlipNormals", PyvtkPolyDataNormals_SetFlipNormals, 1,
   (char*)"V.SetFlipNormals(int)\nC++: void SetFlipNormals(int a)\n\nTurn on/off the global flipping of normal orientation. Flipping\nreverves the meaning of front and back for Frontface and Backface\nculling in vtkProperty.  Flipping modifies both the normal\ndirection and the order of a cell's points.\n"},
  {(char*)"GetFlipNormals", PyvtkPolyDataNormals_GetFlipNormals, 1,
   (char*)"V.GetFlipNormals() -> int\nC++: int GetFlipNormals()\n\nTurn on/off the global flipping of normal orientation. Flipping\nreverves the meaning of front and back for Frontface and Backface\nculling in vtkProperty.  Flipping modifies both the normal\ndirection and the order of a cell's points.\n"},
  {(char*)"FlipNormalsOn", PyvtkPolyDataNormals_FlipNormalsOn, 1,
   (char*)"V.FlipNormalsOn()\nC++: void FlipNormalsOn()\n\nTurn on/off the global flipping of normal orientation. Flipping\nreverves the meaning of front and back for Frontface and Backface\nculling in vtkProperty.  Flipping modifies both the normal\ndirection and the order of a cell's points.\n"},
  {(char*)"FlipNormalsOff", PyvtkPolyDataNormals_FlipNormalsOff, 1,
   (char*)"V.FlipNormalsOff()\nC++: void FlipNormalsOff()\n\nTurn on/off the global flipping of normal orientation. Flipping\nreverves the meaning of front and back for Frontface and Backface\nculling in vtkProperty.  Flipping modifies both the normal\ndirection and the order of a cell's points.\n"},
  {(char*)"SetNonManifoldTraversal", PyvtkPolyDataNormals_SetNonManifoldTraversal, 1,
   (char*)"V.SetNonManifoldTraversal(int)\nC++: void SetNonManifoldTraversal(int a)\n\nTurn on/off traversal across non-manifold edges. This will\nprevent problems where the consistency of polygonal ordering is\ncorrupted due to topological loops.\n"},
  {(char*)"GetNonManifoldTraversal", PyvtkPolyDataNormals_GetNonManifoldTraversal, 1,
   (char*)"V.GetNonManifoldTraversal() -> int\nC++: int GetNonManifoldTraversal()\n\nTurn on/off traversal across non-manifold edges. This will\nprevent problems where the consistency of polygonal ordering is\ncorrupted due to topological loops.\n"},
  {(char*)"NonManifoldTraversalOn", PyvtkPolyDataNormals_NonManifoldTraversalOn, 1,
   (char*)"V.NonManifoldTraversalOn()\nC++: void NonManifoldTraversalOn()\n\nTurn on/off traversal across non-manifold edges. This will\nprevent problems where the consistency of polygonal ordering is\ncorrupted due to topological loops.\n"},
  {(char*)"NonManifoldTraversalOff", PyvtkPolyDataNormals_NonManifoldTraversalOff, 1,
   (char*)"V.NonManifoldTraversalOff()\nC++: void NonManifoldTraversalOff()\n\nTurn on/off traversal across non-manifold edges. This will\nprevent problems where the consistency of polygonal ordering is\ncorrupted due to topological loops.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyDataNormals_StaticNew()
{
  return vtkPolyDataNormals::New();
}

PyObject *PyVTKClass_vtkPolyDataNormalsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyDataNormals_StaticNew,
    PyvtkPolyDataNormals_Methods,
    "vtkPolyDataNormals", modulename,
    NULL, NULL,
    PyvtkPolyDataNormals_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPolyDataNormals_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataNormals - compute normals for polygonal mesh\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkPolyDataNormals is a filter that computes point normals for a\npolygonal mesh. The filter can reorder polygons to insure consistent\norientation across polygon neighbors. Sharp edges can be split and\npoints duplicated with separate normals to give crisp (rendered)\nsurface definition. It is also possible to globally flip the normal\norientation.\n\nThe algorithm works by determining normals for each ",
    "polygon and then\naveraging them at shared points. When sharp edges are present, the\nedges are split and new points generated to prevent blurry edges (due\nto Gouraud shading).\n\nCaveats:\n\nNormals are computed only for polygons and triangle strips. Normals\nare not computed for lines or vertices.\n\nTriangle strips are broken up into triangle polygons. You may want to\nrestrip the triangles.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataNormals(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataNormalsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataNormals", o) != 0)
    {
    Py_DECREF(o);
    }

}

