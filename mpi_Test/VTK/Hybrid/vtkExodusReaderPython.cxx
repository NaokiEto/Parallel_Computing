// python wrapper for vtkExodusReader
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
#include "vtkExodusReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExodusReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExodusReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExodusReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExodusReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkExodusReader_Doc();


static PyObject *
PyvtkExodusReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  vtkExodusReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExodusReader::NewInstance();
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
PyvtkExodusReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExodusReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExodusReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetXMLFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMLFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetXMLFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetXMLFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetXMLFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetTimeStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetGenerateBlockIdCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateBlockIdCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateBlockIdCellArray(temp0);
      }
    else
      {
      op->vtkExodusReader::SetGenerateBlockIdCellArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetGenerateBlockIdCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateBlockIdCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateBlockIdCellArray();
      }
    else
      {
      tempr = op->vtkExodusReader::GetGenerateBlockIdCellArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GenerateBlockIdCellArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBlockIdCellArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateBlockIdCellArrayOn();
      }
    else
      {
      op->vtkExodusReader::GenerateBlockIdCellArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GenerateBlockIdCellArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBlockIdCellArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateBlockIdCellArrayOff();
      }
    else
      {
      op->vtkExodusReader::GenerateBlockIdCellArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetBlockIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlockIdArrayName();
      }
    else
      {
      tempr = op->vtkExodusReader::GetBlockIdArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetGenerateGlobalElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateGlobalElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetGenerateGlobalElementIdArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetGenerateGlobalElementIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateGlobalElementIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetGenerateGlobalElementIdArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GenerateGlobalElementIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalElementIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateGlobalElementIdArrayOn();
      }
    else
      {
      op->vtkExodusReader::GenerateGlobalElementIdArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GenerateGlobalElementIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalElementIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateGlobalElementIdArrayOff();
      }
    else
      {
      op->vtkExodusReader::GenerateGlobalElementIdArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetGlobalElementIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalElementIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusReader::GetGlobalElementIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetPedigreeElementIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPedigreeElementIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusReader::GetPedigreeElementIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetGlobalElementID_s1(PyObject *, PyObject *args)
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
    tempr = vtkExodusReader::GetGlobalElementID(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_GetGlobalElementID_s2(PyObject *, PyObject *args)
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
    tempr = vtkExodusReader::GetGlobalElementID(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_GetGlobalElementID(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkExodusReader_GetGlobalElementID_s1(self, args);
    case 3:
      return PyvtkExodusReader_GetGlobalElementID_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGlobalElementID");
  return NULL;
}



static PyObject *
PyvtkExodusReader_SetGenerateGlobalNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateGlobalNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetGenerateGlobalNodeIdArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetGenerateGlobalNodeIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateGlobalNodeIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetGenerateGlobalNodeIdArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GenerateGlobalNodeIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalNodeIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateGlobalNodeIdArrayOn();
      }
    else
      {
      op->vtkExodusReader::GenerateGlobalNodeIdArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GenerateGlobalNodeIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGlobalNodeIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateGlobalNodeIdArrayOff();
      }
    else
      {
      op->vtkExodusReader::GenerateGlobalNodeIdArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetGlobalNodeIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalNodeIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusReader::GetGlobalNodeIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetPedigreeNodeIdArrayName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPedigreeNodeIdArrayName");

  const char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExodusReader::GetPedigreeNodeIdArrayName();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetGlobalNodeID_s1(PyObject *, PyObject *args)
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
    tempr = vtkExodusReader::GetGlobalNodeID(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_GetGlobalNodeID_s2(PyObject *, PyObject *args)
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
    tempr = vtkExodusReader::GetGlobalNodeID(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_GetGlobalNodeID(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkExodusReader_GetGlobalNodeID_s1(self, args);
    case 3:
      return PyvtkExodusReader_GetGlobalNodeID_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetGlobalNodeID");
  return NULL;
}



static PyObject *
PyvtkExodusReader_SetApplyDisplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetApplyDisplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetApplyDisplacements(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetApplyDisplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetApplyDisplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetApplyDisplacements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_ApplyDisplacementsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyDisplacementsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ApplyDisplacementsOn();
      }
    else
      {
      op->vtkExodusReader::ApplyDisplacementsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_ApplyDisplacementsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyDisplacementsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ApplyDisplacementsOff();
      }
    else
      {
      op->vtkExodusReader::ApplyDisplacementsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetDisplacementMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetDisplacementMagnitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetDisplacementMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetDisplacementMagnitude();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitle();
      }
    else
      {
      tempr = op->vtkExodusReader::GetTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetDimensionality();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetNumberOfTimeSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfElements();
      }
    else
      {
      tempr = op->vtkExodusReader::GetNumberOfElements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetNumberOfNodeSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfNodeSets();
      }
    else
      {
      tempr = op->vtkExodusReader::GetNumberOfNodeSets();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetNumberOfSideSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSideSets();
      }
    else
      {
      tempr = op->vtkExodusReader::GetNumberOfSideSets();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfBlocks();
      }
    else
      {
      tempr = op->vtkExodusReader::GetNumberOfBlocks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetTimeStepRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetTimeStepRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetTimeStepRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_SetTimeStepRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetTimeStepRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_SetTimeStepRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkExodusReader_SetTimeStepRange_s1(self, args);
    case 1:
      return PyvtkExodusReader_SetTimeStepRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTimeStepRange");
  return NULL;
}



static PyObject *
PyvtkExodusReader_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetNumberOfNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetNumberOfElementsInBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementsInBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfElementsInBlock(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetNumberOfElementsInBlock(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetBlockId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlockId(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetBlockId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetTotalNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTotalNumberOfNodes();
      }
    else
      {
      tempr = op->vtkExodusReader::GetTotalNumberOfNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPointArrays();
      }
    else
      {
      tempr = op->vtkExodusReader::GetNumberOfPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetPointArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetPointArrayID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointArrayID(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetPointArrayID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetPointArrayNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointArrayNumberOfComponents(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetPointArrayNumberOfComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetPointArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_SetPointArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_SetPointArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_SetPointArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkExodusReader_SetPointArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_SetPointArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPointArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusReader_GetPointArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetPointArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_GetPointArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetPointArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_GetPointArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_GetPointArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkExodusReader_GetPointArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_GetPointArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPointArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCellArrays();
      }
    else
      {
      tempr = op->vtkExodusReader::GetNumberOfCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetCellArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetCellArrayID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellArrayID(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetCellArrayID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetCellArrayNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellArrayNumberOfComponents(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetCellArrayNumberOfComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetCellArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCellArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusReader::SetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_SetCellArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCellArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusReader::SetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_SetCellArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_SetCellArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkExodusReader_SetCellArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_SetCellArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCellArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusReader_GetCellArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetCellArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_GetCellArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetCellArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_GetCellArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_GetCellArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkExodusReader_GetCellArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_GetCellArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCellArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusReader_GetTotalNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTotalNumberOfElements();
      }
    else
      {
      tempr = op->vtkExodusReader::GetTotalNumberOfElements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetNumberOfBlockArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlockArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfBlockArrays();
      }
    else
      {
      tempr = op->vtkExodusReader::GetNumberOfBlockArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetBlockArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlockArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetBlockArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetBlockArrayID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockArrayID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlockArrayID(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetBlockArrayID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetBlockArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetBlockArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusReader::SetBlockArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_SetBlockArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetBlockArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkExodusReader::SetBlockArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_SetBlockArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_SetBlockArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkExodusReader_SetBlockArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_SetBlockArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_SetBlockArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBlockArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusReader_GetBlockArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlockArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetBlockArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_GetBlockArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlockArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetBlockArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_GetBlockArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_GetBlockArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkExodusReader_GetBlockArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_GetBlockArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_GetBlockArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBlockArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusReader_GetNumberOfNodeSetArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeSetArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetNumberOfNodeSetArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetNodeSetArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
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
      tempr = op->vtkExodusReader::GetNodeSetArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_GetNodeSetArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetNodeSetArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_GetNodeSetArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_GetNodeSetArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkExodusReader_GetNodeSetArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_GetNodeSetArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_GetNodeSetArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNodeSetArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusReader_SetNodeSetArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
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
      op->vtkExodusReader::SetNodeSetArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_SetNodeSetArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetNodeSetArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_SetNodeSetArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_SetNodeSetArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkExodusReader_SetNodeSetArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_SetNodeSetArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_SetNodeSetArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNodeSetArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusReader_GetNodeSetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetNodeSetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetNumberOfSideSetArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideSetArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetNumberOfSideSetArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetSideSetArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
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
      tempr = op->vtkExodusReader::GetSideSetArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_GetSideSetArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetSideSetArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_GetSideSetArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_GetSideSetArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkExodusReader_GetSideSetArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_GetSideSetArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_GetSideSetArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSideSetArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusReader_SetSideSetArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
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
      op->vtkExodusReader::SetSideSetArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_SetSideSetArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetSideSetArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_SetSideSetArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_SetSideSetArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkExodusReader_SetSideSetArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_SetSideSetArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_SetSideSetArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSideSetArrayStatus");
  return NULL;
}



static PyObject *
PyvtkExodusReader_GetSideSetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetSideSetArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetNumberOfPartArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetNumberOfPartArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetPartArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetPartArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetPartArrayID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetPartArrayID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetPartBlockInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartBlockInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetPartBlockInfo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetPartArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetPartArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_SetPartArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetPartArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_SetPartArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_SetPartArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkExodusReader_SetPartArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_SetPartArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_SetPartArrayStatus_Methods;
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
PyvtkExodusReader_GetPartArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetPartArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_GetPartArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetPartArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_GetPartArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_GetPartArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkExodusReader_GetPartArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_GetPartArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_GetPartArrayStatus_Methods;
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
PyvtkExodusReader_GetNumberOfMaterialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMaterialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetNumberOfMaterialArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetMaterialArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetMaterialArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetMaterialArrayID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetMaterialArrayID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetMaterialArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetMaterialArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_SetMaterialArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetMaterialArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_SetMaterialArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_SetMaterialArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkExodusReader_SetMaterialArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_SetMaterialArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_SetMaterialArrayStatus_Methods;
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
PyvtkExodusReader_GetMaterialArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetMaterialArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_GetMaterialArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetMaterialArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_GetMaterialArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_GetMaterialArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkExodusReader_GetMaterialArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_GetMaterialArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_GetMaterialArrayStatus_Methods;
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
PyvtkExodusReader_GetNumberOfAssemblyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAssemblyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetNumberOfAssemblyArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetAssemblyArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetAssemblyArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetAssemblyArrayID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyArrayID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetAssemblyArrayID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetAssemblyArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssemblyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetAssemblyArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_SetAssemblyArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssemblyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetAssemblyArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_SetAssemblyArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_SetAssemblyArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkExodusReader_SetAssemblyArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_SetAssemblyArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_SetAssemblyArrayStatus_Methods;
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
PyvtkExodusReader_GetAssemblyArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetAssemblyArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_GetAssemblyArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetAssemblyArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_GetAssemblyArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_GetAssemblyArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkExodusReader_GetAssemblyArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_GetAssemblyArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_GetAssemblyArrayStatus_Methods;
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
PyvtkExodusReader_GetNumberOfHierarchyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHierarchyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetNumberOfHierarchyArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetHierarchyArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchyArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetHierarchyArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetHierarchyArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetHierarchyArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_SetHierarchyArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetHierarchyArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_SetHierarchyArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_SetHierarchyArrayStatus_s1, 1,
   (char*)"@ii"},
  {NULL, PyvtkExodusReader_SetHierarchyArrayStatus_s2, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_SetHierarchyArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_SetHierarchyArrayStatus_Methods;
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
PyvtkExodusReader_GetHierarchyArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetHierarchyArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExodusReader_GetHierarchyArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetHierarchyArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_GetHierarchyArrayStatus_Methods[] = {
  {NULL, PyvtkExodusReader_GetHierarchyArrayStatus_s1, 1,
   (char*)"@i"},
  {NULL, PyvtkExodusReader_GetHierarchyArrayStatus_s2, 1,
   (char*)"@z"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkExodusReader_GetHierarchyArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExodusReader_GetHierarchyArrayStatus_Methods;
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
PyvtkExodusReader_GetHasModeShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasModeShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetHasModeShapes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetHasModeShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasModeShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetHasModeShapes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_HasModeShapesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasModeShapesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HasModeShapesOn();
      }
    else
      {
      op->vtkExodusReader::HasModeShapesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_HasModeShapesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasModeShapesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HasModeShapesOff();
      }
    else
      {
      op->vtkExodusReader::HasModeShapesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetDisplayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetDisplayType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetDisplayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetDisplayType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_ExodusModelMetadataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExodusModelMetadataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExodusModelMetadataOn();
      }
    else
      {
      op->vtkExodusReader::ExodusModelMetadataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_ExodusModelMetadataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExodusModelMetadataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExodusModelMetadataOff();
      }
    else
      {
      op->vtkExodusReader::ExodusModelMetadataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetExodusModelMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExodusModelMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetExodusModelMetadata(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetExodusModelMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExodusModelMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetExodusModelMetadata();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetExodusModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExodusModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetExodusModel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetPackExodusModelOntoOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPackExodusModelOntoOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      op->vtkExodusReader::SetPackExodusModelOntoOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetPackExodusModelOntoOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPackExodusModelOntoOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetPackExodusModelOntoOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_PackExodusModelOntoOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PackExodusModelOntoOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PackExodusModelOntoOutputOn();
      }
    else
      {
      op->vtkExodusReader::PackExodusModelOntoOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_PackExodusModelOntoOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PackExodusModelOntoOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PackExodusModelOntoOutputOff();
      }
    else
      {
      op->vtkExodusReader::PackExodusModelOntoOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_IsValidVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValidVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::IsValidVariable(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetVariableID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetVariableID(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetAllAssemblyArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllAssemblyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllAssemblyArrayStatus(temp0);
      }
    else
      {
      op->vtkExodusReader::SetAllAssemblyArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetAllBlockArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllBlockArrayStatus(temp0);
      }
    else
      {
      op->vtkExodusReader::SetAllBlockArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetAllCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllCellArrayStatus(temp0);
      }
    else
      {
      op->vtkExodusReader::SetAllCellArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetAllHierarchyArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllHierarchyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllHierarchyArrayStatus(temp0);
      }
    else
      {
      op->vtkExodusReader::SetAllHierarchyArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetAllMaterialArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllMaterialArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllMaterialArrayStatus(temp0);
      }
    else
      {
      op->vtkExodusReader::SetAllMaterialArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetAllPartArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllPartArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllPartArrayStatus(temp0);
      }
    else
      {
      op->vtkExodusReader::SetAllPartArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetAllPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllPointArrayStatus(temp0);
      }
    else
      {
      op->vtkExodusReader::SetAllPointArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_SetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  char *temp0 = NULL;
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
      op->SetArrayStatus(temp0, temp1, temp2);
      }
    else
      {
      op->vtkExodusReader::SetArrayStatus(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->GetArrayStatus(temp0, temp1);
      }
    else
      {
      tempr = op->vtkExodusReader::GetArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_StringsEqual(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StringsEqual");

  char *temp0 = NULL;
  char *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    tempr = vtkExodusReader::StringsEqual(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_StringUppercase(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StringUppercase");

  char *temp0 = NULL;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    vtkExodusReader::StringUppercase(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_StrDupWithNew(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "StrDupWithNew");

  char *temp0 = NULL;
  char *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkExodusReader::StrDupWithNew(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetTimeSeriesData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeSeriesData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

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
      tempr = op->vtkExodusReader::GetTimeSeriesData(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetNumberOfVariableArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariableArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVariableArrays();
      }
    else
      {
      tempr = op->vtkExodusReader::GetNumberOfVariableArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetVariableArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVariableArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExodusReader::GetVariableArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_EnableDSPFiltering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableDSPFiltering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableDSPFiltering();
      }
    else
      {
      op->vtkExodusReader::EnableDSPFiltering();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_AddFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  vtkDSPFilterDefinition *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDSPFilterDefinition"))
    {
    if (ap.IsBound())
      {
      op->AddFilter(temp0);
      }
    else
      {
      op->vtkExodusReader::AddFilter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_StartAddingFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartAddingFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartAddingFilter();
      }
    else
      {
      op->vtkExodusReader::StartAddingFilter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_AddFilterInputVar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFilterInputVar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddFilterInputVar(temp0);
      }
    else
      {
      op->vtkExodusReader::AddFilterInputVar(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_AddFilterOutputVar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFilterOutputVar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddFilterOutputVar(temp0);
      }
    else
      {
      op->vtkExodusReader::AddFilterOutputVar(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_AddFilterNumeratorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFilterNumeratorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddFilterNumeratorWeight(temp0);
      }
    else
      {
      op->vtkExodusReader::AddFilterNumeratorWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_AddFilterForwardNumeratorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFilterForwardNumeratorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddFilterForwardNumeratorWeight(temp0);
      }
    else
      {
      op->vtkExodusReader::AddFilterForwardNumeratorWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_AddFilterDenominatorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFilterDenominatorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddFilterDenominatorWeight(temp0);
      }
    else
      {
      op->vtkExodusReader::AddFilterDenominatorWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_FinishAddingFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FinishAddingFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FinishAddingFilter();
      }
    else
      {
      op->vtkExodusReader::FinishAddingFilter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_RemoveFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveFilter(temp0);
      }
    else
      {
      op->vtkExodusReader::RemoveFilter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExodusReader_GetDSPOutputArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDSPOutputArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExodusReader *op = static_cast<vtkExodusReader *>(vp);

  int temp0;
  vtkUnstructuredGrid *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnstructuredGrid"))
    {
    if (ap.IsBound())
      {
      op->GetDSPOutputArrays(temp0, temp1);
      }
    else
      {
      op->vtkExodusReader::GetDSPOutputArrays(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExodusReader_Methods[] = {
  {(char*)"GetClassName", PyvtkExodusReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExodusReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExodusReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExodusReader\nC++: vtkExodusReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExodusReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExodusReader\nC++: vtkExodusReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CanReadFile", PyvtkExodusReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *fname)\n\nDetermine if the file can be readed with this reader.\n"},
  {(char*)"SetFileName", PyvtkExodusReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of the Exodus file.\n"},
  {(char*)"GetFileName", PyvtkExodusReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of the Exodus file.\n"},
  {(char*)"SetXMLFileName", PyvtkExodusReader_SetXMLFileName, 1,
   (char*)"V.SetXMLFileName(string)\nC++: void SetXMLFileName(char *)\n\nSpecify file name of the xml file.\n"},
  {(char*)"GetXMLFileName", PyvtkExodusReader_GetXMLFileName, 1,
   (char*)"V.GetXMLFileName() -> string\nC++: char *GetXMLFileName()\n\nSpecify file name of the xml file.\n"},
  {(char*)"SetTimeStep", PyvtkExodusReader_SetTimeStep, 1,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(int a)\n\nWhich TimeStep to read.\n"},
  {(char*)"GetTimeStep", PyvtkExodusReader_GetTimeStep, 1,
   (char*)"V.GetTimeStep() -> int\nC++: int GetTimeStep()\n\nWhich TimeStep to read.\n"},
  {(char*)"SetGenerateBlockIdCellArray", PyvtkExodusReader_SetGenerateBlockIdCellArray, 1,
   (char*)"V.SetGenerateBlockIdCellArray(int)\nC++: void SetGenerateBlockIdCellArray(int a)\n\nExtra cell data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id found in\nthe exodus file. The name of the array is returned by\nGetBlockIdArrayName()\n"},
  {(char*)"GetGenerateBlockIdCellArray", PyvtkExodusReader_GetGenerateBlockIdCellArray, 1,
   (char*)"V.GetGenerateBlockIdCellArray() -> int\nC++: int GetGenerateBlockIdCellArray()\n\nExtra cell data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id found in\nthe exodus file. The name of the array is returned by\nGetBlockIdArrayName()\n"},
  {(char*)"GenerateBlockIdCellArrayOn", PyvtkExodusReader_GenerateBlockIdCellArrayOn, 1,
   (char*)"V.GenerateBlockIdCellArrayOn()\nC++: void GenerateBlockIdCellArrayOn()\n\nExtra cell data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id found in\nthe exodus file. The name of the array is returned by\nGetBlockIdArrayName()\n"},
  {(char*)"GenerateBlockIdCellArrayOff", PyvtkExodusReader_GenerateBlockIdCellArrayOff, 1,
   (char*)"V.GenerateBlockIdCellArrayOff()\nC++: void GenerateBlockIdCellArrayOff()\n\nExtra cell data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id found in\nthe exodus file. The name of the array is returned by\nGetBlockIdArrayName()\n"},
  {(char*)"GetBlockIdArrayName", PyvtkExodusReader_GetBlockIdArrayName, 1,
   (char*)"V.GetBlockIdArrayName() -> string\nC++: const char *GetBlockIdArrayName()\n\nExtra cell data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id found in\nthe exodus file. The name of the array is returned by\nGetBlockIdArrayName()\n"},
  {(char*)"SetGenerateGlobalElementIdArray", PyvtkExodusReader_SetGenerateGlobalElementIdArray, 1,
   (char*)"V.SetGenerateGlobalElementIdArray(int)\nC++: void SetGenerateGlobalElementIdArray(int a)\n\nExtra cell data array that can be generated.  By default, this\narray is off.  The value of the array is the integer global id of\nthe cell. The name of the array is returned by\nGetGlobalElementIdArrayName()\n"},
  {(char*)"GetGenerateGlobalElementIdArray", PyvtkExodusReader_GetGenerateGlobalElementIdArray, 1,
   (char*)"V.GetGenerateGlobalElementIdArray() -> int\nC++: int GetGenerateGlobalElementIdArray()\n\nExtra cell data array that can be generated.  By default, this\narray is off.  The value of the array is the integer global id of\nthe cell. The name of the array is returned by\nGetGlobalElementIdArrayName()\n"},
  {(char*)"GenerateGlobalElementIdArrayOn", PyvtkExodusReader_GenerateGlobalElementIdArrayOn, 1,
   (char*)"V.GenerateGlobalElementIdArrayOn()\nC++: void GenerateGlobalElementIdArrayOn()\n\nExtra cell data array that can be generated.  By default, this\narray is off.  The value of the array is the integer global id of\nthe cell. The name of the array is returned by\nGetGlobalElementIdArrayName()\n"},
  {(char*)"GenerateGlobalElementIdArrayOff", PyvtkExodusReader_GenerateGlobalElementIdArrayOff, 1,
   (char*)"V.GenerateGlobalElementIdArrayOff()\nC++: void GenerateGlobalElementIdArrayOff()\n\nExtra cell data array that can be generated.  By default, this\narray is off.  The value of the array is the integer global id of\nthe cell. The name of the array is returned by\nGetGlobalElementIdArrayName()\n"},
  {(char*)"GetGlobalElementIdArrayName", PyvtkExodusReader_GetGlobalElementIdArrayName, 1,
   (char*)"V.GetGlobalElementIdArrayName() -> string\nC++: static const char *GetGlobalElementIdArrayName()\n\nExtra cell data array that can be generated.  By default, this\narray is off.  The value of the array is the integer global id of\nthe cell. The name of the array is returned by\nGetGlobalElementIdArrayName()\n"},
  {(char*)"GetPedigreeElementIdArrayName", PyvtkExodusReader_GetPedigreeElementIdArrayName, 1,
   (char*)"V.GetPedigreeElementIdArrayName() -> string\nC++: static const char *GetPedigreeElementIdArrayName()\n\nExtra cell data array that can be generated.  By default, this\narray is off.  The value of the array is the integer global id of\nthe cell. The name of the array is returned by\nGetGlobalElementIdArrayName()\n"},
  {(char*)"GetGlobalElementID", PyvtkExodusReader_GetGlobalElementID, 1,
   (char*)"V.GetGlobalElementID(vtkDataSet, int) -> int\nC++: static int GetGlobalElementID(vtkDataSet *data, int localID)\nV.GetGlobalElementID(vtkDataSet, int, int) -> int\nC++: static int GetGlobalElementID(vtkDataSet *data, int localID,\n    int searchType)\n\nExtra cell data array that can be generated.  By default, this\narray is off.  The value of the array is the integer global id of\nthe cell. The name of the array is returned by\nGetGlobalElementIdArrayName()\n"},
  {(char*)"SetGenerateGlobalNodeIdArray", PyvtkExodusReader_SetGenerateGlobalNodeIdArray, 1,
   (char*)"V.SetGenerateGlobalNodeIdArray(int)\nC++: void SetGenerateGlobalNodeIdArray(int a)\n\nExtra point data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id of the\nnode. The id is relative to the entire data set. The name of the\narray is returned by GlobalNodeIdArrayName().\n"},
  {(char*)"GetGenerateGlobalNodeIdArray", PyvtkExodusReader_GetGenerateGlobalNodeIdArray, 1,
   (char*)"V.GetGenerateGlobalNodeIdArray() -> int\nC++: int GetGenerateGlobalNodeIdArray()\n\nExtra point data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id of the\nnode. The id is relative to the entire data set. The name of the\narray is returned by GlobalNodeIdArrayName().\n"},
  {(char*)"GenerateGlobalNodeIdArrayOn", PyvtkExodusReader_GenerateGlobalNodeIdArrayOn, 1,
   (char*)"V.GenerateGlobalNodeIdArrayOn()\nC++: void GenerateGlobalNodeIdArrayOn()\n\nExtra point data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id of the\nnode. The id is relative to the entire data set. The name of the\narray is returned by GlobalNodeIdArrayName().\n"},
  {(char*)"GenerateGlobalNodeIdArrayOff", PyvtkExodusReader_GenerateGlobalNodeIdArrayOff, 1,
   (char*)"V.GenerateGlobalNodeIdArrayOff()\nC++: void GenerateGlobalNodeIdArrayOff()\n\nExtra point data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id of the\nnode. The id is relative to the entire data set. The name of the\narray is returned by GlobalNodeIdArrayName().\n"},
  {(char*)"GetGlobalNodeIdArrayName", PyvtkExodusReader_GetGlobalNodeIdArrayName, 1,
   (char*)"V.GetGlobalNodeIdArrayName() -> string\nC++: static const char *GetGlobalNodeIdArrayName()\n\nExtra point data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id of the\nnode. The id is relative to the entire data set. The name of the\narray is returned by GlobalNodeIdArrayName().\n"},
  {(char*)"GetPedigreeNodeIdArrayName", PyvtkExodusReader_GetPedigreeNodeIdArrayName, 1,
   (char*)"V.GetPedigreeNodeIdArrayName() -> string\nC++: static const char *GetPedigreeNodeIdArrayName()\n\nExtra point data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id of the\nnode. The id is relative to the entire data set. The name of the\narray is returned by GlobalNodeIdArrayName().\n"},
  {(char*)"GetGlobalNodeID", PyvtkExodusReader_GetGlobalNodeID, 1,
   (char*)"V.GetGlobalNodeID(vtkDataSet, int) -> int\nC++: static int GetGlobalNodeID(vtkDataSet *data, int localID)\nV.GetGlobalNodeID(vtkDataSet, int, int) -> int\nC++: static int GetGlobalNodeID(vtkDataSet *data, int localID,\n    int searchType)\n\nExtra point data array that can be generated.  By default, this\narray is ON.  The value of the array is the integer id of the\nnode. The id is relative to the entire data set. The name of the\narray is returned by GlobalNodeIdArrayName().\n"},
  {(char*)"SetApplyDisplacements", PyvtkExodusReader_SetApplyDisplacements, 1,
   (char*)"V.SetApplyDisplacements(int)\nC++: void SetApplyDisplacements(int a)\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacment vector. If displacements are turned 'off', the\nuser can explicitly add them by applying a warp filter.\n"},
  {(char*)"GetApplyDisplacements", PyvtkExodusReader_GetApplyDisplacements, 1,
   (char*)"V.GetApplyDisplacements() -> int\nC++: int GetApplyDisplacements()\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacment vector. If displacements are turned 'off', the\nuser can explicitly add them by applying a warp filter.\n"},
  {(char*)"ApplyDisplacementsOn", PyvtkExodusReader_ApplyDisplacementsOn, 1,
   (char*)"V.ApplyDisplacementsOn()\nC++: void ApplyDisplacementsOn()\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacment vector. If displacements are turned 'off', the\nuser can explicitly add them by applying a warp filter.\n"},
  {(char*)"ApplyDisplacementsOff", PyvtkExodusReader_ApplyDisplacementsOff, 1,
   (char*)"V.ApplyDisplacementsOff()\nC++: void ApplyDisplacementsOff()\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacment vector. If displacements are turned 'off', the\nuser can explicitly add them by applying a warp filter.\n"},
  {(char*)"SetDisplacementMagnitude", PyvtkExodusReader_SetDisplacementMagnitude, 1,
   (char*)"V.SetDisplacementMagnitude(float)\nC++: void SetDisplacementMagnitude(float a)\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacment vector. If displacements are turned 'off', the\nuser can explicitly add them by applying a warp filter.\n"},
  {(char*)"GetDisplacementMagnitude", PyvtkExodusReader_GetDisplacementMagnitude, 1,
   (char*)"V.GetDisplacementMagnitude() -> float\nC++: float GetDisplacementMagnitude()\n\nGeometric locations can include displacements.  By default, this\nis ON.  The nodal positions are 'displaced' by the standard\nexodus displacment vector. If displacements are turned 'off', the\nuser can explicitly add them by applying a warp filter.\n"},
  {(char*)"GetTitle", PyvtkExodusReader_GetTitle, 1,
   (char*)"V.GetTitle() -> string\nC++: char *GetTitle()\n\nAccess to meta data generated by UpdateInformation.\n"},
  {(char*)"GetDimensionality", PyvtkExodusReader_GetDimensionality, 1,
   (char*)"V.GetDimensionality() -> int\nC++: int GetDimensionality()\n\nAccess to meta data generated by UpdateInformation.\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkExodusReader_GetNumberOfTimeSteps, 1,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nAccess to meta data generated by UpdateInformation.\n"},
  {(char*)"GetNumberOfElements", PyvtkExodusReader_GetNumberOfElements, 1,
   (char*)"V.GetNumberOfElements() -> int\nC++: int GetNumberOfElements()\n\nAccess to meta data generated by UpdateInformation.\n"},
  {(char*)"GetNumberOfNodeSets", PyvtkExodusReader_GetNumberOfNodeSets, 1,
   (char*)"V.GetNumberOfNodeSets() -> int\nC++: int GetNumberOfNodeSets()\n\nAccess to meta data generated by UpdateInformation.\n"},
  {(char*)"GetNumberOfSideSets", PyvtkExodusReader_GetNumberOfSideSets, 1,
   (char*)"V.GetNumberOfSideSets() -> int\nC++: int GetNumberOfSideSets()\n\nAccess to meta data generated by UpdateInformation.\n"},
  {(char*)"GetNumberOfBlocks", PyvtkExodusReader_GetNumberOfBlocks, 1,
   (char*)"V.GetNumberOfBlocks() -> int\nC++: int GetNumberOfBlocks()\n\nAccess to meta data generated by UpdateInformation.\n"},
  {(char*)"GetTimeStepRange", PyvtkExodusReader_GetTimeStepRange, 1,
   (char*)"V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {(char*)"SetTimeStepRange", PyvtkExodusReader_SetTimeStepRange, 1,
   (char*)"V.SetTimeStepRange(int, int)\nC++: void SetTimeStepRange(int, int)\nV.SetTimeStepRange((int, int))\nC++: void SetTimeStepRange(int a[2])\n\n"},
  {(char*)"GetNumberOfNodes", PyvtkExodusReader_GetNumberOfNodes, 1,
   (char*)"V.GetNumberOfNodes() -> int\nC++: int GetNumberOfNodes()\n\nAccess to meta data generated by UpdateInformation.\n"},
  {(char*)"GetNumberOfElementsInBlock", PyvtkExodusReader_GetNumberOfElementsInBlock, 1,
   (char*)"V.GetNumberOfElementsInBlock(int) -> int\nC++: int GetNumberOfElementsInBlock(int block_idx)\n\nAccess to meta data generated by UpdateInformation.\n"},
  {(char*)"GetBlockId", PyvtkExodusReader_GetBlockId, 1,
   (char*)"V.GetBlockId(int) -> int\nC++: int GetBlockId(int block_idx)\n\nAccess to meta data generated by UpdateInformation.\n"},
  {(char*)"GetTotalNumberOfNodes", PyvtkExodusReader_GetTotalNumberOfNodes, 1,
   (char*)"V.GetTotalNumberOfNodes() -> int\nC++: virtual int GetTotalNumberOfNodes()\n\nAccess to meta data generated by UpdateInformation.\n"},
  {(char*)"GetNumberOfPointArrays", PyvtkExodusReader_GetNumberOfPointArrays, 1,
   (char*)"V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\n"},
  {(char*)"GetPointArrayName", PyvtkExodusReader_GetPointArrayName, 1,
   (char*)"V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\n"},
  {(char*)"GetPointArrayID", PyvtkExodusReader_GetPointArrayID, 1,
   (char*)"V.GetPointArrayID(string) -> int\nC++: int GetPointArrayID(const char *name)\n\n"},
  {(char*)"GetPointArrayNumberOfComponents", PyvtkExodusReader_GetPointArrayNumberOfComponents, 1,
   (char*)"V.GetPointArrayNumberOfComponents(int) -> int\nC++: int GetPointArrayNumberOfComponents(int index)\n\n"},
  {(char*)"SetPointArrayStatus", PyvtkExodusReader_SetPointArrayStatus, 1,
   (char*)"V.SetPointArrayStatus(int, int)\nC++: void SetPointArrayStatus(int index, int flag)\nV.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *, int flag)\n\n"},
  {(char*)"GetPointArrayStatus", PyvtkExodusReader_GetPointArrayStatus, 1,
   (char*)"V.GetPointArrayStatus(int) -> int\nC++: int GetPointArrayStatus(int index)\nV.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *)\n\n"},
  {(char*)"GetNumberOfCellArrays", PyvtkExodusReader_GetNumberOfCellArrays, 1,
   (char*)"V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\n"},
  {(char*)"GetCellArrayName", PyvtkExodusReader_GetCellArrayName, 1,
   (char*)"V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\n"},
  {(char*)"GetCellArrayID", PyvtkExodusReader_GetCellArrayID, 1,
   (char*)"V.GetCellArrayID(string) -> int\nC++: int GetCellArrayID(const char *name)\n\n"},
  {(char*)"GetCellArrayNumberOfComponents", PyvtkExodusReader_GetCellArrayNumberOfComponents, 1,
   (char*)"V.GetCellArrayNumberOfComponents(int) -> int\nC++: int GetCellArrayNumberOfComponents(int index)\n\n"},
  {(char*)"SetCellArrayStatus", PyvtkExodusReader_SetCellArrayStatus, 1,
   (char*)"V.SetCellArrayStatus(int, int)\nC++: void SetCellArrayStatus(int index, int flag)\nV.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *, int flag)\n\n"},
  {(char*)"GetCellArrayStatus", PyvtkExodusReader_GetCellArrayStatus, 1,
   (char*)"V.GetCellArrayStatus(int) -> int\nC++: int GetCellArrayStatus(int index)\nV.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *)\n\n"},
  {(char*)"GetTotalNumberOfElements", PyvtkExodusReader_GetTotalNumberOfElements, 1,
   (char*)"V.GetTotalNumberOfElements() -> int\nC++: virtual int GetTotalNumberOfElements()\n\n"},
  {(char*)"GetNumberOfBlockArrays", PyvtkExodusReader_GetNumberOfBlockArrays, 1,
   (char*)"V.GetNumberOfBlockArrays() -> int\nC++: int GetNumberOfBlockArrays()\n\n"},
  {(char*)"GetBlockArrayName", PyvtkExodusReader_GetBlockArrayName, 1,
   (char*)"V.GetBlockArrayName(int) -> string\nC++: const char *GetBlockArrayName(int index)\n\n"},
  {(char*)"GetBlockArrayID", PyvtkExodusReader_GetBlockArrayID, 1,
   (char*)"V.GetBlockArrayID(string) -> int\nC++: int GetBlockArrayID(const char *name)\n\n"},
  {(char*)"SetBlockArrayStatus", PyvtkExodusReader_SetBlockArrayStatus, 1,
   (char*)"V.SetBlockArrayStatus(int, int)\nC++: void SetBlockArrayStatus(int index, int flag)\nV.SetBlockArrayStatus(string, int)\nC++: void SetBlockArrayStatus(const char *, int flag)\n\n"},
  {(char*)"GetBlockArrayStatus", PyvtkExodusReader_GetBlockArrayStatus, 1,
   (char*)"V.GetBlockArrayStatus(int) -> int\nC++: int GetBlockArrayStatus(int index)\nV.GetBlockArrayStatus(string) -> int\nC++: int GetBlockArrayStatus(const char *)\n\n"},
  {(char*)"GetNumberOfNodeSetArrays", PyvtkExodusReader_GetNumberOfNodeSetArrays, 1,
   (char*)"V.GetNumberOfNodeSetArrays() -> int\nC++: int GetNumberOfNodeSetArrays()\n\nBy default Node/Side sets are not loaded, These methods allow the\nuser to select which Node/Side sets they want to load.\nNumberOfNodeSets and NumberOfSideSets (set by vtk macros) are\nstored in vtkExodusReader but other Node/Side set metadata are\nstored in vtkExodusMetaData Note: GetNumberOfNodeSetArrays and\nGetNumberOfSideSetArrays are just syntatic sugar for paraview\nserver xml\n"},
  {(char*)"GetNodeSetArrayStatus", PyvtkExodusReader_GetNodeSetArrayStatus, 1,
   (char*)"V.GetNodeSetArrayStatus(int) -> int\nC++: int GetNodeSetArrayStatus(int index)\nV.GetNodeSetArrayStatus(string) -> int\nC++: int GetNodeSetArrayStatus(const char *name)\n\nBy default Node/Side sets are not loaded, These methods allow the\nuser to select which Node/Side sets they want to load.\nNumberOfNodeSets and NumberOfSideSets (set by vtk macros) are\nstored in vtkExodusReader but other Node/Side set metadata are\nstored in vtkExodusMetaData Note: GetNumberOfNodeSetArrays and\nGetNumberOfSideSetArrays are just syntatic sugar for paraview\nserver xml\n"},
  {(char*)"SetNodeSetArrayStatus", PyvtkExodusReader_SetNodeSetArrayStatus, 1,
   (char*)"V.SetNodeSetArrayStatus(int, int)\nC++: void SetNodeSetArrayStatus(int index, int flag)\nV.SetNodeSetArrayStatus(string, int)\nC++: void SetNodeSetArrayStatus(const char *name, int flag)\n\nBy default Node/Side sets are not loaded, These methods allow the\nuser to select which Node/Side sets they want to load.\nNumberOfNodeSets and NumberOfSideSets (set by vtk macros) are\nstored in vtkExodusReader but other Node/Side set metadata are\nstored in vtkExodusMetaData Note: GetNumberOfNodeSetArrays and\nGetNumberOfSideSetArrays are just syntatic sugar for paraview\nserver xml\n"},
  {(char*)"GetNodeSetArrayName", PyvtkExodusReader_GetNodeSetArrayName, 1,
   (char*)"V.GetNodeSetArrayName(int) -> string\nC++: const char *GetNodeSetArrayName(int index)\n\nBy default Node/Side sets are not loaded, These methods allow the\nuser to select which Node/Side sets they want to load.\nNumberOfNodeSets and NumberOfSideSets (set by vtk macros) are\nstored in vtkExodusReader but other Node/Side set metadata are\nstored in vtkExodusMetaData Note: GetNumberOfNodeSetArrays and\nGetNumberOfSideSetArrays are just syntatic sugar for paraview\nserver xml\n"},
  {(char*)"GetNumberOfSideSetArrays", PyvtkExodusReader_GetNumberOfSideSetArrays, 1,
   (char*)"V.GetNumberOfSideSetArrays() -> int\nC++: int GetNumberOfSideSetArrays()\n\n"},
  {(char*)"GetSideSetArrayStatus", PyvtkExodusReader_GetSideSetArrayStatus, 1,
   (char*)"V.GetSideSetArrayStatus(int) -> int\nC++: int GetSideSetArrayStatus(int index)\nV.GetSideSetArrayStatus(string) -> int\nC++: int GetSideSetArrayStatus(const char *name)\n\n"},
  {(char*)"SetSideSetArrayStatus", PyvtkExodusReader_SetSideSetArrayStatus, 1,
   (char*)"V.SetSideSetArrayStatus(int, int)\nC++: void SetSideSetArrayStatus(int index, int flag)\nV.SetSideSetArrayStatus(string, int)\nC++: void SetSideSetArrayStatus(const char *name, int flag)\n\n"},
  {(char*)"GetSideSetArrayName", PyvtkExodusReader_GetSideSetArrayName, 1,
   (char*)"V.GetSideSetArrayName(int) -> string\nC++: const char *GetSideSetArrayName(int index)\n\n"},
  {(char*)"GetNumberOfPartArrays", PyvtkExodusReader_GetNumberOfPartArrays, 1,
   (char*)"V.GetNumberOfPartArrays() -> int\nC++: int GetNumberOfPartArrays()\n\n"},
  {(char*)"GetPartArrayName", PyvtkExodusReader_GetPartArrayName, 1,
   (char*)"V.GetPartArrayName(int) -> string\nC++: const char *GetPartArrayName(int arrayIdx)\n\n"},
  {(char*)"GetPartArrayID", PyvtkExodusReader_GetPartArrayID, 1,
   (char*)"V.GetPartArrayID(string) -> int\nC++: int GetPartArrayID(const char *name)\n\n"},
  {(char*)"GetPartBlockInfo", PyvtkExodusReader_GetPartBlockInfo, 1,
   (char*)"V.GetPartBlockInfo(int) -> string\nC++: const char *GetPartBlockInfo(int arrayIdx)\n\n"},
  {(char*)"SetPartArrayStatus", PyvtkExodusReader_SetPartArrayStatus, 1,
   (char*)"V.SetPartArrayStatus(int, int)\nC++: void SetPartArrayStatus(int index, int flag)\nV.SetPartArrayStatus(string, int)\nC++: void SetPartArrayStatus(const char *, int flag)\n\n"},
  {(char*)"GetPartArrayStatus", PyvtkExodusReader_GetPartArrayStatus, 1,
   (char*)"V.GetPartArrayStatus(int) -> int\nC++: int GetPartArrayStatus(int index)\nV.GetPartArrayStatus(string) -> int\nC++: int GetPartArrayStatus(const char *)\n\n"},
  {(char*)"GetNumberOfMaterialArrays", PyvtkExodusReader_GetNumberOfMaterialArrays, 1,
   (char*)"V.GetNumberOfMaterialArrays() -> int\nC++: int GetNumberOfMaterialArrays()\n\n"},
  {(char*)"GetMaterialArrayName", PyvtkExodusReader_GetMaterialArrayName, 1,
   (char*)"V.GetMaterialArrayName(int) -> string\nC++: const char *GetMaterialArrayName(int arrayIdx)\n\n"},
  {(char*)"GetMaterialArrayID", PyvtkExodusReader_GetMaterialArrayID, 1,
   (char*)"V.GetMaterialArrayID(string) -> int\nC++: int GetMaterialArrayID(const char *name)\n\n"},
  {(char*)"SetMaterialArrayStatus", PyvtkExodusReader_SetMaterialArrayStatus, 1,
   (char*)"V.SetMaterialArrayStatus(int, int)\nC++: void SetMaterialArrayStatus(int index, int flag)\nV.SetMaterialArrayStatus(string, int)\nC++: void SetMaterialArrayStatus(const char *, int flag)\n\n"},
  {(char*)"GetMaterialArrayStatus", PyvtkExodusReader_GetMaterialArrayStatus, 1,
   (char*)"V.GetMaterialArrayStatus(int) -> int\nC++: int GetMaterialArrayStatus(int index)\nV.GetMaterialArrayStatus(string) -> int\nC++: int GetMaterialArrayStatus(const char *)\n\n"},
  {(char*)"GetNumberOfAssemblyArrays", PyvtkExodusReader_GetNumberOfAssemblyArrays, 1,
   (char*)"V.GetNumberOfAssemblyArrays() -> int\nC++: int GetNumberOfAssemblyArrays()\n\n"},
  {(char*)"GetAssemblyArrayName", PyvtkExodusReader_GetAssemblyArrayName, 1,
   (char*)"V.GetAssemblyArrayName(int) -> string\nC++: const char *GetAssemblyArrayName(int arrayIdx)\n\n"},
  {(char*)"GetAssemblyArrayID", PyvtkExodusReader_GetAssemblyArrayID, 1,
   (char*)"V.GetAssemblyArrayID(string) -> int\nC++: int GetAssemblyArrayID(const char *name)\n\n"},
  {(char*)"SetAssemblyArrayStatus", PyvtkExodusReader_SetAssemblyArrayStatus, 1,
   (char*)"V.SetAssemblyArrayStatus(int, int)\nC++: void SetAssemblyArrayStatus(int index, int flag)\nV.SetAssemblyArrayStatus(string, int)\nC++: void SetAssemblyArrayStatus(const char *, int flag)\n\n"},
  {(char*)"GetAssemblyArrayStatus", PyvtkExodusReader_GetAssemblyArrayStatus, 1,
   (char*)"V.GetAssemblyArrayStatus(int) -> int\nC++: int GetAssemblyArrayStatus(int index)\nV.GetAssemblyArrayStatus(string) -> int\nC++: int GetAssemblyArrayStatus(const char *)\n\n"},
  {(char*)"GetNumberOfHierarchyArrays", PyvtkExodusReader_GetNumberOfHierarchyArrays, 1,
   (char*)"V.GetNumberOfHierarchyArrays() -> int\nC++: int GetNumberOfHierarchyArrays()\n\n"},
  {(char*)"GetHierarchyArrayName", PyvtkExodusReader_GetHierarchyArrayName, 1,
   (char*)"V.GetHierarchyArrayName(int) -> string\nC++: const char *GetHierarchyArrayName(int arrayIdx)\n\n"},
  {(char*)"SetHierarchyArrayStatus", PyvtkExodusReader_SetHierarchyArrayStatus, 1,
   (char*)"V.SetHierarchyArrayStatus(int, int)\nC++: void SetHierarchyArrayStatus(int index, int flag)\nV.SetHierarchyArrayStatus(string, int)\nC++: void SetHierarchyArrayStatus(const char *, int flag)\n\n"},
  {(char*)"GetHierarchyArrayStatus", PyvtkExodusReader_GetHierarchyArrayStatus, 1,
   (char*)"V.GetHierarchyArrayStatus(int) -> int\nC++: int GetHierarchyArrayStatus(int index)\nV.GetHierarchyArrayStatus(string) -> int\nC++: int GetHierarchyArrayStatus(const char *)\n\n"},
  {(char*)"GetHasModeShapes", PyvtkExodusReader_GetHasModeShapes, 1,
   (char*)"V.GetHasModeShapes() -> int\nC++: int GetHasModeShapes()\n\nSome simulations overload the Exodus time steps to represent mode\nshapes. In this case, it does not make sense to iterate over the \"time\nsteps\", because they are not meant to be played in order. \nRather, each represents the vibration at a different \"mode.\" \nSetting this to 1 changes the semantics of the reader to not\nreport the time steps to downstream filters. By default, this is\noff, which is the case for most Exodus files.\n"},
  {(char*)"SetHasModeShapes", PyvtkExodusReader_SetHasModeShapes, 1,
   (char*)"V.SetHasModeShapes(int)\nC++: void SetHasModeShapes(int a)\n\nSome simulations overload the Exodus time steps to represent mode\nshapes. In this case, it does not make sense to iterate over the \"time\nsteps\", because they are not meant to be played in order. \nRather, each represents the vibration at a different \"mode.\" \nSetting this to 1 changes the semantics of the reader to not\nreport the time steps to downstream filters. By default, this is\noff, which is the case for most Exodus files.\n"},
  {(char*)"HasModeShapesOn", PyvtkExodusReader_HasModeShapesOn, 1,
   (char*)"V.HasModeShapesOn()\nC++: void HasModeShapesOn()\n\nSome simulations overload the Exodus time steps to represent mode\nshapes. In this case, it does not make sense to iterate over the \"time\nsteps\", because they are not meant to be played in order. \nRather, each represents the vibration at a different \"mode.\" \nSetting this to 1 changes the semantics of the reader to not\nreport the time steps to downstream filters. By default, this is\noff, which is the case for most Exodus files.\n"},
  {(char*)"HasModeShapesOff", PyvtkExodusReader_HasModeShapesOff, 1,
   (char*)"V.HasModeShapesOff()\nC++: void HasModeShapesOff()\n\nSome simulations overload the Exodus time steps to represent mode\nshapes. In this case, it does not make sense to iterate over the \"time\nsteps\", because they are not meant to be played in order. \nRather, each represents the vibration at a different \"mode.\" \nSetting this to 1 changes the semantics of the reader to not\nreport the time steps to downstream filters. By default, this is\noff, which is the case for most Exodus files.\n"},
  {(char*)"GetDisplayType", PyvtkExodusReader_GetDisplayType, 1,
   (char*)"V.GetDisplayType() -> int\nC++: int GetDisplayType()\n\n"},
  {(char*)"SetDisplayType", PyvtkExodusReader_SetDisplayType, 1,
   (char*)"V.SetDisplayType(int)\nC++: virtual void SetDisplayType(int type)\n\n"},
  {(char*)"ExodusModelMetadataOn", PyvtkExodusReader_ExodusModelMetadataOn, 1,
   (char*)"V.ExodusModelMetadataOn()\nC++: void ExodusModelMetadataOn()\n\nThere is a great deal of model information lost when an Exodus II\n  file is read in to a vtkUnstructuredGrid.  Turn this option ON\n  if you want this metadata to be read in to a vtkExodusModel\nobject.\n  The default is OFF.\n"},
  {(char*)"ExodusModelMetadataOff", PyvtkExodusReader_ExodusModelMetadataOff, 1,
   (char*)"V.ExodusModelMetadataOff()\nC++: void ExodusModelMetadataOff()\n\nThere is a great deal of model information lost when an Exodus II\n  file is read in to a vtkUnstructuredGrid.  Turn this option ON\n  if you want this metadata to be read in to a vtkExodusModel\nobject.\n  The default is OFF.\n"},
  {(char*)"SetExodusModelMetadata", PyvtkExodusReader_SetExodusModelMetadata, 1,
   (char*)"V.SetExodusModelMetadata(int)\nC++: void SetExodusModelMetadata(int a)\n\nThere is a great deal of model information lost when an Exodus II\n  file is read in to a vtkUnstructuredGrid.  Turn this option ON\n  if you want this metadata to be read in to a vtkExodusModel\nobject.\n  The default is OFF.\n"},
  {(char*)"GetExodusModelMetadata", PyvtkExodusReader_GetExodusModelMetadata, 1,
   (char*)"V.GetExodusModelMetadata() -> int\nC++: int GetExodusModelMetadata()\n\nThere is a great deal of model information lost when an Exodus II\n  file is read in to a vtkUnstructuredGrid.  Turn this option ON\n  if you want this metadata to be read in to a vtkExodusModel\nobject.\n  The default is OFF.\n"},
  {(char*)"GetExodusModel", PyvtkExodusReader_GetExodusModel, 1,
   (char*)"V.GetExodusModel() -> vtkExodusModel\nC++: vtkExodusModel *GetExodusModel()\n\nReturns the object which encapsulates the model metadata.\n"},
  {(char*)"SetPackExodusModelOntoOutput", PyvtkExodusReader_SetPackExodusModelOntoOutput, 1,
   (char*)"V.SetPackExodusModelOntoOutput(int)\nC++: void SetPackExodusModelOntoOutput(int a)\n\nBy default, the ExodusModel metadata (if requested with\n ExodusModelMetadataOn()) is also encoded into field arrays\n and attached to the output unstructured grid.  Set this OFF\n if you don't want this to happen.  (The vtkExodusIIWriter and\n the vtkEnSightWriter can unpack this metadata from the field\n arrays and use it when writing out Exodus or EnSight files.)\n"},
  {(char*)"GetPackExodusModelOntoOutput", PyvtkExodusReader_GetPackExodusModelOntoOutput, 1,
   (char*)"V.GetPackExodusModelOntoOutput() -> int\nC++: int GetPackExodusModelOntoOutput()\n\nBy default, the ExodusModel metadata (if requested with\n ExodusModelMetadataOn()) is also encoded into field arrays\n and attached to the output unstructured grid.  Set this OFF\n if you don't want this to happen.  (The vtkExodusIIWriter and\n the vtkEnSightWriter can unpack this metadata from the field\n arrays and use it when writing out Exodus or EnSight files.)\n"},
  {(char*)"PackExodusModelOntoOutputOn", PyvtkExodusReader_PackExodusModelOntoOutputOn, 1,
   (char*)"V.PackExodusModelOntoOutputOn()\nC++: void PackExodusModelOntoOutputOn()\n\nBy default, the ExodusModel metadata (if requested with\n ExodusModelMetadataOn()) is also encoded into field arrays\n and attached to the output unstructured grid.  Set this OFF\n if you don't want this to happen.  (The vtkExodusIIWriter and\n the vtkEnSightWriter can unpack this metadata from the field\n arrays and use it when writing out Exodus or EnSight files.)\n"},
  {(char*)"PackExodusModelOntoOutputOff", PyvtkExodusReader_PackExodusModelOntoOutputOff, 1,
   (char*)"V.PackExodusModelOntoOutputOff()\nC++: void PackExodusModelOntoOutputOff()\n\nBy default, the ExodusModel metadata (if requested with\n ExodusModelMetadataOn()) is also encoded into field arrays\n and attached to the output unstructured grid.  Set this OFF\n if you don't want this to happen.  (The vtkExodusIIWriter and\n the vtkEnSightWriter can unpack this metadata from the field\n arrays and use it when writing out Exodus or EnSight files.)\n"},
  {(char*)"IsValidVariable", PyvtkExodusReader_IsValidVariable, 1,
   (char*)"V.IsValidVariable(string, string) -> int\nC++: int IsValidVariable(const char *type, const char *name)\n\n"},
  {(char*)"GetVariableID", PyvtkExodusReader_GetVariableID, 1,
   (char*)"V.GetVariableID(string, string) -> int\nC++: int GetVariableID(const char *type, const char *name)\n\n"},
  {(char*)"SetAllAssemblyArrayStatus", PyvtkExodusReader_SetAllAssemblyArrayStatus, 1,
   (char*)"V.SetAllAssemblyArrayStatus(int)\nC++: void SetAllAssemblyArrayStatus(int status)\n\n"},
  {(char*)"SetAllBlockArrayStatus", PyvtkExodusReader_SetAllBlockArrayStatus, 1,
   (char*)"V.SetAllBlockArrayStatus(int)\nC++: void SetAllBlockArrayStatus(int status)\n\n"},
  {(char*)"SetAllCellArrayStatus", PyvtkExodusReader_SetAllCellArrayStatus, 1,
   (char*)"V.SetAllCellArrayStatus(int)\nC++: void SetAllCellArrayStatus(int status)\n\n"},
  {(char*)"SetAllHierarchyArrayStatus", PyvtkExodusReader_SetAllHierarchyArrayStatus, 1,
   (char*)"V.SetAllHierarchyArrayStatus(int)\nC++: void SetAllHierarchyArrayStatus(int status)\n\n"},
  {(char*)"SetAllMaterialArrayStatus", PyvtkExodusReader_SetAllMaterialArrayStatus, 1,
   (char*)"V.SetAllMaterialArrayStatus(int)\nC++: void SetAllMaterialArrayStatus(int status)\n\n"},
  {(char*)"SetAllPartArrayStatus", PyvtkExodusReader_SetAllPartArrayStatus, 1,
   (char*)"V.SetAllPartArrayStatus(int)\nC++: void SetAllPartArrayStatus(int status)\n\n"},
  {(char*)"SetAllPointArrayStatus", PyvtkExodusReader_SetAllPointArrayStatus, 1,
   (char*)"V.SetAllPointArrayStatus(int)\nC++: void SetAllPointArrayStatus(int status)\n\n"},
  {(char*)"SetArrayStatus", PyvtkExodusReader_SetArrayStatus, 1,
   (char*)"V.SetArrayStatus(string, string, int)\nC++: void SetArrayStatus(const char *type, const char *name,\n    int flag)\n\n"},
  {(char*)"GetArrayStatus", PyvtkExodusReader_GetArrayStatus, 1,
   (char*)"V.GetArrayStatus(string, string) -> int\nC++: int GetArrayStatus(const char *type, const char *name)\n\n"},
  {(char*)"StringsEqual", PyvtkExodusReader_StringsEqual, 1,
   (char*)"V.StringsEqual(string, string) -> int\nC++: static int StringsEqual(const char *s1, char *s2)\n\n"},
  {(char*)"StringUppercase", PyvtkExodusReader_StringUppercase, 1,
   (char*)"V.StringUppercase(string, string)\nC++: static void StringUppercase(const char *str, char *upperstr)\n\n"},
  {(char*)"StrDupWithNew", PyvtkExodusReader_StrDupWithNew, 1,
   (char*)"V.StrDupWithNew(string) -> string\nC++: static char *StrDupWithNew(const char *s)\n\n"},
  {(char*)"GetTimeSeriesData", PyvtkExodusReader_GetTimeSeriesData, 1,
   (char*)"V.GetTimeSeriesData(int, string, string, vtkFloatArray) -> int\nC++: int GetTimeSeriesData(int ID, const char *vName,\n    const char *vType, vtkFloatArray *result)\n\n"},
  {(char*)"GetNumberOfVariableArrays", PyvtkExodusReader_GetNumberOfVariableArrays, 1,
   (char*)"V.GetNumberOfVariableArrays() -> int\nC++: int GetNumberOfVariableArrays()\n\n"},
  {(char*)"GetVariableArrayName", PyvtkExodusReader_GetVariableArrayName, 1,
   (char*)"V.GetVariableArrayName(int) -> string\nC++: const char *GetVariableArrayName(int a_which)\n\n"},
  {(char*)"EnableDSPFiltering", PyvtkExodusReader_EnableDSPFiltering, 1,
   (char*)"V.EnableDSPFiltering()\nC++: void EnableDSPFiltering()\n\n"},
  {(char*)"AddFilter", PyvtkExodusReader_AddFilter, 1,
   (char*)"V.AddFilter(vtkDSPFilterDefinition)\nC++: void AddFilter(vtkDSPFilterDefinition *a_filter)\n\n"},
  {(char*)"StartAddingFilter", PyvtkExodusReader_StartAddingFilter, 1,
   (char*)"V.StartAddingFilter()\nC++: void StartAddingFilter()\n\n"},
  {(char*)"AddFilterInputVar", PyvtkExodusReader_AddFilterInputVar, 1,
   (char*)"V.AddFilterInputVar(string)\nC++: void AddFilterInputVar(char *name)\n\n"},
  {(char*)"AddFilterOutputVar", PyvtkExodusReader_AddFilterOutputVar, 1,
   (char*)"V.AddFilterOutputVar(string)\nC++: void AddFilterOutputVar(char *name)\n\n"},
  {(char*)"AddFilterNumeratorWeight", PyvtkExodusReader_AddFilterNumeratorWeight, 1,
   (char*)"V.AddFilterNumeratorWeight(float)\nC++: void AddFilterNumeratorWeight(double weight)\n\n"},
  {(char*)"AddFilterForwardNumeratorWeight", PyvtkExodusReader_AddFilterForwardNumeratorWeight, 1,
   (char*)"V.AddFilterForwardNumeratorWeight(float)\nC++: void AddFilterForwardNumeratorWeight(double weight)\n\n"},
  {(char*)"AddFilterDenominatorWeight", PyvtkExodusReader_AddFilterDenominatorWeight, 1,
   (char*)"V.AddFilterDenominatorWeight(float)\nC++: void AddFilterDenominatorWeight(double weight)\n\n"},
  {(char*)"FinishAddingFilter", PyvtkExodusReader_FinishAddingFilter, 1,
   (char*)"V.FinishAddingFilter()\nC++: void FinishAddingFilter()\n\n"},
  {(char*)"RemoveFilter", PyvtkExodusReader_RemoveFilter, 1,
   (char*)"V.RemoveFilter(string)\nC++: void RemoveFilter(char *a_outputVariableName)\n\n"},
  {(char*)"GetDSPOutputArrays", PyvtkExodusReader_GetDSPOutputArrays, 1,
   (char*)"V.GetDSPOutputArrays(int, vtkUnstructuredGrid)\nC++: void GetDSPOutputArrays(int exoid,\n    vtkUnstructuredGrid *output)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExodusReader_StaticNew()
{
  return vtkExodusReader::New();
}

PyObject *PyVTKClass_vtkExodusReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExodusReader_StaticNew,
    PyvtkExodusReader_Methods,
    "vtkExodusReader", modulename,
    NULL, NULL,
    PyvtkExodusReader_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));

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

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"CELL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"POINT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"BLOCK", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"PART", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"MATERIAL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"ASSEMBLY", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"HIERARCHY", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"NUM_ARRAY_TYPES", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"UNKNOWN_TYPE", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkExodusReader_Doc()
{
  static const char *docstring[] = {
    "vtkExodusReader - Read exodus 2 files .ex2\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkExodusReader is a unstructured grid source object that reads\nExodusII files.  Most of the meta data associated with the file is\nloaded when UpdateInformation is called.  This includes information\nlike Title, number of blocks, number and names of arrays. This data\ncan be retrieved from methods in this reader. Separate arrays that\nare meant to be a single vector, are combined internally for\nconve",
    "nience.  To be combined, the array names have to be identical\nexcept for a trailing X,Y and Z (or x,y,z).  By default cell and\npoint arrays are not loaded.  However, the user can flag arrays to\nload with the methods \"SetPointArrayStatus\" and \"SetCellArrayStatus\".\n The reader DOES NOT respond to piece requests\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExodusReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExodusReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExodusReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

