// python wrapper for vtkPlotLine
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
#include "vtkPlotLine.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPlotLine(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPlotLine(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPlotLineNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPlotLineNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPlotPointsNew
extern "C" { PyObject *PyVTKClass_vtkPlotPointsNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlotPointsNew
#endif

static const char **PyvtkPlotLine_Doc();


static PyObject *
PyvtkPlotLine_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine *op = static_cast<vtkPlotLine *>(vp);

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
      tempr = op->vtkPlotLine::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotLine_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine *op = static_cast<vtkPlotLine *>(vp);

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
      tempr = op->vtkPlotLine::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotLine_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine *op = static_cast<vtkPlotLine *>(vp);

  vtkPlotLine *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPlotLine::NewInstance();
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
PyvtkPlotLine_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPlotLine *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPlotLine::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotLine_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine *op = static_cast<vtkPlotLine *>(vp);

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
      tempr = op->vtkPlotLine::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotLine_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotLine *op = static_cast<vtkPlotLine *>(vp);

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
      tempr = op->vtkPlotLine::PaintLegend(temp0, *temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkPlotLine_Methods[] = {
  {(char*)"GetClassName", PyvtkPlotLine_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlotLine_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlotLine_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPlotLine\nC++: vtkPlotLine *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlotLine_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlotLine\nC++: vtkPlotLine *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Paint", PyvtkPlotLine_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the XY plot, called whenever the chart needs to\nbe drawn\n"},
  {(char*)"PaintLegend", PyvtkPlotLine_PaintLegend, 1,
   (char*)"V.PaintLegend(vtkContext2D, vtkRectf, int) -> bool\nC++: virtual bool PaintLegend(vtkContext2D *painter,\n    const vtkRectf &rect, int legendIndex)\n\nPaint legend event for the XY plot, called whenever the legend\nneeds the plot items symbol/mark/line drawn. A rect is supplied\nwith the lower left corner of the rect (elements 0 and 1) and\nwith width x height (elements 2 and 3). The plot can choose how\nto fill the space supplied.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlotLine_StaticNew()
{
  return vtkPlotLine::New();
}

PyObject *PyVTKClass_vtkPlotLineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlotLine_StaticNew,
    PyvtkPlotLine_Methods,
    "vtkPlotLine", modulename,
    NULL, NULL,
    PyvtkPlotLine_Doc(),
    PyVTKClass_vtkPlotPointsNew(modulename));
  return cls;
}

const char **PyvtkPlotLine_Doc()
{
  static const char *docstring[] = {
    "vtkPlotLine - Class for drawing an XY line plot given two columns from\n\n",
    "Superclass: vtkPlotPoints\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlotLine(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlotLineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlotLine", o) != 0)
    {
    Py_DECREF(o);
    }

}

