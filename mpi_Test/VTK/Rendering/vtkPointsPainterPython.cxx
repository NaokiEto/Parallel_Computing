// python wrapper for vtkPointsPainter
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
#include "vtkPointsPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPointsPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPointsPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPointsPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPointsPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPrimitivePainterNew
extern "C" { PyObject *PyVTKClass_vtkPrimitivePainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPrimitivePainterNew
#endif

static const char **PyvtkPointsPainter_Doc();


static PyObject *
PyvtkPointsPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsPainter *op = static_cast<vtkPointsPainter *>(vp);

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
      tempr = op->vtkPointsPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointsPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsPainter *op = static_cast<vtkPointsPainter *>(vp);

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
      tempr = op->vtkPointsPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointsPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsPainter *op = static_cast<vtkPointsPainter *>(vp);

  vtkPointsPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPointsPainter::NewInstance();
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
PyvtkPointsPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPointsPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPointsPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPointsPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkPointsPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointsPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointsPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPointsPainter\nC++: vtkPointsPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPointsPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointsPainter\nC++: vtkPointsPainter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointsPainter_StaticNew()
{
  return vtkPointsPainter::New();
}

PyObject *PyVTKClass_vtkPointsPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointsPainter_StaticNew,
    PyvtkPointsPainter_Methods,
    "vtkPointsPainter", modulename,
    NULL, NULL,
    PyvtkPointsPainter_Doc(),
    PyVTKClass_vtkPrimitivePainterNew(modulename));
  return cls;
}

const char **PyvtkPointsPainter_Doc()
{
  static const char *docstring[] = {
    "vtkPointsPainter - this painter paints verts.\n\n",
    "Superclass: vtkPrimitivePainter\n\n",
    "This painter tries to paint points efficiently. Request to Render any\nother primitive are ignored and not passed to the delegate painter,\nif any. This painter cannot handle cell colors/normals. If they are\npresent the request is passed on to the Delegate painter. If this\nclass is able to render the primitive, the render request is not\npropagated to the delegate painter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointsPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointsPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointsPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

