// python wrapper for vtkChartXY
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
#include "vtkChartXY.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkChartXY(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkChartXY(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkChartXYNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkChartXYNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkChartNew
extern "C" { PyObject *PyVTKClass_vtkChartNew(const char *); }
#define DECLARED_PyVTKClass_vtkChartNew
#endif

static const char **PyvtkChartXY_Doc();


static PyObject *
PyvtkChartXY_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

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
      tempr = op->vtkChartXY::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

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
      tempr = op->vtkChartXY::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkChartXY *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkChartXY::NewInstance();
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
PyvtkChartXY_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkChartXY *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkChartXY::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkChartXY::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContext2D *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    if (ap.IsBound())
      {
      tempr = op->Paint(temp0);
      }
    else
      {
      tempr = op->vtkChartXY::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_AddPlot_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int temp0;
  vtkPlot *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->AddPlot(temp0);
      }
    else
      {
      tempr = op->vtkChartXY::AddPlot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkChartXY_AddPlot_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = NULL;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
    {
    if (ap.IsBound())
      {
      tempr = op->AddPlot(temp0);
      }
    else
      {
      tempr = op->vtkChartXY::AddPlot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkChartXY_AddPlot_Methods[] = {
  {NULL, PyvtkChartXY_AddPlot_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkChartXY_AddPlot_s2, 1,
   (char*)"@O *vtkPlot"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkChartXY_AddPlot(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartXY_AddPlot_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddPlot");
  return NULL;
}



static PyObject *
PyvtkChartXY_RemovePlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkIdType temp0;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->RemovePlot(temp0);
      }
    else
      {
      tempr = op->vtkChartXY::RemovePlot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_ClearPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearPlots();
      }
    else
      {
      op->vtkChartXY::ClearPlots();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_GetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkIdType temp0;
  vtkPlot *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlot(temp0);
      }
    else
      {
      tempr = op->vtkChartXY::GetPlot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_GetNumberOfPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPlots();
      }
    else
      {
      tempr = op->vtkChartXY::GetNumberOfPlots();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_GetPlotCorner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotCorner");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlotCorner(temp0);
      }
    else
      {
      tempr = op->vtkChartXY::GetPlotCorner(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_SetPlotCorner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotCorner");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPlot") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPlotCorner(temp0, temp1);
      }
    else
      {
      op->vtkChartXY::SetPlotCorner(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int temp0;
  vtkAxis *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxis(temp0);
      }
    else
      {
      tempr = op->vtkChartXY::GetAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_SetShowLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowLegend(temp0);
      }
    else
      {
      op->vtkChartXY::SetShowLegend(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_GetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkChartLegend *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLegend();
      }
    else
      {
      tempr = op->vtkChartXY::GetLegend();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_GetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkTooltipItem *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTooltip();
      }
    else
      {
      tempr = op->vtkChartXY::GetTooltip();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_GetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfAxes();
      }
    else
      {
      tempr = op->vtkChartXY::GetNumberOfAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_RecalculateBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecalculateBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RecalculateBounds();
      }
    else
      {
      op->vtkChartXY::RecalculateBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_SetDrawAxesAtOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawAxesAtOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawAxesAtOrigin(temp0);
      }
    else
      {
      op->vtkChartXY::SetDrawAxesAtOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_GetDrawAxesAtOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawAxesAtOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDrawAxesAtOrigin();
      }
    else
      {
      tempr = op->vtkChartXY::GetDrawAxesAtOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_DrawAxesAtOriginOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAxesAtOriginOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawAxesAtOriginOn();
      }
    else
      {
      op->vtkChartXY::DrawAxesAtOriginOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_DrawAxesAtOriginOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAxesAtOriginOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawAxesAtOriginOff();
      }
    else
      {
      op->vtkChartXY::DrawAxesAtOriginOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_SetAutoAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoAxes(temp0);
      }
    else
      {
      op->vtkChartXY::SetAutoAxes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_GetAutoAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutoAxes();
      }
    else
      {
      tempr = op->vtkChartXY::GetAutoAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_AutoAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAxesOn();
      }
    else
      {
      op->vtkChartXY::AutoAxesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_AutoAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAxesOff();
      }
    else
      {
      op->vtkChartXY::AutoAxesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_SetHiddenAxisBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHiddenAxisBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHiddenAxisBorder(temp0);
      }
    else
      {
      op->vtkChartXY::SetHiddenAxisBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_GetHiddenAxisBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHiddenAxisBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHiddenAxisBorder();
      }
    else
      {
      tempr = op->vtkChartXY::GetHiddenAxisBorder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_SetForceAxesToBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceAxesToBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetForceAxesToBounds(temp0);
      }
    else
      {
      op->vtkChartXY::SetForceAxesToBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_GetForceAxesToBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceAxesToBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetForceAxesToBounds();
      }
    else
      {
      tempr = op->vtkChartXY::GetForceAxesToBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_ForceAxesToBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceAxesToBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceAxesToBoundsOn();
      }
    else
      {
      op->vtkChartXY::ForceAxesToBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_ForceAxesToBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceAxesToBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ForceAxesToBoundsOff();
      }
    else
      {
      op->vtkChartXY::ForceAxesToBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_SetBarWidthFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBarWidthFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBarWidthFraction(temp0);
      }
    else
      {
      op->vtkChartXY::SetBarWidthFraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartXY_GetBarWidthFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarWidthFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBarWidthFraction();
      }
    else
      {
      tempr = op->vtkChartXY::GetBarWidthFraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkChartXY_Methods[] = {
  {(char*)"GetClassName", PyvtkChartXY_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChartXY_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChartXY_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkChartXY\nC++: vtkChartXY *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChartXY_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChartXY\nC++: vtkChartXY *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkChartXY_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkChartXY_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn\n"},
  {(char*)"AddPlot", PyvtkChartXY_AddPlot, 1,
   (char*)"V.AddPlot(int) -> vtkPlot\nC++: virtual vtkPlot *AddPlot(int type)\nV.AddPlot(vtkPlot) -> int\nC++: virtual vtkIdType AddPlot(vtkPlot *plot)\n\nAdd a plot to the chart, defaults to using the name of the y\ncolumn\n"},
  {(char*)"RemovePlot", PyvtkChartXY_RemovePlot, 1,
   (char*)"V.RemovePlot(int) -> bool\nC++: virtual bool RemovePlot(vtkIdType index)\n\nRemove the plot at the specified index, returns true if\nsuccessful, false if the index was invalid.\n"},
  {(char*)"ClearPlots", PyvtkChartXY_ClearPlots, 1,
   (char*)"V.ClearPlots()\nC++: virtual void ClearPlots()\n\nRemove all plots from the chart.\n"},
  {(char*)"GetPlot", PyvtkChartXY_GetPlot, 1,
   (char*)"V.GetPlot(int) -> vtkPlot\nC++: virtual vtkPlot *GetPlot(vtkIdType index)\n\nGet the plot at the specified index, returns null if the index is\ninvalid.\n"},
  {(char*)"GetNumberOfPlots", PyvtkChartXY_GetNumberOfPlots, 1,
   (char*)"V.GetNumberOfPlots() -> int\nC++: virtual vtkIdType GetNumberOfPlots()\n\nGet the number of plots the chart contains.\n"},
  {(char*)"GetPlotCorner", PyvtkChartXY_GetPlotCorner, 1,
   (char*)"V.GetPlotCorner(vtkPlot) -> int\nC++: int GetPlotCorner(vtkPlot *plot)\n\nFigure out which quadrant the plot is in.\n"},
  {(char*)"SetPlotCorner", PyvtkChartXY_SetPlotCorner, 1,
   (char*)"V.SetPlotCorner(vtkPlot, int)\nC++: void SetPlotCorner(vtkPlot *plot, int corner)\n\nFigure out which quadrant the plot is in.\n"},
  {(char*)"GetAxis", PyvtkChartXY_GetAxis, 1,
   (char*)"V.GetAxis(int) -> vtkAxis\nC++: virtual vtkAxis *GetAxis(int axisIndex)\n\nGet the axis specified by axisIndex. This is specified with the\nvtkAxis position enum, valid values are vtkAxis::LEFT,\nvtkAxis::BOTTOM, vtkAxis::RIGHT and vtkAxis::TOP.\n"},
  {(char*)"SetShowLegend", PyvtkChartXY_SetShowLegend, 1,
   (char*)"V.SetShowLegend(bool)\nC++: virtual void SetShowLegend(bool visible)\n\nSet whether the chart should draw a legend.\n"},
  {(char*)"GetLegend", PyvtkChartXY_GetLegend, 1,
   (char*)"V.GetLegend() -> vtkChartLegend\nC++: virtual vtkChartLegend *GetLegend()\n\nGet the vtkChartLegend object that will be displayed by the\nchart.\n"},
  {(char*)"GetTooltip", PyvtkChartXY_GetTooltip, 1,
   (char*)"V.GetTooltip() -> vtkTooltipItem\nC++: virtual vtkTooltipItem *GetTooltip()\n\nGet the vtkTooltipItem object that will be displayed by the\nchart.\n"},
  {(char*)"GetNumberOfAxes", PyvtkChartXY_GetNumberOfAxes, 1,
   (char*)"V.GetNumberOfAxes() -> int\nC++: virtual vtkIdType GetNumberOfAxes()\n\nGet the number of axes in the current chart.\n"},
  {(char*)"RecalculateBounds", PyvtkChartXY_RecalculateBounds, 1,
   (char*)"V.RecalculateBounds()\nC++: virtual void RecalculateBounds()\n\nRequest that the chart recalculates the range of its axes.\nEspecially useful in applications after the parameters of plots\nhave been modified.\n"},
  {(char*)"SetDrawAxesAtOrigin", PyvtkChartXY_SetDrawAxesAtOrigin, 1,
   (char*)"V.SetDrawAxesAtOrigin(bool)\nC++: void SetDrawAxesAtOrigin(bool a)\n\nIf true then the axes will be drawn at the origin (scientific\nstyle).\n"},
  {(char*)"GetDrawAxesAtOrigin", PyvtkChartXY_GetDrawAxesAtOrigin, 1,
   (char*)"V.GetDrawAxesAtOrigin() -> bool\nC++: bool GetDrawAxesAtOrigin()\n\nIf true then the axes will be drawn at the origin (scientific\nstyle).\n"},
  {(char*)"DrawAxesAtOriginOn", PyvtkChartXY_DrawAxesAtOriginOn, 1,
   (char*)"V.DrawAxesAtOriginOn()\nC++: void DrawAxesAtOriginOn()\n\nIf true then the axes will be drawn at the origin (scientific\nstyle).\n"},
  {(char*)"DrawAxesAtOriginOff", PyvtkChartXY_DrawAxesAtOriginOff, 1,
   (char*)"V.DrawAxesAtOriginOff()\nC++: void DrawAxesAtOriginOff()\n\nIf true then the axes will be drawn at the origin (scientific\nstyle).\n"},
  {(char*)"SetAutoAxes", PyvtkChartXY_SetAutoAxes, 1,
   (char*)"V.SetAutoAxes(bool)\nC++: void SetAutoAxes(bool a)\n\nIf true then the axes will be turned on and off depending upon\nwhether any plots are in that corner. Defaults to true.\n"},
  {(char*)"GetAutoAxes", PyvtkChartXY_GetAutoAxes, 1,
   (char*)"V.GetAutoAxes() -> bool\nC++: bool GetAutoAxes()\n\nIf true then the axes will be turned on and off depending upon\nwhether any plots are in that corner. Defaults to true.\n"},
  {(char*)"AutoAxesOn", PyvtkChartXY_AutoAxesOn, 1,
   (char*)"V.AutoAxesOn()\nC++: void AutoAxesOn()\n\nIf true then the axes will be turned on and off depending upon\nwhether any plots are in that corner. Defaults to true.\n"},
  {(char*)"AutoAxesOff", PyvtkChartXY_AutoAxesOff, 1,
   (char*)"V.AutoAxesOff()\nC++: void AutoAxesOff()\n\nIf true then the axes will be turned on and off depending upon\nwhether any plots are in that corner. Defaults to true.\n"},
  {(char*)"SetHiddenAxisBorder", PyvtkChartXY_SetHiddenAxisBorder, 1,
   (char*)"V.SetHiddenAxisBorder(int)\nC++: void SetHiddenAxisBorder(int a)\n\nBorder size of the axes that are hidden (vtkAxis::GetVisible())\n"},
  {(char*)"GetHiddenAxisBorder", PyvtkChartXY_GetHiddenAxisBorder, 1,
   (char*)"V.GetHiddenAxisBorder() -> int\nC++: int GetHiddenAxisBorder()\n\nBorder size of the axes that are hidden (vtkAxis::GetVisible())\n"},
  {(char*)"SetForceAxesToBounds", PyvtkChartXY_SetForceAxesToBounds, 1,
   (char*)"V.SetForceAxesToBounds(bool)\nC++: void SetForceAxesToBounds(bool a)\n\n"},
  {(char*)"GetForceAxesToBounds", PyvtkChartXY_GetForceAxesToBounds, 1,
   (char*)"V.GetForceAxesToBounds() -> bool\nC++: bool GetForceAxesToBounds()\n\n"},
  {(char*)"ForceAxesToBoundsOn", PyvtkChartXY_ForceAxesToBoundsOn, 1,
   (char*)"V.ForceAxesToBoundsOn()\nC++: void ForceAxesToBoundsOn()\n\n"},
  {(char*)"ForceAxesToBoundsOff", PyvtkChartXY_ForceAxesToBoundsOff, 1,
   (char*)"V.ForceAxesToBoundsOff()\nC++: void ForceAxesToBoundsOff()\n\n"},
  {(char*)"SetBarWidthFraction", PyvtkChartXY_SetBarWidthFraction, 1,
   (char*)"V.SetBarWidthFraction(float)\nC++: void SetBarWidthFraction(float a)\n\nSet the width fraction for any bar charts drawn in this chart. It\nis assumed that all bar plots will use the same array for the X\naxis, and that this array is regularly spaced. The delta between\nthe first two x values is used to calculated the width of the\nbars, and subdivided between each bar. The default value is 0.8,\n1.0 would lead to bars that touch.\n"},
  {(char*)"GetBarWidthFraction", PyvtkChartXY_GetBarWidthFraction, 1,
   (char*)"V.GetBarWidthFraction() -> float\nC++: float GetBarWidthFraction()\n\nSet the width fraction for any bar charts drawn in this chart. It\nis assumed that all bar plots will use the same array for the X\naxis, and that this array is regularly spaced. The delta between\nthe first two x values is used to calculated the width of the\nbars, and subdivided between each bar. The default value is 0.8,\n1.0 would lead to bars that touch.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkChartXY_StaticNew()
{
  return vtkChartXY::New();
}

PyObject *PyVTKClass_vtkChartXYNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkChartXY_StaticNew,
    PyvtkChartXY_Methods,
    "vtkChartXY", modulename,
    NULL, NULL,
    PyvtkChartXY_Doc(),
    PyVTKClass_vtkChartNew(modulename));
  return cls;
}

const char **PyvtkChartXY_Doc()
{
  static const char *docstring[] = {
    "vtkChartXY - Factory class for drawing XY charts\n\n",
    "Superclass: vtkChart\n\n",
    "This class implements an XY chart.\n\nSee Also:\n\nvtkBarChartActor\n\n",
    NULL
  };

  return docstring;
}


static const char **PyvtkChartPlotData_Doc();

static PyMethodDef PyvtkChartPlotData_Methods[] = {
  {NULL, NULL, 0, NULL}
};

#ifndef DECLARED_PyvtkChartPlotData_Type
extern PyTypeObject PyvtkChartPlotData_Type;
#define DECLARED_PyvtkChartPlotData_Type
#endif


static PyObject *
PyvtkChartPlotData_vtkChartPlotData(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkChartPlotData");

  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    vtkChartPlotData *op = new vtkChartPlotData();

    result = PyVTKSpecialObject_New("vtkChartPlotData", op);
    }

  return result;
}

static PyMethodDef PyvtkChartPlotData_vtkChartPlotData_Methods[] = {
  {NULL, NULL, 0, NULL}
};

static PyMethodDef PyvtkChartPlotData_NewMethod = \
{ (char*)"vtkChartPlotData", PyvtkChartPlotData_vtkChartPlotData, 1,
  (char*)"" };

#if PY_VERSION_HEX >= 0x02020000
static PyObject *
PyvtkChartPlotData_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
    {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return NULL;
    }

  return PyvtkChartPlotData_vtkChartPlotData(NULL, args);
}
#endif

static void PyvtkChartPlotData_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  if (obj->vtk_ptr)
    {
    delete static_cast<vtkChartPlotData *>(obj->vtk_ptr);
    }
#if PY_MAJOR_VERSION >= 2
  PyObject_Del(self);
#else
  PyMem_DEL(self);
#endif
}

static long PyvtkChartPlotData_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", self->ob_type->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

PyTypeObject PyvtkChartPlotData_Type = {
  PyObject_HEAD_INIT(&PyType_Type)
  0,
  (char*)"vtkChartPlotData", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkChartPlotData_Delete, // tp_dealloc
  0, // tp_print
  0, // tp_getattr
  0, // tp_setattr
  0, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  0, // tp_as_number
  0, // tp_as_sequence
  0, // tp_as_mapping
  PyvtkChartPlotData_Hash, // tp_hash
  0, // tp_call
  0, // tp_str
#if PY_VERSION_HEX >= 0x02020000
  PyObject_GenericGetAttr, // tp_getattro
#else
  PyVTKSpecialObject_GetAttr, // tp_getattro
#endif
  0, // tp_setattro
  0, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  0, // tp_doc
  0, // tp_traverse
  0, // tp_clear
  0, // tp_richcompare
  0, // tp_weaklistoffset
#if PY_VERSION_HEX >= 0x02020000
  0, // tp_iter
  0, // tp_iternext
  PyvtkChartPlotData_Methods, // tp_methods
  0, // tp_members
  0, // tp_getset
  0, // tp_base
  0, // tp_dict
  0, // tp_descr_get
  0, // tp_descr_set
  0, // tp_dictoffset
  0, // tp_init
  0, // tp_alloc
  PyvtkChartPlotData_New, // tp_new
#if PY_VERSION_HEX >= 0x02030000
  PyObject_Del, // tp_free
#else
  _PyObject_Del, // tp_free
#endif
  0, // tp_is_gc
  0, // tp_bases
  0, // tp_mro
  0, // tp_cache
  0, // tp_subclasses
  0, // tp_weaklist
#endif
  VTK_WRAP_PYTHON_SUPRESS_UNINITIALIZED
};

static void *PyvtkChartPlotData_CCopy(const void *obj)
{
  if (obj)
    {
    return new vtkChartPlotData(*static_cast<const vtkChartPlotData*>(obj));
    }
  return 0;
}

static PyObject *PyvtkChartPlotData_TypeNew(const char *)
{
  return PyVTKSpecialType_New(
    &PyvtkChartPlotData_Type,
    PyvtkChartPlotData_Methods,
    PyvtkChartPlotData_vtkChartPlotData_Methods,
    &PyvtkChartPlotData_NewMethod,
    PyvtkChartPlotData_Doc(), &PyvtkChartPlotData_CCopy);
}

const char **PyvtkChartPlotData_Doc()
{
  static const char *docstring[] = {
    "vtkChartXY - Factory class for drawing XY charts\n\n",
    "This class implements an XY chart.\n\nSee Also:\n\nvtkBarChartActor\n\n",
    "V.vtkChartPlotData()\nC++: vtkChartPlotData()\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChartXY(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChartXYNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChartXY", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyvtkChartPlotData_TypeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChartPlotData", o) != 0)
    {
    Py_DECREF(o);
    }

}

