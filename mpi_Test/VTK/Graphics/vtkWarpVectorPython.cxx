// python wrapper for vtkWarpVector
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
#include "vtkWarpVector.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkWarpVector(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkWarpVector(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkWarpVectorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkWarpVectorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
#endif

static const char **PyvtkWarpVector_Doc();


static PyObject *
PyvtkWarpVector_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpVector *op = static_cast<vtkWarpVector *>(vp);

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
      tempr = op->vtkWarpVector::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpVector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpVector *op = static_cast<vtkWarpVector *>(vp);

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
      tempr = op->vtkWarpVector::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpVector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpVector *op = static_cast<vtkWarpVector *>(vp);

  vtkWarpVector *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkWarpVector::NewInstance();
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
PyvtkWarpVector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkWarpVector *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkWarpVector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkWarpVector_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpVector *op = static_cast<vtkWarpVector *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleFactor(temp0);
      }
    else
      {
      op->vtkWarpVector::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkWarpVector_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpVector *op = static_cast<vtkWarpVector *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleFactor();
      }
    else
      {
      tempr = op->vtkWarpVector::GetScaleFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkWarpVector_Methods[] = {
  {(char*)"GetClassName", PyvtkWarpVector_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkWarpVector_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkWarpVector_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkWarpVector\nC++: vtkWarpVector *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkWarpVector_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkWarpVector\nC++: vtkWarpVector *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetScaleFactor", PyvtkWarpVector_SetScaleFactor, 1,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double a)\n\nSpecify value to scale displacement.\n"},
  {(char*)"GetScaleFactor", PyvtkWarpVector_GetScaleFactor, 1,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nSpecify value to scale displacement.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkWarpVector_StaticNew()
{
  return vtkWarpVector::New();
}

PyObject *PyVTKClass_vtkWarpVectorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkWarpVector_StaticNew,
    PyvtkWarpVector_Methods,
    "vtkWarpVector", modulename,
    NULL, NULL,
    PyvtkWarpVector_Doc(),
    PyVTKClass_vtkPointSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkWarpVector_Doc()
{
  static const char *docstring[] = {
    "vtkWarpVector - deform geometry with vector data\n\n",
    "Superclass: vtkPointSetAlgorithm\n\n",
    "vtkWarpVector is a filter that modifies point coordinates by moving\npoints along vector times the scale factor. Useful for showing flow\nprofiles or mechanical deformation.\n\nThe filter passes both its point data and cell data to its output.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkWarpVector(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkWarpVectorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkWarpVector", o) != 0)
    {
    Py_DECREF(o);
    }

}

