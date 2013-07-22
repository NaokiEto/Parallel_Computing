// python wrapper for vtkRTAnalyticSource
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
#include "vtkRTAnalyticSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRTAnalyticSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRTAnalyticSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRTAnalyticSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRTAnalyticSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkRTAnalyticSource_Doc();


static PyObject *
PyvtkRTAnalyticSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

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
      tempr = op->vtkRTAnalyticSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

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
      tempr = op->vtkRTAnalyticSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  vtkRTAnalyticSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRTAnalyticSource::NewInstance();
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
PyvtkRTAnalyticSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRTAnalyticSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRTAnalyticSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkRTAnalyticSource::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWholeExtent();
      }
    else
      {
      tempr = op->vtkRTAnalyticSource::GetWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRTAnalyticSource::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRTAnalyticSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRTAnalyticSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkRTAnalyticSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkRTAnalyticSource_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkRTAnalyticSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCenter();
      }
    else
      {
      tempr = op->vtkRTAnalyticSource::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximum(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximum();
      }
    else
      {
      tempr = op->vtkRTAnalyticSource::GetMaximum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStandardDeviation(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetStandardDeviation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStandardDeviation();
      }
    else
      {
      tempr = op->vtkRTAnalyticSource::GetStandardDeviation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetXFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXFreq(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetXFreq(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetXFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXFreq();
      }
    else
      {
      tempr = op->vtkRTAnalyticSource::GetXFreq();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetYFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYFreq(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetYFreq(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetYFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYFreq();
      }
    else
      {
      tempr = op->vtkRTAnalyticSource::GetYFreq();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetZFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZFreq(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetZFreq(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetZFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZFreq();
      }
    else
      {
      tempr = op->vtkRTAnalyticSource::GetZFreq();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetXMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXMag(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetXMag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetXMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXMag();
      }
    else
      {
      tempr = op->vtkRTAnalyticSource::GetXMag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetYMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYMag(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetYMag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetYMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYMag();
      }
    else
      {
      tempr = op->vtkRTAnalyticSource::GetYMag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetZMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZMag(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetZMag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetZMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZMag();
      }
    else
      {
      tempr = op->vtkRTAnalyticSource::GetZMag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetSubsampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubsampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSubsampleRate(temp0);
      }
    else
      {
      op->vtkRTAnalyticSource::SetSubsampleRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetSubsampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubsampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSubsampleRate();
      }
    else
      {
      tempr = op->vtkRTAnalyticSource::GetSubsampleRate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRTAnalyticSource_Methods[] = {
  {(char*)"GetClassName", PyvtkRTAnalyticSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRTAnalyticSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRTAnalyticSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRTAnalyticSource\nC++: vtkRTAnalyticSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRTAnalyticSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRTAnalyticSource\nC++: vtkRTAnalyticSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWholeExtent", PyvtkRTAnalyticSource_SetWholeExtent, 1,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int xMinx, int xMax, int yMin, int yMax,\n    int zMin, int zMax)\n\nSet/Get the extent of the whole output image. Initial value is\n{-10,10,-10,10,-10,10}\n"},
  {(char*)"GetWholeExtent", PyvtkRTAnalyticSource_GetWholeExtent, 1,
   (char*)"V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {(char*)"SetCenter", PyvtkRTAnalyticSource_SetCenter, 1,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkRTAnalyticSource_GetCenter, 1,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {(char*)"SetMaximum", PyvtkRTAnalyticSource_SetMaximum, 1,
   (char*)"V.SetMaximum(float)\nC++: void SetMaximum(double a)\n\nSet/Get the Maximum value of the function. Initial value is\n255.0.\n"},
  {(char*)"GetMaximum", PyvtkRTAnalyticSource_GetMaximum, 1,
   (char*)"V.GetMaximum() -> float\nC++: double GetMaximum()\n\nSet/Get the Maximum value of the function. Initial value is\n255.0.\n"},
  {(char*)"SetStandardDeviation", PyvtkRTAnalyticSource_SetStandardDeviation, 1,
   (char*)"V.SetStandardDeviation(float)\nC++: void SetStandardDeviation(double a)\n\nSet/Get the standard deviation of the function. Initial value is\n0.5.\n"},
  {(char*)"GetStandardDeviation", PyvtkRTAnalyticSource_GetStandardDeviation, 1,
   (char*)"V.GetStandardDeviation() -> float\nC++: double GetStandardDeviation()\n\nSet/Get the standard deviation of the function. Initial value is\n0.5.\n"},
  {(char*)"SetXFreq", PyvtkRTAnalyticSource_SetXFreq, 1,
   (char*)"V.SetXFreq(float)\nC++: void SetXFreq(double a)\n\nSet/Get the natural frequency in x. Initial value is 60.\n"},
  {(char*)"GetXFreq", PyvtkRTAnalyticSource_GetXFreq, 1,
   (char*)"V.GetXFreq() -> float\nC++: double GetXFreq()\n\nSet/Get the natural frequency in x. Initial value is 60.\n"},
  {(char*)"SetYFreq", PyvtkRTAnalyticSource_SetYFreq, 1,
   (char*)"V.SetYFreq(float)\nC++: void SetYFreq(double a)\n\nSet/Get the natural frequency in y. Initial value is 30.\n"},
  {(char*)"GetYFreq", PyvtkRTAnalyticSource_GetYFreq, 1,
   (char*)"V.GetYFreq() -> float\nC++: double GetYFreq()\n\nSet/Get the natural frequency in y. Initial value is 30.\n"},
  {(char*)"SetZFreq", PyvtkRTAnalyticSource_SetZFreq, 1,
   (char*)"V.SetZFreq(float)\nC++: void SetZFreq(double a)\n\nSet/Get the natural frequency in z. Initial value is 40.\n"},
  {(char*)"GetZFreq", PyvtkRTAnalyticSource_GetZFreq, 1,
   (char*)"V.GetZFreq() -> float\nC++: double GetZFreq()\n\nSet/Get the natural frequency in z. Initial value is 40.\n"},
  {(char*)"SetXMag", PyvtkRTAnalyticSource_SetXMag, 1,
   (char*)"V.SetXMag(float)\nC++: void SetXMag(double a)\n\nSet/Get the magnitude in x. Initial value is 10.\n"},
  {(char*)"GetXMag", PyvtkRTAnalyticSource_GetXMag, 1,
   (char*)"V.GetXMag() -> float\nC++: double GetXMag()\n\nSet/Get the magnitude in x. Initial value is 10.\n"},
  {(char*)"SetYMag", PyvtkRTAnalyticSource_SetYMag, 1,
   (char*)"V.SetYMag(float)\nC++: void SetYMag(double a)\n\nSet/Get the magnitude in y. Initial value is 18.\n"},
  {(char*)"GetYMag", PyvtkRTAnalyticSource_GetYMag, 1,
   (char*)"V.GetYMag() -> float\nC++: double GetYMag()\n\nSet/Get the magnitude in y. Initial value is 18.\n"},
  {(char*)"SetZMag", PyvtkRTAnalyticSource_SetZMag, 1,
   (char*)"V.SetZMag(float)\nC++: void SetZMag(double a)\n\nSet/Get the magnitude in z. Initial value is 5.\n"},
  {(char*)"GetZMag", PyvtkRTAnalyticSource_GetZMag, 1,
   (char*)"V.GetZMag() -> float\nC++: double GetZMag()\n\nSet/Get the magnitude in z. Initial value is 5.\n"},
  {(char*)"SetSubsampleRate", PyvtkRTAnalyticSource_SetSubsampleRate, 1,
   (char*)"V.SetSubsampleRate(int)\nC++: void SetSubsampleRate(int a)\n\nSet/Get the sub-sample rate. Initial value is 1.\n"},
  {(char*)"GetSubsampleRate", PyvtkRTAnalyticSource_GetSubsampleRate, 1,
   (char*)"V.GetSubsampleRate() -> int\nC++: int GetSubsampleRate()\n\nSet/Get the sub-sample rate. Initial value is 1.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRTAnalyticSource_StaticNew()
{
  return vtkRTAnalyticSource::New();
}

PyObject *PyVTKClass_vtkRTAnalyticSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRTAnalyticSource_StaticNew,
    PyvtkRTAnalyticSource_Methods,
    "vtkRTAnalyticSource", modulename,
    NULL, NULL,
    PyvtkRTAnalyticSource_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRTAnalyticSource_Doc()
{
  static const char *docstring[] = {
    "vtkRTAnalyticSource - Create an image for regression testing\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkRTAnalyticSource just produces images with pixel values determined\nby a Maximum*Gaussian*XMag*sin(XFreq*x)*sin(YFreq*y)*cos(ZFreq*z)\nValues are float scalars on point data with name \"RTData\".\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRTAnalyticSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRTAnalyticSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRTAnalyticSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

