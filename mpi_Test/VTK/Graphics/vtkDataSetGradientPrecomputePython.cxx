// python wrapper for vtkDataSetGradientPrecompute
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
#include "vtkDataSetGradientPrecompute.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDataSetGradientPrecompute(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDataSetGradientPrecompute(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDataSetGradientPrecomputeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDataSetGradientPrecomputeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkDataSetGradientPrecompute_Doc();


static PyObject *
PyvtkDataSetGradientPrecompute_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGradientPrecompute *op = static_cast<vtkDataSetGradientPrecompute *>(vp);

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
      tempr = op->vtkDataSetGradientPrecompute::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetGradientPrecompute_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGradientPrecompute *op = static_cast<vtkDataSetGradientPrecompute *>(vp);

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
      tempr = op->vtkDataSetGradientPrecompute::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetGradientPrecompute_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetGradientPrecompute *op = static_cast<vtkDataSetGradientPrecompute *>(vp);

  vtkDataSetGradientPrecompute *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDataSetGradientPrecompute::NewInstance();
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
PyvtkDataSetGradientPrecompute_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDataSetGradientPrecompute *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDataSetGradientPrecompute::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDataSetGradientPrecompute_GradientPrecompute(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GradientPrecompute");

  vtkDataSet *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    tempr = vtkDataSetGradientPrecompute::GradientPrecompute(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDataSetGradientPrecompute_Methods[] = {
  {(char*)"GetClassName", PyvtkDataSetGradientPrecompute_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDataSetGradientPrecompute_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDataSetGradientPrecompute_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDataSetGradientPrecompute\nC++: vtkDataSetGradientPrecompute *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDataSetGradientPrecompute_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDataSetGradientPrecompute\nC++: vtkDataSetGradientPrecompute *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GradientPrecompute", PyvtkDataSetGradientPrecompute_GradientPrecompute, 1,
   (char*)"V.GradientPrecompute(vtkDataSet) -> int\nC++: static int GradientPrecompute(vtkDataSet *ds)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDataSetGradientPrecompute_StaticNew()
{
  return vtkDataSetGradientPrecompute::New();
}

PyObject *PyVTKClass_vtkDataSetGradientPrecomputeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDataSetGradientPrecompute_StaticNew,
    PyvtkDataSetGradientPrecompute_Methods,
    "vtkDataSetGradientPrecompute", modulename,
    NULL, NULL,
    PyvtkDataSetGradientPrecompute_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDataSetGradientPrecompute_Doc()
{
  static const char *docstring[] = {
    "vtkDataSetGradientPrecompute \n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "Computes a geometry based vector field that the DataSetGradient\nfilter uses to accelerate gradient computation. This vector field is\nadded to FieldData since it has a different value for each vertex of\neach cell (a vertex shared by two cell has two differents values).\n\nThanks:\n\nThis file is part of the generalized Youngs material interface\nreconstruction algorithm contributed by CEA/DIF - Commissa",
    "riat a\nl'Energie Atomique, Centre DAM Ile-De-France\n\nBP12, F-91297 Arpajon, France.\n\nImplementation by Thierry Carrard (CEA)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDataSetGradientPrecompute(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDataSetGradientPrecomputeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDataSetGradientPrecompute", o) != 0)
    {
    Py_DECREF(o);
    }

}

