// python wrapper for vtkChart
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
#include "vtkStdString.h"
#include "vtkRect.h"
#include "vtkChart.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkChart(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkChart(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkChartNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkChartNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkChart_Doc();


static PyObject *
PyvtkChart_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

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
      tempr = op->vtkChart::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

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
      tempr = op->vtkChart::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkChart *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkChart::NewInstance();
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
PyvtkChart_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkContext2D *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    tempr = op->Paint(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_AddPlot_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

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
      tempr = op->vtkChart::AddPlot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkChart_AddPlot_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

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
      tempr = op->vtkChart::AddPlot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkChart_AddPlot_Methods[] = {
  {NULL, PyvtkChart_AddPlot_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkChart_AddPlot_s2, 1,
   (char*)"@O *vtkPlot"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkChart_AddPlot(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChart_AddPlot_Methods;
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
PyvtkChart_RemovePlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

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
      tempr = op->vtkChart::RemovePlot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_RemovePlotInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePlotInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkPlot *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
    {
    if (ap.IsBound())
      {
      tempr = op->RemovePlotInstance(temp0);
      }
    else
      {
      tempr = op->vtkChart::RemovePlotInstance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_ClearPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearPlots();
      }
    else
      {
      op->vtkChart::ClearPlots();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

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
      tempr = op->vtkChart::GetPlot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetNumberOfPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

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
      tempr = op->vtkChart::GetNumberOfPlots();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

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
      tempr = op->vtkChart::GetAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

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
      tempr = op->vtkChart::GetNumberOfAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_RecalculateBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecalculateBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RecalculateBounds();
      }
    else
      {
      op->vtkChart::RecalculateBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkAnnotationLink *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLink"))
    {
    if (ap.IsBound())
      {
      op->SetAnnotationLink(temp0);
      }
    else
      {
      op->vtkChart::SetAnnotationLink(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkAnnotationLink *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAnnotationLink();
      }
    else
      {
      tempr = op->vtkChart::GetAnnotationLink();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetGeometry_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGeometry(temp0, temp1);
      }
    else
      {
      op->vtkChart::SetGeometry(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkChart_SetGeometry_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGeometry(temp0);
      }
    else
      {
      op->vtkChart::SetGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkChart_SetGeometry(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkChart_SetGeometry_s1(self, args);
    case 1:
      return PyvtkChart_SetGeometry_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGeometry");
  return NULL;
}



static PyObject *
PyvtkChart_GetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGeometry();
      }
    else
      {
      tempr = op->vtkChart::GetGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPoint1(temp0, temp1);
      }
    else
      {
      op->vtkChart::SetPoint1(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkChart_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPoint1(temp0);
      }
    else
      {
      op->vtkChart::SetPoint1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkChart_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkChart_SetPoint1_s1(self, args);
    case 1:
      return PyvtkChart_SetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return NULL;
}



static PyObject *
PyvtkChart_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint1();
      }
    else
      {
      tempr = op->vtkChart::GetPoint1();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPoint2(temp0, temp1);
      }
    else
      {
      op->vtkChart::SetPoint2(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkChart_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPoint2(temp0);
      }
    else
      {
      op->vtkChart::SetPoint2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkChart_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkChart_SetPoint2_s1(self, args);
    case 1:
      return PyvtkChart_SetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return NULL;
}



static PyObject *
PyvtkChart_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint2();
      }
    else
      {
      tempr = op->vtkChart::GetPoint2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetShowLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

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
      op->vtkChart::SetShowLegend(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetShowLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShowLegend();
      }
    else
      {
      tempr = op->vtkChart::GetShowLegend();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

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
      tempr = op->vtkChart::GetLegend();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitle(temp0);
      }
    else
      {
      op->vtkChart::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitle();
      }
    else
      {
      tempr = op->vtkChart::GetTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetTitleProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitleProperties();
      }
    else
      {
      tempr = op->vtkChart::GetTitleProperties();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetBottomBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBottomBorder(temp0);
      }
    else
      {
      op->vtkChart::SetBottomBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetTopBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTopBorder(temp0);
      }
    else
      {
      op->vtkChart::SetTopBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetLeftBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLeftBorder(temp0);
      }
    else
      {
      op->vtkChart::SetLeftBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetRightBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRightBorder(temp0);
      }
    else
      {
      op->vtkChart::SetRightBorder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetBorders(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkChart::SetBorders(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkRectf *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf"))
    {
    if (ap.IsBound())
      {
      op->SetSize(*temp0);
      }
    else
      {
      op->vtkChart::SetSize(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChart_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkRectf tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSize();
      }
    else
      {
      tempr = op->vtkChart::GetSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetAutoSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoSize(temp0);
      }
    else
      {
      op->vtkChart::SetAutoSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetAutoSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutoSize();
      }
    else
      {
      tempr = op->vtkChart::GetAutoSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetRenderEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRenderEmpty(temp0);
      }
    else
      {
      op->vtkChart::SetRenderEmpty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetRenderEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderEmpty();
      }
    else
      {
      tempr = op->vtkChart::GetRenderEmpty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetActionToButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActionToButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetActionToButton(temp0, temp1);
      }
    else
      {
      op->vtkChart::SetActionToButton(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetActionToButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActionToButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActionToButton(temp0);
      }
    else
      {
      tempr = op->vtkChart::GetActionToButton(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChart_SetClickActionToButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClickActionToButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetClickActionToButton(temp0, temp1);
      }
    else
      {
      op->vtkChart::SetClickActionToButton(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChart_GetClickActionToButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClickActionToButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClickActionToButton(temp0);
      }
    else
      {
      tempr = op->vtkChart::GetClickActionToButton(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkChart_Methods[] = {
  {(char*)"GetClassName", PyvtkChart_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChart_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChart_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkChart\nC++: vtkChart *NewInstance()\n\n"},
  {(char*)"Paint", PyvtkChart_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn\n"},
  {(char*)"AddPlot", PyvtkChart_AddPlot, 1,
   (char*)"V.AddPlot(int) -> vtkPlot\nC++: virtual vtkPlot *AddPlot(int type)\nV.AddPlot(vtkPlot) -> int\nC++: virtual vtkIdType AddPlot(vtkPlot *plot)\n\nAdd a plot to the chart, defaults to using the name of the y\ncolumn\n"},
  {(char*)"RemovePlot", PyvtkChart_RemovePlot, 1,
   (char*)"V.RemovePlot(int) -> bool\nC++: virtual bool RemovePlot(vtkIdType index)\n\nRemove the plot at the specified index, returns true if\nsuccessful, false if the index was invalid.\n"},
  {(char*)"RemovePlotInstance", PyvtkChart_RemovePlotInstance, 1,
   (char*)"V.RemovePlotInstance(vtkPlot) -> bool\nC++: virtual bool RemovePlotInstance(vtkPlot *plot)\n\nRemove the given plot.  Returns true if successful, false if the\nplot was not contained in this chart.  Note, the base\nimplementation of this method performs a linear search to locate\nthe plot.\n"},
  {(char*)"ClearPlots", PyvtkChart_ClearPlots, 1,
   (char*)"V.ClearPlots()\nC++: virtual void ClearPlots()\n\nRemove all plots from the chart.\n"},
  {(char*)"GetPlot", PyvtkChart_GetPlot, 1,
   (char*)"V.GetPlot(int) -> vtkPlot\nC++: virtual vtkPlot *GetPlot(vtkIdType index)\n\nGet the plot at the specified index, returns null if the index is\ninvalid.\n"},
  {(char*)"GetNumberOfPlots", PyvtkChart_GetNumberOfPlots, 1,
   (char*)"V.GetNumberOfPlots() -> int\nC++: virtual vtkIdType GetNumberOfPlots()\n\nGet the number of plots the chart contains.\n"},
  {(char*)"GetAxis", PyvtkChart_GetAxis, 1,
   (char*)"V.GetAxis(int) -> vtkAxis\nC++: virtual vtkAxis *GetAxis(int axisIndex)\n\nGet the axis specified by axisIndex. 0 is x, 1 is y. This should\nprobably be improved either using a string or enum to select the\naxis.\n"},
  {(char*)"GetNumberOfAxes", PyvtkChart_GetNumberOfAxes, 1,
   (char*)"V.GetNumberOfAxes() -> int\nC++: virtual vtkIdType GetNumberOfAxes()\n\nGet the number of axes in the current chart.\n"},
  {(char*)"RecalculateBounds", PyvtkChart_RecalculateBounds, 1,
   (char*)"V.RecalculateBounds()\nC++: virtual void RecalculateBounds()\n\nRequest that the chart recalculates the range of its axes.\nEspecially useful in applications after the parameters of plots\nhave been modified.\n"},
  {(char*)"SetAnnotationLink", PyvtkChart_SetAnnotationLink, 1,
   (char*)"V.SetAnnotationLink(vtkAnnotationLink)\nC++: virtual void SetAnnotationLink(vtkAnnotationLink *link)\n\nSet the vtkAnnotationLink for the chart.\n"},
  {(char*)"GetAnnotationLink", PyvtkChart_GetAnnotationLink, 1,
   (char*)"V.GetAnnotationLink() -> vtkAnnotationLink\nC++: vtkAnnotationLink *GetAnnotationLink()\n\nGet the vtkAnnotationLink for the chart.\n"},
  {(char*)"SetGeometry", PyvtkChart_SetGeometry, 1,
   (char*)"V.SetGeometry(int, int)\nC++: void SetGeometry(int, int)\nV.SetGeometry((int, int))\nC++: void SetGeometry(int a[2])\n\n"},
  {(char*)"GetGeometry", PyvtkChart_GetGeometry, 1,
   (char*)"V.GetGeometry() -> (int, int)\nC++: int *GetGeometry()\n\n"},
  {(char*)"SetPoint1", PyvtkChart_SetPoint1, 1,
   (char*)"V.SetPoint1(int, int)\nC++: void SetPoint1(int, int)\nV.SetPoint1((int, int))\nC++: void SetPoint1(int a[2])\n\n"},
  {(char*)"GetPoint1", PyvtkChart_GetPoint1, 1,
   (char*)"V.GetPoint1() -> (int, int)\nC++: int *GetPoint1()\n\n"},
  {(char*)"SetPoint2", PyvtkChart_SetPoint2, 1,
   (char*)"V.SetPoint2(int, int)\nC++: void SetPoint2(int, int)\nV.SetPoint2((int, int))\nC++: void SetPoint2(int a[2])\n\n"},
  {(char*)"GetPoint2", PyvtkChart_GetPoint2, 1,
   (char*)"V.GetPoint2() -> (int, int)\nC++: int *GetPoint2()\n\n"},
  {(char*)"SetShowLegend", PyvtkChart_SetShowLegend, 1,
   (char*)"V.SetShowLegend(bool)\nC++: virtual void SetShowLegend(bool visible)\n\nSet/get whether the chart should draw a legend.\n"},
  {(char*)"GetShowLegend", PyvtkChart_GetShowLegend, 1,
   (char*)"V.GetShowLegend() -> bool\nC++: virtual bool GetShowLegend()\n\nSet/get whether the chart should draw a legend.\n"},
  {(char*)"GetLegend", PyvtkChart_GetLegend, 1,
   (char*)"V.GetLegend() -> vtkChartLegend\nC++: virtual vtkChartLegend *GetLegend()\n\nGet the legend for the chart, if available. Can return NULL if\nthere is no legend.\n"},
  {(char*)"SetTitle", PyvtkChart_SetTitle, 1,
   (char*)"V.SetTitle(string)\nC++: virtual void SetTitle(const vtkStdString &title)\n\nGet/set the title text of the chart.\n"},
  {(char*)"GetTitle", PyvtkChart_GetTitle, 1,
   (char*)"V.GetTitle() -> string\nC++: virtual vtkStdString GetTitle()\n\nGet/set the title text of the chart.\n"},
  {(char*)"GetTitleProperties", PyvtkChart_GetTitleProperties, 1,
   (char*)"V.GetTitleProperties() -> vtkTextProperty\nC++: vtkTextProperty *GetTitleProperties()\n\nGet the vtkTextProperty that governs how the chart title is\ndisplayed.\n"},
  {(char*)"SetBottomBorder", PyvtkChart_SetBottomBorder, 1,
   (char*)"V.SetBottomBorder(int)\nC++: void SetBottomBorder(int border)\n\nSet/get the borders of the chart (space in pixels around the\nchart).\n"},
  {(char*)"SetTopBorder", PyvtkChart_SetTopBorder, 1,
   (char*)"V.SetTopBorder(int)\nC++: void SetTopBorder(int border)\n\nSet/get the borders of the chart (space in pixels around the\nchart).\n"},
  {(char*)"SetLeftBorder", PyvtkChart_SetLeftBorder, 1,
   (char*)"V.SetLeftBorder(int)\nC++: void SetLeftBorder(int border)\n\nSet/get the borders of the chart (space in pixels around the\nchart).\n"},
  {(char*)"SetRightBorder", PyvtkChart_SetRightBorder, 1,
   (char*)"V.SetRightBorder(int)\nC++: void SetRightBorder(int border)\n\nSet/get the borders of the chart (space in pixels around the\nchart).\n"},
  {(char*)"SetBorders", PyvtkChart_SetBorders, 1,
   (char*)"V.SetBorders(int, int, int, int)\nC++: void SetBorders(int left, int bottom, int right, int top)\n\nSet/get the borders of the chart (space in pixels around the\nchart).\n"},
  {(char*)"SetSize", PyvtkChart_SetSize, 1,
   (char*)"V.SetSize(vtkRectf)\nC++: void SetSize(const vtkRectf &rect)\n\nSet the size of the chart. The rect argument specifies the bottom\ncorner, width and height of the chart. The borders will be laid\nout within the specified rectangle.\n"},
  {(char*)"GetSize", PyvtkChart_GetSize, 1,
   (char*)"V.GetSize() -> vtkRectf\nC++: vtkRectf GetSize()\n\nGet the current size of the chart.\n"},
  {(char*)"SetAutoSize", PyvtkChart_SetAutoSize, 1,
   (char*)"V.SetAutoSize(bool)\nC++: void SetAutoSize(bool a)\n\nSet/get whether the chart should automatically resize to fill the\ncurrent render window. Default is true.\n"},
  {(char*)"GetAutoSize", PyvtkChart_GetAutoSize, 1,
   (char*)"V.GetAutoSize() -> bool\nC++: bool GetAutoSize()\n\nSet/get whether the chart should automatically resize to fill the\ncurrent render window. Default is true.\n"},
  {(char*)"SetRenderEmpty", PyvtkChart_SetRenderEmpty, 1,
   (char*)"V.SetRenderEmpty(bool)\nC++: void SetRenderEmpty(bool a)\n\nSet/get whether the chart should still render its axes and\ndecorations even if the chart has no visible plots. Default is\nfalse (do not render an empty plot).\n\nNote that if you wish to render axes for an empty plot you should\nalso set AutoSize to false, as that will hide all axes for an\nempty plot.\n"},
  {(char*)"GetRenderEmpty", PyvtkChart_GetRenderEmpty, 1,
   (char*)"V.GetRenderEmpty() -> bool\nC++: bool GetRenderEmpty()\n\nSet/get whether the chart should still render its axes and\ndecorations even if the chart has no visible plots. Default is\nfalse (do not render an empty plot).\n\nNote that if you wish to render axes for an empty plot you should\nalso set AutoSize to false, as that will hide all axes for an\nempty plot.\n"},
  {(char*)"SetActionToButton", PyvtkChart_SetActionToButton, 1,
   (char*)"V.SetActionToButton(int, int)\nC++: virtual void SetActionToButton(int action, int button)\n\nAssign action types to mouse buttons. Available action types are\nPAN, ZOOM and SELECT in the chart enum, the default assigns the\nLEFT_BUTTON to PAN, MIDDLE_BUTTON to ZOOM and RIGHT_BUTTON to\nSELECT. Valid mouse enums are in the vtkContextMouseEvent class.\n\nNote that only one mouse button can be assigned to each action,\nan action will have -1 (invalid button) assigned if it had the\nsame button as the one assigned to a different action.\n"},
  {(char*)"GetActionToButton", PyvtkChart_GetActionToButton, 1,
   (char*)"V.GetActionToButton(int) -> int\nC++: virtual int GetActionToButton(int action)\n\nGet the mouse button associated with the supplied action. The\nmouse button enum is from vtkContextMouseEvent, and the action\nenum is from vtkChart.\n"},
  {(char*)"SetClickActionToButton", PyvtkChart_SetClickActionToButton, 1,
   (char*)"V.SetClickActionToButton(int, int)\nC++: virtual void SetClickActionToButton(int action, int button)\n\nAssign action types to single mouse clicks. Available action\ntypes are SELECT and NOTIFY in the chart enum. The default\nassigns the LEFT_BUTTON to NOTIFY, and the RIGHT_BUTTON to\nSELECT.\n"},
  {(char*)"GetClickActionToButton", PyvtkChart_GetClickActionToButton, 1,
   (char*)"V.GetClickActionToButton(int) -> int\nC++: virtual int GetClickActionToButton(int action)\n\nGet the mouse button associated with the supplied click action.\nThe mouse button enum is from vtkContextMouseEvent, and the\naction enum is from vtkChart.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkChartNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkChart_Methods,
    "vtkChart", modulename,
    NULL, NULL,
    PyvtkChart_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"LINE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"POINTS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"BAR", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"STACKED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"PAN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"ZOOM", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"SELECT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"NOTIFY", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkChart_Doc()
{
  static const char *docstring[] = {
    "vtkChart - Factory class for drawing 2D charts\n\n",
    "Superclass: vtkContextItem\n\n",
    "This defines the interface for a chart.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChart(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChartNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChart", o) != 0)
    {
    Py_DECREF(o);
    }

}

