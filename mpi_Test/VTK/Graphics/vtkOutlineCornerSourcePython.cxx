// python wrapper for vtkOutlineCornerSource
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
#include "vtkOutlineCornerSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOutlineCornerSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOutlineCornerSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOutlineCornerSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOutlineCornerSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkOutlineSourceNew
extern "C" { PyObject *PyVTKClass_vtkOutlineSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkOutlineSourceNew
#endif

static const char **PyvtkOutlineCornerSource_Doc();


static PyObject *
PyvtkOutlineCornerSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

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
      tempr = op->vtkOutlineCornerSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

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
      tempr = op->vtkOutlineCornerSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  vtkOutlineCornerSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOutlineCornerSource::NewInstance();
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
PyvtkOutlineCornerSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOutlineCornerSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOutlineCornerSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_SetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCornerFactor(temp0);
      }
    else
      {
      op->vtkOutlineCornerSource::SetCornerFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_GetCornerFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerFactorMinValue();
      }
    else
      {
      tempr = op->vtkOutlineCornerSource::GetCornerFactorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_GetCornerFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerFactorMaxValue();
      }
    else
      {
      tempr = op->vtkOutlineCornerSource::GetCornerFactorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineCornerSource_GetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineCornerSource *op = static_cast<vtkOutlineCornerSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCornerFactor();
      }
    else
      {
      tempr = op->vtkOutlineCornerSource::GetCornerFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOutlineCornerSource_Methods[] = {
  {(char*)"GetClassName", PyvtkOutlineCornerSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOutlineCornerSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOutlineCornerSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOutlineCornerSource\nC++: vtkOutlineCornerSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOutlineCornerSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOutlineCornerSource\nC++: vtkOutlineCornerSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCornerFactor", PyvtkOutlineCornerSource_SetCornerFactor, 1,
   (char*)"V.SetCornerFactor(float)\nC++: void SetCornerFactor(double)\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {(char*)"GetCornerFactorMinValue", PyvtkOutlineCornerSource_GetCornerFactorMinValue, 1,
   (char*)"V.GetCornerFactorMinValue() -> float\nC++: double GetCornerFactorMinValue()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {(char*)"GetCornerFactorMaxValue", PyvtkOutlineCornerSource_GetCornerFactorMaxValue, 1,
   (char*)"V.GetCornerFactorMaxValue() -> float\nC++: double GetCornerFactorMaxValue()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {(char*)"GetCornerFactor", PyvtkOutlineCornerSource_GetCornerFactor, 1,
   (char*)"V.GetCornerFactor() -> float\nC++: double GetCornerFactor()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOutlineCornerSource_StaticNew()
{
  return vtkOutlineCornerSource::New();
}

PyObject *PyVTKClass_vtkOutlineCornerSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOutlineCornerSource_StaticNew,
    PyvtkOutlineCornerSource_Methods,
    "vtkOutlineCornerSource", modulename,
    NULL, NULL,
    PyvtkOutlineCornerSource_Doc(),
    PyVTKClass_vtkOutlineSourceNew(modulename));
  return cls;
}

const char **PyvtkOutlineCornerSource_Doc()
{
  static const char *docstring[] = {
    "vtkOutlineCornerSource - create wireframe outline corners around\nbounding box\n\n",
    "Superclass: vtkOutlineSource\n\n",
    "vtkOutlineCornerSource creates wireframe outline corners around a\nuser-specified bounding box.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOutlineCornerSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOutlineCornerSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOutlineCornerSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

