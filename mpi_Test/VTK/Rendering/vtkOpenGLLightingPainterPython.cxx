// python wrapper for vtkOpenGLLightingPainter
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
#include "vtkOpenGLLightingPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLLightingPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLLightingPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLLightingPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLLightingPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkLightingPainterNew
extern "C" { PyObject *PyVTKClass_vtkLightingPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkLightingPainterNew
#endif

static const char **PyvtkOpenGLLightingPainter_Doc();


static PyObject *
PyvtkOpenGLLightingPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightingPainter *op = static_cast<vtkOpenGLLightingPainter *>(vp);

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
      tempr = op->vtkOpenGLLightingPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightingPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightingPainter *op = static_cast<vtkOpenGLLightingPainter *>(vp);

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
      tempr = op->vtkOpenGLLightingPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightingPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightingPainter *op = static_cast<vtkOpenGLLightingPainter *>(vp);

  vtkOpenGLLightingPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLLightingPainter::NewInstance();
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
PyvtkOpenGLLightingPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLLightingPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLLightingPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLLightingPainter_GetTimeToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLLightingPainter *op = static_cast<vtkOpenGLLightingPainter *>(vp);

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
      tempr = op->vtkOpenGLLightingPainter::GetTimeToDraw();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLLightingPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLLightingPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLLightingPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLLightingPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLLightingPainter\nC++: vtkOpenGLLightingPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLLightingPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOpenGLLightingPainter\nC++: vtkOpenGLLightingPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetTimeToDraw", PyvtkOpenGLLightingPainter_GetTimeToDraw, 1,
   (char*)"V.GetTimeToDraw() -> float\nC++: virtual double GetTimeToDraw()\n\nThis painter overrides GetTimeToDraw() to never pass the request\nto the delegate. This is done since this class may propagate a\nsingle render request multiple times to the delegate. In that\ncase the time accumulation responsibility is borne by the painter\ncausing the multiple rendering requests i.e. this painter itself.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLLightingPainter_StaticNew()
{
  return vtkOpenGLLightingPainter::New();
}

PyObject *PyVTKClass_vtkOpenGLLightingPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLLightingPainter_StaticNew,
    PyvtkOpenGLLightingPainter_Methods,
    "vtkOpenGLLightingPainter", modulename,
    NULL, NULL,
    PyvtkOpenGLLightingPainter_Doc(),
    PyVTKClass_vtkLightingPainterNew(modulename));
  return cls;
}

const char **PyvtkOpenGLLightingPainter_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLLightingPainter - painter that manages lighting.\n\n",
    "Superclass: vtkLightingPainter\n\n",
    "This painter manages lighting. Ligting is disabled when rendering\npoints/lines and no normals are present or rendering Polygons/TStrips\nand representation is points and no normals are present.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLLightingPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLLightingPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLLightingPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

