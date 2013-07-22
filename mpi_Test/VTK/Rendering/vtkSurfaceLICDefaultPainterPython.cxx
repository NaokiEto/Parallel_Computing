// python wrapper for vtkSurfaceLICDefaultPainter
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
#include "vtkSurfaceLICDefaultPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSurfaceLICDefaultPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSurfaceLICDefaultPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSurfaceLICDefaultPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSurfaceLICDefaultPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDefaultPainterNew
extern "C" { PyObject *PyVTKClass_vtkDefaultPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkDefaultPainterNew
#endif

static const char **PyvtkSurfaceLICDefaultPainter_Doc();


static PyObject *
PyvtkSurfaceLICDefaultPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICDefaultPainter *op = static_cast<vtkSurfaceLICDefaultPainter *>(vp);

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
      tempr = op->vtkSurfaceLICDefaultPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICDefaultPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICDefaultPainter *op = static_cast<vtkSurfaceLICDefaultPainter *>(vp);

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
      tempr = op->vtkSurfaceLICDefaultPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICDefaultPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICDefaultPainter *op = static_cast<vtkSurfaceLICDefaultPainter *>(vp);

  vtkSurfaceLICDefaultPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSurfaceLICDefaultPainter::NewInstance();
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
PyvtkSurfaceLICDefaultPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSurfaceLICDefaultPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSurfaceLICDefaultPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICDefaultPainter_SetSurfaceLICPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceLICPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICDefaultPainter *op = static_cast<vtkSurfaceLICDefaultPainter *>(vp);

  vtkSurfaceLICPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSurfaceLICPainter"))
    {
    if (ap.IsBound())
      {
      op->SetSurfaceLICPainter(temp0);
      }
    else
      {
      op->vtkSurfaceLICDefaultPainter::SetSurfaceLICPainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICDefaultPainter_GetSurfaceLICPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceLICPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICDefaultPainter *op = static_cast<vtkSurfaceLICDefaultPainter *>(vp);

  vtkSurfaceLICPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSurfaceLICPainter();
      }
    else
      {
      tempr = op->vtkSurfaceLICDefaultPainter::GetSurfaceLICPainter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSurfaceLICDefaultPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkSurfaceLICDefaultPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSurfaceLICDefaultPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSurfaceLICDefaultPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSurfaceLICDefaultPainter\nC++: vtkSurfaceLICDefaultPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSurfaceLICDefaultPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSurfaceLICDefaultPainter\nC++: vtkSurfaceLICDefaultPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSurfaceLICPainter", PyvtkSurfaceLICDefaultPainter_SetSurfaceLICPainter, 1,
   (char*)"V.SetSurfaceLICPainter(vtkSurfaceLICPainter)\nC++: void SetSurfaceLICPainter(vtkSurfaceLICPainter *)\n\nGet/Set the Surface LIC painter.\n"},
  {(char*)"GetSurfaceLICPainter", PyvtkSurfaceLICDefaultPainter_GetSurfaceLICPainter, 1,
   (char*)"V.GetSurfaceLICPainter() -> vtkSurfaceLICPainter\nC++: vtkSurfaceLICPainter *GetSurfaceLICPainter()\n\nGet/Set the Surface LIC painter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSurfaceLICDefaultPainter_StaticNew()
{
  return vtkSurfaceLICDefaultPainter::New();
}

PyObject *PyVTKClass_vtkSurfaceLICDefaultPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSurfaceLICDefaultPainter_StaticNew,
    PyvtkSurfaceLICDefaultPainter_Methods,
    "vtkSurfaceLICDefaultPainter", modulename,
    NULL, NULL,
    PyvtkSurfaceLICDefaultPainter_Doc(),
    PyVTKClass_vtkDefaultPainterNew(modulename));
  return cls;
}

const char **PyvtkSurfaceLICDefaultPainter_Doc()
{
  static const char *docstring[] = {
    "vtkSurfaceLICDefaultPainter - vtkDefaultPainter replacement that\n\n",
    "Superclass: vtkDefaultPainter\n\n",
    "vtkSurfaceLICDefaultPainter is a vtkDefaultPainter replacement\n that inserts the vtkSurfaceLICPainter at the correct position in the\npainter\n chain.\n\nSee Also:\n\n\n vtkDefaultPainter vtkSurfaceLICPainter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSurfaceLICDefaultPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSurfaceLICDefaultPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSurfaceLICDefaultPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

