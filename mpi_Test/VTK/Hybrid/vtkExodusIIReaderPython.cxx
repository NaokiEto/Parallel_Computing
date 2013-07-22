// python wrapper for vtkExodusIIReader
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
#include "vtkExodusIIReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExodusIIReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExodusIIReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExodusIIReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExodusIIReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkExodusIIReader_Doc();


static PyObject *
PyvtkExodusIIReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

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
      tempr = op->vtkExodusIIReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

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
      tempr = op->vtkExodusIIReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  vtkExodusIIReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExodusIIReader::NewInstance();
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
PyvtkExodusIIReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExodusIIReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExodusIIReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->CanReadFile(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

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
      tempr = op->vtkExodusIIReader::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetMetadataMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetadataMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMetadataMTime();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetMetadataMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetXMLFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMLFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXMLFileName(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetXMLFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetXMLFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXMLFileName();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetXMLFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStep(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeStep();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetTimeStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetModeShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetModeShape(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetModeShape(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeStepRange();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetTimeStepRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetTimeStepRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTimeStepRange(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetTimeStepRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_SetTimeStepRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStepRange(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetTimeStepRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_SetTimeStepRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkExodusIIReader_SetTimeStepRange_s1(self, args);
    case 1:
      return PyvtkExodusIIReader_SetTimeStepRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTimeStepRange");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_SetGenerateObjectIdCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateObjectIdCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateObjectIdCellArray(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetGenerateObjectIdCellArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGenerateObjectIdCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateObjectIdCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateObjectIdCellArray();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetGenerateObjectIdCellArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateObjectIdCellArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateObjectIdCellArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateObjectIdCellArrayOn();
      }
    else
      {
      op->vtkExodusIIReader::GenerateObjectIdCellArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateObjectIdCellArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateObjectIdCellArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateObjectIdCellArrayOff();
      }
    else
      {
      op->vtkExodusIIReader::GenerateObjectIdCellArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetObjectIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusIIReader::GetObjectIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetGenerateGlobalElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateGlobalElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateGlobalElementIdArray(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetGenerateGlobalElementIdArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGenerateGlobalElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateGlobalElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateGlobalElementIdArray();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetGenerateGlobalElementIdArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateGlobalElementIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalElementIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateGlobalElementIdArrayOn();
      }
    else
      {
      op->vtkExodusIIReader::GenerateGlobalElementIdArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateGlobalElementIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalElementIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateGlobalElementIdArrayOff();
      }
    else
      {
      op->vtkExodusIIReader::GenerateGlobalElementIdArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetGenerateGlobalNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateGlobalNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateGlobalNodeIdArray(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetGenerateGlobalNodeIdArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGenerateGlobalNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateGlobalNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateGlobalNodeIdArray();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetGenerateGlobalNodeIdArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateGlobalNodeIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalNodeIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateGlobalNodeIdArrayOn();
      }
    else
      {
      op->vtkExodusIIReader::GenerateGlobalNodeIdArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateGlobalNodeIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalNodeIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateGlobalNodeIdArrayOff();
      }
    else
      {
      op->vtkExodusIIReader::GenerateGlobalNodeIdArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetGenerateImplicitElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateImplicitElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateImplicitElementIdArray(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetGenerateImplicitElementIdArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGenerateImplicitElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateImplicitElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateImplicitElementIdArray();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetGenerateImplicitElementIdArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateImplicitElementIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateImplicitElementIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateImplicitElementIdArrayOn();
      }
    else
      {
      op->vtkExodusIIReader::GenerateImplicitElementIdArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateImplicitElementIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateImplicitElementIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateImplicitElementIdArrayOff();
      }
    else
      {
      op->vtkExodusIIReader::GenerateImplicitElementIdArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetGenerateImplicitNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateImplicitNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateImplicitNodeIdArray(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetGenerateImplicitNodeIdArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGenerateImplicitNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateImplicitNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateImplicitNodeIdArray();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetGenerateImplicitNodeIdArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateImplicitNodeIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateImplicitNodeIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateImplicitNodeIdArrayOn();
      }
    else
      {
      op->vtkExodusIIReader::GenerateImplicitNodeIdArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateImplicitNodeIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateImplicitNodeIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateImplicitNodeIdArrayOff();
      }
    else
      {
      op->vtkExodusIIReader::GenerateImplicitNodeIdArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetGenerateFileIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFileIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateFileIdArray(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetGenerateFileIdArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGenerateFileIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFileIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateFileIdArray();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetGenerateFileIdArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateFileIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFileIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateFileIdArrayOn();
      }
    else
      {
      op->vtkExodusIIReader::GenerateFileIdArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GenerateFileIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFileIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateFileIdArrayOff();
      }
    else
      {
      op->vtkExodusIIReader::GenerateFileIdArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFileId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileId(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetFileId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFileId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileId();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetFileId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalElementIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalElementIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusIIReader::GetGlobalElementIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPedigreeElementIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPedigreeElementIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusIIReader::GetPedigreeElementIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalElementID_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalElementID");

  vtkDataSet *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
    {
    tempr = vtkExodusIIReader::GetGlobalElementID(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetGlobalElementID_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalElementID");

  vtkDataSet *temp0 = NULL;
  int temp1;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    tempr = vtkExodusIIReader::GetGlobalElementID(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetGlobalElementID(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkExodusIIReader_GetGlobalElementID_s1(self, args);
    case 3:
      return PyvtkExodusIIReader_GetGlobalElementID_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGlobalElementID");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_GetImplicitElementIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetImplicitElementIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusIIReader::GetImplicitElementIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalFaceIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalFaceIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusIIReader::GetGlobalFaceIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPedigreeFaceIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPedigreeFaceIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusIIReader::GetPedigreeFaceIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalFaceID_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalFaceID");

  vtkDataSet *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
    {
    tempr = vtkExodusIIReader::GetGlobalFaceID(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetGlobalFaceID_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalFaceID");

  vtkDataSet *temp0 = NULL;
  int temp1;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    tempr = vtkExodusIIReader::GetGlobalFaceID(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetGlobalFaceID(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkExodusIIReader_GetGlobalFaceID_s1(self, args);
    case 3:
      return PyvtkExodusIIReader_GetGlobalFaceID_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGlobalFaceID");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_GetImplicitFaceIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetImplicitFaceIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusIIReader::GetImplicitFaceIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalEdgeIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalEdgeIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusIIReader::GetGlobalEdgeIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPedigreeEdgeIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPedigreeEdgeIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusIIReader::GetPedigreeEdgeIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalEdgeID_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalEdgeID");

  vtkDataSet *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
    {
    tempr = vtkExodusIIReader::GetGlobalEdgeID(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetGlobalEdgeID_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalEdgeID");

  vtkDataSet *temp0 = NULL;
  int temp1;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    tempr = vtkExodusIIReader::GetGlobalEdgeID(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetGlobalEdgeID(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkExodusIIReader_GetGlobalEdgeID_s1(self, args);
    case 3:
      return PyvtkExodusIIReader_GetGlobalEdgeID_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGlobalEdgeID");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_GetImplicitEdgeIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetImplicitEdgeIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusIIReader::GetImplicitEdgeIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalNodeIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalNodeIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusIIReader::GetGlobalNodeIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPedigreeNodeIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPedigreeNodeIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusIIReader::GetPedigreeNodeIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalNodeID_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalNodeID");

  vtkDataSet *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
    {
    tempr = vtkExodusIIReader::GetGlobalNodeID(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetGlobalNodeID_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalNodeID");

  vtkDataSet *temp0 = NULL;
  int temp1;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    tempr = vtkExodusIIReader::GetGlobalNodeID(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetGlobalNodeID(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkExodusIIReader_GetGlobalNodeID_s1(self, args);
    case 3:
      return PyvtkExodusIIReader_GetGlobalNodeID_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGlobalNodeID");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_GetImplicitNodeIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetImplicitNodeIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusIIReader::GetImplicitNodeIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetApplyDisplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetApplyDisplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetApplyDisplacements(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetApplyDisplacements(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetApplyDisplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetApplyDisplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetApplyDisplacements();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetApplyDisplacements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_ApplyDisplacementsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyDisplacementsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ApplyDisplacementsOn();
      }
    else
      {
      op->vtkExodusIIReader::ApplyDisplacementsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_ApplyDisplacementsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyDisplacementsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ApplyDisplacementsOff();
      }
    else
      {
      op->vtkExodusIIReader::ApplyDisplacementsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetDisplacementMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplacementMagnitude(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetDisplacementMagnitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetDisplacementMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDisplacementMagnitude();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetDisplacementMagnitude();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetHasModeShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasModeShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHasModeShapes(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetHasModeShapes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetHasModeShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasModeShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHasModeShapes();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetHasModeShapes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_HasModeShapesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasModeShapesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HasModeShapesOn();
      }
    else
      {
      op->vtkExodusIIReader::HasModeShapesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_HasModeShapesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasModeShapesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HasModeShapesOff();
      }
    else
      {
      op->vtkExodusIIReader::HasModeShapesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetModeShapeTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeShapeTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetModeShapeTime(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetModeShapeTime(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetModeShapeTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeShapeTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetModeShapeTime();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetModeShapeTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetAnimateModeShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimateModeShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAnimateModeShapes(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetAnimateModeShapes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetAnimateModeShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimateModeShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAnimateModeShapes();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetAnimateModeShapes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_AnimateModeShapesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnimateModeShapesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AnimateModeShapesOn();
      }
    else
      {
      op->vtkExodusIIReader::AnimateModeShapesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_AnimateModeShapesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnimateModeShapesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AnimateModeShapesOff();
      }
    else
      {
      op->vtkExodusIIReader::AnimateModeShapesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetEdgeFieldDecorations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeFieldDecorations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdgeFieldDecorations(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetEdgeFieldDecorations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeFieldDecorations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeFieldDecorations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeFieldDecorations();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetEdgeFieldDecorations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_EdgeFieldDecorationsNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeFieldDecorationsNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeFieldDecorationsNone();
      }
    else
      {
      op->vtkExodusIIReader::EdgeFieldDecorationsNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_EdgeFieldDecorationsGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeFieldDecorationsGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeFieldDecorationsGlyphs();
      }
    else
      {
      op->vtkExodusIIReader::EdgeFieldDecorationsGlyphs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_EdgeFieldDecorationsCornerAveraged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeFieldDecorationsCornerAveraged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgeFieldDecorationsCornerAveraged();
      }
    else
      {
      op->vtkExodusIIReader::EdgeFieldDecorationsCornerAveraged();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFaceFieldDecorations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceFieldDecorations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFaceFieldDecorations(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetFaceFieldDecorations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceFieldDecorations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceFieldDecorations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaceFieldDecorations();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetFaceFieldDecorations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_FaceFieldDecorationsNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FaceFieldDecorationsNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FaceFieldDecorationsNone();
      }
    else
      {
      op->vtkExodusIIReader::FaceFieldDecorationsNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_FaceFieldDecorationsGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FaceFieldDecorationsGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FaceFieldDecorationsGlyphs();
      }
    else
      {
      op->vtkExodusIIReader::FaceFieldDecorationsGlyphs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_FaceFieldDecorationsCornerAveraged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FaceFieldDecorationsCornerAveraged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FaceFieldDecorationsCornerAveraged();
      }
    else
      {
      op->vtkExodusIIReader::FaceFieldDecorationsCornerAveraged();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitle();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimensionality();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetDimensionality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTimeSteps();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfTimeSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfNodesInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodesInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfNodesInFile();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfNodesInFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfEdgesInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgesInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfEdgesInFile();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfEdgesInFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfFacesInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFacesInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFacesInFile();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfFacesInFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfElementsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfElementsInFile();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfElementsInFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectTypeFromName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectTypeFromName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetObjectTypeFromName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetObjectTypeFromName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectTypeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectTypeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetObjectTypeName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetObjectTypeName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfNodes();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfObjects(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfObjects(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfEntriesInObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEntriesInObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfEntriesInObject(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfEntriesInObject(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetObjectId(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetObjectId(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

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
      tempr = op->GetObjectName(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetObjectName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

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
      tempr = op->GetObjectIndex(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetObjectIndex(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetObjectIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetObjectIndex(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetObjectIndex(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_GetObjectIndex_Methods[] = {
  {NULL, PyvtkExodusIIReader_GetObjectIndex_s1, 1,
   (char*)"@iz"},
  {NULL, PyvtkExodusIIReader_GetObjectIndex_s2, 1,
   (char*)"@ii"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIIReader_GetObjectIndex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_GetObjectIndex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetObjectIndex");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_GetObjectStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetObjectStatus(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetObjectStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetObjectStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

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
      tempr = op->GetObjectStatus(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetObjectStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_GetObjectStatus_Methods[] = {
  {NULL, PyvtkExodusIIReader_GetObjectStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkExodusIIReader_GetObjectStatus_s2, 1,
   (char*)"@iz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIIReader_GetObjectStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_GetObjectStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetObjectStatus");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_SetObjectStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObjectStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

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
      op->SetObjectStatus(temp0, temp1, temp2);
      }
    else
      {
      op->vtkExodusIIReader::SetObjectStatus(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_SetObjectStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObjectStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetObjectStatus(temp0, temp1, temp2);
      }
    else
      {
      op->vtkExodusIIReader::SetObjectStatus(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_SetObjectStatus_Methods[] = {
  {NULL, PyvtkExodusIIReader_SetObjectStatus_s1, 1,
   (char*)"@iii"},
  {NULL, PyvtkExodusIIReader_SetObjectStatus_s2, 1,
   (char*)"@izi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIIReader_SetObjectStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_SetObjectStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetObjectStatus");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_GetNumberOfObjectArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfObjectArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfObjectArrays(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfObjectArrays(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

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
      tempr = op->GetObjectArrayName(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetObjectArrayName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectArrayIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectArrayIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

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
      tempr = op->GetObjectArrayIndex(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetObjectArrayIndex(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfObjectArrayComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfObjectArrayComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfObjectArrayComponents(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfObjectArrayComponents(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetObjectArrayStatus(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetObjectArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetObjectArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

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
      tempr = op->GetObjectArrayStatus(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetObjectArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_GetObjectArrayStatus_Methods[] = {
  {NULL, PyvtkExodusIIReader_GetObjectArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkExodusIIReader_GetObjectArrayStatus_s2, 1,
   (char*)"@iz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIIReader_GetObjectArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_GetObjectArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetObjectArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_SetObjectArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObjectArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

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
      op->SetObjectArrayStatus(temp0, temp1, temp2);
      }
    else
      {
      op->vtkExodusIIReader::SetObjectArrayStatus(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_SetObjectArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObjectArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  char *temp1 = NULL;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetObjectArrayStatus(temp0, temp1, temp2);
      }
    else
      {
      op->vtkExodusIIReader::SetObjectArrayStatus(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_SetObjectArrayStatus_Methods[] = {
  {NULL, PyvtkExodusIIReader_SetObjectArrayStatus_s1, 1,
   (char*)"@iii"},
  {NULL, PyvtkExodusIIReader_SetObjectArrayStatus_s2, 1,
   (char*)"@izi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIIReader_SetObjectArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_SetObjectArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetObjectArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_GetNumberOfObjectAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfObjectAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfObjectAttributes(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfObjectAttributes(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->GetObjectAttributeName(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetObjectAttributeName(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectAttributeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectAttributeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  char *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->GetObjectAttributeIndex(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetObjectAttributeIndex(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetObjectAttributeStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectAttributeStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->GetObjectAttributeStatus(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetObjectAttributeStatus(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetObjectAttributeStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectAttributeStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  char *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->GetObjectAttributeStatus(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetObjectAttributeStatus(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_GetObjectAttributeStatus_Methods[] = {
  {NULL, PyvtkExodusIIReader_GetObjectAttributeStatus_s1, 1,
   (char*)"@iii"},
  {NULL, PyvtkExodusIIReader_GetObjectAttributeStatus_s2, 1,
   (char*)"@iiz"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIIReader_GetObjectAttributeStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_GetObjectAttributeStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetObjectAttributeStatus");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_SetObjectAttributeStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObjectAttributeStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetObjectAttributeStatus(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkExodusIIReader::SetObjectAttributeStatus(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_SetObjectAttributeStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObjectAttributeStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  char *temp2 = NULL;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetObjectAttributeStatus(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkExodusIIReader::SetObjectAttributeStatus(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_SetObjectAttributeStatus_Methods[] = {
  {NULL, PyvtkExodusIIReader_SetObjectAttributeStatus_s1, 1,
   (char*)"@iiii"},
  {NULL, PyvtkExodusIIReader_SetObjectAttributeStatus_s2, 1,
   (char*)"@iizi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIIReader_SetObjectAttributeStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_SetObjectAttributeStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetObjectAttributeStatus");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_GetTotalNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTotalNumberOfNodes();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetTotalNumberOfNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetTotalNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTotalNumberOfEdges();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetTotalNumberOfEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetTotalNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTotalNumberOfFaces();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetTotalNumberOfFaces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetTotalNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTotalNumberOfElements();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetTotalNumberOfElements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfPartArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPartArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfPartArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPartArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPartArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetPartArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPartArrayID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPartArrayID(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetPartArrayID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPartBlockInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartBlockInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPartBlockInfo(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetPartBlockInfo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetPartArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPartArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetPartArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_SetPartArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPartArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetPartArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_SetPartArrayStatus_Methods[] = {
  {NULL, PyvtkExodusIIReader_SetPartArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkExodusIIReader_SetPartArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIIReader_SetPartArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_SetPartArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPartArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_GetPartArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPartArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetPartArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetPartArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPartArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetPartArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_GetPartArrayStatus_Methods[] = {
  {NULL, PyvtkExodusIIReader_GetPartArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkExodusIIReader_GetPartArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIIReader_GetPartArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_GetPartArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPartArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_GetNumberOfMaterialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMaterialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfMaterialArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfMaterialArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetMaterialArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaterialArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetMaterialArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetMaterialArrayID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaterialArrayID(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetMaterialArrayID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetMaterialArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaterialArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetMaterialArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_SetMaterialArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaterialArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetMaterialArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_SetMaterialArrayStatus_Methods[] = {
  {NULL, PyvtkExodusIIReader_SetMaterialArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkExodusIIReader_SetMaterialArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIIReader_SetMaterialArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_SetMaterialArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaterialArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_GetMaterialArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaterialArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetMaterialArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetMaterialArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaterialArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetMaterialArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_GetMaterialArrayStatus_Methods[] = {
  {NULL, PyvtkExodusIIReader_GetMaterialArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkExodusIIReader_GetMaterialArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIIReader_GetMaterialArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_GetMaterialArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetMaterialArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_GetNumberOfAssemblyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAssemblyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfAssemblyArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfAssemblyArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetAssemblyArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAssemblyArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetAssemblyArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetAssemblyArrayID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyArrayID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAssemblyArrayID(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetAssemblyArrayID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetAssemblyArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssemblyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAssemblyArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetAssemblyArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_SetAssemblyArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssemblyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAssemblyArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetAssemblyArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_SetAssemblyArrayStatus_Methods[] = {
  {NULL, PyvtkExodusIIReader_SetAssemblyArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkExodusIIReader_SetAssemblyArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIIReader_SetAssemblyArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_SetAssemblyArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAssemblyArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_GetAssemblyArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAssemblyArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetAssemblyArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetAssemblyArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAssemblyArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetAssemblyArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_GetAssemblyArrayStatus_Methods[] = {
  {NULL, PyvtkExodusIIReader_GetAssemblyArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkExodusIIReader_GetAssemblyArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIIReader_GetAssemblyArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_GetAssemblyArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetAssemblyArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_GetNumberOfHierarchyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHierarchyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfHierarchyArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfHierarchyArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetHierarchyArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchyArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHierarchyArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetHierarchyArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetHierarchyArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetHierarchyArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetHierarchyArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_SetHierarchyArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetHierarchyArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetHierarchyArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_SetHierarchyArrayStatus_Methods[] = {
  {NULL, PyvtkExodusIIReader_SetHierarchyArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkExodusIIReader_SetHierarchyArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIIReader_SetHierarchyArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_SetHierarchyArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetHierarchyArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_GetHierarchyArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHierarchyArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetHierarchyArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusIIReader_GetHierarchyArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHierarchyArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetHierarchyArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_GetHierarchyArrayStatus_Methods[] = {
  {NULL, PyvtkExodusIIReader_GetHierarchyArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkExodusIIReader_GetHierarchyArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusIIReader_GetHierarchyArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusIIReader_GetHierarchyArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetHierarchyArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusIIReader_GetDisplayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDisplayType();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetDisplayType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetDisplayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplayType(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetDisplayType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_ExodusModelMetadataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExodusModelMetadataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExodusModelMetadataOn();
      }
    else
      {
      op->vtkExodusIIReader::ExodusModelMetadataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_ExodusModelMetadataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExodusModelMetadataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExodusModelMetadataOff();
      }
    else
      {
      op->vtkExodusIIReader::ExodusModelMetadataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetExodusModelMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExodusModelMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExodusModelMetadata(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetExodusModelMetadata(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetExodusModelMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExodusModelMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExodusModelMetadata();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetExodusModelMetadata();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetExodusModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExodusModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  vtkExodusModel *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExodusModel();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetExodusModel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetPackExodusModelOntoOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPackExodusModelOntoOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPackExodusModelOntoOutput(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetPackExodusModelOntoOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPackExodusModelOntoOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPackExodusModelOntoOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPackExodusModelOntoOutput();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetPackExodusModelOntoOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_PackExodusModelOntoOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PackExodusModelOntoOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PackExodusModelOntoOutputOn();
      }
    else
      {
      op->vtkExodusIIReader::PackExodusModelOntoOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_PackExodusModelOntoOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PackExodusModelOntoOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PackExodusModelOntoOutputOff();
      }
    else
      {
      op->vtkExodusIIReader::PackExodusModelOntoOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_IsValidVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValidVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->IsValidVariable(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusIIReader::IsValidVariable(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetVariableID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVariableID(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetVariableID(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetAllArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetAllArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetAllArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetTimeSeriesData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeSeriesData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  char *temp1 = NULL;
  char *temp2 = NULL;
  vtkFloatArray *temp3 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkFloatArray"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeSeriesData(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetTimeSeriesData(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfEdgeBlockArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgeBlockArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfEdgeBlockArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfEdgeBlockArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeBlockArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeBlockArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeBlockArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetEdgeBlockArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeBlockArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeBlockArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetEdgeBlockArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetEdgeBlockArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetEdgeBlockArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetEdgeBlockArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfFaceBlockArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaceBlockArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFaceBlockArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfFaceBlockArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceBlockArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceBlockArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaceBlockArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetFaceBlockArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceBlockArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaceBlockArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetFaceBlockArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFaceBlockArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFaceBlockArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetFaceBlockArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfElementBlockArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementBlockArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfElementBlockArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfElementBlockArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementBlockArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementBlockArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElementBlockArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetElementBlockArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementBlockArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElementBlockArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetElementBlockArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetElementBlockArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetElementBlockArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetElementBlockArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfGlobalResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGlobalResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfGlobalResultArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfGlobalResultArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGlobalResultArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetGlobalResultArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetGlobalResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGlobalResultArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetGlobalResultArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetGlobalResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGlobalResultArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetGlobalResultArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfPointResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPointResultArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfPointResultArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPointResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointResultArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetPointResultArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetPointResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointResultArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetPointResultArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetPointResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointResultArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetPointResultArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfEdgeResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgeResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfEdgeResultArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfEdgeResultArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeResultArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetEdgeResultArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeResultArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetEdgeResultArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetEdgeResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetEdgeResultArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetEdgeResultArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfFaceResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaceResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFaceResultArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfFaceResultArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaceResultArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetFaceResultArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaceResultArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetFaceResultArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFaceResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFaceResultArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetFaceResultArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfElementResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfElementResultArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfElementResultArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElementResultArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetElementResultArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElementResultArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetElementResultArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetElementResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetElementResultArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetElementResultArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfNodeMapArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeMapArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfNodeMapArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfNodeMapArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNodeMapArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeMapArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNodeMapArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNodeMapArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNodeMapArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeMapArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNodeMapArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNodeMapArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetNodeMapArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeMapArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetNodeMapArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetNodeMapArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfEdgeMapArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgeMapArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfEdgeMapArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfEdgeMapArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeMapArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeMapArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeMapArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetEdgeMapArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeMapArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeMapArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeMapArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetEdgeMapArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetEdgeMapArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeMapArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetEdgeMapArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetEdgeMapArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfFaceMapArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaceMapArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFaceMapArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfFaceMapArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceMapArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMapArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaceMapArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetFaceMapArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceMapArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceMapArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaceMapArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetFaceMapArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFaceMapArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceMapArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFaceMapArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetFaceMapArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfElementMapArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementMapArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfElementMapArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfElementMapArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementMapArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementMapArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElementMapArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetElementMapArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementMapArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementMapArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElementMapArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetElementMapArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetElementMapArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementMapArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetElementMapArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetElementMapArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfNodeSetArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeSetArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfNodeSetArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfNodeSetArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNodeSetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNodeSetArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNodeSetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNodeSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNodeSetArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNodeSetArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetNodeSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetNodeSetArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetNodeSetArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfSideSetArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideSetArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSideSetArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfSideSetArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetSideSetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSideSetArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetSideSetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetSideSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSideSetArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetSideSetArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetSideSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSideSetArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetSideSetArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfEdgeSetArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgeSetArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfEdgeSetArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfEdgeSetArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeSetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeSetArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetEdgeSetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeSetArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetEdgeSetArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetEdgeSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetEdgeSetArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetEdgeSetArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfFaceSetArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaceSetArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFaceSetArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfFaceSetArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceSetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceSetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaceSetArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetFaceSetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaceSetArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetFaceSetArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFaceSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFaceSetArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetFaceSetArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfElementSetArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementSetArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfElementSetArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfElementSetArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementSetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementSetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElementSetArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetElementSetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElementSetArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetElementSetArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetElementSetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetElementSetArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetElementSetArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfNodeSetResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeSetResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfNodeSetResultArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfNodeSetResultArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNodeSetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNodeSetResultArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNodeSetResultArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNodeSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNodeSetResultArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNodeSetResultArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetNodeSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetNodeSetResultArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetNodeSetResultArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfSideSetResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideSetResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSideSetResultArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfSideSetResultArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetSideSetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSideSetResultArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetSideSetResultArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetSideSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSideSetResultArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetSideSetResultArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetSideSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSideSetResultArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetSideSetResultArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfEdgeSetResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgeSetResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfEdgeSetResultArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfEdgeSetResultArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeSetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeSetResultArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetEdgeSetResultArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetEdgeSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgeSetResultArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetEdgeSetResultArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetEdgeSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetEdgeSetResultArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetEdgeSetResultArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfFaceSetResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaceSetResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFaceSetResultArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfFaceSetResultArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceSetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceSetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaceSetResultArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetFaceSetResultArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetFaceSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaceSetResultArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetFaceSetResultArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFaceSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFaceSetResultArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetFaceSetResultArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetNumberOfElementSetResultArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementSetResultArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfElementSetResultArrays();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetNumberOfElementSetResultArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementSetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementSetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElementSetResultArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetElementSetResultArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetElementSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetElementSetResultArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetElementSetResultArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetElementSetResultArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementSetResultArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetElementSetResultArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusIIReader::SetElementSetResultArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFastPathObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFastPathObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFastPathObjectType(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetFastPathObjectType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFastPathIdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFastPathIdType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFastPathIdType(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetFastPathIdType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_SetFastPathObjectId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFastPathObjectId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFastPathObjectId(temp0);
      }
    else
      {
      op->vtkExodusIIReader::SetFastPathObjectId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkExodusIIReader::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_ResetSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetSettings();
      }
    else
      {
      op->vtkExodusIIReader::ResetSettings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_ResetCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetCache();
      }
    else
      {
      op->vtkExodusIIReader::ResetCache();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_UpdateTimeInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTimeInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateTimeInformation();
      }
    else
      {
      op->vtkExodusIIReader::UpdateTimeInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_Dump(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dump");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Dump();
      }
    else
      {
      op->vtkExodusIIReader::Dump();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetSIL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  vtkGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSIL();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetSIL();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetSILUpdateStamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSILUpdateStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSILUpdateStamp();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetSILUpdateStamp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusIIReader_GetProducedFastPathOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProducedFastPathOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusIIReader *op = static_cast<vtkExodusIIReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProducedFastPathOutput();
      }
    else
      {
      tempr = op->vtkExodusIIReader::GetProducedFastPathOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusIIReader_Methods[] = {
  {(char*)"GetClassName", PyvtkExodusIIReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExodusIIReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExodusIIReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExodusIIReader\nC++: vtkExodusIIReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExodusIIReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExodusIIReader\nC++: vtkExodusIIReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CanReadFile", PyvtkExodusIIReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *fname)\n\nDetermine if the file can be readed with this reader.\n"},
  {(char*)"GetMTime", PyvtkExodusIIReader_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nReturn the object's MTime. This is overridden to include the\ntimestamp of its internal class.\n"},
  {(char*)"GetMetadataMTime", PyvtkExodusIIReader_GetMetadataMTime, 1,
   (char*)"V.GetMetadataMTime() -> int\nC++: virtual unsigned long GetMetadataMTime()\n\nReturn the MTime of the internal data structure. This is really\nonly intended for use by vtkPExodusIIReader in order to determine\nif the filename is newer than the metadata.\n"},
  {(char*)"SetFileName", PyvtkExodusIIReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: virtual void SetFileName(const char *fname)\n\nSpecify file name of the Exodus file.\n"},
  {(char*)"GetFileName", PyvtkExodusIIReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of the Exodus file.\n"},
  {(char*)"SetXMLFileName", PyvtkExodusIIReader_SetXMLFileName, 1,
   (char*)"V.SetXMLFileName(string)\nC++: virtual void SetXMLFileName(const char *fname)\n\nSpecify file name of the xml file.\n"},
  {(char*)"GetXMLFileName", PyvtkExodusIIReader_GetXMLFileName, 1,
   (char*)"V.GetXMLFileName() -> string\nC++: char *GetXMLFileName()\n\nSpecify file name of the xml file.\n"},
  {(char*)"SetTimeStep", PyvtkExodusIIReader_SetTimeStep, 1,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(int a)\n\nWhich TimeStep to read.\n"},
  {(char*)"GetTimeStep", PyvtkExodusIIReader_GetTimeStep, 1,
   (char*)"V.GetTimeStep() -> int\nC++: int GetTimeStep()\n\nWhich TimeStep to read.\n"},
  {(char*)"SetModeShape", PyvtkExodusIIReader_SetModeShape, 1,
   (char*)"V.SetModeShape(int)\nC++: void SetModeShape(int val)\n\nConvenience method to set the mode-shape which is same as\nthis->SetTimeStep(val-1);\n"},
  {(char*)"GetTimeStepRange", PyvtkExodusIIReader_GetTimeStepRange, 1,
   (char*)"V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {(char*)"SetTimeStepRange", PyvtkExodusIIReader_SetTimeStepRange, 1,
   (char*)"V.SetTimeStepRange(int, int)\nC++: void SetTimeStepRange(int, int)\nV.SetTimeStepRange((int, int))\nC++: void SetTimeStepRange(int a[2])\n\n"},
  {(char*)"SetGenerateObjectIdCellArray", PyvtkExodusIIReader_SetGenerateObjectIdCellArray, 1,
   (char*)"V.SetGenerateObjectIdCellArray(int)\nC++: virtual void SetGenerateObjectIdCellArray(int g)\n\nExtra cell data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id found in\nthe exodus file. The name of the array is returned by\nGetBlockIdArrayName(). For cells representing elements from an\nExodus element block, this is set to the element block ID. For\ncells representing edges from an Exodus edge block, this is the\nedge block ID. Similarly, ths is the face block ID for cells\nrepresenting faces from an Exodus face block. The same holds for\ncells representing entries of node, edge, face, side, and element\nsets.\n"},
  {(char*)"GetGenerateObjectIdCellArray", PyvtkExodusIIReader_GetGenerateObjectIdCellArray, 1,
   (char*)"V.GetGenerateObjectIdCellArray() -> int\nC++: int GetGenerateObjectIdCellArray()\n\nExtra cell data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id found in\nthe exodus file. The name of the array is returned by\nGetBlockIdArrayName(). For cells representing elements from an\nExodus element block, this is set to the element block ID. For\ncells representing edges from an Exodus edge block, this is the\nedge block ID. Similarly, ths is the face block ID for cells\nrepresenting faces from an Exodus face block. The same holds for\ncells representing entries of node, edge, face, side, and element\nsets.\n"},
  {(char*)"GenerateObjectIdCellArrayOn", PyvtkExodusIIReader_GenerateObjectIdCellArrayOn, 1,
   (char*)"V.GenerateObjectIdCellArrayOn()\nC++: void GenerateObjectIdCellArrayOn()\n\nExtra cell data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id found in\nthe exodus file. The name of the array is returned by\nGetBlockIdArrayName(). For cells representing elements from an\nExodus element block, this is set to the element block ID. For\ncells representing edges from an Exodus edge block, this is the\nedge block ID. Similarly, ths is the face block ID for cells\nrepresenting faces from an Exodus face block. The same holds for\ncells representing entries of node, edge, face, side, and element\nsets.\n"},
  {(char*)"GenerateObjectIdCellArrayOff", PyvtkExodusIIReader_GenerateObjectIdCellArrayOff, 1,
   (char*)"V.GenerateObjectIdCellArrayOff()\nC++: void GenerateObjectIdCellArrayOff()\n\nExtra cell data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id found in\nthe exodus file. The name of the array is returned by\nGetBlockIdArrayName(). For cells representing elements from an\nExodus element block, this is set to the element block ID. For\ncells representing edges from an Exodus edge block, this is the\nedge block ID. Similarly, ths is the face block ID for cells\nrepresenting faces from an Exodus face block. The same holds for\ncells representing entries of node, edge, face, side, and element\nsets.\n"},
  {(char*)"GetObjectIdArrayName", PyvtkExodusIIReader_GetObjectIdArrayName, 1,
   (char*)"V.GetObjectIdArrayName() -> string\nC++: static const char *GetObjectIdArrayName()\n\nExtra cell data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id found in\nthe exodus file. The name of the array is returned by\nGetBlockIdArrayName(). For cells representing elements from an\nExodus element block, this is set to the element block ID. For\ncells representing edges from an Exodus edge block, this is the\nedge block ID. Similarly, ths is the face block ID for cells\nrepresenting faces from an Exodus face block. The same holds for\ncells representing entries of node, edge, face, side, and element\nsets.\n"},
  {(char*)"SetGenerateGlobalElementIdArray", PyvtkExodusIIReader_SetGenerateGlobalElementIdArray, 1,
   (char*)"V.SetGenerateGlobalElementIdArray(int)\nC++: virtual void SetGenerateGlobalElementIdArray(int g)\n\n"},
  {(char*)"GetGenerateGlobalElementIdArray", PyvtkExodusIIReader_GetGenerateGlobalElementIdArray, 1,
   (char*)"V.GetGenerateGlobalElementIdArray() -> int\nC++: int GetGenerateGlobalElementIdArray()\n\n"},
  {(char*)"GenerateGlobalElementIdArrayOn", PyvtkExodusIIReader_GenerateGlobalElementIdArrayOn, 1,
   (char*)"V.GenerateGlobalElementIdArrayOn()\nC++: void GenerateGlobalElementIdArrayOn()\n\n"},
  {(char*)"GenerateGlobalElementIdArrayOff", PyvtkExodusIIReader_GenerateGlobalElementIdArrayOff, 1,
   (char*)"V.GenerateGlobalElementIdArrayOff()\nC++: void GenerateGlobalElementIdArrayOff()\n\n"},
  {(char*)"SetGenerateGlobalNodeIdArray", PyvtkExodusIIReader_SetGenerateGlobalNodeIdArray, 1,
   (char*)"V.SetGenerateGlobalNodeIdArray(int)\nC++: virtual void SetGenerateGlobalNodeIdArray(int g)\n\n"},
  {(char*)"GetGenerateGlobalNodeIdArray", PyvtkExodusIIReader_GetGenerateGlobalNodeIdArray, 1,
   (char*)"V.GetGenerateGlobalNodeIdArray() -> int\nC++: int GetGenerateGlobalNodeIdArray()\n\n"},
  {(char*)"GenerateGlobalNodeIdArrayOn", PyvtkExodusIIReader_GenerateGlobalNodeIdArrayOn, 1,
   (char*)"V.GenerateGlobalNodeIdArrayOn()\nC++: void GenerateGlobalNodeIdArrayOn()\n\n"},
  {(char*)"GenerateGlobalNodeIdArrayOff", PyvtkExodusIIReader_GenerateGlobalNodeIdArrayOff, 1,
   (char*)"V.GenerateGlobalNodeIdArrayOff()\nC++: void GenerateGlobalNodeIdArrayOff()\n\n"},
  {(char*)"SetGenerateImplicitElementIdArray", PyvtkExodusIIReader_SetGenerateImplicitElementIdArray, 1,
   (char*)"V.SetGenerateImplicitElementIdArray(int)\nC++: virtual void SetGenerateImplicitElementIdArray(int g)\n\n"},
  {(char*)"GetGenerateImplicitElementIdArray", PyvtkExodusIIReader_GetGenerateImplicitElementIdArray, 1,
   (char*)"V.GetGenerateImplicitElementIdArray() -> int\nC++: int GetGenerateImplicitElementIdArray()\n\n"},
  {(char*)"GenerateImplicitElementIdArrayOn", PyvtkExodusIIReader_GenerateImplicitElementIdArrayOn, 1,
   (char*)"V.GenerateImplicitElementIdArrayOn()\nC++: void GenerateImplicitElementIdArrayOn()\n\n"},
  {(char*)"GenerateImplicitElementIdArrayOff", PyvtkExodusIIReader_GenerateImplicitElementIdArrayOff, 1,
   (char*)"V.GenerateImplicitElementIdArrayOff()\nC++: void GenerateImplicitElementIdArrayOff()\n\n"},
  {(char*)"SetGenerateImplicitNodeIdArray", PyvtkExodusIIReader_SetGenerateImplicitNodeIdArray, 1,
   (char*)"V.SetGenerateImplicitNodeIdArray(int)\nC++: virtual void SetGenerateImplicitNodeIdArray(int g)\n\n"},
  {(char*)"GetGenerateImplicitNodeIdArray", PyvtkExodusIIReader_GetGenerateImplicitNodeIdArray, 1,
   (char*)"V.GetGenerateImplicitNodeIdArray() -> int\nC++: int GetGenerateImplicitNodeIdArray()\n\n"},
  {(char*)"GenerateImplicitNodeIdArrayOn", PyvtkExodusIIReader_GenerateImplicitNodeIdArrayOn, 1,
   (char*)"V.GenerateImplicitNodeIdArrayOn()\nC++: void GenerateImplicitNodeIdArrayOn()\n\n"},
  {(char*)"GenerateImplicitNodeIdArrayOff", PyvtkExodusIIReader_GenerateImplicitNodeIdArrayOff, 1,
   (char*)"V.GenerateImplicitNodeIdArrayOff()\nC++: void GenerateImplicitNodeIdArrayOff()\n\n"},
  {(char*)"SetGenerateFileIdArray", PyvtkExodusIIReader_SetGenerateFileIdArray, 1,
   (char*)"V.SetGenerateFileIdArray(int)\nC++: virtual void SetGenerateFileIdArray(int f)\n\n"},
  {(char*)"GetGenerateFileIdArray", PyvtkExodusIIReader_GetGenerateFileIdArray, 1,
   (char*)"V.GetGenerateFileIdArray() -> int\nC++: int GetGenerateFileIdArray()\n\n"},
  {(char*)"GenerateFileIdArrayOn", PyvtkExodusIIReader_GenerateFileIdArrayOn, 1,
   (char*)"V.GenerateFileIdArrayOn()\nC++: void GenerateFileIdArrayOn()\n\n"},
  {(char*)"GenerateFileIdArrayOff", PyvtkExodusIIReader_GenerateFileIdArrayOff, 1,
   (char*)"V.GenerateFileIdArrayOff()\nC++: void GenerateFileIdArrayOff()\n\n"},
  {(char*)"SetFileId", PyvtkExodusIIReader_SetFileId, 1,
   (char*)"V.SetFileId(int)\nC++: virtual void SetFileId(int f)\n\n"},
  {(char*)"GetFileId", PyvtkExodusIIReader_GetFileId, 1,
   (char*)"V.GetFileId() -> int\nC++: int GetFileId()\n\n"},
  {(char*)"GetGlobalElementIdArrayName", PyvtkExodusIIReader_GetGlobalElementIdArrayName, 1,
   (char*)"V.GetGlobalElementIdArrayName() -> string\nC++: static const char *GetGlobalElementIdArrayName()\n\n"},
  {(char*)"GetPedigreeElementIdArrayName", PyvtkExodusIIReader_GetPedigreeElementIdArrayName, 1,
   (char*)"V.GetPedigreeElementIdArrayName() -> string\nC++: static const char *GetPedigreeElementIdArrayName()\n\n"},
  {(char*)"GetGlobalElementID", PyvtkExodusIIReader_GetGlobalElementID, 1,
   (char*)"V.GetGlobalElementID(vtkDataSet, int) -> int\nC++: static int GetGlobalElementID(vtkDataSet *data, int localID)\nV.GetGlobalElementID(vtkDataSet, int, int) -> int\nC++: static int GetGlobalElementID(vtkDataSet *data, int localID,\n    int searchType)\n\n"},
  {(char*)"GetImplicitElementIdArrayName", PyvtkExodusIIReader_GetImplicitElementIdArrayName, 1,
   (char*)"V.GetImplicitElementIdArrayName() -> string\nC++: static const char *GetImplicitElementIdArrayName()\n\n"},
  {(char*)"GetGlobalFaceIdArrayName", PyvtkExodusIIReader_GetGlobalFaceIdArrayName, 1,
   (char*)"V.GetGlobalFaceIdArrayName() -> string\nC++: static const char *GetGlobalFaceIdArrayName()\n\n"},
  {(char*)"GetPedigreeFaceIdArrayName", PyvtkExodusIIReader_GetPedigreeFaceIdArrayName, 1,
   (char*)"V.GetPedigreeFaceIdArrayName() -> string\nC++: static const char *GetPedigreeFaceIdArrayName()\n\n"},
  {(char*)"GetGlobalFaceID", PyvtkExodusIIReader_GetGlobalFaceID, 1,
   (char*)"V.GetGlobalFaceID(vtkDataSet, int) -> int\nC++: static int GetGlobalFaceID(vtkDataSet *data, int localID)\nV.GetGlobalFaceID(vtkDataSet, int, int) -> int\nC++: static int GetGlobalFaceID(vtkDataSet *data, int localID,\n    int searchType)\n\n"},
  {(char*)"GetImplicitFaceIdArrayName", PyvtkExodusIIReader_GetImplicitFaceIdArrayName, 1,
   (char*)"V.GetImplicitFaceIdArrayName() -> string\nC++: static const char *GetImplicitFaceIdArrayName()\n\n"},
  {(char*)"GetGlobalEdgeIdArrayName", PyvtkExodusIIReader_GetGlobalEdgeIdArrayName, 1,
   (char*)"V.GetGlobalEdgeIdArrayName() -> string\nC++: static const char *GetGlobalEdgeIdArrayName()\n\n"},
  {(char*)"GetPedigreeEdgeIdArrayName", PyvtkExodusIIReader_GetPedigreeEdgeIdArrayName, 1,
   (char*)"V.GetPedigreeEdgeIdArrayName() -> string\nC++: static const char *GetPedigreeEdgeIdArrayName()\n\n"},
  {(char*)"GetGlobalEdgeID", PyvtkExodusIIReader_GetGlobalEdgeID, 1,
   (char*)"V.GetGlobalEdgeID(vtkDataSet, int) -> int\nC++: static int GetGlobalEdgeID(vtkDataSet *data, int localID)\nV.GetGlobalEdgeID(vtkDataSet, int, int) -> int\nC++: static int GetGlobalEdgeID(vtkDataSet *data, int localID,\n    int searchType)\n\n"},
  {(char*)"GetImplicitEdgeIdArrayName", PyvtkExodusIIReader_GetImplicitEdgeIdArrayName, 1,
   (char*)"V.GetImplicitEdgeIdArrayName() -> string\nC++: static const char *GetImplicitEdgeIdArrayName()\n\n"},
  {(char*)"GetGlobalNodeIdArrayName", PyvtkExodusIIReader_GetGlobalNodeIdArrayName, 1,
   (char*)"V.GetGlobalNodeIdArrayName() -> string\nC++: static const char *GetGlobalNodeIdArrayName()\n\nExtra point data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id of the\nnode. The id is relative to the entire data set. The name of the\narray is returned by GlobalNodeIdArrayName().\n"},
  {(char*)"GetPedigreeNodeIdArrayName", PyvtkExodusIIReader_GetPedigreeNodeIdArrayName, 1,
   (char*)"V.GetPedigreeNodeIdArrayName() -> string\nC++: static const char *GetPedigreeNodeIdArrayName()\n\nExtra point data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id of the\nnode. The id is relative to the entire data set. The name of the\narray is returned by GlobalNodeIdArrayName().\n"},
  {(char*)"GetGlobalNodeID", PyvtkExodusIIReader_GetGlobalNodeID, 1,
   (char*)"V.GetGlobalNodeID(vtkDataSet, int) -> int\nC++: static int GetGlobalNodeID(vtkDataSet *data, int localID)\nV.GetGlobalNodeID(vtkDataSet, int, int) -> int\nC++: static int GetGlobalNodeID(vtkDataSet *data, int localID,\n    int searchType)\n\nExtra point data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id of the\nnode. The id is relative to the entire data set. The name of the\narray is returned by GlobalNodeIdArrayName().\n"},
  {(char*)"GetImplicitNodeIdArrayName", PyvtkExodusIIReader_GetImplicitNodeIdArrayName, 1,
   (char*)"V.GetImplicitNodeIdArrayName() -> string\nC++: static const char *GetImplicitNodeIdArrayName()\n\nExtra point data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id of the\nnode. The id is relative to the entire data set. The name of the\narray is returned by GlobalNodeIdArrayName().\n"},
  {(char*)"SetApplyDisplacements", PyvtkExodusIIReader_SetApplyDisplacements, 1,
   (char*)"V.SetApplyDisplacements(int)\nC++: virtual void SetApplyDisplacements(int d)\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacment vector. If displacements are turned 'off', the\nuser can explicitly add them by applying a warp filter.\n"},
  {(char*)"GetApplyDisplacements", PyvtkExodusIIReader_GetApplyDisplacements, 1,
   (char*)"V.GetApplyDisplacements() -> int\nC++: int GetApplyDisplacements()\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacment vector. If displacements are turned 'off', the\nuser can explicitly add them by applying a warp filter.\n"},
  {(char*)"ApplyDisplacementsOn", PyvtkExodusIIReader_ApplyDisplacementsOn, 1,
   (char*)"V.ApplyDisplacementsOn()\nC++: void ApplyDisplacementsOn()\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacment vector. If displacements are turned 'off', the\nuser can explicitly add them by applying a warp filter.\n"},
  {(char*)"ApplyDisplacementsOff", PyvtkExodusIIReader_ApplyDisplacementsOff, 1,
   (char*)"V.ApplyDisplacementsOff()\nC++: void ApplyDisplacementsOff()\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacment vector. If displacements are turned 'off', the\nuser can explicitly add them by applying a warp filter.\n"},
  {(char*)"SetDisplacementMagnitude", PyvtkExodusIIReader_SetDisplacementMagnitude, 1,
   (char*)"V.SetDisplacementMagnitude(float)\nC++: virtual void SetDisplacementMagnitude(float s)\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacment vector. If displacements are turned 'off', the\nuser can explicitly add them by applying a warp filter.\n"},
  {(char*)"GetDisplacementMagnitude", PyvtkExodusIIReader_GetDisplacementMagnitude, 1,
   (char*)"V.GetDisplacementMagnitude() -> float\nC++: float GetDisplacementMagnitude()\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacment vector. If displacements are turned 'off', the\nuser can explicitly add them by applying a warp filter.\n"},
  {(char*)"SetHasModeShapes", PyvtkExodusIIReader_SetHasModeShapes, 1,
   (char*)"V.SetHasModeShapes(int)\nC++: virtual void SetHasModeShapes(int ms)\n\nSet/Get whether the Exodus sequence number corresponds to time\nsteps or mode shapes. By default, HasModeShapes is false unless\ntwo time values in the Exodus file are identical, in which case\nit is true.\n"},
  {(char*)"GetHasModeShapes", PyvtkExodusIIReader_GetHasModeShapes, 1,
   (char*)"V.GetHasModeShapes() -> int\nC++: int GetHasModeShapes()\n\nSet/Get whether the Exodus sequence number corresponds to time\nsteps or mode shapes. By default, HasModeShapes is false unless\ntwo time values in the Exodus file are identical, in which case\nit is true.\n"},
  {(char*)"HasModeShapesOn", PyvtkExodusIIReader_HasModeShapesOn, 1,
   (char*)"V.HasModeShapesOn()\nC++: void HasModeShapesOn()\n\nSet/Get whether the Exodus sequence number corresponds to time\nsteps or mode shapes. By default, HasModeShapes is false unless\ntwo time values in the Exodus file are identical, in which case\nit is true.\n"},
  {(char*)"HasModeShapesOff", PyvtkExodusIIReader_HasModeShapesOff, 1,
   (char*)"V.HasModeShapesOff()\nC++: void HasModeShapesOff()\n\nSet/Get whether the Exodus sequence number corresponds to time\nsteps or mode shapes. By default, HasModeShapes is false unless\ntwo time values in the Exodus file are identical, in which case\nit is true.\n"},
  {(char*)"SetModeShapeTime", PyvtkExodusIIReader_SetModeShapeTime, 1,
   (char*)"V.SetModeShapeTime(float)\nC++: virtual void SetModeShapeTime(double phase)\n\nSet/Get the time used to animate mode shapes. This is a number\nbetween 0 and 1 that is used to scale the DisplacementMagnitude\nin a sinusoidal pattern. Specifically, the displacement vector\nfor each vertex is scaled by$ \\mathrm{DisplacementMagnitude} cos(\n2\\pi \\mathrm{ModeShapeTime} ) $ before it is added to the vertex\ncoordinates.\n"},
  {(char*)"GetModeShapeTime", PyvtkExodusIIReader_GetModeShapeTime, 1,
   (char*)"V.GetModeShapeTime() -> float\nC++: double GetModeShapeTime()\n\nSet/Get the time used to animate mode shapes. This is a number\nbetween 0 and 1 that is used to scale the DisplacementMagnitude\nin a sinusoidal pattern. Specifically, the displacement vector\nfor each vertex is scaled by$ \\mathrm{DisplacementMagnitude} cos(\n2\\pi \\mathrm{ModeShapeTime} ) $ before it is added to the vertex\ncoordinates.\n"},
  {(char*)"SetAnimateModeShapes", PyvtkExodusIIReader_SetAnimateModeShapes, 1,
   (char*)"V.SetAnimateModeShapes(int)\nC++: virtual void SetAnimateModeShapes(int flag)\n\nIf this flag is on (the default) and HasModeShapes is also on,\nthen this reader will report a continuous time range [0,1] and\nanimate the displacements in a periodic sinusoid.  If this flag\nis off and HasModeShapes is on, this reader ignores time.  This\nflag has no effect if HasModeShapes is off.\n"},
  {(char*)"GetAnimateModeShapes", PyvtkExodusIIReader_GetAnimateModeShapes, 1,
   (char*)"V.GetAnimateModeShapes() -> int\nC++: int GetAnimateModeShapes()\n\nIf this flag is on (the default) and HasModeShapes is also on,\nthen this reader will report a continuous time range [0,1] and\nanimate the displacements in a periodic sinusoid.  If this flag\nis off and HasModeShapes is on, this reader ignores time.  This\nflag has no effect if HasModeShapes is off.\n"},
  {(char*)"AnimateModeShapesOn", PyvtkExodusIIReader_AnimateModeShapesOn, 1,
   (char*)"V.AnimateModeShapesOn()\nC++: void AnimateModeShapesOn()\n\nIf this flag is on (the default) and HasModeShapes is also on,\nthen this reader will report a continuous time range [0,1] and\nanimate the displacements in a periodic sinusoid.  If this flag\nis off and HasModeShapes is on, this reader ignores time.  This\nflag has no effect if HasModeShapes is off.\n"},
  {(char*)"AnimateModeShapesOff", PyvtkExodusIIReader_AnimateModeShapesOff, 1,
   (char*)"V.AnimateModeShapesOff()\nC++: void AnimateModeShapesOff()\n\nIf this flag is on (the default) and HasModeShapes is also on,\nthen this reader will report a continuous time range [0,1] and\nanimate the displacements in a periodic sinusoid.  If this flag\nis off and HasModeShapes is on, this reader ignores time.  This\nflag has no effect if HasModeShapes is off.\n"},
  {(char*)"SetEdgeFieldDecorations", PyvtkExodusIIReader_SetEdgeFieldDecorations, 1,
   (char*)"V.SetEdgeFieldDecorations(int)\nC++: virtual void SetEdgeFieldDecorations(int d)\n\nFIXME\n"},
  {(char*)"GetEdgeFieldDecorations", PyvtkExodusIIReader_GetEdgeFieldDecorations, 1,
   (char*)"V.GetEdgeFieldDecorations() -> int\nC++: int GetEdgeFieldDecorations()\n\nFIXME\n"},
  {(char*)"EdgeFieldDecorationsNone", PyvtkExodusIIReader_EdgeFieldDecorationsNone, 1,
   (char*)"V.EdgeFieldDecorationsNone()\nC++: void EdgeFieldDecorationsNone()\n\nFIXME\n"},
  {(char*)"EdgeFieldDecorationsGlyphs", PyvtkExodusIIReader_EdgeFieldDecorationsGlyphs, 1,
   (char*)"V.EdgeFieldDecorationsGlyphs()\nC++: void EdgeFieldDecorationsGlyphs()\n\nFIXME\n"},
  {(char*)"EdgeFieldDecorationsCornerAveraged", PyvtkExodusIIReader_EdgeFieldDecorationsCornerAveraged, 1,
   (char*)"V.EdgeFieldDecorationsCornerAveraged()\nC++: void EdgeFieldDecorationsCornerAveraged()\n\nFIXME\n"},
  {(char*)"SetFaceFieldDecorations", PyvtkExodusIIReader_SetFaceFieldDecorations, 1,
   (char*)"V.SetFaceFieldDecorations(int)\nC++: virtual void SetFaceFieldDecorations(int d)\n\nFIXME\n"},
  {(char*)"GetFaceFieldDecorations", PyvtkExodusIIReader_GetFaceFieldDecorations, 1,
   (char*)"V.GetFaceFieldDecorations() -> int\nC++: int GetFaceFieldDecorations()\n\nFIXME\n"},
  {(char*)"FaceFieldDecorationsNone", PyvtkExodusIIReader_FaceFieldDecorationsNone, 1,
   (char*)"V.FaceFieldDecorationsNone()\nC++: void FaceFieldDecorationsNone()\n\nFIXME\n"},
  {(char*)"FaceFieldDecorationsGlyphs", PyvtkExodusIIReader_FaceFieldDecorationsGlyphs, 1,
   (char*)"V.FaceFieldDecorationsGlyphs()\nC++: void FaceFieldDecorationsGlyphs()\n\nFIXME\n"},
  {(char*)"FaceFieldDecorationsCornerAveraged", PyvtkExodusIIReader_FaceFieldDecorationsCornerAveraged, 1,
   (char*)"V.FaceFieldDecorationsCornerAveraged()\nC++: void FaceFieldDecorationsCornerAveraged()\n\nFIXME\n"},
  {(char*)"GetTitle", PyvtkExodusIIReader_GetTitle, 1,
   (char*)"V.GetTitle() -> string\nC++: const char *GetTitle()\n\nAccess to meta data generated by UpdateInformation.\n"},
  {(char*)"GetDimensionality", PyvtkExodusIIReader_GetDimensionality, 1,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nAccess to meta data generated by UpdateInformation.\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkExodusIIReader_GetNumberOfTimeSteps, 1,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nAccess to meta data generated by UpdateInformation.\n"},
  {(char*)"GetNumberOfNodesInFile", PyvtkExodusIIReader_GetNumberOfNodesInFile, 1,
   (char*)"V.GetNumberOfNodesInFile() -> int\nC++: int GetNumberOfNodesInFile()\n\n"},
  {(char*)"GetNumberOfEdgesInFile", PyvtkExodusIIReader_GetNumberOfEdgesInFile, 1,
   (char*)"V.GetNumberOfEdgesInFile() -> int\nC++: int GetNumberOfEdgesInFile()\n\n"},
  {(char*)"GetNumberOfFacesInFile", PyvtkExodusIIReader_GetNumberOfFacesInFile, 1,
   (char*)"V.GetNumberOfFacesInFile() -> int\nC++: int GetNumberOfFacesInFile()\n\n"},
  {(char*)"GetNumberOfElementsInFile", PyvtkExodusIIReader_GetNumberOfElementsInFile, 1,
   (char*)"V.GetNumberOfElementsInFile() -> int\nC++: int GetNumberOfElementsInFile()\n\n"},
  {(char*)"GetObjectTypeFromName", PyvtkExodusIIReader_GetObjectTypeFromName, 1,
   (char*)"V.GetObjectTypeFromName(string) -> int\nC++: int GetObjectTypeFromName(const char *name)\n\n"},
  {(char*)"GetObjectTypeName", PyvtkExodusIIReader_GetObjectTypeName, 1,
   (char*)"V.GetObjectTypeName(int) -> string\nC++: const char *GetObjectTypeName(int)\n\n"},
  {(char*)"GetNumberOfNodes", PyvtkExodusIIReader_GetNumberOfNodes, 1,
   (char*)"V.GetNumberOfNodes() -> int\nC++: int GetNumberOfNodes()\n\n"},
  {(char*)"GetNumberOfObjects", PyvtkExodusIIReader_GetNumberOfObjects, 1,
   (char*)"V.GetNumberOfObjects(int) -> int\nC++: int GetNumberOfObjects(int objectType)\n\n"},
  {(char*)"GetNumberOfEntriesInObject", PyvtkExodusIIReader_GetNumberOfEntriesInObject, 1,
   (char*)"V.GetNumberOfEntriesInObject(int, int) -> int\nC++: int GetNumberOfEntriesInObject(int objectType,\n    int objectIndex)\n\n"},
  {(char*)"GetObjectId", PyvtkExodusIIReader_GetObjectId, 1,
   (char*)"V.GetObjectId(int, int) -> int\nC++: int GetObjectId(int objectType, int objectIndex)\n\n"},
  {(char*)"GetObjectName", PyvtkExodusIIReader_GetObjectName, 1,
   (char*)"V.GetObjectName(int, int) -> string\nC++: const char *GetObjectName(int objectType, int objectIndex)\n\n"},
  {(char*)"GetObjectIndex", PyvtkExodusIIReader_GetObjectIndex, 1,
   (char*)"V.GetObjectIndex(int, string) -> int\nC++: int GetObjectIndex(int objectType, const char *objectName)\nV.GetObjectIndex(int, int) -> int\nC++: int GetObjectIndex(int objectType, int id)\n\n"},
  {(char*)"GetObjectStatus", PyvtkExodusIIReader_GetObjectStatus, 1,
   (char*)"V.GetObjectStatus(int, int) -> int\nC++: int GetObjectStatus(int objectType, int objectIndex)\nV.GetObjectStatus(int, string) -> int\nC++: int GetObjectStatus(int objectType, const char *objectName)\n\n"},
  {(char*)"SetObjectStatus", PyvtkExodusIIReader_SetObjectStatus, 1,
   (char*)"V.SetObjectStatus(int, int, int)\nC++: void SetObjectStatus(int objectType, int objectIndex,\n    int status)\nV.SetObjectStatus(int, string, int)\nC++: void SetObjectStatus(int objectType, const char *objectName,\n    int status)\n\n"},
  {(char*)"GetNumberOfObjectArrays", PyvtkExodusIIReader_GetNumberOfObjectArrays, 1,
   (char*)"V.GetNumberOfObjectArrays(int) -> int\nC++: int GetNumberOfObjectArrays(int objectType)\n\n"},
  {(char*)"GetObjectArrayName", PyvtkExodusIIReader_GetObjectArrayName, 1,
   (char*)"V.GetObjectArrayName(int, int) -> string\nC++: const char *GetObjectArrayName(int objectType,\n    int arrayIndex)\n\n"},
  {(char*)"GetObjectArrayIndex", PyvtkExodusIIReader_GetObjectArrayIndex, 1,
   (char*)"V.GetObjectArrayIndex(int, string) -> int\nC++: int GetObjectArrayIndex(int objectType,\n    const char *arrayName)\n\n"},
  {(char*)"GetNumberOfObjectArrayComponents", PyvtkExodusIIReader_GetNumberOfObjectArrayComponents, 1,
   (char*)"V.GetNumberOfObjectArrayComponents(int, int) -> int\nC++: int GetNumberOfObjectArrayComponents(int objectType,\n    int arrayIndex)\n\n"},
  {(char*)"GetObjectArrayStatus", PyvtkExodusIIReader_GetObjectArrayStatus, 1,
   (char*)"V.GetObjectArrayStatus(int, int) -> int\nC++: int GetObjectArrayStatus(int objectType, int arrayIndex)\nV.GetObjectArrayStatus(int, string) -> int\nC++: int GetObjectArrayStatus(int objectType,\n    const char *arrayName)\n\n"},
  {(char*)"SetObjectArrayStatus", PyvtkExodusIIReader_SetObjectArrayStatus, 1,
   (char*)"V.SetObjectArrayStatus(int, int, int)\nC++: void SetObjectArrayStatus(int objectType, int arrayIndex,\n    int status)\nV.SetObjectArrayStatus(int, string, int)\nC++: void SetObjectArrayStatus(int objectType,\n    const char *arrayName, int status)\n\n"},
  {(char*)"GetNumberOfObjectAttributes", PyvtkExodusIIReader_GetNumberOfObjectAttributes, 1,
   (char*)"V.GetNumberOfObjectAttributes(int, int) -> int\nC++: int GetNumberOfObjectAttributes(int objectType,\n    int objectIndex)\n\n"},
  {(char*)"GetObjectAttributeName", PyvtkExodusIIReader_GetObjectAttributeName, 1,
   (char*)"V.GetObjectAttributeName(int, int, int) -> string\nC++: const char *GetObjectAttributeName(int objectType,\n    int objectIndex, int attribIndex)\n\n"},
  {(char*)"GetObjectAttributeIndex", PyvtkExodusIIReader_GetObjectAttributeIndex, 1,
   (char*)"V.GetObjectAttributeIndex(int, int, string) -> int\nC++: int GetObjectAttributeIndex(int objectType, int objectIndex,\n    const char *attribName)\n\n"},
  {(char*)"GetObjectAttributeStatus", PyvtkExodusIIReader_GetObjectAttributeStatus, 1,
   (char*)"V.GetObjectAttributeStatus(int, int, int) -> int\nC++: int GetObjectAttributeStatus(int objectType, int objectIndex,\n     int attribIndex)\nV.GetObjectAttributeStatus(int, int, string) -> int\nC++: int GetObjectAttributeStatus(int objectType, int objectIndex,\n     const char *attribName)\n\n"},
  {(char*)"SetObjectAttributeStatus", PyvtkExodusIIReader_SetObjectAttributeStatus, 1,
   (char*)"V.SetObjectAttributeStatus(int, int, int, int)\nC++: void SetObjectAttributeStatus(int objectType,\n    int objectIndex, int attribIndex, int status)\nV.SetObjectAttributeStatus(int, int, string, int)\nC++: void SetObjectAttributeStatus(int objectType,\n    int objectIndex, const char *attribName, int status)\n\n"},
  {(char*)"GetTotalNumberOfNodes", PyvtkExodusIIReader_GetTotalNumberOfNodes, 1,
   (char*)"V.GetTotalNumberOfNodes() -> int\nC++: virtual vtkIdType GetTotalNumberOfNodes()\n\n"},
  {(char*)"GetTotalNumberOfEdges", PyvtkExodusIIReader_GetTotalNumberOfEdges, 1,
   (char*)"V.GetTotalNumberOfEdges() -> int\nC++: virtual vtkIdType GetTotalNumberOfEdges()\n\n"},
  {(char*)"GetTotalNumberOfFaces", PyvtkExodusIIReader_GetTotalNumberOfFaces, 1,
   (char*)"V.GetTotalNumberOfFaces() -> int\nC++: virtual vtkIdType GetTotalNumberOfFaces()\n\n"},
  {(char*)"GetTotalNumberOfElements", PyvtkExodusIIReader_GetTotalNumberOfElements, 1,
   (char*)"V.GetTotalNumberOfElements() -> int\nC++: virtual vtkIdType GetTotalNumberOfElements()\n\n"},
  {(char*)"GetNumberOfPartArrays", PyvtkExodusIIReader_GetNumberOfPartArrays, 1,
   (char*)"V.GetNumberOfPartArrays() -> int\nC++: int GetNumberOfPartArrays()\n\n"},
  {(char*)"GetPartArrayName", PyvtkExodusIIReader_GetPartArrayName, 1,
   (char*)"V.GetPartArrayName(int) -> string\nC++: const char *GetPartArrayName(int arrayIdx)\n\n"},
  {(char*)"GetPartArrayID", PyvtkExodusIIReader_GetPartArrayID, 1,
   (char*)"V.GetPartArrayID(string) -> int\nC++: int GetPartArrayID(const char *name)\n\n"},
  {(char*)"GetPartBlockInfo", PyvtkExodusIIReader_GetPartBlockInfo, 1,
   (char*)"V.GetPartBlockInfo(int) -> string\nC++: const char *GetPartBlockInfo(int arrayIdx)\n\n"},
  {(char*)"SetPartArrayStatus", PyvtkExodusIIReader_SetPartArrayStatus, 1,
   (char*)"V.SetPartArrayStatus(int, int)\nC++: void SetPartArrayStatus(int index, int flag)\nV.SetPartArrayStatus(string, int)\nC++: void SetPartArrayStatus(const char *, int flag)\n\n"},
  {(char*)"GetPartArrayStatus", PyvtkExodusIIReader_GetPartArrayStatus, 1,
   (char*)"V.GetPartArrayStatus(int) -> int\nC++: int GetPartArrayStatus(int index)\nV.GetPartArrayStatus(string) -> int\nC++: int GetPartArrayStatus(const char *)\n\n"},
  {(char*)"GetNumberOfMaterialArrays", PyvtkExodusIIReader_GetNumberOfMaterialArrays, 1,
   (char*)"V.GetNumberOfMaterialArrays() -> int\nC++: int GetNumberOfMaterialArrays()\n\n"},
  {(char*)"GetMaterialArrayName", PyvtkExodusIIReader_GetMaterialArrayName, 1,
   (char*)"V.GetMaterialArrayName(int) -> string\nC++: const char *GetMaterialArrayName(int arrayIdx)\n\n"},
  {(char*)"GetMaterialArrayID", PyvtkExodusIIReader_GetMaterialArrayID, 1,
   (char*)"V.GetMaterialArrayID(string) -> int\nC++: int GetMaterialArrayID(const char *name)\n\n"},
  {(char*)"SetMaterialArrayStatus", PyvtkExodusIIReader_SetMaterialArrayStatus, 1,
   (char*)"V.SetMaterialArrayStatus(int, int)\nC++: void SetMaterialArrayStatus(int index, int flag)\nV.SetMaterialArrayStatus(string, int)\nC++: void SetMaterialArrayStatus(const char *, int flag)\n\n"},
  {(char*)"GetMaterialArrayStatus", PyvtkExodusIIReader_GetMaterialArrayStatus, 1,
   (char*)"V.GetMaterialArrayStatus(int) -> int\nC++: int GetMaterialArrayStatus(int index)\nV.GetMaterialArrayStatus(string) -> int\nC++: int GetMaterialArrayStatus(const char *)\n\n"},
  {(char*)"GetNumberOfAssemblyArrays", PyvtkExodusIIReader_GetNumberOfAssemblyArrays, 1,
   (char*)"V.GetNumberOfAssemblyArrays() -> int\nC++: int GetNumberOfAssemblyArrays()\n\n"},
  {(char*)"GetAssemblyArrayName", PyvtkExodusIIReader_GetAssemblyArrayName, 1,
   (char*)"V.GetAssemblyArrayName(int) -> string\nC++: const char *GetAssemblyArrayName(int arrayIdx)\n\n"},
  {(char*)"GetAssemblyArrayID", PyvtkExodusIIReader_GetAssemblyArrayID, 1,
   (char*)"V.GetAssemblyArrayID(string) -> int\nC++: int GetAssemblyArrayID(const char *name)\n\n"},
  {(char*)"SetAssemblyArrayStatus", PyvtkExodusIIReader_SetAssemblyArrayStatus, 1,
   (char*)"V.SetAssemblyArrayStatus(int, int)\nC++: void SetAssemblyArrayStatus(int index, int flag)\nV.SetAssemblyArrayStatus(string, int)\nC++: void SetAssemblyArrayStatus(const char *, int flag)\n\n"},
  {(char*)"GetAssemblyArrayStatus", PyvtkExodusIIReader_GetAssemblyArrayStatus, 1,
   (char*)"V.GetAssemblyArrayStatus(int) -> int\nC++: int GetAssemblyArrayStatus(int index)\nV.GetAssemblyArrayStatus(string) -> int\nC++: int GetAssemblyArrayStatus(const char *)\n\n"},
  {(char*)"GetNumberOfHierarchyArrays", PyvtkExodusIIReader_GetNumberOfHierarchyArrays, 1,
   (char*)"V.GetNumberOfHierarchyArrays() -> int\nC++: int GetNumberOfHierarchyArrays()\n\n"},
  {(char*)"GetHierarchyArrayName", PyvtkExodusIIReader_GetHierarchyArrayName, 1,
   (char*)"V.GetHierarchyArrayName(int) -> string\nC++: const char *GetHierarchyArrayName(int arrayIdx)\n\n"},
  {(char*)"SetHierarchyArrayStatus", PyvtkExodusIIReader_SetHierarchyArrayStatus, 1,
   (char*)"V.SetHierarchyArrayStatus(int, int)\nC++: void SetHierarchyArrayStatus(int index, int flag)\nV.SetHierarchyArrayStatus(string, int)\nC++: void SetHierarchyArrayStatus(const char *, int flag)\n\n"},
  {(char*)"GetHierarchyArrayStatus", PyvtkExodusIIReader_GetHierarchyArrayStatus, 1,
   (char*)"V.GetHierarchyArrayStatus(int) -> int\nC++: int GetHierarchyArrayStatus(int index)\nV.GetHierarchyArrayStatus(string) -> int\nC++: int GetHierarchyArrayStatus(const char *)\n\n"},
  {(char*)"GetDisplayType", PyvtkExodusIIReader_GetDisplayType, 1,
   (char*)"V.GetDisplayType() -> int\nC++: int GetDisplayType()\n\n"},
  {(char*)"SetDisplayType", PyvtkExodusIIReader_SetDisplayType, 1,
   (char*)"V.SetDisplayType(int)\nC++: virtual void SetDisplayType(int type)\n\n"},
  {(char*)"ExodusModelMetadataOn", PyvtkExodusIIReader_ExodusModelMetadataOn, 1,
   (char*)"V.ExodusModelMetadataOn()\nC++: void ExodusModelMetadataOn()\n\nThere is a great deal of model information lost when an Exodus II\n  file is read in to a vtkMultiBlockDataSet.  Turn this option ON\n  if you want this metadata to be read in to a vtkExodusModel\nobject.\n  The default is OFF.\n"},
  {(char*)"ExodusModelMetadataOff", PyvtkExodusIIReader_ExodusModelMetadataOff, 1,
   (char*)"V.ExodusModelMetadataOff()\nC++: void ExodusModelMetadataOff()\n\nThere is a great deal of model information lost when an Exodus II\n  file is read in to a vtkMultiBlockDataSet.  Turn this option ON\n  if you want this metadata to be read in to a vtkExodusModel\nobject.\n  The default is OFF.\n"},
  {(char*)"SetExodusModelMetadata", PyvtkExodusIIReader_SetExodusModelMetadata, 1,
   (char*)"V.SetExodusModelMetadata(int)\nC++: void SetExodusModelMetadata(int a)\n\nThere is a great deal of model information lost when an Exodus II\n  file is read in to a vtkMultiBlockDataSet.  Turn this option ON\n  if you want this metadata to be read in to a vtkExodusModel\nobject.\n  The default is OFF.\n"},
  {(char*)"GetExodusModelMetadata", PyvtkExodusIIReader_GetExodusModelMetadata, 1,
   (char*)"V.GetExodusModelMetadata() -> int\nC++: int GetExodusModelMetadata()\n\nThere is a great deal of model information lost when an Exodus II\n  file is read in to a vtkMultiBlockDataSet.  Turn this option ON\n  if you want this metadata to be read in to a vtkExodusModel\nobject.\n  The default is OFF.\n"},
  {(char*)"GetExodusModel", PyvtkExodusIIReader_GetExodusModel, 1,
   (char*)"V.GetExodusModel() -> vtkExodusModel\nC++: vtkExodusModel *GetExodusModel()\n\nReturns the object which encapsulates the model metadata.\n"},
  {(char*)"SetPackExodusModelOntoOutput", PyvtkExodusIIReader_SetPackExodusModelOntoOutput, 1,
   (char*)"V.SetPackExodusModelOntoOutput(int)\nC++: void SetPackExodusModelOntoOutput(int a)\n\nBy default, the ExodusModel metadata (if requested with\n ExodusModelMetadataOn()) is also encoded into field arrays\n and attached to the output unstructured grid.  Set this OFF\n if you don't want this to happen.  (The vtkExodusIIWriter and\n the vtkEnSightWriter can unpack this metadata from the field\n arrays and use it when writing out Exodus or EnSight files.)\n"},
  {(char*)"GetPackExodusModelOntoOutput", PyvtkExodusIIReader_GetPackExodusModelOntoOutput, 1,
   (char*)"V.GetPackExodusModelOntoOutput() -> int\nC++: int GetPackExodusModelOntoOutput()\n\nBy default, the ExodusModel metadata (if requested with\n ExodusModelMetadataOn()) is also encoded into field arrays\n and attached to the output unstructured grid.  Set this OFF\n if you don't want this to happen.  (The vtkExodusIIWriter and\n the vtkEnSightWriter can unpack this metadata from the field\n arrays and use it when writing out Exodus or EnSight files.)\n"},
  {(char*)"PackExodusModelOntoOutputOn", PyvtkExodusIIReader_PackExodusModelOntoOutputOn, 1,
   (char*)"V.PackExodusModelOntoOutputOn()\nC++: void PackExodusModelOntoOutputOn()\n\nBy default, the ExodusModel metadata (if requested with\n ExodusModelMetadataOn()) is also encoded into field arrays\n and attached to the output unstructured grid.  Set this OFF\n if you don't want this to happen.  (The vtkExodusIIWriter and\n the vtkEnSightWriter can unpack this metadata from the field\n arrays and use it when writing out Exodus or EnSight files.)\n"},
  {(char*)"PackExodusModelOntoOutputOff", PyvtkExodusIIReader_PackExodusModelOntoOutputOff, 1,
   (char*)"V.PackExodusModelOntoOutputOff()\nC++: void PackExodusModelOntoOutputOff()\n\nBy default, the ExodusModel metadata (if requested with\n ExodusModelMetadataOn()) is also encoded into field arrays\n and attached to the output unstructured grid.  Set this OFF\n if you don't want this to happen.  (The vtkExodusIIWriter and\n the vtkEnSightWriter can unpack this metadata from the field\n arrays and use it when writing out Exodus or EnSight files.)\n"},
  {(char*)"IsValidVariable", PyvtkExodusIIReader_IsValidVariable, 1,
   (char*)"V.IsValidVariable(string, string) -> int\nC++: int IsValidVariable(const char *type, const char *name)\n\n"},
  {(char*)"GetVariableID", PyvtkExodusIIReader_GetVariableID, 1,
   (char*)"V.GetVariableID(string, string) -> int\nC++: int GetVariableID(const char *type, const char *name)\n\n"},
  {(char*)"SetAllArrayStatus", PyvtkExodusIIReader_SetAllArrayStatus, 1,
   (char*)"V.SetAllArrayStatus(int, int)\nC++: void SetAllArrayStatus(int otype, int status)\n\n"},
  {(char*)"GetTimeSeriesData", PyvtkExodusIIReader_GetTimeSeriesData, 1,
   (char*)"V.GetTimeSeriesData(int, string, string, vtkFloatArray) -> int\nC++: int GetTimeSeriesData(int ID, const char *vName,\n    const char *vType, vtkFloatArray *result)\n\n"},
  {(char*)"GetNumberOfEdgeBlockArrays", PyvtkExodusIIReader_GetNumberOfEdgeBlockArrays, 1,
   (char*)"V.GetNumberOfEdgeBlockArrays() -> int\nC++: int GetNumberOfEdgeBlockArrays()\n\n"},
  {(char*)"GetEdgeBlockArrayName", PyvtkExodusIIReader_GetEdgeBlockArrayName, 1,
   (char*)"V.GetEdgeBlockArrayName(int) -> string\nC++: const char *GetEdgeBlockArrayName(int index)\n\n"},
  {(char*)"GetEdgeBlockArrayStatus", PyvtkExodusIIReader_GetEdgeBlockArrayStatus, 1,
   (char*)"V.GetEdgeBlockArrayStatus(string) -> int\nC++: int GetEdgeBlockArrayStatus(const char *name)\n\n"},
  {(char*)"SetEdgeBlockArrayStatus", PyvtkExodusIIReader_SetEdgeBlockArrayStatus, 1,
   (char*)"V.SetEdgeBlockArrayStatus(string, int)\nC++: void SetEdgeBlockArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfFaceBlockArrays", PyvtkExodusIIReader_GetNumberOfFaceBlockArrays, 1,
   (char*)"V.GetNumberOfFaceBlockArrays() -> int\nC++: int GetNumberOfFaceBlockArrays()\n\n"},
  {(char*)"GetFaceBlockArrayName", PyvtkExodusIIReader_GetFaceBlockArrayName, 1,
   (char*)"V.GetFaceBlockArrayName(int) -> string\nC++: const char *GetFaceBlockArrayName(int index)\n\n"},
  {(char*)"GetFaceBlockArrayStatus", PyvtkExodusIIReader_GetFaceBlockArrayStatus, 1,
   (char*)"V.GetFaceBlockArrayStatus(string) -> int\nC++: int GetFaceBlockArrayStatus(const char *name)\n\n"},
  {(char*)"SetFaceBlockArrayStatus", PyvtkExodusIIReader_SetFaceBlockArrayStatus, 1,
   (char*)"V.SetFaceBlockArrayStatus(string, int)\nC++: void SetFaceBlockArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfElementBlockArrays", PyvtkExodusIIReader_GetNumberOfElementBlockArrays, 1,
   (char*)"V.GetNumberOfElementBlockArrays() -> int\nC++: int GetNumberOfElementBlockArrays()\n\n"},
  {(char*)"GetElementBlockArrayName", PyvtkExodusIIReader_GetElementBlockArrayName, 1,
   (char*)"V.GetElementBlockArrayName(int) -> string\nC++: const char *GetElementBlockArrayName(int index)\n\n"},
  {(char*)"GetElementBlockArrayStatus", PyvtkExodusIIReader_GetElementBlockArrayStatus, 1,
   (char*)"V.GetElementBlockArrayStatus(string) -> int\nC++: int GetElementBlockArrayStatus(const char *name)\n\n"},
  {(char*)"SetElementBlockArrayStatus", PyvtkExodusIIReader_SetElementBlockArrayStatus, 1,
   (char*)"V.SetElementBlockArrayStatus(string, int)\nC++: void SetElementBlockArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfGlobalResultArrays", PyvtkExodusIIReader_GetNumberOfGlobalResultArrays, 1,
   (char*)"V.GetNumberOfGlobalResultArrays() -> int\nC++: int GetNumberOfGlobalResultArrays()\n\n"},
  {(char*)"GetGlobalResultArrayName", PyvtkExodusIIReader_GetGlobalResultArrayName, 1,
   (char*)"V.GetGlobalResultArrayName(int) -> string\nC++: const char *GetGlobalResultArrayName(int index)\n\n"},
  {(char*)"GetGlobalResultArrayStatus", PyvtkExodusIIReader_GetGlobalResultArrayStatus, 1,
   (char*)"V.GetGlobalResultArrayStatus(string) -> int\nC++: int GetGlobalResultArrayStatus(const char *name)\n\n"},
  {(char*)"SetGlobalResultArrayStatus", PyvtkExodusIIReader_SetGlobalResultArrayStatus, 1,
   (char*)"V.SetGlobalResultArrayStatus(string, int)\nC++: void SetGlobalResultArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfPointResultArrays", PyvtkExodusIIReader_GetNumberOfPointResultArrays, 1,
   (char*)"V.GetNumberOfPointResultArrays() -> int\nC++: int GetNumberOfPointResultArrays()\n\n"},
  {(char*)"GetPointResultArrayName", PyvtkExodusIIReader_GetPointResultArrayName, 1,
   (char*)"V.GetPointResultArrayName(int) -> string\nC++: const char *GetPointResultArrayName(int index)\n\n"},
  {(char*)"GetPointResultArrayStatus", PyvtkExodusIIReader_GetPointResultArrayStatus, 1,
   (char*)"V.GetPointResultArrayStatus(string) -> int\nC++: int GetPointResultArrayStatus(const char *name)\n\n"},
  {(char*)"SetPointResultArrayStatus", PyvtkExodusIIReader_SetPointResultArrayStatus, 1,
   (char*)"V.SetPointResultArrayStatus(string, int)\nC++: void SetPointResultArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfEdgeResultArrays", PyvtkExodusIIReader_GetNumberOfEdgeResultArrays, 1,
   (char*)"V.GetNumberOfEdgeResultArrays() -> int\nC++: int GetNumberOfEdgeResultArrays()\n\n"},
  {(char*)"GetEdgeResultArrayName", PyvtkExodusIIReader_GetEdgeResultArrayName, 1,
   (char*)"V.GetEdgeResultArrayName(int) -> string\nC++: const char *GetEdgeResultArrayName(int index)\n\n"},
  {(char*)"GetEdgeResultArrayStatus", PyvtkExodusIIReader_GetEdgeResultArrayStatus, 1,
   (char*)"V.GetEdgeResultArrayStatus(string) -> int\nC++: int GetEdgeResultArrayStatus(const char *name)\n\n"},
  {(char*)"SetEdgeResultArrayStatus", PyvtkExodusIIReader_SetEdgeResultArrayStatus, 1,
   (char*)"V.SetEdgeResultArrayStatus(string, int)\nC++: void SetEdgeResultArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfFaceResultArrays", PyvtkExodusIIReader_GetNumberOfFaceResultArrays, 1,
   (char*)"V.GetNumberOfFaceResultArrays() -> int\nC++: int GetNumberOfFaceResultArrays()\n\n"},
  {(char*)"GetFaceResultArrayName", PyvtkExodusIIReader_GetFaceResultArrayName, 1,
   (char*)"V.GetFaceResultArrayName(int) -> string\nC++: const char *GetFaceResultArrayName(int index)\n\n"},
  {(char*)"GetFaceResultArrayStatus", PyvtkExodusIIReader_GetFaceResultArrayStatus, 1,
   (char*)"V.GetFaceResultArrayStatus(string) -> int\nC++: int GetFaceResultArrayStatus(const char *name)\n\n"},
  {(char*)"SetFaceResultArrayStatus", PyvtkExodusIIReader_SetFaceResultArrayStatus, 1,
   (char*)"V.SetFaceResultArrayStatus(string, int)\nC++: void SetFaceResultArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfElementResultArrays", PyvtkExodusIIReader_GetNumberOfElementResultArrays, 1,
   (char*)"V.GetNumberOfElementResultArrays() -> int\nC++: int GetNumberOfElementResultArrays()\n\n"},
  {(char*)"GetElementResultArrayName", PyvtkExodusIIReader_GetElementResultArrayName, 1,
   (char*)"V.GetElementResultArrayName(int) -> string\nC++: const char *GetElementResultArrayName(int index)\n\n"},
  {(char*)"GetElementResultArrayStatus", PyvtkExodusIIReader_GetElementResultArrayStatus, 1,
   (char*)"V.GetElementResultArrayStatus(string) -> int\nC++: int GetElementResultArrayStatus(const char *name)\n\n"},
  {(char*)"SetElementResultArrayStatus", PyvtkExodusIIReader_SetElementResultArrayStatus, 1,
   (char*)"V.SetElementResultArrayStatus(string, int)\nC++: void SetElementResultArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfNodeMapArrays", PyvtkExodusIIReader_GetNumberOfNodeMapArrays, 1,
   (char*)"V.GetNumberOfNodeMapArrays() -> int\nC++: int GetNumberOfNodeMapArrays()\n\n"},
  {(char*)"GetNodeMapArrayName", PyvtkExodusIIReader_GetNodeMapArrayName, 1,
   (char*)"V.GetNodeMapArrayName(int) -> string\nC++: const char *GetNodeMapArrayName(int index)\n\n"},
  {(char*)"GetNodeMapArrayStatus", PyvtkExodusIIReader_GetNodeMapArrayStatus, 1,
   (char*)"V.GetNodeMapArrayStatus(string) -> int\nC++: int GetNodeMapArrayStatus(const char *name)\n\n"},
  {(char*)"SetNodeMapArrayStatus", PyvtkExodusIIReader_SetNodeMapArrayStatus, 1,
   (char*)"V.SetNodeMapArrayStatus(string, int)\nC++: void SetNodeMapArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfEdgeMapArrays", PyvtkExodusIIReader_GetNumberOfEdgeMapArrays, 1,
   (char*)"V.GetNumberOfEdgeMapArrays() -> int\nC++: int GetNumberOfEdgeMapArrays()\n\n"},
  {(char*)"GetEdgeMapArrayName", PyvtkExodusIIReader_GetEdgeMapArrayName, 1,
   (char*)"V.GetEdgeMapArrayName(int) -> string\nC++: const char *GetEdgeMapArrayName(int index)\n\n"},
  {(char*)"GetEdgeMapArrayStatus", PyvtkExodusIIReader_GetEdgeMapArrayStatus, 1,
   (char*)"V.GetEdgeMapArrayStatus(string) -> int\nC++: int GetEdgeMapArrayStatus(const char *name)\n\n"},
  {(char*)"SetEdgeMapArrayStatus", PyvtkExodusIIReader_SetEdgeMapArrayStatus, 1,
   (char*)"V.SetEdgeMapArrayStatus(string, int)\nC++: void SetEdgeMapArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfFaceMapArrays", PyvtkExodusIIReader_GetNumberOfFaceMapArrays, 1,
   (char*)"V.GetNumberOfFaceMapArrays() -> int\nC++: int GetNumberOfFaceMapArrays()\n\n"},
  {(char*)"GetFaceMapArrayName", PyvtkExodusIIReader_GetFaceMapArrayName, 1,
   (char*)"V.GetFaceMapArrayName(int) -> string\nC++: const char *GetFaceMapArrayName(int index)\n\n"},
  {(char*)"GetFaceMapArrayStatus", PyvtkExodusIIReader_GetFaceMapArrayStatus, 1,
   (char*)"V.GetFaceMapArrayStatus(string) -> int\nC++: int GetFaceMapArrayStatus(const char *name)\n\n"},
  {(char*)"SetFaceMapArrayStatus", PyvtkExodusIIReader_SetFaceMapArrayStatus, 1,
   (char*)"V.SetFaceMapArrayStatus(string, int)\nC++: void SetFaceMapArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfElementMapArrays", PyvtkExodusIIReader_GetNumberOfElementMapArrays, 1,
   (char*)"V.GetNumberOfElementMapArrays() -> int\nC++: int GetNumberOfElementMapArrays()\n\n"},
  {(char*)"GetElementMapArrayName", PyvtkExodusIIReader_GetElementMapArrayName, 1,
   (char*)"V.GetElementMapArrayName(int) -> string\nC++: const char *GetElementMapArrayName(int index)\n\n"},
  {(char*)"GetElementMapArrayStatus", PyvtkExodusIIReader_GetElementMapArrayStatus, 1,
   (char*)"V.GetElementMapArrayStatus(string) -> int\nC++: int GetElementMapArrayStatus(const char *name)\n\n"},
  {(char*)"SetElementMapArrayStatus", PyvtkExodusIIReader_SetElementMapArrayStatus, 1,
   (char*)"V.SetElementMapArrayStatus(string, int)\nC++: void SetElementMapArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfNodeSetArrays", PyvtkExodusIIReader_GetNumberOfNodeSetArrays, 1,
   (char*)"V.GetNumberOfNodeSetArrays() -> int\nC++: int GetNumberOfNodeSetArrays()\n\n"},
  {(char*)"GetNodeSetArrayName", PyvtkExodusIIReader_GetNodeSetArrayName, 1,
   (char*)"V.GetNodeSetArrayName(int) -> string\nC++: const char *GetNodeSetArrayName(int index)\n\n"},
  {(char*)"GetNodeSetArrayStatus", PyvtkExodusIIReader_GetNodeSetArrayStatus, 1,
   (char*)"V.GetNodeSetArrayStatus(string) -> int\nC++: int GetNodeSetArrayStatus(const char *name)\n\n"},
  {(char*)"SetNodeSetArrayStatus", PyvtkExodusIIReader_SetNodeSetArrayStatus, 1,
   (char*)"V.SetNodeSetArrayStatus(string, int)\nC++: void SetNodeSetArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfSideSetArrays", PyvtkExodusIIReader_GetNumberOfSideSetArrays, 1,
   (char*)"V.GetNumberOfSideSetArrays() -> int\nC++: int GetNumberOfSideSetArrays()\n\n"},
  {(char*)"GetSideSetArrayName", PyvtkExodusIIReader_GetSideSetArrayName, 1,
   (char*)"V.GetSideSetArrayName(int) -> string\nC++: const char *GetSideSetArrayName(int index)\n\n"},
  {(char*)"GetSideSetArrayStatus", PyvtkExodusIIReader_GetSideSetArrayStatus, 1,
   (char*)"V.GetSideSetArrayStatus(string) -> int\nC++: int GetSideSetArrayStatus(const char *name)\n\n"},
  {(char*)"SetSideSetArrayStatus", PyvtkExodusIIReader_SetSideSetArrayStatus, 1,
   (char*)"V.SetSideSetArrayStatus(string, int)\nC++: void SetSideSetArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfEdgeSetArrays", PyvtkExodusIIReader_GetNumberOfEdgeSetArrays, 1,
   (char*)"V.GetNumberOfEdgeSetArrays() -> int\nC++: int GetNumberOfEdgeSetArrays()\n\n"},
  {(char*)"GetEdgeSetArrayName", PyvtkExodusIIReader_GetEdgeSetArrayName, 1,
   (char*)"V.GetEdgeSetArrayName(int) -> string\nC++: const char *GetEdgeSetArrayName(int index)\n\n"},
  {(char*)"GetEdgeSetArrayStatus", PyvtkExodusIIReader_GetEdgeSetArrayStatus, 1,
   (char*)"V.GetEdgeSetArrayStatus(string) -> int\nC++: int GetEdgeSetArrayStatus(const char *name)\n\n"},
  {(char*)"SetEdgeSetArrayStatus", PyvtkExodusIIReader_SetEdgeSetArrayStatus, 1,
   (char*)"V.SetEdgeSetArrayStatus(string, int)\nC++: void SetEdgeSetArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfFaceSetArrays", PyvtkExodusIIReader_GetNumberOfFaceSetArrays, 1,
   (char*)"V.GetNumberOfFaceSetArrays() -> int\nC++: int GetNumberOfFaceSetArrays()\n\n"},
  {(char*)"GetFaceSetArrayName", PyvtkExodusIIReader_GetFaceSetArrayName, 1,
   (char*)"V.GetFaceSetArrayName(int) -> string\nC++: const char *GetFaceSetArrayName(int index)\n\n"},
  {(char*)"GetFaceSetArrayStatus", PyvtkExodusIIReader_GetFaceSetArrayStatus, 1,
   (char*)"V.GetFaceSetArrayStatus(string) -> int\nC++: int GetFaceSetArrayStatus(const char *name)\n\n"},
  {(char*)"SetFaceSetArrayStatus", PyvtkExodusIIReader_SetFaceSetArrayStatus, 1,
   (char*)"V.SetFaceSetArrayStatus(string, int)\nC++: void SetFaceSetArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfElementSetArrays", PyvtkExodusIIReader_GetNumberOfElementSetArrays, 1,
   (char*)"V.GetNumberOfElementSetArrays() -> int\nC++: int GetNumberOfElementSetArrays()\n\n"},
  {(char*)"GetElementSetArrayName", PyvtkExodusIIReader_GetElementSetArrayName, 1,
   (char*)"V.GetElementSetArrayName(int) -> string\nC++: const char *GetElementSetArrayName(int index)\n\n"},
  {(char*)"GetElementSetArrayStatus", PyvtkExodusIIReader_GetElementSetArrayStatus, 1,
   (char*)"V.GetElementSetArrayStatus(string) -> int\nC++: int GetElementSetArrayStatus(const char *name)\n\n"},
  {(char*)"SetElementSetArrayStatus", PyvtkExodusIIReader_SetElementSetArrayStatus, 1,
   (char*)"V.SetElementSetArrayStatus(string, int)\nC++: void SetElementSetArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfNodeSetResultArrays", PyvtkExodusIIReader_GetNumberOfNodeSetResultArrays, 1,
   (char*)"V.GetNumberOfNodeSetResultArrays() -> int\nC++: int GetNumberOfNodeSetResultArrays()\n\n"},
  {(char*)"GetNodeSetResultArrayName", PyvtkExodusIIReader_GetNodeSetResultArrayName, 1,
   (char*)"V.GetNodeSetResultArrayName(int) -> string\nC++: const char *GetNodeSetResultArrayName(int index)\n\n"},
  {(char*)"GetNodeSetResultArrayStatus", PyvtkExodusIIReader_GetNodeSetResultArrayStatus, 1,
   (char*)"V.GetNodeSetResultArrayStatus(string) -> int\nC++: int GetNodeSetResultArrayStatus(const char *name)\n\n"},
  {(char*)"SetNodeSetResultArrayStatus", PyvtkExodusIIReader_SetNodeSetResultArrayStatus, 1,
   (char*)"V.SetNodeSetResultArrayStatus(string, int)\nC++: void SetNodeSetResultArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfSideSetResultArrays", PyvtkExodusIIReader_GetNumberOfSideSetResultArrays, 1,
   (char*)"V.GetNumberOfSideSetResultArrays() -> int\nC++: int GetNumberOfSideSetResultArrays()\n\n"},
  {(char*)"GetSideSetResultArrayName", PyvtkExodusIIReader_GetSideSetResultArrayName, 1,
   (char*)"V.GetSideSetResultArrayName(int) -> string\nC++: const char *GetSideSetResultArrayName(int index)\n\n"},
  {(char*)"GetSideSetResultArrayStatus", PyvtkExodusIIReader_GetSideSetResultArrayStatus, 1,
   (char*)"V.GetSideSetResultArrayStatus(string) -> int\nC++: int GetSideSetResultArrayStatus(const char *name)\n\n"},
  {(char*)"SetSideSetResultArrayStatus", PyvtkExodusIIReader_SetSideSetResultArrayStatus, 1,
   (char*)"V.SetSideSetResultArrayStatus(string, int)\nC++: void SetSideSetResultArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfEdgeSetResultArrays", PyvtkExodusIIReader_GetNumberOfEdgeSetResultArrays, 1,
   (char*)"V.GetNumberOfEdgeSetResultArrays() -> int\nC++: int GetNumberOfEdgeSetResultArrays()\n\n"},
  {(char*)"GetEdgeSetResultArrayName", PyvtkExodusIIReader_GetEdgeSetResultArrayName, 1,
   (char*)"V.GetEdgeSetResultArrayName(int) -> string\nC++: const char *GetEdgeSetResultArrayName(int index)\n\n"},
  {(char*)"GetEdgeSetResultArrayStatus", PyvtkExodusIIReader_GetEdgeSetResultArrayStatus, 1,
   (char*)"V.GetEdgeSetResultArrayStatus(string) -> int\nC++: int GetEdgeSetResultArrayStatus(const char *name)\n\n"},
  {(char*)"SetEdgeSetResultArrayStatus", PyvtkExodusIIReader_SetEdgeSetResultArrayStatus, 1,
   (char*)"V.SetEdgeSetResultArrayStatus(string, int)\nC++: void SetEdgeSetResultArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfFaceSetResultArrays", PyvtkExodusIIReader_GetNumberOfFaceSetResultArrays, 1,
   (char*)"V.GetNumberOfFaceSetResultArrays() -> int\nC++: int GetNumberOfFaceSetResultArrays()\n\n"},
  {(char*)"GetFaceSetResultArrayName", PyvtkExodusIIReader_GetFaceSetResultArrayName, 1,
   (char*)"V.GetFaceSetResultArrayName(int) -> string\nC++: const char *GetFaceSetResultArrayName(int index)\n\n"},
  {(char*)"GetFaceSetResultArrayStatus", PyvtkExodusIIReader_GetFaceSetResultArrayStatus, 1,
   (char*)"V.GetFaceSetResultArrayStatus(string) -> int\nC++: int GetFaceSetResultArrayStatus(const char *name)\n\n"},
  {(char*)"SetFaceSetResultArrayStatus", PyvtkExodusIIReader_SetFaceSetResultArrayStatus, 1,
   (char*)"V.SetFaceSetResultArrayStatus(string, int)\nC++: void SetFaceSetResultArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetNumberOfElementSetResultArrays", PyvtkExodusIIReader_GetNumberOfElementSetResultArrays, 1,
   (char*)"V.GetNumberOfElementSetResultArrays() -> int\nC++: int GetNumberOfElementSetResultArrays()\n\n"},
  {(char*)"GetElementSetResultArrayName", PyvtkExodusIIReader_GetElementSetResultArrayName, 1,
   (char*)"V.GetElementSetResultArrayName(int) -> string\nC++: const char *GetElementSetResultArrayName(int index)\n\n"},
  {(char*)"GetElementSetResultArrayStatus", PyvtkExodusIIReader_GetElementSetResultArrayStatus, 1,
   (char*)"V.GetElementSetResultArrayStatus(string) -> int\nC++: int GetElementSetResultArrayStatus(const char *name)\n\n"},
  {(char*)"SetElementSetResultArrayStatus", PyvtkExodusIIReader_SetElementSetResultArrayStatus, 1,
   (char*)"V.SetElementSetResultArrayStatus(string, int)\nC++: void SetElementSetResultArrayStatus(const char *name,\n    int flag)\n\n"},
  {(char*)"SetFastPathObjectType", PyvtkExodusIIReader_SetFastPathObjectType, 1,
   (char*)"V.SetFastPathObjectType(string)\nC++: void SetFastPathObjectType(const char *type)\n\nSet the fast-path keys. All three must be set for the fast-path\noption to work. Possible argument values:\n\"POINT\",\"CELL\",\"EDGE\",\"FACE\"\n"},
  {(char*)"SetFastPathIdType", PyvtkExodusIIReader_SetFastPathIdType, 1,
   (char*)"V.SetFastPathIdType(string)\nC++: void SetFastPathIdType(const char *type)\n\nPossible argument values: \"INDEX\",\"GLOBAL\" \"GLOBAL\" means the id\nrefers to a global id \"INDEX\" means the id refers to an index\ninto the VTK array\n"},
  {(char*)"SetFastPathObjectId", PyvtkExodusIIReader_SetFastPathObjectId, 1,
   (char*)"V.SetFastPathObjectId(int)\nC++: void SetFastPathObjectId(vtkIdType id)\n\nPossible argument values: \"INDEX\",\"GLOBAL\" \"GLOBAL\" means the id\nrefers to a global id \"INDEX\" means the id refers to an index\ninto the VTK array\n"},
  {(char*)"Reset", PyvtkExodusIIReader_Reset, 1,
   (char*)"V.Reset()\nC++: void Reset()\n\nReset the user-specified parameters and flush internal arrays so\nthat the reader state is just as it was after the reader was\ninstantiated.\n\nIt doesn't make sense to let users reset only the internal state;\nboth the settings and the state are changed by this call.\n"},
  {(char*)"ResetSettings", PyvtkExodusIIReader_ResetSettings, 1,
   (char*)"V.ResetSettings()\nC++: void ResetSettings()\n\nReset the user-specified parameters to their default values. The\nonly settings not affected are the filename and/or pattern\nbecause these have no default.\n\nResetting the settings but not the state allows users to keep the\nactive cache but return to initial array selections, etc.\n"},
  {(char*)"ResetCache", PyvtkExodusIIReader_ResetCache, 1,
   (char*)"V.ResetCache()\nC++: void ResetCache()\n\nClears out the cache entries.\n"},
  {(char*)"UpdateTimeInformation", PyvtkExodusIIReader_UpdateTimeInformation, 1,
   (char*)"V.UpdateTimeInformation()\nC++: virtual void UpdateTimeInformation()\n\nRe-reads time information from the exodus file and updates\nTimeStepRange accordingly.\n"},
  {(char*)"Dump", PyvtkExodusIIReader_Dump, 1,
   (char*)"V.Dump()\nC++: virtual void Dump()\n\n"},
  {(char*)"GetSIL", PyvtkExodusIIReader_GetSIL, 1,
   (char*)"V.GetSIL() -> vtkGraph\nC++: vtkGraph *GetSIL()\n\nSIL describes organization of/relationships between\nclassifications eg. blocks/materials/hierarchies.\n"},
  {(char*)"GetSILUpdateStamp", PyvtkExodusIIReader_GetSILUpdateStamp, 1,
   (char*)"V.GetSILUpdateStamp() -> int\nC++: int GetSILUpdateStamp()\n\nEvery time the SIL is updated a this will return a different\nvalue.\n"},
  {(char*)"GetProducedFastPathOutput", PyvtkExodusIIReader_GetProducedFastPathOutput, 1,
   (char*)"V.GetProducedFastPathOutput() -> bool\nC++: bool GetProducedFastPathOutput()\n\nHACK: Used by vtkPExodusIIReader to tell is the reader produced a\nvalid fast path output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExodusIIReader_StaticNew()
{
  return vtkExodusIIReader::New();
}

PyObject *PyVTKClass_vtkExodusIIReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExodusIIReader_StaticNew,
    PyvtkExodusIIReader_Methods,
    "vtkExodusIIReader", modulename,
    NULL, NULL,
    PyvtkExodusIIReader_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"SEARCH_TYPE_ELEMENT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"SEARCH_TYPE_NODE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"SEARCH_TYPE_ELEMENT_THEN_NODE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"SEARCH_TYPE_NODE_THEN_ELEMENT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(-234121312);
    if (o && PyDict_SetItemString(d, (char *)"ID_NOT_FOUND", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"EDGE_BLOCK", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"FACE_BLOCK", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"ELEM_BLOCK", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"NODE_SET", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"EDGE_SET", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(9);
    if (o && PyDict_SetItemString(d, (char *)"FACE_SET", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"SIDE_SET", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(10);
    if (o && PyDict_SetItemString(d, (char *)"ELEM_SET", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"NODE_MAP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(11);
    if (o && PyDict_SetItemString(d, (char *)"EDGE_MAP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(12);
    if (o && PyDict_SetItemString(d, (char *)"FACE_MAP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"ELEM_MAP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(13);
    if (o && PyDict_SetItemString(d, (char *)"GLOBAL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(14);
    if (o && PyDict_SetItemString(d, (char *)"NODAL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(60);
    if (o && PyDict_SetItemString(d, (char *)"ASSEMBLY", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(61);
    if (o && PyDict_SetItemString(d, (char *)"PART", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(62);
    if (o && PyDict_SetItemString(d, (char *)"MATERIAL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(63);
    if (o && PyDict_SetItemString(d, (char *)"HIERARCHY", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(103);
    if (o && PyDict_SetItemString(d, (char *)"QA_RECORDS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(104);
    if (o && PyDict_SetItemString(d, (char *)"INFO_RECORDS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(102);
    if (o && PyDict_SetItemString(d, (char *)"GLOBAL_TEMPORAL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(101);
    if (o && PyDict_SetItemString(d, (char *)"NODAL_TEMPORAL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(100);
    if (o && PyDict_SetItemString(d, (char *)"ELEM_BLOCK_TEMPORAL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(99);
    if (o && PyDict_SetItemString(d, (char *)"GLOBAL_CONN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(98);
    if (o && PyDict_SetItemString(d, (char *)"ELEM_BLOCK_ELEM_CONN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(97);
    if (o && PyDict_SetItemString(d, (char *)"ELEM_BLOCK_FACE_CONN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(96);
    if (o && PyDict_SetItemString(d, (char *)"ELEM_BLOCK_EDGE_CONN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(95);
    if (o && PyDict_SetItemString(d, (char *)"FACE_BLOCK_CONN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(94);
    if (o && PyDict_SetItemString(d, (char *)"EDGE_BLOCK_CONN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(93);
    if (o && PyDict_SetItemString(d, (char *)"ELEM_SET_CONN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(92);
    if (o && PyDict_SetItemString(d, (char *)"SIDE_SET_CONN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(91);
    if (o && PyDict_SetItemString(d, (char *)"FACE_SET_CONN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(90);
    if (o && PyDict_SetItemString(d, (char *)"EDGE_SET_CONN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(89);
    if (o && PyDict_SetItemString(d, (char *)"NODE_SET_CONN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(88);
    if (o && PyDict_SetItemString(d, (char *)"NODAL_COORDS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(87);
    if (o && PyDict_SetItemString(d, (char *)"OBJECT_ID", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(108);
    if (o && PyDict_SetItemString(d, (char *)"IMPLICIT_ELEMENT_ID", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(107);
    if (o && PyDict_SetItemString(d, (char *)"IMPLICIT_NODE_ID", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(86);
    if (o && PyDict_SetItemString(d, (char *)"GLOBAL_ELEMENT_ID", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(85);
    if (o && PyDict_SetItemString(d, (char *)"GLOBAL_NODE_ID", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(84);
    if (o && PyDict_SetItemString(d, (char *)"ELEMENT_ID", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(83);
    if (o && PyDict_SetItemString(d, (char *)"NODE_ID", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(82);
    if (o && PyDict_SetItemString(d, (char *)"NODAL_SQUEEZEMAP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(81);
    if (o && PyDict_SetItemString(d, (char *)"ELEM_BLOCK_ATTRIB", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(80);
    if (o && PyDict_SetItemString(d, (char *)"FACE_BLOCK_ATTRIB", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(79);
    if (o && PyDict_SetItemString(d, (char *)"EDGE_BLOCK_ATTRIB", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(105);
    if (o && PyDict_SetItemString(d, (char *)"FACE_ID", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(106);
    if (o && PyDict_SetItemString(d, (char *)"EDGE_ID", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(109);
    if (o && PyDict_SetItemString(d, (char *)"ENTITY_COUNTS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"NONE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"GLYPHS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"CORNER_AVERAGED", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkExodusIIReader_Doc()
{
  static const char *docstring[] = {
    "vtkExodusIIReader - Read exodus 2 files .ex2\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkExodusIIReader is a unstructured grid source object that reads\nExodusII files.  Most of the meta data associated with the file is\nloaded when UpdateInformation is called.  This includes information\nlike Title, number of blocks, number and names of arrays. This data\ncan be retrieved from methods in this reader. Separate arrays that\nare meant to be a single vector, are combined internally for\ncon",
    "venience.  To be combined, the array names have to be identical\nexcept for a trailing X,Y and Z (or x,y,z).  By default cell and\npoint arrays are not loaded.  However, the user can flag arrays to\nload with the methods \"SetPointArrayStatus\" and \"SetCellArrayStatus\".\n The reader DOES NOT respond to piece requests\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExodusIIReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExodusIIReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExodusIIReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

