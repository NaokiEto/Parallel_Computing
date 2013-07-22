// python wrapper for vtkGraphToGlyphs
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
#include "vtkGraphToGlyphs.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGraphToGlyphs(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGraphToGlyphs(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGraphToGlyphsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGraphToGlyphsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkGraphToGlyphs_Doc();


static PyObject *
PyvtkGraphToGlyphs_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

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
      tempr = op->vtkGraphToGlyphs::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

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
      tempr = op->vtkGraphToGlyphs::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  vtkGraphToGlyphs *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGraphToGlyphs::NewInstance();
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
PyvtkGraphToGlyphs_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGraphToGlyphs *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGraphToGlyphs::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_SetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGlyphType(temp0);
      }
    else
      {
      op->vtkGraphToGlyphs::SetGlyphType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGlyphType();
      }
    else
      {
      tempr = op->vtkGraphToGlyphs::GetGlyphType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_SetFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilled(temp0);
      }
    else
      {
      op->vtkGraphToGlyphs::SetFilled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFilled();
      }
    else
      {
      tempr = op->vtkGraphToGlyphs::GetFilled();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_FilledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FilledOn();
      }
    else
      {
      op->vtkGraphToGlyphs::FilledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_FilledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FilledOff();
      }
    else
      {
      op->vtkGraphToGlyphs::FilledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_SetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScreenSize(temp0);
      }
    else
      {
      op->vtkGraphToGlyphs::SetScreenSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScreenSize();
      }
    else
      {
      tempr = op->vtkGraphToGlyphs::GetScreenSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

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
      op->vtkGraphToGlyphs::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

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
      tempr = op->vtkGraphToGlyphs::GetRenderer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaling(temp0);
      }
    else
      {
      op->vtkGraphToGlyphs::SetScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaling();
      }
    else
      {
      tempr = op->vtkGraphToGlyphs::GetScaling();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkGraphToGlyphs::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGraphToGlyphs_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphToGlyphs_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphToGlyphs_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphToGlyphs_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGraphToGlyphs\nC++: vtkGraphToGlyphs *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphToGlyphs_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphToGlyphs\nC++: vtkGraphToGlyphs *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGlyphType", PyvtkGraphToGlyphs_SetGlyphType, 1,
   (char*)"V.SetGlyphType(int)\nC++: void SetGlyphType(int a)\n\nThe glyph type, specified as one of the enumerated values in this\nclass. VERTEX is a special glyph that cannot be scaled, but\ninstead is rendered as an OpenGL vertex primitive. This may\nappear as a box or circle depending on the hardware.\n"},
  {(char*)"GetGlyphType", PyvtkGraphToGlyphs_GetGlyphType, 1,
   (char*)"V.GetGlyphType() -> int\nC++: int GetGlyphType()\n\nThe glyph type, specified as one of the enumerated values in this\nclass. VERTEX is a special glyph that cannot be scaled, but\ninstead is rendered as an OpenGL vertex primitive. This may\nappear as a box or circle depending on the hardware.\n"},
  {(char*)"SetFilled", PyvtkGraphToGlyphs_SetFilled, 1,
   (char*)"V.SetFilled(bool)\nC++: void SetFilled(bool a)\n\nWhether to fill the glyph, or to just render the outline.\n"},
  {(char*)"GetFilled", PyvtkGraphToGlyphs_GetFilled, 1,
   (char*)"V.GetFilled() -> bool\nC++: bool GetFilled()\n\nWhether to fill the glyph, or to just render the outline.\n"},
  {(char*)"FilledOn", PyvtkGraphToGlyphs_FilledOn, 1,
   (char*)"V.FilledOn()\nC++: void FilledOn()\n\nWhether to fill the glyph, or to just render the outline.\n"},
  {(char*)"FilledOff", PyvtkGraphToGlyphs_FilledOff, 1,
   (char*)"V.FilledOff()\nC++: void FilledOff()\n\nWhether to fill the glyph, or to just render the outline.\n"},
  {(char*)"SetScreenSize", PyvtkGraphToGlyphs_SetScreenSize, 1,
   (char*)"V.SetScreenSize(float)\nC++: void SetScreenSize(double a)\n\nSet the desired screen size of each glyph. If you are using\nscaling, this will be the size of the glyph when rendering an\nobject with scaling value 1.0.\n"},
  {(char*)"GetScreenSize", PyvtkGraphToGlyphs_GetScreenSize, 1,
   (char*)"V.GetScreenSize() -> float\nC++: double GetScreenSize()\n\nSet the desired screen size of each glyph. If you are using\nscaling, this will be the size of the glyph when rendering an\nobject with scaling value 1.0.\n"},
  {(char*)"SetRenderer", PyvtkGraphToGlyphs_SetRenderer, 1,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\nThe renderer in which the glyphs will be placed.\n"},
  {(char*)"GetRenderer", PyvtkGraphToGlyphs_GetRenderer, 1,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\nThe renderer in which the glyphs will be placed.\n"},
  {(char*)"SetScaling", PyvtkGraphToGlyphs_SetScaling, 1,
   (char*)"V.SetScaling(bool)\nC++: virtual void SetScaling(bool b)\n\nWhether to use the input array to process in order to scale the\nvertices.\n"},
  {(char*)"GetScaling", PyvtkGraphToGlyphs_GetScaling, 1,
   (char*)"V.GetScaling() -> bool\nC++: virtual bool GetScaling()\n\nWhether to use the input array to process in order to scale the\nvertices.\n"},
  {(char*)"GetMTime", PyvtkGraphToGlyphs_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nThe modified time of this filter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphToGlyphs_StaticNew()
{
  return vtkGraphToGlyphs::New();
}

PyObject *PyVTKClass_vtkGraphToGlyphsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphToGlyphs_StaticNew,
    PyvtkGraphToGlyphs_Methods,
    "vtkGraphToGlyphs", modulename,
    NULL, NULL,
    PyvtkGraphToGlyphs_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"VERTEX", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"DASH", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"CROSS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"THICKCROSS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"TRIANGLE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"SQUARE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"CIRCLE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"DIAMOND", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(9);
    if (o && PyDict_SetItemString(d, (char *)"SPHERE", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkGraphToGlyphs_Doc()
{
  static const char *docstring[] = {
    "vtkGraphToGlyphs - create glyphs for graph vertices\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "Converts a vtkGraph to a vtkPolyData containing a glyph for each\nvertex. This assumes that the points of the graph have already been\nfilled (perhaps by vtkGraphLayout). The glyphs will automatically be\nscaled to be the same size in screen coordinates. To do this the\nfilter requires a pointer to the renderer into which the glyphs will\nbe rendered.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphToGlyphs(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphToGlyphsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphToGlyphs", o) != 0)
    {
    Py_DECREF(o);
    }

}

