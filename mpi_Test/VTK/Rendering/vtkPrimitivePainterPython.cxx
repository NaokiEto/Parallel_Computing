// python wrapper for vtkPrimitivePainter
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
#include "vtkPrimitivePainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPrimitivePainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPrimitivePainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPrimitivePainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPrimitivePainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataPainterNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataPainterNew
#endif

static const char **PyvtkPrimitivePainter_Doc();


static PyObject *
PyvtkPrimitivePainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPrimitivePainter *op = static_cast<vtkPrimitivePainter *>(vp);

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
      tempr = op->vtkPrimitivePainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPrimitivePainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPrimitivePainter *op = static_cast<vtkPrimitivePainter *>(vp);

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
      tempr = op->vtkPrimitivePainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPrimitivePainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPrimitivePainter *op = static_cast<vtkPrimitivePainter *>(vp);

  vtkPrimitivePainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPrimitivePainter::NewInstance();
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
PyvtkPrimitivePainter_GetSupportedPrimitive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportedPrimitive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPrimitivePainter *op = static_cast<vtkPrimitivePainter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSupportedPrimitive();
      }
    else
      {
      tempr = op->vtkPrimitivePainter::GetSupportedPrimitive();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPrimitivePainter_Methods[] = {
  {(char*)"GetClassName", PyvtkPrimitivePainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPrimitivePainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPrimitivePainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPrimitivePainter\nC++: vtkPrimitivePainter *NewInstance()\n\n"},
  {(char*)"GetSupportedPrimitive", PyvtkPrimitivePainter_GetSupportedPrimitive, 1,
   (char*)"V.GetSupportedPrimitive() -> int\nC++: int GetSupportedPrimitive()\n\nGet the type of primitive supported by this painter. This must be\nset by concrete subclasses.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPrimitivePainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPrimitivePainter_Methods,
    "vtkPrimitivePainter", modulename,
    NULL, NULL,
    PyvtkPrimitivePainter_Doc(),
    PyVTKClass_vtkPolyDataPainterNew(modulename));
  return cls;
}

const char **PyvtkPrimitivePainter_Doc()
{
  static const char *docstring[] = {
    "vtkPrimitivePainter - superclass for class that handle single\n\n",
    "Superclass: vtkPolyDataPainter\n\n",
    "This is the abstract superclass for classes that handle single type\nof primitive i.e. verts, lines, polys or tstrips. Concrete subclasses\nwill pass a Render() call to the delegate painter, if any, only if it\ncould not render.\n\nThanks:\n\nSupport for generic vertex attributes in VTK was contributed in\ncollaboration with Stephane Ploix at EDF.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPrimitivePainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPrimitivePainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPrimitivePainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

