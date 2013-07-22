// python wrapper for vtkChartParallelCoordinates
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
#include "vtkChartParallelCoordinates.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkChartParallelCoordinates(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkChartParallelCoordinates(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkChartParallelCoordinatesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkChartParallelCoordinatesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkChartNew
extern "C" { PyObject *PyVTKClass_vtkChartNew(const char *); }
#define DECLARED_PyVTKClass_vtkChartNew
#endif

static const char **PyvtkChartParallelCoordinates_Doc();


static PyObject *
PyvtkChartParallelCoordinates_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

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
      tempr = op->vtkChartParallelCoordinates::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

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
      tempr = op->vtkChartParallelCoordinates::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkChartParallelCoordinates *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkChartParallelCoordinates::NewInstance();
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
PyvtkChartParallelCoordinates_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkChartParallelCoordinates *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkChartParallelCoordinates::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkChartParallelCoordinates::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

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
      tempr = op->vtkChartParallelCoordinates::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_SetColumnVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkStdString temp0;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetColumnVisibility(temp0, temp1);
      }
    else
      {
      op->vtkChartParallelCoordinates::SetColumnVisibility(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_SetColumnVisibilityAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibilityAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColumnVisibilityAll(temp0);
      }
    else
      {
      op->vtkChartParallelCoordinates::SetColumnVisibilityAll(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_GetColumnVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkStdString temp0;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColumnVisibility(temp0);
      }
    else
      {
      tempr = op->vtkChartParallelCoordinates::GetColumnVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_GetVisibleColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkStringArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVisibleColumns();
      }
    else
      {
      tempr = op->vtkChartParallelCoordinates::GetVisibleColumns();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_GetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

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
      tempr = op->vtkChartParallelCoordinates::GetPlot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_GetNumberOfPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

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
      tempr = op->vtkChartParallelCoordinates::GetNumberOfPlots();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

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
      tempr = op->vtkChartParallelCoordinates::GetAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_GetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

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
      tempr = op->vtkChartParallelCoordinates::GetNumberOfAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_RecalculateBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecalculateBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RecalculateBounds();
      }
    else
      {
      op->vtkChartParallelCoordinates::RecalculateBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_SetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkPlotParallelCoordinates *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlotParallelCoordinates"))
    {
    if (ap.IsBound())
      {
      op->SetPlot(temp0);
      }
    else
      {
      op->vtkChartParallelCoordinates::SetPlot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkChartParallelCoordinates_Methods[] = {
  {(char*)"GetClassName", PyvtkChartParallelCoordinates_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChartParallelCoordinates_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChartParallelCoordinates_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkChartParallelCoordinates\nC++: vtkChartParallelCoordinates *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChartParallelCoordinates_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChartParallelCoordinates\nC++: vtkChartParallelCoordinates *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Update", PyvtkChartParallelCoordinates_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkChartParallelCoordinates_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn\n"},
  {(char*)"SetColumnVisibility", PyvtkChartParallelCoordinates_SetColumnVisibility, 1,
   (char*)"V.SetColumnVisibility(string, bool)\nC++: void SetColumnVisibility(const vtkStdString &name,\n    bool visible)\n\nSet the visibility of the specified column.\n"},
  {(char*)"SetColumnVisibilityAll", PyvtkChartParallelCoordinates_SetColumnVisibilityAll, 1,
   (char*)"V.SetColumnVisibilityAll(bool)\nC++: void SetColumnVisibilityAll(bool visible)\n\nSet the visibility of all columns (true will make them all\nvisible, false will remove all visible columns).\n"},
  {(char*)"GetColumnVisibility", PyvtkChartParallelCoordinates_GetColumnVisibility, 1,
   (char*)"V.GetColumnVisibility(string) -> bool\nC++: bool GetColumnVisibility(const vtkStdString &name)\n\nGet the visibility of the specified column.\n"},
  {(char*)"GetVisibleColumns", PyvtkChartParallelCoordinates_GetVisibleColumns, 1,
   (char*)"V.GetVisibleColumns() -> vtkStringArray\nC++: vtkStringArray *GetVisibleColumns()\n\nGet a list of the columns, and the order in which they are\ndisplayed.\n"},
  {(char*)"GetPlot", PyvtkChartParallelCoordinates_GetPlot, 1,
   (char*)"V.GetPlot(int) -> vtkPlot\nC++: virtual vtkPlot *GetPlot(vtkIdType index)\n\nGet the plot at the specified index, returns null if the index is\ninvalid.\n"},
  {(char*)"GetNumberOfPlots", PyvtkChartParallelCoordinates_GetNumberOfPlots, 1,
   (char*)"V.GetNumberOfPlots() -> int\nC++: virtual vtkIdType GetNumberOfPlots()\n\nGet the number of plots the chart contains.\n"},
  {(char*)"GetAxis", PyvtkChartParallelCoordinates_GetAxis, 1,
   (char*)"V.GetAxis(int) -> vtkAxis\nC++: virtual vtkAxis *GetAxis(int axisIndex)\n\nGet the axis specified by axisIndex.\n"},
  {(char*)"GetNumberOfAxes", PyvtkChartParallelCoordinates_GetNumberOfAxes, 1,
   (char*)"V.GetNumberOfAxes() -> int\nC++: virtual vtkIdType GetNumberOfAxes()\n\nGet the number of axes in the current chart.\n"},
  {(char*)"RecalculateBounds", PyvtkChartParallelCoordinates_RecalculateBounds, 1,
   (char*)"V.RecalculateBounds()\nC++: virtual void RecalculateBounds()\n\nRequest that the chart recalculates the range of its axes.\nEspecially useful in applications after the parameters of plots\nhave been modified.\n"},
  {(char*)"SetPlot", PyvtkChartParallelCoordinates_SetPlot, 1,
   (char*)"V.SetPlot(vtkPlotParallelCoordinates)\nC++: virtual void SetPlot(vtkPlotParallelCoordinates *plot)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkChartParallelCoordinates_StaticNew()
{
  return vtkChartParallelCoordinates::New();
}

PyObject *PyVTKClass_vtkChartParallelCoordinatesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkChartParallelCoordinates_StaticNew,
    PyvtkChartParallelCoordinates_Methods,
    "vtkChartParallelCoordinates", modulename,
    NULL, NULL,
    PyvtkChartParallelCoordinates_Doc(),
    PyVTKClass_vtkChartNew(modulename));
  return cls;
}

const char **PyvtkChartParallelCoordinates_Doc()
{
  static const char *docstring[] = {
    "vtkChartParallelCoordinates - Factory class for drawing 2D charts\n\n",
    "Superclass: vtkChart\n\n",
    "This defines the interface for a parallel coordinates chart.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChartParallelCoordinates(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChartParallelCoordinatesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChartParallelCoordinates", o) != 0)
    {
    Py_DECREF(o);
    }

}

