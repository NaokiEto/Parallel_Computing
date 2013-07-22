// python wrapper for vtkHyperOctreeLimiter
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
#include "vtkHyperOctreeLimiter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHyperOctreeLimiter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHyperOctreeLimiter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHyperOctreeLimiterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHyperOctreeLimiterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkHyperOctreeLimiter_Doc();


static PyObject *
PyvtkHyperOctreeLimiter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeLimiter *op = static_cast<vtkHyperOctreeLimiter *>(vp);

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
      tempr = op->vtkHyperOctreeLimiter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeLimiter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeLimiter *op = static_cast<vtkHyperOctreeLimiter *>(vp);

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
      tempr = op->vtkHyperOctreeLimiter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeLimiter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeLimiter *op = static_cast<vtkHyperOctreeLimiter *>(vp);

  vtkHyperOctreeLimiter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHyperOctreeLimiter::NewInstance();
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
PyvtkHyperOctreeLimiter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHyperOctreeLimiter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHyperOctreeLimiter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeLimiter_GetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeLimiter *op = static_cast<vtkHyperOctreeLimiter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumLevel();
      }
    else
      {
      tempr = op->vtkHyperOctreeLimiter::GetMaximumLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHyperOctreeLimiter_SetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperOctreeLimiter *op = static_cast<vtkHyperOctreeLimiter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLevel(temp0);
      }
    else
      {
      op->vtkHyperOctreeLimiter::SetMaximumLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkHyperOctreeLimiter_Methods[] = {
  {(char*)"GetClassName", PyvtkHyperOctreeLimiter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHyperOctreeLimiter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHyperOctreeLimiter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHyperOctreeLimiter\nC++: vtkHyperOctreeLimiter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHyperOctreeLimiter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHyperOctreeLimiter\nC++: vtkHyperOctreeLimiter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMaximumLevel", PyvtkHyperOctreeLimiter_GetMaximumLevel, 1,
   (char*)"V.GetMaximumLevel() -> int\nC++: int GetMaximumLevel()\n\nReturn the maximum number of levels of the hyperoctree.\n"},
  {(char*)"SetMaximumLevel", PyvtkHyperOctreeLimiter_SetMaximumLevel, 1,
   (char*)"V.SetMaximumLevel(int)\nC++: void SetMaximumLevel(int levels)\n\nSet the maximum number of levels of the hyperoctree.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHyperOctreeLimiter_StaticNew()
{
  return vtkHyperOctreeLimiter::New();
}

PyObject *PyVTKClass_vtkHyperOctreeLimiterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHyperOctreeLimiter_StaticNew,
    PyvtkHyperOctreeLimiter_Methods,
    "vtkHyperOctreeLimiter", modulename,
    NULL, NULL,
    PyvtkHyperOctreeLimiter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHyperOctreeLimiter_Doc()
{
  static const char *docstring[] = {
    "vtkHyperOctreeLimiter - Limit the tree's depth, averaging data\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "This filter returns a lower resolution copy of its input\nvtkHyperOctree. It does a length/area/volume weighted averaging to\nobtain data at each cut point. Above the cut level, leaf attribute\ndata is simply copied.\n\nSee Also:\n\nvtkHyperOctree\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHyperOctreeLimiter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHyperOctreeLimiterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHyperOctreeLimiter", o) != 0)
    {
    Py_DECREF(o);
    }

}

