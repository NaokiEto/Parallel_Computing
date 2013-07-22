// python wrapper for vtkStandardPolyDataPainter
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
#include "vtkStandardPolyDataPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStandardPolyDataPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStandardPolyDataPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStandardPolyDataPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStandardPolyDataPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataPainterNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataPainterNew
#endif

static const char **PyvtkStandardPolyDataPainter_Doc();


static PyObject *
PyvtkStandardPolyDataPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStandardPolyDataPainter *op = static_cast<vtkStandardPolyDataPainter *>(vp);

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
      tempr = op->vtkStandardPolyDataPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStandardPolyDataPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStandardPolyDataPainter *op = static_cast<vtkStandardPolyDataPainter *>(vp);

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
      tempr = op->vtkStandardPolyDataPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStandardPolyDataPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStandardPolyDataPainter *op = static_cast<vtkStandardPolyDataPainter *>(vp);

  vtkStandardPolyDataPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStandardPolyDataPainter::NewInstance();
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
PyvtkStandardPolyDataPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStandardPolyDataPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStandardPolyDataPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStandardPolyDataPainter_AddMultiTextureCoordsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMultiTextureCoordsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStandardPolyDataPainter *op = static_cast<vtkStandardPolyDataPainter *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->AddMultiTextureCoordsArray(temp0);
      }
    else
      {
      op->vtkStandardPolyDataPainter::AddMultiTextureCoordsArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStandardPolyDataPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkStandardPolyDataPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStandardPolyDataPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStandardPolyDataPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStandardPolyDataPainter\nC++: vtkStandardPolyDataPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStandardPolyDataPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStandardPolyDataPainter\nC++: vtkStandardPolyDataPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddMultiTextureCoordsArray", PyvtkStandardPolyDataPainter_AddMultiTextureCoordsArray, 1,
   (char*)"V.AddMultiTextureCoordsArray(vtkDataArray)\nC++: void AddMultiTextureCoordsArray(vtkDataArray *array)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStandardPolyDataPainter_StaticNew()
{
  return vtkStandardPolyDataPainter::New();
}

PyObject *PyVTKClass_vtkStandardPolyDataPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStandardPolyDataPainter_StaticNew,
    PyvtkStandardPolyDataPainter_Methods,
    "vtkStandardPolyDataPainter", modulename,
    NULL, NULL,
    PyvtkStandardPolyDataPainter_Doc(),
    PyVTKClass_vtkPolyDataPainterNew(modulename));
  return cls;
}

const char **PyvtkStandardPolyDataPainter_Doc()
{
  static const char *docstring[] = {
    "vtkStandardPolyDataPainter - A standard implementation of\nvtkPolyDataPainter.\n\n",
    "Superclass: vtkPolyDataPainter\n\n",
    "vtkStandardPolyDataPainter is a catch-all painter.  It should work\nwith pretty much any vtkPolyData, and attributes, and\nvtkPolyDataPainterDeviceAdapter.  On the flip side, the\nvtkStandardPolyDataPainter will be slower than the more special\npurpose painters.\n\nSee Also:\n\nvtkDefaultPainter\n\nThanks:\n\nSupport for generic vertex attributes in VTK was contributed in\ncollaboration with Stephane Ploix at ",
    "EDF.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStandardPolyDataPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStandardPolyDataPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStandardPolyDataPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

