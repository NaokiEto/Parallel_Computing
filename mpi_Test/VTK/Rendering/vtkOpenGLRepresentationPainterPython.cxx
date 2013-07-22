// python wrapper for vtkOpenGLRepresentationPainter
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
#include "vtkOpenGLRepresentationPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLRepresentationPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLRepresentationPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLRepresentationPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLRepresentationPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRepresentationPainterNew
extern "C" { PyObject *PyVTKClass_vtkRepresentationPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkRepresentationPainterNew
#endif

static const char **PyvtkOpenGLRepresentationPainter_Doc();


static PyObject *
PyvtkOpenGLRepresentationPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRepresentationPainter *op = static_cast<vtkOpenGLRepresentationPainter *>(vp);

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
      tempr = op->vtkOpenGLRepresentationPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRepresentationPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRepresentationPainter *op = static_cast<vtkOpenGLRepresentationPainter *>(vp);

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
      tempr = op->vtkOpenGLRepresentationPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRepresentationPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRepresentationPainter *op = static_cast<vtkOpenGLRepresentationPainter *>(vp);

  vtkOpenGLRepresentationPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLRepresentationPainter::NewInstance();
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
PyvtkOpenGLRepresentationPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLRepresentationPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLRepresentationPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLRepresentationPainter_GetTimeToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRepresentationPainter *op = static_cast<vtkOpenGLRepresentationPainter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeToDraw();
      }
    else
      {
      tempr = op->vtkOpenGLRepresentationPainter::GetTimeToDraw();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLRepresentationPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLRepresentationPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLRepresentationPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLRepresentationPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLRepresentationPainter\nC++: vtkOpenGLRepresentationPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLRepresentationPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLRepresentationPainter\nC++: vtkOpenGLRepresentationPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetTimeToDraw", PyvtkOpenGLRepresentationPainter_GetTimeToDraw, 1,
   (char*)"V.GetTimeToDraw() -> float\nC++: virtual double GetTimeToDraw()\n\nThis painter overrides GetTimeToDraw() to never pass the request\nto the delegate. This is done since this class may propagate a\nsingle render request multiple times to the delegate. In that\ncase the time accumulation responsibility is borne by the painter\ncausing the multiple rendering requests i.e. this painter itself.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLRepresentationPainter_StaticNew()
{
  return vtkOpenGLRepresentationPainter::New();
}

PyObject *PyVTKClass_vtkOpenGLRepresentationPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLRepresentationPainter_StaticNew,
    PyvtkOpenGLRepresentationPainter_Methods,
    "vtkOpenGLRepresentationPainter", modulename,
    NULL, NULL,
    PyvtkOpenGLRepresentationPainter_Doc(),
    PyVTKClass_vtkRepresentationPainterNew(modulename));
  return cls;
}

const char **PyvtkOpenGLRepresentationPainter_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLRepresentationPainter - painter handling representation \n\n",
    "Superclass: vtkRepresentationPainter\n\n",
    "This is OpenGL implementation of a painter handling representation\ni.e. Points, Wireframe, Surface.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLRepresentationPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLRepresentationPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLRepresentationPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

