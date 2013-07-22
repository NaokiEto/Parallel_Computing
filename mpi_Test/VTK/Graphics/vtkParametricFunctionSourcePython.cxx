// python wrapper for vtkParametricFunctionSource
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
#include "vtkParametricFunctionSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkParametricFunctionSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkParametricFunctionSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkParametricFunctionSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkParametricFunctionSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkParametricFunctionSource_Doc();


static PyObject *
PyvtkParametricFunctionSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

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
      tempr = op->vtkParametricFunctionSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

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
      tempr = op->vtkParametricFunctionSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  vtkParametricFunctionSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkParametricFunctionSource::NewInstance();
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
PyvtkParametricFunctionSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkParametricFunctionSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkParametricFunctionSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetParametricFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  vtkParametricFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkParametricFunction"))
    {
    if (ap.IsBound())
      {
      op->SetParametricFunction(temp0);
      }
    else
      {
      op->vtkParametricFunctionSource::SetParametricFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetParametricFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  vtkParametricFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParametricFunction();
      }
    else
      {
      tempr = op->vtkParametricFunctionSource::GetParametricFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetUResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUResolution(temp0);
      }
    else
      {
      op->vtkParametricFunctionSource::SetUResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetUResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUResolution();
      }
    else
      {
      tempr = op->vtkParametricFunctionSource::GetUResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetVResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVResolution(temp0);
      }
    else
      {
      op->vtkParametricFunctionSource::SetVResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetVResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVResolution();
      }
    else
      {
      tempr = op->vtkParametricFunctionSource::GetVResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetWResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWResolution(temp0);
      }
    else
      {
      op->vtkParametricFunctionSource::SetWResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetWResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWResolution();
      }
    else
      {
      tempr = op->vtkParametricFunctionSource::GetWResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GenerateTextureCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTextureCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateTextureCoordinatesOn();
      }
    else
      {
      op->vtkParametricFunctionSource::GenerateTextureCoordinatesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GenerateTextureCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTextureCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateTextureCoordinatesOff();
      }
    else
      {
      op->vtkParametricFunctionSource::GenerateTextureCoordinatesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetGenerateTextureCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTextureCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateTextureCoordinates(temp0);
      }
    else
      {
      op->vtkParametricFunctionSource::SetGenerateTextureCoordinates(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateTextureCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTextureCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateTextureCoordinates();
      }
    else
      {
      tempr = op->vtkParametricFunctionSource::GetGenerateTextureCoordinates();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarMode(temp0);
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetScalarModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarModeMinValue();
      }
    else
      {
      tempr = op->vtkParametricFunctionSource::GetScalarModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetScalarModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarModeMaxValue();
      }
    else
      {
      tempr = op->vtkParametricFunctionSource::GetScalarModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarMode();
      }
    else
      {
      tempr = op->vtkParametricFunctionSource::GetScalarMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToNone();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToU();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToU();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToV();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToV();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToU0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToU0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToU0();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToU0();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToV0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToV0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToV0();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToV0();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToU0V0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToU0V0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToU0V0();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToU0V0();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToModulus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToModulus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToModulus();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToModulus();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToPhase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToPhase();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToPhase();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToQuadrant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToQuadrant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToQuadrant();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToQuadrant();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToX();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToY();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToZ();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToDistance();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToFunctionDefined(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToFunctionDefined");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToFunctionDefined();
      }
    else
      {
      op->vtkParametricFunctionSource::SetScalarModeToFunctionDefined();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

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
      tempr = op->vtkParametricFunctionSource::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkParametricFunctionSource_Methods[] = {
  {(char*)"GetClassName", PyvtkParametricFunctionSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParametricFunctionSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParametricFunctionSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkParametricFunctionSource\nC++: vtkParametricFunctionSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParametricFunctionSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParametricFunctionSource\nC++: vtkParametricFunctionSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetParametricFunction", PyvtkParametricFunctionSource_SetParametricFunction, 1,
   (char*)"V.SetParametricFunction(vtkParametricFunction)\nC++: virtual void SetParametricFunction(vtkParametricFunction *)\n\nSpecify the parametric function to use to generate the\ntessellation.\n"},
  {(char*)"GetParametricFunction", PyvtkParametricFunctionSource_GetParametricFunction, 1,
   (char*)"V.GetParametricFunction() -> vtkParametricFunction\nC++: vtkParametricFunction *GetParametricFunction()\n\nSpecify the parametric function to use to generate the\ntessellation.\n"},
  {(char*)"SetUResolution", PyvtkParametricFunctionSource_SetUResolution, 1,
   (char*)"V.SetUResolution(int)\nC++: void SetUResolution(int a)\n\nSet/Get the number of subdivisions / tessellations in the u\nparametric direction. Note that the number of tessellant points\nin the u direction is the UResolution + 1.\n"},
  {(char*)"GetUResolution", PyvtkParametricFunctionSource_GetUResolution, 1,
   (char*)"V.GetUResolution() -> int\nC++: int GetUResolution()\n\nSet/Get the number of subdivisions / tessellations in the u\nparametric direction. Note that the number of tessellant points\nin the u direction is the UResolution + 1.\n"},
  {(char*)"SetVResolution", PyvtkParametricFunctionSource_SetVResolution, 1,
   (char*)"V.SetVResolution(int)\nC++: void SetVResolution(int a)\n\nSet/Get the number of subdivisions / tessellations in the v\nparametric direction. Note that the number of tessellant points\nin the v direction is the VResolution + 1.\n"},
  {(char*)"GetVResolution", PyvtkParametricFunctionSource_GetVResolution, 1,
   (char*)"V.GetVResolution() -> int\nC++: int GetVResolution()\n\nSet/Get the number of subdivisions / tessellations in the v\nparametric direction. Note that the number of tessellant points\nin the v direction is the VResolution + 1.\n"},
  {(char*)"SetWResolution", PyvtkParametricFunctionSource_SetWResolution, 1,
   (char*)"V.SetWResolution(int)\nC++: void SetWResolution(int a)\n\nSet/Get the number of subdivisions / tessellations in the w\nparametric direction. Note that the number of tessellant points\nin the w direction is the WResolution + 1.\n"},
  {(char*)"GetWResolution", PyvtkParametricFunctionSource_GetWResolution, 1,
   (char*)"V.GetWResolution() -> int\nC++: int GetWResolution()\n\nSet/Get the number of subdivisions / tessellations in the w\nparametric direction. Note that the number of tessellant points\nin the w direction is the WResolution + 1.\n"},
  {(char*)"GenerateTextureCoordinatesOn", PyvtkParametricFunctionSource_GenerateTextureCoordinatesOn, 1,
   (char*)"V.GenerateTextureCoordinatesOn()\nC++: void GenerateTextureCoordinatesOn()\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {(char*)"GenerateTextureCoordinatesOff", PyvtkParametricFunctionSource_GenerateTextureCoordinatesOff, 1,
   (char*)"V.GenerateTextureCoordinatesOff()\nC++: void GenerateTextureCoordinatesOff()\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {(char*)"SetGenerateTextureCoordinates", PyvtkParametricFunctionSource_SetGenerateTextureCoordinates, 1,
   (char*)"V.SetGenerateTextureCoordinates(int)\nC++: void SetGenerateTextureCoordinates(int a)\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {(char*)"GetGenerateTextureCoordinates", PyvtkParametricFunctionSource_GetGenerateTextureCoordinates, 1,
   (char*)"V.GetGenerateTextureCoordinates() -> int\nC++: int GetGenerateTextureCoordinates()\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {(char*)"SetScalarMode", PyvtkParametricFunctionSource_SetScalarMode, 1,
   (char*)"V.SetScalarMode(int)\nC++: void SetScalarMode(int)\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"GetScalarModeMinValue", PyvtkParametricFunctionSource_GetScalarModeMinValue, 1,
   (char*)"V.GetScalarModeMinValue() -> int\nC++: int GetScalarModeMinValue()\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"GetScalarModeMaxValue", PyvtkParametricFunctionSource_GetScalarModeMaxValue, 1,
   (char*)"V.GetScalarModeMaxValue() -> int\nC++: int GetScalarModeMaxValue()\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"GetScalarMode", PyvtkParametricFunctionSource_GetScalarMode, 1,
   (char*)"V.GetScalarMode() -> int\nC++: int GetScalarMode()\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"SetScalarModeToNone", PyvtkParametricFunctionSource_SetScalarModeToNone, 1,
   (char*)"V.SetScalarModeToNone()\nC++: void SetScalarModeToNone(void)\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"SetScalarModeToU", PyvtkParametricFunctionSource_SetScalarModeToU, 1,
   (char*)"V.SetScalarModeToU()\nC++: void SetScalarModeToU(void)\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"SetScalarModeToV", PyvtkParametricFunctionSource_SetScalarModeToV, 1,
   (char*)"V.SetScalarModeToV()\nC++: void SetScalarModeToV(void)\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"SetScalarModeToU0", PyvtkParametricFunctionSource_SetScalarModeToU0, 1,
   (char*)"V.SetScalarModeToU0()\nC++: void SetScalarModeToU0(void)\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"SetScalarModeToV0", PyvtkParametricFunctionSource_SetScalarModeToV0, 1,
   (char*)"V.SetScalarModeToV0()\nC++: void SetScalarModeToV0(void)\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"SetScalarModeToU0V0", PyvtkParametricFunctionSource_SetScalarModeToU0V0, 1,
   (char*)"V.SetScalarModeToU0V0()\nC++: void SetScalarModeToU0V0(void)\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"SetScalarModeToModulus", PyvtkParametricFunctionSource_SetScalarModeToModulus, 1,
   (char*)"V.SetScalarModeToModulus()\nC++: void SetScalarModeToModulus(void)\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"SetScalarModeToPhase", PyvtkParametricFunctionSource_SetScalarModeToPhase, 1,
   (char*)"V.SetScalarModeToPhase()\nC++: void SetScalarModeToPhase(void)\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"SetScalarModeToQuadrant", PyvtkParametricFunctionSource_SetScalarModeToQuadrant, 1,
   (char*)"V.SetScalarModeToQuadrant()\nC++: void SetScalarModeToQuadrant(void)\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"SetScalarModeToX", PyvtkParametricFunctionSource_SetScalarModeToX, 1,
   (char*)"V.SetScalarModeToX()\nC++: void SetScalarModeToX(void)\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"SetScalarModeToY", PyvtkParametricFunctionSource_SetScalarModeToY, 1,
   (char*)"V.SetScalarModeToY()\nC++: void SetScalarModeToY(void)\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"SetScalarModeToZ", PyvtkParametricFunctionSource_SetScalarModeToZ, 1,
   (char*)"V.SetScalarModeToZ()\nC++: void SetScalarModeToZ(void)\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"SetScalarModeToDistance", PyvtkParametricFunctionSource_SetScalarModeToDistance, 1,
   (char*)"V.SetScalarModeToDistance()\nC++: void SetScalarModeToDistance(void)\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"SetScalarModeToFunctionDefined", PyvtkParametricFunctionSource_SetScalarModeToFunctionDefined, 1,
   (char*)"V.SetScalarModeToFunctionDefined()\nC++: void SetScalarModeToFunctionDefined(void)\n\nGet/Set the mode used for the scalar data.  The options are:\nSCALAR_NONE, (default) scalars are not generated. SCALAR_U, the\nscalar is set to the u-value. SCALAR_V, the scalar is set to the\nv-value. SCALAR_U0, the scalar is set to 1 if u = (u_max -\nu_min)/2 = u_avg, 0 otherwise. SCALAR_V0, the scalar is set to 1\nif v = (v_max - v_min)/2 = v_avg, 0 otherwise. SCALAR_U0V0, the\nscalar is\n  set to 1 if u == u_avg, 2 if v == v_avg, 3 if u = u_avg && v =\nv_avg, 0 otherwise. SCALAR_MODULUS, the scalar is set to\n(sqrt(u*u+v*v)), this is measured relative to (u_avg,v_avg).\nSCALAR_PHASE, the scalar is set to (atan2(v,u)) (in degrees, 0 to\n360), this is measured relative to (u_avg,v_avg).\nSCALAR_QUADRANT, the scalar is set to 1, 2, 3 or 4\n  depending upon the quadrant of the point (u,v). SCALAR_X, the\nscalar is set to the x-value. SCALAR_Y, the scalar is set to the\ny-value. SCALAR_Z, the scalar is set to the z-value.\nSCALAR_DISTANCE, the scalar is set to (sqrt(x*x+y*y+z*z)). I.e.\ndistance from the origin. SCALAR_FUNCTION_DEFINED, the scalar is\nset to the value returned from EvaluateScalar().\n"},
  {(char*)"GetMTime", PyvtkParametricFunctionSource_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime also considering the parametric function.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParametricFunctionSource_StaticNew()
{
  return vtkParametricFunctionSource::New();
}

PyObject *PyVTKClass_vtkParametricFunctionSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParametricFunctionSource_StaticNew,
    PyvtkParametricFunctionSource_Methods,
    "vtkParametricFunctionSource", modulename,
    NULL, NULL,
    PyvtkParametricFunctionSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_NONE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_U", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_V", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_U0", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_V0", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_U0V0", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_MODULUS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_PHASE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_QUADRANT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(9);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_X", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(10);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_Y", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(11);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_Z", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(12);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_DISTANCE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(13);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_FUNCTION_DEFINED", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkParametricFunctionSource_Doc()
{
  static const char *docstring[] = {
    "vtkParametricFunctionSource - tessellate parametric functions\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "This class tessellates parametric functions. The user must specify\nhow many points in the parametric coordinate directions are required\n(i.e., the resolution), and the mode to use to generate scalars.\n\nThanks:\n\nAndrew Maclean a.maclean@cas.edu.au for creating and contributing the\nclass.\n\nSee Also:\n\nvtkParametricFunction\n\nImplementation of parametrics for 1D lines: vtkParametricSpline\n\nSubclasses o",
    "f vtkParametricFunction implementing non-orentable\nsurfaces: vtkParametricBoy vtkParametricCrossCap\nvtkParametricFigure8Klein vtkParametricKlein vtkParametricMobius\nvtkParametricRoman\n\nSubclasses of vtkParametricFunction implementing orientable surfaces:\nvtkParametricConicSpiral vtkParametricDini vtkParametricEllipsoid\nvtkParametricEnneper vtkParametricRandomHills\nvtkParametricSuperEllipsoid vtkPa",
    "rametricSuperToroid\nvtkParametricTorus\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParametricFunctionSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParametricFunctionSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParametricFunctionSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

