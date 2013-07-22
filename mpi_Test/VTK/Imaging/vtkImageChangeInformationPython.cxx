// python wrapper for vtkImageChangeInformation
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
#include "vtkImageChangeInformation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageChangeInformation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageChangeInformation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageChangeInformationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageChangeInformationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageChangeInformation_Doc();


static PyObject *
PyvtkImageChangeInformation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      tempr = op->vtkImageChangeInformation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      tempr = op->vtkImageChangeInformation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  vtkImageChangeInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageChangeInformation::NewInstance();
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
PyvtkImageChangeInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageChangeInformation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageChangeInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetInformationInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformationInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInformationInput(temp0);
      }
    else
      {
      op->vtkImageChangeInformation::SetInformationInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_GetInformationInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInformationInput();
      }
    else
      {
      tempr = op->vtkImageChangeInformation::GetInformationInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetOutputExtentStart_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputExtentStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetOutputExtentStart(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageChangeInformation::SetOutputExtentStart(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputExtentStart_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputExtentStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutputExtentStart(temp0);
      }
    else
      {
      op->vtkImageChangeInformation::SetOutputExtentStart(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputExtentStart(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageChangeInformation_SetOutputExtentStart_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetOutputExtentStart_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputExtentStart");
  return NULL;
}



static PyObject *
PyvtkImageChangeInformation_GetOutputExtentStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputExtentStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputExtentStart();
      }
    else
      {
      tempr = op->vtkImageChangeInformation::GetOutputExtentStart();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetOutputSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetOutputSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageChangeInformation::SetOutputSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutputSpacing(temp0);
      }
    else
      {
      op->vtkImageChangeInformation::SetOutputSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageChangeInformation_SetOutputSpacing_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetOutputSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputSpacing");
  return NULL;
}



static PyObject *
PyvtkImageChangeInformation_GetOutputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputSpacing();
      }
    else
      {
      tempr = op->vtkImageChangeInformation::GetOutputSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetOutputOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetOutputOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageChangeInformation::SetOutputOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutputOrigin(temp0);
      }
    else
      {
      op->vtkImageChangeInformation::SetOutputOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageChangeInformation_SetOutputOrigin_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetOutputOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputOrigin");
  return NULL;
}



static PyObject *
PyvtkImageChangeInformation_GetOutputOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputOrigin();
      }
    else
      {
      tempr = op->vtkImageChangeInformation::GetOutputOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetCenterImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCenterImage(temp0);
      }
    else
      {
      op->vtkImageChangeInformation::SetCenterImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_CenterImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CenterImageOn();
      }
    else
      {
      op->vtkImageChangeInformation::CenterImageOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_CenterImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CenterImageOff();
      }
    else
      {
      op->vtkImageChangeInformation::CenterImageOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_GetCenterImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCenterImage();
      }
    else
      {
      tempr = op->vtkImageChangeInformation::GetCenterImage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetExtentTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetExtentTranslation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageChangeInformation::SetExtentTranslation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetExtentTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetExtentTranslation(temp0);
      }
    else
      {
      op->vtkImageChangeInformation::SetExtentTranslation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetExtentTranslation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageChangeInformation_SetExtentTranslation_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetExtentTranslation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetExtentTranslation");
  return NULL;
}



static PyObject *
PyvtkImageChangeInformation_GetExtentTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtentTranslation();
      }
    else
      {
      tempr = op->vtkImageChangeInformation::GetExtentTranslation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetSpacingScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacingScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetSpacingScale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageChangeInformation::SetSpacingScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetSpacingScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacingScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSpacingScale(temp0);
      }
    else
      {
      op->vtkImageChangeInformation::SetSpacingScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetSpacingScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageChangeInformation_SetSpacingScale_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetSpacingScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacingScale");
  return NULL;
}



static PyObject *
PyvtkImageChangeInformation_GetSpacingScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacingScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSpacingScale();
      }
    else
      {
      tempr = op->vtkImageChangeInformation::GetSpacingScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetOriginTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetOriginTranslation(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageChangeInformation::SetOriginTranslation(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOriginTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOriginTranslation(temp0);
      }
    else
      {
      op->vtkImageChangeInformation::SetOriginTranslation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOriginTranslation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageChangeInformation_SetOriginTranslation_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetOriginTranslation_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOriginTranslation");
  return NULL;
}



static PyObject *
PyvtkImageChangeInformation_GetOriginTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOriginTranslation();
      }
    else
      {
      tempr = op->vtkImageChangeInformation::GetOriginTranslation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetOriginScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetOriginScale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageChangeInformation::SetOriginScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOriginScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOriginScale(temp0);
      }
    else
      {
      op->vtkImageChangeInformation::SetOriginScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOriginScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageChangeInformation_SetOriginScale_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetOriginScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOriginScale");
  return NULL;
}



static PyObject *
PyvtkImageChangeInformation_GetOriginScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOriginScale();
      }
    else
      {
      tempr = op->vtkImageChangeInformation::GetOriginScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageChangeInformation_Methods[] = {
  {(char*)"GetClassName", PyvtkImageChangeInformation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageChangeInformation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageChangeInformation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageChangeInformation\nC++: vtkImageChangeInformation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageChangeInformation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageChangeInformation\nC++: vtkImageChangeInformation *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInformationInput", PyvtkImageChangeInformation_SetInformationInput, 1,
   (char*)"V.SetInformationInput(vtkImageData)\nC++: virtual void SetInformationInput(vtkImageData *)\n\nCopy the information from another data set.  By default, the\ninformation is copied from the input.\n"},
  {(char*)"GetInformationInput", PyvtkImageChangeInformation_GetInformationInput, 1,
   (char*)"V.GetInformationInput() -> vtkImageData\nC++: virtual vtkImageData *GetInformationInput()\n\nCopy the information from another data set.  By default, the\ninformation is copied from the input.\n"},
  {(char*)"SetOutputExtentStart", PyvtkImageChangeInformation_SetOutputExtentStart, 1,
   (char*)"V.SetOutputExtentStart(int, int, int)\nC++: void SetOutputExtentStart(int, int, int)\nV.SetOutputExtentStart((int, int, int))\nC++: void SetOutputExtentStart(int a[3])\n\n"},
  {(char*)"GetOutputExtentStart", PyvtkImageChangeInformation_GetOutputExtentStart, 1,
   (char*)"V.GetOutputExtentStart() -> (int, int, int)\nC++: int *GetOutputExtentStart()\n\n"},
  {(char*)"SetOutputSpacing", PyvtkImageChangeInformation_SetOutputSpacing, 1,
   (char*)"V.SetOutputSpacing(float, float, float)\nC++: void SetOutputSpacing(double, double, double)\nV.SetOutputSpacing((float, float, float))\nC++: void SetOutputSpacing(double a[3])\n\n"},
  {(char*)"GetOutputSpacing", PyvtkImageChangeInformation_GetOutputSpacing, 1,
   (char*)"V.GetOutputSpacing() -> (float, float, float)\nC++: double *GetOutputSpacing()\n\n"},
  {(char*)"SetOutputOrigin", PyvtkImageChangeInformation_SetOutputOrigin, 1,
   (char*)"V.SetOutputOrigin(float, float, float)\nC++: void SetOutputOrigin(double, double, double)\nV.SetOutputOrigin((float, float, float))\nC++: void SetOutputOrigin(double a[3])\n\n"},
  {(char*)"GetOutputOrigin", PyvtkImageChangeInformation_GetOutputOrigin, 1,
   (char*)"V.GetOutputOrigin() -> (float, float, float)\nC++: double *GetOutputOrigin()\n\n"},
  {(char*)"SetCenterImage", PyvtkImageChangeInformation_SetCenterImage, 1,
   (char*)"V.SetCenterImage(int)\nC++: void SetCenterImage(int a)\n\nSet the Origin of the output so that image coordinate (0,0,0)\nlies at the Center of the data set.  This will override\nSetOutputOrigin.  This is often a useful operation to apply\nbefore using vtkImageReslice to apply a transformation to an\nimage.\n"},
  {(char*)"CenterImageOn", PyvtkImageChangeInformation_CenterImageOn, 1,
   (char*)"V.CenterImageOn()\nC++: void CenterImageOn()\n\nSet the Origin of the output so that image coordinate (0,0,0)\nlies at the Center of the data set.  This will override\nSetOutputOrigin.  This is often a useful operation to apply\nbefore using vtkImageReslice to apply a transformation to an\nimage.\n"},
  {(char*)"CenterImageOff", PyvtkImageChangeInformation_CenterImageOff, 1,
   (char*)"V.CenterImageOff()\nC++: void CenterImageOff()\n\nSet the Origin of the output so that image coordinate (0,0,0)\nlies at the Center of the data set.  This will override\nSetOutputOrigin.  This is often a useful operation to apply\nbefore using vtkImageReslice to apply a transformation to an\nimage.\n"},
  {(char*)"GetCenterImage", PyvtkImageChangeInformation_GetCenterImage, 1,
   (char*)"V.GetCenterImage() -> int\nC++: int GetCenterImage()\n\nSet the Origin of the output so that image coordinate (0,0,0)\nlies at the Center of the data set.  This will override\nSetOutputOrigin.  This is often a useful operation to apply\nbefore using vtkImageReslice to apply a transformation to an\nimage.\n"},
  {(char*)"SetExtentTranslation", PyvtkImageChangeInformation_SetExtentTranslation, 1,
   (char*)"V.SetExtentTranslation(int, int, int)\nC++: void SetExtentTranslation(int, int, int)\nV.SetExtentTranslation((int, int, int))\nC++: void SetExtentTranslation(int a[3])\n\n"},
  {(char*)"GetExtentTranslation", PyvtkImageChangeInformation_GetExtentTranslation, 1,
   (char*)"V.GetExtentTranslation() -> (int, int, int)\nC++: int *GetExtentTranslation()\n\n"},
  {(char*)"SetSpacingScale", PyvtkImageChangeInformation_SetSpacingScale, 1,
   (char*)"V.SetSpacingScale(float, float, float)\nC++: void SetSpacingScale(double, double, double)\nV.SetSpacingScale((float, float, float))\nC++: void SetSpacingScale(double a[3])\n\n"},
  {(char*)"GetSpacingScale", PyvtkImageChangeInformation_GetSpacingScale, 1,
   (char*)"V.GetSpacingScale() -> (float, float, float)\nC++: double *GetSpacingScale()\n\n"},
  {(char*)"SetOriginTranslation", PyvtkImageChangeInformation_SetOriginTranslation, 1,
   (char*)"V.SetOriginTranslation(float, float, float)\nC++: void SetOriginTranslation(double, double, double)\nV.SetOriginTranslation((float, float, float))\nC++: void SetOriginTranslation(double a[3])\n\n"},
  {(char*)"GetOriginTranslation", PyvtkImageChangeInformation_GetOriginTranslation, 1,
   (char*)"V.GetOriginTranslation() -> (float, float, float)\nC++: double *GetOriginTranslation()\n\n"},
  {(char*)"SetOriginScale", PyvtkImageChangeInformation_SetOriginScale, 1,
   (char*)"V.SetOriginScale(float, float, float)\nC++: void SetOriginScale(double, double, double)\nV.SetOriginScale((float, float, float))\nC++: void SetOriginScale(double a[3])\n\n"},
  {(char*)"GetOriginScale", PyvtkImageChangeInformation_GetOriginScale, 1,
   (char*)"V.GetOriginScale() -> (float, float, float)\nC++: double *GetOriginScale()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageChangeInformation_StaticNew()
{
  return vtkImageChangeInformation::New();
}

PyObject *PyVTKClass_vtkImageChangeInformationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageChangeInformation_StaticNew,
    PyvtkImageChangeInformation_Methods,
    "vtkImageChangeInformation", modulename,
    NULL, NULL,
    PyvtkImageChangeInformation_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageChangeInformation_Doc()
{
  static const char *docstring[] = {
    "vtkImageChangeInformation - modify spacing, origin and extent.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageChangeInformation  modify the spacing, origin, or extent of\nthe data without changing the data itself.  The data is not resampled\nby this filter, only the information accompanying the data is\nmodified.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageChangeInformation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageChangeInformationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageChangeInformation", o) != 0)
    {
    Py_DECREF(o);
    }

}

