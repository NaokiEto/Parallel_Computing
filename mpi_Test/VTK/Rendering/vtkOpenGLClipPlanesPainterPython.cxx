// python wrapper for vtkOpenGLClipPlanesPainter
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
#include "vtkOpenGLClipPlanesPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLClipPlanesPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLClipPlanesPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLClipPlanesPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLClipPlanesPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkClipPlanesPainterNew
extern "C" { PyObject *PyVTKClass_vtkClipPlanesPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkClipPlanesPainterNew
#endif

static const char **PyvtkOpenGLClipPlanesPainter_Doc();


static PyObject *
PyvtkOpenGLClipPlanesPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLClipPlanesPainter *op = static_cast<vtkOpenGLClipPlanesPainter *>(vp);

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
      tempr = op->vtkOpenGLClipPlanesPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLClipPlanesPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLClipPlanesPainter *op = static_cast<vtkOpenGLClipPlanesPainter *>(vp);

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
      tempr = op->vtkOpenGLClipPlanesPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLClipPlanesPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLClipPlanesPainter *op = static_cast<vtkOpenGLClipPlanesPainter *>(vp);

  vtkOpenGLClipPlanesPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLClipPlanesPainter::NewInstance();
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
PyvtkOpenGLClipPlanesPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLClipPlanesPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLClipPlanesPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLClipPlanesPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLClipPlanesPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLClipPlanesPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLClipPlanesPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLClipPlanesPainter\nC++: vtkOpenGLClipPlanesPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLClipPlanesPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLClipPlanesPainter\nC++: vtkOpenGLClipPlanesPainter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLClipPlanesPainter_StaticNew()
{
  return vtkOpenGLClipPlanesPainter::New();
}

PyObject *PyVTKClass_vtkOpenGLClipPlanesPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLClipPlanesPainter_StaticNew,
    PyvtkOpenGLClipPlanesPainter_Methods,
    "vtkOpenGLClipPlanesPainter", modulename,
    NULL, NULL,
    PyvtkOpenGLClipPlanesPainter_Doc(),
    PyVTKClass_vtkClipPlanesPainterNew(modulename));
  return cls;
}

const char **PyvtkOpenGLClipPlanesPainter_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLClipPlanesPainter - painter that manages clipping\n\n",
    "Superclass: vtkClipPlanesPainter\n\n",
    "This painter is an openGL specific painter which handles clipplanes.\nThis painter must typically be placed before the painter that do the\nprimitive rendering.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLClipPlanesPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLClipPlanesPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLClipPlanesPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

