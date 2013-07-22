// python wrapper for vtkHedgeHog
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
#include "vtkHedgeHog.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHedgeHog(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHedgeHog(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHedgeHogNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHedgeHogNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkHedgeHog_Doc();


static PyObject *
PyvtkHedgeHog_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHedgeHog *op = static_cast<vtkHedgeHog *>(vp);

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
      tempr = op->vtkHedgeHog::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHedgeHog_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHedgeHog *op = static_cast<vtkHedgeHog *>(vp);

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
      tempr = op->vtkHedgeHog::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHedgeHog_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHedgeHog *op = static_cast<vtkHedgeHog *>(vp);

  vtkHedgeHog *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHedgeHog::NewInstance();
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
PyvtkHedgeHog_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHedgeHog *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHedgeHog::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHedgeHog_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHedgeHog *op = static_cast<vtkHedgeHog *>(vp);

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
      op->vtkHedgeHog::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHedgeHog_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHedgeHog *op = static_cast<vtkHedgeHog *>(vp);

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
      tempr = op->vtkHedgeHog::GetScaleFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHedgeHog_SetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHedgeHog *op = static_cast<vtkHedgeHog *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorMode(temp0);
      }
    else
      {
      op->vtkHedgeHog::SetVectorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHedgeHog_GetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHedgeHog *op = static_cast<vtkHedgeHog *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorMode();
      }
    else
      {
      tempr = op->vtkHedgeHog::GetVectorMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHedgeHog_SetVectorModeToUseVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToUseVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHedgeHog *op = static_cast<vtkHedgeHog *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToUseVector();
      }
    else
      {
      op->vtkHedgeHog::SetVectorModeToUseVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHedgeHog_SetVectorModeToUseNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToUseNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHedgeHog *op = static_cast<vtkHedgeHog *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToUseNormal();
      }
    else
      {
      op->vtkHedgeHog::SetVectorModeToUseNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHedgeHog_GetVectorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHedgeHog *op = static_cast<vtkHedgeHog *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorModeAsString();
      }
    else
      {
      tempr = op->vtkHedgeHog::GetVectorModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHedgeHog_Methods[] = {
  {(char*)"GetClassName", PyvtkHedgeHog_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHedgeHog_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHedgeHog_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHedgeHog\nC++: vtkHedgeHog *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHedgeHog_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHedgeHog\nC++: vtkHedgeHog *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetScaleFactor", PyvtkHedgeHog_SetScaleFactor, 1,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double a)\n\nSet scale factor to control size of oriented lines.\n"},
  {(char*)"GetScaleFactor", PyvtkHedgeHog_GetScaleFactor, 1,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nSet scale factor to control size of oriented lines.\n"},
  {(char*)"SetVectorMode", PyvtkHedgeHog_SetVectorMode, 1,
   (char*)"V.SetVectorMode(int)\nC++: void SetVectorMode(int a)\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"GetVectorMode", PyvtkHedgeHog_GetVectorMode, 1,
   (char*)"V.GetVectorMode() -> int\nC++: int GetVectorMode()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"SetVectorModeToUseVector", PyvtkHedgeHog_SetVectorModeToUseVector, 1,
   (char*)"V.SetVectorModeToUseVector()\nC++: void SetVectorModeToUseVector()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"SetVectorModeToUseNormal", PyvtkHedgeHog_SetVectorModeToUseNormal, 1,
   (char*)"V.SetVectorModeToUseNormal()\nC++: void SetVectorModeToUseNormal()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {(char*)"GetVectorModeAsString", PyvtkHedgeHog_GetVectorModeAsString, 1,
   (char*)"V.GetVectorModeAsString() -> string\nC++: const char *GetVectorModeAsString()\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHedgeHog_StaticNew()
{
  return vtkHedgeHog::New();
}

PyObject *PyVTKClass_vtkHedgeHogNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHedgeHog_StaticNew,
    PyvtkHedgeHog_Methods,
    "vtkHedgeHog", modulename,
    NULL, NULL,
    PyvtkHedgeHog_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHedgeHog_Doc()
{
  static const char *docstring[] = {
    "vtkHedgeHog - create oriented lines from vector data\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkHedgeHog creates oriented lines from the input data set. Line\nlength is controlled by vector (or normal) magnitude times scale\nfactor. If VectorMode is UseNormal, normals determine the orientation\nof the lines. Lines are colored by scalar data, if available.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHedgeHog(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHedgeHogNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHedgeHog", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_USE_VECTOR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_USE_NORMAL", o) != 0)
    {
    Py_DECREF(o);
    }

}

