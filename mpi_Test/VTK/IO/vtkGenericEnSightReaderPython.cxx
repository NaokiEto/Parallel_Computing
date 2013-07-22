// python wrapper for vtkGenericEnSightReader
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
#include "vtkGenericEnSightReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericEnSightReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericEnSightReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericEnSightReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericEnSightReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkGenericEnSightReader_Doc();


static PyObject *
PyvtkGenericEnSightReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

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
      tempr = op->vtkGenericEnSightReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

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
      tempr = op->vtkGenericEnSightReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  vtkGenericEnSightReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::NewInstance();
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
PyvtkGenericEnSightReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGenericEnSightReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGenericEnSightReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetCaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCaseFileName(temp0);
      }
    else
      {
      op->vtkGenericEnSightReader::SetCaseFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetCaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCaseFileName();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetCaseFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetFilePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePath(temp0);
      }
    else
      {
      op->vtkGenericEnSightReader::SetFilePath(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetFilePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFilePath();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetFilePath();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetEnSightVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnSightVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnSightVersion();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetEnSightVersion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVariables_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVariables();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetNumberOfVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVariables_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVariables(temp0);
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetNumberOfVariables(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVariables(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkGenericEnSightReader_GetNumberOfVariables_s1(self, args);
    case 1:
      return PyvtkGenericEnSightReader_GetNumberOfVariables_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfVariables");
  return NULL;
}



static PyObject *
PyvtkGenericEnSightReader_GetNumberOfComplexVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComplexVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComplexVariables();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetNumberOfComplexVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfScalarsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfScalarsPerNode();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetNumberOfScalarsPerNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVectorsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVectorsPerNode();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetNumberOfVectorsPerNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfTensorsSymmPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTensorsSymmPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTensorsSymmPerNode();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetNumberOfTensorsSymmPerNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfScalarsPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarsPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfScalarsPerElement();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetNumberOfScalarsPerElement();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVectorsPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorsPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVectorsPerElement();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetNumberOfVectorsPerElement();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfTensorsSymmPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTensorsSymmPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTensorsSymmPerElement();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetNumberOfTensorsSymmPerElement();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfScalarsPerMeasuredNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarsPerMeasuredNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfScalarsPerMeasuredNode();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetNumberOfScalarsPerMeasuredNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfVectorsPerMeasuredNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorsPerMeasuredNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVectorsPerMeasuredNode();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetNumberOfVectorsPerMeasuredNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfComplexScalarsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComplexScalarsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComplexScalarsPerNode();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetNumberOfComplexScalarsPerNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfComplexVectorsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComplexVectorsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComplexVectorsPerNode();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetNumberOfComplexVectorsPerNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfComplexScalarsPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComplexScalarsPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComplexScalarsPerElement();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetNumberOfComplexScalarsPerElement();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfComplexVectorsPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComplexVectorsPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComplexVectorsPerElement();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetNumberOfComplexVectorsPerElement();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetDescription_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDescription(temp0);
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetDescription(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericEnSightReader_GetDescription_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

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
      tempr = op->GetDescription(temp0, temp1);
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetDescription(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGenericEnSightReader_GetDescription(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkGenericEnSightReader_GetDescription_s1(self, args);
    case 2:
      return PyvtkGenericEnSightReader_GetDescription_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetDescription");
  return NULL;
}



static PyObject *
PyvtkGenericEnSightReader_GetComplexDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComplexDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComplexDescription(temp0);
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetComplexDescription(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetVariableType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVariableType(temp0);
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetVariableType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetComplexVariableType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComplexVariableType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComplexVariableType(temp0);
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetComplexVariableType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeValue(temp0);
      }
    else
      {
      op->vtkGenericEnSightReader::SetTimeValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeValue();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetTimeValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetMinimumTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumTimeValue();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetMinimumTimeValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetMaximumTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumTimeValue();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetMaximumTimeValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetTimeSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  vtkDataArrayCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeSets();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetTimeSets();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_DetermineEnSightVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetermineEnSightVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0 = 0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
    {
    if (ap.IsBound())
      {
      tempr = op->DetermineEnSightVersion(temp0);
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::DetermineEnSightVersion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_ReadAllVariablesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllVariablesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllVariablesOn();
      }
    else
      {
      op->vtkGenericEnSightReader::ReadAllVariablesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_ReadAllVariablesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllVariablesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadAllVariablesOff();
      }
    else
      {
      op->vtkGenericEnSightReader::ReadAllVariablesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetReadAllVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadAllVariables(temp0);
      }
    else
      {
      op->vtkGenericEnSightReader::SetReadAllVariables(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetReadAllVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadAllVariables();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetReadAllVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetPointDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  vtkDataArraySelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointDataArraySelection();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetPointDataArraySelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetCellDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  vtkDataArraySelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellDataArraySelection();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetCellDataArraySelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

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
      tempr = op->vtkGenericEnSightReader::GetNumberOfPointArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

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
      tempr = op->vtkGenericEnSightReader::GetNumberOfCellArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

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
      tempr = op->vtkGenericEnSightReader::GetPointArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

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
      tempr = op->vtkGenericEnSightReader::GetCellArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

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
      tempr = op->vtkGenericEnSightReader::GetPointArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

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
      tempr = op->vtkGenericEnSightReader::GetCellArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

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
      op->vtkGenericEnSightReader::SetPointArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

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
      op->vtkGenericEnSightReader::SetCellArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToBigEndian();
      }
    else
      {
      op->vtkGenericEnSightReader::SetByteOrderToBigEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrderToLittleEndian();
      }
    else
      {
      op->vtkGenericEnSightReader::SetByteOrderToLittleEndian();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetByteOrder(temp0);
      }
    else
      {
      op->vtkGenericEnSightReader::SetByteOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetByteOrder();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetByteOrder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetByteOrderAsString();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetByteOrderAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGeometryFileName();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetGeometryFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_SetParticleCoordinatesByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleCoordinatesByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParticleCoordinatesByIndex(temp0);
      }
    else
      {
      op->vtkGenericEnSightReader::SetParticleCoordinatesByIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetParticleCoordinatesByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleCoordinatesByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParticleCoordinatesByIndex();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetParticleCoordinatesByIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_ParticleCoordinatesByIndexOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParticleCoordinatesByIndexOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParticleCoordinatesByIndexOn();
      }
    else
      {
      op->vtkGenericEnSightReader::ParticleCoordinatesByIndexOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_ParticleCoordinatesByIndexOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParticleCoordinatesByIndexOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParticleCoordinatesByIndexOff();
      }
    else
      {
      op->vtkGenericEnSightReader::ParticleCoordinatesByIndexOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkGenericEnSightReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEnSightReader_GetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEnSightReader *op = static_cast<vtkGenericEnSightReader *>(vp);

  vtkGenericEnSightReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReader();
      }
    else
      {
      tempr = op->vtkGenericEnSightReader::GetReader();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericEnSightReader_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericEnSightReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericEnSightReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericEnSightReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericEnSightReader\nC++: vtkGenericEnSightReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericEnSightReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericEnSightReader\nC++: vtkGenericEnSightReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCaseFileName", PyvtkGenericEnSightReader_SetCaseFileName, 1,
   (char*)"V.SetCaseFileName(string)\nC++: void SetCaseFileName(const char *fileName)\n\nSet/Get the Case file name.\n"},
  {(char*)"GetCaseFileName", PyvtkGenericEnSightReader_GetCaseFileName, 1,
   (char*)"V.GetCaseFileName() -> string\nC++: char *GetCaseFileName()\n\nSet/Get the Case file name.\n"},
  {(char*)"SetFilePath", PyvtkGenericEnSightReader_SetFilePath, 1,
   (char*)"V.SetFilePath(string)\nC++: void SetFilePath(char *)\n\nSet/Get the file path.\n"},
  {(char*)"GetFilePath", PyvtkGenericEnSightReader_GetFilePath, 1,
   (char*)"V.GetFilePath() -> string\nC++: char *GetFilePath()\n\nSet/Get the file path.\n"},
  {(char*)"GetEnSightVersion", PyvtkGenericEnSightReader_GetEnSightVersion, 1,
   (char*)"V.GetEnSightVersion() -> int\nC++: int GetEnSightVersion()\n\nGet the EnSight file version being read.\n"},
  {(char*)"GetNumberOfVariables", PyvtkGenericEnSightReader_GetNumberOfVariables, 1,
   (char*)"V.GetNumberOfVariables() -> int\nC++: int GetNumberOfVariables()\nV.GetNumberOfVariables(int) -> int\nC++: int GetNumberOfVariables(int type)\n\nGet the number of variables listed in the case file.\n"},
  {(char*)"GetNumberOfComplexVariables", PyvtkGenericEnSightReader_GetNumberOfComplexVariables, 1,
   (char*)"V.GetNumberOfComplexVariables() -> int\nC++: int GetNumberOfComplexVariables()\n\nGet the number of variables listed in the case file.\n"},
  {(char*)"GetNumberOfScalarsPerNode", PyvtkGenericEnSightReader_GetNumberOfScalarsPerNode, 1,
   (char*)"V.GetNumberOfScalarsPerNode() -> int\nC++: int GetNumberOfScalarsPerNode()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfVectorsPerNode", PyvtkGenericEnSightReader_GetNumberOfVectorsPerNode, 1,
   (char*)"V.GetNumberOfVectorsPerNode() -> int\nC++: int GetNumberOfVectorsPerNode()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfTensorsSymmPerNode", PyvtkGenericEnSightReader_GetNumberOfTensorsSymmPerNode, 1,
   (char*)"V.GetNumberOfTensorsSymmPerNode() -> int\nC++: int GetNumberOfTensorsSymmPerNode()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfScalarsPerElement", PyvtkGenericEnSightReader_GetNumberOfScalarsPerElement, 1,
   (char*)"V.GetNumberOfScalarsPerElement() -> int\nC++: int GetNumberOfScalarsPerElement()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfVectorsPerElement", PyvtkGenericEnSightReader_GetNumberOfVectorsPerElement, 1,
   (char*)"V.GetNumberOfVectorsPerElement() -> int\nC++: int GetNumberOfVectorsPerElement()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfTensorsSymmPerElement", PyvtkGenericEnSightReader_GetNumberOfTensorsSymmPerElement, 1,
   (char*)"V.GetNumberOfTensorsSymmPerElement() -> int\nC++: int GetNumberOfTensorsSymmPerElement()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfScalarsPerMeasuredNode", PyvtkGenericEnSightReader_GetNumberOfScalarsPerMeasuredNode, 1,
   (char*)"V.GetNumberOfScalarsPerMeasuredNode() -> int\nC++: int GetNumberOfScalarsPerMeasuredNode()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfVectorsPerMeasuredNode", PyvtkGenericEnSightReader_GetNumberOfVectorsPerMeasuredNode, 1,
   (char*)"V.GetNumberOfVectorsPerMeasuredNode() -> int\nC++: int GetNumberOfVectorsPerMeasuredNode()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfComplexScalarsPerNode", PyvtkGenericEnSightReader_GetNumberOfComplexScalarsPerNode, 1,
   (char*)"V.GetNumberOfComplexScalarsPerNode() -> int\nC++: int GetNumberOfComplexScalarsPerNode()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfComplexVectorsPerNode", PyvtkGenericEnSightReader_GetNumberOfComplexVectorsPerNode, 1,
   (char*)"V.GetNumberOfComplexVectorsPerNode() -> int\nC++: int GetNumberOfComplexVectorsPerNode()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfComplexScalarsPerElement", PyvtkGenericEnSightReader_GetNumberOfComplexScalarsPerElement, 1,
   (char*)"V.GetNumberOfComplexScalarsPerElement() -> int\nC++: int GetNumberOfComplexScalarsPerElement()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetNumberOfComplexVectorsPerElement", PyvtkGenericEnSightReader_GetNumberOfComplexVectorsPerElement, 1,
   (char*)"V.GetNumberOfComplexVectorsPerElement() -> int\nC++: int GetNumberOfComplexVectorsPerElement()\n\nGet the number of variables of a particular type.\n"},
  {(char*)"GetDescription", PyvtkGenericEnSightReader_GetDescription, 1,
   (char*)"V.GetDescription(int) -> string\nC++: const char *GetDescription(int n)\nV.GetDescription(int, int) -> string\nC++: const char *GetDescription(int n, int type)\n\nGet the nth description for a non-complex variable.\n"},
  {(char*)"GetComplexDescription", PyvtkGenericEnSightReader_GetComplexDescription, 1,
   (char*)"V.GetComplexDescription(int) -> string\nC++: const char *GetComplexDescription(int n)\n\nGet the nth description for a complex variable.\n"},
  {(char*)"GetVariableType", PyvtkGenericEnSightReader_GetVariableType, 1,
   (char*)"V.GetVariableType(int) -> int\nC++: int GetVariableType(int n)\n\nGet the variable type of variable n.\n"},
  {(char*)"GetComplexVariableType", PyvtkGenericEnSightReader_GetComplexVariableType, 1,
   (char*)"V.GetComplexVariableType(int) -> int\nC++: int GetComplexVariableType(int n)\n\nGet the variable type of variable n.\n"},
  {(char*)"SetTimeValue", PyvtkGenericEnSightReader_SetTimeValue, 1,
   (char*)"V.SetTimeValue(float)\nC++: virtual void SetTimeValue(float value)\n\nSet/Get the time value at which to get the value.\n"},
  {(char*)"GetTimeValue", PyvtkGenericEnSightReader_GetTimeValue, 1,
   (char*)"V.GetTimeValue() -> float\nC++: float GetTimeValue()\n\nSet/Get the time value at which to get the value.\n"},
  {(char*)"GetMinimumTimeValue", PyvtkGenericEnSightReader_GetMinimumTimeValue, 1,
   (char*)"V.GetMinimumTimeValue() -> float\nC++: float GetMinimumTimeValue()\n\nGet the minimum or maximum time value for this data set.\n"},
  {(char*)"GetMaximumTimeValue", PyvtkGenericEnSightReader_GetMaximumTimeValue, 1,
   (char*)"V.GetMaximumTimeValue() -> float\nC++: float GetMaximumTimeValue()\n\nGet the minimum or maximum time value for this data set.\n"},
  {(char*)"GetTimeSets", PyvtkGenericEnSightReader_GetTimeSets, 1,
   (char*)"V.GetTimeSets() -> vtkDataArrayCollection\nC++: vtkDataArrayCollection *GetTimeSets()\n\nGet the time values per time set\n"},
  {(char*)"DetermineEnSightVersion", PyvtkGenericEnSightReader_DetermineEnSightVersion, 1,
   (char*)"V.DetermineEnSightVersion(int) -> int\nC++: int DetermineEnSightVersion(int quiet=0)\n\nReads the FORMAT part of the case file to determine whether this\nis an EnSight6 or EnSightGold data set.  Returns an identifier\nlisted in the FileTypes enum or -1 if an error occurred or the\nfile could not be indentified as any EnSight type.\n"},
  {(char*)"ReadAllVariablesOn", PyvtkGenericEnSightReader_ReadAllVariablesOn, 1,
   (char*)"V.ReadAllVariablesOn()\nC++: void ReadAllVariablesOn()\n\nSet/get the flag for whether to read all the variables\n"},
  {(char*)"ReadAllVariablesOff", PyvtkGenericEnSightReader_ReadAllVariablesOff, 1,
   (char*)"V.ReadAllVariablesOff()\nC++: void ReadAllVariablesOff()\n\nSet/get the flag for whether to read all the variables\n"},
  {(char*)"SetReadAllVariables", PyvtkGenericEnSightReader_SetReadAllVariables, 1,
   (char*)"V.SetReadAllVariables(int)\nC++: void SetReadAllVariables(int a)\n\nSet/get the flag for whether to read all the variables\n"},
  {(char*)"GetReadAllVariables", PyvtkGenericEnSightReader_GetReadAllVariables, 1,
   (char*)"V.GetReadAllVariables() -> int\nC++: int GetReadAllVariables()\n\nSet/get the flag for whether to read all the variables\n"},
  {(char*)"GetPointDataArraySelection", PyvtkGenericEnSightReader_GetPointDataArraySelection, 1,
   (char*)"V.GetPointDataArraySelection() -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetPointDataArraySelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {(char*)"GetCellDataArraySelection", PyvtkGenericEnSightReader_GetCellDataArraySelection, 1,
   (char*)"V.GetCellDataArraySelection() -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetCellDataArraySelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {(char*)"GetNumberOfPointArrays", PyvtkGenericEnSightReader_GetNumberOfPointArrays, 1,
   (char*)"V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nGet the number of point or cell arrays available in the input.\n"},
  {(char*)"GetNumberOfCellArrays", PyvtkGenericEnSightReader_GetNumberOfCellArrays, 1,
   (char*)"V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nGet the number of point or cell arrays available in the input.\n"},
  {(char*)"GetPointArrayName", PyvtkGenericEnSightReader_GetPointArrayName, 1,
   (char*)"V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nGet the name of the point or cell array with the given index in\nthe input.\n"},
  {(char*)"GetCellArrayName", PyvtkGenericEnSightReader_GetCellArrayName, 1,
   (char*)"V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nGet the name of the point or cell array with the given index in\nthe input.\n"},
  {(char*)"GetPointArrayStatus", PyvtkGenericEnSightReader_GetPointArrayStatus, 1,
   (char*)"V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"GetCellArrayStatus", PyvtkGenericEnSightReader_GetCellArrayStatus, 1,
   (char*)"V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"SetPointArrayStatus", PyvtkGenericEnSightReader_SetPointArrayStatus, 1,
   (char*)"V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"SetCellArrayStatus", PyvtkGenericEnSightReader_SetCellArrayStatus, 1,
   (char*)"V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {(char*)"SetByteOrderToBigEndian", PyvtkGenericEnSightReader_SetByteOrderToBigEndian, 1,
   (char*)"V.SetByteOrderToBigEndian()\nC++: void SetByteOrderToBigEndian()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"SetByteOrderToLittleEndian", PyvtkGenericEnSightReader_SetByteOrderToLittleEndian, 1,
   (char*)"V.SetByteOrderToLittleEndian()\nC++: void SetByteOrderToLittleEndian()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"SetByteOrder", PyvtkGenericEnSightReader_SetByteOrder, 1,
   (char*)"V.SetByteOrder(int)\nC++: void SetByteOrder(int a)\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"GetByteOrder", PyvtkGenericEnSightReader_GetByteOrder, 1,
   (char*)"V.GetByteOrder() -> int\nC++: int GetByteOrder()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"GetByteOrderAsString", PyvtkGenericEnSightReader_GetByteOrderAsString, 1,
   (char*)"V.GetByteOrderAsString() -> string\nC++: const char *GetByteOrderAsString()\n\nSet the byte order of the file (remember, more Unix workstations\nwrite big endian whereas PCs write little endian). Default is big\nendian (since most older PLOT3D files were written by\nworkstations).\n"},
  {(char*)"GetGeometryFileName", PyvtkGenericEnSightReader_GetGeometryFileName, 1,
   (char*)"V.GetGeometryFileName() -> string\nC++: char *GetGeometryFileName()\n\nGet the Geometry file name. Made public to allow access from apps\nrequiring detailed info about the Data contents\n"},
  {(char*)"SetParticleCoordinatesByIndex", PyvtkGenericEnSightReader_SetParticleCoordinatesByIndex, 1,
   (char*)"V.SetParticleCoordinatesByIndex(int)\nC++: void SetParticleCoordinatesByIndex(int a)\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"GetParticleCoordinatesByIndex", PyvtkGenericEnSightReader_GetParticleCoordinatesByIndex, 1,
   (char*)"V.GetParticleCoordinatesByIndex() -> int\nC++: int GetParticleCoordinatesByIndex()\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"ParticleCoordinatesByIndexOn", PyvtkGenericEnSightReader_ParticleCoordinatesByIndexOn, 1,
   (char*)"V.ParticleCoordinatesByIndexOn()\nC++: void ParticleCoordinatesByIndexOn()\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"ParticleCoordinatesByIndexOff", PyvtkGenericEnSightReader_ParticleCoordinatesByIndexOff, 1,
   (char*)"V.ParticleCoordinatesByIndexOff()\nC++: void ParticleCoordinatesByIndexOff()\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"CanReadFile", PyvtkGenericEnSightReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *casefilename)\n\nReturns true if the file pointed to by casefilename appears to be\na valid EnSight case file.\n"},
  {(char*)"GetReader", PyvtkGenericEnSightReader_GetReader, 1,
   (char*)"V.GetReader() -> vtkGenericEnSightReader\nC++: vtkGenericEnSightReader *GetReader()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericEnSightReader_StaticNew()
{
  return vtkGenericEnSightReader::New();
}

PyObject *PyVTKClass_vtkGenericEnSightReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericEnSightReader_StaticNew,
    PyvtkGenericEnSightReader_Methods,
    "vtkGenericEnSightReader", modulename,
    NULL, NULL,
    PyvtkGenericEnSightReader_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"ENSIGHT_6", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"ENSIGHT_6_BINARY", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"ENSIGHT_GOLD", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"ENSIGHT_GOLD_BINARY", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"ENSIGHT_MASTER_SERVER", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"FILE_BIG_ENDIAN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"FILE_LITTLE_ENDIAN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"FILE_UNKNOWN_ENDIAN", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkGenericEnSightReader_Doc()
{
  static const char *docstring[] = {
    "vtkGenericEnSightReader - class to read any type of EnSight files\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "The class vtkGenericEnSightReader allows the user to read an EnSight\ndata set without a priori knowledge of what type of EnSight data set\nit is.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericEnSightReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericEnSightReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericEnSightReader", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"SINGLE_PROCESS_MODE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"SPARSE_MODE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"NON_SPARSE_MODE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"IMPLICIT_STRUCTURED_MODE", o) != 0)
    {
    Py_DECREF(o);
    }

}

