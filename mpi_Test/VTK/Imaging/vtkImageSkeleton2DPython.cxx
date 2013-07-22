// python wrapper for vtkImageSkeleton2D
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
#include "vtkImageSkeleton2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageSkeleton2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageSkeleton2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageSkeleton2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageSkeleton2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageIterateFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageIterateFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageIterateFilterNew
#endif

static const char **PyvtkImageSkeleton2D_Doc();


static PyObject *
PyvtkImageSkeleton2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSkeleton2D *op = static_cast<vtkImageSkeleton2D *>(vp);

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
      tempr = op->vtkImageSkeleton2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSkeleton2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSkeleton2D *op = static_cast<vtkImageSkeleton2D *>(vp);

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
      tempr = op->vtkImageSkeleton2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSkeleton2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSkeleton2D *op = static_cast<vtkImageSkeleton2D *>(vp);

  vtkImageSkeleton2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageSkeleton2D::NewInstance();
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
PyvtkImageSkeleton2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageSkeleton2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageSkeleton2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSkeleton2D_SetPrune(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrune");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSkeleton2D *op = static_cast<vtkImageSkeleton2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPrune(temp0);
      }
    else
      {
      op->vtkImageSkeleton2D::SetPrune(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSkeleton2D_GetPrune(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrune");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSkeleton2D *op = static_cast<vtkImageSkeleton2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPrune();
      }
    else
      {
      tempr = op->vtkImageSkeleton2D::GetPrune();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSkeleton2D_PruneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PruneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSkeleton2D *op = static_cast<vtkImageSkeleton2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PruneOn();
      }
    else
      {
      op->vtkImageSkeleton2D::PruneOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSkeleton2D_PruneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PruneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSkeleton2D *op = static_cast<vtkImageSkeleton2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PruneOff();
      }
    else
      {
      op->vtkImageSkeleton2D::PruneOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSkeleton2D_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSkeleton2D *op = static_cast<vtkImageSkeleton2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfIterations(temp0);
      }
    else
      {
      op->vtkImageSkeleton2D::SetNumberOfIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageSkeleton2D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageSkeleton2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageSkeleton2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageSkeleton2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageSkeleton2D\nC++: vtkImageSkeleton2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageSkeleton2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageSkeleton2D\nC++: vtkImageSkeleton2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPrune", PyvtkImageSkeleton2D_SetPrune, 1,
   (char*)"V.SetPrune(int)\nC++: void SetPrune(int a)\n\nWhen prune is on, only closed loops are left unchanged.\n"},
  {(char*)"GetPrune", PyvtkImageSkeleton2D_GetPrune, 1,
   (char*)"V.GetPrune() -> int\nC++: int GetPrune()\n\nWhen prune is on, only closed loops are left unchanged.\n"},
  {(char*)"PruneOn", PyvtkImageSkeleton2D_PruneOn, 1,
   (char*)"V.PruneOn()\nC++: void PruneOn()\n\nWhen prune is on, only closed loops are left unchanged.\n"},
  {(char*)"PruneOff", PyvtkImageSkeleton2D_PruneOff, 1,
   (char*)"V.PruneOff()\nC++: void PruneOff()\n\nWhen prune is on, only closed loops are left unchanged.\n"},
  {(char*)"SetNumberOfIterations", PyvtkImageSkeleton2D_SetNumberOfIterations, 1,
   (char*)"V.SetNumberOfIterations(int)\nC++: void SetNumberOfIterations(int num)\n\nSets the number of cycles in the erosion.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageSkeleton2D_StaticNew()
{
  return vtkImageSkeleton2D::New();
}

PyObject *PyVTKClass_vtkImageSkeleton2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageSkeleton2D_StaticNew,
    PyvtkImageSkeleton2D_Methods,
    "vtkImageSkeleton2D", modulename,
    NULL, NULL,
    PyvtkImageSkeleton2D_Doc(),
    PyVTKClass_vtkImageIterateFilterNew(modulename));
  return cls;
}

const char **PyvtkImageSkeleton2D_Doc()
{
  static const char *docstring[] = {
    "vtkImageSkeleton2D - Skeleton of 2D images.\n\n",
    "Superclass: vtkImageIterateFilter\n\n",
    "vtkImageSkeleton2D should leave only single pixel width lines of\nnon-zero-valued pixels (values of 1 are not allowed). It works by\nerosion on a 3x3 neighborhood with special rules. The number of\niterations determines how far the filter can erode. There are three\npruning levels:\n prune == 0 will leave traces on all angles...\n prune == 1 will not leave traces on 135 degree angles, but will on\n90.\n p",
    "rune == 2 does not leave traces on any angles leaving only closed\nloops. Prune defaults to zero. The output scalar type is the same as\nthe input.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageSkeleton2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageSkeleton2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageSkeleton2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

