// python wrapper for vtkVectorDot
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
#include "vtkVectorDot.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVectorDot(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVectorDot(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVectorDotNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVectorDotNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkVectorDot_Doc();


static PyObject *
PyvtkVectorDot_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorDot *op = static_cast<vtkVectorDot *>(vp);

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
      tempr = op->vtkVectorDot::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVectorDot_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorDot *op = static_cast<vtkVectorDot *>(vp);

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
      tempr = op->vtkVectorDot::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVectorDot_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorDot *op = static_cast<vtkVectorDot *>(vp);

  vtkVectorDot *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVectorDot::NewInstance();
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
PyvtkVectorDot_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVectorDot *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVectorDot::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVectorDot_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorDot *op = static_cast<vtkVectorDot *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetScalarRange(temp0, temp1);
      }
    else
      {
      op->vtkVectorDot::SetScalarRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVectorDot_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorDot *op = static_cast<vtkVectorDot *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetScalarRange(temp0);
      }
    else
      {
      op->vtkVectorDot::SetScalarRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVectorDot_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkVectorDot_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkVectorDot_SetScalarRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return NULL;
}



static PyObject *
PyvtkVectorDot_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorDot *op = static_cast<vtkVectorDot *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarRange();
      }
    else
      {
      tempr = op->vtkVectorDot::GetScalarRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkVectorDot_Methods[] = {
  {(char*)"GetClassName", PyvtkVectorDot_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVectorDot_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVectorDot_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVectorDot\nC++: vtkVectorDot *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVectorDot_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVectorDot\nC++: vtkVectorDot *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetScalarRange", PyvtkVectorDot_SetScalarRange, 1,
   (char*)"V.SetScalarRange(float, float)\nC++: void SetScalarRange(double, double)\nV.SetScalarRange((float, float))\nC++: void SetScalarRange(double a[2])\n\n"},
  {(char*)"GetScalarRange", PyvtkVectorDot_GetScalarRange, 1,
   (char*)"V.GetScalarRange() -> (float, float)\nC++: double *GetScalarRange()\n\nGet the range that scalars map into.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVectorDot_StaticNew()
{
  return vtkVectorDot::New();
}

PyObject *PyVTKClass_vtkVectorDotNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVectorDot_StaticNew,
    PyvtkVectorDot_Methods,
    "vtkVectorDot", modulename,
    NULL, NULL,
    PyvtkVectorDot_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVectorDot_Doc()
{
  static const char *docstring[] = {
    "vtkVectorDot - generate scalars from dot product of vectors and\nnormals (e.g., show displacement plot)\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkVectorDot is a filter to generate scalar values from a dataset.\nThe scalar value at a point is created by computing the dot product\nbetween the normal and vector at that point. Combined with the\nappropriate color map, this can show nodal lines/mode shapes of\nvibration, or a displacement plot.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVectorDot(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVectorDotNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVectorDot", o) != 0)
    {
    Py_DECREF(o);
    }

}

