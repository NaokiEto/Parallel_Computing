// python wrapper for vtkChooserPainter
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
#include "vtkChooserPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkChooserPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkChooserPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkChooserPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkChooserPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataPainterNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataPainterNew
#endif

static const char **PyvtkChooserPainter_Doc();


static PyObject *
PyvtkChooserPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChooserPainter *op = static_cast<vtkChooserPainter *>(vp);

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
      tempr = op->vtkChooserPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChooserPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChooserPainter *op = static_cast<vtkChooserPainter *>(vp);

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
      tempr = op->vtkChooserPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChooserPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChooserPainter *op = static_cast<vtkChooserPainter *>(vp);

  vtkChooserPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkChooserPainter::NewInstance();
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
PyvtkChooserPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkChooserPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkChooserPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChooserPainter_SetVertPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChooserPainter *op = static_cast<vtkChooserPainter *>(vp);

  vtkPolyDataPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyDataPainter"))
    {
    if (ap.IsBound())
      {
      op->SetVertPainter(temp0);
      }
    else
      {
      op->vtkChooserPainter::SetVertPainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChooserPainter_SetLinePainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinePainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChooserPainter *op = static_cast<vtkChooserPainter *>(vp);

  vtkPolyDataPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyDataPainter"))
    {
    if (ap.IsBound())
      {
      op->SetLinePainter(temp0);
      }
    else
      {
      op->vtkChooserPainter::SetLinePainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChooserPainter_SetPolyPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolyPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChooserPainter *op = static_cast<vtkChooserPainter *>(vp);

  vtkPolyDataPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyDataPainter"))
    {
    if (ap.IsBound())
      {
      op->SetPolyPainter(temp0);
      }
    else
      {
      op->vtkChooserPainter::SetPolyPainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChooserPainter_SetStripPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStripPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChooserPainter *op = static_cast<vtkChooserPainter *>(vp);

  vtkPolyDataPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyDataPainter"))
    {
    if (ap.IsBound())
      {
      op->SetStripPainter(temp0);
      }
    else
      {
      op->vtkChooserPainter::SetStripPainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChooserPainter_SetUseLinesPainterForWireframes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLinesPainterForWireframes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChooserPainter *op = static_cast<vtkChooserPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseLinesPainterForWireframes(temp0);
      }
    else
      {
      op->vtkChooserPainter::SetUseLinesPainterForWireframes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChooserPainter_GetUseLinesPainterForWireframes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLinesPainterForWireframes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChooserPainter *op = static_cast<vtkChooserPainter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseLinesPainterForWireframes();
      }
    else
      {
      tempr = op->vtkChooserPainter::GetUseLinesPainterForWireframes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkChooserPainter_UseLinesPainterForWireframesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLinesPainterForWireframesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChooserPainter *op = static_cast<vtkChooserPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseLinesPainterForWireframesOn();
      }
    else
      {
      op->vtkChooserPainter::UseLinesPainterForWireframesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkChooserPainter_UseLinesPainterForWireframesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLinesPainterForWireframesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChooserPainter *op = static_cast<vtkChooserPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseLinesPainterForWireframesOff();
      }
    else
      {
      op->vtkChooserPainter::UseLinesPainterForWireframesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkChooserPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkChooserPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkChooserPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkChooserPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkChooserPainter\nC++: vtkChooserPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkChooserPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkChooserPainter\nC++: vtkChooserPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVertPainter", PyvtkChooserPainter_SetVertPainter, 1,
   (char*)"V.SetVertPainter(vtkPolyDataPainter)\nC++: void SetVertPainter(vtkPolyDataPainter *)\n\n"},
  {(char*)"SetLinePainter", PyvtkChooserPainter_SetLinePainter, 1,
   (char*)"V.SetLinePainter(vtkPolyDataPainter)\nC++: void SetLinePainter(vtkPolyDataPainter *)\n\n"},
  {(char*)"SetPolyPainter", PyvtkChooserPainter_SetPolyPainter, 1,
   (char*)"V.SetPolyPainter(vtkPolyDataPainter)\nC++: void SetPolyPainter(vtkPolyDataPainter *)\n\n"},
  {(char*)"SetStripPainter", PyvtkChooserPainter_SetStripPainter, 1,
   (char*)"V.SetStripPainter(vtkPolyDataPainter)\nC++: void SetStripPainter(vtkPolyDataPainter *)\n\n"},
  {(char*)"SetUseLinesPainterForWireframes", PyvtkChooserPainter_SetUseLinesPainterForWireframes, 1,
   (char*)"V.SetUseLinesPainterForWireframes(int)\nC++: void SetUseLinesPainterForWireframes(int a)\n\nWhen set, the lines painter is used for drawing wireframes (off\nby default, except on Mac, where it's on by default).\n"},
  {(char*)"GetUseLinesPainterForWireframes", PyvtkChooserPainter_GetUseLinesPainterForWireframes, 1,
   (char*)"V.GetUseLinesPainterForWireframes() -> int\nC++: int GetUseLinesPainterForWireframes()\n\nWhen set, the lines painter is used for drawing wireframes (off\nby default, except on Mac, where it's on by default).\n"},
  {(char*)"UseLinesPainterForWireframesOn", PyvtkChooserPainter_UseLinesPainterForWireframesOn, 1,
   (char*)"V.UseLinesPainterForWireframesOn()\nC++: void UseLinesPainterForWireframesOn()\n\nWhen set, the lines painter is used for drawing wireframes (off\nby default, except on Mac, where it's on by default).\n"},
  {(char*)"UseLinesPainterForWireframesOff", PyvtkChooserPainter_UseLinesPainterForWireframesOff, 1,
   (char*)"V.UseLinesPainterForWireframesOff()\nC++: void UseLinesPainterForWireframesOff()\n\nWhen set, the lines painter is used for drawing wireframes (off\nby default, except on Mac, where it's on by default).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkChooserPainter_StaticNew()
{
  return vtkChooserPainter::New();
}

PyObject *PyVTKClass_vtkChooserPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkChooserPainter_StaticNew,
    PyvtkChooserPainter_Methods,
    "vtkChooserPainter", modulename,
    NULL, NULL,
    PyvtkChooserPainter_Doc(),
    PyVTKClass_vtkPolyDataPainterNew(modulename));
  return cls;
}

const char **PyvtkChooserPainter_Doc()
{
  static const char *docstring[] = {
    "vtkChooserPainter - Painter that selects painters to render\n\n",
    "Superclass: vtkPolyDataPainter\n\n",
    "This painter does not actually do any painting.  Instead, it picks\nother painters based on the current state of itself and its poly\ndata.  It then delegates the work to these other painters.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkChooserPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkChooserPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkChooserPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

