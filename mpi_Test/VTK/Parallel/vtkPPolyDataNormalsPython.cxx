// python wrapper for vtkPPolyDataNormals
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
#include "vtkPPolyDataNormals.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPPolyDataNormals(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPPolyDataNormals(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPPolyDataNormalsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPPolyDataNormalsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataNormalsNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataNormalsNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataNormalsNew
#endif

static const char **PyvtkPPolyDataNormals_Doc();


static PyObject *
PyvtkPPolyDataNormals_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPolyDataNormals *op = static_cast<vtkPPolyDataNormals *>(vp);

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
      tempr = op->vtkPPolyDataNormals::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPolyDataNormals_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPolyDataNormals *op = static_cast<vtkPPolyDataNormals *>(vp);

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
      tempr = op->vtkPPolyDataNormals::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPolyDataNormals_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPolyDataNormals *op = static_cast<vtkPPolyDataNormals *>(vp);

  vtkPPolyDataNormals *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPPolyDataNormals::NewInstance();
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
PyvtkPPolyDataNormals_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPPolyDataNormals *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPPolyDataNormals::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPolyDataNormals_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPolyDataNormals *op = static_cast<vtkPPolyDataNormals *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPieceInvariant(temp0);
      }
    else
      {
      op->vtkPPolyDataNormals::SetPieceInvariant(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPPolyDataNormals_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPolyDataNormals *op = static_cast<vtkPPolyDataNormals *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPieceInvariant();
      }
    else
      {
      tempr = op->vtkPPolyDataNormals::GetPieceInvariant();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPolyDataNormals_PieceInvariantOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPolyDataNormals *op = static_cast<vtkPPolyDataNormals *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PieceInvariantOn();
      }
    else
      {
      op->vtkPPolyDataNormals::PieceInvariantOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPPolyDataNormals_PieceInvariantOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPolyDataNormals *op = static_cast<vtkPPolyDataNormals *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PieceInvariantOff();
      }
    else
      {
      op->vtkPPolyDataNormals::PieceInvariantOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPPolyDataNormals_Methods[] = {
  {(char*)"GetClassName", PyvtkPPolyDataNormals_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPPolyDataNormals_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPPolyDataNormals_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPPolyDataNormals\nC++: vtkPPolyDataNormals *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPPolyDataNormals_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPPolyDataNormals\nC++: vtkPPolyDataNormals *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPieceInvariant", PyvtkPPolyDataNormals_SetPieceInvariant, 1,
   (char*)"V.SetPieceInvariant(int)\nC++: void SetPieceInvariant(int a)\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {(char*)"GetPieceInvariant", PyvtkPPolyDataNormals_GetPieceInvariant, 1,
   (char*)"V.GetPieceInvariant() -> int\nC++: int GetPieceInvariant()\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {(char*)"PieceInvariantOn", PyvtkPPolyDataNormals_PieceInvariantOn, 1,
   (char*)"V.PieceInvariantOn()\nC++: void PieceInvariantOn()\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {(char*)"PieceInvariantOff", PyvtkPPolyDataNormals_PieceInvariantOff, 1,
   (char*)"V.PieceInvariantOff()\nC++: void PieceInvariantOff()\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPPolyDataNormals_StaticNew()
{
  return vtkPPolyDataNormals::New();
}

PyObject *PyVTKClass_vtkPPolyDataNormalsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPPolyDataNormals_StaticNew,
    PyvtkPPolyDataNormals_Methods,
    "vtkPPolyDataNormals", modulename,
    NULL, NULL,
    PyvtkPPolyDataNormals_Doc(),
    PyVTKClass_vtkPolyDataNormalsNew(modulename));
  return cls;
}

const char **PyvtkPPolyDataNormals_Doc()
{
  static const char *docstring[] = {
    "vtkPPolyDataNormals - compute normals for polygonal mesh\n\n",
    "Superclass: vtkPolyDataNormals\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPPolyDataNormals(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPPolyDataNormalsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPPolyDataNormals", o) != 0)
    {
    Py_DECREF(o);
    }

}

