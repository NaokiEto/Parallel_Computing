// python wrapper for vtkSplineWidget
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
#include "vtkSplineWidget.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSplineWidget(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSplineWidget(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSplineWidgetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSplineWidgetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtk3DWidgetNew
extern "C" { PyObject *PyVTKClass_vtk3DWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtk3DWidgetNew
#endif

static const char **PyvtkSplineWidget_Doc();


static PyObject *
PyvtkSplineWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  vtkSplineWidget *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSplineWidget::NewInstance();
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
PyvtkSplineWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSplineWidget *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSplineWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkSplineWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      op->PlaceWidget(temp0);
      }
    else
      {
      op->vtkSplineWidget::PlaceWidget(temp0);
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
PyvtkSplineWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlaceWidget();
      }
    else
      {
      op->vtkSplineWidget::PlaceWidget();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSplineWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      op->PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkSplineWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSplineWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSplineWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkSplineWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkSplineWidget_PlaceWidget_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
PyvtkSplineWidget_SetProjectToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      op->vtkSplineWidget::SetProjectToPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetProjectToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::GetProjectToPlane();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_ProjectToPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProjectToPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProjectToPlaneOn();
      }
    else
      {
      op->vtkSplineWidget::ProjectToPlaneOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_ProjectToPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProjectToPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProjectToPlaneOff();
      }
    else
      {
      op->vtkSplineWidget::ProjectToPlaneOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetPlaneSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      op->vtkSplineWidget::SetPlaneSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      op->vtkSplineWidget::SetProjectionNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetProjectionNormalMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::GetProjectionNormalMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetProjectionNormalMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::GetProjectionNormalMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::GetProjectionNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetProjectionNormalToXAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToXAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToXAxes();
      }
    else
      {
      op->vtkSplineWidget::SetProjectionNormalToXAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetProjectionNormalToYAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToYAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToYAxes();
      }
    else
      {
      op->vtkSplineWidget::SetProjectionNormalToYAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetProjectionNormalToZAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToZAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToZAxes();
      }
    else
      {
      op->vtkSplineWidget::SetProjectionNormalToZAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetProjectionNormalToOblique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToOblique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToOblique();
      }
    else
      {
      op->vtkSplineWidget::SetProjectionNormalToOblique();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      op->vtkSplineWidget::SetProjectionPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::GetProjectionPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      op->vtkSplineWidget::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetHandleProperty(temp0);
      }
    else
      {
      op->vtkSplineWidget::SetHandleProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::GetHandleProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetSelectedHandleProperty(temp0);
      }
    else
      {
      op->vtkSplineWidget::SetSelectedHandleProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::GetSelectedHandleProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetLineProperty(temp0);
      }
    else
      {
      op->vtkSplineWidget::SetLineProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::GetLineProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetSelectedLineProperty(temp0);
      }
    else
      {
      op->vtkSplineWidget::SetSelectedLineProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::GetSelectedLineProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      op->vtkSplineWidget::SetNumberOfHandles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::GetNumberOfHandles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      op->vtkSplineWidget::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::GetResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetParametricSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      op->vtkSplineWidget::SetParametricSpline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetParametricSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::GetParametricSpline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      op->vtkSplineWidget::SetHandlePosition(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSplineWidget_SetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      op->vtkSplineWidget::SetHandlePosition(temp0, temp1);
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
PyvtkSplineWidget_SetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkSplineWidget_SetHandlePosition_s1(self, args);
    case 2:
      return PyvtkSplineWidget_SetHandlePosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetHandlePosition");
  return NULL;
}



static PyObject *
PyvtkSplineWidget_GetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      op->vtkSplineWidget::GetHandlePosition(temp0, temp1);
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
PyvtkSplineWidget_GetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  int temp0;
  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHandlePosition(temp0);
      }
    else
      {
      tempr = op->vtkSplineWidget::GetHandlePosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkSplineWidget_GetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkSplineWidget_GetHandlePosition_s1(self, args);
    case 1:
      return PyvtkSplineWidget_GetHandlePosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetHandlePosition");
  return NULL;
}



static PyObject *
PyvtkSplineWidget_SetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      op->vtkSplineWidget::SetClosed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::GetClosed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_ClosedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedOn();
      }
    else
      {
      op->vtkSplineWidget::ClosedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_ClosedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedOff();
      }
    else
      {
      op->vtkSplineWidget::ClosedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_IsClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::IsClosed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetSummedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSummedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      tempr = op->vtkSplineWidget::GetSummedLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_InitializeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      op->vtkSplineWidget::InitializeHandles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessEvents(temp0);
      }
    else
      {
      op->vtkSplineWidget::SetProcessEvents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetProcessEventsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEventsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProcessEventsMinValue();
      }
    else
      {
      tempr = op->vtkSplineWidget::GetProcessEventsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetProcessEventsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEventsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProcessEventsMaxValue();
      }
    else
      {
      tempr = op->vtkSplineWidget::GetProcessEventsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProcessEvents();
      }
    else
      {
      tempr = op->vtkSplineWidget::GetProcessEvents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_ProcessEventsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEventsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProcessEventsOn();
      }
    else
      {
      op->vtkSplineWidget::ProcessEventsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSplineWidget_ProcessEventsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEventsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ProcessEventsOff();
      }
    else
      {
      op->vtkSplineWidget::ProcessEventsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSplineWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkSplineWidget_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSplineWidget_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSplineWidget_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSplineWidget\nC++: vtkSplineWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSplineWidget_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSplineWidget\nC++: vtkSplineWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnabled", PyvtkSplineWidget_SetEnabled, 1,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"PlaceWidget", PyvtkSplineWidget_PlaceWidget, 1,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\nV.PlaceWidget()\nC++: void PlaceWidget()\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"SetProjectToPlane", PyvtkSplineWidget_SetProjectToPlane, 1,
   (char*)"V.SetProjectToPlane(int)\nC++: void SetProjectToPlane(int a)\n\nForce the spline widget to be projected onto one of the\northogonal planes. Remember that when the state changes, a\nModifiedEvent is invoked. This can be used to snap the spline to\nthe plane if it is orginally not aligned.  The normal in\nSetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and\n3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {(char*)"GetProjectToPlane", PyvtkSplineWidget_GetProjectToPlane, 1,
   (char*)"V.GetProjectToPlane() -> int\nC++: int GetProjectToPlane()\n\nForce the spline widget to be projected onto one of the\northogonal planes. Remember that when the state changes, a\nModifiedEvent is invoked. This can be used to snap the spline to\nthe plane if it is orginally not aligned.  The normal in\nSetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and\n3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {(char*)"ProjectToPlaneOn", PyvtkSplineWidget_ProjectToPlaneOn, 1,
   (char*)"V.ProjectToPlaneOn()\nC++: void ProjectToPlaneOn()\n\nForce the spline widget to be projected onto one of the\northogonal planes. Remember that when the state changes, a\nModifiedEvent is invoked. This can be used to snap the spline to\nthe plane if it is orginally not aligned.  The normal in\nSetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and\n3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {(char*)"ProjectToPlaneOff", PyvtkSplineWidget_ProjectToPlaneOff, 1,
   (char*)"V.ProjectToPlaneOff()\nC++: void ProjectToPlaneOff()\n\nForce the spline widget to be projected onto one of the\northogonal planes. Remember that when the state changes, a\nModifiedEvent is invoked. This can be used to snap the spline to\nthe plane if it is orginally not aligned.  The normal in\nSetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and\n3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {(char*)"SetPlaneSource", PyvtkSplineWidget_SetPlaneSource, 1,
   (char*)"V.SetPlaneSource(vtkPlaneSource)\nC++: void SetPlaneSource(vtkPlaneSource *plane)\n\nSet up a reference to a vtkPlaneSource that could be from another\nwidget object, e.g. a vtkPolyDataSourceWidget.\n"},
  {(char*)"SetProjectionNormal", PyvtkSplineWidget_SetProjectionNormal, 1,
   (char*)"V.SetProjectionNormal(int)\nC++: void SetProjectionNormal(int)\n\n"},
  {(char*)"GetProjectionNormalMinValue", PyvtkSplineWidget_GetProjectionNormalMinValue, 1,
   (char*)"V.GetProjectionNormalMinValue() -> int\nC++: int GetProjectionNormalMinValue()\n\n"},
  {(char*)"GetProjectionNormalMaxValue", PyvtkSplineWidget_GetProjectionNormalMaxValue, 1,
   (char*)"V.GetProjectionNormalMaxValue() -> int\nC++: int GetProjectionNormalMaxValue()\n\n"},
  {(char*)"GetProjectionNormal", PyvtkSplineWidget_GetProjectionNormal, 1,
   (char*)"V.GetProjectionNormal() -> int\nC++: int GetProjectionNormal()\n\n"},
  {(char*)"SetProjectionNormalToXAxes", PyvtkSplineWidget_SetProjectionNormalToXAxes, 1,
   (char*)"V.SetProjectionNormalToXAxes()\nC++: void SetProjectionNormalToXAxes()\n\n"},
  {(char*)"SetProjectionNormalToYAxes", PyvtkSplineWidget_SetProjectionNormalToYAxes, 1,
   (char*)"V.SetProjectionNormalToYAxes()\nC++: void SetProjectionNormalToYAxes()\n\n"},
  {(char*)"SetProjectionNormalToZAxes", PyvtkSplineWidget_SetProjectionNormalToZAxes, 1,
   (char*)"V.SetProjectionNormalToZAxes()\nC++: void SetProjectionNormalToZAxes()\n\n"},
  {(char*)"SetProjectionNormalToOblique", PyvtkSplineWidget_SetProjectionNormalToOblique, 1,
   (char*)"V.SetProjectionNormalToOblique()\nC++: void SetProjectionNormalToOblique()\n\n"},
  {(char*)"SetProjectionPosition", PyvtkSplineWidget_SetProjectionPosition, 1,
   (char*)"V.SetProjectionPosition(float)\nC++: void SetProjectionPosition(double position)\n\nSet the position of spline handles and points in terms of a\nplane's position. i.e., if ProjectionNormal is 0, all of the\nx-coordinate values of the points are set to position. Any value\ncan be passed (and is ignored) to update the spline points when\nProjection normal is set to 3 for arbritrary plane orientations.\n"},
  {(char*)"GetProjectionPosition", PyvtkSplineWidget_GetProjectionPosition, 1,
   (char*)"V.GetProjectionPosition() -> float\nC++: double GetProjectionPosition()\n\nSet the position of spline handles and points in terms of a\nplane's position. i.e., if ProjectionNormal is 0, all of the\nx-coordinate values of the points are set to position. Any value\ncan be passed (and is ignored) to update the spline points when\nProjection normal is set to 3 for arbritrary plane orientations.\n"},
  {(char*)"GetPolyData", PyvtkSplineWidget_GetPolyData, 1,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the spline. \nThe polydata consists of points and line segments numbering\nResolution + 1 and Resoltuion, respectively. Points are\nguaranteed to be up-to-date when either the InteractionEvent or \nEndInteraction events are invoked. The user provides the\nvtkPolyData and the points and polyline are added to it.\n"},
  {(char*)"SetHandleProperty", PyvtkSplineWidget_SetHandleProperty, 1,
   (char*)"V.SetHandleProperty(vtkProperty)\nC++: virtual void SetHandleProperty(vtkProperty *)\n\nSet/Get the handle properties (the spheres are the handles). The\nproperties of the handles when selected and unselected can be\nmanipulated.\n"},
  {(char*)"GetHandleProperty", PyvtkSplineWidget_GetHandleProperty, 1,
   (char*)"V.GetHandleProperty() -> vtkProperty\nC++: vtkProperty *GetHandleProperty()\n\nSet/Get the handle properties (the spheres are the handles). The\nproperties of the handles when selected and unselected can be\nmanipulated.\n"},
  {(char*)"SetSelectedHandleProperty", PyvtkSplineWidget_SetSelectedHandleProperty, 1,
   (char*)"V.SetSelectedHandleProperty(vtkProperty)\nC++: virtual void SetSelectedHandleProperty(vtkProperty *)\n\nSet/Get the handle properties (the spheres are the handles). The\nproperties of the handles when selected and unselected can be\nmanipulated.\n"},
  {(char*)"GetSelectedHandleProperty", PyvtkSplineWidget_GetSelectedHandleProperty, 1,
   (char*)"V.GetSelectedHandleProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedHandleProperty()\n\nSet/Get the handle properties (the spheres are the handles). The\nproperties of the handles when selected and unselected can be\nmanipulated.\n"},
  {(char*)"SetLineProperty", PyvtkSplineWidget_SetLineProperty, 1,
   (char*)"V.SetLineProperty(vtkProperty)\nC++: virtual void SetLineProperty(vtkProperty *)\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetLineProperty", PyvtkSplineWidget_GetLineProperty, 1,
   (char*)"V.GetLineProperty() -> vtkProperty\nC++: vtkProperty *GetLineProperty()\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {(char*)"SetSelectedLineProperty", PyvtkSplineWidget_SetSelectedLineProperty, 1,
   (char*)"V.SetSelectedLineProperty(vtkProperty)\nC++: virtual void SetSelectedLineProperty(vtkProperty *)\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetSelectedLineProperty", PyvtkSplineWidget_GetSelectedLineProperty, 1,
   (char*)"V.GetSelectedLineProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedLineProperty()\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {(char*)"SetNumberOfHandles", PyvtkSplineWidget_SetNumberOfHandles, 1,
   (char*)"V.SetNumberOfHandles(int)\nC++: virtual void SetNumberOfHandles(int npts)\n\nSet/Get the number of handles for this widget.\n"},
  {(char*)"GetNumberOfHandles", PyvtkSplineWidget_GetNumberOfHandles, 1,
   (char*)"V.GetNumberOfHandles() -> int\nC++: int GetNumberOfHandles()\n\nSet/Get the number of handles for this widget.\n"},
  {(char*)"SetResolution", PyvtkSplineWidget_SetResolution, 1,
   (char*)"V.SetResolution(int)\nC++: void SetResolution(int resolution)\n\nSet/Get the number of line segments representing the spline for\nthis widget.\n"},
  {(char*)"GetResolution", PyvtkSplineWidget_GetResolution, 1,
   (char*)"V.GetResolution() -> int\nC++: int GetResolution()\n\nSet/Get the number of line segments representing the spline for\nthis widget.\n"},
  {(char*)"SetParametricSpline", PyvtkSplineWidget_SetParametricSpline, 1,
   (char*)"V.SetParametricSpline(vtkParametricSpline)\nC++: virtual void SetParametricSpline(vtkParametricSpline *)\n\nSet the parametric spline object. Through vtkParametricSpline's\nAPI, the user can supply and configure one of currently two types\nof spline: vtkCardinalSpline, vtkKochanekSpline. The widget\ncontrols the open or closed configuration of the spline. WARNING:\nThe widget does not enforce internal consistency so that all\nthree are of the same type.\n"},
  {(char*)"GetParametricSpline", PyvtkSplineWidget_GetParametricSpline, 1,
   (char*)"V.GetParametricSpline() -> vtkParametricSpline\nC++: vtkParametricSpline *GetParametricSpline()\n\nSet the parametric spline object. Through vtkParametricSpline's\nAPI, the user can supply and configure one of currently two types\nof spline: vtkCardinalSpline, vtkKochanekSpline. The widget\ncontrols the open or closed configuration of the spline. WARNING:\nThe widget does not enforce internal consistency so that all\nthree are of the same type.\n"},
  {(char*)"SetHandlePosition", PyvtkSplineWidget_SetHandlePosition, 1,
   (char*)"V.SetHandlePosition(int, float, float, float)\nC++: void SetHandlePosition(int handle, double x, double y,\n    double z)\nV.SetHandlePosition(int, [float, float, float])\nC++: void SetHandlePosition(int handle, double xyz[3])\n\nSet/Get the position of the spline handles. Call\nGetNumberOfHandles to determine the valid range of handle\nindices.\n"},
  {(char*)"GetHandlePosition", PyvtkSplineWidget_GetHandlePosition, 1,
   (char*)"V.GetHandlePosition(int, [float, float, float])\nC++: void GetHandlePosition(int handle, double xyz[3])\nV.GetHandlePosition(int) -> (float, float, float)\nC++: double *GetHandlePosition(int handle)\n\nSet/Get the position of the spline handles. Call\nGetNumberOfHandles to determine the valid range of handle\nindices.\n"},
  {(char*)"SetClosed", PyvtkSplineWidget_SetClosed, 1,
   (char*)"V.SetClosed(int)\nC++: void SetClosed(int closed)\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.  A minimum of 3 handles are\nrequired to form a closed loop.  This method enforces consistency\nwith user supplied subclasses of vtkSpline.\n"},
  {(char*)"GetClosed", PyvtkSplineWidget_GetClosed, 1,
   (char*)"V.GetClosed() -> int\nC++: int GetClosed()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.  A minimum of 3 handles are\nrequired to form a closed loop.  This method enforces consistency\nwith user supplied subclasses of vtkSpline.\n"},
  {(char*)"ClosedOn", PyvtkSplineWidget_ClosedOn, 1,
   (char*)"V.ClosedOn()\nC++: void ClosedOn()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.  A minimum of 3 handles are\nrequired to form a closed loop.  This method enforces consistency\nwith user supplied subclasses of vtkSpline.\n"},
  {(char*)"ClosedOff", PyvtkSplineWidget_ClosedOff, 1,
   (char*)"V.ClosedOff()\nC++: void ClosedOff()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.  A minimum of 3 handles are\nrequired to form a closed loop.  This method enforces consistency\nwith user supplied subclasses of vtkSpline.\n"},
  {(char*)"IsClosed", PyvtkSplineWidget_IsClosed, 1,
   (char*)"V.IsClosed() -> int\nC++: int IsClosed()\n\nConvenience method to determine whether the spline is closed in a\ngeometric sense.  The widget may be set \"closed\" but still be\ngeometrically open (e.g., a straight line).\n"},
  {(char*)"GetSummedLength", PyvtkSplineWidget_GetSummedLength, 1,
   (char*)"V.GetSummedLength() -> float\nC++: double GetSummedLength()\n\nGet the approximate vs. the true arc length of the spline.\nCalculated as the summed lengths of the individual straight line\nsegments. Use SetResolution to control the accuracy.\n"},
  {(char*)"InitializeHandles", PyvtkSplineWidget_InitializeHandles, 1,
   (char*)"V.InitializeHandles(vtkPoints)\nC++: void InitializeHandles(vtkPoints *points)\n\nConvenience method to allocate and set the handles from a\nvtkPoints instance.  If the first and last points are the same,\nthe spline sets Closed to the on state and disregards the last\npoint, otherwise Closed remains unchanged.\n"},
  {(char*)"SetProcessEvents", PyvtkSplineWidget_SetProcessEvents, 1,
   (char*)"V.SetProcessEvents(int)\nC++: void SetProcessEvents(int)\n\nTurn on / off event processing for this widget. If off, the\nwidget will not respond to user interaction\n"},
  {(char*)"GetProcessEventsMinValue", PyvtkSplineWidget_GetProcessEventsMinValue, 1,
   (char*)"V.GetProcessEventsMinValue() -> int\nC++: int GetProcessEventsMinValue()\n\nTurn on / off event processing for this widget. If off, the\nwidget will not respond to user interaction\n"},
  {(char*)"GetProcessEventsMaxValue", PyvtkSplineWidget_GetProcessEventsMaxValue, 1,
   (char*)"V.GetProcessEventsMaxValue() -> int\nC++: int GetProcessEventsMaxValue()\n\nTurn on / off event processing for this widget. If off, the\nwidget will not respond to user interaction\n"},
  {(char*)"GetProcessEvents", PyvtkSplineWidget_GetProcessEvents, 1,
   (char*)"V.GetProcessEvents() -> int\nC++: int GetProcessEvents()\n\nTurn on / off event processing for this widget. If off, the\nwidget will not respond to user interaction\n"},
  {(char*)"ProcessEventsOn", PyvtkSplineWidget_ProcessEventsOn, 1,
   (char*)"V.ProcessEventsOn()\nC++: void ProcessEventsOn()\n\nTurn on / off event processing for this widget. If off, the\nwidget will not respond to user interaction\n"},
  {(char*)"ProcessEventsOff", PyvtkSplineWidget_ProcessEventsOff, 1,
   (char*)"V.ProcessEventsOff()\nC++: void ProcessEventsOff()\n\nTurn on / off event processing for this widget. If off, the\nwidget will not respond to user interaction\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSplineWidget_StaticNew()
{
  return vtkSplineWidget::New();
}

PyObject *PyVTKClass_vtkSplineWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSplineWidget_StaticNew,
    PyvtkSplineWidget_Methods,
    "vtkSplineWidget", modulename,
    NULL, NULL,
    PyvtkSplineWidget_Doc(),
    PyVTKClass_vtk3DWidgetNew(modulename));
  return cls;
}

const char **PyvtkSplineWidget_Doc()
{
  static const char *docstring[] = {
    "vtkSplineWidget - 3D widget for manipulating a spline\n\n",
    "Superclass: vtk3DWidget\n\n",
    "This 3D widget defines a spline that can be interactively placed in a\nscene. The spline has handles, the number of which can be changed,\nplus it can be picked on the spline itself to translate or rotate it\nin the scene. A nice feature of the object is that the\nvtkSplineWidget, like any 3D widget, will work with the current\ninteractor style. That is, if vtkSplineWidget does not handle an\nevent, the",
    "n all other registered observers (including the interactor\nstyle) have an opportunity to process the event. Otherwise, the\nvtkSplineWidget will terminate the processing of the event that it\nhandles.\n\nTo use this object, just invoke SetInteractor() with the argument of\nthe method a vtkRenderWindowInteractor.  You may also wish to invoke\n\"PlaceWidget()\" to initially position the widget. The interact",
    "or will\nact normally until the \"i\" key (for \"interactor\") is pressed, at\nwhich point the vtkSplineWidget will appear. (See superclass\ndocumentation for information about changing this behavior.) Events\nthat occur outside of the widget (i.e., no part of the widget is\npicked) are propagated to any other registered obsevers (such as the\ninteraction style).  Turn off the widget by pressing the \"i\" key",
    "\nagain (or invoke the Off() method).\n\nThe button actions and key modifiers are as follows for controlling\nthe widget:\n1) left button down on and drag one of the spherical handles to\n   change the shape of the spline: the handles act as \"control\n   points\".\n2) left button or middle button down on a line segment forming the\n   spline allows uniform translation of the widget.\n3) ctrl + middle button ",
    "down on the widget enables spinning of the\n   widget about its center.\n4) right button down on the widget enables scaling of the widget. By\n   moving the mouse \"up\" the render window the spline will be made\n   bigger; by moving \"down\" the render window the widget will be made\nsmaller.\n5) ctrl key + right button down on any handle will erase it providing\nthere will be two or more points remaining t",
    "o form a spline.\n6) shift key + right button down on any line segment will insert a\n   handle onto the spline at the cursor position.\n\nThe vtkSplineWidget has several methods that can be used in\nconjunction with other VTK objects. The Set/GetResolution() methods\ncontrol the number of subdivisions of the spline; the GetPolyData()\nmethod can be used to get the polygonal representation and can be\nuse",
    "d for things like seeding streamlines or probing other data sets.\nTypical usage of the widget is to make use of the\nStartInteractionEvent, InteractionEvent, and EndInteractionEvent\nevents. The InteractionEvent is called on mouse motion; the other two\nevents are called on button down and button up (either left or right\nbutton).\n\nSome additional features of this class include the ability to control\n",
    "the properties of the widget. You can set the properties of the\nselected and unselected representations of the spline. For example,\nyou can set the property for the handles and spline. In addition\nthere are methods to constrain the spline so that it is aligned with\na plane.  Note that a simple ruler widget can be derived by setting\nthe resolution to 1, the number of handles to 2, and calling the\nG",
    "etSummedLength method!\n\nCaveats:\n\nNote that handles and line can be picked even when they are \"behind\"\nother actors.  This is an intended feature and not a bug.\n\nSee Also:\n\nvtk3DWidget vtkBoxWidget vtkLineWidget vtkPointWidget vtkSphereWidget\nvtkImagePlaneWidget vtkImplicitPlaneWidget vtkPlaneWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSplineWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSplineWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSplineWidget", o) != 0)
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

