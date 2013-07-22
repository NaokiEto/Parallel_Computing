// python wrapper for vtkAbstractVolumeMapper
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
#include "vtkAbstractVolumeMapper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAbstractVolumeMapper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAbstractVolumeMapper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAbstractVolumeMapperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAbstractVolumeMapperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractMapper3DNew
extern "C" { PyObject *PyVTKClass_vtkAbstractMapper3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractMapper3DNew
#endif

static const char **PyvtkAbstractVolumeMapper_Doc();


static PyObject *
PyvtkAbstractVolumeMapper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

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
      tempr = op->vtkAbstractVolumeMapper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

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
      tempr = op->vtkAbstractVolumeMapper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  vtkAbstractVolumeMapper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAbstractVolumeMapper::NewInstance();
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
PyvtkAbstractVolumeMapper_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkAbstractVolumeMapper::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetDataSetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataSetInput();
      }
    else
      {
      tempr = op->vtkAbstractVolumeMapper::GetDataSetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetDataObjectInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataObjectInput();
      }
    else
      {
      tempr = op->vtkAbstractVolumeMapper::GetDataObjectInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBounds();
      }
    else
      {
      tempr = op->vtkAbstractVolumeMapper::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkAbstractVolumeMapper::GetBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkAbstractVolumeMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkAbstractVolumeMapper_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkAbstractVolumeMapper_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

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
      op->vtkAbstractVolumeMapper::SetScalarMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

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
      tempr = op->vtkAbstractVolumeMapper::GetScalarMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetScalarModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToDefault();
      }
    else
      {
      op->vtkAbstractVolumeMapper::SetScalarModeToDefault();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetScalarModeToUsePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUsePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToUsePointData();
      }
    else
      {
      op->vtkAbstractVolumeMapper::SetScalarModeToUsePointData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetScalarModeToUseCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToUseCellData();
      }
    else
      {
      op->vtkAbstractVolumeMapper::SetScalarModeToUseCellData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetScalarModeToUsePointFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUsePointFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToUsePointFieldData();
      }
    else
      {
      op->vtkAbstractVolumeMapper::SetScalarModeToUsePointFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetScalarModeToUseCellFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseCellFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarModeToUseCellFieldData();
      }
    else
      {
      op->vtkAbstractVolumeMapper::SetScalarModeToUseCellFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SelectScalarArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectScalarArray(temp0);
      }
    else
      {
      op->vtkAbstractVolumeMapper::SelectScalarArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_SelectScalarArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectScalarArray(temp0);
      }
    else
      {
      op->vtkAbstractVolumeMapper::SelectScalarArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractVolumeMapper_SelectScalarArray_Methods[] = {
  {NULL, PyvtkAbstractVolumeMapper_SelectScalarArray_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkAbstractVolumeMapper_SelectScalarArray_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkAbstractVolumeMapper_SelectScalarArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAbstractVolumeMapper_SelectScalarArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SelectScalarArray");
  return NULL;
}



static PyObject *
PyvtkAbstractVolumeMapper_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayName();
      }
    else
      {
      tempr = op->vtkAbstractVolumeMapper::GetArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayId();
      }
    else
      {
      tempr = op->vtkAbstractVolumeMapper::GetArrayId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArrayAccessMode();
      }
    else
      {
      tempr = op->vtkAbstractVolumeMapper::GetArrayAccessMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetScalarModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarModeAsString();
      }
    else
      {
      tempr = op->vtkAbstractVolumeMapper::GetScalarModeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientMagnitudeScale();
      }
    else
      {
      tempr = op->vtkAbstractVolumeMapper::GetGradientMagnitudeScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  int temp0;
  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientMagnitudeScale(temp0);
      }
    else
      {
      tempr = op->vtkAbstractVolumeMapper::GetGradientMagnitudeScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale_s1(self, args);
    case 1:
      return PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientMagnitudeScale");
  return NULL;
}



static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientMagnitudeBias();
      }
    else
      {
      tempr = op->vtkAbstractVolumeMapper::GetGradientMagnitudeBias();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  int temp0;
  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientMagnitudeBias(temp0);
      }
    else
      {
      tempr = op->vtkAbstractVolumeMapper::GetGradientMagnitudeBias(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias_s1(self, args);
    case 1:
      return PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientMagnitudeBias");
  return NULL;
}



static PyObject *
PyvtkAbstractVolumeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkVolume *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
    {
    op->Render(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

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
      op->vtkAbstractVolumeMapper::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAbstractVolumeMapper_Methods[] = {
  {(char*)"GetClassName", PyvtkAbstractVolumeMapper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAbstractVolumeMapper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAbstractVolumeMapper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAbstractVolumeMapper\nC++: vtkAbstractVolumeMapper *NewInstance()\n\n"},
  {(char*)"SetInput", PyvtkAbstractVolumeMapper_SetInput, 1,
   (char*)"V.SetInput(vtkDataSet)\nC++: virtual void SetInput(vtkDataSet *)\n\nSet/Get the input data\n"},
  {(char*)"GetDataSetInput", PyvtkAbstractVolumeMapper_GetDataSetInput, 1,
   (char*)"V.GetDataSetInput() -> vtkDataSet\nC++: vtkDataSet *GetDataSetInput()\n\nSet/Get the input data\n"},
  {(char*)"GetDataObjectInput", PyvtkAbstractVolumeMapper_GetDataObjectInput, 1,
   (char*)"V.GetDataObjectInput() -> vtkDataObject\nC++: vtkDataObject *GetDataObjectInput()\n\nSet/Get the input data\n"},
  {(char*)"GetBounds", PyvtkAbstractVolumeMapper_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\nV.GetBounds([float, float, float, float, float, float])\nC++: virtual void GetBounds(double bounds[6])\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {(char*)"SetScalarMode", PyvtkAbstractVolumeMapper_SetScalarMode, 1,
   (char*)"V.SetScalarMode(int)\nC++: void SetScalarMode(int a)\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {(char*)"GetScalarMode", PyvtkAbstractVolumeMapper_GetScalarMode, 1,
   (char*)"V.GetScalarMode() -> int\nC++: int GetScalarMode()\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {(char*)"SetScalarModeToDefault", PyvtkAbstractVolumeMapper_SetScalarModeToDefault, 1,
   (char*)"V.SetScalarModeToDefault()\nC++: void SetScalarModeToDefault()\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {(char*)"SetScalarModeToUsePointData", PyvtkAbstractVolumeMapper_SetScalarModeToUsePointData, 1,
   (char*)"V.SetScalarModeToUsePointData()\nC++: void SetScalarModeToUsePointData()\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {(char*)"SetScalarModeToUseCellData", PyvtkAbstractVolumeMapper_SetScalarModeToUseCellData, 1,
   (char*)"V.SetScalarModeToUseCellData()\nC++: void SetScalarModeToUseCellData()\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {(char*)"SetScalarModeToUsePointFieldData", PyvtkAbstractVolumeMapper_SetScalarModeToUsePointFieldData, 1,
   (char*)"V.SetScalarModeToUsePointFieldData()\nC++: void SetScalarModeToUsePointFieldData()\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {(char*)"SetScalarModeToUseCellFieldData", PyvtkAbstractVolumeMapper_SetScalarModeToUseCellFieldData, 1,
   (char*)"V.SetScalarModeToUseCellFieldData()\nC++: void SetScalarModeToUseCellFieldData()\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {(char*)"SelectScalarArray", PyvtkAbstractVolumeMapper_SelectScalarArray, 1,
   (char*)"V.SelectScalarArray(int)\nC++: virtual void SelectScalarArray(int arrayNum)\nV.SelectScalarArray(string)\nC++: virtual void SelectScalarArray(const char *arrayName)\n\nWhen ScalarMode is set to UsePointFieldData or UseCellFieldData,\nyou can specify which scalar array to use during rendering. The\ntransfer function in the vtkVolumeProperty (attached to the\ncalling vtkVolume) will decide how to convert vectors to colors.\n"},
  {(char*)"GetArrayName", PyvtkAbstractVolumeMapper_GetArrayName, 1,
   (char*)"V.GetArrayName() -> string\nC++: virtual char *GetArrayName()\n\nGet the array name or number and component to use for rendering.\n"},
  {(char*)"GetArrayId", PyvtkAbstractVolumeMapper_GetArrayId, 1,
   (char*)"V.GetArrayId() -> int\nC++: virtual int GetArrayId()\n\nGet the array name or number and component to use for rendering.\n"},
  {(char*)"GetArrayAccessMode", PyvtkAbstractVolumeMapper_GetArrayAccessMode, 1,
   (char*)"V.GetArrayAccessMode() -> int\nC++: virtual int GetArrayAccessMode()\n\nGet the array name or number and component to use for rendering.\n"},
  {(char*)"GetScalarModeAsString", PyvtkAbstractVolumeMapper_GetScalarModeAsString, 1,
   (char*)"V.GetScalarModeAsString() -> string\nC++: const char *GetScalarModeAsString()\n\nReturn the method for obtaining scalar data.\n"},
  {(char*)"GetGradientMagnitudeScale", PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale, 1,
   (char*)"V.GetGradientMagnitudeScale() -> float\nC++: virtual float GetGradientMagnitudeScale()\nV.GetGradientMagnitudeScale(int) -> float\nC++: virtual float GetGradientMagnitudeScale(int)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\n"},
  {(char*)"GetGradientMagnitudeBias", PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias, 1,
   (char*)"V.GetGradientMagnitudeBias() -> float\nC++: virtual float GetGradientMagnitudeBias()\nV.GetGradientMagnitudeBias(int) -> float\nC++: virtual float GetGradientMagnitudeBias(int)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\n"},
  {(char*)"Render", PyvtkAbstractVolumeMapper_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkVolume)\nC++: virtual void Render(vtkRenderer *ren, vtkVolume *vol)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAbstractVolumeMapper_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkAbstractVolumeMapperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkAbstractVolumeMapper_Methods,
    "vtkAbstractVolumeMapper", modulename,
    NULL, NULL,
    PyvtkAbstractVolumeMapper_Doc(),
    PyVTKClass_vtkAbstractMapper3DNew(modulename));
  return cls;
}

const char **PyvtkAbstractVolumeMapper_Doc()
{
  static const char *docstring[] = {
    "vtkAbstractVolumeMapper - Abstract class for a volume mapper\n\n",
    "Superclass: vtkAbstractMapper3D\n\n",
    "vtkAbstractVolumeMapper is the abstract definition of a volume\nmapper. Specific subclasses deal with different specific types of\ndata input\n\nSee Also:\n\nvtkVolumeMapper vtkUnstructuredGridVolumeMapper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAbstractVolumeMapper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAbstractVolumeMapperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAbstractVolumeMapper", o) != 0)
    {
    Py_DECREF(o);
    }

}

