// python wrapper for vtkLabelRenderStrategy
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
#include "vtkLabelRenderStrategy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLabelRenderStrategy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLabelRenderStrategy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLabelRenderStrategyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLabelRenderStrategyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkLabelRenderStrategy_Doc();


static PyObject *
PyvtkLabelRenderStrategy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

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
      tempr = op->vtkLabelRenderStrategy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

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
      tempr = op->vtkLabelRenderStrategy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  vtkLabelRenderStrategy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLabelRenderStrategy::NewInstance();
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
PyvtkLabelRenderStrategy_SupportsRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

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
      tempr = op->vtkLabelRenderStrategy::SupportsRotation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_SupportsBoundedSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsBoundedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

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
      tempr = op->vtkLabelRenderStrategy::SupportsBoundedSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkLabelRenderStrategy::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  vtkRenderer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderer();
      }
    else
      {
      tempr = op->vtkLabelRenderStrategy::GetRenderer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_SetDefaultTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetDefaultTextProperty(temp0);
      }
    else
      {
      op->vtkLabelRenderStrategy::SetDefaultTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_GetDefaultTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultTextProperty();
      }
    else
      {
      tempr = op->vtkLabelRenderStrategy::GetDefaultTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_ComputeLabelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeLabelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

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
      op->vtkLabelRenderStrategy::ComputeLabelBounds(temp0, temp1, temp2);
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
PyvtkLabelRenderStrategy_ComputeLabelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeLabelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  vtkTextProperty *temp0 = NULL;
  vtkUnicodeString temp1;
  double temp2[4];
  double save2[4];
  const int size2 = 4;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp2, save2, size2);

    op->ComputeLabelBounds(temp0, temp1, temp2);

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

static PyMethodDef PyvtkLabelRenderStrategy_ComputeLabelBounds_Methods[] = {
  {NULL, PyvtkLabelRenderStrategy_ComputeLabelBounds_s1, 1,
   (char*)"@OsO *vtkTextProperty *d"},
  {NULL, PyvtkLabelRenderStrategy_ComputeLabelBounds_s2, 1,
   (char*)"@OOO *vtkTextProperty unicode *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLabelRenderStrategy_ComputeLabelBounds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLabelRenderStrategy_ComputeLabelBounds_Methods;
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
PyvtkLabelRenderStrategy_RenderLabel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

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
      op->vtkLabelRenderStrategy::RenderLabel(temp0, temp1, temp2);
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
PyvtkLabelRenderStrategy_RenderLabel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

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
      op->vtkLabelRenderStrategy::RenderLabel(temp0, temp1, temp2, temp3);
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
PyvtkLabelRenderStrategy_RenderLabel_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  int temp0[2];
  int save0[2];
  const int size0 = 2;
  vtkTextProperty *temp1 = NULL;
  vtkUnicodeString temp2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2))
    {
    ap.SaveArray(temp0, save0, size0);

    op->RenderLabel(temp0, temp1, temp2);

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
PyvtkLabelRenderStrategy_RenderLabel_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

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
      op->vtkLabelRenderStrategy::RenderLabel(temp0, temp1, temp2, temp3);
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

static PyMethodDef PyvtkLabelRenderStrategy_RenderLabel_Methods[] = {
  {NULL, PyvtkLabelRenderStrategy_RenderLabel_s1, 1,
   (char*)"@OOs *i *vtkTextProperty"},
  {NULL, PyvtkLabelRenderStrategy_RenderLabel_s2, 1,
   (char*)"@OOsi *i *vtkTextProperty"},
  {NULL, PyvtkLabelRenderStrategy_RenderLabel_s3, 1,
   (char*)"@OOO *i *vtkTextProperty unicode"},
  {NULL, PyvtkLabelRenderStrategy_RenderLabel_s4, 1,
   (char*)"@OOOi *i *vtkTextProperty unicode"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkLabelRenderStrategy_RenderLabel(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLabelRenderStrategy_RenderLabel_Methods;
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
PyvtkLabelRenderStrategy_StartFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartFrame();
      }
    else
      {
      op->vtkLabelRenderStrategy::StartFrame();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_EndFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndFrame();
      }
    else
      {
      op->vtkLabelRenderStrategy::EndFrame();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

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
      op->vtkLabelRenderStrategy::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLabelRenderStrategy_Methods[] = {
  {(char*)"GetClassName", PyvtkLabelRenderStrategy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLabelRenderStrategy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLabelRenderStrategy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLabelRenderStrategy\nC++: vtkLabelRenderStrategy *NewInstance()\n\n"},
  {(char*)"SupportsRotation", PyvtkLabelRenderStrategy_SupportsRotation, 1,
   (char*)"V.SupportsRotation() -> bool\nC++: virtual bool SupportsRotation()\n\nWhether the text rendering strategy supports rotation. The\nsuperclass returns true. Subclasses should override this to\nreturn the appropriate value.\n"},
  {(char*)"SupportsBoundedSize", PyvtkLabelRenderStrategy_SupportsBoundedSize, 1,
   (char*)"V.SupportsBoundedSize() -> bool\nC++: virtual bool SupportsBoundedSize()\n\nWhether the text rendering strategy supports bounded size. The\nsuperclass returns true. Subclasses should override this to\nreturn the appropriate value. Subclasses that return true from\nthis method should implement the version of RenderLabel() that\ntakes a maximum size (see RenderLabel()).\n"},
  {(char*)"SetRenderer", PyvtkLabelRenderStrategy_SetRenderer, 1,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\nSet the renderer associated with this strategy.\n"},
  {(char*)"GetRenderer", PyvtkLabelRenderStrategy_GetRenderer, 1,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nSet the renderer associated with this strategy.\n"},
  {(char*)"SetDefaultTextProperty", PyvtkLabelRenderStrategy_SetDefaultTextProperty, 1,
   (char*)"V.SetDefaultTextProperty(vtkTextProperty)\nC++: virtual void SetDefaultTextProperty(vtkTextProperty *tprop)\n\nSet the default text property for the strategy.\n"},
  {(char*)"GetDefaultTextProperty", PyvtkLabelRenderStrategy_GetDefaultTextProperty, 1,
   (char*)"V.GetDefaultTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetDefaultTextProperty()\n\nSet the default text property for the strategy.\n"},
  {(char*)"ComputeLabelBounds", PyvtkLabelRenderStrategy_ComputeLabelBounds, 1,
   (char*)"V.ComputeLabelBounds(vtkTextProperty, string, [float, float,\n    float, float])\nC++: virtual void ComputeLabelBounds(vtkTextProperty *tprop,\n    vtkStdString label, double bds[4])\nV.ComputeLabelBounds(vtkTextProperty, unicode, [float, float,\n    float, float])\nC++: virtual void ComputeLabelBounds(vtkTextProperty *tprop,\n    vtkUnicodeString label, double bds[4])\n\nCompute the bounds of a label. Must be performed after the\nrenderer is set. Only the unicode string version must be\nimplemented in subclasses.\n"},
  {(char*)"RenderLabel", PyvtkLabelRenderStrategy_RenderLabel, 1,
   (char*)"V.RenderLabel([int, int], vtkTextProperty, string)\nC++: virtual void RenderLabel(int x[2], vtkTextProperty *tprop,\n    vtkStdString label)\nV.RenderLabel([int, int], vtkTextProperty, string, int)\nC++: virtual void RenderLabel(int x[2], vtkTextProperty *tprop,\n    vtkStdString label, int maxWidth)\nV.RenderLabel([int, int], vtkTextProperty, unicode)\nC++: virtual void RenderLabel(int x[2], vtkTextProperty *tprop,\n    vtkUnicodeString label)\nV.RenderLabel([int, int], vtkTextProperty, unicode, int)\nC++: virtual void RenderLabel(int x[2], vtkTextProperty *tprop,\n    vtkUnicodeString label, int maxWidth)\n\nRender a label at a location in display coordinates. Must be\nperformed between StartFrame() and EndFrame() calls. Only the\nunicode string version must be implemented in subclasses. The\noptional final parameter maxWidth specifies a maximum width for\nthe label. Longer labels can be shorted with an ellipsis (...).\nOnly renderer strategies that return true from\nSupportsBoundedSize must implement this version of th method.\n"},
  {(char*)"StartFrame", PyvtkLabelRenderStrategy_StartFrame, 1,
   (char*)"V.StartFrame()\nC++: virtual void StartFrame()\n\nStart a rendering frame. Renderer must be set.\n"},
  {(char*)"EndFrame", PyvtkLabelRenderStrategy_EndFrame, 1,
   (char*)"V.EndFrame()\nC++: virtual void EndFrame()\n\nEnd a rendering frame.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkLabelRenderStrategy_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nstrategy. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkLabelRenderStrategyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkLabelRenderStrategy_Methods,
    "vtkLabelRenderStrategy", modulename,
    NULL, NULL,
    PyvtkLabelRenderStrategy_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkLabelRenderStrategy_Doc()
{
  static const char *docstring[] = {
    "vtkLabelRenderStrategy - Superclass for label rendering\nimplementations.\n\n",
    "Superclass: vtkObject\n\n",
    "These methods should only be called within a mapper.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLabelRenderStrategy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLabelRenderStrategyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLabelRenderStrategy", o) != 0)
    {
    Py_DECREF(o);
    }

}

