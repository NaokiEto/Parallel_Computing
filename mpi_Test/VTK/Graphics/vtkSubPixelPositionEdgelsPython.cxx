// python wrapper for vtkSubPixelPositionEdgels
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
#include "vtkSubPixelPositionEdgels.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSubPixelPositionEdgels(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSubPixelPositionEdgels(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSubPixelPositionEdgelsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSubPixelPositionEdgelsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSubPixelPositionEdgels_Doc();


static PyObject *
PyvtkSubPixelPositionEdgels_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

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
      tempr = op->vtkSubPixelPositionEdgels::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

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
      tempr = op->vtkSubPixelPositionEdgels::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  vtkSubPixelPositionEdgels *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSubPixelPositionEdgels::NewInstance();
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
PyvtkSubPixelPositionEdgels_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSubPixelPositionEdgels *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSubPixelPositionEdgels::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_SetGradMaps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradMaps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  vtkStructuredPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStructuredPoints"))
    {
    if (ap.IsBound())
      {
      op->SetGradMaps(temp0);
      }
    else
      {
      op->vtkSubPixelPositionEdgels::SetGradMaps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_GetGradMaps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradMaps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  vtkStructuredPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradMaps();
      }
    else
      {
      tempr = op->vtkSubPixelPositionEdgels::GetGradMaps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_SetTargetFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTargetFlag(temp0);
      }
    else
      {
      op->vtkSubPixelPositionEdgels::SetTargetFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_GetTargetFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTargetFlag();
      }
    else
      {
      tempr = op->vtkSubPixelPositionEdgels::GetTargetFlag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_TargetFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TargetFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TargetFlagOn();
      }
    else
      {
      op->vtkSubPixelPositionEdgels::TargetFlagOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_TargetFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TargetFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TargetFlagOff();
      }
    else
      {
      op->vtkSubPixelPositionEdgels::TargetFlagOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_SetTargetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTargetValue(temp0);
      }
    else
      {
      op->vtkSubPixelPositionEdgels::SetTargetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_GetTargetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTargetValue();
      }
    else
      {
      tempr = op->vtkSubPixelPositionEdgels::GetTargetValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSubPixelPositionEdgels_Methods[] = {
  {(char*)"GetClassName", PyvtkSubPixelPositionEdgels_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSubPixelPositionEdgels_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSubPixelPositionEdgels_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSubPixelPositionEdgels\nC++: vtkSubPixelPositionEdgels *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSubPixelPositionEdgels_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSubPixelPositionEdgels\nC++: vtkSubPixelPositionEdgels *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGradMaps", PyvtkSubPixelPositionEdgels_SetGradMaps, 1,
   (char*)"V.SetGradMaps(vtkStructuredPoints)\nC++: void SetGradMaps(vtkStructuredPoints *gm)\n\nSet/Get the gradient data for doing the position adjustments.\n"},
  {(char*)"GetGradMaps", PyvtkSubPixelPositionEdgels_GetGradMaps, 1,
   (char*)"V.GetGradMaps() -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetGradMaps()\n\nSet/Get the gradient data for doing the position adjustments.\n"},
  {(char*)"SetTargetFlag", PyvtkSubPixelPositionEdgels_SetTargetFlag, 1,
   (char*)"V.SetTargetFlag(int)\nC++: void SetTargetFlag(int a)\n\nThese methods can make the positioning look for a target scalar\nvalue instead of looking for a maximum.\n"},
  {(char*)"GetTargetFlag", PyvtkSubPixelPositionEdgels_GetTargetFlag, 1,
   (char*)"V.GetTargetFlag() -> int\nC++: int GetTargetFlag()\n\nThese methods can make the positioning look for a target scalar\nvalue instead of looking for a maximum.\n"},
  {(char*)"TargetFlagOn", PyvtkSubPixelPositionEdgels_TargetFlagOn, 1,
   (char*)"V.TargetFlagOn()\nC++: void TargetFlagOn()\n\nThese methods can make the positioning look for a target scalar\nvalue instead of looking for a maximum.\n"},
  {(char*)"TargetFlagOff", PyvtkSubPixelPositionEdgels_TargetFlagOff, 1,
   (char*)"V.TargetFlagOff()\nC++: void TargetFlagOff()\n\nThese methods can make the positioning look for a target scalar\nvalue instead of looking for a maximum.\n"},
  {(char*)"SetTargetValue", PyvtkSubPixelPositionEdgels_SetTargetValue, 1,
   (char*)"V.SetTargetValue(float)\nC++: void SetTargetValue(double a)\n\nThese methods can make the positioning look for a target scalar\nvalue instead of looking for a maximum.\n"},
  {(char*)"GetTargetValue", PyvtkSubPixelPositionEdgels_GetTargetValue, 1,
   (char*)"V.GetTargetValue() -> float\nC++: double GetTargetValue()\n\nThese methods can make the positioning look for a target scalar\nvalue instead of looking for a maximum.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSubPixelPositionEdgels_StaticNew()
{
  return vtkSubPixelPositionEdgels::New();
}

PyObject *PyVTKClass_vtkSubPixelPositionEdgelsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSubPixelPositionEdgels_StaticNew,
    PyvtkSubPixelPositionEdgels_Methods,
    "vtkSubPixelPositionEdgels", modulename,
    NULL, NULL,
    PyvtkSubPixelPositionEdgels_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSubPixelPositionEdgels_Doc()
{
  static const char *docstring[] = {
    "vtkSubPixelPositionEdgels - adjust edgel locations based on gradients.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSubPixelPositionEdgels is a filter that takes a series of linked\nedgels (digital curves) and gradient maps as input. It then adjusts\nthe edgel locations based on the gradient data. Specifically, the\nalgorithm first determines the neighboring gradient magnitudes of an\nedgel using simple interpolation of its neighbors. It then fits the\nfollowing three data points: negative gradient direction grad",
    "ient\nmagnitude, edgel gradient magnitude and positive gradient direction\ngradient magnitude to a quadratic function. It then solves this\nquadratic to find the maximum gradient location along the gradient\norientation.  It then modifies the edgels location along the gradient\norientation to the calculated maximum location. This algorithm does\nnot adjust an edgel in the direction orthogonal to its gra",
    "dient\nvector.\n\nSee Also:\n\nvtkImageData vtkImageGradient vtkLinkEdgels\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSubPixelPositionEdgels(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSubPixelPositionEdgelsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSubPixelPositionEdgels", o) != 0)
    {
    Py_DECREF(o);
    }

}

