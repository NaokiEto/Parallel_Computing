// python wrapper for vtkMedicalImageProperties
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
#include "vtkMedicalImageProperties.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMedicalImageProperties(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMedicalImageProperties(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMedicalImagePropertiesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMedicalImagePropertiesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMedicalImageProperties_Doc();


static PyObject *
PyvtkMedicalImageProperties_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

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
      tempr = op->vtkMedicalImageProperties::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

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
      tempr = op->vtkMedicalImageProperties::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  vtkMedicalImageProperties *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::NewInstance();
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
PyvtkMedicalImageProperties_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMedicalImageProperties *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMedicalImageProperties::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkMedicalImageProperties::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetPatientName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPatientName(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetPatientName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientName();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetPatientName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetPatientID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPatientID(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetPatientID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientID();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetPatientID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetPatientAge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientAge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPatientAge(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetPatientAge(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientAge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientAge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientAge();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetPatientAge();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetAgeAsFields(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAgeAsFields");

  char *temp0 = NULL;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    tempr = vtkMedicalImageProperties::GetAgeAsFields(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientAgeYear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientAgeYear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientAgeYear();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetPatientAgeYear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientAgeMonth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientAgeMonth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientAgeMonth();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetPatientAgeMonth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientAgeWeek(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientAgeWeek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientAgeWeek();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetPatientAgeWeek();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientAgeDay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientAgeDay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientAgeDay();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetPatientAgeDay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetPatientSex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientSex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPatientSex(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetPatientSex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientSex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientSex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientSex();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetPatientSex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetPatientBirthDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientBirthDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPatientBirthDate(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetPatientBirthDate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientBirthDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientBirthDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientBirthDate();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetPatientBirthDate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientBirthDateYear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientBirthDateYear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientBirthDateYear();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetPatientBirthDateYear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientBirthDateMonth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientBirthDateMonth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientBirthDateMonth();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetPatientBirthDateMonth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientBirthDateDay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientBirthDateDay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPatientBirthDateDay();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetPatientBirthDateDay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetStudyDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStudyDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStudyDate(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetStudyDate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetStudyDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudyDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStudyDate();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetStudyDate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetAcquisitionDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAcquisitionDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAcquisitionDate(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetAcquisitionDate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetAcquisitionDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAcquisitionDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAcquisitionDate();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetAcquisitionDate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetAcquisitionDateYear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAcquisitionDateYear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAcquisitionDateYear();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetAcquisitionDateYear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetAcquisitionDateMonth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAcquisitionDateMonth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAcquisitionDateMonth();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetAcquisitionDateMonth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetAcquisitionDateDay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAcquisitionDateDay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAcquisitionDateDay();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetAcquisitionDateDay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetStudyTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStudyTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStudyTime(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetStudyTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetStudyTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudyTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStudyTime();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetStudyTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetAcquisitionTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAcquisitionTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAcquisitionTime(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetAcquisitionTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetAcquisitionTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAcquisitionTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAcquisitionTime();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetAcquisitionTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetImageDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageDate(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetImageDate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetImageDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageDate();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetImageDate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetImageDateYear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDateYear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageDateYear();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetImageDateYear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetImageDateMonth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDateMonth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageDateMonth();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetImageDateMonth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetImageDateDay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDateDay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageDateDay();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetImageDateDay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetDateAsFields(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDateAsFields");

  char *temp0 = NULL;
  int temp1;
  int temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    tempr = vtkMedicalImageProperties::GetDateAsFields(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetTimeAsFields(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTimeAsFields");

  char *temp0 = NULL;
  int temp1;
  int temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    tempr = vtkMedicalImageProperties::GetTimeAsFields(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(3, temp3);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetDateAsLocale(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDateAsLocale");

  char *temp0 = NULL;
  char *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    tempr = vtkMedicalImageProperties::GetDateAsLocale(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetImageTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageTime(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetImageTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetImageTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageTime();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetImageTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetImageNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetImageNumber(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetImageNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetImageNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageNumber();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetImageNumber();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetSeriesNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeriesNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSeriesNumber(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetSeriesNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetSeriesNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeriesNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSeriesNumber();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetSeriesNumber();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetSeriesDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeriesDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSeriesDescription(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetSeriesDescription(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetSeriesDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeriesDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSeriesDescription();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetSeriesDescription();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetStudyID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStudyID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStudyID(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetStudyID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetStudyID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudyID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStudyID();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetStudyID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetStudyDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStudyDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStudyDescription(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetStudyDescription(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetStudyDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudyDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStudyDescription();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetStudyDescription();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetModality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetModality(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetModality(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetModality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetModality();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetModality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetManufacturer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManufacturer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetManufacturer(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetManufacturer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetManufacturer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManufacturer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetManufacturer();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetManufacturer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetManufacturerModelName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManufacturerModelName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetManufacturerModelName(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetManufacturerModelName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetManufacturerModelName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManufacturerModelName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetManufacturerModelName();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetManufacturerModelName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetStationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStationName(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetStationName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetStationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStationName();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetStationName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetInstitutionName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInstitutionName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInstitutionName(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetInstitutionName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetInstitutionName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInstitutionName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInstitutionName();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetInstitutionName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetConvolutionKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvolutionKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvolutionKernel(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetConvolutionKernel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetConvolutionKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvolutionKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConvolutionKernel();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetConvolutionKernel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetSliceThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceThickness(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetSliceThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetSliceThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSliceThickness();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetSliceThickness();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetSliceThicknessAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceThicknessAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSliceThicknessAsDouble();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetSliceThicknessAsDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetKVP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKVP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetKVP(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetKVP(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetKVP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKVP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKVP();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetKVP();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetGantryTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGantryTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGantryTilt(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetGantryTilt(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetGantryTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGantryTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGantryTilt();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetGantryTilt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetGantryTiltAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGantryTiltAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGantryTiltAsDouble();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetGantryTiltAsDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetEchoTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEchoTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEchoTime(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetEchoTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetEchoTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEchoTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEchoTime();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetEchoTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetEchoTrainLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEchoTrainLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEchoTrainLength(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetEchoTrainLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetEchoTrainLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEchoTrainLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEchoTrainLength();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetEchoTrainLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetRepetitionTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepetitionTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepetitionTime(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetRepetitionTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetRepetitionTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepetitionTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRepetitionTime();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetRepetitionTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetExposureTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExposureTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExposureTime(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetExposureTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetExposureTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExposureTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExposureTime();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetExposureTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetXRayTubeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXRayTubeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXRayTubeCurrent(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetXRayTubeCurrent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetXRayTubeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXRayTubeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXRayTubeCurrent();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetXRayTubeCurrent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetExposure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExposure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExposure(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetExposure(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetExposure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExposure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExposure();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetExposure();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetDirectionCosine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionCosine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetDirectionCosine(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkMedicalImageProperties::SetDirectionCosine(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMedicalImageProperties_SetDirectionCosine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionCosine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDirectionCosine(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::SetDirectionCosine(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMedicalImageProperties_SetDirectionCosine(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkMedicalImageProperties_SetDirectionCosine_s1(self, args);
    case 1:
      return PyvtkMedicalImageProperties_SetDirectionCosine_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDirectionCosine");
  return NULL;
}



static PyObject *
PyvtkMedicalImageProperties_GetDirectionCosine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectionCosine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDirectionCosine();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetDirectionCosine();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_AddUserDefinedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUserDefinedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddUserDefinedValue(temp0, temp1);
      }
    else
      {
      op->vtkMedicalImageProperties::AddUserDefinedValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetUserDefinedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserDefinedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  char *temp0 = NULL;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUserDefinedValue(temp0);
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetUserDefinedValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetNumberOfUserDefinedValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUserDefinedValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfUserDefinedValues();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetNumberOfUserDefinedValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetUserDefinedNameByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserDefinedNameByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  unsigned int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUserDefinedNameByIndex(temp0);
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetUserDefinedNameByIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetUserDefinedValueByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserDefinedValueByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  unsigned int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUserDefinedValueByIndex(temp0);
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetUserDefinedValueByIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_RemoveAllUserDefinedValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllUserDefinedValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllUserDefinedValues();
      }
    else
      {
      op->vtkMedicalImageProperties::RemoveAllUserDefinedValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_AddWindowLevelPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddWindowLevelPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  double temp0;
  double temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->AddWindowLevelPreset(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::AddWindowLevelPreset(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_RemoveWindowLevelPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveWindowLevelPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->RemoveWindowLevelPreset(temp0, temp1);
      }
    else
      {
      op->vtkMedicalImageProperties::RemoveWindowLevelPreset(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_RemoveAllWindowLevelPresets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllWindowLevelPresets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllWindowLevelPresets();
      }
    else
      {
      op->vtkMedicalImageProperties::RemoveAllWindowLevelPresets();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetNumberOfWindowLevelPresets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfWindowLevelPresets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfWindowLevelPresets();
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetNumberOfWindowLevelPresets();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_HasWindowLevelPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasWindowLevelPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  double temp0;
  double temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->HasWindowLevelPreset(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::HasWindowLevelPreset(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetWindowLevelPresetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevelPresetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  double temp0;
  double temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWindowLevelPresetIndex(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetWindowLevelPresetIndex(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetNthWindowLevelPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthWindowLevelPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNthWindowLevelPreset(temp0);
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetNthWindowLevelPreset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetNthWindowLevelPresetComment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthWindowLevelPresetComment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetNthWindowLevelPresetComment(temp0, temp1);
      }
    else
      {
      op->vtkMedicalImageProperties::SetNthWindowLevelPresetComment(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetNthWindowLevelPresetComment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthWindowLevelPresetComment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNthWindowLevelPresetComment(temp0);
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetNthWindowLevelPresetComment(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetInstanceUIDFromSliceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInstanceUIDFromSliceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  int temp1;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInstanceUIDFromSliceID(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetInstanceUIDFromSliceID(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetInstanceUIDFromSliceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInstanceUIDFromSliceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  int temp1;
  char *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetInstanceUIDFromSliceID(temp0, temp1, temp2);
      }
    else
      {
      op->vtkMedicalImageProperties::SetInstanceUIDFromSliceID(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetSliceIDFromInstanceUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceIDFromInstanceUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  char *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSliceIDFromInstanceUID(temp0, temp1);
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetSliceIDFromInstanceUID(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetOrientationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientationType(temp0);
      }
    else
      {
      tempr = op->vtkMedicalImageProperties::GetOrientationType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetOrientationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOrientationType(temp0, temp1);
      }
    else
      {
      op->vtkMedicalImageProperties::SetOrientationType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetStringFromOrientationType(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromOrientationType");

  unsigned int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkMedicalImageProperties::GetStringFromOrientationType(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  vtkMedicalImageProperties *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMedicalImageProperties"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkMedicalImageProperties::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMedicalImageProperties_Methods[] = {
  {(char*)"GetClassName", PyvtkMedicalImageProperties_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMedicalImageProperties_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMedicalImageProperties_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMedicalImageProperties\nC++: vtkMedicalImageProperties *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMedicalImageProperties_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMedicalImageProperties\nC++: vtkMedicalImageProperties *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Clear", PyvtkMedicalImageProperties_Clear, 1,
   (char*)"V.Clear()\nC++: virtual void Clear()\n\nConvenience method to reset all fields to an emptry string/value\n"},
  {(char*)"SetPatientName", PyvtkMedicalImageProperties_SetPatientName, 1,
   (char*)"V.SetPatientName(string)\nC++: void SetPatientName(char *)\n\nPatient name For ex: DICOM (0010,0010) = DOE,JOHN\n"},
  {(char*)"GetPatientName", PyvtkMedicalImageProperties_GetPatientName, 1,
   (char*)"V.GetPatientName() -> string\nC++: char *GetPatientName()\n\nPatient name For ex: DICOM (0010,0010) = DOE,JOHN\n"},
  {(char*)"SetPatientID", PyvtkMedicalImageProperties_SetPatientID, 1,
   (char*)"V.SetPatientID(string)\nC++: void SetPatientID(char *)\n\nPatient ID For ex: DICOM (0010,0020) = 1933197\n"},
  {(char*)"GetPatientID", PyvtkMedicalImageProperties_GetPatientID, 1,
   (char*)"V.GetPatientID() -> string\nC++: char *GetPatientID()\n\nPatient ID For ex: DICOM (0010,0020) = 1933197\n"},
  {(char*)"SetPatientAge", PyvtkMedicalImageProperties_SetPatientAge, 1,
   (char*)"V.SetPatientAge(string)\nC++: void SetPatientAge(char *)\n\nPatient age Format: nnnD, nnW, nnnM or nnnY (eventually nnD, nnW,\nnnY)\n        with D (day), M (month), W (week), Y (year) For ex: DICOM\n(0010,1010) = 031Y\n"},
  {(char*)"GetPatientAge", PyvtkMedicalImageProperties_GetPatientAge, 1,
   (char*)"V.GetPatientAge() -> string\nC++: char *GetPatientAge()\n\nPatient age Format: nnnD, nnW, nnnM or nnnY (eventually nnD, nnW,\nnnY)\n        with D (day), M (month), W (week), Y (year) For ex: DICOM\n(0010,1010) = 031Y\n"},
  {(char*)"GetAgeAsFields", PyvtkMedicalImageProperties_GetAgeAsFields, 1,
   (char*)"V.GetAgeAsFields(string, int, int, int, int) -> int\nC++: static int GetAgeAsFields(const char *age, int &year,\n    int &month, int &week, int &day)\n\nTake as input a string in VR=AS (DICOM PS3.5) and extract either\ndifferent fields namely: year month week day Return 0 on error, 1\non success One can test fields if they are different from -1 upon\nsuccess\n"},
  {(char*)"GetPatientAgeYear", PyvtkMedicalImageProperties_GetPatientAgeYear, 1,
   (char*)"V.GetPatientAgeYear() -> int\nC++: int GetPatientAgeYear()\n\n"},
  {(char*)"GetPatientAgeMonth", PyvtkMedicalImageProperties_GetPatientAgeMonth, 1,
   (char*)"V.GetPatientAgeMonth() -> int\nC++: int GetPatientAgeMonth()\n\n"},
  {(char*)"GetPatientAgeWeek", PyvtkMedicalImageProperties_GetPatientAgeWeek, 1,
   (char*)"V.GetPatientAgeWeek() -> int\nC++: int GetPatientAgeWeek()\n\n"},
  {(char*)"GetPatientAgeDay", PyvtkMedicalImageProperties_GetPatientAgeDay, 1,
   (char*)"V.GetPatientAgeDay() -> int\nC++: int GetPatientAgeDay()\n\n"},
  {(char*)"SetPatientSex", PyvtkMedicalImageProperties_SetPatientSex, 1,
   (char*)"V.SetPatientSex(string)\nC++: void SetPatientSex(char *)\n\nPatient sex For ex: DICOM (0010,0040) = M\n"},
  {(char*)"GetPatientSex", PyvtkMedicalImageProperties_GetPatientSex, 1,
   (char*)"V.GetPatientSex() -> string\nC++: char *GetPatientSex()\n\nPatient sex For ex: DICOM (0010,0040) = M\n"},
  {(char*)"SetPatientBirthDate", PyvtkMedicalImageProperties_SetPatientBirthDate, 1,
   (char*)"V.SetPatientBirthDate(string)\nC++: void SetPatientBirthDate(char *)\n\nPatient birth date Format: yyyymmdd For ex: DICOM (0010,0030) =\n19680427\n"},
  {(char*)"GetPatientBirthDate", PyvtkMedicalImageProperties_GetPatientBirthDate, 1,
   (char*)"V.GetPatientBirthDate() -> string\nC++: char *GetPatientBirthDate()\n\nPatient birth date Format: yyyymmdd For ex: DICOM (0010,0030) =\n19680427\n"},
  {(char*)"GetPatientBirthDateYear", PyvtkMedicalImageProperties_GetPatientBirthDateYear, 1,
   (char*)"V.GetPatientBirthDateYear() -> int\nC++: int GetPatientBirthDateYear()\n\n"},
  {(char*)"GetPatientBirthDateMonth", PyvtkMedicalImageProperties_GetPatientBirthDateMonth, 1,
   (char*)"V.GetPatientBirthDateMonth() -> int\nC++: int GetPatientBirthDateMonth()\n\n"},
  {(char*)"GetPatientBirthDateDay", PyvtkMedicalImageProperties_GetPatientBirthDateDay, 1,
   (char*)"V.GetPatientBirthDateDay() -> int\nC++: int GetPatientBirthDateDay()\n\n"},
  {(char*)"SetStudyDate", PyvtkMedicalImageProperties_SetStudyDate, 1,
   (char*)"V.SetStudyDate(string)\nC++: void SetStudyDate(char *)\n\nStudy Date Format: yyyymmdd For ex: DICOM (0008,0020) = 20030617\n"},
  {(char*)"GetStudyDate", PyvtkMedicalImageProperties_GetStudyDate, 1,
   (char*)"V.GetStudyDate() -> string\nC++: char *GetStudyDate()\n\nStudy Date Format: yyyymmdd For ex: DICOM (0008,0020) = 20030617\n"},
  {(char*)"SetAcquisitionDate", PyvtkMedicalImageProperties_SetAcquisitionDate, 1,
   (char*)"V.SetAcquisitionDate(string)\nC++: void SetAcquisitionDate(char *)\n\nAcquisition Date Format: yyyymmdd For ex: DICOM (0008,0022) =\n20030617\n"},
  {(char*)"GetAcquisitionDate", PyvtkMedicalImageProperties_GetAcquisitionDate, 1,
   (char*)"V.GetAcquisitionDate() -> string\nC++: char *GetAcquisitionDate()\n\nAcquisition Date Format: yyyymmdd For ex: DICOM (0008,0022) =\n20030617\n"},
  {(char*)"GetAcquisitionDateYear", PyvtkMedicalImageProperties_GetAcquisitionDateYear, 1,
   (char*)"V.GetAcquisitionDateYear() -> int\nC++: int GetAcquisitionDateYear()\n\n"},
  {(char*)"GetAcquisitionDateMonth", PyvtkMedicalImageProperties_GetAcquisitionDateMonth, 1,
   (char*)"V.GetAcquisitionDateMonth() -> int\nC++: int GetAcquisitionDateMonth()\n\n"},
  {(char*)"GetAcquisitionDateDay", PyvtkMedicalImageProperties_GetAcquisitionDateDay, 1,
   (char*)"V.GetAcquisitionDateDay() -> int\nC++: int GetAcquisitionDateDay()\n\n"},
  {(char*)"SetStudyTime", PyvtkMedicalImageProperties_SetStudyTime, 1,
   (char*)"V.SetStudyTime(string)\nC++: void SetStudyTime(char *)\n\nStudy Time Format: hhmmss.frac (any trailing component(s) can be\nommited) For ex: DICOM (0008,0030) = 162552.0705 or 230012, or\n0012\n"},
  {(char*)"GetStudyTime", PyvtkMedicalImageProperties_GetStudyTime, 1,
   (char*)"V.GetStudyTime() -> string\nC++: char *GetStudyTime()\n\nStudy Time Format: hhmmss.frac (any trailing component(s) can be\nommited) For ex: DICOM (0008,0030) = 162552.0705 or 230012, or\n0012\n"},
  {(char*)"SetAcquisitionTime", PyvtkMedicalImageProperties_SetAcquisitionTime, 1,
   (char*)"V.SetAcquisitionTime(string)\nC++: void SetAcquisitionTime(char *)\n\nAcquisition time Format: hhmmss.frac (any trailing component(s)\ncan be ommited) For ex: DICOM (0008,0032) = 162552.0705 or\n230012, or 0012\n"},
  {(char*)"GetAcquisitionTime", PyvtkMedicalImageProperties_GetAcquisitionTime, 1,
   (char*)"V.GetAcquisitionTime() -> string\nC++: char *GetAcquisitionTime()\n\nAcquisition time Format: hhmmss.frac (any trailing component(s)\ncan be ommited) For ex: DICOM (0008,0032) = 162552.0705 or\n230012, or 0012\n"},
  {(char*)"SetImageDate", PyvtkMedicalImageProperties_SetImageDate, 1,
   (char*)"V.SetImageDate(string)\nC++: void SetImageDate(char *)\n\nImage Date aka Content Date Format: yyyymmdd For ex: DICOM\n(0008,0023) = 20030617\n"},
  {(char*)"GetImageDate", PyvtkMedicalImageProperties_GetImageDate, 1,
   (char*)"V.GetImageDate() -> string\nC++: char *GetImageDate()\n\nImage Date aka Content Date Format: yyyymmdd For ex: DICOM\n(0008,0023) = 20030617\n"},
  {(char*)"GetImageDateYear", PyvtkMedicalImageProperties_GetImageDateYear, 1,
   (char*)"V.GetImageDateYear() -> int\nC++: int GetImageDateYear()\n\n"},
  {(char*)"GetImageDateMonth", PyvtkMedicalImageProperties_GetImageDateMonth, 1,
   (char*)"V.GetImageDateMonth() -> int\nC++: int GetImageDateMonth()\n\n"},
  {(char*)"GetImageDateDay", PyvtkMedicalImageProperties_GetImageDateDay, 1,
   (char*)"V.GetImageDateDay() -> int\nC++: int GetImageDateDay()\n\n"},
  {(char*)"GetDateAsFields", PyvtkMedicalImageProperties_GetDateAsFields, 1,
   (char*)"V.GetDateAsFields(string, int, int, int) -> int\nC++: static int GetDateAsFields(const char *date, int &year,\n    int &month, int &day)\n\nTake as input a string in ISO 8601 date (YYYY/MM/DD) and extract\nthe different fields namely: year month day Return 0 on error, 1\non success\n"},
  {(char*)"GetTimeAsFields", PyvtkMedicalImageProperties_GetTimeAsFields, 1,
   (char*)"V.GetTimeAsFields(string, int, int, int) -> int\nC++: static int GetTimeAsFields(const char *time, int &hour,\n    int &minute, int &second)\n\nTake as input a string in VR:TM format (HHMMSS) and extract the\ndifferent fields namely: hour, minute and second Return 0 on\nerror, 1 on success\n"},
  {(char*)"GetDateAsLocale", PyvtkMedicalImageProperties_GetDateAsLocale, 1,
   (char*)"V.GetDateAsLocale(string, string) -> int\nC++: static int GetDateAsLocale(const char *date, char *locale)\n\nTake as input a string in ISO 8601 date (YYYY/MM/DD) and\nconstruct a locale date based on the different fields (see\nGetDateAsFields to extract different fields) Return 0 on error, 1\non success\n"},
  {(char*)"SetImageTime", PyvtkMedicalImageProperties_SetImageTime, 1,
   (char*)"V.SetImageTime(string)\nC++: void SetImageTime(char *)\n\nImage Time Format: hhmmss.frac (any trailing component(s) can be\nommited) For ex: DICOM (0008,0033) = 162552.0705 or 230012, or\n0012\n"},
  {(char*)"GetImageTime", PyvtkMedicalImageProperties_GetImageTime, 1,
   (char*)"V.GetImageTime() -> string\nC++: char *GetImageTime()\n\nImage Time Format: hhmmss.frac (any trailing component(s) can be\nommited) For ex: DICOM (0008,0033) = 162552.0705 or 230012, or\n0012\n"},
  {(char*)"SetImageNumber", PyvtkMedicalImageProperties_SetImageNumber, 1,
   (char*)"V.SetImageNumber(string)\nC++: void SetImageNumber(char *)\n\nImage number For ex: DICOM (0020,0013) = 1\n"},
  {(char*)"GetImageNumber", PyvtkMedicalImageProperties_GetImageNumber, 1,
   (char*)"V.GetImageNumber() -> string\nC++: char *GetImageNumber()\n\nImage number For ex: DICOM (0020,0013) = 1\n"},
  {(char*)"SetSeriesNumber", PyvtkMedicalImageProperties_SetSeriesNumber, 1,
   (char*)"V.SetSeriesNumber(string)\nC++: void SetSeriesNumber(char *)\n\nSeries number For ex: DICOM (0020,0011) = 902\n"},
  {(char*)"GetSeriesNumber", PyvtkMedicalImageProperties_GetSeriesNumber, 1,
   (char*)"V.GetSeriesNumber() -> string\nC++: char *GetSeriesNumber()\n\nSeries number For ex: DICOM (0020,0011) = 902\n"},
  {(char*)"SetSeriesDescription", PyvtkMedicalImageProperties_SetSeriesDescription, 1,
   (char*)"V.SetSeriesDescription(string)\nC++: void SetSeriesDescription(char *)\n\nSeries Description User provided description of the Series For\nex: DICOM (0008,103e) = SCOUT\n"},
  {(char*)"GetSeriesDescription", PyvtkMedicalImageProperties_GetSeriesDescription, 1,
   (char*)"V.GetSeriesDescription() -> string\nC++: char *GetSeriesDescription()\n\nSeries Description User provided description of the Series For\nex: DICOM (0008,103e) = SCOUT\n"},
  {(char*)"SetStudyID", PyvtkMedicalImageProperties_SetStudyID, 1,
   (char*)"V.SetStudyID(string)\nC++: void SetStudyID(char *)\n\nStudy ID For ex: DICOM (0020,0010) = 37481\n"},
  {(char*)"GetStudyID", PyvtkMedicalImageProperties_GetStudyID, 1,
   (char*)"V.GetStudyID() -> string\nC++: char *GetStudyID()\n\nStudy ID For ex: DICOM (0020,0010) = 37481\n"},
  {(char*)"SetStudyDescription", PyvtkMedicalImageProperties_SetStudyDescription, 1,
   (char*)"V.SetStudyDescription(string)\nC++: void SetStudyDescription(char *)\n\nStudy description For ex: DICOM (0008,1030) = BRAIN/C-SP/FACIAL\n"},
  {(char*)"GetStudyDescription", PyvtkMedicalImageProperties_GetStudyDescription, 1,
   (char*)"V.GetStudyDescription() -> string\nC++: char *GetStudyDescription()\n\nStudy description For ex: DICOM (0008,1030) = BRAIN/C-SP/FACIAL\n"},
  {(char*)"SetModality", PyvtkMedicalImageProperties_SetModality, 1,
   (char*)"V.SetModality(string)\nC++: void SetModality(char *)\n\nModality For ex: DICOM (0008,0060)= CT\n"},
  {(char*)"GetModality", PyvtkMedicalImageProperties_GetModality, 1,
   (char*)"V.GetModality() -> string\nC++: char *GetModality()\n\nModality For ex: DICOM (0008,0060)= CT\n"},
  {(char*)"SetManufacturer", PyvtkMedicalImageProperties_SetManufacturer, 1,
   (char*)"V.SetManufacturer(string)\nC++: void SetManufacturer(char *)\n\nManufacturer For ex: DICOM (0008,0070) = Siemens\n"},
  {(char*)"GetManufacturer", PyvtkMedicalImageProperties_GetManufacturer, 1,
   (char*)"V.GetManufacturer() -> string\nC++: char *GetManufacturer()\n\nManufacturer For ex: DICOM (0008,0070) = Siemens\n"},
  {(char*)"SetManufacturerModelName", PyvtkMedicalImageProperties_SetManufacturerModelName, 1,
   (char*)"V.SetManufacturerModelName(string)\nC++: void SetManufacturerModelName(char *)\n\nManufacturer's Model Name For ex: DICOM (0008,1090) = LightSpeed\nQX/i\n"},
  {(char*)"GetManufacturerModelName", PyvtkMedicalImageProperties_GetManufacturerModelName, 1,
   (char*)"V.GetManufacturerModelName() -> string\nC++: char *GetManufacturerModelName()\n\nManufacturer's Model Name For ex: DICOM (0008,1090) = LightSpeed\nQX/i\n"},
  {(char*)"SetStationName", PyvtkMedicalImageProperties_SetStationName, 1,
   (char*)"V.SetStationName(string)\nC++: void SetStationName(char *)\n\nStation Name For ex: DICOM (0008,1010) = LSPD_OC8\n"},
  {(char*)"GetStationName", PyvtkMedicalImageProperties_GetStationName, 1,
   (char*)"V.GetStationName() -> string\nC++: char *GetStationName()\n\nStation Name For ex: DICOM (0008,1010) = LSPD_OC8\n"},
  {(char*)"SetInstitutionName", PyvtkMedicalImageProperties_SetInstitutionName, 1,
   (char*)"V.SetInstitutionName(string)\nC++: void SetInstitutionName(char *)\n\nInstitution Name For ex: DICOM (0008,0080) = FooCity Medical\nCenter\n"},
  {(char*)"GetInstitutionName", PyvtkMedicalImageProperties_GetInstitutionName, 1,
   (char*)"V.GetInstitutionName() -> string\nC++: char *GetInstitutionName()\n\nInstitution Name For ex: DICOM (0008,0080) = FooCity Medical\nCenter\n"},
  {(char*)"SetConvolutionKernel", PyvtkMedicalImageProperties_SetConvolutionKernel, 1,
   (char*)"V.SetConvolutionKernel(string)\nC++: void SetConvolutionKernel(char *)\n\nConvolution Kernel (or algorithm used to reconstruct the data)\nFor ex: DICOM (0018,1210) = Bone\n"},
  {(char*)"GetConvolutionKernel", PyvtkMedicalImageProperties_GetConvolutionKernel, 1,
   (char*)"V.GetConvolutionKernel() -> string\nC++: char *GetConvolutionKernel()\n\nConvolution Kernel (or algorithm used to reconstruct the data)\nFor ex: DICOM (0018,1210) = Bone\n"},
  {(char*)"SetSliceThickness", PyvtkMedicalImageProperties_SetSliceThickness, 1,
   (char*)"V.SetSliceThickness(string)\nC++: void SetSliceThickness(char *)\n\nSlice Thickness (Nominal reconstructed slice thickness, in mm)\nFor ex: DICOM (0018,0050) = 0.273438\n"},
  {(char*)"GetSliceThickness", PyvtkMedicalImageProperties_GetSliceThickness, 1,
   (char*)"V.GetSliceThickness() -> string\nC++: char *GetSliceThickness()\n\nSlice Thickness (Nominal reconstructed slice thickness, in mm)\nFor ex: DICOM (0018,0050) = 0.273438\n"},
  {(char*)"GetSliceThicknessAsDouble", PyvtkMedicalImageProperties_GetSliceThicknessAsDouble, 1,
   (char*)"V.GetSliceThicknessAsDouble() -> float\nC++: virtual double GetSliceThicknessAsDouble()\n\nSlice Thickness (Nominal reconstructed slice thickness, in mm)\nFor ex: DICOM (0018,0050) = 0.273438\n"},
  {(char*)"SetKVP", PyvtkMedicalImageProperties_SetKVP, 1,
   (char*)"V.SetKVP(string)\nC++: void SetKVP(char *)\n\nPeak kilo voltage output of the (x-ray) generator used For ex:\nDICOM (0018,0060) = 120\n"},
  {(char*)"GetKVP", PyvtkMedicalImageProperties_GetKVP, 1,
   (char*)"V.GetKVP() -> string\nC++: char *GetKVP()\n\nPeak kilo voltage output of the (x-ray) generator used For ex:\nDICOM (0018,0060) = 120\n"},
  {(char*)"SetGantryTilt", PyvtkMedicalImageProperties_SetGantryTilt, 1,
   (char*)"V.SetGantryTilt(string)\nC++: void SetGantryTilt(char *)\n\nGantry/Detector tilt (Nominal angle of tilt in degrees of the\nscanning gantry.) For ex: DICOM (0018,1120) = 15\n"},
  {(char*)"GetGantryTilt", PyvtkMedicalImageProperties_GetGantryTilt, 1,
   (char*)"V.GetGantryTilt() -> string\nC++: char *GetGantryTilt()\n\nGantry/Detector tilt (Nominal angle of tilt in degrees of the\nscanning gantry.) For ex: DICOM (0018,1120) = 15\n"},
  {(char*)"GetGantryTiltAsDouble", PyvtkMedicalImageProperties_GetGantryTiltAsDouble, 1,
   (char*)"V.GetGantryTiltAsDouble() -> float\nC++: virtual double GetGantryTiltAsDouble()\n\nGantry/Detector tilt (Nominal angle of tilt in degrees of the\nscanning gantry.) For ex: DICOM (0018,1120) = 15\n"},
  {(char*)"SetEchoTime", PyvtkMedicalImageProperties_SetEchoTime, 1,
   (char*)"V.SetEchoTime(string)\nC++: void SetEchoTime(char *)\n\nEcho Time (Time in ms between the middle of the excitation pulse\nand the peak of the echo produced) For ex: DICOM (0018,0081) =\n105\n"},
  {(char*)"GetEchoTime", PyvtkMedicalImageProperties_GetEchoTime, 1,
   (char*)"V.GetEchoTime() -> string\nC++: char *GetEchoTime()\n\nEcho Time (Time in ms between the middle of the excitation pulse\nand the peak of the echo produced) For ex: DICOM (0018,0081) =\n105\n"},
  {(char*)"SetEchoTrainLength", PyvtkMedicalImageProperties_SetEchoTrainLength, 1,
   (char*)"V.SetEchoTrainLength(string)\nC++: void SetEchoTrainLength(char *)\n\nEcho Train Length (Number of lines in k-space acquired per\nexcitation per image) For ex: DICOM (0018,0091) = 35\n"},
  {(char*)"GetEchoTrainLength", PyvtkMedicalImageProperties_GetEchoTrainLength, 1,
   (char*)"V.GetEchoTrainLength() -> string\nC++: char *GetEchoTrainLength()\n\nEcho Train Length (Number of lines in k-space acquired per\nexcitation per image) For ex: DICOM (0018,0091) = 35\n"},
  {(char*)"SetRepetitionTime", PyvtkMedicalImageProperties_SetRepetitionTime, 1,
   (char*)"V.SetRepetitionTime(string)\nC++: void SetRepetitionTime(char *)\n\nRepetition Time The period of time in msec between the beginning\nof a pulse sequence and the beginning of the succeeding\n(essentially identical) pulse sequence. For ex: DICOM (0018,0080)\n= 2040\n"},
  {(char*)"GetRepetitionTime", PyvtkMedicalImageProperties_GetRepetitionTime, 1,
   (char*)"V.GetRepetitionTime() -> string\nC++: char *GetRepetitionTime()\n\nRepetition Time The period of time in msec between the beginning\nof a pulse sequence and the beginning of the succeeding\n(essentially identical) pulse sequence. For ex: DICOM (0018,0080)\n= 2040\n"},
  {(char*)"SetExposureTime", PyvtkMedicalImageProperties_SetExposureTime, 1,
   (char*)"V.SetExposureTime(string)\nC++: void SetExposureTime(char *)\n\nExposure time (time of x-ray exposure in msec) For ex: DICOM\n(0018,1150) = 5\n"},
  {(char*)"GetExposureTime", PyvtkMedicalImageProperties_GetExposureTime, 1,
   (char*)"V.GetExposureTime() -> string\nC++: char *GetExposureTime()\n\nExposure time (time of x-ray exposure in msec) For ex: DICOM\n(0018,1150) = 5\n"},
  {(char*)"SetXRayTubeCurrent", PyvtkMedicalImageProperties_SetXRayTubeCurrent, 1,
   (char*)"V.SetXRayTubeCurrent(string)\nC++: void SetXRayTubeCurrent(char *)\n\nX-ray tube current (in mA) For ex: DICOM (0018,1151) = 400\n"},
  {(char*)"GetXRayTubeCurrent", PyvtkMedicalImageProperties_GetXRayTubeCurrent, 1,
   (char*)"V.GetXRayTubeCurrent() -> string\nC++: char *GetXRayTubeCurrent()\n\nX-ray tube current (in mA) For ex: DICOM (0018,1151) = 400\n"},
  {(char*)"SetExposure", PyvtkMedicalImageProperties_SetExposure, 1,
   (char*)"V.SetExposure(string)\nC++: void SetExposure(char *)\n\nExposure (The exposure expressed in mAs, for example calculated\nfrom Exposure Time and X-ray Tube Current) For ex: DICOM\n(0018,1152) = 114\n"},
  {(char*)"GetExposure", PyvtkMedicalImageProperties_GetExposure, 1,
   (char*)"V.GetExposure() -> string\nC++: char *GetExposure()\n\nExposure (The exposure expressed in mAs, for example calculated\nfrom Exposure Time and X-ray Tube Current) For ex: DICOM\n(0018,1152) = 114\n"},
  {(char*)"SetDirectionCosine", PyvtkMedicalImageProperties_SetDirectionCosine, 1,
   (char*)"V.SetDirectionCosine(float, float, float, float, float, float)\nC++: void SetDirectionCosine(double, double, double, double,\n    double, double)\nV.SetDirectionCosine((float, float, float, float, float, float))\nC++: void SetDirectionCosine(double a[6])\n\n"},
  {(char*)"GetDirectionCosine", PyvtkMedicalImageProperties_GetDirectionCosine, 1,
   (char*)"V.GetDirectionCosine() -> (float, float, float, float, float,\n    float)\nC++: double *GetDirectionCosine()\n\n"},
  {(char*)"AddUserDefinedValue", PyvtkMedicalImageProperties_AddUserDefinedValue, 1,
   (char*)"V.AddUserDefinedValue(string, string)\nC++: virtual void AddUserDefinedValue(const char *name,\n    const char *value)\n\n"},
  {(char*)"GetUserDefinedValue", PyvtkMedicalImageProperties_GetUserDefinedValue, 1,
   (char*)"V.GetUserDefinedValue(string) -> string\nC++: virtual const char *GetUserDefinedValue(const char *name)\n\n"},
  {(char*)"GetNumberOfUserDefinedValues", PyvtkMedicalImageProperties_GetNumberOfUserDefinedValues, 1,
   (char*)"V.GetNumberOfUserDefinedValues() -> int\nC++: virtual unsigned int GetNumberOfUserDefinedValues()\n\n"},
  {(char*)"GetUserDefinedNameByIndex", PyvtkMedicalImageProperties_GetUserDefinedNameByIndex, 1,
   (char*)"V.GetUserDefinedNameByIndex(int) -> string\nC++: virtual const char *GetUserDefinedNameByIndex(\n    unsigned int idx)\n\n"},
  {(char*)"GetUserDefinedValueByIndex", PyvtkMedicalImageProperties_GetUserDefinedValueByIndex, 1,
   (char*)"V.GetUserDefinedValueByIndex(int) -> string\nC++: virtual const char *GetUserDefinedValueByIndex(\n    unsigned int idx)\n\n"},
  {(char*)"RemoveAllUserDefinedValues", PyvtkMedicalImageProperties_RemoveAllUserDefinedValues, 1,
   (char*)"V.RemoveAllUserDefinedValues()\nC++: virtual void RemoveAllUserDefinedValues()\n\n"},
  {(char*)"AddWindowLevelPreset", PyvtkMedicalImageProperties_AddWindowLevelPreset, 1,
   (char*)"V.AddWindowLevelPreset(float, float) -> int\nC++: virtual int AddWindowLevelPreset(double w, double l)\n\nAdd/Remove/Query the window/level presets that may have been\nassociated to a medical image. Window is also known as 'width',\nlevel is also known as 'center'. The same window/level pair can\nnot be added twice. As a convenience, a comment (aka Explanation)\ncan be associated to a preset. For ex:\n         DICOM Window Center (0028,1050) = 00045\\000470\n         DICOM Window Width  (0028,1051) = 0106\\03412\n         DICOM Window Center Width Explanation (0028,1055) = WINDOW1\\WINDOW2\n \n"},
  {(char*)"RemoveWindowLevelPreset", PyvtkMedicalImageProperties_RemoveWindowLevelPreset, 1,
   (char*)"V.RemoveWindowLevelPreset(float, float)\nC++: virtual void RemoveWindowLevelPreset(double w, double l)\n\nAdd/Remove/Query the window/level presets that may have been\nassociated to a medical image. Window is also known as 'width',\nlevel is also known as 'center'. The same window/level pair can\nnot be added twice. As a convenience, a comment (aka Explanation)\ncan be associated to a preset. For ex:\n         DICOM Window Center (0028,1050) = 00045\\000470\n         DICOM Window Width  (0028,1051) = 0106\\03412\n         DICOM Window Center Width Explanation (0028,1055) = WINDOW1\\WINDOW2\n \n"},
  {(char*)"RemoveAllWindowLevelPresets", PyvtkMedicalImageProperties_RemoveAllWindowLevelPresets, 1,
   (char*)"V.RemoveAllWindowLevelPresets()\nC++: virtual void RemoveAllWindowLevelPresets()\n\nAdd/Remove/Query the window/level presets that may have been\nassociated to a medical image. Window is also known as 'width',\nlevel is also known as 'center'. The same window/level pair can\nnot be added twice. As a convenience, a comment (aka Explanation)\ncan be associated to a preset. For ex:\n         DICOM Window Center (0028,1050) = 00045\\000470\n         DICOM Window Width  (0028,1051) = 0106\\03412\n         DICOM Window Center Width Explanation (0028,1055) = WINDOW1\\WINDOW2\n \n"},
  {(char*)"GetNumberOfWindowLevelPresets", PyvtkMedicalImageProperties_GetNumberOfWindowLevelPresets, 1,
   (char*)"V.GetNumberOfWindowLevelPresets() -> int\nC++: virtual int GetNumberOfWindowLevelPresets()\n\nAdd/Remove/Query the window/level presets that may have been\nassociated to a medical image. Window is also known as 'width',\nlevel is also known as 'center'. The same window/level pair can\nnot be added twice. As a convenience, a comment (aka Explanation)\ncan be associated to a preset. For ex:\n         DICOM Window Center (0028,1050) = 00045\\000470\n         DICOM Window Width  (0028,1051) = 0106\\03412\n         DICOM Window Center Width Explanation (0028,1055) = WINDOW1\\WINDOW2\n \n"},
  {(char*)"HasWindowLevelPreset", PyvtkMedicalImageProperties_HasWindowLevelPreset, 1,
   (char*)"V.HasWindowLevelPreset(float, float) -> int\nC++: virtual int HasWindowLevelPreset(double w, double l)\n\nAdd/Remove/Query the window/level presets that may have been\nassociated to a medical image. Window is also known as 'width',\nlevel is also known as 'center'. The same window/level pair can\nnot be added twice. As a convenience, a comment (aka Explanation)\ncan be associated to a preset. For ex:\n         DICOM Window Center (0028,1050) = 00045\\000470\n         DICOM Window Width  (0028,1051) = 0106\\03412\n         DICOM Window Center Width Explanation (0028,1055) = WINDOW1\\WINDOW2\n \n"},
  {(char*)"GetWindowLevelPresetIndex", PyvtkMedicalImageProperties_GetWindowLevelPresetIndex, 1,
   (char*)"V.GetWindowLevelPresetIndex(float, float) -> int\nC++: virtual int GetWindowLevelPresetIndex(double w, double l)\n\nAdd/Remove/Query the window/level presets that may have been\nassociated to a medical image. Window is also known as 'width',\nlevel is also known as 'center'. The same window/level pair can\nnot be added twice. As a convenience, a comment (aka Explanation)\ncan be associated to a preset. For ex:\n         DICOM Window Center (0028,1050) = 00045\\000470\n         DICOM Window Width  (0028,1051) = 0106\\03412\n         DICOM Window Center Width Explanation (0028,1055) = WINDOW1\\WINDOW2\n \n"},
  {(char*)"GetNthWindowLevelPreset", PyvtkMedicalImageProperties_GetNthWindowLevelPreset, 1,
   (char*)"V.GetNthWindowLevelPreset(int) -> (float, float)\nC++: virtual double *GetNthWindowLevelPreset(int idx)\n\nAdd/Remove/Query the window/level presets that may have been\nassociated to a medical image. Window is also known as 'width',\nlevel is also known as 'center'. The same window/level pair can\nnot be added twice. As a convenience, a comment (aka Explanation)\ncan be associated to a preset. For ex:\n         DICOM Window Center (0028,1050) = 00045\\000470\n         DICOM Window Width  (0028,1051) = 0106\\03412\n         DICOM Window Center Width Explanation (0028,1055) = WINDOW1\\WINDOW2\n \n"},
  {(char*)"SetNthWindowLevelPresetComment", PyvtkMedicalImageProperties_SetNthWindowLevelPresetComment, 1,
   (char*)"V.SetNthWindowLevelPresetComment(int, string)\nC++: virtual void SetNthWindowLevelPresetComment(int idx,\n    const char *comment)\n\nAdd/Remove/Query the window/level presets that may have been\nassociated to a medical image. Window is also known as 'width',\nlevel is also known as 'center'. The same window/level pair can\nnot be added twice. As a convenience, a comment (aka Explanation)\ncan be associated to a preset. For ex:\n         DICOM Window Center (0028,1050) = 00045\\000470\n         DICOM Window Width  (0028,1051) = 0106\\03412\n         DICOM Window Center Width Explanation (0028,1055) = WINDOW1\\WINDOW2\n \n"},
  {(char*)"GetNthWindowLevelPresetComment", PyvtkMedicalImageProperties_GetNthWindowLevelPresetComment, 1,
   (char*)"V.GetNthWindowLevelPresetComment(int) -> string\nC++: virtual const char *GetNthWindowLevelPresetComment(int idx)\n\nAdd/Remove/Query the window/level presets that may have been\nassociated to a medical image. Window is also known as 'width',\nlevel is also known as 'center'. The same window/level pair can\nnot be added twice. As a convenience, a comment (aka Explanation)\ncan be associated to a preset. For ex:\n         DICOM Window Center (0028,1050) = 00045\\000470\n         DICOM Window Width  (0028,1051) = 0106\\03412\n         DICOM Window Center Width Explanation (0028,1055) = WINDOW1\\WINDOW2\n \n"},
  {(char*)"GetInstanceUIDFromSliceID", PyvtkMedicalImageProperties_GetInstanceUIDFromSliceID, 1,
   (char*)"V.GetInstanceUIDFromSliceID(int, int) -> string\nC++: const char *GetInstanceUIDFromSliceID(int volumeidx,\n    int sliceid)\n\nMapping from a sliceidx within a volumeidx into a DICOM Instance\nUID Some DICOM reader can populate this structure so that later\non from a slice index in a vtkImageData volume we can backtrack\nand find out which 2d slice it was coming from\n"},
  {(char*)"SetInstanceUIDFromSliceID", PyvtkMedicalImageProperties_SetInstanceUIDFromSliceID, 1,
   (char*)"V.SetInstanceUIDFromSliceID(int, int, string)\nC++: void SetInstanceUIDFromSliceID(int volumeidx, int sliceid,\n    const char *uid)\n\nMapping from a sliceidx within a volumeidx into a DICOM Instance\nUID Some DICOM reader can populate this structure so that later\non from a slice index in a vtkImageData volume we can backtrack\nand find out which 2d slice it was coming from\n"},
  {(char*)"GetSliceIDFromInstanceUID", PyvtkMedicalImageProperties_GetSliceIDFromInstanceUID, 1,
   (char*)"V.GetSliceIDFromInstanceUID(int, string) -> int\nC++: int GetSliceIDFromInstanceUID(int &volumeidx,\n    const char *uid)\n\nProvides the inverse mapping. Returns -1 if a slice for this uid\nis not found.\n"},
  {(char*)"GetOrientationType", PyvtkMedicalImageProperties_GetOrientationType, 1,
   (char*)"V.GetOrientationType(int) -> int\nC++: int GetOrientationType(int volumeidx)\n\n"},
  {(char*)"SetOrientationType", PyvtkMedicalImageProperties_SetOrientationType, 1,
   (char*)"V.SetOrientationType(int, int)\nC++: void SetOrientationType(int volumeidx, int orientation)\n\n"},
  {(char*)"GetStringFromOrientationType", PyvtkMedicalImageProperties_GetStringFromOrientationType, 1,
   (char*)"V.GetStringFromOrientationType(int) -> string\nC++: static const char *GetStringFromOrientationType(\n    unsigned int type)\n\n"},
  {(char*)"DeepCopy", PyvtkMedicalImageProperties_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkMedicalImageProperties)\nC++: virtual void DeepCopy(vtkMedicalImageProperties *p)\n\nCopy the contents of p to this instance.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMedicalImageProperties_StaticNew()
{
  return vtkMedicalImageProperties::New();
}

PyObject *PyVTKClass_vtkMedicalImagePropertiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMedicalImageProperties_StaticNew,
    PyvtkMedicalImageProperties_Methods,
    "vtkMedicalImageProperties", modulename,
    NULL, NULL,
    PyvtkMedicalImageProperties_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"AXIAL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"CORONAL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"SAGITTAL", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkMedicalImageProperties_Doc()
{
  static const char *docstring[] = {
    "vtkMedicalImageProperties - some medical image properties.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkMedicalImageProperties is a helper class that can be used by\nmedical image readers and applications to encapsulate medical\nimage/acquisition properties. Later on, this should probably be\nextended to add any user-defined property.\n\nSee Also:\n\nvtkMedicalImageReader2\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMedicalImageProperties(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMedicalImagePropertiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMedicalImageProperties", o) != 0)
    {
    Py_DECREF(o);
    }

}

