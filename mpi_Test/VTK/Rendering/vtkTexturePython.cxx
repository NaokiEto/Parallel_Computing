// python wrapper for vtkTexture
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
#include "vtkTexture.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTexture(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTexture(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTextureNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTextureNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkTexture_Doc();


static PyObject *
PyvtkTexture_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

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
      tempr = op->vtkTexture::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

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
      tempr = op->vtkTexture::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkTexture *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTexture::NewInstance();
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
PyvtkTexture_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTexture *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->Render(temp0);
      }
    else
      {
      op->vtkTexture::Render(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_PostRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->PostRender(temp0);
      }
    else
      {
      op->vtkTexture::PostRender(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkTexture::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_Load(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->Load(temp0);
      }
    else
      {
      op->vtkTexture::Load(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_GetRepeat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRepeat();
      }
    else
      {
      tempr = op->vtkTexture::GetRepeat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_SetRepeat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepeat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepeat(temp0);
      }
    else
      {
      op->vtkTexture::SetRepeat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_RepeatOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepeatOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RepeatOn();
      }
    else
      {
      op->vtkTexture::RepeatOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_RepeatOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepeatOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RepeatOff();
      }
    else
      {
      op->vtkTexture::RepeatOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_GetEdgeClamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeClamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeClamp();
      }
    else
      {
      tempr = op->vtkTexture::GetEdgeClamp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_SetEdgeClamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeClamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeClamp(temp0);
      }
    else
      {
      op->vtkTexture::SetEdgeClamp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_EdgeClampOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeClampOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeClampOn();
      }
    else
      {
      op->vtkTexture::EdgeClampOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_EdgeClampOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeClampOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeClampOff();
      }
    else
      {
      op->vtkTexture::EdgeClampOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_GetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolate();
      }
    else
      {
      tempr = op->vtkTexture::GetInterpolate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_SetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolate(temp0);
      }
    else
      {
      op->vtkTexture::SetInterpolate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_InterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InterpolateOn();
      }
    else
      {
      op->vtkTexture::InterpolateOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_InterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InterpolateOff();
      }
    else
      {
      op->vtkTexture::InterpolateOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_SetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQuality(temp0);
      }
    else
      {
      op->vtkTexture::SetQuality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_GetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQuality();
      }
    else
      {
      tempr = op->vtkTexture::GetQuality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_SetQualityToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityToDefault();
      }
    else
      {
      op->vtkTexture::SetQualityToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_SetQualityTo16Bit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityTo16Bit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityTo16Bit();
      }
    else
      {
      op->vtkTexture::SetQualityTo16Bit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_SetQualityTo32Bit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityTo32Bit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetQualityTo32Bit();
      }
    else
      {
      op->vtkTexture::SetQualityTo32Bit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_GetMapColorScalarsThroughLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapColorScalarsThroughLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMapColorScalarsThroughLookupTable();
      }
    else
      {
      tempr = op->vtkTexture::GetMapColorScalarsThroughLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_SetMapColorScalarsThroughLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapColorScalarsThroughLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMapColorScalarsThroughLookupTable(temp0);
      }
    else
      {
      op->vtkTexture::SetMapColorScalarsThroughLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_MapColorScalarsThroughLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapColorScalarsThroughLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MapColorScalarsThroughLookupTableOn();
      }
    else
      {
      op->vtkTexture::MapColorScalarsThroughLookupTableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_MapColorScalarsThroughLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapColorScalarsThroughLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MapColorScalarsThroughLookupTableOff();
      }
    else
      {
      op->vtkTexture::MapColorScalarsThroughLookupTableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkTexture::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkTexture::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkScalarsToColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLookupTable();
      }
    else
      {
      tempr = op->vtkTexture::GetLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_GetMappedScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMappedScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkUnsignedCharArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMappedScalars();
      }
    else
      {
      tempr = op->vtkTexture::GetMappedScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0);
      }
    else
      {
      op->vtkTexture::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransform();
      }
    else
      {
      tempr = op->vtkTexture::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_GetBlendingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlendingMode();
      }
    else
      {
      tempr = op->vtkTexture::GetBlendingMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_SetBlendingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBlendingMode(temp0);
      }
    else
      {
      op->vtkTexture::SetBlendingMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_GetPremultipliedAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPremultipliedAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPremultipliedAlpha();
      }
    else
      {
      tempr = op->vtkTexture::GetPremultipliedAlpha();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_SetPremultipliedAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPremultipliedAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPremultipliedAlpha(temp0);
      }
    else
      {
      op->vtkTexture::SetPremultipliedAlpha(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_PremultipliedAlphaOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PremultipliedAlphaOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PremultipliedAlphaOn();
      }
    else
      {
      op->vtkTexture::PremultipliedAlphaOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_PremultipliedAlphaOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PremultipliedAlphaOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PremultipliedAlphaOff();
      }
    else
      {
      op->vtkTexture::PremultipliedAlphaOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_GetRestrictPowerOf2ImageSmaller(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestrictPowerOf2ImageSmaller");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRestrictPowerOf2ImageSmaller();
      }
    else
      {
      tempr = op->vtkTexture::GetRestrictPowerOf2ImageSmaller();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_SetRestrictPowerOf2ImageSmaller(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestrictPowerOf2ImageSmaller");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRestrictPowerOf2ImageSmaller(temp0);
      }
    else
      {
      op->vtkTexture::SetRestrictPowerOf2ImageSmaller(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_RestrictPowerOf2ImageSmallerOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestrictPowerOf2ImageSmallerOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RestrictPowerOf2ImageSmallerOn();
      }
    else
      {
      op->vtkTexture::RestrictPowerOf2ImageSmallerOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_RestrictPowerOf2ImageSmallerOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestrictPowerOf2ImageSmallerOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RestrictPowerOf2ImageSmallerOff();
      }
    else
      {
      op->vtkTexture::RestrictPowerOf2ImageSmallerOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexture_IsTranslucent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTranslucent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsTranslucent();
      }
    else
      {
      tempr = op->vtkTexture::IsTranslucent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTexture_Methods[] = {
  {(char*)"GetClassName", PyvtkTexture_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTexture_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTexture_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTexture\nC++: vtkTexture *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTexture_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTexture\nC++: vtkTexture *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Render", PyvtkTexture_Render, 1,
   (char*)"V.Render(vtkRenderer)\nC++: virtual void Render(vtkRenderer *ren)\n\nRenders a texture map. It first checks the object's modified time\nto make sure the texture maps Input is valid, then it invokes the\nLoad() method.\n"},
  {(char*)"PostRender", PyvtkTexture_PostRender, 1,
   (char*)"V.PostRender(vtkRenderer)\nC++: virtual void PostRender(vtkRenderer *)\n\nCleans up after the texture rendering to restore the state of the\ngraphics context.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkTexture_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\ntexture. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"Load", PyvtkTexture_Load, 1,
   (char*)"V.Load(vtkRenderer)\nC++: virtual void Load(vtkRenderer *)\n\nAbstract interface to renderer. Each concrete subclass of\nvtkTexture will load its data into graphics system in response to\nthis method invocation.\n"},
  {(char*)"GetRepeat", PyvtkTexture_GetRepeat, 1,
   (char*)"V.GetRepeat() -> int\nC++: int GetRepeat()\n\nTurn on/off the repetition of the texture map when the texture\ncoords extend beyond the [0,1] range.\n"},
  {(char*)"SetRepeat", PyvtkTexture_SetRepeat, 1,
   (char*)"V.SetRepeat(int)\nC++: void SetRepeat(int a)\n\nTurn on/off the repetition of the texture map when the texture\ncoords extend beyond the [0,1] range.\n"},
  {(char*)"RepeatOn", PyvtkTexture_RepeatOn, 1,
   (char*)"V.RepeatOn()\nC++: void RepeatOn()\n\nTurn on/off the repetition of the texture map when the texture\ncoords extend beyond the [0,1] range.\n"},
  {(char*)"RepeatOff", PyvtkTexture_RepeatOff, 1,
   (char*)"V.RepeatOff()\nC++: void RepeatOff()\n\nTurn on/off the repetition of the texture map when the texture\ncoords extend beyond the [0,1] range.\n"},
  {(char*)"GetEdgeClamp", PyvtkTexture_GetEdgeClamp, 1,
   (char*)"V.GetEdgeClamp() -> int\nC++: int GetEdgeClamp()\n\nTurn on/off the clamping of the texture map when the texture\ncoords extend beyond the [0,1] range. Only used when Repeat is\noff, and edge clamping is supported by the graphics card.\n"},
  {(char*)"SetEdgeClamp", PyvtkTexture_SetEdgeClamp, 1,
   (char*)"V.SetEdgeClamp(int)\nC++: void SetEdgeClamp(int a)\n\nTurn on/off the clamping of the texture map when the texture\ncoords extend beyond the [0,1] range. Only used when Repeat is\noff, and edge clamping is supported by the graphics card.\n"},
  {(char*)"EdgeClampOn", PyvtkTexture_EdgeClampOn, 1,
   (char*)"V.EdgeClampOn()\nC++: void EdgeClampOn()\n\nTurn on/off the clamping of the texture map when the texture\ncoords extend beyond the [0,1] range. Only used when Repeat is\noff, and edge clamping is supported by the graphics card.\n"},
  {(char*)"EdgeClampOff", PyvtkTexture_EdgeClampOff, 1,
   (char*)"V.EdgeClampOff()\nC++: void EdgeClampOff()\n\nTurn on/off the clamping of the texture map when the texture\ncoords extend beyond the [0,1] range. Only used when Repeat is\noff, and edge clamping is supported by the graphics card.\n"},
  {(char*)"GetInterpolate", PyvtkTexture_GetInterpolate, 1,
   (char*)"V.GetInterpolate() -> int\nC++: int GetInterpolate()\n\nTurn on/off linear interpolation of the texture map when\nrendering.\n"},
  {(char*)"SetInterpolate", PyvtkTexture_SetInterpolate, 1,
   (char*)"V.SetInterpolate(int)\nC++: void SetInterpolate(int a)\n\nTurn on/off linear interpolation of the texture map when\nrendering.\n"},
  {(char*)"InterpolateOn", PyvtkTexture_InterpolateOn, 1,
   (char*)"V.InterpolateOn()\nC++: void InterpolateOn()\n\nTurn on/off linear interpolation of the texture map when\nrendering.\n"},
  {(char*)"InterpolateOff", PyvtkTexture_InterpolateOff, 1,
   (char*)"V.InterpolateOff()\nC++: void InterpolateOff()\n\nTurn on/off linear interpolation of the texture map when\nrendering.\n"},
  {(char*)"SetQuality", PyvtkTexture_SetQuality, 1,
   (char*)"V.SetQuality(int)\nC++: void SetQuality(int a)\n\nForce texture quality to 16-bit or 32-bit. This might not be\nsupported on all machines.\n"},
  {(char*)"GetQuality", PyvtkTexture_GetQuality, 1,
   (char*)"V.GetQuality() -> int\nC++: int GetQuality()\n\nForce texture quality to 16-bit or 32-bit. This might not be\nsupported on all machines.\n"},
  {(char*)"SetQualityToDefault", PyvtkTexture_SetQualityToDefault, 1,
   (char*)"V.SetQualityToDefault()\nC++: void SetQualityToDefault()\n\nForce texture quality to 16-bit or 32-bit. This might not be\nsupported on all machines.\n"},
  {(char*)"SetQualityTo16Bit", PyvtkTexture_SetQualityTo16Bit, 1,
   (char*)"V.SetQualityTo16Bit()\nC++: void SetQualityTo16Bit()\n\nForce texture quality to 16-bit or 32-bit. This might not be\nsupported on all machines.\n"},
  {(char*)"SetQualityTo32Bit", PyvtkTexture_SetQualityTo32Bit, 1,
   (char*)"V.SetQualityTo32Bit()\nC++: void SetQualityTo32Bit()\n\nForce texture quality to 16-bit or 32-bit. This might not be\nsupported on all machines.\n"},
  {(char*)"GetMapColorScalarsThroughLookupTable", PyvtkTexture_GetMapColorScalarsThroughLookupTable, 1,
   (char*)"V.GetMapColorScalarsThroughLookupTable() -> int\nC++: int GetMapColorScalarsThroughLookupTable()\n\nTurn on/off the mapping of color scalars through the lookup\ntable. The default is Off. If Off, unsigned char scalars will be\nused directly as texture. If On, scalars will be mapped through\nthe lookup table to generate 4-component unsigned char scalars.\nThis ivar does not affect other scalars like unsigned short,\nfloat, etc. These scalars are always mapped through lookup\ntables.\n"},
  {(char*)"SetMapColorScalarsThroughLookupTable", PyvtkTexture_SetMapColorScalarsThroughLookupTable, 1,
   (char*)"V.SetMapColorScalarsThroughLookupTable(int)\nC++: void SetMapColorScalarsThroughLookupTable(int a)\n\nTurn on/off the mapping of color scalars through the lookup\ntable. The default is Off. If Off, unsigned char scalars will be\nused directly as texture. If On, scalars will be mapped through\nthe lookup table to generate 4-component unsigned char scalars.\nThis ivar does not affect other scalars like unsigned short,\nfloat, etc. These scalars are always mapped through lookup\ntables.\n"},
  {(char*)"MapColorScalarsThroughLookupTableOn", PyvtkTexture_MapColorScalarsThroughLookupTableOn, 1,
   (char*)"V.MapColorScalarsThroughLookupTableOn()\nC++: void MapColorScalarsThroughLookupTableOn()\n\nTurn on/off the mapping of color scalars through the lookup\ntable. The default is Off. If Off, unsigned char scalars will be\nused directly as texture. If On, scalars will be mapped through\nthe lookup table to generate 4-component unsigned char scalars.\nThis ivar does not affect other scalars like unsigned short,\nfloat, etc. These scalars are always mapped through lookup\ntables.\n"},
  {(char*)"MapColorScalarsThroughLookupTableOff", PyvtkTexture_MapColorScalarsThroughLookupTableOff, 1,
   (char*)"V.MapColorScalarsThroughLookupTableOff()\nC++: void MapColorScalarsThroughLookupTableOff()\n\nTurn on/off the mapping of color scalars through the lookup\ntable. The default is Off. If Off, unsigned char scalars will be\nused directly as texture. If On, scalars will be mapped through\nthe lookup table to generate 4-component unsigned char scalars.\nThis ivar does not affect other scalars like unsigned short,\nfloat, etc. These scalars are always mapped through lookup\ntables.\n"},
  {(char*)"GetInput", PyvtkTexture_GetInput, 1,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nGet the input as a vtkImageData object.  This method is for\nbackwards compatibility.\n"},
  {(char*)"SetLookupTable", PyvtkTexture_SetLookupTable, 1,
   (char*)"V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *)\n\nSpecify the lookup table to convert scalars if necessary\n"},
  {(char*)"GetLookupTable", PyvtkTexture_GetLookupTable, 1,
   (char*)"V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSpecify the lookup table to convert scalars if necessary\n"},
  {(char*)"GetMappedScalars", PyvtkTexture_GetMappedScalars, 1,
   (char*)"V.GetMappedScalars() -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetMappedScalars()\n\nGet Mapped Scalars\n"},
  {(char*)"SetTransform", PyvtkTexture_SetTransform, 1,
   (char*)"V.SetTransform(vtkTransform)\nC++: void SetTransform(vtkTransform *transform)\n\nSet a transform on the texture which allows one to scale, rotate\nand translate the texture.\n"},
  {(char*)"GetTransform", PyvtkTexture_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkTransform\nC++: vtkTransform *GetTransform()\n\nSet a transform on the texture which allows one to scale, rotate\nand translate the texture.\n"},
  {(char*)"GetBlendingMode", PyvtkTexture_GetBlendingMode, 1,
   (char*)"V.GetBlendingMode() -> int\nC++: int GetBlendingMode()\n\nUsed to specify how the texture will blend its RGB and Alpha\nvalues with other textures and the fragment the texture is\nrendered upon.\n"},
  {(char*)"SetBlendingMode", PyvtkTexture_SetBlendingMode, 1,
   (char*)"V.SetBlendingMode(int)\nC++: void SetBlendingMode(int a)\n\nUsed to specify how the texture will blend its RGB and Alpha\nvalues with other textures and the fragment the texture is\nrendered upon.\n"},
  {(char*)"GetPremultipliedAlpha", PyvtkTexture_GetPremultipliedAlpha, 1,
   (char*)"V.GetPremultipliedAlpha() -> bool\nC++: bool GetPremultipliedAlpha()\n\nWhether the texture colors are premultiplied by alpha. Initial\nvalue is false.\n"},
  {(char*)"SetPremultipliedAlpha", PyvtkTexture_SetPremultipliedAlpha, 1,
   (char*)"V.SetPremultipliedAlpha(bool)\nC++: void SetPremultipliedAlpha(bool a)\n\nWhether the texture colors are premultiplied by alpha. Initial\nvalue is false.\n"},
  {(char*)"PremultipliedAlphaOn", PyvtkTexture_PremultipliedAlphaOn, 1,
   (char*)"V.PremultipliedAlphaOn()\nC++: void PremultipliedAlphaOn()\n\nWhether the texture colors are premultiplied by alpha. Initial\nvalue is false.\n"},
  {(char*)"PremultipliedAlphaOff", PyvtkTexture_PremultipliedAlphaOff, 1,
   (char*)"V.PremultipliedAlphaOff()\nC++: void PremultipliedAlphaOff()\n\nWhether the texture colors are premultiplied by alpha. Initial\nvalue is false.\n"},
  {(char*)"GetRestrictPowerOf2ImageSmaller", PyvtkTexture_GetRestrictPowerOf2ImageSmaller, 1,
   (char*)"V.GetRestrictPowerOf2ImageSmaller() -> int\nC++: int GetRestrictPowerOf2ImageSmaller()\n\nWhen the texture is forced to be a power of 2, the default\nbehavior is for the \"new\" image's dimensions  to be greater than\nor equal to with respects to the original.  Setting\nRestrictPowerOf2ImageSmaller to be 1 (or ON) with force the new\nimage's dimensions to be less than or equal to with respects to\nthe original.\n"},
  {(char*)"SetRestrictPowerOf2ImageSmaller", PyvtkTexture_SetRestrictPowerOf2ImageSmaller, 1,
   (char*)"V.SetRestrictPowerOf2ImageSmaller(int)\nC++: void SetRestrictPowerOf2ImageSmaller(int a)\n\nWhen the texture is forced to be a power of 2, the default\nbehavior is for the \"new\" image's dimensions  to be greater than\nor equal to with respects to the original.  Setting\nRestrictPowerOf2ImageSmaller to be 1 (or ON) with force the new\nimage's dimensions to be less than or equal to with respects to\nthe original.\n"},
  {(char*)"RestrictPowerOf2ImageSmallerOn", PyvtkTexture_RestrictPowerOf2ImageSmallerOn, 1,
   (char*)"V.RestrictPowerOf2ImageSmallerOn()\nC++: void RestrictPowerOf2ImageSmallerOn()\n\nWhen the texture is forced to be a power of 2, the default\nbehavior is for the \"new\" image's dimensions  to be greater than\nor equal to with respects to the original.  Setting\nRestrictPowerOf2ImageSmaller to be 1 (or ON) with force the new\nimage's dimensions to be less than or equal to with respects to\nthe original.\n"},
  {(char*)"RestrictPowerOf2ImageSmallerOff", PyvtkTexture_RestrictPowerOf2ImageSmallerOff, 1,
   (char*)"V.RestrictPowerOf2ImageSmallerOff()\nC++: void RestrictPowerOf2ImageSmallerOff()\n\nWhen the texture is forced to be a power of 2, the default\nbehavior is for the \"new\" image's dimensions  to be greater than\nor equal to with respects to the original.  Setting\nRestrictPowerOf2ImageSmaller to be 1 (or ON) with force the new\nimage's dimensions to be less than or equal to with respects to\nthe original.\n"},
  {(char*)"IsTranslucent", PyvtkTexture_IsTranslucent, 1,
   (char*)"V.IsTranslucent() -> int\nC++: virtual int IsTranslucent()\n\nIs this Texture Translucent? returns false (0) if the texture is\neither fully opaque or has only fully transparent pixels and\nfully opaque pixels and the Interpolate flag is turn off.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTexture_StaticNew()
{
  return vtkTexture::New();
}

PyObject *PyVTKClass_vtkTextureNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTexture_StaticNew,
    PyvtkTexture_Methods,
    "vtkTexture", modulename,
    NULL, NULL,
    PyvtkTexture_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"VTK_TEXTURE_BLENDING_MODE_NONE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"VTK_TEXTURE_BLENDING_MODE_REPLACE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"VTK_TEXTURE_BLENDING_MODE_MODULATE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"VTK_TEXTURE_BLENDING_MODE_ADD", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"VTK_TEXTURE_BLENDING_MODE_ADD_SIGNED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"VTK_TEXTURE_BLENDING_MODE_INTERPOLATE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"VTK_TEXTURE_BLENDING_MODE_SUBTRACT", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkTexture_Doc()
{
  static const char *docstring[] = {
    "vtkTexture - handles properties associated with a texture map\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkTexture is an object that handles loading and binding of texture\nmaps. It obtains its data from an input image data dataset type. Thus\nyou can create visualization pipelines to read, process, and\nconstruct textures. Note that textures will only work if texture\ncoordinates are also defined, and if the rendering system supports\ntexture.\n\nInstances of vtkTexture are associated with actors via the ",
    "actor's\nSetTexture() method. Actors can share texture maps (this is\nencouraged to save memory resources.)\n\nCaveats:\n\nCurrently only 2D texture maps are supported, even though the data\npipeline supports 1,2, and 3D texture coordinates.\n\nSome renderers such as old OpenGL require that the texture map\ndimensions are a power of two in each direction. If a non-power of\ntwo texture map is used, it is aut",
    "omatically resampled to a power of\ntwo in one or more directions, at the cost of an expensive\ncomputation. If the OpenGL implementation is recent enough\n(OpenGL>=2.0 or extension GL_ARB_texture_non_power_of_two exists)\nthere is no such restriction and no extra computational cost.\n\nSee Also:\n\nvtkActor vtkRenderer vtkOpenGLTexture\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTexture(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextureNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTexture", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TEXTURE_QUALITY_DEFAULT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(16);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TEXTURE_QUALITY_16BIT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(32);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TEXTURE_QUALITY_32BIT", o) != 0)
    {
    Py_DECREF(o);
    }

}

