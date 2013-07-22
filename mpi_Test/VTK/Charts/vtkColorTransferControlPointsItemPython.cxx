// python wrapper for vtkColorTransferControlPointsItem
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
#include "vtkColorTransferControlPointsItem.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkColorTransferControlPointsItem(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkColorTransferControlPointsItem(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkColorTransferControlPointsItemNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkColorTransferControlPointsItemNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkControlPointsItemNew
extern "C" { PyObject *PyVTKClass_vtkControlPointsItemNew(const char *); }
#define DECLARED_PyVTKClass_vtkControlPointsItemNew
#endif

static const char **PyvtkColorTransferControlPointsItem_Doc();


static PyObject *
PyvtkColorTransferControlPointsItem_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

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
      tempr = op->vtkColorTransferControlPointsItem::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

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
      tempr = op->vtkColorTransferControlPointsItem::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  vtkColorTransferControlPointsItem *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkColorTransferControlPointsItem::NewInstance();
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
PyvtkColorTransferControlPointsItem_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkColorTransferControlPointsItem *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkColorTransferControlPointsItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_SetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  vtkColorTransferFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
    {
    if (ap.IsBound())
      {
      op->SetColorTransferFunction(temp0);
      }
    else
      {
      op->vtkColorTransferControlPointsItem::SetColorTransferFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_GetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  vtkColorTransferFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorTransferFunction();
      }
    else
      {
      tempr = op->vtkColorTransferControlPointsItem::GetColorTransferFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_SetColorFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorFill(temp0);
      }
    else
      {
      op->vtkColorTransferControlPointsItem::SetColorFill(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkColorTransferControlPointsItem_GetColorFill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorFill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkColorTransferControlPointsItem *op = static_cast<vtkColorTransferControlPointsItem *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorFill();
      }
    else
      {
      tempr = op->vtkColorTransferControlPointsItem::GetColorFill();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkColorTransferControlPointsItem_Methods[] = {
  {(char*)"GetClassName", PyvtkColorTransferControlPointsItem_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkColorTransferControlPointsItem_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkColorTransferControlPointsItem_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkColorTransferControlPointsItem\nC++: vtkColorTransferControlPointsItem *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkColorTransferControlPointsItem_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkColorTransferControlPointsItem\nC++: vtkColorTransferControlPointsItem *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetColorTransferFunction", PyvtkColorTransferControlPointsItem_SetColorTransferFunction, 1,
   (char*)"V.SetColorTransferFunction(vtkColorTransferFunction)\nC++: void SetColorTransferFunction(\n    vtkColorTransferFunction *function)\n\nSet the piecewise function to draw its points\n"},
  {(char*)"GetColorTransferFunction", PyvtkColorTransferControlPointsItem_GetColorTransferFunction, 1,
   (char*)"V.GetColorTransferFunction() -> vtkColorTransferFunction\nC++: vtkColorTransferFunction *GetColorTransferFunction()\n\n"},
  {(char*)"SetColorFill", PyvtkColorTransferControlPointsItem_SetColorFill, 1,
   (char*)"V.SetColorFill(bool)\nC++: void SetColorFill(bool a)\n\nIf ColorFill is true, the control point brush color is set with\nthe matching color in the color transfer function. False by\ndefault.\n"},
  {(char*)"GetColorFill", PyvtkColorTransferControlPointsItem_GetColorFill, 1,
   (char*)"V.GetColorFill() -> bool\nC++: bool GetColorFill()\n\nIf ColorFill is true, the control point brush color is set with\nthe matching color in the color transfer function. False by\ndefault.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkColorTransferControlPointsItem_StaticNew()
{
  return vtkColorTransferControlPointsItem::New();
}

PyObject *PyVTKClass_vtkColorTransferControlPointsItemNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkColorTransferControlPointsItem_StaticNew,
    PyvtkColorTransferControlPointsItem_Methods,
    "vtkColorTransferControlPointsItem", modulename,
    NULL, NULL,
    PyvtkColorTransferControlPointsItem_Doc(),
    PyVTKClass_vtkControlPointsItemNew(modulename));
  return cls;
}

const char **PyvtkColorTransferControlPointsItem_Doc()
{
  static const char *docstring[] = {
    "vtkColorTransferControlPointsItem - Control points for\n\n",
    "Superclass: vtkControlPointsItem\n\n",
    "vtkColorTransferControlPointsItem draws the control points of a\nvtkColorTransferFunction.\n\nSee Also:\n\nvtkControlPointsItem vtkColorTransferFunctionItem\nvtkCompositeTransferFunctionItem\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkColorTransferControlPointsItem(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkColorTransferControlPointsItemNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkColorTransferControlPointsItem", o) != 0)
    {
    Py_DECREF(o);
    }

}

