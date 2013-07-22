// python wrapper for vtkTimeSourceExample
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
#include "vtkTimeSourceExample.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTimeSourceExample(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTimeSourceExample(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTimeSourceExampleNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTimeSourceExampleNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkTimeSourceExample_Doc();


static PyObject *
PyvtkTimeSourceExample_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

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
      tempr = op->vtkTimeSourceExample::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

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
      tempr = op->vtkTimeSourceExample::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  vtkTimeSourceExample *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTimeSourceExample::NewInstance();
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
PyvtkTimeSourceExample_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTimeSourceExample *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTimeSourceExample::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_SetAnalytic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnalytic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAnalytic(temp0);
      }
    else
      {
      op->vtkTimeSourceExample::SetAnalytic(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetAnalyticMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnalyticMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAnalyticMinValue();
      }
    else
      {
      tempr = op->vtkTimeSourceExample::GetAnalyticMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetAnalyticMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnalyticMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAnalyticMaxValue();
      }
    else
      {
      tempr = op->vtkTimeSourceExample::GetAnalyticMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetAnalytic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnalytic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAnalytic();
      }
    else
      {
      tempr = op->vtkTimeSourceExample::GetAnalytic();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_AnalyticOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnalyticOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AnalyticOn();
      }
    else
      {
      op->vtkTimeSourceExample::AnalyticOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_AnalyticOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnalyticOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AnalyticOff();
      }
    else
      {
      op->vtkTimeSourceExample::AnalyticOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_SetXAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXAmplitude(temp0);
      }
    else
      {
      op->vtkTimeSourceExample::SetXAmplitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetXAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXAmplitude();
      }
    else
      {
      tempr = op->vtkTimeSourceExample::GetXAmplitude();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_SetYAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYAmplitude(temp0);
      }
    else
      {
      op->vtkTimeSourceExample::SetYAmplitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetYAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYAmplitude();
      }
    else
      {
      tempr = op->vtkTimeSourceExample::GetYAmplitude();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_SetGrowing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGrowing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGrowing(temp0);
      }
    else
      {
      op->vtkTimeSourceExample::SetGrowing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetGrowingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrowingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGrowingMinValue();
      }
    else
      {
      tempr = op->vtkTimeSourceExample::GetGrowingMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetGrowingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrowingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGrowingMaxValue();
      }
    else
      {
      tempr = op->vtkTimeSourceExample::GetGrowingMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetGrowing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrowing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGrowing();
      }
    else
      {
      tempr = op->vtkTimeSourceExample::GetGrowing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GrowingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GrowingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GrowingOn();
      }
    else
      {
      op->vtkTimeSourceExample::GrowingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GrowingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GrowingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GrowingOff();
      }
    else
      {
      op->vtkTimeSourceExample::GrowingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTimeSourceExample_Methods[] = {
  {(char*)"GetClassName", PyvtkTimeSourceExample_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTimeSourceExample_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTimeSourceExample_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTimeSourceExample\nC++: vtkTimeSourceExample *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTimeSourceExample_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTimeSourceExample\nC++: vtkTimeSourceExample *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAnalytic", PyvtkTimeSourceExample_SetAnalytic, 1,
   (char*)"V.SetAnalytic(int)\nC++: void SetAnalytic(int)\n\n"},
  {(char*)"GetAnalyticMinValue", PyvtkTimeSourceExample_GetAnalyticMinValue, 1,
   (char*)"V.GetAnalyticMinValue() -> int\nC++: int GetAnalyticMinValue()\n\n"},
  {(char*)"GetAnalyticMaxValue", PyvtkTimeSourceExample_GetAnalyticMaxValue, 1,
   (char*)"V.GetAnalyticMaxValue() -> int\nC++: int GetAnalyticMaxValue()\n\n"},
  {(char*)"GetAnalytic", PyvtkTimeSourceExample_GetAnalytic, 1,
   (char*)"V.GetAnalytic() -> int\nC++: int GetAnalytic()\n\n"},
  {(char*)"AnalyticOn", PyvtkTimeSourceExample_AnalyticOn, 1,
   (char*)"V.AnalyticOn()\nC++: void AnalyticOn()\n\n"},
  {(char*)"AnalyticOff", PyvtkTimeSourceExample_AnalyticOff, 1,
   (char*)"V.AnalyticOff()\nC++: void AnalyticOff()\n\n"},
  {(char*)"SetXAmplitude", PyvtkTimeSourceExample_SetXAmplitude, 1,
   (char*)"V.SetXAmplitude(float)\nC++: void SetXAmplitude(double a)\n\n"},
  {(char*)"GetXAmplitude", PyvtkTimeSourceExample_GetXAmplitude, 1,
   (char*)"V.GetXAmplitude() -> float\nC++: double GetXAmplitude()\n\n"},
  {(char*)"SetYAmplitude", PyvtkTimeSourceExample_SetYAmplitude, 1,
   (char*)"V.SetYAmplitude(float)\nC++: void SetYAmplitude(double a)\n\n"},
  {(char*)"GetYAmplitude", PyvtkTimeSourceExample_GetYAmplitude, 1,
   (char*)"V.GetYAmplitude() -> float\nC++: double GetYAmplitude()\n\n"},
  {(char*)"SetGrowing", PyvtkTimeSourceExample_SetGrowing, 1,
   (char*)"V.SetGrowing(int)\nC++: void SetGrowing(int)\n\n"},
  {(char*)"GetGrowingMinValue", PyvtkTimeSourceExample_GetGrowingMinValue, 1,
   (char*)"V.GetGrowingMinValue() -> int\nC++: int GetGrowingMinValue()\n\n"},
  {(char*)"GetGrowingMaxValue", PyvtkTimeSourceExample_GetGrowingMaxValue, 1,
   (char*)"V.GetGrowingMaxValue() -> int\nC++: int GetGrowingMaxValue()\n\n"},
  {(char*)"GetGrowing", PyvtkTimeSourceExample_GetGrowing, 1,
   (char*)"V.GetGrowing() -> int\nC++: int GetGrowing()\n\n"},
  {(char*)"GrowingOn", PyvtkTimeSourceExample_GrowingOn, 1,
   (char*)"V.GrowingOn()\nC++: void GrowingOn()\n\n"},
  {(char*)"GrowingOff", PyvtkTimeSourceExample_GrowingOff, 1,
   (char*)"V.GrowingOff()\nC++: void GrowingOff()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTimeSourceExample_StaticNew()
{
  return vtkTimeSourceExample::New();
}

PyObject *PyVTKClass_vtkTimeSourceExampleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTimeSourceExample_StaticNew,
    PyvtkTimeSourceExample_Methods,
    "vtkTimeSourceExample", modulename,
    NULL, NULL,
    PyvtkTimeSourceExample_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTimeSourceExample_Doc()
{
  static const char *docstring[] = {
    "vtkTimeSource - creates a simple time varying data set.\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "Creates a small easily understood time varying data set for testing.\nThe output is a vtkUntructuredGrid in which the point and cell values\nvary over time in a sin wave. The analytic ivar controls whether the\noutput corresponds to a step function over time or is continuous. The\nX and Y Amplitude ivars make the output move in the X and Y\ndirections over time. The Growing ivar makes the number of cel",
    "ls in\nthe output grow and then shrink over time.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTimeSourceExample(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTimeSourceExampleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTimeSourceExample", o) != 0)
    {
    Py_DECREF(o);
    }

}

