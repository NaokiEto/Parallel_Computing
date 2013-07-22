// python wrapper for vtkPiecewiseControlPointsItem
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
#include "vtkPiecewiseControlPointsItem.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPiecewiseControlPointsItem(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPiecewiseControlPointsItem(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPiecewiseControlPointsItemNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPiecewiseControlPointsItemNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkControlPointsItemNew
extern "C" { PyObject *PyVTKClass_vtkControlPointsItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkControlPointsItemNew
#endif

static const char **PyvtkPiecewiseControlPointsItem_Doc();


static PyObject *
PyvtkPiecewiseControlPointsItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

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
      tempr = op->vtkPiecewiseControlPointsItem::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

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
      tempr = op->vtkPiecewiseControlPointsItem::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

  vtkPiecewiseControlPointsItem *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPiecewiseControlPointsItem::NewInstance();
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
PyvtkPiecewiseControlPointsItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPiecewiseControlPointsItem *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPiecewiseControlPointsItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_SetPiecewiseFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiecewiseFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

  vtkPiecewiseFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
    {
    if (ap.IsBound())
      {
      op->SetPiecewiseFunction(temp0);
      }
    else
      {
      op->vtkPiecewiseControlPointsItem::SetPiecewiseFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_GetPiecewiseFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiecewiseFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

  vtkPiecewiseFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPiecewiseFunction();
      }
    else
      {
      tempr = op->vtkPiecewiseControlPointsItem::GetPiecewiseFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPiecewiseControlPointsItem_SetStrokeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrokeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseControlPointsItem *op = static_cast<vtkPiecewiseControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStrokeMode(temp0);
      }
    else
      {
      op->vtkPiecewiseControlPointsItem::SetStrokeMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPiecewiseControlPointsItem_Methods[] = {
  {(char*)"GetClassName", PyvtkPiecewiseControlPointsItem_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPiecewiseControlPointsItem_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPiecewiseControlPointsItem_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPiecewiseControlPointsItem\nC++: vtkPiecewiseControlPointsItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPiecewiseControlPointsItem_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPiecewiseControlPointsItem\nC++: vtkPiecewiseControlPointsItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPiecewiseFunction", PyvtkPiecewiseControlPointsItem_SetPiecewiseFunction, 1,
   (char*)"V.SetPiecewiseFunction(vtkPiecewiseFunction)\nC++: virtual void SetPiecewiseFunction(\n    vtkPiecewiseFunction *function)\n\nSet the piecewise function to draw its points\n"},
  {(char*)"GetPiecewiseFunction", PyvtkPiecewiseControlPointsItem_GetPiecewiseFunction, 1,
   (char*)"V.GetPiecewiseFunction() -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetPiecewiseFunction()\n\n"},
  {(char*)"SetStrokeMode", PyvtkPiecewiseControlPointsItem_SetStrokeMode, 1,
   (char*)"V.SetStrokeMode(bool)\nC++: void SetStrokeMode(bool a)\n\nControls whether or not control points are drawn (true) or\nclicked and moved (false). False by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPiecewiseControlPointsItem_StaticNew()
{
  return vtkPiecewiseControlPointsItem::New();
}

PyObject *PyVTKClass_vtkPiecewiseControlPointsItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPiecewiseControlPointsItem_StaticNew,
    PyvtkPiecewiseControlPointsItem_Methods,
    "vtkPiecewiseControlPointsItem", modulename,
    NULL, NULL,
    PyvtkPiecewiseControlPointsItem_Doc(),
    PyVTKClass_vtkControlPointsItemNew(modulename));
  return cls;
}

const char **PyvtkPiecewiseControlPointsItem_Doc()
{
  static const char *docstring[] = {
    "vtkPiecewiseControlPointsItem - Control points for\n\n",
    "Superclass: vtkControlPointsItem\n\n",
    "vtkPiecewiseControlPointsItem draws the control points of a\nvtkPiecewiseFunction.\n\nSee Also:\n\nvtkControlPointsItem vtkPiecewiseFunctionItem\nvtkCompositeTransferFunctionItem\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPiecewiseControlPointsItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPiecewiseControlPointsItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPiecewiseControlPointsItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

