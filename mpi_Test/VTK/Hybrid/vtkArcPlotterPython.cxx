// python wrapper for vtkArcPlotter
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
#include "vtkArcPlotter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkArcPlotter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkArcPlotter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkArcPlotterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkArcPlotterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkArcPlotter_Doc();


static PyObject *
PyvtkArcPlotter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

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
      tempr = op->vtkArcPlotter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

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
      tempr = op->vtkArcPlotter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  vtkArcPlotter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkArcPlotter::NewInstance();
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
PyvtkArcPlotter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkArcPlotter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkArcPlotter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  vtkCamera *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->SetCamera(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  vtkCamera *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCamera();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlotMode(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetPlotMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetPlotMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlotMode();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetPlotMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlotModeToPlotScalars();
      }
    else
      {
      op->vtkArcPlotter::SetPlotModeToPlotScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlotModeToPlotVectors();
      }
    else
      {
      op->vtkArcPlotter::SetPlotModeToPlotVectors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlotModeToPlotNormals();
      }
    else
      {
      op->vtkArcPlotter::SetPlotModeToPlotNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlotModeToPlotTCoords();
      }
    else
      {
      op->vtkArcPlotter::SetPlotModeToPlotTCoords();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlotModeToPlotTensors();
      }
    else
      {
      op->vtkArcPlotter::SetPlotModeToPlotTensors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotModeToPlotFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotModeToPlotFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlotModeToPlotFieldData();
      }
    else
      {
      op->vtkArcPlotter::SetPlotModeToPlotFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetPlotComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlotComponent(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetPlotComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetPlotComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlotComponent();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetPlotComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadiusMinValue();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetRadiusMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadiusMaxValue();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetRadiusMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadius();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeight(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetHeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeightMinValue();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetHeightMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetHeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeightMaxValue();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetHeightMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeight();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOffset(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffsetMinValue();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetOffsetMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffsetMaxValue();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetOffsetMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffset();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDefaultNormal(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetUseDefaultNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseDefaultNormal();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetUseDefaultNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_UseDefaultNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDefaultNormalOn();
      }
    else
      {
      op->vtkArcPlotter::UseDefaultNormalOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_UseDefaultNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDefaultNormalOff();
      }
    else
      {
      op->vtkArcPlotter::UseDefaultNormalOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetDefaultNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetDefaultNormal(temp0, temp1, temp2);
      }
    else
      {
      op->vtkArcPlotter::SetDefaultNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcPlotter_SetDefaultNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  float temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultNormal(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetDefaultNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcPlotter_SetDefaultNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkArcPlotter_SetDefaultNormal_s1(self, args);
    case 1:
      return PyvtkArcPlotter_SetDefaultNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDefaultNormal");
  return NULL;
}



static PyObject *
PyvtkArcPlotter_GetDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  float *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultNormal();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetDefaultNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_SetFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldDataArray(temp0);
      }
    else
      {
      op->vtkArcPlotter::SetFieldDataArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetFieldDataArrayMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArrayMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldDataArrayMinValue();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetFieldDataArrayMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetFieldDataArrayMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArrayMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldDataArrayMaxValue();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetFieldDataArrayMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldDataArray();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetFieldDataArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcPlotter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcPlotter *op = static_cast<vtkArcPlotter *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkArcPlotter::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkArcPlotter_Methods[] = {
  {(char*)"GetClassName", PyvtkArcPlotter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArcPlotter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArcPlotter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkArcPlotter\nC++: vtkArcPlotter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkArcPlotter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkArcPlotter\nC++: vtkArcPlotter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCamera", PyvtkArcPlotter_SetCamera, 1,
   (char*)"V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSpecify a camera used to orient the plot along the arc. If no\ncamera is specified, then the orientation of the plot is\narbitrary.\n"},
  {(char*)"GetCamera", PyvtkArcPlotter_GetCamera, 1,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nSpecify a camera used to orient the plot along the arc. If no\ncamera is specified, then the orientation of the plot is\narbitrary.\n"},
  {(char*)"SetPlotMode", PyvtkArcPlotter_SetPlotMode, 1,
   (char*)"V.SetPlotMode(int)\nC++: void SetPlotMode(int a)\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {(char*)"GetPlotMode", PyvtkArcPlotter_GetPlotMode, 1,
   (char*)"V.GetPlotMode() -> int\nC++: int GetPlotMode()\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {(char*)"SetPlotModeToPlotScalars", PyvtkArcPlotter_SetPlotModeToPlotScalars, 1,
   (char*)"V.SetPlotModeToPlotScalars()\nC++: void SetPlotModeToPlotScalars()\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {(char*)"SetPlotModeToPlotVectors", PyvtkArcPlotter_SetPlotModeToPlotVectors, 1,
   (char*)"V.SetPlotModeToPlotVectors()\nC++: void SetPlotModeToPlotVectors()\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {(char*)"SetPlotModeToPlotNormals", PyvtkArcPlotter_SetPlotModeToPlotNormals, 1,
   (char*)"V.SetPlotModeToPlotNormals()\nC++: void SetPlotModeToPlotNormals()\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {(char*)"SetPlotModeToPlotTCoords", PyvtkArcPlotter_SetPlotModeToPlotTCoords, 1,
   (char*)"V.SetPlotModeToPlotTCoords()\nC++: void SetPlotModeToPlotTCoords()\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {(char*)"SetPlotModeToPlotTensors", PyvtkArcPlotter_SetPlotModeToPlotTensors, 1,
   (char*)"V.SetPlotModeToPlotTensors()\nC++: void SetPlotModeToPlotTensors()\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {(char*)"SetPlotModeToPlotFieldData", PyvtkArcPlotter_SetPlotModeToPlotFieldData, 1,
   (char*)"V.SetPlotModeToPlotFieldData()\nC++: void SetPlotModeToPlotFieldData()\n\nSpecify which data to plot: scalars, vectors, normals, texture\ncoords, tensors, or field data. If the data has more than one\ncomponent, use the method SetPlotComponent to control which\ncomponent to plot.\n"},
  {(char*)"SetPlotComponent", PyvtkArcPlotter_SetPlotComponent, 1,
   (char*)"V.SetPlotComponent(int)\nC++: void SetPlotComponent(int a)\n\nSet/Get the component number to plot if the data has more than\none component. If the value of the plot component is == (-1),\nthen all the components will be plotted.\n"},
  {(char*)"GetPlotComponent", PyvtkArcPlotter_GetPlotComponent, 1,
   (char*)"V.GetPlotComponent() -> int\nC++: int GetPlotComponent()\n\nSet/Get the component number to plot if the data has more than\none component. If the value of the plot component is == (-1),\nthen all the components will be plotted.\n"},
  {(char*)"SetRadius", PyvtkArcPlotter_SetRadius, 1,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double)\n\nSet the radius of the \"median\" value of the first plotted\ncomponent.\n"},
  {(char*)"GetRadiusMinValue", PyvtkArcPlotter_GetRadiusMinValue, 1,
   (char*)"V.GetRadiusMinValue() -> float\nC++: double GetRadiusMinValue()\n\nSet the radius of the \"median\" value of the first plotted\ncomponent.\n"},
  {(char*)"GetRadiusMaxValue", PyvtkArcPlotter_GetRadiusMaxValue, 1,
   (char*)"V.GetRadiusMaxValue() -> float\nC++: double GetRadiusMaxValue()\n\nSet the radius of the \"median\" value of the first plotted\ncomponent.\n"},
  {(char*)"GetRadius", PyvtkArcPlotter_GetRadius, 1,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet the radius of the \"median\" value of the first plotted\ncomponent.\n"},
  {(char*)"SetHeight", PyvtkArcPlotter_SetHeight, 1,
   (char*)"V.SetHeight(float)\nC++: void SetHeight(double)\n\nSet the height of the plot. (The radius combined with the height\ndefine the location of the plot relative to the generating\npolyline.)\n"},
  {(char*)"GetHeightMinValue", PyvtkArcPlotter_GetHeightMinValue, 1,
   (char*)"V.GetHeightMinValue() -> float\nC++: double GetHeightMinValue()\n\nSet the height of the plot. (The radius combined with the height\ndefine the location of the plot relative to the generating\npolyline.)\n"},
  {(char*)"GetHeightMaxValue", PyvtkArcPlotter_GetHeightMaxValue, 1,
   (char*)"V.GetHeightMaxValue() -> float\nC++: double GetHeightMaxValue()\n\nSet the height of the plot. (The radius combined with the height\ndefine the location of the plot relative to the generating\npolyline.)\n"},
  {(char*)"GetHeight", PyvtkArcPlotter_GetHeight, 1,
   (char*)"V.GetHeight() -> float\nC++: double GetHeight()\n\nSet the height of the plot. (The radius combined with the height\ndefine the location of the plot relative to the generating\npolyline.)\n"},
  {(char*)"SetOffset", PyvtkArcPlotter_SetOffset, 1,
   (char*)"V.SetOffset(float)\nC++: void SetOffset(double)\n\nSpecify an offset that translates each subsequent plot (if there\nis more than one component plotted) from the defining arc (i.e.,\npolyline).\n"},
  {(char*)"GetOffsetMinValue", PyvtkArcPlotter_GetOffsetMinValue, 1,
   (char*)"V.GetOffsetMinValue() -> float\nC++: double GetOffsetMinValue()\n\nSpecify an offset that translates each subsequent plot (if there\nis more than one component plotted) from the defining arc (i.e.,\npolyline).\n"},
  {(char*)"GetOffsetMaxValue", PyvtkArcPlotter_GetOffsetMaxValue, 1,
   (char*)"V.GetOffsetMaxValue() -> float\nC++: double GetOffsetMaxValue()\n\nSpecify an offset that translates each subsequent plot (if there\nis more than one component plotted) from the defining arc (i.e.,\npolyline).\n"},
  {(char*)"GetOffset", PyvtkArcPlotter_GetOffset, 1,
   (char*)"V.GetOffset() -> float\nC++: double GetOffset()\n\nSpecify an offset that translates each subsequent plot (if there\nis more than one component plotted) from the defining arc (i.e.,\npolyline).\n"},
  {(char*)"SetUseDefaultNormal", PyvtkArcPlotter_SetUseDefaultNormal, 1,
   (char*)"V.SetUseDefaultNormal(int)\nC++: void SetUseDefaultNormal(int a)\n\nSet a boolean to control whether to use default normals. By\ndefault, normals are automatically computed from the generating\npolyline and camera.\n"},
  {(char*)"GetUseDefaultNormal", PyvtkArcPlotter_GetUseDefaultNormal, 1,
   (char*)"V.GetUseDefaultNormal() -> int\nC++: int GetUseDefaultNormal()\n\nSet a boolean to control whether to use default normals. By\ndefault, normals are automatically computed from the generating\npolyline and camera.\n"},
  {(char*)"UseDefaultNormalOn", PyvtkArcPlotter_UseDefaultNormalOn, 1,
   (char*)"V.UseDefaultNormalOn()\nC++: void UseDefaultNormalOn()\n\nSet a boolean to control whether to use default normals. By\ndefault, normals are automatically computed from the generating\npolyline and camera.\n"},
  {(char*)"UseDefaultNormalOff", PyvtkArcPlotter_UseDefaultNormalOff, 1,
   (char*)"V.UseDefaultNormalOff()\nC++: void UseDefaultNormalOff()\n\nSet a boolean to control whether to use default normals. By\ndefault, normals are automatically computed from the generating\npolyline and camera.\n"},
  {(char*)"SetDefaultNormal", PyvtkArcPlotter_SetDefaultNormal, 1,
   (char*)"V.SetDefaultNormal(float, float, float)\nC++: void SetDefaultNormal(float, float, float)\nV.SetDefaultNormal((float, float, float))\nC++: void SetDefaultNormal(float a[3])\n\n"},
  {(char*)"GetDefaultNormal", PyvtkArcPlotter_GetDefaultNormal, 1,
   (char*)"V.GetDefaultNormal() -> (float, float, float)\nC++: float *GetDefaultNormal()\n\nSet the default normal to use if you do not wish automatic normal\ncalculation. The arc plot will be generated using this normal.\n"},
  {(char*)"SetFieldDataArray", PyvtkArcPlotter_SetFieldDataArray, 1,
   (char*)"V.SetFieldDataArray(int)\nC++: void SetFieldDataArray(int)\n\nSet/Get the field data array to plot. This instance variable is\nonly applicable if field data is plotted.\n"},
  {(char*)"GetFieldDataArrayMinValue", PyvtkArcPlotter_GetFieldDataArrayMinValue, 1,
   (char*)"V.GetFieldDataArrayMinValue() -> int\nC++: int GetFieldDataArrayMinValue()\n\nSet/Get the field data array to plot. This instance variable is\nonly applicable if field data is plotted.\n"},
  {(char*)"GetFieldDataArrayMaxValue", PyvtkArcPlotter_GetFieldDataArrayMaxValue, 1,
   (char*)"V.GetFieldDataArrayMaxValue() -> int\nC++: int GetFieldDataArrayMaxValue()\n\nSet/Get the field data array to plot. This instance variable is\nonly applicable if field data is plotted.\n"},
  {(char*)"GetFieldDataArray", PyvtkArcPlotter_GetFieldDataArray, 1,
   (char*)"V.GetFieldDataArray() -> int\nC++: int GetFieldDataArray()\n\nSet/Get the field data array to plot. This instance variable is\nonly applicable if field data is plotted.\n"},
  {(char*)"GetMTime", PyvtkArcPlotter_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nNew GetMTime because of camera dependency.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkArcPlotter_StaticNew()
{
  return vtkArcPlotter::New();
}

PyObject *PyVTKClass_vtkArcPlotterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkArcPlotter_StaticNew,
    PyvtkArcPlotter_Methods,
    "vtkArcPlotter", modulename,
    NULL, NULL,
    PyvtkArcPlotter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkArcPlotter_Doc()
{
  static const char *docstring[] = {
    "vtkArcPlotter - plot data along an arbitrary polyline\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkArcPlotter performs plotting of attribute data along polylines\ndefined with an input vtkPolyData data object. Any type of attribute\ndata can be plotted including scalars, vectors, tensors, normals,\ntexture coordinates, and field data. Either one or multiple data\ncomponents can be plotted.\n\nTo use this class you must specify an input data set that contains\none or more polylines, and some attribu",
    "te data including which\ncomponent of the attribute data. (By default, this class processes\nthe first component of scalar data.) You will also need to set an\noffset radius (the distance of the polyline to the median line of the\nplot), a width for the plot (the distance that the minimum and\nmaximum plot values are mapped into), an possibly an offset (used to\noffset attribute data with multiple compo",
    "nents).\n\nNormally the filter automatically computes normals for generating the\noffset arc plot. However, you can specify a default normal and use\nthat instead.\n\nSee Also:\n\nvtkXYPlotActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArcPlotter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArcPlotterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArcPlotter", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PLOT_SCALARS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PLOT_VECTORS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PLOT_NORMALS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PLOT_TCOORDS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PLOT_TENSORS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(6);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_PLOT_FIELD_DATA", o) != 0)
    {
    Py_DECREF(o);
    }

}

