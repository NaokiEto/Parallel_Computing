// python wrapper for vtkOpenGLCoincidentTopologyResolutionPainter
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
#include "vtkOpenGLCoincidentTopologyResolutionPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOpenGLCoincidentTopologyResolutionPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOpenGLCoincidentTopologyResolutionPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOpenGLCoincidentTopologyResolutionPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOpenGLCoincidentTopologyResolutionPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCoincidentTopologyResolutionPainterNew
extern "C" { PyObject *PyVTKClass_vtkCoincidentTopologyResolutionPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkCoincidentTopologyResolutionPainterNew
#endif

static const char **PyvtkOpenGLCoincidentTopologyResolutionPainter_Doc();


static PyObject *
PyvtkOpenGLCoincidentTopologyResolutionPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCoincidentTopologyResolutionPainter *op = static_cast<vtkOpenGLCoincidentTopologyResolutionPainter *>(vp);

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
      tempr = op->vtkOpenGLCoincidentTopologyResolutionPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLCoincidentTopologyResolutionPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCoincidentTopologyResolutionPainter *op = static_cast<vtkOpenGLCoincidentTopologyResolutionPainter *>(vp);

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
      tempr = op->vtkOpenGLCoincidentTopologyResolutionPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOpenGLCoincidentTopologyResolutionPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCoincidentTopologyResolutionPainter *op = static_cast<vtkOpenGLCoincidentTopologyResolutionPainter *>(vp);

  vtkOpenGLCoincidentTopologyResolutionPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOpenGLCoincidentTopologyResolutionPainter::NewInstance();
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
PyvtkOpenGLCoincidentTopologyResolutionPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOpenGLCoincidentTopologyResolutionPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOpenGLCoincidentTopologyResolutionPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOpenGLCoincidentTopologyResolutionPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkOpenGLCoincidentTopologyResolutionPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOpenGLCoincidentTopologyResolutionPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOpenGLCoincidentTopologyResolutionPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOpenGLCoincidentTopologyResolutionPainter\nC++: vtkOpenGLCoincidentTopologyResolutionPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOpenGLCoincidentTopologyResolutionPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkOpenGLCoincidentTopologyResolutionPainter\nC++: vtkOpenGLCoincidentTopologyResolutionPainter *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOpenGLCoincidentTopologyResolutionPainter_StaticNew()
{
  return vtkOpenGLCoincidentTopologyResolutionPainter::New();
}

PyObject *PyVTKClass_vtkOpenGLCoincidentTopologyResolutionPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOpenGLCoincidentTopologyResolutionPainter_StaticNew,
    PyvtkOpenGLCoincidentTopologyResolutionPainter_Methods,
    "vtkOpenGLCoincidentTopologyResolutionPainter", modulename,
    NULL, NULL,
    PyvtkOpenGLCoincidentTopologyResolutionPainter_Doc(),
    PyVTKClass_vtkCoincidentTopologyResolutionPainterNew(modulename));
  return cls;
}

const char **PyvtkOpenGLCoincidentTopologyResolutionPainter_Doc()
{
  static const char *docstring[] = {
    "vtkOpenGLCoincidentTopologyResolutionPainter\n\n",
    "Superclass: vtkCoincidentTopologyResolutionPainter\n\n",
    "Implementation for vtkCoincidentTopologyResolutionPainter using\nOpenGL.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOpenGLCoincidentTopologyResolutionPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOpenGLCoincidentTopologyResolutionPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOpenGLCoincidentTopologyResolutionPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

