// python wrapper for vtkPlot
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
#include "vtkRect.h"
#include "vtkStdString.h"
#include "vtkVector.h"
#include "vtkVariant.h"
#include "vtkPlot.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPlot(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPlot(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPlotNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPlotNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkContextItemNew
extern "C" { PyObject *PyVTKClass_vtkContextItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkContextItemNew
#endif

static const char **PyvtkPlot_Doc();


static PyObject *
PyvtkPlot_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

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
      tempr = op->vtkPlot::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

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
      tempr = op->vtkPlot::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkPlot *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPlot::NewInstance();
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
PyvtkPlot_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkContext2D *temp0 = NULL;
  vtkRectf *temp1 = NULL;
  PyObject *pobj1 = NULL;
  int temp2;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkContext2D") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkRectf") &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->PaintLegend(temp0, *temp1, temp2);
      }
    else
      {
      tempr = op->vtkPlot::PaintLegend(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlot_SetTooltipLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTooltipLabelFormat(temp0);
      }
    else
      {
      op->vtkPlot::SetTooltipLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetTooltipLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTooltipLabelFormat();
      }
    else
      {
      tempr = op->vtkPlot::GetTooltipLabelFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetTooltipLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTooltipLabel(*temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkPlot::GetTooltipLabel(*temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPlot_SelectPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkVector2f *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkVector2f *temp1 = NULL;
  PyObject *pobj1 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2f"))
    {
    if (ap.IsBound())
      {
      tempr = op->SelectPoints(*temp0, *temp1);
      }
    else
      {
      tempr = op->vtkPlot::SelectPoints(*temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlot_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPlot::SetColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlot_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

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
      op->SetColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPlot::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlot_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPlot_SetColor_s1(self, args);
    case 3:
      return PyvtkPlot_SetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkPlot_GetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetColor(temp0);
      }
    else
      {
      op->vtkPlot::GetColor(temp0);
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
PyvtkPlot_GetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  unsigned char temp0[3];
  unsigned char save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetColor(temp0);
      }
    else
      {
      op->vtkPlot::GetColor(temp0);
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

static PyMethodDef PyvtkPlot_GetColor_Methods[] = {
  {NULL, PyvtkPlot_GetColor_s1, 1,
   (char*)"@O *d"},
  {NULL, PyvtkPlot_GetColor_s2, 1,
   (char*)"@O *b"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPlot_GetColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlot_GetColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetColor");
  return NULL;
}



static PyObject *
PyvtkPlot_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWidth(temp0);
      }
    else
      {
      op->vtkPlot::SetWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidth();
      }
    else
      {
      tempr = op->vtkPlot::GetWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkPen *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPen();
      }
    else
      {
      tempr = op->vtkPlot::GetPen();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkBrush *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBrush();
      }
    else
      {
      tempr = op->vtkPlot::GetBrush();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabel(temp0);
      }
    else
      {
      op->vtkPlot::SetLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetLabel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabel();
      }
    else
      {
      tempr = op->vtkPlot::GetLabel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPlot_GetLabel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkIdType temp0;
  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabel(temp0);
      }
    else
      {
      tempr = op->vtkPlot::GetLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPlot_GetLabel(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPlot_GetLabel_s1(self, args);
    case 1:
      return PyvtkPlot_GetLabel_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetLabel");
  return NULL;
}



static PyObject *
PyvtkPlot_SetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetLabels(temp0);
      }
    else
      {
      op->vtkPlot::SetLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabels();
      }
    else
      {
      tempr = op->vtkPlot::GetLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfLabels();
      }
    else
      {
      tempr = op->vtkPlot::GetNumberOfLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetIndexedLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexedLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetIndexedLabels(temp0);
      }
    else
      {
      op->vtkPlot::SetIndexedLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetIndexedLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIndexedLabels();
      }
    else
      {
      tempr = op->vtkPlot::GetIndexedLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkContextMapper2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetData();
      }
    else
      {
      tempr = op->vtkPlot::GetData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetUseIndexForXSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIndexForXSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseIndexForXSeries();
      }
    else
      {
      tempr = op->vtkPlot::GetUseIndexForXSeries();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetUseIndexForXSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIndexForXSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseIndexForXSeries(temp0);
      }
    else
      {
      op->vtkPlot::SetUseIndexForXSeries(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkPlot::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlot_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkTable *temp0 = NULL;
  vtkStdString temp1;
  vtkStdString temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPlot::SetInput(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlot_SetInput_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkTable *temp0 = NULL;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPlot::SetInput(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPlot_SetInput_Methods[] = {
  {NULL, PyvtkPlot_SetInput_s2, 1,
   (char*)"@Oss *vtkTable"},
  {NULL, PyvtkPlot_SetInput_s3, 1,
   (char*)"@OLL *vtkTable"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPlot_SetInput(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlot_SetInput_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPlot_SetInput_s1(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}



static PyObject *
PyvtkPlot_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkPlot::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetInputArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  int temp0;
  vtkStdString temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputArray(temp0, temp1);
      }
    else
      {
      op->vtkPlot::SetInputArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
    {
    if (ap.IsBound())
      {
      op->SetSelection(temp0);
      }
    else
      {
      op->vtkPlot::SetSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkIdTypeArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelection();
      }
    else
      {
      tempr = op->vtkPlot::GetSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkAxis *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXAxis();
      }
    else
      {
      tempr = op->vtkPlot::GetXAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkAxis *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAxis"))
    {
    if (ap.IsBound())
      {
      op->SetXAxis(temp0);
      }
    else
      {
      op->vtkPlot::SetXAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkAxis *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYAxis();
      }
    else
      {
      tempr = op->vtkPlot::GetYAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_SetYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkAxis *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAxis"))
    {
    if (ap.IsBound())
      {
      op->SetYAxis(temp0);
      }
    else
      {
      op->vtkPlot::SetYAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlot_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkPlot::GetBounds(temp0);
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
PyvtkPlot_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStdString temp0;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetProperty(temp0, *temp1);
      }
    else
      {
      op->vtkPlot::SetProperty(temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlot_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlot *op = static_cast<vtkPlot *>(vp);

  vtkStdString temp0;
  vtkVariant tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProperty(temp0);
      }
    else
      {
      tempr = op->vtkPlot::GetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}

static PyMethodDef PyvtkPlot_Methods[] = {
  {(char*)"GetClassName", PyvtkPlot_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlot_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlot_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPlot\nC++: vtkPlot *NewInstance()\n\n"},
  {(char*)"PaintLegend", PyvtkPlot_PaintLegend, 1,
   (char*)"V.PaintLegend(vtkContext2D, vtkRectf, int) -> bool\nC++: virtual bool PaintLegend(vtkContext2D *painter,\n    const vtkRectf &rect, int legendIndex)\n\nPaint legend event for the plot, called whenever the legend needs\nthe plot items symbol/mark/line drawn. A rect is supplied with\nthe lower left corner of the rect (elements 0 and 1) and with\nwidth x height (elements 2 and 3). The plot can choose how to\nfill the space supplied. The index is used by Plots that return\nmore than one label.\n"},
  {(char*)"SetTooltipLabelFormat", PyvtkPlot_SetTooltipLabelFormat, 1,
   (char*)"V.SetTooltipLabelFormat(string)\nC++: virtual void SetTooltipLabelFormat(const vtkStdString &label)\n\nSets/gets a printf-style string to build custom tooltip labels\nfrom. An empty string generates the default tooltip labels. The\nfollowing case-sensitive format tags (without quotes) are\nrecognized:\n  '%x' The X value of the plot element\n  '%y' The Y value of the plot element\n  '%i' The IndexedLabels entry for the plot element\n  '%l' The value of the plot's GetLabel() function\n  '%s' (vtkPlotBar only) The Labels entry for the bar segment Any\nother characters or unrecognized format tags are printed in the\ntooltip label verbatim.\n"},
  {(char*)"GetTooltipLabelFormat", PyvtkPlot_GetTooltipLabelFormat, 1,
   (char*)"V.GetTooltipLabelFormat() -> string\nC++: virtual vtkStdString GetTooltipLabelFormat()\n\nSets/gets a printf-style string to build custom tooltip labels\nfrom. An empty string generates the default tooltip labels. The\nfollowing case-sensitive format tags (without quotes) are\nrecognized:\n  '%x' The X value of the plot element\n  '%y' The Y value of the plot element\n  '%i' The IndexedLabels entry for the plot element\n  '%l' The value of the plot's GetLabel() function\n  '%s' (vtkPlotBar only) The Labels entry for the bar segment Any\nother characters or unrecognized format tags are printed in the\ntooltip label verbatim.\n"},
  {(char*)"GetTooltipLabel", PyvtkPlot_GetTooltipLabel, 1,
   (char*)"V.GetTooltipLabel(vtkVector2f, int, int) -> string\nC++: virtual vtkStdString GetTooltipLabel(\n    const vtkVector2f &plotPos, vtkIdType seriesIndex,\n    vtkIdType segmentIndex)\n\nGenerate and return the tooltip label string for this plot The\nsegmentIndex parameter is ignored, except for vtkPlotBar\n"},
  {(char*)"SelectPoints", PyvtkPlot_SelectPoints, 1,
   (char*)"V.SelectPoints(vtkVector2f, vtkVector2f) -> bool\nC++: virtual bool SelectPoints(const vtkVector2f &min,\n    const vtkVector2f &max)\n\nSelect all points in the specified rectangle.\n"},
  {(char*)"SetColor", PyvtkPlot_SetColor, 1,
   (char*)"V.SetColor(int, int, int, int)\nC++: virtual void SetColor(unsigned char r, unsigned char g,\n    unsigned char b, unsigned char a)\nV.SetColor(float, float, float)\nC++: virtual void SetColor(double r, double g, double b)\n\nSet the plot color\n"},
  {(char*)"GetColor", PyvtkPlot_GetColor, 1,
   (char*)"V.GetColor([float, float, float])\nC++: virtual void GetColor(double rgb[3])\nV.GetColor([int, int, int])\nC++: void GetColor(unsigned char rgb[3])\n\nSet the plot color\n"},
  {(char*)"SetWidth", PyvtkPlot_SetWidth, 1,
   (char*)"V.SetWidth(float)\nC++: virtual void SetWidth(float width)\n\nSet the width of the line.\n"},
  {(char*)"GetWidth", PyvtkPlot_GetWidth, 1,
   (char*)"V.GetWidth() -> float\nC++: virtual float GetWidth()\n\nGet the width of the line.\n"},
  {(char*)"GetPen", PyvtkPlot_GetPen, 1,
   (char*)"V.GetPen() -> vtkPen\nC++: vtkPen *GetPen()\n\nGet a pointer to the vtkPen object that controls the was this\nplot draws lines.\n"},
  {(char*)"GetBrush", PyvtkPlot_GetBrush, 1,
   (char*)"V.GetBrush() -> vtkBrush\nC++: vtkBrush *GetBrush()\n\nGet a pointer to the vtkBrush object that controls the was this\nplot fills shapes.\n"},
  {(char*)"SetLabel", PyvtkPlot_SetLabel, 1,
   (char*)"V.SetLabel(string)\nC++: virtual void SetLabel(const vtkStdString &label)\n\nSet the label of this plot.\n"},
  {(char*)"GetLabel", PyvtkPlot_GetLabel, 1,
   (char*)"V.GetLabel() -> string\nC++: virtual vtkStdString GetLabel()\nV.GetLabel(int) -> string\nC++: vtkStdString GetLabel(vtkIdType index)\n\nGet the label of this plot.\n"},
  {(char*)"SetLabels", PyvtkPlot_SetLabels, 1,
   (char*)"V.SetLabels(vtkStringArray)\nC++: virtual void SetLabels(vtkStringArray *labels)\n\nSet the plot labels, these are used for stacked chart variants,\nwith the index referring to the stacking index.\n"},
  {(char*)"GetLabels", PyvtkPlot_GetLabels, 1,
   (char*)"V.GetLabels() -> vtkStringArray\nC++: virtual vtkStringArray *GetLabels()\n\nGet the plot labels. If this array has a length greater than 1\nthe index refers to the stacked objects in the plot. See\nvtkPlotBar for example.\n"},
  {(char*)"GetNumberOfLabels", PyvtkPlot_GetNumberOfLabels, 1,
   (char*)"V.GetNumberOfLabels() -> int\nC++: virtual int GetNumberOfLabels()\n\nGet the number of labels associated with this plot.\n"},
  {(char*)"SetIndexedLabels", PyvtkPlot_SetIndexedLabels, 1,
   (char*)"V.SetIndexedLabels(vtkStringArray)\nC++: void SetIndexedLabels(vtkStringArray *labels)\n\nSet indexed labels for the plot. If set, this array can be used\nto provide custom labels for each point in a plot. This array\nshould be the same length as the points array. Default is null\n(no indexed labels).\n"},
  {(char*)"GetIndexedLabels", PyvtkPlot_GetIndexedLabels, 1,
   (char*)"V.GetIndexedLabels() -> vtkStringArray\nC++: virtual vtkStringArray *GetIndexedLabels()\n\nGet the indexed labels array.\n"},
  {(char*)"GetData", PyvtkPlot_GetData, 1,
   (char*)"V.GetData() -> vtkContextMapper2D\nC++: vtkContextMapper2D *GetData()\n\nGet the data object that the plot will draw.\n"},
  {(char*)"GetUseIndexForXSeries", PyvtkPlot_GetUseIndexForXSeries, 1,
   (char*)"V.GetUseIndexForXSeries() -> bool\nC++: bool GetUseIndexForXSeries()\n\nUse the Y array index for the X value. If true any X column\nsetting will be ignored, and the X values will simply be the\nindex of the Y column.\n"},
  {(char*)"SetUseIndexForXSeries", PyvtkPlot_SetUseIndexForXSeries, 1,
   (char*)"V.SetUseIndexForXSeries(bool)\nC++: void SetUseIndexForXSeries(bool a)\n\nUse the Y array index for the X value. If true any X column\nsetting will be ignored, and the X values will simply be the\nindex of the Y column.\n"},
  {(char*)"SetInput", PyvtkPlot_SetInput, 1,
   (char*)"V.SetInput(vtkTable)\nC++: virtual void SetInput(vtkTable *table)\nV.SetInput(vtkTable, string, string)\nC++: virtual void SetInput(vtkTable *table,\n    const vtkStdString &xColumn, const vtkStdString &yColumn)\nV.SetInput(vtkTable, int, int)\nC++: void SetInput(vtkTable *table, vtkIdType xColumn,\n    vtkIdType yColumn)\n\nThis is a convenience function to set the input table and the x,\ny column for the plot.\n"},
  {(char*)"GetInput", PyvtkPlot_GetInput, 1,
   (char*)"V.GetInput() -> vtkTable\nC++: virtual vtkTable *GetInput()\n\nGet the input table used by the plot.\n"},
  {(char*)"SetInputArray", PyvtkPlot_SetInputArray, 1,
   (char*)"V.SetInputArray(int, string)\nC++: virtual void SetInputArray(int index,\n    const vtkStdString &name)\n\nConvenience function to set the input arrays. For most plots\nindex 0 is the x axis, and index 1 is the y axis. The name is the\nname of the column in the vtkTable.\n"},
  {(char*)"SetSelection", PyvtkPlot_SetSelection, 1,
   (char*)"V.SetSelection(vtkIdTypeArray)\nC++: virtual void SetSelection(vtkIdTypeArray *id)\n\n"},
  {(char*)"GetSelection", PyvtkPlot_GetSelection, 1,
   (char*)"V.GetSelection() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetSelection()\n\n"},
  {(char*)"GetXAxis", PyvtkPlot_GetXAxis, 1,
   (char*)"V.GetXAxis() -> vtkAxis\nC++: vtkAxis *GetXAxis()\n\nGet/set the X axis associated with this plot.\n"},
  {(char*)"SetXAxis", PyvtkPlot_SetXAxis, 1,
   (char*)"V.SetXAxis(vtkAxis)\nC++: virtual void SetXAxis(vtkAxis *axis)\n\nGet/set the X axis associated with this plot.\n"},
  {(char*)"GetYAxis", PyvtkPlot_GetYAxis, 1,
   (char*)"V.GetYAxis() -> vtkAxis\nC++: vtkAxis *GetYAxis()\n\nGet/set the Y axis associated with this plot.\n"},
  {(char*)"SetYAxis", PyvtkPlot_SetYAxis, 1,
   (char*)"V.SetYAxis(vtkAxis)\nC++: virtual void SetYAxis(vtkAxis *axis)\n\nGet/set the Y axis associated with this plot.\n"},
  {(char*)"GetBounds", PyvtkPlot_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nGet the bounds for this plot as (Xmin, Xmax, Ymin, Ymax).\n"},
  {(char*)"SetProperty", PyvtkPlot_SetProperty, 1,
   (char*)"V.SetProperty(string, vtkVariant)\nC++: virtual void SetProperty(const vtkStdString &property,\n    const vtkVariant &var)\n\nA General setter/getter that should be overridden. It can\nsilently drop options, case is important\n"},
  {(char*)"GetProperty", PyvtkPlot_GetProperty, 1,
   (char*)"V.GetProperty(string) -> vtkVariant\nC++: virtual vtkVariant GetProperty(const vtkStdString &property)\n\nA General setter/getter that should be overridden. It can\nsilently drop options, case is important\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPlotNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPlot_Methods,
    "vtkPlot", modulename,
    NULL, NULL,
    PyvtkPlot_Doc(),
    PyVTKClass_vtkContextItemNew(modulename));
  return cls;
}

const char **PyvtkPlot_Doc()
{
  static const char *docstring[] = {
    "vtkPlot - Abstract class for 2D plots.\n\n",
    "Superclass: vtkContextItem\n\n",
    "The base class for all plot types used in vtkChart derived charts.\n\nSee Also:\n\nvtkPlotPoints vtkPlotLine vtkPlotBar vtkChart vtkChartXY\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlot(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlotNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlot", o) != 0)
    {
    Py_DECREF(o);
    }

}

