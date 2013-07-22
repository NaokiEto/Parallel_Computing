// python wrapper for vtkArrowSource
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
#include "vtkArrowSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkArrowSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkArrowSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkArrowSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkArrowSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkArrowSource_Doc();


static PyObject *
PyvtkArrowSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

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
      tempr = op->vtkArrowSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

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
      tempr = op->vtkArrowSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  vtkArrowSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkArrowSource::NewInstance();
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
PyvtkArrowSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkArrowSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkArrowSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_SetTipLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTipLength(temp0);
      }
    else
      {
      op->vtkArrowSource::SetTipLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTipLengthMinValue();
      }
    else
      {
      tempr = op->vtkArrowSource::GetTipLengthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTipLengthMaxValue();
      }
    else
      {
      tempr = op->vtkArrowSource::GetTipLengthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTipLength();
      }
    else
      {
      tempr = op->vtkArrowSource::GetTipLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_SetTipRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTipRadius(temp0);
      }
    else
      {
      op->vtkArrowSource::SetTipRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTipRadiusMinValue();
      }
    else
      {
      tempr = op->vtkArrowSource::GetTipRadiusMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTipRadiusMaxValue();
      }
    else
      {
      tempr = op->vtkArrowSource::GetTipRadiusMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTipRadius();
      }
    else
      {
      tempr = op->vtkArrowSource::GetTipRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_SetTipResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTipResolution(temp0);
      }
    else
      {
      op->vtkArrowSource::SetTipResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTipResolutionMinValue();
      }
    else
      {
      tempr = op->vtkArrowSource::GetTipResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTipResolutionMaxValue();
      }
    else
      {
      tempr = op->vtkArrowSource::GetTipResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTipResolution();
      }
    else
      {
      tempr = op->vtkArrowSource::GetTipResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_SetShaftRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShaftRadius(temp0);
      }
    else
      {
      op->vtkArrowSource::SetShaftRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShaftRadiusMinValue();
      }
    else
      {
      tempr = op->vtkArrowSource::GetShaftRadiusMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShaftRadiusMaxValue();
      }
    else
      {
      tempr = op->vtkArrowSource::GetShaftRadiusMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShaftRadius();
      }
    else
      {
      tempr = op->vtkArrowSource::GetShaftRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_SetShaftResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShaftResolution(temp0);
      }
    else
      {
      op->vtkArrowSource::SetShaftResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShaftResolutionMinValue();
      }
    else
      {
      tempr = op->vtkArrowSource::GetShaftResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShaftResolutionMaxValue();
      }
    else
      {
      tempr = op->vtkArrowSource::GetShaftResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShaftResolution();
      }
    else
      {
      tempr = op->vtkArrowSource::GetShaftResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_InvertOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvertOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InvertOn();
      }
    else
      {
      op->vtkArrowSource::InvertOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_InvertOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvertOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InvertOff();
      }
    else
      {
      op->vtkArrowSource::InvertOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_SetInvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInvert(temp0);
      }
    else
      {
      op->vtkArrowSource::SetInvert(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArrowSource_GetInvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInvert();
      }
    else
      {
      tempr = op->vtkArrowSource::GetInvert();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkArrowSource_Methods[] = {
  {(char*)"GetClassName", PyvtkArrowSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArrowSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArrowSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkArrowSource\nC++: vtkArrowSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkArrowSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkArrowSource\nC++: vtkArrowSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTipLength", PyvtkArrowSource_SetTipLength, 1,
   (char*)"V.SetTipLength(float)\nC++: void SetTipLength(double)\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {(char*)"GetTipLengthMinValue", PyvtkArrowSource_GetTipLengthMinValue, 1,
   (char*)"V.GetTipLengthMinValue() -> float\nC++: double GetTipLengthMinValue()\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {(char*)"GetTipLengthMaxValue", PyvtkArrowSource_GetTipLengthMaxValue, 1,
   (char*)"V.GetTipLengthMaxValue() -> float\nC++: double GetTipLengthMaxValue()\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {(char*)"GetTipLength", PyvtkArrowSource_GetTipLength, 1,
   (char*)"V.GetTipLength() -> float\nC++: double GetTipLength()\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {(char*)"SetTipRadius", PyvtkArrowSource_SetTipRadius, 1,
   (char*)"V.SetTipRadius(float)\nC++: void SetTipRadius(double)\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {(char*)"GetTipRadiusMinValue", PyvtkArrowSource_GetTipRadiusMinValue, 1,
   (char*)"V.GetTipRadiusMinValue() -> float\nC++: double GetTipRadiusMinValue()\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {(char*)"GetTipRadiusMaxValue", PyvtkArrowSource_GetTipRadiusMaxValue, 1,
   (char*)"V.GetTipRadiusMaxValue() -> float\nC++: double GetTipRadiusMaxValue()\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {(char*)"GetTipRadius", PyvtkArrowSource_GetTipRadius, 1,
   (char*)"V.GetTipRadius() -> float\nC++: double GetTipRadius()\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {(char*)"SetTipResolution", PyvtkArrowSource_SetTipResolution, 1,
   (char*)"V.SetTipResolution(int)\nC++: void SetTipResolution(int)\n\nSet the resolution of the tip.  The tip behaves the same as a\ncone. Resoultion 1 gives a single triangle, 2 gives two crossed\ntriangles.\n"},
  {(char*)"GetTipResolutionMinValue", PyvtkArrowSource_GetTipResolutionMinValue, 1,
   (char*)"V.GetTipResolutionMinValue() -> int\nC++: int GetTipResolutionMinValue()\n\nSet the resolution of the tip.  The tip behaves the same as a\ncone. Resoultion 1 gives a single triangle, 2 gives two crossed\ntriangles.\n"},
  {(char*)"GetTipResolutionMaxValue", PyvtkArrowSource_GetTipResolutionMaxValue, 1,
   (char*)"V.GetTipResolutionMaxValue() -> int\nC++: int GetTipResolutionMaxValue()\n\nSet the resolution of the tip.  The tip behaves the same as a\ncone. Resoultion 1 gives a single triangle, 2 gives two crossed\ntriangles.\n"},
  {(char*)"GetTipResolution", PyvtkArrowSource_GetTipResolution, 1,
   (char*)"V.GetTipResolution() -> int\nC++: int GetTipResolution()\n\nSet the resolution of the tip.  The tip behaves the same as a\ncone. Resoultion 1 gives a single triangle, 2 gives two crossed\ntriangles.\n"},
  {(char*)"SetShaftRadius", PyvtkArrowSource_SetShaftRadius, 1,
   (char*)"V.SetShaftRadius(float)\nC++: void SetShaftRadius(double)\n\nSet the radius of the shaft.  Defaults to 0.03.\n"},
  {(char*)"GetShaftRadiusMinValue", PyvtkArrowSource_GetShaftRadiusMinValue, 1,
   (char*)"V.GetShaftRadiusMinValue() -> float\nC++: double GetShaftRadiusMinValue()\n\nSet the radius of the shaft.  Defaults to 0.03.\n"},
  {(char*)"GetShaftRadiusMaxValue", PyvtkArrowSource_GetShaftRadiusMaxValue, 1,
   (char*)"V.GetShaftRadiusMaxValue() -> float\nC++: double GetShaftRadiusMaxValue()\n\nSet the radius of the shaft.  Defaults to 0.03.\n"},
  {(char*)"GetShaftRadius", PyvtkArrowSource_GetShaftRadius, 1,
   (char*)"V.GetShaftRadius() -> float\nC++: double GetShaftRadius()\n\nSet the radius of the shaft.  Defaults to 0.03.\n"},
  {(char*)"SetShaftResolution", PyvtkArrowSource_SetShaftResolution, 1,
   (char*)"V.SetShaftResolution(int)\nC++: void SetShaftResolution(int)\n\nSet the resolution of the shaft.  2 gives a rectangle. I would\nlike to extend the cone to produce a line, but this is not an\noption now.\n"},
  {(char*)"GetShaftResolutionMinValue", PyvtkArrowSource_GetShaftResolutionMinValue, 1,
   (char*)"V.GetShaftResolutionMinValue() -> int\nC++: int GetShaftResolutionMinValue()\n\nSet the resolution of the shaft.  2 gives a rectangle. I would\nlike to extend the cone to produce a line, but this is not an\noption now.\n"},
  {(char*)"GetShaftResolutionMaxValue", PyvtkArrowSource_GetShaftResolutionMaxValue, 1,
   (char*)"V.GetShaftResolutionMaxValue() -> int\nC++: int GetShaftResolutionMaxValue()\n\nSet the resolution of the shaft.  2 gives a rectangle. I would\nlike to extend the cone to produce a line, but this is not an\noption now.\n"},
  {(char*)"GetShaftResolution", PyvtkArrowSource_GetShaftResolution, 1,
   (char*)"V.GetShaftResolution() -> int\nC++: int GetShaftResolution()\n\nSet the resolution of the shaft.  2 gives a rectangle. I would\nlike to extend the cone to produce a line, but this is not an\noption now.\n"},
  {(char*)"InvertOn", PyvtkArrowSource_InvertOn, 1,
   (char*)"V.InvertOn()\nC++: void InvertOn()\n\nInverts the arrow direction. When set to true, base is at (1, 0,\n0) while the tip is at (0, 0, 0). The default is false, i.e. base\nat (0, 0, 0) and the tip at (1, 0, 0).\n"},
  {(char*)"InvertOff", PyvtkArrowSource_InvertOff, 1,
   (char*)"V.InvertOff()\nC++: void InvertOff()\n\nInverts the arrow direction. When set to true, base is at (1, 0,\n0) while the tip is at (0, 0, 0). The default is false, i.e. base\nat (0, 0, 0) and the tip at (1, 0, 0).\n"},
  {(char*)"SetInvert", PyvtkArrowSource_SetInvert, 1,
   (char*)"V.SetInvert(bool)\nC++: void SetInvert(bool a)\n\nInverts the arrow direction. When set to true, base is at (1, 0,\n0) while the tip is at (0, 0, 0). The default is false, i.e. base\nat (0, 0, 0) and the tip at (1, 0, 0).\n"},
  {(char*)"GetInvert", PyvtkArrowSource_GetInvert, 1,
   (char*)"V.GetInvert() -> bool\nC++: bool GetInvert()\n\nInverts the arrow direction. When set to true, base is at (1, 0,\n0) while the tip is at (0, 0, 0). The default is false, i.e. base\nat (0, 0, 0) and the tip at (1, 0, 0).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkArrowSource_StaticNew()
{
  return vtkArrowSource::New();
}

PyObject *PyVTKClass_vtkArrowSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkArrowSource_StaticNew,
    PyvtkArrowSource_Methods,
    "vtkArrowSource", modulename,
    NULL, NULL,
    PyvtkArrowSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkArrowSource_Doc()
{
  static const char *docstring[] = {
    "vtkArrowSource - Appends a cylinder to a cone to form an arrow.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkArrowSource was intended to be used as the source for a glyph. The\nshaft base is always at (0,0,0). The arrow tip is always at (1,0,0).\nIf \"Invert\" is true, then the ends are flipped i.e. tip is at (0,0,0)\nwhile base is at (1, 0, 0). The resolution of the cone and shaft can\nbe set and default to 6. The radius of the cone and shaft can be set\nand default to 0.03 and 0.1. The length of the tip ca",
    "n also be set,\nand defaults to 0.35.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrowSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArrowSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrowSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

