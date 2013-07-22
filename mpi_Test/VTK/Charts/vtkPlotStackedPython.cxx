// python wrapper for vtkPlotStacked
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
#include "vtkPlotStacked.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPlotStacked(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPlotStacked(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPlotStackedNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPlotStackedNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPlotNew
extern "C" { PyObject *PyVTKClass_vtkPlotNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlotNew
#endif

static const char **PyvtkPlotStacked_Doc();


static PyObject *
PyvtkPlotStacked_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

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
      tempr = op->vtkPlotStacked::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotStacked_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

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
      tempr = op->vtkPlotStacked::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotStacked_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  vtkPlotStacked *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPlotStacked::NewInstance();
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
PyvtkPlotStacked_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPlotStacked *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPlotStacked::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotStacked_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

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
      op->vtkPlotStacked::SetColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotStacked_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

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
      op->vtkPlotStacked::SetColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotStacked_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPlotStacked_SetColor_s1(self, args);
    case 3:
      return PyvtkPlotStacked_SetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return NULL;
}



static PyObject *
PyvtkPlotStacked_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

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
      op->vtkPlotStacked::GetColor(temp0);
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
PyvtkPlotStacked_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkPlotStacked::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotStacked_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

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
      tempr = op->vtkPlotStacked::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotStacked_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

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
      tempr = op->vtkPlotStacked::PaintLegend(temp0, *temp1, temp2);
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
PyvtkPlotStacked_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

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
      op->vtkPlotStacked::GetBounds(temp0);
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
PyvtkPlotStacked_SetInputArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

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
      op->vtkPlotStacked::SetInputArray(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotStacked_SetColorSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

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
      op->vtkPlotStacked::SetColorSeries(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotStacked_GetColorSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

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
      tempr = op->vtkPlotStacked::GetColorSeries();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotStacked_GetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

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
      tempr = op->vtkPlotStacked::GetLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotStacked_SelectPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotStacked *op = static_cast<vtkPlotStacked *>(vp);

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
      tempr = op->vtkPlotStacked::SelectPoints(*temp0, *temp1);
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

static PyMethodDef PyvtkPlotStacked_Methods[] = {
  {(char*)"GetClassName", PyvtkPlotStacked_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlotStacked_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlotStacked_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPlotStacked\nC++: vtkPlotStacked *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlotStacked_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlotStacked\nC++: vtkPlotStacked *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetColor", PyvtkPlotStacked_SetColor, 1,
   (char*)"V.SetColor(int, int, int, int)\nC++: virtual void SetColor(unsigned char r, unsigned char g,\n    unsigned char b, unsigned char a)\nV.SetColor(float, float, float)\nC++: virtual void SetColor(double r, double g, double b)\n\nSet the plot color\n"},
  {(char*)"GetColor", PyvtkPlotStacked_GetColor, 1,
   (char*)"V.GetColor([float, float, float])\nC++: virtual void GetColor(double rgb[3])\n\nSet the plot color\n"},
  {(char*)"Update", PyvtkPlotStacked_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkPlotStacked_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the Stacked plot, called whenever the chart needs\nto be drawn\n"},
  {(char*)"PaintLegend", PyvtkPlotStacked_PaintLegend, 1,
   (char*)"V.PaintLegend(vtkContext2D, vtkRectf, int) -> bool\nC++: virtual bool PaintLegend(vtkContext2D *painter,\n    const vtkRectf &rect, int legendIndex)\n\nPaint legend event for the Stacked plot, called whenever the\nlegend needs the plot items symbol/mark/line drawn. A rect is\nsupplied with the lower left corner of the rect (elements 0 and\n1) and with width x height (elements 2 and 3). The plot can\nchoose how to fill the space supplied.\n"},
  {(char*)"GetBounds", PyvtkPlotStacked_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nGet the bounds for this mapper as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {(char*)"SetInputArray", PyvtkPlotStacked_SetInputArray, 1,
   (char*)"V.SetInputArray(int, string)\nC++: virtual void SetInputArray(int index,\n    const vtkStdString &name)\n\nWhen used to set additional arrays, stacked bars are created.\n"},
  {(char*)"SetColorSeries", PyvtkPlotStacked_SetColorSeries, 1,
   (char*)"V.SetColorSeries(vtkColorSeries)\nC++: void SetColorSeries(vtkColorSeries *colorSeries)\n\nSet the color series to use if this becomes a stacked bar plot.\n"},
  {(char*)"GetColorSeries", PyvtkPlotStacked_GetColorSeries, 1,
   (char*)"V.GetColorSeries() -> vtkColorSeries\nC++: vtkColorSeries *GetColorSeries()\n\nGet the color series used if when this is a stacked bar plot.\n"},
  {(char*)"GetLabels", PyvtkPlotStacked_GetLabels, 1,
   (char*)"V.GetLabels() -> vtkStringArray\nC++: virtual vtkStringArray *GetLabels()\n\n"},
  {(char*)"SelectPoints", PyvtkPlotStacked_SelectPoints, 1,
   (char*)"V.SelectPoints(vtkVector2f, vtkVector2f) -> bool\nC++: virtual bool SelectPoints(const vtkVector2f &min,\n    const vtkVector2f &max)\n\nSelect all points in the specified rectangle.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlotStacked_StaticNew()
{
  return vtkPlotStacked::New();
}

PyObject *PyVTKClass_vtkPlotStackedNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlotStacked_StaticNew,
    PyvtkPlotStacked_Methods,
    "vtkPlotStacked", modulename,
    NULL, NULL,
    PyvtkPlotStacked_Doc(),
    PyVTKClass_vtkPlotNew(modulename));
  return cls;
}

const char **PyvtkPlotStacked_Doc()
{
  static const char *docstring[] = {
    "vtkPlotStacked - Class for drawing an stacked polygon plot\n\n",
    "Superclass: vtkPlot\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlotStacked(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlotStackedNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlotStacked", o) != 0)
    {
    Py_DECREF(o);
    }

}

