// python wrapper for vtkMeshQuality
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
#include "vtkMeshQuality.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMeshQuality(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMeshQuality(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMeshQualityNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMeshQualityNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkMeshQuality_Doc();


static PyObject *
PyvtkMeshQuality_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

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
      tempr = op->vtkMeshQuality::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

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
      tempr = op->vtkMeshQuality::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  vtkMeshQuality *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMeshQuality::NewInstance();
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
PyvtkMeshQuality_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMeshQuality *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMeshQuality::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetSaveCellQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveCellQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSaveCellQuality(temp0);
      }
    else
      {
      op->vtkMeshQuality::SetSaveCellQuality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetSaveCellQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveCellQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSaveCellQuality();
      }
    else
      {
      tempr = op->vtkMeshQuality::GetSaveCellQuality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SaveCellQualityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveCellQualityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SaveCellQualityOn();
      }
    else
      {
      op->vtkMeshQuality::SaveCellQualityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SaveCellQualityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveCellQualityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SaveCellQualityOff();
      }
    else
      {
      op->vtkMeshQuality::SaveCellQualityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTriangleQualityMeasure(temp0);
      }
    else
      {
      op->vtkMeshQuality::SetTriangleQualityMeasure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetTriangleQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangleQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTriangleQualityMeasure();
      }
    else
      {
      tempr = op->vtkMeshQuality::GetTriangleQualityMeasure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTriangleQualityMeasureToArea();
      }
    else
      {
      op->vtkMeshQuality::SetTriangleQualityMeasureToArea();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTriangleQualityMeasureToEdgeRatio();
      }
    else
      {
      op->vtkMeshQuality::SetTriangleQualityMeasureToEdgeRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTriangleQualityMeasureToAspectRatio();
      }
    else
      {
      op->vtkMeshQuality::SetTriangleQualityMeasureToAspectRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToRadiusRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToRadiusRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTriangleQualityMeasureToRadiusRatio();
      }
    else
      {
      op->vtkMeshQuality::SetTriangleQualityMeasureToRadiusRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTriangleQualityMeasureToAspectFrobenius();
      }
    else
      {
      op->vtkMeshQuality::SetTriangleQualityMeasureToAspectFrobenius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToMinAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToMinAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTriangleQualityMeasureToMinAngle();
      }
    else
      {
      op->vtkMeshQuality::SetTriangleQualityMeasureToMinAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToMaxAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToMaxAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTriangleQualityMeasureToMaxAngle();
      }
    else
      {
      op->vtkMeshQuality::SetTriangleQualityMeasureToMaxAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToCondition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToCondition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTriangleQualityMeasureToCondition();
      }
    else
      {
      op->vtkMeshQuality::SetTriangleQualityMeasureToCondition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTriangleQualityMeasureToScaledJacobian();
      }
    else
      {
      op->vtkMeshQuality::SetTriangleQualityMeasureToScaledJacobian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToRelativeSizeSquared(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToRelativeSizeSquared");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTriangleQualityMeasureToRelativeSizeSquared();
      }
    else
      {
      op->vtkMeshQuality::SetTriangleQualityMeasureToRelativeSizeSquared();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTriangleQualityMeasureToShape();
      }
    else
      {
      op->vtkMeshQuality::SetTriangleQualityMeasureToShape();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToShapeAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToShapeAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTriangleQualityMeasureToShapeAndSize();
      }
    else
      {
      op->vtkMeshQuality::SetTriangleQualityMeasureToShapeAndSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToDistortion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToDistortion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTriangleQualityMeasureToDistortion();
      }
    else
      {
      op->vtkMeshQuality::SetTriangleQualityMeasureToDistortion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasure(temp0);
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetQuadQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQuadQualityMeasure();
      }
    else
      {
      tempr = op->vtkMeshQuality::GetQuadQualityMeasure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToEdgeRatio();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToEdgeRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToAspectRatio();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToAspectRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToRadiusRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToRadiusRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToRadiusRatio();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToRadiusRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToMedAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToMedAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToMedAspectFrobenius();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToMedAspectFrobenius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToMaxAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToMaxAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToMaxAspectFrobenius();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToMaxAspectFrobenius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToMaxEdgeRatios(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToMaxEdgeRatios");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToMaxEdgeRatios();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToMaxEdgeRatios();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToSkew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToSkew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToSkew();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToSkew();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToTaper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToTaper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToTaper();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToTaper();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToWarpage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToWarpage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToWarpage();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToWarpage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToArea();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToArea();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToStretch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToStretch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToStretch();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToStretch();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToMinAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToMinAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToMinAngle();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToMinAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToMaxAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToMaxAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToMaxAngle();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToMaxAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToOddy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToOddy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToOddy();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToOddy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToCondition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToCondition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToCondition();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToCondition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToJacobian();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToJacobian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToScaledJacobian();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToScaledJacobian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToShear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToShear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToShear();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToShear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToShape();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToShape();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToRelativeSizeSquared(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToRelativeSizeSquared");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToRelativeSizeSquared();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToRelativeSizeSquared();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToShapeAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToShapeAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToShapeAndSize();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToShapeAndSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToShearAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToShearAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToShearAndSize();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToShearAndSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToDistortion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToDistortion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQuadQualityMeasureToDistortion();
      }
    else
      {
      op->vtkMeshQuality::SetQuadQualityMeasureToDistortion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasure(temp0);
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetTetQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTetQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTetQualityMeasure();
      }
    else
      {
      tempr = op->vtkMeshQuality::GetTetQualityMeasure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasureToEdgeRatio();
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasureToEdgeRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasureToAspectRatio();
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasureToAspectRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToRadiusRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToRadiusRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasureToRadiusRatio();
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasureToRadiusRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasureToAspectFrobenius();
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasureToAspectFrobenius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToMinAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToMinAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasureToMinAngle();
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasureToMinAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToCollapseRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToCollapseRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasureToCollapseRatio();
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasureToCollapseRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToAspectBeta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToAspectBeta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasureToAspectBeta();
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasureToAspectBeta();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToAspectGamma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToAspectGamma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasureToAspectGamma();
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasureToAspectGamma();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasureToVolume();
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasureToVolume();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToCondition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToCondition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasureToCondition();
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasureToCondition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasureToJacobian();
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasureToJacobian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasureToScaledJacobian();
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasureToScaledJacobian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasureToShape();
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasureToShape();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToRelativeSizeSquared(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToRelativeSizeSquared");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasureToRelativeSizeSquared();
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasureToRelativeSizeSquared();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToShapeAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToShapeAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasureToShapeAndSize();
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasureToShapeAndSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToDistortion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToDistortion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTetQualityMeasureToDistortion();
      }
    else
      {
      op->vtkMeshQuality::SetTetQualityMeasureToDistortion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasure(temp0);
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetHexQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHexQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHexQualityMeasure();
      }
    else
      {
      tempr = op->vtkMeshQuality::GetHexQualityMeasure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToEdgeRatio();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToEdgeRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToMedAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToMedAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToMedAspectFrobenius();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToMedAspectFrobenius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToMaxAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToMaxAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToMaxAspectFrobenius();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToMaxAspectFrobenius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToMaxEdgeRatios(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToMaxEdgeRatios");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToMaxEdgeRatios();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToMaxEdgeRatios();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToSkew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToSkew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToSkew();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToSkew();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToTaper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToTaper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToTaper();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToTaper();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToVolume();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToVolume();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToStretch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToStretch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToStretch();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToStretch();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToDiagonal();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToDiagonal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToDimension();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToOddy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToOddy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToOddy();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToOddy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToCondition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToCondition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToCondition();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToCondition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToJacobian();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToJacobian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToScaledJacobian();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToScaledJacobian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToShear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToShear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToShear();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToShear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToShape();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToShape();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToRelativeSizeSquared(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToRelativeSizeSquared");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToRelativeSizeSquared();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToRelativeSizeSquared();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToShapeAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToShapeAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToShapeAndSize();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToShapeAndSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToShearAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToShearAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToShearAndSize();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToShearAndSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToDistortion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToDistortion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetHexQualityMeasureToDistortion();
      }
    else
      {
      op->vtkMeshQuality::SetHexQualityMeasureToDistortion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleArea(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleArea");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TriangleArea(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleEdgeRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleEdgeRatio");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TriangleEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleAspectRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleAspectRatio");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TriangleAspectRatio(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleRadiusRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleRadiusRatio");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TriangleRadiusRatio(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleAspectFrobenius(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleAspectFrobenius");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TriangleAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleMinAngle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleMinAngle");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TriangleMinAngle(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleMaxAngle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleMaxAngle");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TriangleMaxAngle(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleCondition(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleCondition");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TriangleCondition(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleScaledJacobian(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleScaledJacobian");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TriangleScaledJacobian(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleRelativeSizeSquared(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleRelativeSizeSquared");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TriangleRelativeSizeSquared(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleShape(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleShape");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TriangleShape(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleShapeAndSize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleShapeAndSize");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TriangleShapeAndSize(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleDistortion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleDistortion");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TriangleDistortion(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadEdgeRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadEdgeRatio");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadAspectRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadAspectRatio");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadAspectRatio(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadRadiusRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadRadiusRatio");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadRadiusRatio(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadMedAspectFrobenius(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadMedAspectFrobenius");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadMedAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadMaxAspectFrobenius(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadMaxAspectFrobenius");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadMaxAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadMinAngle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadMinAngle");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadMinAngle(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadMaxEdgeRatios(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadMaxEdgeRatios");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadMaxEdgeRatios(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadSkew(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadSkew");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadSkew(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadTaper(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadTaper");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadTaper(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadWarpage(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadWarpage");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadWarpage(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadArea(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadArea");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadArea(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadStretch(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadStretch");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadStretch(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadMaxAngle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadMaxAngle");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadMaxAngle(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadOddy(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadOddy");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadOddy(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadCondition(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadCondition");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadCondition(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadJacobian(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadJacobian");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadJacobian(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadScaledJacobian(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadScaledJacobian");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadScaledJacobian(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadShear(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadShear");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadShear(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadShape(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadShape");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadShape(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadRelativeSizeSquared(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadRelativeSizeSquared");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadRelativeSizeSquared(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadShapeAndSize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadShapeAndSize");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadShapeAndSize(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadShearAndSize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadShearAndSize");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadShearAndSize(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadDistortion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadDistortion");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::QuadDistortion(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetEdgeRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetEdgeRatio");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TetEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetAspectRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetAspectRatio");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TetAspectRatio(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetRadiusRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetRadiusRatio");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TetRadiusRatio(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetAspectFrobenius(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetAspectFrobenius");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TetAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetMinAngle(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetMinAngle");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TetMinAngle(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetCollapseRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetCollapseRatio");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TetCollapseRatio(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetAspectBeta(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetAspectBeta");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TetAspectBeta(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetAspectGamma(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetAspectGamma");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TetAspectGamma(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetVolume(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetVolume");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TetVolume(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetCondition(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetCondition");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TetCondition(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetJacobian(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetJacobian");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TetJacobian(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetScaledJacobian(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetScaledJacobian");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TetScaledJacobian(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetShape(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetShape");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TetShape(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetRelativeSizeSquared(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetRelativeSizeSquared");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TetRelativeSizeSquared(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetShapeandSize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetShapeandSize");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TetShapeandSize(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetDistortion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TetDistortion");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::TetDistortion(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexEdgeRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexEdgeRatio");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexMedAspectFrobenius(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexMedAspectFrobenius");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexMedAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexMaxAspectFrobenius(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexMaxAspectFrobenius");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexMaxAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexMaxEdgeRatio(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexMaxEdgeRatio");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexMaxEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexSkew(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexSkew");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexSkew(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexTaper(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexTaper");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexTaper(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexVolume(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexVolume");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexVolume(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexStretch(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexStretch");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexStretch(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexDiagonal(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexDiagonal");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexDiagonal(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexDimension(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexDimension");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexDimension(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexOddy(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexOddy");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexOddy(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexCondition(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexCondition");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexCondition(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexJacobian(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexJacobian");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexJacobian(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexScaledJacobian(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexScaledJacobian");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexScaledJacobian(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexShear(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexShear");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexShear(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexShape(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexShape");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexShape(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexRelativeSizeSquared(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexRelativeSizeSquared");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexRelativeSizeSquared(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexShapeAndSize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexShapeAndSize");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexShapeAndSize(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexShearAndSize(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexShearAndSize");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexShearAndSize(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexDistortion(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HexDistortion");

  vtkCell *temp0 = NULL;
  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
    {
    tempr = vtkMeshQuality::HexDistortion(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRatio(temp0);
      }
    else
      {
      op->vtkMeshQuality::SetRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRatio();
      }
    else
      {
      tempr = op->vtkMeshQuality::GetRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_RatioOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RatioOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RatioOn();
      }
    else
      {
      op->vtkMeshQuality::RatioOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_RatioOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RatioOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RatioOff();
      }
    else
      {
      op->vtkMeshQuality::RatioOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVolume(temp0);
      }
    else
      {
      op->vtkMeshQuality::SetVolume(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVolume();
      }
    else
      {
      tempr = op->vtkMeshQuality::GetVolume();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_VolumeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VolumeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VolumeOn();
      }
    else
      {
      op->vtkMeshQuality::VolumeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_VolumeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VolumeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->VolumeOff();
      }
    else
      {
      op->vtkMeshQuality::VolumeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetCompatibilityMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompatibilityMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCompatibilityMode(temp0);
      }
    else
      {
      op->vtkMeshQuality::SetCompatibilityMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetCompatibilityMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompatibilityMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompatibilityMode();
      }
    else
      {
      tempr = op->vtkMeshQuality::GetCompatibilityMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_CompatibilityModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompatibilityModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CompatibilityModeOn();
      }
    else
      {
      op->vtkMeshQuality::CompatibilityModeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMeshQuality_CompatibilityModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompatibilityModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CompatibilityModeOff();
      }
    else
      {
      op->vtkMeshQuality::CompatibilityModeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMeshQuality_Methods[] = {
  {(char*)"GetClassName", PyvtkMeshQuality_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMeshQuality_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMeshQuality_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMeshQuality\nC++: vtkMeshQuality *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMeshQuality_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMeshQuality\nC++: vtkMeshQuality *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSaveCellQuality", PyvtkMeshQuality_SetSaveCellQuality, 1,
   (char*)"V.SetSaveCellQuality(int)\nC++: void SetSaveCellQuality(int a)\n\nThis variable controls whether or not cell quality is stored as\ncell data in the resulting mesh or discarded (leaving only the\naggregate quality average of the entire mesh, recorded in the\nFieldData).\n"},
  {(char*)"GetSaveCellQuality", PyvtkMeshQuality_GetSaveCellQuality, 1,
   (char*)"V.GetSaveCellQuality() -> int\nC++: int GetSaveCellQuality()\n\nThis variable controls whether or not cell quality is stored as\ncell data in the resulting mesh or discarded (leaving only the\naggregate quality average of the entire mesh, recorded in the\nFieldData).\n"},
  {(char*)"SaveCellQualityOn", PyvtkMeshQuality_SaveCellQualityOn, 1,
   (char*)"V.SaveCellQualityOn()\nC++: void SaveCellQualityOn()\n\nThis variable controls whether or not cell quality is stored as\ncell data in the resulting mesh or discarded (leaving only the\naggregate quality average of the entire mesh, recorded in the\nFieldData).\n"},
  {(char*)"SaveCellQualityOff", PyvtkMeshQuality_SaveCellQualityOff, 1,
   (char*)"V.SaveCellQualityOff()\nC++: void SaveCellQualityOff()\n\nThis variable controls whether or not cell quality is stored as\ncell data in the resulting mesh or discarded (leaving only the\naggregate quality average of the entire mesh, recorded in the\nFieldData).\n"},
  {(char*)"SetTriangleQualityMeasure", PyvtkMeshQuality_SetTriangleQualityMeasure, 1,
   (char*)"V.SetTriangleQualityMeasure(int)\nC++: void SetTriangleQualityMeasure(int a)\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {(char*)"GetTriangleQualityMeasure", PyvtkMeshQuality_GetTriangleQualityMeasure, 1,
   (char*)"V.GetTriangleQualityMeasure() -> int\nC++: int GetTriangleQualityMeasure()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTriangleQualityMeasureToArea", PyvtkMeshQuality_SetTriangleQualityMeasureToArea, 1,
   (char*)"V.SetTriangleQualityMeasureToArea()\nC++: void SetTriangleQualityMeasureToArea()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTriangleQualityMeasureToEdgeRatio", PyvtkMeshQuality_SetTriangleQualityMeasureToEdgeRatio, 1,
   (char*)"V.SetTriangleQualityMeasureToEdgeRatio()\nC++: void SetTriangleQualityMeasureToEdgeRatio()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTriangleQualityMeasureToAspectRatio", PyvtkMeshQuality_SetTriangleQualityMeasureToAspectRatio, 1,
   (char*)"V.SetTriangleQualityMeasureToAspectRatio()\nC++: void SetTriangleQualityMeasureToAspectRatio()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTriangleQualityMeasureToRadiusRatio", PyvtkMeshQuality_SetTriangleQualityMeasureToRadiusRatio, 1,
   (char*)"V.SetTriangleQualityMeasureToRadiusRatio()\nC++: void SetTriangleQualityMeasureToRadiusRatio()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTriangleQualityMeasureToAspectFrobenius", PyvtkMeshQuality_SetTriangleQualityMeasureToAspectFrobenius, 1,
   (char*)"V.SetTriangleQualityMeasureToAspectFrobenius()\nC++: void SetTriangleQualityMeasureToAspectFrobenius()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTriangleQualityMeasureToMinAngle", PyvtkMeshQuality_SetTriangleQualityMeasureToMinAngle, 1,
   (char*)"V.SetTriangleQualityMeasureToMinAngle()\nC++: void SetTriangleQualityMeasureToMinAngle()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTriangleQualityMeasureToMaxAngle", PyvtkMeshQuality_SetTriangleQualityMeasureToMaxAngle, 1,
   (char*)"V.SetTriangleQualityMeasureToMaxAngle()\nC++: void SetTriangleQualityMeasureToMaxAngle()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTriangleQualityMeasureToCondition", PyvtkMeshQuality_SetTriangleQualityMeasureToCondition, 1,
   (char*)"V.SetTriangleQualityMeasureToCondition()\nC++: void SetTriangleQualityMeasureToCondition()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTriangleQualityMeasureToScaledJacobian", PyvtkMeshQuality_SetTriangleQualityMeasureToScaledJacobian, 1,
   (char*)"V.SetTriangleQualityMeasureToScaledJacobian()\nC++: void SetTriangleQualityMeasureToScaledJacobian()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTriangleQualityMeasureToRelativeSizeSquared", PyvtkMeshQuality_SetTriangleQualityMeasureToRelativeSizeSquared, 1,
   (char*)"V.SetTriangleQualityMeasureToRelativeSizeSquared()\nC++: void SetTriangleQualityMeasureToRelativeSizeSquared()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTriangleQualityMeasureToShape", PyvtkMeshQuality_SetTriangleQualityMeasureToShape, 1,
   (char*)"V.SetTriangleQualityMeasureToShape()\nC++: void SetTriangleQualityMeasureToShape()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTriangleQualityMeasureToShapeAndSize", PyvtkMeshQuality_SetTriangleQualityMeasureToShapeAndSize, 1,
   (char*)"V.SetTriangleQualityMeasureToShapeAndSize()\nC++: void SetTriangleQualityMeasureToShapeAndSize()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTriangleQualityMeasureToDistortion", PyvtkMeshQuality_SetTriangleQualityMeasureToDistortion, 1,
   (char*)"V.SetTriangleQualityMeasureToDistortion()\nC++: void SetTriangleQualityMeasureToDistortion()\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is VTK_QUALITY_RADIUS_RATIO and valid\nvalues also include VTK_QUALITY_ASPECT_RATIO,\nVTK_QUALITY_ASPECT_FROBENIUS, and VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MIN_ANGLE, VTK_QUALITY_MAX_ANGLE,\nVTK_QUALITY_CONDITION, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE,\nVTK_QUALITY_SHAPE_AND_SIZE, and VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetQuadQualityMeasure", PyvtkMeshQuality_SetQuadQualityMeasure, 1,
   (char*)"V.SetQuadQualityMeasure(int)\nC++: void SetQuadQualityMeasure(int a)\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"GetQuadQualityMeasure", PyvtkMeshQuality_GetQuadQualityMeasure, 1,
   (char*)"V.GetQuadQualityMeasure() -> int\nC++: int GetQuadQualityMeasure()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToEdgeRatio", PyvtkMeshQuality_SetQuadQualityMeasureToEdgeRatio, 1,
   (char*)"V.SetQuadQualityMeasureToEdgeRatio()\nC++: void SetQuadQualityMeasureToEdgeRatio()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToAspectRatio", PyvtkMeshQuality_SetQuadQualityMeasureToAspectRatio, 1,
   (char*)"V.SetQuadQualityMeasureToAspectRatio()\nC++: void SetQuadQualityMeasureToAspectRatio()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToRadiusRatio", PyvtkMeshQuality_SetQuadQualityMeasureToRadiusRatio, 1,
   (char*)"V.SetQuadQualityMeasureToRadiusRatio()\nC++: void SetQuadQualityMeasureToRadiusRatio()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToMedAspectFrobenius", PyvtkMeshQuality_SetQuadQualityMeasureToMedAspectFrobenius, 1,
   (char*)"V.SetQuadQualityMeasureToMedAspectFrobenius()\nC++: void SetQuadQualityMeasureToMedAspectFrobenius()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToMaxAspectFrobenius", PyvtkMeshQuality_SetQuadQualityMeasureToMaxAspectFrobenius, 1,
   (char*)"V.SetQuadQualityMeasureToMaxAspectFrobenius()\nC++: void SetQuadQualityMeasureToMaxAspectFrobenius()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToMaxEdgeRatios", PyvtkMeshQuality_SetQuadQualityMeasureToMaxEdgeRatios, 1,
   (char*)"V.SetQuadQualityMeasureToMaxEdgeRatios()\nC++: void SetQuadQualityMeasureToMaxEdgeRatios()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToSkew", PyvtkMeshQuality_SetQuadQualityMeasureToSkew, 1,
   (char*)"V.SetQuadQualityMeasureToSkew()\nC++: void SetQuadQualityMeasureToSkew()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToTaper", PyvtkMeshQuality_SetQuadQualityMeasureToTaper, 1,
   (char*)"V.SetQuadQualityMeasureToTaper()\nC++: void SetQuadQualityMeasureToTaper()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToWarpage", PyvtkMeshQuality_SetQuadQualityMeasureToWarpage, 1,
   (char*)"V.SetQuadQualityMeasureToWarpage()\nC++: void SetQuadQualityMeasureToWarpage()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToArea", PyvtkMeshQuality_SetQuadQualityMeasureToArea, 1,
   (char*)"V.SetQuadQualityMeasureToArea()\nC++: void SetQuadQualityMeasureToArea()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToStretch", PyvtkMeshQuality_SetQuadQualityMeasureToStretch, 1,
   (char*)"V.SetQuadQualityMeasureToStretch()\nC++: void SetQuadQualityMeasureToStretch()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToMinAngle", PyvtkMeshQuality_SetQuadQualityMeasureToMinAngle, 1,
   (char*)"V.SetQuadQualityMeasureToMinAngle()\nC++: void SetQuadQualityMeasureToMinAngle()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToMaxAngle", PyvtkMeshQuality_SetQuadQualityMeasureToMaxAngle, 1,
   (char*)"V.SetQuadQualityMeasureToMaxAngle()\nC++: void SetQuadQualityMeasureToMaxAngle()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToOddy", PyvtkMeshQuality_SetQuadQualityMeasureToOddy, 1,
   (char*)"V.SetQuadQualityMeasureToOddy()\nC++: void SetQuadQualityMeasureToOddy()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToCondition", PyvtkMeshQuality_SetQuadQualityMeasureToCondition, 1,
   (char*)"V.SetQuadQualityMeasureToCondition()\nC++: void SetQuadQualityMeasureToCondition()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToJacobian", PyvtkMeshQuality_SetQuadQualityMeasureToJacobian, 1,
   (char*)"V.SetQuadQualityMeasureToJacobian()\nC++: void SetQuadQualityMeasureToJacobian()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToScaledJacobian", PyvtkMeshQuality_SetQuadQualityMeasureToScaledJacobian, 1,
   (char*)"V.SetQuadQualityMeasureToScaledJacobian()\nC++: void SetQuadQualityMeasureToScaledJacobian()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToShear", PyvtkMeshQuality_SetQuadQualityMeasureToShear, 1,
   (char*)"V.SetQuadQualityMeasureToShear()\nC++: void SetQuadQualityMeasureToShear()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToShape", PyvtkMeshQuality_SetQuadQualityMeasureToShape, 1,
   (char*)"V.SetQuadQualityMeasureToShape()\nC++: void SetQuadQualityMeasureToShape()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToRelativeSizeSquared", PyvtkMeshQuality_SetQuadQualityMeasureToRelativeSizeSquared, 1,
   (char*)"V.SetQuadQualityMeasureToRelativeSizeSquared()\nC++: void SetQuadQualityMeasureToRelativeSizeSquared()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToShapeAndSize", PyvtkMeshQuality_SetQuadQualityMeasureToShapeAndSize, 1,
   (char*)"V.SetQuadQualityMeasureToShapeAndSize()\nC++: void SetQuadQualityMeasureToShapeAndSize()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToShearAndSize", PyvtkMeshQuality_SetQuadQualityMeasureToShearAndSize, 1,
   (char*)"V.SetQuadQualityMeasureToShearAndSize()\nC++: void SetQuadQualityMeasureToShearAndSize()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetQuadQualityMeasureToDistortion", PyvtkMeshQuality_SetQuadQualityMeasureToDistortion, 1,
   (char*)"V.SetQuadQualityMeasureToDistortion()\nC++: void SetQuadQualityMeasureToDistortion()\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid\nvalues also include VTK_QUALITY_RADIUS_RATIO,\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_MAX_EDGE_RATIO\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_WARPAGE,\nVTK_QUALITY_AREA, VTK_QUALITY_STRETCH, VTK_QUALITY_MIN_ANGLE,\nVTK_QUALITY_MAX_ANGLE, VTK_QUALITY_ODDY, VTK_QUALITY_CONDITION,\nVTK_QUALITY_JACOBIAN, VTK_QUALITY_SCALED_JACOBIAN,\nVTK_QUALITY_SHEAR, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nVTK_QUALITY_SHEAR_AND_SIZE, and VTK_QUALITY_DISTORTION.\n\nScope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are\nintended for planar quadrilaterals only; use at your own risk if\nyou really want to assess non-planar quadrilateral quality with\nthose.\n"},
  {(char*)"SetTetQualityMeasure", PyvtkMeshQuality_SetTetQualityMeasure, 1,
   (char*)"V.SetTetQualityMeasure(int)\nC++: void SetTetQualityMeasure(int a)\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"GetTetQualityMeasure", PyvtkMeshQuality_GetTetQualityMeasure, 1,
   (char*)"V.GetTetQualityMeasure() -> int\nC++: int GetTetQualityMeasure()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTetQualityMeasureToEdgeRatio", PyvtkMeshQuality_SetTetQualityMeasureToEdgeRatio, 1,
   (char*)"V.SetTetQualityMeasureToEdgeRatio()\nC++: void SetTetQualityMeasureToEdgeRatio()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTetQualityMeasureToAspectRatio", PyvtkMeshQuality_SetTetQualityMeasureToAspectRatio, 1,
   (char*)"V.SetTetQualityMeasureToAspectRatio()\nC++: void SetTetQualityMeasureToAspectRatio()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTetQualityMeasureToRadiusRatio", PyvtkMeshQuality_SetTetQualityMeasureToRadiusRatio, 1,
   (char*)"V.SetTetQualityMeasureToRadiusRatio()\nC++: void SetTetQualityMeasureToRadiusRatio()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTetQualityMeasureToAspectFrobenius", PyvtkMeshQuality_SetTetQualityMeasureToAspectFrobenius, 1,
   (char*)"V.SetTetQualityMeasureToAspectFrobenius()\nC++: void SetTetQualityMeasureToAspectFrobenius()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTetQualityMeasureToMinAngle", PyvtkMeshQuality_SetTetQualityMeasureToMinAngle, 1,
   (char*)"V.SetTetQualityMeasureToMinAngle()\nC++: void SetTetQualityMeasureToMinAngle()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTetQualityMeasureToCollapseRatio", PyvtkMeshQuality_SetTetQualityMeasureToCollapseRatio, 1,
   (char*)"V.SetTetQualityMeasureToCollapseRatio()\nC++: void SetTetQualityMeasureToCollapseRatio()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTetQualityMeasureToAspectBeta", PyvtkMeshQuality_SetTetQualityMeasureToAspectBeta, 1,
   (char*)"V.SetTetQualityMeasureToAspectBeta()\nC++: void SetTetQualityMeasureToAspectBeta()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTetQualityMeasureToAspectGamma", PyvtkMeshQuality_SetTetQualityMeasureToAspectGamma, 1,
   (char*)"V.SetTetQualityMeasureToAspectGamma()\nC++: void SetTetQualityMeasureToAspectGamma()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTetQualityMeasureToVolume", PyvtkMeshQuality_SetTetQualityMeasureToVolume, 1,
   (char*)"V.SetTetQualityMeasureToVolume()\nC++: void SetTetQualityMeasureToVolume()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTetQualityMeasureToCondition", PyvtkMeshQuality_SetTetQualityMeasureToCondition, 1,
   (char*)"V.SetTetQualityMeasureToCondition()\nC++: void SetTetQualityMeasureToCondition()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTetQualityMeasureToJacobian", PyvtkMeshQuality_SetTetQualityMeasureToJacobian, 1,
   (char*)"V.SetTetQualityMeasureToJacobian()\nC++: void SetTetQualityMeasureToJacobian()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTetQualityMeasureToScaledJacobian", PyvtkMeshQuality_SetTetQualityMeasureToScaledJacobian, 1,
   (char*)"V.SetTetQualityMeasureToScaledJacobian()\nC++: void SetTetQualityMeasureToScaledJacobian()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTetQualityMeasureToShape", PyvtkMeshQuality_SetTetQualityMeasureToShape, 1,
   (char*)"V.SetTetQualityMeasureToShape()\nC++: void SetTetQualityMeasureToShape()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTetQualityMeasureToRelativeSizeSquared", PyvtkMeshQuality_SetTetQualityMeasureToRelativeSizeSquared, 1,
   (char*)"V.SetTetQualityMeasureToRelativeSizeSquared()\nC++: void SetTetQualityMeasureToRelativeSizeSquared()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTetQualityMeasureToShapeAndSize", PyvtkMeshQuality_SetTetQualityMeasureToShapeAndSize, 1,
   (char*)"V.SetTetQualityMeasureToShapeAndSize()\nC++: void SetTetQualityMeasureToShapeAndSize()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetTetQualityMeasureToDistortion", PyvtkMeshQuality_SetTetQualityMeasureToDistortion, 1,
   (char*)"V.SetTetQualityMeasureToDistortion()\nC++: void SetTetQualityMeasureToDistortion()\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is VTK_QUALITY_RADIUS_RATIO (identical to\nVerdict's aspect ratio beta) and valid values also include\nVTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_ASPECT_FROBENIUS,\nVTK_QUALITY_EDGE_RATIO, VTK_QUALITY_COLLAPSE_RATIO,\nVTK_QUALITY_ASPECT_BETA, VTK_QUALITY_ASPECT_GAMMA,\nVTK_QUALITY_VOLUME, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHAPE,\nVTK_QUALITY_RELATIVE_SIZE_SQUARED, VTK_QUALITY_SHAPE_AND_SIZE,\nand VTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasure", PyvtkMeshQuality_SetHexQualityMeasure, 1,
   (char*)"V.SetHexQualityMeasure(int)\nC++: void SetHexQualityMeasure(int a)\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"GetHexQualityMeasure", PyvtkMeshQuality_GetHexQualityMeasure, 1,
   (char*)"V.GetHexQualityMeasure() -> int\nC++: int GetHexQualityMeasure()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToEdgeRatio", PyvtkMeshQuality_SetHexQualityMeasureToEdgeRatio, 1,
   (char*)"V.SetHexQualityMeasureToEdgeRatio()\nC++: void SetHexQualityMeasureToEdgeRatio()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToMedAspectFrobenius", PyvtkMeshQuality_SetHexQualityMeasureToMedAspectFrobenius, 1,
   (char*)"V.SetHexQualityMeasureToMedAspectFrobenius()\nC++: void SetHexQualityMeasureToMedAspectFrobenius()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToMaxAspectFrobenius", PyvtkMeshQuality_SetHexQualityMeasureToMaxAspectFrobenius, 1,
   (char*)"V.SetHexQualityMeasureToMaxAspectFrobenius()\nC++: void SetHexQualityMeasureToMaxAspectFrobenius()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToMaxEdgeRatios", PyvtkMeshQuality_SetHexQualityMeasureToMaxEdgeRatios, 1,
   (char*)"V.SetHexQualityMeasureToMaxEdgeRatios()\nC++: void SetHexQualityMeasureToMaxEdgeRatios()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToSkew", PyvtkMeshQuality_SetHexQualityMeasureToSkew, 1,
   (char*)"V.SetHexQualityMeasureToSkew()\nC++: void SetHexQualityMeasureToSkew()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToTaper", PyvtkMeshQuality_SetHexQualityMeasureToTaper, 1,
   (char*)"V.SetHexQualityMeasureToTaper()\nC++: void SetHexQualityMeasureToTaper()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToVolume", PyvtkMeshQuality_SetHexQualityMeasureToVolume, 1,
   (char*)"V.SetHexQualityMeasureToVolume()\nC++: void SetHexQualityMeasureToVolume()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToStretch", PyvtkMeshQuality_SetHexQualityMeasureToStretch, 1,
   (char*)"V.SetHexQualityMeasureToStretch()\nC++: void SetHexQualityMeasureToStretch()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToDiagonal", PyvtkMeshQuality_SetHexQualityMeasureToDiagonal, 1,
   (char*)"V.SetHexQualityMeasureToDiagonal()\nC++: void SetHexQualityMeasureToDiagonal()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToDimension", PyvtkMeshQuality_SetHexQualityMeasureToDimension, 1,
   (char*)"V.SetHexQualityMeasureToDimension()\nC++: void SetHexQualityMeasureToDimension()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToOddy", PyvtkMeshQuality_SetHexQualityMeasureToOddy, 1,
   (char*)"V.SetHexQualityMeasureToOddy()\nC++: void SetHexQualityMeasureToOddy()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToCondition", PyvtkMeshQuality_SetHexQualityMeasureToCondition, 1,
   (char*)"V.SetHexQualityMeasureToCondition()\nC++: void SetHexQualityMeasureToCondition()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToJacobian", PyvtkMeshQuality_SetHexQualityMeasureToJacobian, 1,
   (char*)"V.SetHexQualityMeasureToJacobian()\nC++: void SetHexQualityMeasureToJacobian()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToScaledJacobian", PyvtkMeshQuality_SetHexQualityMeasureToScaledJacobian, 1,
   (char*)"V.SetHexQualityMeasureToScaledJacobian()\nC++: void SetHexQualityMeasureToScaledJacobian()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToShear", PyvtkMeshQuality_SetHexQualityMeasureToShear, 1,
   (char*)"V.SetHexQualityMeasureToShear()\nC++: void SetHexQualityMeasureToShear()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToShape", PyvtkMeshQuality_SetHexQualityMeasureToShape, 1,
   (char*)"V.SetHexQualityMeasureToShape()\nC++: void SetHexQualityMeasureToShape()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToRelativeSizeSquared", PyvtkMeshQuality_SetHexQualityMeasureToRelativeSizeSquared, 1,
   (char*)"V.SetHexQualityMeasureToRelativeSizeSquared()\nC++: void SetHexQualityMeasureToRelativeSizeSquared()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToShapeAndSize", PyvtkMeshQuality_SetHexQualityMeasureToShapeAndSize, 1,
   (char*)"V.SetHexQualityMeasureToShapeAndSize()\nC++: void SetHexQualityMeasureToShapeAndSize()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToShearAndSize", PyvtkMeshQuality_SetHexQualityMeasureToShearAndSize, 1,
   (char*)"V.SetHexQualityMeasureToShearAndSize()\nC++: void SetHexQualityMeasureToShearAndSize()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"SetHexQualityMeasureToDistortion", PyvtkMeshQuality_SetHexQualityMeasureToDistortion, 1,
   (char*)"V.SetHexQualityMeasureToDistortion()\nC++: void SetHexQualityMeasureToDistortion()\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is VTK_QUALITY_MAX_ASPECT_FROBENIUS and\nvalid values also include VTK_QUALITY_EDGE_RATIO,\nVTK_QUALITY_MAX_ASPECT_FROBENIUS, VTK_QUALITY_MAX_EDGE_RATIO,\nVTK_QUALITY_SKEW, VTK_QUALITY_TAPER, VTK_QUALITY_VOLUME,\nVTK_QUALITY_STRETCH, VTK_QUALITY_DIAGONAL, VTK_QUALITY_DIMENSION,\nVTK_QUALITY_ODDY, VTK_QUALITY_CONDITION, VTK_QUALITY_JACOBIAN,\nVTK_QUALITY_SCALED_JACOBIAN, VTK_QUALITY_SHEAR,\nVTK_QUALITY_SHAPE, VTK_QUALITY_RELATIVE_SIZE_SQUARED,\nVTK_QUALITY_SHAPE_AND_SIZE, VTK_QUALITY_SHEAR_AND_SIZE, and\nVTK_QUALITY_DISTORTION.\n"},
  {(char*)"TriangleArea", PyvtkMeshQuality_TriangleArea, 1,
   (char*)"V.TriangleArea(vtkCell) -> float\nC++: static double TriangleArea(vtkCell *cell)\n\nThis is a static function used to calculate the area of a\ntriangle. It assumes that you pass the correct type of cell -- no\ntype checking is performed because this method is called from the\ninner loop of the Execute() member function.\n"},
  {(char*)"TriangleEdgeRatio", PyvtkMeshQuality_TriangleEdgeRatio, 1,
   (char*)"V.TriangleEdgeRatio(vtkCell) -> float\nC++: static double TriangleEdgeRatio(vtkCell *cell)\n\nThis is a static function used to calculate the edge ratio of a\ntriangle. It assumes that you pass the correct type of cell -- no\ntype checking is performed because this method is called from the\ninner loop of the Execute() member function. The edge ratio of a\ntriangle $t $ is:$\\frac{|t|_\\infty}{|t|_0} $, where $|t|_\\infty $\nand $|t|_0 $ respectively denote the greatest and the smallest\nedge lengths of $t $.\n"},
  {(char*)"TriangleAspectRatio", PyvtkMeshQuality_TriangleAspectRatio, 1,
   (char*)"V.TriangleAspectRatio(vtkCell) -> float\nC++: static double TriangleAspectRatio(vtkCell *cell)\n\nThis is a static function used to calculate the aspect ratio of a\ntriangle. It assumes that you pass the correct type of cell -- no\ntype checking is performed because this method is called from the\ninner loop of the Execute() member function. The aspect ratio of\na triangle $t $ is:$\\frac{|t|_\\infty}{2\\sqrt{3}r} $, where\n$|t|_\\infty $ and $r $ respectively denote the greatest edge\nlength and the inradius of $t $.\n"},
  {(char*)"TriangleRadiusRatio", PyvtkMeshQuality_TriangleRadiusRatio, 1,
   (char*)"V.TriangleRadiusRatio(vtkCell) -> float\nC++: static double TriangleRadiusRatio(vtkCell *cell)\n\nThis is a static function used to calculate the radius ratio of a\ntriangle. It assumes that you pass the correct type of cell -- no\ntype checking is performed because this method is called from the\ninner loop of the Execute() member function. The radius ratio of\na triangle $t $ is:$\\frac{R}{2r} $, where $R $ and $r $\nrespectively denote the circumradius and the inradius of $t $.\n"},
  {(char*)"TriangleAspectFrobenius", PyvtkMeshQuality_TriangleAspectFrobenius, 1,
   (char*)"V.TriangleAspectFrobenius(vtkCell) -> float\nC++: static double TriangleAspectFrobenius(vtkCell *cell)\n\nThis is a static function used to calculate the Frobenius\ncondition number of the transformation matrix from an equilateral\ntriangle to a triangle. It assumes that you pass the correct type\nof cell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function. The\nFrobenius aspect of a triangle $t $, when the reference element\nis equilateral, is:$\\frac{|t|^2_2}{2\\sqrt{3}{\\cal A}} $, where\n$|t|^2_2 $ and $\\cal A $ respectively denote the sum of the\nsquared edge lengths and the area of $t $.\n"},
  {(char*)"TriangleMinAngle", PyvtkMeshQuality_TriangleMinAngle, 1,
   (char*)"V.TriangleMinAngle(vtkCell) -> float\nC++: static double TriangleMinAngle(vtkCell *cell)\n\nThis is a static function used to calculate the minimal\n(nonoriented) angle of a triangle, expressed in degrees. It\nassumes that you pass the correct type of cell -- no type\nchecking is performed because this method is called from the\ninner loop of the Execute() member function.\n"},
  {(char*)"TriangleMaxAngle", PyvtkMeshQuality_TriangleMaxAngle, 1,
   (char*)"V.TriangleMaxAngle(vtkCell) -> float\nC++: static double TriangleMaxAngle(vtkCell *cell)\n\nThis is a static function used to calculate the maximal\n(nonoriented) angle of a triangle, expressed in degrees. It\nassumes that you pass the correct type of cell -- no type\nchecking is performed because this method is called from the\ninner loop of the Execute() member function.\n"},
  {(char*)"TriangleCondition", PyvtkMeshQuality_TriangleCondition, 1,
   (char*)"V.TriangleCondition(vtkCell) -> float\nC++: static double TriangleCondition(vtkCell *cell)\n\n"},
  {(char*)"TriangleScaledJacobian", PyvtkMeshQuality_TriangleScaledJacobian, 1,
   (char*)"V.TriangleScaledJacobian(vtkCell) -> float\nC++: static double TriangleScaledJacobian(vtkCell *cell)\n\nThis is a static function used to calculate the scaled Jacobian\nof a triangle. It assumes that you pass the correct type of cell\n-- no type checking is performed because this method is called\nfrom the inner loop of the Execute() member function.\n"},
  {(char*)"TriangleRelativeSizeSquared", PyvtkMeshQuality_TriangleRelativeSizeSquared, 1,
   (char*)"V.TriangleRelativeSizeSquared(vtkCell) -> float\nC++: static double TriangleRelativeSizeSquared(vtkCell *cell)\n\nThis is a static function used to calculate the square of the\nrelative size of a triangle. It assumes that you pass the correct\ntype of cell -- no type checking is performed because this method\nis called from the inner loop of the Execute() member function.\n"},
  {(char*)"TriangleShape", PyvtkMeshQuality_TriangleShape, 1,
   (char*)"V.TriangleShape(vtkCell) -> float\nC++: static double TriangleShape(vtkCell *cell)\n\nThis is a static function used to calculate the shape of a\ntriangle. It assumes that you pass the correct type of cell -- no\ntype checking is performed because this method is called from the\ninner loop of the Execute() member function.\n"},
  {(char*)"TriangleShapeAndSize", PyvtkMeshQuality_TriangleShapeAndSize, 1,
   (char*)"V.TriangleShapeAndSize(vtkCell) -> float\nC++: static double TriangleShapeAndSize(vtkCell *cell)\n\nThis is a static function used to calculate the product of shape\nand relative size of a triangle. It assumes that you pass the\ncorrect type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {(char*)"TriangleDistortion", PyvtkMeshQuality_TriangleDistortion, 1,
   (char*)"V.TriangleDistortion(vtkCell) -> float\nC++: static double TriangleDistortion(vtkCell *cell)\n\nThis is a static function used to calculate the distortion of a\ntriangle. It assumes that you pass the correct type of cell -- no\ntype checking is performed because this method is called from the\ninner loop of the Execute() member function.\n"},
  {(char*)"QuadEdgeRatio", PyvtkMeshQuality_QuadEdgeRatio, 1,
   (char*)"V.QuadEdgeRatio(vtkCell) -> float\nC++: static double QuadEdgeRatio(vtkCell *cell)\n\nThis is a static function used to calculate the edge ratio of a\nquadrilateral. It assumes that you pass the correct type of cell\n-- no type checking is performed because this method is called\nfrom the inner loop of the Execute() member function. The edge\nratio of a quadrilateral $q $ is:$\\frac{|q|_\\infty}{|q|_0} $,\nwhere $|q|_\\infty $ and $|q|_0 $ respectively denote the greatest\nand the smallest edge lengths of $q $.\n"},
  {(char*)"QuadAspectRatio", PyvtkMeshQuality_QuadAspectRatio, 1,
   (char*)"V.QuadAspectRatio(vtkCell) -> float\nC++: static double QuadAspectRatio(vtkCell *cell)\n\nThis is a static function used to calculate the aspect ratio of a\nplanar quadrilateral. It assumes that you pass the correct type\nof cell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function. Use\nat your own risk with nonplanar quadrilaterals. The aspect ratio\nof a planar quadrilateral $q $ is:$\\frac{|q|_1|q|_\\infty}{4{\\cal\nA}} $, where $|q|_1 $, $|q|_\\infty $ and ${\\cal A} $ respectively\ndenote the perimeter, the greatest edge length and the area of $q\n$.\n"},
  {(char*)"QuadRadiusRatio", PyvtkMeshQuality_QuadRadiusRatio, 1,
   (char*)"V.QuadRadiusRatio(vtkCell) -> float\nC++: static double QuadRadiusRatio(vtkCell *cell)\n\nThis is a static function used to calculate the radius ratio of a\nplanar quadrilateral. The name is only used by analogy with the\ntriangle radius ratio, because in general a quadrilateral does\nnot have a circumcircle nor an incircle. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction. Use at your own risk with nonplanar quadrilaterals. The\nradius ratio of a planar quadrilateral $q $\nis:$\\frac{|q|_2h_{\\max}}{\\min_i{\\cal A}_i} $, where $|q|_2 $,\n$h_{\\max} $ and $\\min{\\cal A}_i $ respectively denote the sum of\nthe squared edge lengths, the greatest amongst diagonal and edge\nlengths and the smallest area of the 4 triangles extractable from\n$q $.\n"},
  {(char*)"QuadMedAspectFrobenius", PyvtkMeshQuality_QuadMedAspectFrobenius, 1,
   (char*)"V.QuadMedAspectFrobenius(vtkCell) -> float\nC++: static double QuadMedAspectFrobenius(vtkCell *cell)\n\nThis is a static function used to calculate the average Frobenius\naspect of the 4 corner triangles of a planar quadrilateral, when\nthe reference triangle elements are right isosceles at the\nquadrangle vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function. Use\nat your own risk with nonplanar quadrilaterals. The Frobenius\naspect of a triangle $t $, when the reference element is right\nisosceles at vertex $V $, is:$\\frac{f^2+g^2}{4{\\cal A}} $, where\n$f^2+g^2 $ and $\\cal A $ respectively denote the sum of the\nsquared lengths of the edges attached to $V $ and the area of $t\n$.\n"},
  {(char*)"QuadMaxAspectFrobenius", PyvtkMeshQuality_QuadMaxAspectFrobenius, 1,
   (char*)"V.QuadMaxAspectFrobenius(vtkCell) -> float\nC++: static double QuadMaxAspectFrobenius(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 4 corner triangles of a planar quadrilateral, when\nthe reference triangle elements are right isosceles at the\nquadrangle vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function. Use\nat your own risk with nonplanar quadrilaterals. The Frobenius\naspect of a triangle $t $, when the reference element is right\nisosceles at vertex $V $, is:$\\frac{f^2+g^2}{4{\\cal A}} $, where\n$f^2+g^2 $ and $\\cal A $ respectively denote the sum of the\nsquared lengths of the edges attached to $V $ and the area of $t\n$.\n"},
  {(char*)"QuadMinAngle", PyvtkMeshQuality_QuadMinAngle, 1,
   (char*)"V.QuadMinAngle(vtkCell) -> float\nC++: static double QuadMinAngle(vtkCell *cell)\n\nThis is a static function used to calculate the minimal\n(nonoriented) angle of a quadrilateral, expressed in degrees. It\nassumes that you pass the correct type of cell -- no type\nchecking is performed because this method is called from the\ninner loop of the Execute() member function.\n"},
  {(char*)"QuadMaxEdgeRatios", PyvtkMeshQuality_QuadMaxEdgeRatios, 1,
   (char*)"V.QuadMaxEdgeRatios(vtkCell) -> float\nC++: static double QuadMaxEdgeRatios(vtkCell *cell)\n\n"},
  {(char*)"QuadSkew", PyvtkMeshQuality_QuadSkew, 1,
   (char*)"V.QuadSkew(vtkCell) -> float\nC++: static double QuadSkew(vtkCell *cell)\n\n"},
  {(char*)"QuadTaper", PyvtkMeshQuality_QuadTaper, 1,
   (char*)"V.QuadTaper(vtkCell) -> float\nC++: static double QuadTaper(vtkCell *cell)\n\n"},
  {(char*)"QuadWarpage", PyvtkMeshQuality_QuadWarpage, 1,
   (char*)"V.QuadWarpage(vtkCell) -> float\nC++: static double QuadWarpage(vtkCell *cell)\n\n"},
  {(char*)"QuadArea", PyvtkMeshQuality_QuadArea, 1,
   (char*)"V.QuadArea(vtkCell) -> float\nC++: static double QuadArea(vtkCell *cell)\n\n"},
  {(char*)"QuadStretch", PyvtkMeshQuality_QuadStretch, 1,
   (char*)"V.QuadStretch(vtkCell) -> float\nC++: static double QuadStretch(vtkCell *cell)\n\n"},
  {(char*)"QuadMaxAngle", PyvtkMeshQuality_QuadMaxAngle, 1,
   (char*)"V.QuadMaxAngle(vtkCell) -> float\nC++: static double QuadMaxAngle(vtkCell *cell)\n\n"},
  {(char*)"QuadOddy", PyvtkMeshQuality_QuadOddy, 1,
   (char*)"V.QuadOddy(vtkCell) -> float\nC++: static double QuadOddy(vtkCell *cell)\n\n"},
  {(char*)"QuadCondition", PyvtkMeshQuality_QuadCondition, 1,
   (char*)"V.QuadCondition(vtkCell) -> float\nC++: static double QuadCondition(vtkCell *cell)\n\n"},
  {(char*)"QuadJacobian", PyvtkMeshQuality_QuadJacobian, 1,
   (char*)"V.QuadJacobian(vtkCell) -> float\nC++: static double QuadJacobian(vtkCell *cell)\n\n"},
  {(char*)"QuadScaledJacobian", PyvtkMeshQuality_QuadScaledJacobian, 1,
   (char*)"V.QuadScaledJacobian(vtkCell) -> float\nC++: static double QuadScaledJacobian(vtkCell *cell)\n\n"},
  {(char*)"QuadShear", PyvtkMeshQuality_QuadShear, 1,
   (char*)"V.QuadShear(vtkCell) -> float\nC++: static double QuadShear(vtkCell *cell)\n\n"},
  {(char*)"QuadShape", PyvtkMeshQuality_QuadShape, 1,
   (char*)"V.QuadShape(vtkCell) -> float\nC++: static double QuadShape(vtkCell *cell)\n\n"},
  {(char*)"QuadRelativeSizeSquared", PyvtkMeshQuality_QuadRelativeSizeSquared, 1,
   (char*)"V.QuadRelativeSizeSquared(vtkCell) -> float\nC++: static double QuadRelativeSizeSquared(vtkCell *cell)\n\n"},
  {(char*)"QuadShapeAndSize", PyvtkMeshQuality_QuadShapeAndSize, 1,
   (char*)"V.QuadShapeAndSize(vtkCell) -> float\nC++: static double QuadShapeAndSize(vtkCell *cell)\n\n"},
  {(char*)"QuadShearAndSize", PyvtkMeshQuality_QuadShearAndSize, 1,
   (char*)"V.QuadShearAndSize(vtkCell) -> float\nC++: static double QuadShearAndSize(vtkCell *cell)\n\n"},
  {(char*)"QuadDistortion", PyvtkMeshQuality_QuadDistortion, 1,
   (char*)"V.QuadDistortion(vtkCell) -> float\nC++: static double QuadDistortion(vtkCell *cell)\n\n"},
  {(char*)"TetEdgeRatio", PyvtkMeshQuality_TetEdgeRatio, 1,
   (char*)"V.TetEdgeRatio(vtkCell) -> float\nC++: static double TetEdgeRatio(vtkCell *cell)\n\nThis is a static function used to calculate the edge ratio of a\ntetrahedron. It assumes that you pass the correct type of cell --\nno type checking is performed because this method is called from\nthe inner loop of the Execute() member function. The edge ratio\nof a tetrahedron $K $ is:$\\frac{|K|_\\infty}{|K|_0} $, where\n$|K|_\\infty $ and $|K|_0 $ respectively denote the greatest and\nthe smallest edge lengths of $K $.\n"},
  {(char*)"TetAspectRatio", PyvtkMeshQuality_TetAspectRatio, 1,
   (char*)"V.TetAspectRatio(vtkCell) -> float\nC++: static double TetAspectRatio(vtkCell *cell)\n\nThis is a static function used to calculate the aspect ratio of a\ntetrahedron. It assumes that you pass the correct type of cell --\nno type checking is performed because this method is called from\nthe inner loop of the Execute() member function. The aspect ratio\nof a tetrahedron $K $ is:$\\frac{|K|_\\infty}{2\\sqrt{6}r} $, where\n$|K|_\\infty $ and $r $ respectively denote the greatest edge\nlength and the inradius of $K $.\n"},
  {(char*)"TetRadiusRatio", PyvtkMeshQuality_TetRadiusRatio, 1,
   (char*)"V.TetRadiusRatio(vtkCell) -> float\nC++: static double TetRadiusRatio(vtkCell *cell)\n\nThis is a static function used to calculate the radius ratio of a\ntetrahedron. It assumes that you pass the correct type of cell --\nno type checking is performed because this method is called from\nthe inner loop of the Execute() member function. The radius ratio\nof a tetrahedron $K $ is:$\\frac{R}{3r} $, where $R $ and $r $\nrespectively denote the circumradius and the inradius of $K $.\n"},
  {(char*)"TetAspectFrobenius", PyvtkMeshQuality_TetAspectFrobenius, 1,
   (char*)"V.TetAspectFrobenius(vtkCell) -> float\nC++: static double TetAspectFrobenius(vtkCell *cell)\n\nThis is a static function used to calculate the Frobenius\ncondition number of the transformation matrix from a regular\ntetrahedron to a tetrahedron. It assumes that you pass the\ncorrect type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction. The Frobenius aspect of a tetrahedron $K $, when the\nreference element is regular,\nis:$\\frac{\\frac{3}{2}(l_{11}+l_{22}+l_{33}) -\n(l_{12}+l_{13}+l_{23})} {3(\\sqrt{2}\\det{T})^\\frac{2}{3}} $, where\n$T $ and $l_{ij} $ respectively denote the edge matrix of $K $\nand the entries of $L=T^t\\,T $.\n"},
  {(char*)"TetMinAngle", PyvtkMeshQuality_TetMinAngle, 1,
   (char*)"V.TetMinAngle(vtkCell) -> float\nC++: static double TetMinAngle(vtkCell *cell)\n\nThis is a static function used to calculate the minimal\n(nonoriented) dihedral angle of a tetrahedron, expressed in\ndegrees. It assumes that you pass the correct type of cell -- no\ntype checking is performed because this method is called from the\ninner loop of the Execute() member function.\n"},
  {(char*)"TetCollapseRatio", PyvtkMeshQuality_TetCollapseRatio, 1,
   (char*)"V.TetCollapseRatio(vtkCell) -> float\nC++: static double TetCollapseRatio(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {(char*)"TetAspectBeta", PyvtkMeshQuality_TetAspectBeta, 1,
   (char*)"V.TetAspectBeta(vtkCell) -> float\nC++: static double TetAspectBeta(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {(char*)"TetAspectGamma", PyvtkMeshQuality_TetAspectGamma, 1,
   (char*)"V.TetAspectGamma(vtkCell) -> float\nC++: static double TetAspectGamma(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {(char*)"TetVolume", PyvtkMeshQuality_TetVolume, 1,
   (char*)"V.TetVolume(vtkCell) -> float\nC++: static double TetVolume(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {(char*)"TetCondition", PyvtkMeshQuality_TetCondition, 1,
   (char*)"V.TetCondition(vtkCell) -> float\nC++: static double TetCondition(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {(char*)"TetJacobian", PyvtkMeshQuality_TetJacobian, 1,
   (char*)"V.TetJacobian(vtkCell) -> float\nC++: static double TetJacobian(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {(char*)"TetScaledJacobian", PyvtkMeshQuality_TetScaledJacobian, 1,
   (char*)"V.TetScaledJacobian(vtkCell) -> float\nC++: static double TetScaledJacobian(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {(char*)"TetShape", PyvtkMeshQuality_TetShape, 1,
   (char*)"V.TetShape(vtkCell) -> float\nC++: static double TetShape(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {(char*)"TetRelativeSizeSquared", PyvtkMeshQuality_TetRelativeSizeSquared, 1,
   (char*)"V.TetRelativeSizeSquared(vtkCell) -> float\nC++: static double TetRelativeSizeSquared(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {(char*)"TetShapeandSize", PyvtkMeshQuality_TetShapeandSize, 1,
   (char*)"V.TetShapeandSize(vtkCell) -> float\nC++: static double TetShapeandSize(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {(char*)"TetDistortion", PyvtkMeshQuality_TetDistortion, 1,
   (char*)"V.TetDistortion(vtkCell) -> float\nC++: static double TetDistortion(vtkCell *cell)\n\nThis is a static function used to calculate the collapse ratio of\na tetrahedron. The collapse ratio is a dimensionless number\ndefined as the smallest ratio of the height of a vertex above its\nopposing triangle to the longest edge of that opposing triangle\nacross all vertices of the tetrahedron. It assumes that you pass\nthe correct type of cell -- no type checking is performed because\nthis method is called from the inner loop of the Execute() member\nfunction.\n"},
  {(char*)"HexEdgeRatio", PyvtkMeshQuality_HexEdgeRatio, 1,
   (char*)"V.HexEdgeRatio(vtkCell) -> float\nC++: static double HexEdgeRatio(vtkCell *cell)\n\nThis is a static function used to calculate the edge ratio of a\nhexahedron. It assumes that you pass the correct type of cell --\nno type checking is performed because this method is called from\nthe inner loop of the Execute() member function. The edge ratio\nof a hexahedron $H $ is:$\\frac{|H|_\\infty}{|H|_0} $, where\n$|H|_\\infty $ and $|H|_0 $ respectively denote the greatest and\nthe smallest edge lengths of $H $.\n"},
  {(char*)"HexMedAspectFrobenius", PyvtkMeshQuality_HexMedAspectFrobenius, 1,
   (char*)"V.HexMedAspectFrobenius(vtkCell) -> float\nC++: static double HexMedAspectFrobenius(vtkCell *cell)\n\nThis is a static function used to calculate the average Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexMaxAspectFrobenius", PyvtkMeshQuality_HexMaxAspectFrobenius, 1,
   (char*)"V.HexMaxAspectFrobenius(vtkCell) -> float\nC++: static double HexMaxAspectFrobenius(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexMaxEdgeRatio", PyvtkMeshQuality_HexMaxEdgeRatio, 1,
   (char*)"V.HexMaxEdgeRatio(vtkCell) -> float\nC++: static double HexMaxEdgeRatio(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexSkew", PyvtkMeshQuality_HexSkew, 1,
   (char*)"V.HexSkew(vtkCell) -> float\nC++: static double HexSkew(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexTaper", PyvtkMeshQuality_HexTaper, 1,
   (char*)"V.HexTaper(vtkCell) -> float\nC++: static double HexTaper(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexVolume", PyvtkMeshQuality_HexVolume, 1,
   (char*)"V.HexVolume(vtkCell) -> float\nC++: static double HexVolume(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexStretch", PyvtkMeshQuality_HexStretch, 1,
   (char*)"V.HexStretch(vtkCell) -> float\nC++: static double HexStretch(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexDiagonal", PyvtkMeshQuality_HexDiagonal, 1,
   (char*)"V.HexDiagonal(vtkCell) -> float\nC++: static double HexDiagonal(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexDimension", PyvtkMeshQuality_HexDimension, 1,
   (char*)"V.HexDimension(vtkCell) -> float\nC++: static double HexDimension(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexOddy", PyvtkMeshQuality_HexOddy, 1,
   (char*)"V.HexOddy(vtkCell) -> float\nC++: static double HexOddy(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexCondition", PyvtkMeshQuality_HexCondition, 1,
   (char*)"V.HexCondition(vtkCell) -> float\nC++: static double HexCondition(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexJacobian", PyvtkMeshQuality_HexJacobian, 1,
   (char*)"V.HexJacobian(vtkCell) -> float\nC++: static double HexJacobian(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexScaledJacobian", PyvtkMeshQuality_HexScaledJacobian, 1,
   (char*)"V.HexScaledJacobian(vtkCell) -> float\nC++: static double HexScaledJacobian(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexShear", PyvtkMeshQuality_HexShear, 1,
   (char*)"V.HexShear(vtkCell) -> float\nC++: static double HexShear(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexShape", PyvtkMeshQuality_HexShape, 1,
   (char*)"V.HexShape(vtkCell) -> float\nC++: static double HexShape(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexRelativeSizeSquared", PyvtkMeshQuality_HexRelativeSizeSquared, 1,
   (char*)"V.HexRelativeSizeSquared(vtkCell) -> float\nC++: static double HexRelativeSizeSquared(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexShapeAndSize", PyvtkMeshQuality_HexShapeAndSize, 1,
   (char*)"V.HexShapeAndSize(vtkCell) -> float\nC++: static double HexShapeAndSize(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexShearAndSize", PyvtkMeshQuality_HexShearAndSize, 1,
   (char*)"V.HexShearAndSize(vtkCell) -> float\nC++: static double HexShearAndSize(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"HexDistortion", PyvtkMeshQuality_HexDistortion, 1,
   (char*)"V.HexDistortion(vtkCell) -> float\nC++: static double HexDistortion(vtkCell *cell)\n\nThis is a static function used to calculate the maximal Frobenius\naspect of the 8 corner tetrahedra of a hexahedron, when the\nreference tetrahedral elements are right isosceles at the\nhexahedron vertices. It assumes that you pass the correct type of\ncell -- no type checking is performed because this method is\ncalled from the inner loop of the Execute() member function.\n"},
  {(char*)"SetRatio", PyvtkMeshQuality_SetRatio, 1,
   (char*)"V.SetRatio(int)\nC++: virtual void SetRatio(int r)\n\nThese methods are deprecated. Use Get/SetSaveCellQuality()\ninstead.\n\nFormerly, SetRatio could be used to disable computation of the\ntetrahedral radius ratio so that volume alone could be computed.\nNow, cell quality is always computed, but you may decide not to\nstore the result for each cell. This allows average cell quality\nof a mesh to be calculated without requiring per-cell storage.\n"},
  {(char*)"GetRatio", PyvtkMeshQuality_GetRatio, 1,
   (char*)"V.GetRatio() -> int\nC++: int GetRatio()\n\nThese methods are deprecated. Use Get/SetSaveCellQuality()\ninstead.\n\nFormerly, SetRatio could be used to disable computation of the\ntetrahedral radius ratio so that volume alone could be computed.\nNow, cell quality is always computed, but you may decide not to\nstore the result for each cell. This allows average cell quality\nof a mesh to be calculated without requiring per-cell storage.\n"},
  {(char*)"RatioOn", PyvtkMeshQuality_RatioOn, 1,
   (char*)"V.RatioOn()\nC++: void RatioOn()\n\nThese methods are deprecated. Use Get/SetSaveCellQuality()\ninstead.\n\nFormerly, SetRatio could be used to disable computation of the\ntetrahedral radius ratio so that volume alone could be computed.\nNow, cell quality is always computed, but you may decide not to\nstore the result for each cell. This allows average cell quality\nof a mesh to be calculated without requiring per-cell storage.\n"},
  {(char*)"RatioOff", PyvtkMeshQuality_RatioOff, 1,
   (char*)"V.RatioOff()\nC++: void RatioOff()\n\nThese methods are deprecated. Use Get/SetSaveCellQuality()\ninstead.\n\nFormerly, SetRatio could be used to disable computation of the\ntetrahedral radius ratio so that volume alone could be computed.\nNow, cell quality is always computed, but you may decide not to\nstore the result for each cell. This allows average cell quality\nof a mesh to be calculated without requiring per-cell storage.\n"},
  {(char*)"SetVolume", PyvtkMeshQuality_SetVolume, 1,
   (char*)"V.SetVolume(int)\nC++: virtual void SetVolume(int cv)\n\nThese methods are deprecated. The functionality of computing cell\nvolume is being removed until it can be computed for any 3D cell.\n(The previous implementation only worked for tetrahedra.)\n\nFor now, turning on the volume computation will put this filter\ninto \"compatibility mode,\" where tetrahedral cell volume is\nstored in first component of each output tuple and the radius\nratio is stored in the second component. You may also use\nCompatibilityModeOn()/Off() to enter this mode. In this mode,\ncells other than tetrahedra will have report a volume of 0.0 (if\nvolume computation is enabled).\n\nBy default, volume computation is disabled and compatibility mode\nis off, since it does not make a lot of sense for meshes with\nnon-tetrahedral cells.\n"},
  {(char*)"GetVolume", PyvtkMeshQuality_GetVolume, 1,
   (char*)"V.GetVolume() -> int\nC++: int GetVolume()\n\nThese methods are deprecated. The functionality of computing cell\nvolume is being removed until it can be computed for any 3D cell.\n(The previous implementation only worked for tetrahedra.)\n\nFor now, turning on the volume computation will put this filter\ninto \"compatibility mode,\" where tetrahedral cell volume is\nstored in first component of each output tuple and the radius\nratio is stored in the second component. You may also use\nCompatibilityModeOn()/Off() to enter this mode. In this mode,\ncells other than tetrahedra will have report a volume of 0.0 (if\nvolume computation is enabled).\n\nBy default, volume computation is disabled and compatibility mode\nis off, since it does not make a lot of sense for meshes with\nnon-tetrahedral cells.\n"},
  {(char*)"VolumeOn", PyvtkMeshQuality_VolumeOn, 1,
   (char*)"V.VolumeOn()\nC++: void VolumeOn()\n\nThese methods are deprecated. The functionality of computing cell\nvolume is being removed until it can be computed for any 3D cell.\n(The previous implementation only worked for tetrahedra.)\n\nFor now, turning on the volume computation will put this filter\ninto \"compatibility mode,\" where tetrahedral cell volume is\nstored in first component of each output tuple and the radius\nratio is stored in the second component. You may also use\nCompatibilityModeOn()/Off() to enter this mode. In this mode,\ncells other than tetrahedra will have report a volume of 0.0 (if\nvolume computation is enabled).\n\nBy default, volume computation is disabled and compatibility mode\nis off, since it does not make a lot of sense for meshes with\nnon-tetrahedral cells.\n"},
  {(char*)"VolumeOff", PyvtkMeshQuality_VolumeOff, 1,
   (char*)"V.VolumeOff()\nC++: void VolumeOff()\n\nThese methods are deprecated. The functionality of computing cell\nvolume is being removed until it can be computed for any 3D cell.\n(The previous implementation only worked for tetrahedra.)\n\nFor now, turning on the volume computation will put this filter\ninto \"compatibility mode,\" where tetrahedral cell volume is\nstored in first component of each output tuple and the radius\nratio is stored in the second component. You may also use\nCompatibilityModeOn()/Off() to enter this mode. In this mode,\ncells other than tetrahedra will have report a volume of 0.0 (if\nvolume computation is enabled).\n\nBy default, volume computation is disabled and compatibility mode\nis off, since it does not make a lot of sense for meshes with\nnon-tetrahedral cells.\n"},
  {(char*)"SetCompatibilityMode", PyvtkMeshQuality_SetCompatibilityMode, 1,
   (char*)"V.SetCompatibilityMode(int)\nC++: virtual void SetCompatibilityMode(int cm)\n\nCompatibilityMode governs whether, when both a quality function\nand cell volume are to be stored as cell data, the two values are\nstored in a single array. When compatibility mode is off (the\ndefault), two separate arrays are used -- one labeled \"Quality\"\nand the other labeled \"Volume\". When compatibility mode is on,\nboth values are stored in a single array, with volume as the\nfirst component and quality as the second component.\n\nEnabling CompatibilityMode changes the default tetrahedral\nquality function to VTK_QUALITY_RADIUS_RATIO and turns volume\ncomputation on. (This matches the default behavior of the initial\nimplementation of vtkMeshQuality.) You may change quality\nfunction and volume computation without leaving compatibility\nmode.\n\nDisabling compatibility mode does not affect the current volume\ncomputation or tetrahedral quality function settings.\n\nThe final caveat to CompatibilityMode is that regardless of its\nsetting, the resulting array will be of type vtkDoubleArray\nrather than the original vtkFloatArray. This is a safety function\nto keep the authors from diving off of the Combinatorial Coding\nCliff into Certain Insanity.\n"},
  {(char*)"GetCompatibilityMode", PyvtkMeshQuality_GetCompatibilityMode, 1,
   (char*)"V.GetCompatibilityMode() -> int\nC++: int GetCompatibilityMode()\n\nCompatibilityMode governs whether, when both a quality function\nand cell volume are to be stored as cell data, the two values are\nstored in a single array. When compatibility mode is off (the\ndefault), two separate arrays are used -- one labeled \"Quality\"\nand the other labeled \"Volume\". When compatibility mode is on,\nboth values are stored in a single array, with volume as the\nfirst component and quality as the second component.\n\nEnabling CompatibilityMode changes the default tetrahedral\nquality function to VTK_QUALITY_RADIUS_RATIO and turns volume\ncomputation on. (This matches the default behavior of the initial\nimplementation of vtkMeshQuality.) You may change quality\nfunction and volume computation without leaving compatibility\nmode.\n\nDisabling compatibility mode does not affect the current volume\ncomputation or tetrahedral quality function settings.\n\nThe final caveat to CompatibilityMode is that regardless of its\nsetting, the resulting array will be of type vtkDoubleArray\nrather than the original vtkFloatArray. This is a safety function\nto keep the authors from diving off of the Combinatorial Coding\nCliff into Certain Insanity.\n"},
  {(char*)"CompatibilityModeOn", PyvtkMeshQuality_CompatibilityModeOn, 1,
   (char*)"V.CompatibilityModeOn()\nC++: void CompatibilityModeOn()\n\nCompatibilityMode governs whether, when both a quality function\nand cell volume are to be stored as cell data, the two values are\nstored in a single array. When compatibility mode is off (the\ndefault), two separate arrays are used -- one labeled \"Quality\"\nand the other labeled \"Volume\". When compatibility mode is on,\nboth values are stored in a single array, with volume as the\nfirst component and quality as the second component.\n\nEnabling CompatibilityMode changes the default tetrahedral\nquality function to VTK_QUALITY_RADIUS_RATIO and turns volume\ncomputation on. (This matches the default behavior of the initial\nimplementation of vtkMeshQuality.) You may change quality\nfunction and volume computation without leaving compatibility\nmode.\n\nDisabling compatibility mode does not affect the current volume\ncomputation or tetrahedral quality function settings.\n\nThe final caveat to CompatibilityMode is that regardless of its\nsetting, the resulting array will be of type vtkDoubleArray\nrather than the original vtkFloatArray. This is a safety function\nto keep the authors from diving off of the Combinatorial Coding\nCliff into Certain Insanity.\n"},
  {(char*)"CompatibilityModeOff", PyvtkMeshQuality_CompatibilityModeOff, 1,
   (char*)"V.CompatibilityModeOff()\nC++: void CompatibilityModeOff()\n\nCompatibilityMode governs whether, when both a quality function\nand cell volume are to be stored as cell data, the two values are\nstored in a single array. When compatibility mode is off (the\ndefault), two separate arrays are used -- one labeled \"Quality\"\nand the other labeled \"Volume\". When compatibility mode is on,\nboth values are stored in a single array, with volume as the\nfirst component and quality as the second component.\n\nEnabling CompatibilityMode changes the default tetrahedral\nquality function to VTK_QUALITY_RADIUS_RATIO and turns volume\ncomputation on. (This matches the default behavior of the initial\nimplementation of vtkMeshQuality.) You may change quality\nfunction and volume computation without leaving compatibility\nmode.\n\nDisabling compatibility mode does not affect the current volume\ncomputation or tetrahedral quality function settings.\n\nThe final caveat to CompatibilityMode is that regardless of its\nsetting, the resulting array will be of type vtkDoubleArray\nrather than the original vtkFloatArray. This is a safety function\nto keep the authors from diving off of the Combinatorial Coding\nCliff into Certain Insanity.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMeshQuality_StaticNew()
{
  return vtkMeshQuality::New();
}

PyObject *PyVTKClass_vtkMeshQualityNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMeshQuality_StaticNew,
    PyvtkMeshQuality_Methods,
    "vtkMeshQuality", modulename,
    NULL, NULL,
    PyvtkMeshQuality_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMeshQuality_Doc()
{
  static const char *docstring[] = {
    "vtkMeshQuality - Calculate functions of quality of the elements\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkMeshQuality computes one or more functions of (geometric) quality\nfor each 2-D and 3-D cell (triangle, quadrilateral, tetrahedron, or\nhexahedron) of a mesh. These functions of quality are then averaged\nover the entire mesh. The minimum, average, maximum, and unbiased\nvariance of quality for each type of cell is stored in the output\nmesh's FieldData. The FieldData arrays are named \"Mesh Triangle",
    "\nQuality,\" \"Mesh Quadrilateral Quality,\" \"Mesh Tetrahedron Quality,\"\nand \"Mesh Hexahedron Quality.\" Each array has a single tuple with 5\ncomponents. The first 4 components are the quality statistics\nmentioned above; the final value is the number of cells of the given\ntype. This final component makes aggregation of statistics for\ndistributed mesh data possible.\n\nBy default, the per-cell quality is ",
    "added to the mesh's cell data, in\nan array named \"Quality.\" Cell types not supported by this filter\nwill have an entry of 0. Use SaveCellQualityOff() to store only the\nfinal statistics.\n\nThis version of the filter written by Philippe Pebay and David\nThompson overtakes an older version written by Leila Baghdadi, Hanif\nLadak, and David Steinman at the Imaging Research Labs, Robarts\nResearch Institut",
    "e. That version only supported tetrahedral radius\nratio. See the CompatibilityModeOn() member for information on how to\nmake this filter behave like the previous implementation. For more\ninformation on the triangle quality functions of this class, cf.\nPebay & Baker 2003, Analysis of triangle quality measures, Math Comp\n72:244. For more information on the quadrangle quality functions of\nthis class,",
    " cf. Pebay 2004, Planar Quadrangle Quality Measures, Eng\nComp 20:2.\n\nCaveats:\n\nWhile more general than before, this class does not address many cell\ntypes, including wedges and pyramids in 3D and triangle strips and\nfans in 2D (among others). Most quadrilateral quality functions are\nintended for planar quadrilaterals only. The minimal angle is not,\nstrictly speaking, a quality function, but it is ",
    "provided because of\nits useage by many authors.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMeshQuality(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMeshQualityNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMeshQuality", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_EDGE_RATIO", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_ASPECT_RATIO", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_RADIUS_RATIO", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_ASPECT_FROBENIUS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_MED_ASPECT_FROBENIUS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_MAX_ASPECT_FROBENIUS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(6);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_MIN_ANGLE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(7);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_COLLAPSE_RATIO", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(8);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_MAX_ANGLE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(9);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_CONDITION", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(10);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_SCALED_JACOBIAN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(11);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_SHEAR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(12);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_RELATIVE_SIZE_SQUARED", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(13);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_SHAPE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(14);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_SHAPE_AND_SIZE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(15);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_DISTORTION", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(16);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_MAX_EDGE_RATIO", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(17);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_SKEW", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(18);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_TAPER", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(19);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_VOLUME", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(20);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_STRETCH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(21);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_DIAGONAL", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(22);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_DIMENSION", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(23);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_ODDY", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(24);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_SHEAR_AND_SIZE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(25);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_JACOBIAN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(26);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_WARPAGE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(27);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_ASPECT_GAMMA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(28);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_AREA", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(29);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_QUALITY_ASPECT_BETA", o) != 0)
    {
    Py_DECREF(o);
    }

}

