// python wrapper for vtkSectorSource
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
#include "vtkSectorSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSectorSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSectorSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSectorSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSectorSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSectorSource_Doc();


static PyObject *
PyvtkSectorSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

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
      tempr = op->vtkSectorSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

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
      tempr = op->vtkSectorSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  vtkSectorSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSectorSource::NewInstance();
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
PyvtkSectorSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSectorSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSectorSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_SetInnerRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInnerRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInnerRadius(temp0);
      }
    else
      {
      op->vtkSectorSource::SetInnerRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetInnerRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInnerRadiusMinValue();
      }
    else
      {
      tempr = op->vtkSectorSource::GetInnerRadiusMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetInnerRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInnerRadiusMaxValue();
      }
    else
      {
      tempr = op->vtkSectorSource::GetInnerRadiusMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetInnerRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInnerRadius();
      }
    else
      {
      tempr = op->vtkSectorSource::GetInnerRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_SetOuterRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOuterRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOuterRadius(temp0);
      }
    else
      {
      op->vtkSectorSource::SetOuterRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetOuterRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOuterRadiusMinValue();
      }
    else
      {
      tempr = op->vtkSectorSource::GetOuterRadiusMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetOuterRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOuterRadiusMaxValue();
      }
    else
      {
      tempr = op->vtkSectorSource::GetOuterRadiusMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetOuterRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOuterRadius();
      }
    else
      {
      tempr = op->vtkSectorSource::GetOuterRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_SetZCoord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZCoord(temp0);
      }
    else
      {
      op->vtkSectorSource::SetZCoord(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetZCoordMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoordMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZCoordMinValue();
      }
    else
      {
      tempr = op->vtkSectorSource::GetZCoordMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetZCoordMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoordMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZCoordMaxValue();
      }
    else
      {
      tempr = op->vtkSectorSource::GetZCoordMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetZCoord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZCoord();
      }
    else
      {
      tempr = op->vtkSectorSource::GetZCoord();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_SetRadialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadialResolution(temp0);
      }
    else
      {
      op->vtkSectorSource::SetRadialResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetRadialResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadialResolutionMinValue();
      }
    else
      {
      tempr = op->vtkSectorSource::GetRadialResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetRadialResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadialResolutionMaxValue();
      }
    else
      {
      tempr = op->vtkSectorSource::GetRadialResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetRadialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadialResolution();
      }
    else
      {
      tempr = op->vtkSectorSource::GetRadialResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_SetCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCircumferentialResolution(temp0);
      }
    else
      {
      op->vtkSectorSource::SetCircumferentialResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetCircumferentialResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCircumferentialResolutionMinValue();
      }
    else
      {
      tempr = op->vtkSectorSource::GetCircumferentialResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetCircumferentialResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCircumferentialResolutionMaxValue();
      }
    else
      {
      tempr = op->vtkSectorSource::GetCircumferentialResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCircumferentialResolution();
      }
    else
      {
      tempr = op->vtkSectorSource::GetCircumferentialResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_SetStartAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartAngle(temp0);
      }
    else
      {
      op->vtkSectorSource::SetStartAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetStartAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartAngleMinValue();
      }
    else
      {
      tempr = op->vtkSectorSource::GetStartAngleMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetStartAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartAngleMaxValue();
      }
    else
      {
      tempr = op->vtkSectorSource::GetStartAngleMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetStartAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartAngle();
      }
    else
      {
      tempr = op->vtkSectorSource::GetStartAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_SetEndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndAngle(temp0);
      }
    else
      {
      op->vtkSectorSource::SetEndAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetEndAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEndAngleMinValue();
      }
    else
      {
      tempr = op->vtkSectorSource::GetEndAngleMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetEndAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEndAngleMaxValue();
      }
    else
      {
      tempr = op->vtkSectorSource::GetEndAngleMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSectorSource_GetEndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEndAngle();
      }
    else
      {
      tempr = op->vtkSectorSource::GetEndAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSectorSource_Methods[] = {
  {(char*)"GetClassName", PyvtkSectorSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSectorSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSectorSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSectorSource\nC++: vtkSectorSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSectorSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSectorSource\nC++: vtkSectorSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInnerRadius", PyvtkSectorSource_SetInnerRadius, 1,
   (char*)"V.SetInnerRadius(float)\nC++: void SetInnerRadius(double)\n\nSpecify inner radius of the sector.\n"},
  {(char*)"GetInnerRadiusMinValue", PyvtkSectorSource_GetInnerRadiusMinValue, 1,
   (char*)"V.GetInnerRadiusMinValue() -> float\nC++: double GetInnerRadiusMinValue()\n\nSpecify inner radius of the sector.\n"},
  {(char*)"GetInnerRadiusMaxValue", PyvtkSectorSource_GetInnerRadiusMaxValue, 1,
   (char*)"V.GetInnerRadiusMaxValue() -> float\nC++: double GetInnerRadiusMaxValue()\n\nSpecify inner radius of the sector.\n"},
  {(char*)"GetInnerRadius", PyvtkSectorSource_GetInnerRadius, 1,
   (char*)"V.GetInnerRadius() -> float\nC++: double GetInnerRadius()\n\nSpecify inner radius of the sector.\n"},
  {(char*)"SetOuterRadius", PyvtkSectorSource_SetOuterRadius, 1,
   (char*)"V.SetOuterRadius(float)\nC++: void SetOuterRadius(double)\n\nSpecify outer radius of the sector.\n"},
  {(char*)"GetOuterRadiusMinValue", PyvtkSectorSource_GetOuterRadiusMinValue, 1,
   (char*)"V.GetOuterRadiusMinValue() -> float\nC++: double GetOuterRadiusMinValue()\n\nSpecify outer radius of the sector.\n"},
  {(char*)"GetOuterRadiusMaxValue", PyvtkSectorSource_GetOuterRadiusMaxValue, 1,
   (char*)"V.GetOuterRadiusMaxValue() -> float\nC++: double GetOuterRadiusMaxValue()\n\nSpecify outer radius of the sector.\n"},
  {(char*)"GetOuterRadius", PyvtkSectorSource_GetOuterRadius, 1,
   (char*)"V.GetOuterRadius() -> float\nC++: double GetOuterRadius()\n\nSpecify outer radius of the sector.\n"},
  {(char*)"SetZCoord", PyvtkSectorSource_SetZCoord, 1,
   (char*)"V.SetZCoord(float)\nC++: void SetZCoord(double)\n\nSpecify the z coordinate of the sector.\n"},
  {(char*)"GetZCoordMinValue", PyvtkSectorSource_GetZCoordMinValue, 1,
   (char*)"V.GetZCoordMinValue() -> float\nC++: double GetZCoordMinValue()\n\nSpecify the z coordinate of the sector.\n"},
  {(char*)"GetZCoordMaxValue", PyvtkSectorSource_GetZCoordMaxValue, 1,
   (char*)"V.GetZCoordMaxValue() -> float\nC++: double GetZCoordMaxValue()\n\nSpecify the z coordinate of the sector.\n"},
  {(char*)"GetZCoord", PyvtkSectorSource_GetZCoord, 1,
   (char*)"V.GetZCoord() -> float\nC++: double GetZCoord()\n\nSpecify the z coordinate of the sector.\n"},
  {(char*)"SetRadialResolution", PyvtkSectorSource_SetRadialResolution, 1,
   (char*)"V.SetRadialResolution(int)\nC++: void SetRadialResolution(int)\n\nSet the number of points in radius direction.\n"},
  {(char*)"GetRadialResolutionMinValue", PyvtkSectorSource_GetRadialResolutionMinValue, 1,
   (char*)"V.GetRadialResolutionMinValue() -> int\nC++: int GetRadialResolutionMinValue()\n\nSet the number of points in radius direction.\n"},
  {(char*)"GetRadialResolutionMaxValue", PyvtkSectorSource_GetRadialResolutionMaxValue, 1,
   (char*)"V.GetRadialResolutionMaxValue() -> int\nC++: int GetRadialResolutionMaxValue()\n\nSet the number of points in radius direction.\n"},
  {(char*)"GetRadialResolution", PyvtkSectorSource_GetRadialResolution, 1,
   (char*)"V.GetRadialResolution() -> int\nC++: int GetRadialResolution()\n\nSet the number of points in radius direction.\n"},
  {(char*)"SetCircumferentialResolution", PyvtkSectorSource_SetCircumferentialResolution, 1,
   (char*)"V.SetCircumferentialResolution(int)\nC++: void SetCircumferentialResolution(int)\n\nSet the number of points in circumferential direction.\n"},
  {(char*)"GetCircumferentialResolutionMinValue", PyvtkSectorSource_GetCircumferentialResolutionMinValue, 1,
   (char*)"V.GetCircumferentialResolutionMinValue() -> int\nC++: int GetCircumferentialResolutionMinValue()\n\nSet the number of points in circumferential direction.\n"},
  {(char*)"GetCircumferentialResolutionMaxValue", PyvtkSectorSource_GetCircumferentialResolutionMaxValue, 1,
   (char*)"V.GetCircumferentialResolutionMaxValue() -> int\nC++: int GetCircumferentialResolutionMaxValue()\n\nSet the number of points in circumferential direction.\n"},
  {(char*)"GetCircumferentialResolution", PyvtkSectorSource_GetCircumferentialResolution, 1,
   (char*)"V.GetCircumferentialResolution() -> int\nC++: int GetCircumferentialResolution()\n\nSet the number of points in circumferential direction.\n"},
  {(char*)"SetStartAngle", PyvtkSectorSource_SetStartAngle, 1,
   (char*)"V.SetStartAngle(float)\nC++: void SetStartAngle(double)\n\nSet the start angle of the sector.\n"},
  {(char*)"GetStartAngleMinValue", PyvtkSectorSource_GetStartAngleMinValue, 1,
   (char*)"V.GetStartAngleMinValue() -> float\nC++: double GetStartAngleMinValue()\n\nSet the start angle of the sector.\n"},
  {(char*)"GetStartAngleMaxValue", PyvtkSectorSource_GetStartAngleMaxValue, 1,
   (char*)"V.GetStartAngleMaxValue() -> float\nC++: double GetStartAngleMaxValue()\n\nSet the start angle of the sector.\n"},
  {(char*)"GetStartAngle", PyvtkSectorSource_GetStartAngle, 1,
   (char*)"V.GetStartAngle() -> float\nC++: double GetStartAngle()\n\nSet the start angle of the sector.\n"},
  {(char*)"SetEndAngle", PyvtkSectorSource_SetEndAngle, 1,
   (char*)"V.SetEndAngle(float)\nC++: void SetEndAngle(double)\n\nSet the end angle of the sector.\n"},
  {(char*)"GetEndAngleMinValue", PyvtkSectorSource_GetEndAngleMinValue, 1,
   (char*)"V.GetEndAngleMinValue() -> float\nC++: double GetEndAngleMinValue()\n\nSet the end angle of the sector.\n"},
  {(char*)"GetEndAngleMaxValue", PyvtkSectorSource_GetEndAngleMaxValue, 1,
   (char*)"V.GetEndAngleMaxValue() -> float\nC++: double GetEndAngleMaxValue()\n\nSet the end angle of the sector.\n"},
  {(char*)"GetEndAngle", PyvtkSectorSource_GetEndAngle, 1,
   (char*)"V.GetEndAngle() -> float\nC++: double GetEndAngle()\n\nSet the end angle of the sector.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSectorSource_StaticNew()
{
  return vtkSectorSource::New();
}

PyObject *PyVTKClass_vtkSectorSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSectorSource_StaticNew,
    PyvtkSectorSource_Methods,
    "vtkSectorSource", modulename,
    NULL, NULL,
    PyvtkSectorSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSectorSource_Doc()
{
  static const char *docstring[] = {
    "vtkSectorSource - create a sector of a disk\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSectorSource creates a sector of a polygonal disk. The disk has\nzero height. The user can specify the inner and outer radius of the\ndisk, the z-coordinate, and the radial and circumferential resolution\nof the polygonal representation.\n\nSee Also:\n\nvtkLinearExtrusionFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSectorSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSectorSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSectorSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

