// python wrapper for vtkSplineRepresentation
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
#include "vtkSplineRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSplineRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSplineRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSplineRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSplineRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkSplineRepresentation_Doc();


static PyObject *
PyvtkSplineRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

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
      tempr = op->vtkSplineRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

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
      tempr = op->vtkSplineRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkSplineRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::NewInstance();
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
PyvtkSplineRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSplineRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSplineRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionState(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetInteractionState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetProjectToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectToPlane(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetProjectToPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetProjectToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjectToPlane();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::GetProjectToPlane();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_ProjectToPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProjectToPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProjectToPlaneOn();
      }
    else
      {
      op->vtkSplineRepresentation::ProjectToPlaneOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_ProjectToPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProjectToPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProjectToPlaneOff();
      }
    else
      {
      op->vtkSplineRepresentation::ProjectToPlaneOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetPlaneSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkPlaneSource *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneSource"))
    {
    if (ap.IsBound())
      {
      op->SetPlaneSource(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetPlaneSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormal(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetProjectionNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetProjectionNormalMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjectionNormalMinValue();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::GetProjectionNormalMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetProjectionNormalMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjectionNormalMaxValue();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::GetProjectionNormalMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjectionNormal();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::GetProjectionNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetProjectionNormalToXAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToXAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToXAxes();
      }
    else
      {
      op->vtkSplineRepresentation::SetProjectionNormalToXAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetProjectionNormalToYAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToYAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToYAxes();
      }
    else
      {
      op->vtkSplineRepresentation::SetProjectionNormalToYAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetProjectionNormalToZAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToZAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToZAxes();
      }
    else
      {
      op->vtkSplineRepresentation::SetProjectionNormalToZAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetProjectionNormalToOblique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToOblique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToOblique();
      }
    else
      {
      op->vtkSplineRepresentation::SetProjectionNormalToOblique();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionPosition(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetProjectionPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjectionPosition();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::GetProjectionPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GetPolyData(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHandleProperty();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::GetHandleProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedHandleProperty();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::GetSelectedHandleProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineProperty();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::GetLineProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedLineProperty();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::GetSelectedLineProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfHandles(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetNumberOfHandles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfHandles();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::GetNumberOfHandles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResolution(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResolution();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::GetResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetParametricSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkParametricSpline *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkParametricSpline"))
    {
    if (ap.IsBound())
      {
      op->SetParametricSpline(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetParametricSpline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetParametricSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkParametricSpline *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParametricSpline();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::GetParametricSpline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
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
      op->SetHandlePosition(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkSplineRepresentation::SetHandlePosition(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSplineRepresentation_SetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->SetHandlePosition(temp0, temp1);
      }
    else
      {
      op->vtkSplineRepresentation::SetHandlePosition(temp0, temp1);
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
PyvtkSplineRepresentation_SetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkSplineRepresentation_SetHandlePosition_s1(self, args);
    case 2:
      return PyvtkSplineRepresentation_SetHandlePosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetHandlePosition");
  return NULL;
}



static PyObject *
PyvtkSplineRepresentation_GetHandlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetHandlePosition(temp0, temp1);
      }
    else
      {
      op->vtkSplineRepresentation::GetHandlePosition(temp0, temp1);
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
PyvtkSplineRepresentation_GetHandlePositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkDoubleArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHandlePositions();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::GetHandlePositions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClosed(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::SetClosed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClosed();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::GetClosed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_ClosedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedOn();
      }
    else
      {
      op->vtkSplineRepresentation::ClosedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_ClosedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedOff();
      }
    else
      {
      op->vtkSplineRepresentation::ClosedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_IsClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsClosed();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::IsClosed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_GetSummedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSummedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSummedLength();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::GetSummedLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_InitializeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->InitializeHandles(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::InitializeHandles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkSplineRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      tempr = op->ComputeInteractionState(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSplineRepresentation::ComputeInteractionState(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->StartWidgetInteraction(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::StartWidgetInteraction(temp0);
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
PyvtkSplineRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->WidgetInteraction(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::WidgetInteraction(temp0);
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
PyvtkSplineRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->EndWidgetInteraction(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::EndWidgetInteraction(temp0);
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
PyvtkSplineRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkSplineRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOpaqueGeometry(temp0);
      }
    else
      {
      tempr = op->vtkSplineRepresentation::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderTranslucentPolygonalGeometry(temp0);
      }
    else
      {
      tempr = op->vtkSplineRepresentation::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOverlay(temp0);
      }
    else
      {
      tempr = op->vtkSplineRepresentation::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasTranslucentPolygonalGeometry();
      }
    else
      {
      tempr = op->vtkSplineRepresentation::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineRepresentation_SetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineRepresentation *op = static_cast<vtkSplineRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetLineColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSplineRepresentation::SetLineColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSplineRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkSplineRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSplineRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSplineRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSplineRepresentation\nC++: vtkSplineRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSplineRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSplineRepresentation\nC++: vtkSplineRepresentation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInteractionState", PyvtkSplineRepresentation_SetInteractionState, 1,
   (char*)"V.SetInteractionState(int)\nC++: void SetInteractionState(int a)\n\n"},
  {(char*)"SetProjectToPlane", PyvtkSplineRepresentation_SetProjectToPlane, 1,
   (char*)"V.SetProjectToPlane(int)\nC++: void SetProjectToPlane(int a)\n\nForce the spline widget to be projected onto one of the\northogonal planes. Remember that when the InteractionState\nchanges, a ModifiedEvent is invoked. This can be used to snap the\nspline to the plane if it is orginally not aligned.  The normal\nin SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively\nand 3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {(char*)"GetProjectToPlane", PyvtkSplineRepresentation_GetProjectToPlane, 1,
   (char*)"V.GetProjectToPlane() -> int\nC++: int GetProjectToPlane()\n\nForce the spline widget to be projected onto one of the\northogonal planes. Remember that when the InteractionState\nchanges, a ModifiedEvent is invoked. This can be used to snap the\nspline to the plane if it is orginally not aligned.  The normal\nin SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively\nand 3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {(char*)"ProjectToPlaneOn", PyvtkSplineRepresentation_ProjectToPlaneOn, 1,
   (char*)"V.ProjectToPlaneOn()\nC++: void ProjectToPlaneOn()\n\nForce the spline widget to be projected onto one of the\northogonal planes. Remember that when the InteractionState\nchanges, a ModifiedEvent is invoked. This can be used to snap the\nspline to the plane if it is orginally not aligned.  The normal\nin SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively\nand 3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {(char*)"ProjectToPlaneOff", PyvtkSplineRepresentation_ProjectToPlaneOff, 1,
   (char*)"V.ProjectToPlaneOff()\nC++: void ProjectToPlaneOff()\n\nForce the spline widget to be projected onto one of the\northogonal planes. Remember that when the InteractionState\nchanges, a ModifiedEvent is invoked. This can be used to snap the\nspline to the plane if it is orginally not aligned.  The normal\nin SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively\nand 3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {(char*)"SetPlaneSource", PyvtkSplineRepresentation_SetPlaneSource, 1,
   (char*)"V.SetPlaneSource(vtkPlaneSource)\nC++: void SetPlaneSource(vtkPlaneSource *plane)\n\nSet up a reference to a vtkPlaneSource that could be from another\nwidget object, e.g. a vtkPolyDataSourceWidget.\n"},
  {(char*)"SetProjectionNormal", PyvtkSplineRepresentation_SetProjectionNormal, 1,
   (char*)"V.SetProjectionNormal(int)\nC++: void SetProjectionNormal(int)\n\n"},
  {(char*)"GetProjectionNormalMinValue", PyvtkSplineRepresentation_GetProjectionNormalMinValue, 1,
   (char*)"V.GetProjectionNormalMinValue() -> int\nC++: int GetProjectionNormalMinValue()\n\n"},
  {(char*)"GetProjectionNormalMaxValue", PyvtkSplineRepresentation_GetProjectionNormalMaxValue, 1,
   (char*)"V.GetProjectionNormalMaxValue() -> int\nC++: int GetProjectionNormalMaxValue()\n\n"},
  {(char*)"GetProjectionNormal", PyvtkSplineRepresentation_GetProjectionNormal, 1,
   (char*)"V.GetProjectionNormal() -> int\nC++: int GetProjectionNormal()\n\n"},
  {(char*)"SetProjectionNormalToXAxes", PyvtkSplineRepresentation_SetProjectionNormalToXAxes, 1,
   (char*)"V.SetProjectionNormalToXAxes()\nC++: void SetProjectionNormalToXAxes()\n\n"},
  {(char*)"SetProjectionNormalToYAxes", PyvtkSplineRepresentation_SetProjectionNormalToYAxes, 1,
   (char*)"V.SetProjectionNormalToYAxes()\nC++: void SetProjectionNormalToYAxes()\n\n"},
  {(char*)"SetProjectionNormalToZAxes", PyvtkSplineRepresentation_SetProjectionNormalToZAxes, 1,
   (char*)"V.SetProjectionNormalToZAxes()\nC++: void SetProjectionNormalToZAxes()\n\n"},
  {(char*)"SetProjectionNormalToOblique", PyvtkSplineRepresentation_SetProjectionNormalToOblique, 1,
   (char*)"V.SetProjectionNormalToOblique()\nC++: void SetProjectionNormalToOblique()\n\n"},
  {(char*)"SetProjectionPosition", PyvtkSplineRepresentation_SetProjectionPosition, 1,
   (char*)"V.SetProjectionPosition(float)\nC++: void SetProjectionPosition(double position)\n\nSet the position of spline handles and points in terms of a\nplane's position. i.e., if ProjectionNormal is 0, all of the\nx-coordinate values of the points are set to position. Any value\ncan be passed (and is ignored) to update the spline points when\nProjection normal is set to 3 for arbritrary plane orientations.\n"},
  {(char*)"GetProjectionPosition", PyvtkSplineRepresentation_GetProjectionPosition, 1,
   (char*)"V.GetProjectionPosition() -> float\nC++: double GetProjectionPosition()\n\nSet the position of spline handles and points in terms of a\nplane's position. i.e., if ProjectionNormal is 0, all of the\nx-coordinate values of the points are set to position. Any value\ncan be passed (and is ignored) to update the spline points when\nProjection normal is set to 3 for arbritrary plane orientations.\n"},
  {(char*)"GetPolyData", PyvtkSplineRepresentation_GetPolyData, 1,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the spline. \nThe polydata consists of points and line segments numbering\nResolution + 1 and Resoltuion, respectively. Points are\nguaranteed to be up-to-date when either the InteractionEvent or \nEndInteraction events are invoked. The user provides the\nvtkPolyData and the points and polyline are added to it.\n"},
  {(char*)"GetHandleProperty", PyvtkSplineRepresentation_GetHandleProperty, 1,
   (char*)"V.GetHandleProperty() -> vtkProperty\nC++: vtkProperty *GetHandleProperty()\n\nSet/Get the handle properties (the spheres are the handles). The\nproperties of the handles when selected and unselected can be\nmanipulated.\n"},
  {(char*)"GetSelectedHandleProperty", PyvtkSplineRepresentation_GetSelectedHandleProperty, 1,
   (char*)"V.GetSelectedHandleProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedHandleProperty()\n\nSet/Get the handle properties (the spheres are the handles). The\nproperties of the handles when selected and unselected can be\nmanipulated.\n"},
  {(char*)"GetLineProperty", PyvtkSplineRepresentation_GetLineProperty, 1,
   (char*)"V.GetLineProperty() -> vtkProperty\nC++: vtkProperty *GetLineProperty()\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetSelectedLineProperty", PyvtkSplineRepresentation_GetSelectedLineProperty, 1,
   (char*)"V.GetSelectedLineProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedLineProperty()\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {(char*)"SetNumberOfHandles", PyvtkSplineRepresentation_SetNumberOfHandles, 1,
   (char*)"V.SetNumberOfHandles(int)\nC++: virtual void SetNumberOfHandles(int npts)\n\nSet/Get the number of handles for this widget.\n"},
  {(char*)"GetNumberOfHandles", PyvtkSplineRepresentation_GetNumberOfHandles, 1,
   (char*)"V.GetNumberOfHandles() -> int\nC++: int GetNumberOfHandles()\n\nSet/Get the number of handles for this widget.\n"},
  {(char*)"SetResolution", PyvtkSplineRepresentation_SetResolution, 1,
   (char*)"V.SetResolution(int)\nC++: void SetResolution(int resolution)\n\nSet/Get the number of line segments representing the spline for\nthis widget.\n"},
  {(char*)"GetResolution", PyvtkSplineRepresentation_GetResolution, 1,
   (char*)"V.GetResolution() -> int\nC++: int GetResolution()\n\nSet/Get the number of line segments representing the spline for\nthis widget.\n"},
  {(char*)"SetParametricSpline", PyvtkSplineRepresentation_SetParametricSpline, 1,
   (char*)"V.SetParametricSpline(vtkParametricSpline)\nC++: virtual void SetParametricSpline(vtkParametricSpline *)\n\nSet the parametric spline object. Through vtkParametricSpline's\nAPI, the user can supply and configure one of currently two types\nof spline: vtkCardinalSpline, vtkKochanekSpline. The widget\ncontrols the open or closed configuration of the spline. WARNING:\nThe widget does not enforce internal consistency so that all\nthree are of the same type.\n"},
  {(char*)"GetParametricSpline", PyvtkSplineRepresentation_GetParametricSpline, 1,
   (char*)"V.GetParametricSpline() -> vtkParametricSpline\nC++: vtkParametricSpline *GetParametricSpline()\n\nSet the parametric spline object. Through vtkParametricSpline's\nAPI, the user can supply and configure one of currently two types\nof spline: vtkCardinalSpline, vtkKochanekSpline. The widget\ncontrols the open or closed configuration of the spline. WARNING:\nThe widget does not enforce internal consistency so that all\nthree are of the same type.\n"},
  {(char*)"SetHandlePosition", PyvtkSplineRepresentation_SetHandlePosition, 1,
   (char*)"V.SetHandlePosition(int, float, float, float)\nC++: void SetHandlePosition(int handle, double x, double y,\n    double z)\nV.SetHandlePosition(int, [float, float, float])\nC++: void SetHandlePosition(int handle, double xyz[3])\n\nSet/Get the position of the spline handles. Call\nGetNumberOfHandles to determine the valid range of handle\nindices.\n"},
  {(char*)"GetHandlePosition", PyvtkSplineRepresentation_GetHandlePosition, 1,
   (char*)"V.GetHandlePosition(int, [float, float, float])\nC++: void GetHandlePosition(int handle, double xyz[3])\n\nSet/Get the position of the spline handles. Call\nGetNumberOfHandles to determine the valid range of handle\nindices.\n"},
  {(char*)"GetHandlePositions", PyvtkSplineRepresentation_GetHandlePositions, 1,
   (char*)"V.GetHandlePositions() -> vtkDoubleArray\nC++: vtkDoubleArray *GetHandlePositions()\n\nSet/Get the position of the spline handles. Call\nGetNumberOfHandles to determine the valid range of handle\nindices.\n"},
  {(char*)"SetClosed", PyvtkSplineRepresentation_SetClosed, 1,
   (char*)"V.SetClosed(int)\nC++: void SetClosed(int closed)\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.  A minimum of 3 handles are\nrequired to form a closed loop.  This method enforces consistency\nwith user supplied subclasses of vtkSpline.\n"},
  {(char*)"GetClosed", PyvtkSplineRepresentation_GetClosed, 1,
   (char*)"V.GetClosed() -> int\nC++: int GetClosed()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.  A minimum of 3 handles are\nrequired to form a closed loop.  This method enforces consistency\nwith user supplied subclasses of vtkSpline.\n"},
  {(char*)"ClosedOn", PyvtkSplineRepresentation_ClosedOn, 1,
   (char*)"V.ClosedOn()\nC++: void ClosedOn()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.  A minimum of 3 handles are\nrequired to form a closed loop.  This method enforces consistency\nwith user supplied subclasses of vtkSpline.\n"},
  {(char*)"ClosedOff", PyvtkSplineRepresentation_ClosedOff, 1,
   (char*)"V.ClosedOff()\nC++: void ClosedOff()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.  A minimum of 3 handles are\nrequired to form a closed loop.  This method enforces consistency\nwith user supplied subclasses of vtkSpline.\n"},
  {(char*)"IsClosed", PyvtkSplineRepresentation_IsClosed, 1,
   (char*)"V.IsClosed() -> int\nC++: int IsClosed()\n\nConvenience method to determine whether the spline is closed in a\ngeometric sense.  The widget may be set \"closed\" but still be\ngeometrically open (e.g., a straight line).\n"},
  {(char*)"GetSummedLength", PyvtkSplineRepresentation_GetSummedLength, 1,
   (char*)"V.GetSummedLength() -> float\nC++: double GetSummedLength()\n\nGet the approximate vs. the true arc length of the spline.\nCalculated as the summed lengths of the individual straight line\nsegments. Use SetResolution to control the accuracy.\n"},
  {(char*)"InitializeHandles", PyvtkSplineRepresentation_InitializeHandles, 1,
   (char*)"V.InitializeHandles(vtkPoints)\nC++: void InitializeHandles(vtkPoints *points)\n\nConvenience method to allocate and set the handles from a\nvtkPoints instance.  If the first and last points are the same,\nthe spline sets Closed to the on InteractionState and disregards\nthe last point, otherwise Closed remains unchanged.\n"},
  {(char*)"BuildRepresentation", PyvtkSplineRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"ComputeInteractionState", PyvtkSplineRepresentation_ComputeInteractionState, 1,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"StartWidgetInteraction", PyvtkSplineRepresentation_StartWidgetInteraction, 1,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"WidgetInteraction", PyvtkSplineRepresentation_WidgetInteraction, 1,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"EndWidgetInteraction", PyvtkSplineRepresentation_EndWidgetInteraction, 1,
   (char*)"V.EndWidgetInteraction([float, float])\nC++: virtual void EndWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\nNote that a version of place widget is available where the center\nand handle position are specified.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkSplineRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkSplineRepresentation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkSplineRepresentation_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"RenderOverlay", PyvtkSplineRepresentation_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkSplineRepresentation_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods supporting, and required by, the rendering process.\n"},
  {(char*)"SetLineColor", PyvtkSplineRepresentation_SetLineColor, 1,
   (char*)"V.SetLineColor(float, float, float)\nC++: void SetLineColor(double r, double g, double b)\n\nConvenience method to set the line color. Ideally one should use\nGetLineProperty()->SetColor().\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSplineRepresentation_StaticNew()
{
  return vtkSplineRepresentation::New();
}

PyObject *PyVTKClass_vtkSplineRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSplineRepresentation_StaticNew,
    PyvtkSplineRepresentation_Methods,
    "vtkSplineRepresentation", modulename,
    NULL, NULL,
    PyvtkSplineRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"Outside", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"OnHandle", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"OnLine", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"Moving", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"Scaling", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"Spinning", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"Inserting", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"Erasing", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkSplineRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkSplineRepresentation - vtkWidgetRepresentation for a spline.\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "vtkSplineRepresentation is a vtkWidgetRepresentation for a spline.\nThis 3D widget defines a spline that can be interactively placed in a\nscene. The spline has handles, the number of which can be changed,\nplus it can be picked on the spline itself to translate or rotate it\nin the scene. This is based on vtkSplineWidget.\n\nSee Also:\n\nvtkSplineWidget, vtkSplineWidget2\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSplineRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSplineRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSplineRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PROJECTION_YZ", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PROJECTION_XZ", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PROJECTION_XY", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PROJECTION_OBLIQUE", o) != 0)
    {
    Py_DECREF(o);
    }

}

