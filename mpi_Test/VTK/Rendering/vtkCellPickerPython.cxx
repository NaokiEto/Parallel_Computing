// python wrapper for vtkCellPicker
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
#include "vtkCellPicker.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCellPicker(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCellPicker(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCellPickerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCellPickerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPickerNew
extern "C" { PyObject *PyVTKClass_vtkPickerNew(const char *); }
#define DECLARED_PyVTKClass_vtkPickerNew
#endif

static const char **PyvtkCellPicker_Doc();


static PyObject *
PyvtkCellPicker_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

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
      tempr = op->vtkCellPicker::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

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
      tempr = op->vtkCellPicker::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  vtkCellPicker *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCellPicker::NewInstance();
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
PyvtkCellPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCellPicker *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCellPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_Pick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkRenderer *temp3 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      tempr = op->Pick(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkCellPicker::Pick(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_AddLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  vtkAbstractCellLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
    {
    if (ap.IsBound())
      {
      op->AddLocator(temp0);
      }
    else
      {
      op->vtkCellPicker::AddLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_RemoveLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  vtkAbstractCellLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
    {
    if (ap.IsBound())
      {
      op->RemoveLocator(temp0);
      }
    else
      {
      op->vtkCellPicker::RemoveLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_RemoveAllLocators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLocators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllLocators();
      }
    else
      {
      op->vtkCellPicker::RemoveAllLocators();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_SetVolumeOpacityIsovalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeOpacityIsovalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVolumeOpacityIsovalue(temp0);
      }
    else
      {
      op->vtkCellPicker::SetVolumeOpacityIsovalue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_GetVolumeOpacityIsovalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeOpacityIsovalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVolumeOpacityIsovalue();
      }
    else
      {
      tempr = op->vtkCellPicker::GetVolumeOpacityIsovalue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_SetUseVolumeGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseVolumeGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseVolumeGradientOpacity(temp0);
      }
    else
      {
      op->vtkCellPicker::SetUseVolumeGradientOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_UseVolumeGradientOpacityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseVolumeGradientOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseVolumeGradientOpacityOn();
      }
    else
      {
      op->vtkCellPicker::UseVolumeGradientOpacityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_UseVolumeGradientOpacityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseVolumeGradientOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseVolumeGradientOpacityOff();
      }
    else
      {
      op->vtkCellPicker::UseVolumeGradientOpacityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_GetUseVolumeGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseVolumeGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseVolumeGradientOpacity();
      }
    else
      {
      tempr = op->vtkCellPicker::GetUseVolumeGradientOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_SetPickClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPickClippingPlanes(temp0);
      }
    else
      {
      op->vtkCellPicker::SetPickClippingPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_PickClippingPlanesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickClippingPlanesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PickClippingPlanesOn();
      }
    else
      {
      op->vtkCellPicker::PickClippingPlanesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_PickClippingPlanesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickClippingPlanesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PickClippingPlanesOff();
      }
    else
      {
      op->vtkCellPicker::PickClippingPlanesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPickClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPickClippingPlanes();
      }
    else
      {
      tempr = op->vtkCellPicker::GetPickClippingPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_GetClippingPlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingPlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClippingPlaneId();
      }
    else
      {
      tempr = op->vtkCellPicker::GetClippingPlaneId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPickNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPickNormal();
      }
    else
      {
      tempr = op->vtkCellPicker::GetPickNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_GetMapperNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapperNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMapperNormal();
      }
    else
      {
      tempr = op->vtkCellPicker::GetMapperNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPointIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointIJK();
      }
    else
      {
      tempr = op->vtkCellPicker::GetPointIJK();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_GetCellIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellIJK();
      }
    else
      {
      tempr = op->vtkCellPicker::GetCellIJK();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointId();
      }
    else
      {
      tempr = op->vtkCellPicker::GetPointId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellId();
      }
    else
      {
      tempr = op->vtkCellPicker::GetCellId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_GetSubId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSubId();
      }
    else
      {
      tempr = op->vtkCellPicker::GetSubId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPCoords();
      }
    else
      {
      tempr = op->vtkCellPicker::GetPCoords();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  vtkTexture *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTexture();
      }
    else
      {
      tempr = op->vtkCellPicker::GetTexture();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_SetPickTextureData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickTextureData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPickTextureData(temp0);
      }
    else
      {
      op->vtkCellPicker::SetPickTextureData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_PickTextureDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickTextureDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PickTextureDataOn();
      }
    else
      {
      op->vtkCellPicker::PickTextureDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_PickTextureDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickTextureDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PickTextureDataOff();
      }
    else
      {
      op->vtkCellPicker::PickTextureDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPickTextureData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickTextureData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPickTextureData();
      }
    else
      {
      tempr = op->vtkCellPicker::GetPickTextureData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCellPicker_Methods[] = {
  {(char*)"GetClassName", PyvtkCellPicker_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCellPicker_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCellPicker_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCellPicker\nC++: vtkCellPicker *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCellPicker_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCellPicker\nC++: vtkCellPicker *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Pick", PyvtkCellPicker_Pick, 1,
   (char*)"V.Pick(float, float, float, vtkRenderer) -> int\nC++: virtual int Pick(double selectionX, double selectionY,\n    double selectionZ, vtkRenderer *renderer)\n\nPerform pick operation with selection point provided. Normally\nthe first two values are the (x,y) pixel coordinates for the\npick, and the third value is z=0. The return value will be\nnon-zero if something was successfully picked.\n"},
  {(char*)"AddLocator", PyvtkCellPicker_AddLocator, 1,
   (char*)"V.AddLocator(vtkAbstractCellLocator)\nC++: void AddLocator(vtkAbstractCellLocator *locator)\n\nAdd a locator for one of the data sets that will be included in\nthe scene.  You must set up the locator with exactly the same\ndata set that was input to the mapper of one or more of the\nactors in the scene.  As well, you must either build the locator\nbefore doing the pick, or you must turn on LazyEvaluation in the\nlocator to make it build itself on the first pick.  Note that if\nyou try to add the same locator to the picker twice, the second\naddition will be ignored.\n"},
  {(char*)"RemoveLocator", PyvtkCellPicker_RemoveLocator, 1,
   (char*)"V.RemoveLocator(vtkAbstractCellLocator)\nC++: void RemoveLocator(vtkAbstractCellLocator *locator)\n\nRemove a locator that was previously added.  If you try to remove\na nonexistent locator, then nothing will happen and no errors\nwill be raised.\n"},
  {(char*)"RemoveAllLocators", PyvtkCellPicker_RemoveAllLocators, 1,
   (char*)"V.RemoveAllLocators()\nC++: void RemoveAllLocators()\n\nRemove all locators associated with this picker.\n"},
  {(char*)"SetVolumeOpacityIsovalue", PyvtkCellPicker_SetVolumeOpacityIsovalue, 1,
   (char*)"V.SetVolumeOpacityIsovalue(float)\nC++: void SetVolumeOpacityIsovalue(double a)\n\nSet the opacity isovalue to use for defining volume surfaces. \nThe pick will occur at the location along the pick ray where the\nopacity of the volume is equal to this isovalue.  If you want to\ndo the pick based on an actual data isovalue rather than the\nopacity, then pass the data value through the scalar opacity\nfunction before using this method.\n"},
  {(char*)"GetVolumeOpacityIsovalue", PyvtkCellPicker_GetVolumeOpacityIsovalue, 1,
   (char*)"V.GetVolumeOpacityIsovalue() -> float\nC++: double GetVolumeOpacityIsovalue()\n\nSet the opacity isovalue to use for defining volume surfaces. \nThe pick will occur at the location along the pick ray where the\nopacity of the volume is equal to this isovalue.  If you want to\ndo the pick based on an actual data isovalue rather than the\nopacity, then pass the data value through the scalar opacity\nfunction before using this method.\n"},
  {(char*)"SetUseVolumeGradientOpacity", PyvtkCellPicker_SetUseVolumeGradientOpacity, 1,
   (char*)"V.SetUseVolumeGradientOpacity(int)\nC++: void SetUseVolumeGradientOpacity(int a)\n\nUse the product of the scalar and gradient opacity functions when\ncomputing the opacity isovalue, instead of just using the scalar\nopacity. This parameter is only relevant to volume picking and is\noff by default.\n"},
  {(char*)"UseVolumeGradientOpacityOn", PyvtkCellPicker_UseVolumeGradientOpacityOn, 1,
   (char*)"V.UseVolumeGradientOpacityOn()\nC++: void UseVolumeGradientOpacityOn()\n\nUse the product of the scalar and gradient opacity functions when\ncomputing the opacity isovalue, instead of just using the scalar\nopacity. This parameter is only relevant to volume picking and is\noff by default.\n"},
  {(char*)"UseVolumeGradientOpacityOff", PyvtkCellPicker_UseVolumeGradientOpacityOff, 1,
   (char*)"V.UseVolumeGradientOpacityOff()\nC++: void UseVolumeGradientOpacityOff()\n\nUse the product of the scalar and gradient opacity functions when\ncomputing the opacity isovalue, instead of just using the scalar\nopacity. This parameter is only relevant to volume picking and is\noff by default.\n"},
  {(char*)"GetUseVolumeGradientOpacity", PyvtkCellPicker_GetUseVolumeGradientOpacity, 1,
   (char*)"V.GetUseVolumeGradientOpacity() -> int\nC++: int GetUseVolumeGradientOpacity()\n\nUse the product of the scalar and gradient opacity functions when\ncomputing the opacity isovalue, instead of just using the scalar\nopacity. This parameter is only relevant to volume picking and is\noff by default.\n"},
  {(char*)"SetPickClippingPlanes", PyvtkCellPicker_SetPickClippingPlanes, 1,
   (char*)"V.SetPickClippingPlanes(int)\nC++: void SetPickClippingPlanes(int a)\n\nThe PickClippingPlanes setting controls how clipping planes are\nhandled by the pick.  If it is On, then the clipping planes\nbecome pickable objects, even though they are usually invisible. \nThis means that if the pick ray intersects a clipping plane\nbefore it hits anything else, the pick will stop at that clipping\nplane. The GetProp3D() and GetMapper() methods will return the\nProp3D and Mapper that the clipping plane belongs to.  The\nGetClippingPlaneId() method will return the index of the clipping\nplane so that you can retrieve it from the mapper, or -1 if no\nclipping plane was picked. The picking of vtkImageActors is not\ninfluenced by this setting, since they have no clipping planes.\n"},
  {(char*)"PickClippingPlanesOn", PyvtkCellPicker_PickClippingPlanesOn, 1,
   (char*)"V.PickClippingPlanesOn()\nC++: void PickClippingPlanesOn()\n\nThe PickClippingPlanes setting controls how clipping planes are\nhandled by the pick.  If it is On, then the clipping planes\nbecome pickable objects, even though they are usually invisible. \nThis means that if the pick ray intersects a clipping plane\nbefore it hits anything else, the pick will stop at that clipping\nplane. The GetProp3D() and GetMapper() methods will return the\nProp3D and Mapper that the clipping plane belongs to.  The\nGetClippingPlaneId() method will return the index of the clipping\nplane so that you can retrieve it from the mapper, or -1 if no\nclipping plane was picked. The picking of vtkImageActors is not\ninfluenced by this setting, since they have no clipping planes.\n"},
  {(char*)"PickClippingPlanesOff", PyvtkCellPicker_PickClippingPlanesOff, 1,
   (char*)"V.PickClippingPlanesOff()\nC++: void PickClippingPlanesOff()\n\nThe PickClippingPlanes setting controls how clipping planes are\nhandled by the pick.  If it is On, then the clipping planes\nbecome pickable objects, even though they are usually invisible. \nThis means that if the pick ray intersects a clipping plane\nbefore it hits anything else, the pick will stop at that clipping\nplane. The GetProp3D() and GetMapper() methods will return the\nProp3D and Mapper that the clipping plane belongs to.  The\nGetClippingPlaneId() method will return the index of the clipping\nplane so that you can retrieve it from the mapper, or -1 if no\nclipping plane was picked. The picking of vtkImageActors is not\ninfluenced by this setting, since they have no clipping planes.\n"},
  {(char*)"GetPickClippingPlanes", PyvtkCellPicker_GetPickClippingPlanes, 1,
   (char*)"V.GetPickClippingPlanes() -> int\nC++: int GetPickClippingPlanes()\n\nThe PickClippingPlanes setting controls how clipping planes are\nhandled by the pick.  If it is On, then the clipping planes\nbecome pickable objects, even though they are usually invisible. \nThis means that if the pick ray intersects a clipping plane\nbefore it hits anything else, the pick will stop at that clipping\nplane. The GetProp3D() and GetMapper() methods will return the\nProp3D and Mapper that the clipping plane belongs to.  The\nGetClippingPlaneId() method will return the index of the clipping\nplane so that you can retrieve it from the mapper, or -1 if no\nclipping plane was picked. The picking of vtkImageActors is not\ninfluenced by this setting, since they have no clipping planes.\n"},
  {(char*)"GetClippingPlaneId", PyvtkCellPicker_GetClippingPlaneId, 1,
   (char*)"V.GetClippingPlaneId() -> int\nC++: int GetClippingPlaneId()\n\nGet the index of the clipping plane that was intersected during\nthe pick.  This will be set regardless of whether\nPickClippingPlanes is On, all that is required is that the pick\nintersected a clipping plane of the Prop3D that was picked.  The\nresult will be -1 if the Prop3D that was picked has no clipping\nplanes, or if the ray didn't intersect the planes.\n"},
  {(char*)"GetPickNormal", PyvtkCellPicker_GetPickNormal, 1,
   (char*)"V.GetPickNormal() -> (float, float, float)\nC++: double *GetPickNormal()\n\nReturn the normal of the picked surface at the PickPosition.  If\nno surface was picked, then a vector pointing back at the camera\nis returned.\n"},
  {(char*)"GetMapperNormal", PyvtkCellPicker_GetMapperNormal, 1,
   (char*)"V.GetMapperNormal() -> (float, float, float)\nC++: double *GetMapperNormal()\n\n"},
  {(char*)"GetPointIJK", PyvtkCellPicker_GetPointIJK, 1,
   (char*)"V.GetPointIJK() -> (int, int, int)\nC++: int *GetPointIJK()\n\n"},
  {(char*)"GetCellIJK", PyvtkCellPicker_GetCellIJK, 1,
   (char*)"V.GetCellIJK() -> (int, int, int)\nC++: int *GetCellIJK()\n\n"},
  {(char*)"GetPointId", PyvtkCellPicker_GetPointId, 1,
   (char*)"V.GetPointId() -> int\nC++: vtkIdType GetPointId()\n\nGet the id of the picked point. If PointId = -1, nothing was\npicked. This point will be a member of any cell that is picked.\n"},
  {(char*)"GetCellId", PyvtkCellPicker_GetCellId, 1,
   (char*)"V.GetCellId() -> int\nC++: vtkIdType GetCellId()\n\nGet the id of the picked cell. If CellId = -1, nothing was\npicked.\n"},
  {(char*)"GetSubId", PyvtkCellPicker_GetSubId, 1,
   (char*)"V.GetSubId() -> int\nC++: int GetSubId()\n\nGet the subId of the picked cell. This is useful, for example, if\nthe data is made of triangle strips. If SubId = -1, nothing was\npicked.\n"},
  {(char*)"GetPCoords", PyvtkCellPicker_GetPCoords, 1,
   (char*)"V.GetPCoords() -> (float, float, float)\nC++: double *GetPCoords()\n\n"},
  {(char*)"GetTexture", PyvtkCellPicker_GetTexture, 1,
   (char*)"V.GetTexture() -> vtkTexture\nC++: vtkTexture *GetTexture()\n\nGet the texture that was picked.  This will always be set if the\npicked prop has a texture, and will always be null otherwise.\n"},
  {(char*)"SetPickTextureData", PyvtkCellPicker_SetPickTextureData, 1,
   (char*)"V.SetPickTextureData(int)\nC++: void SetPickTextureData(int a)\n\nIf this is \"On\" and if the picked prop has a texture, then the\ndata returned by GetDataSet() will be the texture's data instead\nof the mapper's data.  The GetPointId(), GetCellId(),\nGetPCoords() etc. will all return information for use with the\ntexture's data.  If the picked prop does not have any texture,\nthen GetDataSet() will return the mapper's data instead and\nGetPointId() etc. will return information related to the mapper's\ndata.  The default value of PickTextureData is \"Off\".\n"},
  {(char*)"PickTextureDataOn", PyvtkCellPicker_PickTextureDataOn, 1,
   (char*)"V.PickTextureDataOn()\nC++: void PickTextureDataOn()\n\nIf this is \"On\" and if the picked prop has a texture, then the\ndata returned by GetDataSet() will be the texture's data instead\nof the mapper's data.  The GetPointId(), GetCellId(),\nGetPCoords() etc. will all return information for use with the\ntexture's data.  If the picked prop does not have any texture,\nthen GetDataSet() will return the mapper's data instead and\nGetPointId() etc. will return information related to the mapper's\ndata.  The default value of PickTextureData is \"Off\".\n"},
  {(char*)"PickTextureDataOff", PyvtkCellPicker_PickTextureDataOff, 1,
   (char*)"V.PickTextureDataOff()\nC++: void PickTextureDataOff()\n\nIf this is \"On\" and if the picked prop has a texture, then the\ndata returned by GetDataSet() will be the texture's data instead\nof the mapper's data.  The GetPointId(), GetCellId(),\nGetPCoords() etc. will all return information for use with the\ntexture's data.  If the picked prop does not have any texture,\nthen GetDataSet() will return the mapper's data instead and\nGetPointId() etc. will return information related to the mapper's\ndata.  The default value of PickTextureData is \"Off\".\n"},
  {(char*)"GetPickTextureData", PyvtkCellPicker_GetPickTextureData, 1,
   (char*)"V.GetPickTextureData() -> int\nC++: int GetPickTextureData()\n\nIf this is \"On\" and if the picked prop has a texture, then the\ndata returned by GetDataSet() will be the texture's data instead\nof the mapper's data.  The GetPointId(), GetCellId(),\nGetPCoords() etc. will all return information for use with the\ntexture's data.  If the picked prop does not have any texture,\nthen GetDataSet() will return the mapper's data instead and\nGetPointId() etc. will return information related to the mapper's\ndata.  The default value of PickTextureData is \"Off\".\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCellPicker_StaticNew()
{
  return vtkCellPicker::New();
}

PyObject *PyVTKClass_vtkCellPickerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCellPicker_StaticNew,
    PyvtkCellPicker_Methods,
    "vtkCellPicker", modulename,
    NULL, NULL,
    PyvtkCellPicker_Doc(),
    PyVTKClass_vtkPickerNew(modulename));
  return cls;
}

const char **PyvtkCellPicker_Doc()
{
  static const char *docstring[] = {
    "vtkCellPicker - ray-cast cell picker for all kinds of Prop3Ds\n\n",
    "Superclass: vtkPicker\n\n",
    "vtkCellPicker will shoot a ray into a 3D scene and return information\nabout the first object that the ray hits.  It works for all Prop3Ds.\nFor vtkVolume objects, it shoots a ray into the volume and returns\nthe point where the ray intersects an isosurface of a chosen opacity.\nFor vtkImageActor objects, it intersects the ray with the displayed\nslice. For vtkActor objects, it intersects the actor's p",
    "olygons. If\nthe object's mapper has ClippingPlanes, then it takes the clipping\ninto account, and will return the Id of the clipping plane that was\nintersected. For all prop types, it returns point and cell\ninformation, plus the normal of the surface that was intersected at\nthe pick position.  For volumes and images, it also returns (i,j,k)\ncoordinates for the point and the cell that were picked.\n\n",
    "See Also:\n\nvtkPicker vtkPointPicker vtkVolumePicker\n\nThanks:\n\nThis class was contributed to VTK by David Gobbi on behalf of Atamai\nInc., as an enhancement to the original vtkCellPicker.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellPicker(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellPickerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellPicker", o) != 0)
    {
    Py_DECREF(o);
    }

}

