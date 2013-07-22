// python wrapper for vtkHardwareSelectionPolyDataPainter
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
#include "vtkHardwareSelectionPolyDataPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHardwareSelectionPolyDataPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHardwareSelectionPolyDataPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHardwareSelectionPolyDataPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHardwareSelectionPolyDataPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStandardPolyDataPainterNew
extern "C" { PyObject *PyVTKClass_vtkStandardPolyDataPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkStandardPolyDataPainterNew
#endif

static const char **PyvtkHardwareSelectionPolyDataPainter_Doc();


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

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
      tempr = op->vtkHardwareSelectionPolyDataPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

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
      tempr = op->vtkHardwareSelectionPolyDataPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  vtkHardwareSelectionPolyDataPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHardwareSelectionPolyDataPainter::NewInstance();
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
PyvtkHardwareSelectionPolyDataPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHardwareSelectionPolyDataPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHardwareSelectionPolyDataPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_SetEnableSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnableSelection(temp0);
      }
    else
      {
      op->vtkHardwareSelectionPolyDataPainter::SetEnableSelection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_GetEnableSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnableSelection();
      }
    else
      {
      tempr = op->vtkHardwareSelectionPolyDataPainter::GetEnableSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_EnableSelectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableSelectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableSelectionOn();
      }
    else
      {
      op->vtkHardwareSelectionPolyDataPainter::EnableSelectionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelectionPolyDataPainter_EnableSelectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableSelectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelectionPolyDataPainter *op = static_cast<vtkHardwareSelectionPolyDataPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableSelectionOff();
      }
    else
      {
      op->vtkHardwareSelectionPolyDataPainter::EnableSelectionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkHardwareSelectionPolyDataPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkHardwareSelectionPolyDataPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHardwareSelectionPolyDataPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHardwareSelectionPolyDataPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHardwareSelectionPolyDataPainter\nC++: vtkHardwareSelectionPolyDataPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHardwareSelectionPolyDataPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHardwareSelectionPolyDataPainter\nC++: vtkHardwareSelectionPolyDataPainter *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetEnableSelection", PyvtkHardwareSelectionPolyDataPainter_SetEnableSelection, 1,
   (char*)"V.SetEnableSelection(int)\nC++: void SetEnableSelection(int a)\n\nEnable/Disable vtkHardwareSelector class. Useful when using this\npainter as an internal painter. Default is enabled.\n"},
  {(char*)"GetEnableSelection", PyvtkHardwareSelectionPolyDataPainter_GetEnableSelection, 1,
   (char*)"V.GetEnableSelection() -> int\nC++: int GetEnableSelection()\n\nEnable/Disable vtkHardwareSelector class. Useful when using this\npainter as an internal painter. Default is enabled.\n"},
  {(char*)"EnableSelectionOn", PyvtkHardwareSelectionPolyDataPainter_EnableSelectionOn, 1,
   (char*)"V.EnableSelectionOn()\nC++: void EnableSelectionOn()\n\nEnable/Disable vtkHardwareSelector class. Useful when using this\npainter as an internal painter. Default is enabled.\n"},
  {(char*)"EnableSelectionOff", PyvtkHardwareSelectionPolyDataPainter_EnableSelectionOff, 1,
   (char*)"V.EnableSelectionOff()\nC++: void EnableSelectionOff()\n\nEnable/Disable vtkHardwareSelector class. Useful when using this\npainter as an internal painter. Default is enabled.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHardwareSelectionPolyDataPainter_StaticNew()
{
  return vtkHardwareSelectionPolyDataPainter::New();
}

PyObject *PyVTKClass_vtkHardwareSelectionPolyDataPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHardwareSelectionPolyDataPainter_StaticNew,
    PyvtkHardwareSelectionPolyDataPainter_Methods,
    "vtkHardwareSelectionPolyDataPainter", modulename,
    NULL, NULL,
    PyvtkHardwareSelectionPolyDataPainter_Doc(),
    PyVTKClass_vtkStandardPolyDataPainterNew(modulename));
  return cls;
}

const char **PyvtkHardwareSelectionPolyDataPainter_Doc()
{
  static const char *docstring[] = {
    "vtkHardwareSelectionPolyDataPainter - painter used to render polydata\n\n",
    "Superclass: vtkStandardPolyDataPainter\n\n",
    "vtkHardwareSelectionPolyDataPainter is a painter for polydata used\nwhen rendering hardware selection passes.\n\nSee Also:\n\nvtkHardwareSelector\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHardwareSelectionPolyDataPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHardwareSelectionPolyDataPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHardwareSelectionPolyDataPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

