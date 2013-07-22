// python wrapper for vtkPlotBar
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
#include "vtkPlotBar.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPlotBar(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPlotBar(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPlotBarNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPlotBarNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPlotNew
extern "C" { PyObject *PyVTKClass_vtkPlotNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlotNew
#endif

static const char **PyvtkPlotBar_Doc();


static PyObject *
PyvtkPlotBar_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

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
      tempr = op->vtkPlotBar::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBar_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

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
      tempr = op->vtkPlotBar::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBar_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

  vtkPlotBar *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPlotBar::NewInstance();
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
PyvtkPlotBar_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPlotBar *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPlotBar::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBar_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

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
      tempr = op->vtkPlotBar::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBar_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

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
      tempr = op->vtkPlotBar::PaintLegend(temp0, *temp1, temp2);
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
PyvtkPlotBar_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

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
      op->vtkPlotBar::SetColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotBar_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

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
      op->vtkPlotBar::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotBar_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPlotBar_SetColor_s1(self, args);
    case 3:
      return PyvtkPlotBar_SetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkPlotBar_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

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
      op->vtkPlotBar::GetColor(temp0);
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
PyvtkPlotBar_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

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
      op->vtkPlotBar::SetWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBar_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

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
      tempr = op->vtkPlotBar::GetWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBar_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOffset(temp0);
      }
    else
      {
      op->vtkPlotBar::SetOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBar_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffset();
      }
    else
      {
      tempr = op->vtkPlotBar::GetOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBar_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientation(temp0);
      }
    else
      {
      op->vtkPlotBar::SetOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBar_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientation();
      }
    else
      {
      tempr = op->vtkPlotBar::GetOrientation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBar_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

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
      op->vtkPlotBar::GetBounds(temp0);
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
PyvtkPlotBar_SetInputArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

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
      op->vtkPlotBar::SetInputArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBar_SetColorSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

  vtkColorSeries *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorSeries"))
    {
    if (ap.IsBound())
      {
      op->SetColorSeries(temp0);
      }
    else
      {
      op->vtkPlotBar::SetColorSeries(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBar_GetColorSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

  vtkColorSeries *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorSeries();
      }
    else
      {
      tempr = op->vtkPlotBar::GetColorSeries();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBar_GetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

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
      tempr = op->vtkPlotBar::GetLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBar_SetGroupName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGroupName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGroupName(temp0);
      }
    else
      {
      op->vtkPlotBar::SetGroupName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBar_GetGroupName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroupName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGroupName();
      }
    else
      {
      tempr = op->vtkPlotBar::GetGroupName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotBar_GetTooltipLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

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
      tempr = op->vtkPlotBar::GetTooltipLabel(*temp0, temp1, temp2);
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
PyvtkPlotBar_SelectPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotBar *op = static_cast<vtkPlotBar *>(vp);

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
      tempr = op->vtkPlotBar::SelectPoints(*temp0, *temp1);
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

static PyMethodDef PyvtkPlotBar_Methods[] = {
  {(char*)"GetClassName", PyvtkPlotBar_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlotBar_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlotBar_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPlotBar\nC++: vtkPlotBar *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlotBar_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlotBar\nC++: vtkPlotBar *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Paint", PyvtkPlotBar_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the XY plot, called whenever the chart needs to\nbe drawn\n"},
  {(char*)"PaintLegend", PyvtkPlotBar_PaintLegend, 1,
   (char*)"V.PaintLegend(vtkContext2D, vtkRectf, int) -> bool\nC++: virtual bool PaintLegend(vtkContext2D *painter,\n    const vtkRectf &rect, int legendIndex)\n\nPaint legend event for the XY plot, called whenever the legend\nneeds the plot items symbol/mark/line drawn. A rect is supplied\nwith the lower left corner of the rect (elements 0 and 1) and\nwith width x height (elements 2 and 3). The plot can choose how\nto fill the space supplied.\n"},
  {(char*)"SetColor", PyvtkPlotBar_SetColor, 1,
   (char*)"V.SetColor(int, int, int, int)\nC++: virtual void SetColor(unsigned char r, unsigned char g,\n    unsigned char b, unsigned char a)\nV.SetColor(float, float, float)\nC++: virtual void SetColor(double r, double g, double b)\n\nSet the plot color\n"},
  {(char*)"GetColor", PyvtkPlotBar_GetColor, 1,
   (char*)"V.GetColor([float, float, float])\nC++: virtual void GetColor(double rgb[3])\n\nSet the plot color\n"},
  {(char*)"SetWidth", PyvtkPlotBar_SetWidth, 1,
   (char*)"V.SetWidth(float)\nC++: void SetWidth(float a)\n\nSet the width of the line.\n"},
  {(char*)"GetWidth", PyvtkPlotBar_GetWidth, 1,
   (char*)"V.GetWidth() -> float\nC++: float GetWidth()\n\nGet the width of the line.\n"},
  {(char*)"SetOffset", PyvtkPlotBar_SetOffset, 1,
   (char*)"V.SetOffset(float)\nC++: void SetOffset(float a)\n\nSet/get the horizontal offset of the bars. Positive values move\nthe bars leftward. For HORIZONTAL orientation, offsets bars\nvertically, with a positive value moving bars downward.\n"},
  {(char*)"GetOffset", PyvtkPlotBar_GetOffset, 1,
   (char*)"V.GetOffset() -> float\nC++: float GetOffset()\n\nSet/get the horizontal offset of the bars. Positive values move\nthe bars leftward. For HORIZONTAL orientation, offsets bars\nvertically, with a positive value moving bars downward.\n"},
  {(char*)"SetOrientation", PyvtkPlotBar_SetOrientation, 1,
   (char*)"V.SetOrientation(int)\nC++: virtual void SetOrientation(int orientation)\n\nSet/get the orientation of the bars. Valid orientations are\nVERTICAL (default) and HORIZONTAL.\n"},
  {(char*)"GetOrientation", PyvtkPlotBar_GetOrientation, 1,
   (char*)"V.GetOrientation() -> int\nC++: int GetOrientation()\n\nSet/get the orientation of the bars. Valid orientations are\nVERTICAL (default) and HORIZONTAL.\n"},
  {(char*)"GetBounds", PyvtkPlotBar_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nGet the bounds for this mapper as (Xmin,Xmax,Ymin,Ymax).\n"},
  {(char*)"SetInputArray", PyvtkPlotBar_SetInputArray, 1,
   (char*)"V.SetInputArray(int, string)\nC++: virtual void SetInputArray(int index,\n    const vtkStdString &name)\n\nWhen used to set additional arrays, stacked bars are created.\n"},
  {(char*)"SetColorSeries", PyvtkPlotBar_SetColorSeries, 1,
   (char*)"V.SetColorSeries(vtkColorSeries)\nC++: void SetColorSeries(vtkColorSeries *colorSeries)\n\nSet the color series to use if this becomes a stacked bar plot.\n"},
  {(char*)"GetColorSeries", PyvtkPlotBar_GetColorSeries, 1,
   (char*)"V.GetColorSeries() -> vtkColorSeries\nC++: vtkColorSeries *GetColorSeries()\n\nGet the color series used if when this is a stacked bar plot.\n"},
  {(char*)"GetLabels", PyvtkPlotBar_GetLabels, 1,
   (char*)"V.GetLabels() -> vtkStringArray\nC++: virtual vtkStringArray *GetLabels()\n\n"},
  {(char*)"SetGroupName", PyvtkPlotBar_SetGroupName, 1,
   (char*)"V.SetGroupName(string)\nC++: virtual void SetGroupName(const vtkStdString &name)\n\nSet the group name of the bar chart - can be displayed on the X\naxis.\n"},
  {(char*)"GetGroupName", PyvtkPlotBar_GetGroupName, 1,
   (char*)"V.GetGroupName() -> string\nC++: virtual vtkStdString GetGroupName()\n\nGet the group name of the bar char - can be displayed on the X\naxis.\n"},
  {(char*)"GetTooltipLabel", PyvtkPlotBar_GetTooltipLabel, 1,
   (char*)"V.GetTooltipLabel(vtkVector2f, int, int) -> string\nC++: virtual vtkStdString GetTooltipLabel(\n    const vtkVector2f &plotPos, vtkIdType seriesIndex,\n    vtkIdType segmentIndex)\n\nGenerate and return the tooltip label string for this plot The\nsegmentIndex is implemented here.\n"},
  {(char*)"SelectPoints", PyvtkPlotBar_SelectPoints, 1,
   (char*)"V.SelectPoints(vtkVector2f, vtkVector2f) -> bool\nC++: virtual bool SelectPoints(const vtkVector2f &min,\n    const vtkVector2f &max)\n\nSelect all points in the specified rectangle.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlotBar_StaticNew()
{
  return vtkPlotBar::New();
}

PyObject *PyVTKClass_vtkPlotBarNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlotBar_StaticNew,
    PyvtkPlotBar_Methods,
    "vtkPlotBar", modulename,
    NULL, NULL,
    PyvtkPlotBar_Doc(),
    PyVTKClass_vtkPlotNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"VERTICAL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"HORIZONTAL", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkPlotBar_Doc()
{
  static const char *docstring[] = {
    "vtkPlotBar - Class for drawing an XY plot given two columns from a\n\n",
    "Superclass: vtkPlot\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlotBar(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlotBarNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlotBar", o) != 0)
    {
    Py_DECREF(o);
    }

}

