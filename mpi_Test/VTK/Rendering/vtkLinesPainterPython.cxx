// python wrapper for vtkLinesPainter
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
#include "vtkLinesPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLinesPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLinesPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLinesPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLinesPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPrimitivePainterNew
extern "C" { PyObject *PyVTKClass_vtkPrimitivePainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPrimitivePainterNew
#endif

static const char **PyvtkLinesPainter_Doc();


static PyObject *
PyvtkLinesPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinesPainter *op = static_cast<vtkLinesPainter *>(vp);

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
      tempr = op->vtkLinesPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinesPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinesPainter *op = static_cast<vtkLinesPainter *>(vp);

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
      tempr = op->vtkLinesPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLinesPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinesPainter *op = static_cast<vtkLinesPainter *>(vp);

  vtkLinesPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLinesPainter::NewInstance();
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
PyvtkLinesPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLinesPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLinesPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLinesPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkLinesPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLinesPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLinesPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLinesPainter\nC++: vtkLinesPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLinesPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLinesPainter\nC++: vtkLinesPainter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLinesPainter_StaticNew()
{
  return vtkLinesPainter::New();
}

PyObject *PyVTKClass_vtkLinesPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLinesPainter_StaticNew,
    PyvtkLinesPainter_Methods,
    "vtkLinesPainter", modulename,
    NULL, NULL,
    PyvtkLinesPainter_Doc(),
    PyVTKClass_vtkPrimitivePainterNew(modulename));
  return cls;
}

const char **PyvtkLinesPainter_Doc()
{
  static const char *docstring[] = {
    "vtkLinesPainter - painter that paints lines.\n\n",
    "Superclass: vtkPrimitivePainter\n\n",
    "This painter tries to paint lines efficiently. Request to Render any\nother primitive are ignored and not passed to the delegate painter,\nif any. This painter cannot handle cell colors/normals. If they are\npresent the request is passed on to the Delegate painter. If this\nclass is able to render the primitive, the render request is not\npropagated to the delegate painter.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLinesPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLinesPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLinesPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

