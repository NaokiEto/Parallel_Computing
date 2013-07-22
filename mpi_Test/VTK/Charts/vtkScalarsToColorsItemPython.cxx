// python wrapper for vtkScalarsToColorsItem
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
#include "vtkScalarsToColorsItem.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkScalarsToColorsItem(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkScalarsToColorsItem(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkScalarsToColorsItemNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkScalarsToColorsItemNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPlotNew
extern "C" { PyObject *PyVTKClass_vtkPlotNew(const char *); }
#define DECLARED_PyVTKClass_vtkPlotNew
#endif

static const char **PyvtkScalarsToColorsItem_Doc();


static PyObject *
PyvtkScalarsToColorsItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

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
      tempr = op->vtkScalarsToColorsItem::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

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
      tempr = op->vtkScalarsToColorsItem::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  vtkScalarsToColorsItem *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkScalarsToColorsItem::NewInstance();
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
PyvtkScalarsToColorsItem_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

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
      op->vtkScalarsToColorsItem::GetBounds(temp0);
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
PyvtkScalarsToColorsItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

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
      tempr = op->vtkScalarsToColorsItem::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_GetPolyLinePen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyLinePen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  vtkPen *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPolyLinePen();
      }
    else
      {
      tempr = op->vtkScalarsToColorsItem::GetPolyLinePen();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_SetMaskAboveCurve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskAboveCurve");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskAboveCurve(temp0);
      }
    else
      {
      op->vtkScalarsToColorsItem::SetMaskAboveCurve(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColorsItem_GetMaskAboveCurve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskAboveCurve");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColorsItem *op = static_cast<vtkScalarsToColorsItem *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaskAboveCurve();
      }
    else
      {
      tempr = op->vtkScalarsToColorsItem::GetMaskAboveCurve();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkScalarsToColorsItem_Methods[] = {
  {(char*)"GetClassName", PyvtkScalarsToColorsItem_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkScalarsToColorsItem_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkScalarsToColorsItem_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkScalarsToColorsItem\nC++: vtkScalarsToColorsItem *NewInstance()\n\n"},
  {(char*)"GetBounds", PyvtkScalarsToColorsItem_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nBounds of the item, by default (0, 1, 0, 1) but it mainly depends\non the range of the ScalarsToColors function. Need to be\nreimplemented by subclasses if the range is != [0,1]\n"},
  {(char*)"Paint", PyvtkScalarsToColorsItem_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint the texture into a rectangle defined by the bounds. If\nMaskAboveCurve is true and a shape has been provided by a\nsubclass, it draws the texture into the shape\n"},
  {(char*)"GetPolyLinePen", PyvtkScalarsToColorsItem_GetPolyLinePen, 1,
   (char*)"V.GetPolyLinePen() -> vtkPen\nC++: vtkPen *GetPolyLinePen()\n\nGet a pointer to the vtkPen object that controls the drawing of\nthe edge of the shape if any. PolyLinePen type is vtkPen::NO_PEN\nby default.\n"},
  {(char*)"SetMaskAboveCurve", PyvtkScalarsToColorsItem_SetMaskAboveCurve, 1,
   (char*)"V.SetMaskAboveCurve(bool)\nC++: void SetMaskAboveCurve(bool a)\n\nDon't fill in the part above the transfer function. If true\ntexture is not visible above the shape provided by subclasses,\notherwise the whole rectangle defined by the bounds is filled\nwith the transfer function. Note: only 2D transfer functions (RGB\ntf + alpha tf ) support the feature.\n"},
  {(char*)"GetMaskAboveCurve", PyvtkScalarsToColorsItem_GetMaskAboveCurve, 1,
   (char*)"V.GetMaskAboveCurve() -> bool\nC++: bool GetMaskAboveCurve()\n\nDon't fill in the part above the transfer function. If true\ntexture is not visible above the shape provided by subclasses,\notherwise the whole rectangle defined by the bounds is filled\nwith the transfer function. Note: only 2D transfer functions (RGB\ntf + alpha tf ) support the feature.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkScalarsToColorsItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkScalarsToColorsItem_Methods,
    "vtkScalarsToColorsItem", modulename,
    NULL, NULL,
    PyvtkScalarsToColorsItem_Doc(),
    PyVTKClass_vtkPlotNew(modulename));
  return cls;
}

const char **PyvtkScalarsToColorsItem_Doc()
{
  static const char *docstring[] = {
    "vtkScalarsToColorsItem - Abstract class for ScalarsToColors items.\n\n",
    "Superclass: vtkPlot\n\n",
    "vtkScalarsToColorsItem implements item bounds and painting for\ninherited classes that provide a texture (ComputeTexture()) and\noptionally a shape\n\nSee Also:\n\nvtkControlPointsItem vtkLookupTableItem vtkColorTransferFunctionItem\nvtkCompositeTransferFunctionItem vtkPiecewiseItemFunctionItem\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkScalarsToColorsItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkScalarsToColorsItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkScalarsToColorsItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

