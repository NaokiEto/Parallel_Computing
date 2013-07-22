// python wrapper for vtkTStripsPainter
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
#include "vtkTStripsPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTStripsPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTStripsPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTStripsPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTStripsPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPrimitivePainterNew
extern "C" { PyObject *PyVTKClass_vtkPrimitivePainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPrimitivePainterNew
#endif

static const char **PyvtkTStripsPainter_Doc();


static PyObject *
PyvtkTStripsPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTStripsPainter *op = static_cast<vtkTStripsPainter *>(vp);

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
      tempr = op->vtkTStripsPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTStripsPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTStripsPainter *op = static_cast<vtkTStripsPainter *>(vp);

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
      tempr = op->vtkTStripsPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTStripsPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTStripsPainter *op = static_cast<vtkTStripsPainter *>(vp);

  vtkTStripsPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTStripsPainter::NewInstance();
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
PyvtkTStripsPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTStripsPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTStripsPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTStripsPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkTStripsPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTStripsPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTStripsPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTStripsPainter\nC++: vtkTStripsPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTStripsPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTStripsPainter\nC++: vtkTStripsPainter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTStripsPainter_StaticNew()
{
  return vtkTStripsPainter::New();
}

PyObject *PyVTKClass_vtkTStripsPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTStripsPainter_StaticNew,
    PyvtkTStripsPainter_Methods,
    "vtkTStripsPainter", modulename,
    NULL, NULL,
    PyvtkTStripsPainter_Doc(),
    PyVTKClass_vtkPrimitivePainterNew(modulename));
  return cls;
}

const char **PyvtkTStripsPainter_Doc()
{
  static const char *docstring[] = {
    "vtkTStripsPainter - painter for triangle strips.\n\n",
    "Superclass: vtkPrimitivePainter\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTStripsPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTStripsPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTStripsPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

