// python wrapper for vtkColorLegend
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
#include "vtkColorLegend.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkColorLegend(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkColorLegend(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkColorLegendNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkColorLegendNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkChartLegendNew
extern "C" { PyObject *PyVTKClass_vtkChartLegendNew(const char *); }
#define DECLARED_PyVTKClass_vtkChartLegendNew
#endif

static const char **PyvtkColorLegend_Doc();


static PyObject *
PyvtkColorLegend_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

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
      tempr = op->vtkColorLegend::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

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
      tempr = op->vtkColorLegend::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  vtkColorLegend *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkColorLegend::NewInstance();
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
PyvtkColorLegend_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkColorLegend *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkColorLegend::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

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
      op->vtkColorLegend::GetBounds(temp0);
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
PyvtkColorLegend_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Update();
      }
    else
      {
      op->vtkColorLegend::Update();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

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
      tempr = op->vtkColorLegend::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_SetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetTransferFunction(temp0);
      }
    else
      {
      op->vtkColorLegend::SetTransferFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_GetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  vtkScalarsToColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransferFunction();
      }
    else
      {
      tempr = op->vtkColorLegend::GetTransferFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  vtkRectf *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf"))
    {
    if (ap.IsBound())
      {
      op->SetPosition(*temp0);
      }
    else
      {
      op->vtkColorLegend::SetPosition(*temp0);
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
PyvtkColorLegend_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  vtkRectf tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPosition();
      }
    else
      {
      tempr = op->vtkColorLegend::GetPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
      }
    }

  return result;
}


static PyObject *
PyvtkColorLegend_GetBoundingRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorLegend *op = static_cast<vtkColorLegend *>(vp);

  vtkContext2D *temp0 = NULL;
  vtkRectf tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBoundingRect(temp0);
      }
    else
      {
      tempr = op->vtkColorLegend::GetBoundingRect(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
      }
    }

  return result;
}

static PyMethodDef PyvtkColorLegend_Methods[] = {
  {(char*)"GetClassName", PyvtkColorLegend_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkColorLegend_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkColorLegend_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkColorLegend\nC++: vtkColorLegend *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkColorLegend_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkColorLegend\nC++: vtkColorLegend *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetBounds", PyvtkColorLegend_GetBounds, 1,
   (char*)"V.GetBounds([float, float, float, float])\nC++: virtual void GetBounds(double bounds[4])\n\nBounds of the item, by default (0, 1, 0, 1) but it mainly depends\non the range of the vtkScalarsToColors function.\n"},
  {(char*)"Update", PyvtkColorLegend_Update, 1,
   (char*)"V.Update()\nC++: virtual void Update()\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {(char*)"Paint", PyvtkColorLegend_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint the texture into a rectangle defined by the bounds. If\nMaskAboveCurve is true and a shape has been provided by a\nsubclass, it draws the texture into the shape\n"},
  {(char*)"SetTransferFunction", PyvtkColorLegend_SetTransferFunction, 1,
   (char*)"V.SetTransferFunction(vtkScalarsToColors)\nC++: virtual void SetTransferFunction(\n    vtkScalarsToColors *transfer)\n\n"},
  {(char*)"GetTransferFunction", PyvtkColorLegend_GetTransferFunction, 1,
   (char*)"V.GetTransferFunction() -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetTransferFunction()\n\n"},
  {(char*)"SetPosition", PyvtkColorLegend_SetPosition, 1,
   (char*)"V.SetPosition(vtkRectf)\nC++: virtual void SetPosition(const vtkRectf &pos)\n\n"},
  {(char*)"GetPosition", PyvtkColorLegend_GetPosition, 1,
   (char*)"V.GetPosition() -> vtkRectf\nC++: virtual vtkRectf GetPosition()\n\n"},
  {(char*)"GetBoundingRect", PyvtkColorLegend_GetBoundingRect, 1,
   (char*)"V.GetBoundingRect(vtkContext2D) -> vtkRectf\nC++: vtkRectf GetBoundingRect(vtkContext2D *painter)\n\nRequest the space the legend requires to be drawn. This is\nreturned as a vtkRect4f, with the corner being the offset from\nPoint, and the width/ height being the total width/height\nrequired by the axis. In order to ensure the numbers are correct,\nUpdate() should be called first.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkColorLegend_StaticNew()
{
  return vtkColorLegend::New();
}

PyObject *PyVTKClass_vtkColorLegendNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkColorLegend_StaticNew,
    PyvtkColorLegend_Methods,
    "vtkColorLegend", modulename,
    NULL, NULL,
    PyvtkColorLegend_Doc(),
    PyVTKClass_vtkChartLegendNew(modulename));
  return cls;
}

const char **PyvtkColorLegend_Doc()
{
  static const char *docstring[] = {
    "vtkColorLegend - Legend item to display vtkScalarsToColors.\n\n",
    "Superclass: vtkChartLegend\n\n",
    "vtkColorLegend is an item that will display the vtkScalarsToColors\nusing a 1D texture, and a vtkAxis to show both the color and\nnumerical range.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkColorLegend(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkColorLegendNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColorLegend", o) != 0)
    {
    Py_DECREF(o);
    }

}

