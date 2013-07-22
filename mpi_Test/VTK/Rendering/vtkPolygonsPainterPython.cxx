// python wrapper for vtkPolygonsPainter
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
#include "vtkPolygonsPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolygonsPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolygonsPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolygonsPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolygonsPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPrimitivePainterNew
extern "C" { PyObject *PyVTKClass_vtkPrimitivePainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPrimitivePainterNew
#endif

static const char **PyvtkPolygonsPainter_Doc();


static PyObject *
PyvtkPolygonsPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonsPainter *op = static_cast<vtkPolygonsPainter *>(vp);

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
      tempr = op->vtkPolygonsPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonsPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonsPainter *op = static_cast<vtkPolygonsPainter *>(vp);

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
      tempr = op->vtkPolygonsPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolygonsPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonsPainter *op = static_cast<vtkPolygonsPainter *>(vp);

  vtkPolygonsPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolygonsPainter::NewInstance();
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
PyvtkPolygonsPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPolygonsPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPolygonsPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolygonsPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkPolygonsPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolygonsPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolygonsPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolygonsPainter\nC++: vtkPolygonsPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolygonsPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolygonsPainter\nC++: vtkPolygonsPainter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolygonsPainter_StaticNew()
{
  return vtkPolygonsPainter::New();
}

PyObject *PyVTKClass_vtkPolygonsPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolygonsPainter_StaticNew,
    PyvtkPolygonsPainter_Methods,
    "vtkPolygonsPainter", modulename,
    NULL, NULL,
    PyvtkPolygonsPainter_Doc(),
    PyVTKClass_vtkPrimitivePainterNew(modulename));
  return cls;
}

const char **PyvtkPolygonsPainter_Doc()
{
  static const char *docstring[] = {
    "vtkPolygonsPainter - this painter paints polygons.\n\n",
    "Superclass: vtkPrimitivePainter\n\n",
    "This painter renders Polys in vtkPolyData. It can render the polys in\nany representation (VTK_POINTS, VTK_WIREFRAME, VTK_SURFACE).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolygonsPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolygonsPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolygonsPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

