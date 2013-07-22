// python wrapper for vtkFreeTypeLabelRenderStrategy
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
#include "vtkUnicodeString.h"
#include "vtkFreeTypeLabelRenderStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFreeTypeLabelRenderStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFreeTypeLabelRenderStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFreeTypeLabelRenderStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFreeTypeLabelRenderStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkLabelRenderStrategyNew
extern "C" { PyObject *PyVTKClass_vtkLabelRenderStrategyNew(const char *); }
#define DECLARED_PyVTKClass_vtkLabelRenderStrategyNew
#endif

static const char **PyvtkFreeTypeLabelRenderStrategy_Doc();


static PyObject *
PyvtkFreeTypeLabelRenderStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

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
      tempr = op->vtkFreeTypeLabelRenderStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFreeTypeLabelRenderStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

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
      tempr = op->vtkFreeTypeLabelRenderStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFreeTypeLabelRenderStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  vtkFreeTypeLabelRenderStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFreeTypeLabelRenderStrategy::NewInstance();
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
PyvtkFreeTypeLabelRenderStrategy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkFreeTypeLabelRenderStrategy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkFreeTypeLabelRenderStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFreeTypeLabelRenderStrategy_SupportsRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->SupportsRotation();
      }
    else
      {
      tempr = op->vtkFreeTypeLabelRenderStrategy::SupportsRotation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFreeTypeLabelRenderStrategy_SupportsBoundedSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsBoundedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->SupportsBoundedSize();
      }
    else
      {
      tempr = op->vtkFreeTypeLabelRenderStrategy::SupportsBoundedSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFreeTypeLabelRenderStrategy_ComputeLabelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeLabelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkStdString temp1;
  double temp2[4];
  double save2[4];
  const int size2 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->ComputeLabelBounds(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFreeTypeLabelRenderStrategy::ComputeLabelBounds(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFreeTypeLabelRenderStrategy_ComputeLabelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeLabelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkUnicodeString temp1;
  double temp2[4];
  double save2[4];
  const int size2 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->ComputeLabelBounds(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFreeTypeLabelRenderStrategy::ComputeLabelBounds(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFreeTypeLabelRenderStrategy_ComputeLabelBounds_Methods[] = {
  {NULL, PyvtkFreeTypeLabelRenderStrategy_ComputeLabelBounds_s1, 1,
   (char*)"@OsO *vtkTextProperty *d"},
  {NULL, PyvtkFreeTypeLabelRenderStrategy_ComputeLabelBounds_s2, 1,
   (char*)"@OOO *vtkTextProperty unicode *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkFreeTypeLabelRenderStrategy_ComputeLabelBounds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFreeTypeLabelRenderStrategy_ComputeLabelBounds_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeLabelBounds");
  return NULL;
}



static PyObject *
PyvtkFreeTypeLabelRenderStrategy_RenderLabel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  vtkTextProperty *temp1 = NULL;
  vtkStdString temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->RenderLabel(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFreeTypeLabelRenderStrategy::RenderLabel(temp0, temp1, temp2);
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
PyvtkFreeTypeLabelRenderStrategy_RenderLabel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  vtkTextProperty *temp1 = NULL;
  vtkStdString temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->RenderLabel(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkFreeTypeLabelRenderStrategy::RenderLabel(temp0, temp1, temp2, temp3);
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
PyvtkFreeTypeLabelRenderStrategy_RenderLabel_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  vtkTextProperty *temp1 = NULL;
  vtkUnicodeString temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->RenderLabel(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFreeTypeLabelRenderStrategy::RenderLabel(temp0, temp1, temp2);
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
PyvtkFreeTypeLabelRenderStrategy_RenderLabel_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  vtkTextProperty *temp1 = NULL;
  vtkUnicodeString temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->RenderLabel(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkFreeTypeLabelRenderStrategy::RenderLabel(temp0, temp1, temp2, temp3);
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

static PyMethodDef PyvtkFreeTypeLabelRenderStrategy_RenderLabel_Methods[] = {
  {NULL, PyvtkFreeTypeLabelRenderStrategy_RenderLabel_s1, 1,
   (char*)"@OOs *i *vtkTextProperty"},
  {NULL, PyvtkFreeTypeLabelRenderStrategy_RenderLabel_s2, 1,
   (char*)"@OOsi *i *vtkTextProperty"},
  {NULL, PyvtkFreeTypeLabelRenderStrategy_RenderLabel_s3, 1,
   (char*)"@OOO *i *vtkTextProperty unicode"},
  {NULL, PyvtkFreeTypeLabelRenderStrategy_RenderLabel_s4, 1,
   (char*)"@OOOi *i *vtkTextProperty unicode"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkFreeTypeLabelRenderStrategy_RenderLabel(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFreeTypeLabelRenderStrategy_RenderLabel_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RenderLabel");
  return NULL;
}



static PyObject *
PyvtkFreeTypeLabelRenderStrategy_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkFreeTypeLabelRenderStrategy::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFreeTypeLabelRenderStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkFreeTypeLabelRenderStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFreeTypeLabelRenderStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFreeTypeLabelRenderStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFreeTypeLabelRenderStrategy\nC++: vtkFreeTypeLabelRenderStrategy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFreeTypeLabelRenderStrategy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFreeTypeLabelRenderStrategy\nC++: vtkFreeTypeLabelRenderStrategy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SupportsRotation", PyvtkFreeTypeLabelRenderStrategy_SupportsRotation, 1,
   (char*)"V.SupportsRotation() -> bool\nC++: virtual bool SupportsRotation()\n\nThe free type render strategy currently does not support\nrotation.\n"},
  {(char*)"SupportsBoundedSize", PyvtkFreeTypeLabelRenderStrategy_SupportsBoundedSize, 1,
   (char*)"V.SupportsBoundedSize() -> bool\nC++: virtual bool SupportsBoundedSize()\n\nThe free type render strategy currently does not support bounded\nsize labels.\n"},
  {(char*)"ComputeLabelBounds", PyvtkFreeTypeLabelRenderStrategy_ComputeLabelBounds, 1,
   (char*)"V.ComputeLabelBounds(vtkTextProperty, string, [float, float,\n    float, float])\nC++: virtual void ComputeLabelBounds(vtkTextProperty *tprop,\n    vtkStdString label, double bds[4])\nV.ComputeLabelBounds(vtkTextProperty, unicode, [float, float,\n    float, float])\nC++: virtual void ComputeLabelBounds(vtkTextProperty *tprop,\n    vtkUnicodeString label, double bds[4])\n\nCompute the bounds of a label. Must be performed after the\nrenderer is set.\n"},
  {(char*)"RenderLabel", PyvtkFreeTypeLabelRenderStrategy_RenderLabel, 1,
   (char*)"V.RenderLabel([int, int], vtkTextProperty, string)\nC++: virtual void RenderLabel(int x[2], vtkTextProperty *tprop,\n    vtkStdString label)\nV.RenderLabel([int, int], vtkTextProperty, string, int)\nC++: virtual void RenderLabel(int x[2], vtkTextProperty *tprop,\n    vtkStdString label, int width)\nV.RenderLabel([int, int], vtkTextProperty, unicode)\nC++: virtual void RenderLabel(int x[2], vtkTextProperty *tprop,\n    vtkUnicodeString label)\nV.RenderLabel([int, int], vtkTextProperty, unicode, int)\nC++: virtual void RenderLabel(int x[2], vtkTextProperty *tprop,\n    vtkUnicodeString label, int width)\n\nRender a label at a location in world coordinates. Must be\nperformed between StartFrame() and EndFrame() calls.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkFreeTypeLabelRenderStrategy_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *window)\n\nRelease any graphics resources that are being consumed by this\nstrategy. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFreeTypeLabelRenderStrategy_StaticNew()
{
  return vtkFreeTypeLabelRenderStrategy::New();
}

PyObject *PyVTKClass_vtkFreeTypeLabelRenderStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFreeTypeLabelRenderStrategy_StaticNew,
    PyvtkFreeTypeLabelRenderStrategy_Methods,
    "vtkFreeTypeLabelRenderStrategy", modulename,
    NULL, NULL,
    PyvtkFreeTypeLabelRenderStrategy_Doc(),
    PyVTKClass_vtkLabelRenderStrategyNew(modulename));
  return cls;
}

const char **PyvtkFreeTypeLabelRenderStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkFreeTypeLabelRenderStrategy - Renders labels with freetype\n\n",
    "Superclass: vtkLabelRenderStrategy\n\n",
    "Uses the FreeType to render labels and compute label sizes. This\nstrategy may be used with vtkLabelPlacementMapper.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFreeTypeLabelRenderStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFreeTypeLabelRenderStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFreeTypeLabelRenderStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

