// python wrapper for vtkPlotPie
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
#include "vtkPlotPie.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPlotPie(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPlotPie(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPlotPieNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPlotPieNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPlotNew
extern "C" { PyObject *PyVTKClass_vtkPlotNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlotNew
#endif

static const char **PyvtkPlotPie_Doc();


static PyObject *
PyvtkPlotPie_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPie *op = static_cast<vtkPlotPie *>(vp);

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
      tempr = op->vtkPlotPie::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPie_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPie *op = static_cast<vtkPlotPie *>(vp);

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
      tempr = op->vtkPlotPie::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPie_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPie *op = static_cast<vtkPlotPie *>(vp);

  vtkPlotPie *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPlotPie::NewInstance();
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
PyvtkPlotPie_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPlotPie *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPlotPie::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPie_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPie *op = static_cast<vtkPlotPie *>(vp);

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
      tempr = op->vtkPlotPie::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPie_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPie *op = static_cast<vtkPlotPie *>(vp);

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
      tempr = op->vtkPlotPie::PaintLegend(temp0, *temp1, temp2);
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
PyvtkPlotPie_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPie *op = static_cast<vtkPlotPie *>(vp);

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
      op->SetDimensions(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkPlotPie::SetDimensions(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlotPie_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPie *op = static_cast<vtkPlotPie *>(vp);

  int temp0[4];
  int save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetDimensions(temp0);
      }
    else
      {
      op->vtkPlotPie::SetDimensions(temp0);
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
PyvtkPlotPie_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPlotPie_SetDimensions_s1(self, args);
    case 1:
      return PyvtkPlotPie_SetDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return NULL;
}



static PyObject *
PyvtkPlotPie_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPie *op = static_cast<vtkPlotPie *>(vp);

  int *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensions();
      }
    else
      {
      tempr = op->vtkPlotPie::GetDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPie_SetColorSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPie *op = static_cast<vtkPlotPie *>(vp);

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
      op->vtkPlotPie::SetColorSeries(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlotPie_GetColorSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPie *op = static_cast<vtkPlotPie *>(vp);

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
      tempr = op->vtkPlotPie::GetColorSeries();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPlotPie_Methods[] = {
  {(char*)"GetClassName", PyvtkPlotPie_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlotPie_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlotPie_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPlotPie\nC++: vtkPlotPie *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlotPie_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlotPie\nC++: vtkPlotPie *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Paint", PyvtkPlotPie_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the item.\n"},
  {(char*)"PaintLegend", PyvtkPlotPie_PaintLegend, 1,
   (char*)"V.PaintLegend(vtkContext2D, vtkRectf, int) -> bool\nC++: bool PaintLegend(vtkContext2D *painter, const vtkRectf &rect,\n     int legendIndex)\n\nPaint legend event for the XY plot, called whenever the legend\nneeds the plot items symbol/mark/line drawn. A rect is supplied\nwith the lower left corner of the rect (elements 0 and 1) and\nwith width x height (elements 2 and 3). The plot can choose how\nto fill the space supplied.\n"},
  {(char*)"SetDimensions", PyvtkPlotPie_SetDimensions, 1,
   (char*)"V.SetDimensions(int, int, int, int)\nC++: void SetDimensions(int arg1, int arg2, int arg3, int arg4)\nV.SetDimensions([int, int, int, int])\nC++: void SetDimensions(int arg[4])\n\nSet the dimensions of the pie, arguments 1 and 2 are the x and y\ncoordinate of the bottom corner. Arguments 3 and 4 are the width\nand height.\n"},
  {(char*)"GetDimensions", PyvtkPlotPie_GetDimensions, 1,
   (char*)"V.GetDimensions() -> (int, int, int, int)\nC++: int *GetDimensions()\n\n"},
  {(char*)"SetColorSeries", PyvtkPlotPie_SetColorSeries, 1,
   (char*)"V.SetColorSeries(vtkColorSeries)\nC++: void SetColorSeries(vtkColorSeries *colorSeries)\n\nSet the color series to use for the Pie.\n"},
  {(char*)"GetColorSeries", PyvtkPlotPie_GetColorSeries, 1,
   (char*)"V.GetColorSeries() -> vtkColorSeries\nC++: vtkColorSeries *GetColorSeries()\n\nGet the color series used.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlotPie_StaticNew()
{
  return vtkPlotPie::New();
}

PyObject *PyVTKClass_vtkPlotPieNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlotPie_StaticNew,
    PyvtkPlotPie_Methods,
    "vtkPlotPie", modulename,
    NULL, NULL,
    PyvtkPlotPie_Doc(),
    PyVTKClass_vtkPlotNew(modulename));
  return cls;
}

const char **PyvtkPlotPie_Doc()
{
  static const char *docstring[] = {
    "vtkPlotPie - Class for drawing a Pie diagram.\n\n",
    "Superclass: vtkPlot\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlotPie(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlotPieNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlotPie", o) != 0)
    {
    Py_DECREF(o);
    }

}

