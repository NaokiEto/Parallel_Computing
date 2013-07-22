// python wrapper for vtkPlotPoints
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
#include "vtkPlotPoints.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPlotPoints(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPlotPoints(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPlotPointsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPlotPointsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPlotNew
extern "C" { PyObject *PyVTKClass_vtkPlotNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlotNew
#endif

static const char **PyvtkPlotPoints_Doc();


static PyObject *
PyvtkPlotPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

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
      tempr = op->vtkPlotPoints::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

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
      tempr = op->vtkPlotPoints::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkPlotPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPlotPoints::NewInstance();
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
PyvtkPlotPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPlotPoints *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPlotPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkPlotPoints::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

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
      tempr = op->vtkPlotPoints::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

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
      tempr = op->vtkPlotPoints::PaintLegend(temp0, *temp1, temp2);
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
PyvtkPlotPoints_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

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
      op->vtkPlotPoints::GetBounds(temp0);
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
PyvtkPlotPoints_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkPlotPoints::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkScalarsToColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLookupTable();
      }
    else
      {
      tempr = op->vtkPlotPoints::GetLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_CreateDefaultLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLookupTable();
      }
    else
      {
      op->vtkPlotPoints::CreateDefaultLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarVisibility(temp0);
      }
    else
      {
      op->vtkPlotPoints::SetScalarVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarVisibility();
      }
    else
      {
      tempr = op->vtkPlotPoints::GetScalarVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_ScalarVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarVisibilityOn();
      }
    else
      {
      op->vtkPlotPoints::ScalarVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_ScalarVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarVisibilityOff();
      }
    else
      {
      op->vtkPlotPoints::ScalarVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_SelectColorArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectColorArray(temp0);
      }
    else
      {
      op->vtkPlotPoints::SelectColorArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotPoints_SelectColorArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkStdString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectColorArray(temp0);
      }
    else
      {
      op->vtkPlotPoints::SelectColorArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotPoints_SelectColorArray_Methods[] = {
  {NULL, PyvtkPlotPoints_SelectColorArray_s1, 1,
   (char*)"@L"},
  {NULL, PyvtkPlotPoints_SelectColorArray_s2, 1,
   (char*)"@s"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPlotPoints_SelectColorArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlotPoints_SelectColorArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SelectColorArray");
  return NULL;
}



static PyObject *
PyvtkPlotPoints_GetColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorArrayName();
      }
    else
      {
      tempr = op->vtkPlotPoints::GetColorArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_SelectPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

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
      tempr = op->vtkPlotPoints::SelectPoints(*temp0, *temp1);
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
PyvtkPlotPoints_GetMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMarkerStyle();
      }
    else
      {
      tempr = op->vtkPlotPoints::GetMarkerStyle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_SetMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMarkerStyle(temp0);
      }
    else
      {
      op->vtkPlotPoints::SetMarkerStyle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMarkerSize();
      }
    else
      {
      tempr = op->vtkPlotPoints::GetMarkerSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPoints_SetMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMarkerSize(temp0);
      }
    else
      {
      op->vtkPlotPoints::SetMarkerSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkPlotPoints_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlotPoints_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlotPoints_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPlotPoints\nC++: vtkPlotPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlotPoints_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlotPoints\nC++: vtkPlotPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkPlotPoints_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkPlotPoints_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the XY plot, called whenever the chart needs to\nbe drawn\n"},
  {(char*)"PaintLegend", PyvtkPlotPoints_PaintLegend, 1,
   (char*)"V.PaintLegend(vtkContext2D, vtkRectf, int) -> bool\nC++: virtual bool PaintLegend(vtkContext2D *painter,\n    const vtkRectf &rect, int legendIndex)\n\nPaint legend event for the XY plot, called whenever the legend\nneeds the plot items symbol/mark/line drawn. A rect is supplied\nwith the lower left corner of the rect (elements 0 and 1) and\nwith width x height (elements 2 and 3). The plot can choose how\nto fill the space supplied.\n"},
  {(char*)"GetBounds", PyvtkPlotPoints_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nGet the bounds for this plot as (Xmin, Xmax, Ymin, Ymax).\n"},
  {(char*)"SetLookupTable", PyvtkPlotPoints_SetLookupTable, 1,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nSpecify a lookup table for the mapper to use.\n"},
  {(char*)"GetLookupTable", PyvtkPlotPoints_GetLookupTable, 1,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSpecify a lookup table for the mapper to use.\n"},
  {(char*)"CreateDefaultLookupTable", PyvtkPlotPoints_CreateDefaultLookupTable, 1,
   (char*)"V.CreateDefaultLookupTable()\nC++: virtual void CreateDefaultLookupTable()\n\nCreate default lookup table. Generally used to create one when\nnone is available with the scalar data.\n"},
  {(char*)"SetScalarVisibility", PyvtkPlotPoints_SetScalarVisibility, 1,
   (char*)"V.SetScalarVisibility(int)\nC++: void SetScalarVisibility(int a)\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"GetScalarVisibility", PyvtkPlotPoints_GetScalarVisibility, 1,
   (char*)"V.GetScalarVisibility() -> int\nC++: int GetScalarVisibility()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"ScalarVisibilityOn", PyvtkPlotPoints_ScalarVisibilityOn, 1,
   (char*)"V.ScalarVisibilityOn()\nC++: void ScalarVisibilityOn()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"ScalarVisibilityOff", PyvtkPlotPoints_ScalarVisibilityOff, 1,
   (char*)"V.ScalarVisibilityOff()\nC++: void ScalarVisibilityOff()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"SelectColorArray", PyvtkPlotPoints_SelectColorArray, 1,
   (char*)"V.SelectColorArray(int)\nC++: void SelectColorArray(vtkIdType arrayNum)\nV.SelectColorArray(string)\nC++: void SelectColorArray(const vtkStdString &arrayName)\n\nWhen ScalarMode is set to UsePointFieldData or UseCellFieldData,\nyou can specify which array to use for coloring using these\nmethods. The lookup table will decide how to convert vectors to\ncolors.\n"},
  {(char*)"GetColorArrayName", PyvtkPlotPoints_GetColorArrayName, 1,
   (char*)"V.GetColorArrayName() -> string\nC++: vtkStdString GetColorArrayName()\n\nGet the array name to color by.\n"},
  {(char*)"SelectPoints", PyvtkPlotPoints_SelectPoints, 1,
   (char*)"V.SelectPoints(vtkVector2f, vtkVector2f) -> bool\nC++: virtual bool SelectPoints(const vtkVector2f &min,\n    const vtkVector2f &max)\n\nSelect all points in the specified rectangle.\n"},
  {(char*)"GetMarkerStyle", PyvtkPlotPoints_GetMarkerStyle, 1,
   (char*)"V.GetMarkerStyle() -> int\nC++: int GetMarkerStyle()\n\nGet/set the marker style that should be used. The default is\nnone, the enum in this class is used as a parameter.\n"},
  {(char*)"SetMarkerStyle", PyvtkPlotPoints_SetMarkerStyle, 1,
   (char*)"V.SetMarkerStyle(int)\nC++: void SetMarkerStyle(int a)\n\nGet/set the marker style that should be used. The default is\nnone, the enum in this class is used as a parameter.\n"},
  {(char*)"GetMarkerSize", PyvtkPlotPoints_GetMarkerSize, 1,
   (char*)"V.GetMarkerSize() -> float\nC++: float GetMarkerSize()\n\nGet/set the marker size that should be used. The default is\nnegative, and in that case it is 2.3 times the pen width, if less\nthan 8 will be used.\n"},
  {(char*)"SetMarkerSize", PyvtkPlotPoints_SetMarkerSize, 1,
   (char*)"V.SetMarkerSize(float)\nC++: void SetMarkerSize(float a)\n\nGet/set the marker size that should be used. The default is\nnegative, and in that case it is 2.3 times the pen width, if less\nthan 8 will be used.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlotPoints_StaticNew()
{
  return vtkPlotPoints::New();
}

PyObject *PyVTKClass_vtkPlotPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlotPoints_StaticNew,
    PyvtkPlotPoints_Methods,
    "vtkPlotPoints", modulename,
    NULL, NULL,
    PyvtkPlotPoints_Doc(),
    PyVTKClass_vtkPlotNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"NONE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"CROSS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"PLUS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"SQUARE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"CIRCLE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"DIAMOND", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkPlotPoints_Doc()
{
  static const char *docstring[] = {
    "vtkPlotPoints - Class for drawing an points given two columns from a\n\n",
    "Superclass: vtkPlot\n\n",
    "This class draws points in a plot given two columns from a table. If\nyou need a line as well you should use vtkPlotLine which derives from\nvtkPlotPoints and is capable of drawing both points and a line.\n\nSee Also:\n\nvtkPlotLine\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlotPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlotPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlotPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

