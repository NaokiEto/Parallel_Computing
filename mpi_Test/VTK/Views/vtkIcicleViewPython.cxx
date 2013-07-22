// python wrapper for vtkIcicleView
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
#include "vtkIcicleView.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkIcicleView(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkIcicleView(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkIcicleViewNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkIcicleViewNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTreeAreaViewNew
extern "C" { PyObject *PyVTKClass_vtkTreeAreaViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeAreaViewNew
#endif

static const char **PyvtkIcicleView_Doc();


static PyObject *
PyvtkIcicleView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

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
      tempr = op->vtkIcicleView::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIcicleView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

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
      tempr = op->vtkIcicleView::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIcicleView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  vtkIcicleView *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkIcicleView::NewInstance();
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
PyvtkIcicleView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkIcicleView *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkIcicleView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIcicleView_SetTopToBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopToBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTopToBottom(temp0);
      }
    else
      {
      op->vtkIcicleView::SetTopToBottom(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIcicleView_GetTopToBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopToBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTopToBottom();
      }
    else
      {
      tempr = op->vtkIcicleView::GetTopToBottom();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIcicleView_TopToBottomOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TopToBottomOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TopToBottomOn();
      }
    else
      {
      op->vtkIcicleView::TopToBottomOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIcicleView_TopToBottomOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TopToBottomOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TopToBottomOff();
      }
    else
      {
      op->vtkIcicleView::TopToBottomOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIcicleView_SetRootWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRootWidth(temp0);
      }
    else
      {
      op->vtkIcicleView::SetRootWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIcicleView_GetRootWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRootWidth();
      }
    else
      {
      tempr = op->vtkIcicleView::GetRootWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIcicleView_SetLayerThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayerThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLayerThickness(temp0);
      }
    else
      {
      op->vtkIcicleView::SetLayerThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIcicleView_GetLayerThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLayerThickness();
      }
    else
      {
      tempr = op->vtkIcicleView::GetLayerThickness();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIcicleView_SetUseGradientColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseGradientColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseGradientColoring(temp0);
      }
    else
      {
      op->vtkIcicleView::SetUseGradientColoring(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIcicleView_GetUseGradientColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseGradientColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseGradientColoring();
      }
    else
      {
      tempr = op->vtkIcicleView::GetUseGradientColoring();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIcicleView_UseGradientColoringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseGradientColoringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseGradientColoringOn();
      }
    else
      {
      op->vtkIcicleView::UseGradientColoringOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIcicleView_UseGradientColoringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseGradientColoringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseGradientColoringOff();
      }
    else
      {
      op->vtkIcicleView::UseGradientColoringOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkIcicleView_Methods[] = {
  {(char*)"GetClassName", PyvtkIcicleView_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIcicleView_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIcicleView_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkIcicleView\nC++: vtkIcicleView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIcicleView_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIcicleView\nC++: vtkIcicleView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTopToBottom", PyvtkIcicleView_SetTopToBottom, 1,
   (char*)"V.SetTopToBottom(bool)\nC++: virtual void SetTopToBottom(bool value)\n\nSets whether the stacks go from top to bottom or bottom to top.\n"},
  {(char*)"GetTopToBottom", PyvtkIcicleView_GetTopToBottom, 1,
   (char*)"V.GetTopToBottom() -> bool\nC++: virtual bool GetTopToBottom()\n\nSets whether the stacks go from top to bottom or bottom to top.\n"},
  {(char*)"TopToBottomOn", PyvtkIcicleView_TopToBottomOn, 1,
   (char*)"V.TopToBottomOn()\nC++: void TopToBottomOn()\n\nSets whether the stacks go from top to bottom or bottom to top.\n"},
  {(char*)"TopToBottomOff", PyvtkIcicleView_TopToBottomOff, 1,
   (char*)"V.TopToBottomOff()\nC++: void TopToBottomOff()\n\nSets whether the stacks go from top to bottom or bottom to top.\n"},
  {(char*)"SetRootWidth", PyvtkIcicleView_SetRootWidth, 1,
   (char*)"V.SetRootWidth(float)\nC++: virtual void SetRootWidth(double width)\n\nSet the width of the root node\n"},
  {(char*)"GetRootWidth", PyvtkIcicleView_GetRootWidth, 1,
   (char*)"V.GetRootWidth() -> float\nC++: virtual double GetRootWidth()\n\nSet the width of the root node\n"},
  {(char*)"SetLayerThickness", PyvtkIcicleView_SetLayerThickness, 1,
   (char*)"V.SetLayerThickness(float)\nC++: virtual void SetLayerThickness(double thickness)\n\nSet the thickness of each layer\n"},
  {(char*)"GetLayerThickness", PyvtkIcicleView_GetLayerThickness, 1,
   (char*)"V.GetLayerThickness() -> float\nC++: virtual double GetLayerThickness()\n\nSet the thickness of each layer\n"},
  {(char*)"SetUseGradientColoring", PyvtkIcicleView_SetUseGradientColoring, 1,
   (char*)"V.SetUseGradientColoring(bool)\nC++: virtual void SetUseGradientColoring(bool value)\n\nTurn on/off gradient coloring.\n"},
  {(char*)"GetUseGradientColoring", PyvtkIcicleView_GetUseGradientColoring, 1,
   (char*)"V.GetUseGradientColoring() -> bool\nC++: virtual bool GetUseGradientColoring()\n\nTurn on/off gradient coloring.\n"},
  {(char*)"UseGradientColoringOn", PyvtkIcicleView_UseGradientColoringOn, 1,
   (char*)"V.UseGradientColoringOn()\nC++: void UseGradientColoringOn()\n\nTurn on/off gradient coloring.\n"},
  {(char*)"UseGradientColoringOff", PyvtkIcicleView_UseGradientColoringOff, 1,
   (char*)"V.UseGradientColoringOff()\nC++: void UseGradientColoringOff()\n\nTurn on/off gradient coloring.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIcicleView_StaticNew()
{
  return vtkIcicleView::New();
}

PyObject *PyVTKClass_vtkIcicleViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIcicleView_StaticNew,
    PyvtkIcicleView_Methods,
    "vtkIcicleView", modulename,
    NULL, NULL,
    PyvtkIcicleView_Doc(),
    PyVTKClass_vtkTreeAreaViewNew(modulename));
  return cls;
}

const char **PyvtkIcicleView_Doc()
{
  static const char *docstring[] = {
    "vtkIcicleView - Displays a tree in a stacked \"icicle\" view\n\n",
    "Superclass: vtkTreeAreaView\n\n",
    "vtkIcicleView shows a vtkTree in horizontal layers where each vertex\nin the tree is represented by a bar. Child sectors are below (or\nabove) parent sectors, and may be colored and sized by various\nparameters.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIcicleView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIcicleViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIcicleView", o) != 0)
    {
    Py_DECREF(o);
    }

}

