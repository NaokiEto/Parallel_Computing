// python wrapper for vtkTreeMapView
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
#include "vtkTreeMapView.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTreeMapView(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTreeMapView(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTreeMapViewNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTreeMapViewNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTreeAreaViewNew
extern "C" { PyObject *PyVTKClass_vtkTreeAreaViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkTreeAreaViewNew
#endif

static const char **PyvtkTreeMapView_Doc();


static PyObject *
PyvtkTreeMapView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

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
      tempr = op->vtkTreeMapView::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

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
      tempr = op->vtkTreeMapView::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  vtkTreeMapView *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTreeMapView::NewInstance();
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
PyvtkTreeMapView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTreeMapView *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTreeMapView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapView_SetLayoutStrategy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  vtkAreaLayoutStrategy *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAreaLayoutStrategy"))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategy(temp0);
      }
    else
      {
      op->vtkTreeMapView::SetLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTreeMapView_SetLayoutStrategy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategy(temp0);
      }
    else
      {
      op->vtkTreeMapView::SetLayoutStrategy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTreeMapView_SetLayoutStrategy_Methods[] = {
  {NULL, PyvtkTreeMapView_SetLayoutStrategy_s1, 1,
   (char*)"@O *vtkAreaLayoutStrategy"},
  {NULL, PyvtkTreeMapView_SetLayoutStrategy_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkTreeMapView_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTreeMapView_SetLayoutStrategy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLayoutStrategy");
  return NULL;
}



static PyObject *
PyvtkTreeMapView_SetLayoutStrategyToBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToBox();
      }
    else
      {
      op->vtkTreeMapView::SetLayoutStrategyToBox();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapView_SetLayoutStrategyToSliceAndDice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToSliceAndDice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToSliceAndDice();
      }
    else
      {
      op->vtkTreeMapView::SetLayoutStrategyToSliceAndDice();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapView_SetLayoutStrategyToSquarify(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToSquarify");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLayoutStrategyToSquarify();
      }
    else
      {
      op->vtkTreeMapView::SetLayoutStrategyToSquarify();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapView_SetFontSizeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontSizeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  int temp0;
  int temp1;
  int temp2 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->SetFontSizeRange(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTreeMapView::SetFontSizeRange(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTreeMapView_GetFontSizeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSizeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetFontSizeRange(temp0);
      }
    else
      {
      op->vtkTreeMapView::GetFontSizeRange(temp0);
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

static PyMethodDef PyvtkTreeMapView_Methods[] = {
  {(char*)"GetClassName", PyvtkTreeMapView_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTreeMapView_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTreeMapView_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTreeMapView\nC++: vtkTreeMapView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTreeMapView_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTreeMapView\nC++: vtkTreeMapView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLayoutStrategy", PyvtkTreeMapView_SetLayoutStrategy, 1,
   (char*)"V.SetLayoutStrategy(vtkAreaLayoutStrategy)\nC++: virtual void SetLayoutStrategy(vtkAreaLayoutStrategy *s)\nV.SetLayoutStrategy(string)\nC++: virtual void SetLayoutStrategy(const char *name)\n\nSets the treemap layout strategy\n"},
  {(char*)"SetLayoutStrategyToBox", PyvtkTreeMapView_SetLayoutStrategyToBox, 1,
   (char*)"V.SetLayoutStrategyToBox()\nC++: virtual void SetLayoutStrategyToBox()\n\nSets the treemap layout strategy\n"},
  {(char*)"SetLayoutStrategyToSliceAndDice", PyvtkTreeMapView_SetLayoutStrategyToSliceAndDice, 1,
   (char*)"V.SetLayoutStrategyToSliceAndDice()\nC++: virtual void SetLayoutStrategyToSliceAndDice()\n\nSets the treemap layout strategy\n"},
  {(char*)"SetLayoutStrategyToSquarify", PyvtkTreeMapView_SetLayoutStrategyToSquarify, 1,
   (char*)"V.SetLayoutStrategyToSquarify()\nC++: virtual void SetLayoutStrategyToSquarify()\n\nSets the treemap layout strategy\n"},
  {(char*)"SetFontSizeRange", PyvtkTreeMapView_SetFontSizeRange, 1,
   (char*)"V.SetFontSizeRange(int, int, int)\nC++: virtual void SetFontSizeRange(const int maxSize,\n    const int minSize, const int delta=4)\n\nThe sizes of the fonts used for labeling.\n"},
  {(char*)"GetFontSizeRange", PyvtkTreeMapView_GetFontSizeRange, 1,
   (char*)"V.GetFontSizeRange([int, int, int])\nC++: virtual void GetFontSizeRange(int range[3])\n\nThe sizes of the fonts used for labeling.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTreeMapView_StaticNew()
{
  return vtkTreeMapView::New();
}

PyObject *PyVTKClass_vtkTreeMapViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTreeMapView_StaticNew,
    PyvtkTreeMapView_Methods,
    "vtkTreeMapView", modulename,
    NULL, NULL,
    PyvtkTreeMapView_Doc(),
    PyVTKClass_vtkTreeAreaViewNew(modulename));
  return cls;
}

const char **PyvtkTreeMapView_Doc()
{
  static const char *docstring[] = {
    "vtkTreeMapView - Displays a tree as a tree map.\n\n",
    "Superclass: vtkTreeAreaView\n\n",
    "vtkTreeMapView shows a vtkTree in a tree map, where each vertex in\nthe tree is represented by a box.  Child boxes are contained within\nthe parent box, and may be colored and sized by various parameters.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTreeMapView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTreeMapViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTreeMapView", o) != 0)
    {
    Py_DECREF(o);
    }

}

