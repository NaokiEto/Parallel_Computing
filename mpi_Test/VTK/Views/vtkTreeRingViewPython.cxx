// python wrapper for vtkTreeRingView
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
#include "vtkTreeRingView.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTreeRingView(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTreeRingView(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTreeRingViewNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTreeRingViewNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTreeAreaViewNew
extern "C" { PyObject *PyVTKClass_vtkTreeAreaViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeAreaViewNew
#endif

static const char **PyvtkTreeRingView_Doc();


static PyObject *
PyvtkTreeRingView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

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
      tempr = op->vtkTreeRingView::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

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
      tempr = op->vtkTreeRingView::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  vtkTreeRingView *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTreeRingView::NewInstance();
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
PyvtkTreeRingView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTreeRingView *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTreeRingView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingView_SetRootAngles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootAngles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRootAngles(temp0, temp1);
      }
    else
      {
      op->vtkTreeRingView::SetRootAngles(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingView_SetRootAtCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootAtCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRootAtCenter(temp0);
      }
    else
      {
      op->vtkTreeRingView::SetRootAtCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingView_GetRootAtCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootAtCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRootAtCenter();
      }
    else
      {
      tempr = op->vtkTreeRingView::GetRootAtCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingView_RootAtCenterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RootAtCenterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RootAtCenterOn();
      }
    else
      {
      op->vtkTreeRingView::RootAtCenterOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingView_RootAtCenterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RootAtCenterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RootAtCenterOff();
      }
    else
      {
      op->vtkTreeRingView::RootAtCenterOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingView_SetLayerThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayerThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

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
      op->vtkTreeRingView::SetLayerThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingView_GetLayerThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

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
      tempr = op->vtkTreeRingView::GetLayerThickness();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingView_SetInteriorRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteriorRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteriorRadius(temp0);
      }
    else
      {
      op->vtkTreeRingView::SetInteriorRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingView_GetInteriorRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteriorRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteriorRadius();
      }
    else
      {
      tempr = op->vtkTreeRingView::GetInteriorRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingView_SetInteriorLogSpacingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteriorLogSpacingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteriorLogSpacingValue(temp0);
      }
    else
      {
      op->vtkTreeRingView::SetInteriorLogSpacingValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeRingView_GetInteriorLogSpacingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteriorLogSpacingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteriorLogSpacingValue();
      }
    else
      {
      tempr = op->vtkTreeRingView::GetInteriorLogSpacingValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeRingView_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeRingView_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeRingView_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeRingView_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTreeRingView\nC++: vtkTreeRingView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeRingView_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeRingView\nC++: vtkTreeRingView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRootAngles", PyvtkTreeRingView_SetRootAngles, 1,
   (char*)"V.SetRootAngles(float, float)\nC++: void SetRootAngles(double start, double end)\n\nSet the root angles for laying out the hierarchy.\n"},
  {(char*)"SetRootAtCenter", PyvtkTreeRingView_SetRootAtCenter, 1,
   (char*)"V.SetRootAtCenter(bool)\nC++: virtual void SetRootAtCenter(bool value)\n\nSets whether the root is at the center or around the outside.\n"},
  {(char*)"GetRootAtCenter", PyvtkTreeRingView_GetRootAtCenter, 1,
   (char*)"V.GetRootAtCenter() -> bool\nC++: virtual bool GetRootAtCenter()\n\nSets whether the root is at the center or around the outside.\n"},
  {(char*)"RootAtCenterOn", PyvtkTreeRingView_RootAtCenterOn, 1,
   (char*)"V.RootAtCenterOn()\nC++: void RootAtCenterOn()\n\nSets whether the root is at the center or around the outside.\n"},
  {(char*)"RootAtCenterOff", PyvtkTreeRingView_RootAtCenterOff, 1,
   (char*)"V.RootAtCenterOff()\nC++: void RootAtCenterOff()\n\nSets whether the root is at the center or around the outside.\n"},
  {(char*)"SetLayerThickness", PyvtkTreeRingView_SetLayerThickness, 1,
   (char*)"V.SetLayerThickness(float)\nC++: virtual void SetLayerThickness(double thickness)\n\nSet the thickness of each layer.\n"},
  {(char*)"GetLayerThickness", PyvtkTreeRingView_GetLayerThickness, 1,
   (char*)"V.GetLayerThickness() -> float\nC++: virtual double GetLayerThickness()\n\nSet the thickness of each layer.\n"},
  {(char*)"SetInteriorRadius", PyvtkTreeRingView_SetInteriorRadius, 1,
   (char*)"V.SetInteriorRadius(float)\nC++: virtual void SetInteriorRadius(double thickness)\n\nSet the interior radius of the tree (i.e. the size of the \"hole\"\nin the center).\n"},
  {(char*)"GetInteriorRadius", PyvtkTreeRingView_GetInteriorRadius, 1,
   (char*)"V.GetInteriorRadius() -> float\nC++: virtual double GetInteriorRadius()\n\nSet the interior radius of the tree (i.e. the size of the \"hole\"\nin the center).\n"},
  {(char*)"SetInteriorLogSpacingValue", PyvtkTreeRingView_SetInteriorLogSpacingValue, 1,
   (char*)"V.SetInteriorLogSpacingValue(float)\nC++: virtual void SetInteriorLogSpacingValue(double thickness)\n\nSet the log spacing factor for the invisible interior tree used\nfor routing edges of the overlaid graph.\n"},
  {(char*)"GetInteriorLogSpacingValue", PyvtkTreeRingView_GetInteriorLogSpacingValue, 1,
   (char*)"V.GetInteriorLogSpacingValue() -> float\nC++: virtual double GetInteriorLogSpacingValue()\n\nSet the log spacing factor for the invisible interior tree used\nfor routing edges of the overlaid graph.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTreeRingView_StaticNew()
{
  return vtkTreeRingView::New();
}

PyObject *PyVTKClass_vtkTreeRingViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTreeRingView_StaticNew,
    PyvtkTreeRingView_Methods,
    "vtkTreeRingView", modulename,
    NULL, NULL,
    PyvtkTreeRingView_Doc(),
    PyVTKClass_vtkTreeAreaViewNew(modulename));
  return cls;
}

const char **PyvtkTreeRingView_Doc()
{
  static const char *docstring[] = {
    "vtkTreeRingView - Displays a tree in concentric rings.\n\n",
    "Superclass: vtkTreeAreaView\n\n",
    "Accepts a graph and a hierarchy - currently a tree - and provides a\nhierarchy-aware display.  Currently, this means displaying the\nhierarchy using a tree ring layout, then rendering the graph vertices\nas leaves of the tree with curved graph edges between leaves.\n\n.SEE ALSO vtkGraphLayoutView\n\nThanks:\n\nThanks to Jason Shepherd for implementing this class\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeRingView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeRingViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeRingView", o) != 0)
    {
    Py_DECREF(o);
    }

}

