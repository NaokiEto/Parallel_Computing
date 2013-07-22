// python wrapper for vtkRepresentationPainter
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
#include "vtkRepresentationPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRepresentationPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRepresentationPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRepresentationPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRepresentationPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataPainterNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataPainterNew
#endif

static const char **PyvtkRepresentationPainter_Doc();


static PyObject *
PyvtkRepresentationPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRepresentationPainter *op = static_cast<vtkRepresentationPainter *>(vp);

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
      tempr = op->vtkRepresentationPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRepresentationPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRepresentationPainter *op = static_cast<vtkRepresentationPainter *>(vp);

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
      tempr = op->vtkRepresentationPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRepresentationPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRepresentationPainter *op = static_cast<vtkRepresentationPainter *>(vp);

  vtkRepresentationPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRepresentationPainter::NewInstance();
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
PyvtkRepresentationPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRepresentationPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRepresentationPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRepresentationPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkRepresentationPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRepresentationPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRepresentationPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRepresentationPainter\nC++: vtkRepresentationPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRepresentationPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRepresentationPainter\nC++: vtkRepresentationPainter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRepresentationPainter_StaticNew()
{
  return vtkRepresentationPainter::New();
}

PyObject *PyVTKClass_vtkRepresentationPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRepresentationPainter_StaticNew,
    PyvtkRepresentationPainter_Methods,
    "vtkRepresentationPainter", modulename,
    NULL, NULL,
    PyvtkRepresentationPainter_Doc(),
    PyVTKClass_vtkPolyDataPainterNew(modulename));
  return cls;
}

const char **PyvtkRepresentationPainter_Doc()
{
  static const char *docstring[] = {
    "vtkRepresentationPainter - painter that handles representation.\n\n",
    "Superclass: vtkPolyDataPainter\n\n",
    "This painter merely defines the interface. Subclasses will change the\npolygon rendering mode dependent on the graphics library.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRepresentationPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRepresentationPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRepresentationPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

