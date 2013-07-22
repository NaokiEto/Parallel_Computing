// python wrapper for vtkPlotParallelCoordinates
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
#include "vtkPlotParallelCoordinates.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPlotParallelCoordinates(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPlotParallelCoordinates(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPlotParallelCoordinatesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPlotParallelCoordinatesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPlotNew
extern "C" { PyObject *PyVTKClass_vtkPlotNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlotNew
#endif

static const char **PyvtkPlotParallelCoordinates_Doc();


static PyObject *
PyvtkPlotParallelCoordinates_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      tempr = op->vtkPlotParallelCoordinates::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      tempr = op->vtkPlotParallelCoordinates::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  vtkPlotParallelCoordinates *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPlotParallelCoordinates::NewInstance();
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
PyvtkPlotParallelCoordinates_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPlotParallelCoordinates *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPlotParallelCoordinates::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkPlotParallelCoordinates::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      tempr = op->vtkPlotParallelCoordinates::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      tempr = op->vtkPlotParallelCoordinates::PaintLegend(temp0, *temp1, temp2);
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
PyvtkPlotParallelCoordinates_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      op->vtkPlotParallelCoordinates::GetBounds(temp0);
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
PyvtkPlotParallelCoordinates_SetSelectionRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  int temp0;
  float temp1;
  float temp2;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->SetSelectionRange(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkPlotParallelCoordinates::SetSelectionRange(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_ResetSelectionRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetSelectionRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->ResetSelectionRange();
      }
    else
      {
      tempr = op->vtkPlotParallelCoordinates::ResetSelectionRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      op->vtkPlotParallelCoordinates::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotParallelCoordinates_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      op->vtkPlotParallelCoordinates::SetInput(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotParallelCoordinates_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPlotParallelCoordinates_SetInput_s1(self, args);
    case 3:
      return PyvtkPlotParallelCoordinates_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}



static PyObject *
PyvtkPlotParallelCoordinates_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      op->vtkPlotParallelCoordinates::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      tempr = op->vtkPlotParallelCoordinates::GetLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_CreateDefaultLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLookupTable();
      }
    else
      {
      op->vtkPlotParallelCoordinates::CreateDefaultLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      op->vtkPlotParallelCoordinates::SetScalarVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_GetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      tempr = op->vtkPlotParallelCoordinates::GetScalarVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_ScalarVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarVisibilityOn();
      }
    else
      {
      op->vtkPlotParallelCoordinates::ScalarVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_ScalarVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalarVisibilityOff();
      }
    else
      {
      op->vtkPlotParallelCoordinates::ScalarVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_SelectColorArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      op->vtkPlotParallelCoordinates::SelectColorArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotParallelCoordinates_SelectColorArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      op->vtkPlotParallelCoordinates::SelectColorArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotParallelCoordinates_SelectColorArray_Methods[] = {
  {NULL, PyvtkPlotParallelCoordinates_SelectColorArray_s1, 1,
   (char*)"@L"},
  {NULL, PyvtkPlotParallelCoordinates_SelectColorArray_s2, 1,
   (char*)"@s"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPlotParallelCoordinates_SelectColorArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlotParallelCoordinates_SelectColorArray_Methods;
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
PyvtkPlotParallelCoordinates_GetColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      tempr = op->vtkPlotParallelCoordinates::GetColorArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotParallelCoordinates_Methods[] = {
  {(char*)"GetClassName", PyvtkPlotParallelCoordinates_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlotParallelCoordinates_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlotParallelCoordinates_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPlotParallelCoordinates\nC++: vtkPlotParallelCoordinates *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlotParallelCoordinates_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlotParallelCoordinates\nC++: vtkPlotParallelCoordinates *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkPlotParallelCoordinates_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkPlotParallelCoordinates_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the XY plot, called whenever the chart needs to\nbe drawn\n"},
  {(char*)"PaintLegend", PyvtkPlotParallelCoordinates_PaintLegend, 1,
   (char*)"V.PaintLegend(vtkContext2D, vtkRectf, int) -> bool\nC++: virtual bool PaintLegend(vtkContext2D *painter,\n    const vtkRectf &rect, int legendIndex)\n\nPaint legend event for the XY plot, called whenever the legend\nneeds the plot items symbol/mark/line drawn. A rect is supplied\nwith the lower left corner of the rect (elements 0 and 1) and\nwith width x height (elements 2 and 3). The plot can choose how\nto fill the space supplied.\n"},
  {(char*)"GetBounds", PyvtkPlotParallelCoordinates_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nGet the bounds for this mapper as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {(char*)"SetSelectionRange", PyvtkPlotParallelCoordinates_SetSelectionRange, 1,
   (char*)"V.SetSelectionRange(int, float, float) -> bool\nC++: bool SetSelectionRange(int Axis, float low, float high)\n\nSet the selection criteria on the given axis in normalized space\n(0.0 - 1.0).\n"},
  {(char*)"ResetSelectionRange", PyvtkPlotParallelCoordinates_ResetSelectionRange, 1,
   (char*)"V.ResetSelectionRange() -> bool\nC++: bool ResetSelectionRange()\n\nReset the selection criteria for the chart.\n"},
  {(char*)"SetInput", PyvtkPlotParallelCoordinates_SetInput, 1,
   (char*)"V.SetInput(vtkTable)\nC++: virtual void SetInput(vtkTable *table)\nV.SetInput(vtkTable, string, string)\nC++: virtual void SetInput(vtkTable *table, const vtkStdString &,\n    const vtkStdString &)\n\nThis is a convenience function to set the input table.\n"},
  {(char*)"SetLookupTable", PyvtkPlotParallelCoordinates_SetLookupTable, 1,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nSpecify a lookup table for the mapper to use.\n"},
  {(char*)"GetLookupTable", PyvtkPlotParallelCoordinates_GetLookupTable, 1,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSpecify a lookup table for the mapper to use.\n"},
  {(char*)"CreateDefaultLookupTable", PyvtkPlotParallelCoordinates_CreateDefaultLookupTable, 1,
   (char*)"V.CreateDefaultLookupTable()\nC++: virtual void CreateDefaultLookupTable()\n\nCreate default lookup table. Generally used to create one when\nnone is available with the scalar data.\n"},
  {(char*)"SetScalarVisibility", PyvtkPlotParallelCoordinates_SetScalarVisibility, 1,
   (char*)"V.SetScalarVisibility(int)\nC++: void SetScalarVisibility(int a)\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"GetScalarVisibility", PyvtkPlotParallelCoordinates_GetScalarVisibility, 1,
   (char*)"V.GetScalarVisibility() -> int\nC++: int GetScalarVisibility()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"ScalarVisibilityOn", PyvtkPlotParallelCoordinates_ScalarVisibilityOn, 1,
   (char*)"V.ScalarVisibilityOn()\nC++: void ScalarVisibilityOn()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"ScalarVisibilityOff", PyvtkPlotParallelCoordinates_ScalarVisibilityOff, 1,
   (char*)"V.ScalarVisibilityOff()\nC++: void ScalarVisibilityOff()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {(char*)"SelectColorArray", PyvtkPlotParallelCoordinates_SelectColorArray, 1,
   (char*)"V.SelectColorArray(int)\nC++: void SelectColorArray(vtkIdType arrayNum)\nV.SelectColorArray(string)\nC++: void SelectColorArray(const vtkStdString &arrayName)\n\nWhen ScalarMode is set to UsePointFieldData or UseCellFieldData,\nyou can specify which array to use for coloring using these\nmethods. The lookup table will decide how to convert vectors to\ncolors.\n"},
  {(char*)"GetColorArrayName", PyvtkPlotParallelCoordinates_GetColorArrayName, 1,
   (char*)"V.GetColorArrayName() -> string\nC++: vtkStdString GetColorArrayName()\n\nGet the array name to color by.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlotParallelCoordinates_StaticNew()
{
  return vtkPlotParallelCoordinates::New();
}

PyObject *PyVTKClass_vtkPlotParallelCoordinatesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlotParallelCoordinates_StaticNew,
    PyvtkPlotParallelCoordinates_Methods,
    "vtkPlotParallelCoordinates", modulename,
    NULL, NULL,
    PyvtkPlotParallelCoordinates_Doc(),
    PyVTKClass_vtkPlotNew(modulename));
  return cls;
}

const char **PyvtkPlotParallelCoordinates_Doc()
{
  static const char *docstring[] = {
    "vtkPlotParallelCoordinates - Class for drawing a parallel coordinate\n\n",
    "Superclass: vtkPlot\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlotParallelCoordinates(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlotParallelCoordinatesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlotParallelCoordinates", o) != 0)
    {
    Py_DECREF(o);
    }

}

