// python wrapper for vtkPOutlineCornerFilter
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
#include "vtkPOutlineCornerFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPOutlineCornerFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPOutlineCornerFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPOutlineCornerFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPOutlineCornerFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkPOutlineCornerFilter_Doc();


static PyObject *
PyvtkPOutlineCornerFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

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
      tempr = op->vtkPOutlineCornerFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

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
      tempr = op->vtkPOutlineCornerFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  vtkPOutlineCornerFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPOutlineCornerFilter::NewInstance();
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
PyvtkPOutlineCornerFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPOutlineCornerFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPOutlineCornerFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_SetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

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
      op->vtkPOutlineCornerFilter::SetCornerFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_GetCornerFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

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
      tempr = op->vtkPOutlineCornerFilter::GetCornerFactorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_GetCornerFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

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
      tempr = op->vtkPOutlineCornerFilter::GetCornerFactorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_GetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

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
      tempr = op->vtkPOutlineCornerFilter::GetCornerFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPOutlineCornerFilter::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPOutlineCornerFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPOutlineCornerFilter *op = static_cast<vtkPOutlineCornerFilter *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkPOutlineCornerFilter::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPOutlineCornerFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPOutlineCornerFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPOutlineCornerFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPOutlineCornerFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPOutlineCornerFilter\nC++: vtkPOutlineCornerFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPOutlineCornerFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPOutlineCornerFilter\nC++: vtkPOutlineCornerFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCornerFactor", PyvtkPOutlineCornerFilter_SetCornerFactor, 1,
   (char*)"V.SetCornerFactor(float)\nC++: void SetCornerFactor(double)\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {(char*)"GetCornerFactorMinValue", PyvtkPOutlineCornerFilter_GetCornerFactorMinValue, 1,
   (char*)"V.GetCornerFactorMinValue() -> float\nC++: double GetCornerFactorMinValue()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {(char*)"GetCornerFactorMaxValue", PyvtkPOutlineCornerFilter_GetCornerFactorMaxValue, 1,
   (char*)"V.GetCornerFactorMaxValue() -> float\nC++: double GetCornerFactorMaxValue()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {(char*)"GetCornerFactor", PyvtkPOutlineCornerFilter_GetCornerFactor, 1,
   (char*)"V.GetCornerFactor() -> float\nC++: double GetCornerFactor()\n\nSet/Get the factor that controls the relative size of the corners\nto the length of the corresponding bounds\n"},
  {(char*)"SetController", PyvtkPOutlineCornerFilter_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {(char*)"GetController", PyvtkPOutlineCornerFilter_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet and get the controller.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPOutlineCornerFilter_StaticNew()
{
  return vtkPOutlineCornerFilter::New();
}

PyObject *PyVTKClass_vtkPOutlineCornerFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPOutlineCornerFilter_StaticNew,
    PyvtkPOutlineCornerFilter_Methods,
    "vtkPOutlineCornerFilter", modulename,
    NULL, NULL,
    PyvtkPOutlineCornerFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPOutlineCornerFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPOutlineCornerFilter - create wireframe outline corners for\narbitrary data set\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkPOutlineCornerFilter works like vtkOutlineCornerFilter, but it\nlooks for data partitions in other processes.  It assumes the filter\nis operated in a data parallel pipeline.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPOutlineCornerFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPOutlineCornerFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPOutlineCornerFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

