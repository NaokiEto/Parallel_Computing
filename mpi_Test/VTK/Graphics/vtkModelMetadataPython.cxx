// python wrapper for vtkModelMetadata
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
#include "vtkModelMetadata.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkModelMetadata(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkModelMetadata(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkModelMetadataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkModelMetadataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkModelMetadata_Doc();


static PyObject *
PyvtkModelMetadata_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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
      tempr = op->vtkModelMetadata::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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
      tempr = op->vtkModelMetadata::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  vtkModelMetadata *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkModelMetadata::NewInstance();
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
PyvtkModelMetadata_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkModelMetadata *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkModelMetadata::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_PrintGlobalInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintGlobalInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrintGlobalInformation();
      }
    else
      {
      op->vtkModelMetadata::PrintGlobalInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_PrintLocalInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintLocalInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrintLocalInformation();
      }
    else
      {
      op->vtkModelMetadata::PrintLocalInformation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitle(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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
      tempr = op->vtkModelMetadata::GetTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_AddInformationLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInformationLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddInformationLine(temp0);
      }
    else
      {
      op->vtkModelMetadata::AddInformationLine(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfInformationLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInformationLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfInformationLines();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetNumberOfInformationLines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_AddQARecord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddQARecord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  char *temp2 = NULL;
  char *temp3 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->AddQARecord(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkModelMetadata::AddQARecord(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfQARecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfQARecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfQARecords();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetNumberOfQARecords();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStepIndex(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetTimeStepIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeStepIndex();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetTimeStepIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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
      tempr = op->vtkModelMetadata::GetNumberOfTimeSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimension();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfBlocks(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetNumberOfBlocks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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
      tempr = op->vtkModelMetadata::GetNumberOfBlocks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSumElementsPerBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSumElementsPerBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSumElementsPerBlock();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetSumElementsPerBlock();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSizeBlockAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeBlockAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSizeBlockAttributeArray();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetSizeBlockAttributeArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNumberOfNodeSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfNodeSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfNodeSets(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetNumberOfNodeSets(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfNodeSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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
      tempr = op->vtkModelMetadata::GetNumberOfNodeSets();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSumNodesPerNodeSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSumNodesPerNodeSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSumNodesPerNodeSet();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetSumNodesPerNodeSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSumDistFactPerNodeSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSumDistFactPerNodeSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSumDistFactPerNodeSet();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetSumDistFactPerNodeSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNumberOfSideSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSideSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSideSets(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetNumberOfSideSets(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfSideSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

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
      tempr = op->vtkModelMetadata::GetNumberOfSideSets();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSumSidesPerSideSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSumSidesPerSideSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSumSidesPerSideSet();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetSumSidesPerSideSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSumDistFactPerSideSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSumDistFactPerSideSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSumDistFactPerSideSet();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetSumDistFactPerSideSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfBlockProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlockProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfBlockProperties();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetNumberOfBlockProperties();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfNodeSetProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeSetProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfNodeSetProperties();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetNumberOfNodeSetProperties();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfSideSetProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideSetProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSideSetProperties();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetNumberOfSideSetProperties();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfGlobalVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGlobalVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfGlobalVariables();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetNumberOfGlobalVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetAllVariablesDefinedInAllBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllVariablesDefinedInAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllVariablesDefinedInAllBlocks(temp0);
      }
    else
      {
      op->vtkModelMetadata::SetAllVariablesDefinedInAllBlocks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_AllVariablesDefinedInAllBlocksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllVariablesDefinedInAllBlocksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllVariablesDefinedInAllBlocksOn();
      }
    else
      {
      op->vtkModelMetadata::AllVariablesDefinedInAllBlocksOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_AllVariablesDefinedInAllBlocksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllVariablesDefinedInAllBlocksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllVariablesDefinedInAllBlocksOff();
      }
    else
      {
      op->vtkModelMetadata::AllVariablesDefinedInAllBlocksOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetAllVariablesDefinedInAllBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllVariablesDefinedInAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAllVariablesDefinedInAllBlocks();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetAllVariablesDefinedInAllBlocks();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_ElementVariableIsDefinedInBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ElementVariableIsDefinedInBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  char *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->ElementVariableIsDefinedInBlock(temp0, temp1);
      }
    else
      {
      tempr = op->vtkModelMetadata::ElementVariableIsDefinedInBlock(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetOriginalNumberOfElementVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalNumberOfElementVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOriginalNumberOfElementVariables();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetOriginalNumberOfElementVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfElementVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfElementVariables();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetNumberOfElementVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetOriginalNumberOfNodeVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalNumberOfNodeVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOriginalNumberOfNodeVariables();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetOriginalNumberOfNodeVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfNodeVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfNodeVariables();
      }
    else
      {
      tempr = op->vtkModelMetadata::GetNumberOfNodeVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FindOriginalElementVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindOriginalElementVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  char *temp0 = NULL;
  int temp1;
  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->FindOriginalElementVariableName(temp0, temp1);
      }
    else
      {
      tempr = op->vtkModelMetadata::FindOriginalElementVariableName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FindOriginalNodeVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindOriginalNodeVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  char *temp0 = NULL;
  int temp1;
  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->FindOriginalNodeVariableName(temp0, temp1);
      }
    else
      {
      tempr = op->vtkModelMetadata::FindOriginalNodeVariableName(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_HasMetadata(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HasMetadata");

  vtkDataSet *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    tempr = vtkModelMetadata::HasMetadata(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_RemoveMetadata(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "RemoveMetadata");

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    vtkModelMetadata::RemoveMetadata(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_Pack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->Pack(temp0);
      }
    else
      {
      op->vtkModelMetadata::Pack(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_Unpack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unpack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  vtkDataSet *temp0 = NULL;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->Unpack(temp0, temp1);
      }
    else
      {
      tempr = op->vtkModelMetadata::Unpack(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_AddUGridElementVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUGridElementVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
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
      tempr = op->AddUGridElementVariable(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkModelMetadata::AddUGridElementVariable(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_RemoveUGridElementVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUGridElementVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->RemoveUGridElementVariable(temp0);
      }
    else
      {
      tempr = op->vtkModelMetadata::RemoveUGridElementVariable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_AddUGridNodeVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUGridNodeVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
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
      tempr = op->AddUGridNodeVariable(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkModelMetadata::AddUGridNodeVariable(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_RemoveUGridNodeVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUGridNodeVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->RemoveUGridNodeVariable(temp0);
      }
    else
      {
      tempr = op->vtkModelMetadata::RemoveUGridNodeVariable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_MergeModelMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeModelMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  vtkModelMetadata *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkModelMetadata"))
    {
    if (ap.IsBound())
      {
      tempr = op->MergeModelMetadata(temp0);
      }
    else
      {
      tempr = op->vtkModelMetadata::MergeModelMetadata(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_MergeGlobalInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeGlobalInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  vtkModelMetadata *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkModelMetadata"))
    {
    if (ap.IsBound())
      {
      tempr = op->MergeGlobalInformation(temp0);
      }
    else
      {
      tempr = op->vtkModelMetadata::MergeGlobalInformation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_ExtractModelMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractModelMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  vtkIdTypeArray *temp0 = NULL;
  vtkDataSet *temp1 = NULL;
  vtkModelMetadata *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      tempr = op->ExtractModelMetadata(temp0, temp1);
      }
    else
      {
      tempr = op->vtkModelMetadata::ExtractModelMetadata(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_ExtractGlobalMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractGlobalMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  vtkModelMetadata *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->ExtractGlobalMetadata();
      }
    else
      {
      tempr = op->vtkModelMetadata::ExtractGlobalMetadata();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeAllGlobalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeAllGlobalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeAllGlobalData();
      }
    else
      {
      op->vtkModelMetadata::FreeAllGlobalData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeAllLocalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeAllLocalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeAllLocalData();
      }
    else
      {
      op->vtkModelMetadata::FreeAllLocalData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeBlockDependentData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeBlockDependentData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeBlockDependentData();
      }
    else
      {
      op->vtkModelMetadata::FreeBlockDependentData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeOriginalElementVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeOriginalElementVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeOriginalElementVariableNames();
      }
    else
      {
      op->vtkModelMetadata::FreeOriginalElementVariableNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeOriginalNodeVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeOriginalNodeVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeOriginalNodeVariableNames();
      }
    else
      {
      op->vtkModelMetadata::FreeOriginalNodeVariableNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeUsedElementVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeUsedElementVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeUsedElementVariableNames();
      }
    else
      {
      op->vtkModelMetadata::FreeUsedElementVariableNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeUsedNodeVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeUsedNodeVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeUsedNodeVariableNames();
      }
    else
      {
      op->vtkModelMetadata::FreeUsedNodeVariableNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeUsedElementVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeUsedElementVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeUsedElementVariables();
      }
    else
      {
      op->vtkModelMetadata::FreeUsedElementVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeUsedNodeVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeUsedNodeVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FreeUsedNodeVariables();
      }
    else
      {
      op->vtkModelMetadata::FreeUsedNodeVariables();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkModelMetadata::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetBlockLocalIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockLocalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBlockLocalIndex(temp0);
      }
    else
      {
      tempr = op->vtkModelMetadata::GetBlockLocalIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkModelMetadata_Methods[] = {
  {(char*)"GetClassName", PyvtkModelMetadata_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkModelMetadata_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkModelMetadata_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkModelMetadata\nC++: vtkModelMetadata *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkModelMetadata_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkModelMetadata\nC++: vtkModelMetadata *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"PrintGlobalInformation", PyvtkModelMetadata_PrintGlobalInformation, 1,
   (char*)"V.PrintGlobalInformation()\nC++: virtual void PrintGlobalInformation()\n\nThe global fields are those which pertain to the whole\n   file.  Examples are the title, information lines,\n   and list of block IDs.  This method prints out all the\n   global information.\n"},
  {(char*)"PrintLocalInformation", PyvtkModelMetadata_PrintLocalInformation, 1,
   (char*)"V.PrintLocalInformation()\nC++: virtual void PrintLocalInformation()\n\nThe local fields are those which depend on exactly which\n   blocks, which time step, and which variables you read in\n   from the file.  Examples are the number of cells in\n   each block, and the list of nodes in a node set, or the\n   value of the global variables at a time step.  If\n   VERBOSE_TESTING is defined in your execution environment,\n   this method will print more than mere counts, and actually\n   print a few of the IDs, distribution factors and so on.  If\n   VERY_VERBOSE_TESTING is defined, it will print out\n   all ID lists, distribution factor lists, and so on.\n"},
  {(char*)"SetTitle", PyvtkModelMetadata_SetTitle, 1,
   (char*)"V.SetTitle(string)\nC++: void SetTitle(char *)\n\nThe title of the dataset.\n"},
  {(char*)"GetTitle", PyvtkModelMetadata_GetTitle, 1,
   (char*)"V.GetTitle() -> string\nC++: const char *GetTitle()\n\nThe title of the dataset.\n"},
  {(char*)"AddInformationLine", PyvtkModelMetadata_AddInformationLine, 1,
   (char*)"V.AddInformationLine(string)\nC++: void AddInformationLine(char *info)\n\nAdd an information line.\n"},
  {(char*)"GetNumberOfInformationLines", PyvtkModelMetadata_GetNumberOfInformationLines, 1,
   (char*)"V.GetNumberOfInformationLines() -> int\nC++: int GetNumberOfInformationLines()\n\nGet the number of information lines.\n"},
  {(char*)"AddQARecord", PyvtkModelMetadata_AddQARecord, 1,
   (char*)"V.AddQARecord(string, string, string, string)\nC++: void AddQARecord(char *name, char *version, char *date,\n    char *time)\n\nAdd a QA record.  They fields are:\n   The code name\n   The code version number\n   The date (MM/DD/YY or NULL for today)\n   The time (HH:MM:SS or NULL for right now)\n"},
  {(char*)"GetNumberOfQARecords", PyvtkModelMetadata_GetNumberOfQARecords, 1,
   (char*)"V.GetNumberOfQARecords() -> int\nC++: int GetNumberOfQARecords()\n\nGet the number of QA records\n"},
  {(char*)"SetTimeStepIndex", PyvtkModelMetadata_SetTimeStepIndex, 1,
   (char*)"V.SetTimeStepIndex(int)\nC++: void SetTimeStepIndex(int a)\n\nSet the index of the time step represented by the results\n   data in the file attached to this ModelMetadata object.  Time\n   step indices start at 0 in this file, they start at 1 in\n   an Exodus file.\n"},
  {(char*)"GetTimeStepIndex", PyvtkModelMetadata_GetTimeStepIndex, 1,
   (char*)"V.GetTimeStepIndex() -> int\nC++: int GetTimeStepIndex()\n\nSet the index of the time step represented by the results\n   data in the file attached to this ModelMetadata object.  Time\n   step indices start at 0 in this file, they start at 1 in\n   an Exodus file.\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkModelMetadata_GetNumberOfTimeSteps, 1,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nSet the total number of time steps in the file,\n   and the value at each time step.  We use your time\n   step value array and delete it when we're done.\n"},
  {(char*)"GetDimension", PyvtkModelMetadata_GetDimension, 1,
   (char*)"V.GetDimension() -> int\nC++: int GetDimension()\n\nGet the dimension of the model.  This is also the number\n  of coordinate names.\n"},
  {(char*)"SetNumberOfBlocks", PyvtkModelMetadata_SetNumberOfBlocks, 1,
   (char*)"V.SetNumberOfBlocks(int)\nC++: void SetNumberOfBlocks(int a)\n\nThe number of blocks in the file.  Set this before setting\n  any of the block arrays.\n"},
  {(char*)"GetNumberOfBlocks", PyvtkModelMetadata_GetNumberOfBlocks, 1,
   (char*)"V.GetNumberOfBlocks() -> int\nC++: int GetNumberOfBlocks()\n\nThe number of blocks in the file.  Set this before setting\n  any of the block arrays.\n"},
  {(char*)"GetSumElementsPerBlock", PyvtkModelMetadata_GetSumElementsPerBlock, 1,
   (char*)"V.GetSumElementsPerBlock() -> int\nC++: int GetSumElementsPerBlock()\n\nGet the length of the list of elements in every block.\n"},
  {(char*)"GetSizeBlockAttributeArray", PyvtkModelMetadata_GetSizeBlockAttributeArray, 1,
   (char*)"V.GetSizeBlockAttributeArray() -> int\nC++: int GetSizeBlockAttributeArray()\n\nGet the length of the list of floating point block attributes.\n"},
  {(char*)"SetNumberOfNodeSets", PyvtkModelMetadata_SetNumberOfNodeSets, 1,
   (char*)"V.SetNumberOfNodeSets(int)\nC++: void SetNumberOfNodeSets(int a)\n\nThe number of node sets in the file.  Set this value before\n  setting the various node set arrays.\n"},
  {(char*)"GetNumberOfNodeSets", PyvtkModelMetadata_GetNumberOfNodeSets, 1,
   (char*)"V.GetNumberOfNodeSets() -> int\nC++: int GetNumberOfNodeSets()\n\nThe number of node sets in the file.  Set this value before\n  setting the various node set arrays.\n"},
  {(char*)"GetSumNodesPerNodeSet", PyvtkModelMetadata_GetSumNodesPerNodeSet, 1,
   (char*)"V.GetSumNodesPerNodeSet() -> int\nC++: int GetSumNodesPerNodeSet()\n\nGet the total number of nodes in all node sets\n"},
  {(char*)"GetSumDistFactPerNodeSet", PyvtkModelMetadata_GetSumDistFactPerNodeSet, 1,
   (char*)"V.GetSumDistFactPerNodeSet() -> int\nC++: int GetSumDistFactPerNodeSet()\n\nGet the total number of distribution factors stored for all node\nsets\n"},
  {(char*)"SetNumberOfSideSets", PyvtkModelMetadata_SetNumberOfSideSets, 1,
   (char*)"V.SetNumberOfSideSets(int)\nC++: void SetNumberOfSideSets(int a)\n\nSet or get the number of side sets.  Set this value before\n  setting any of the other side set arrays.\n"},
  {(char*)"GetNumberOfSideSets", PyvtkModelMetadata_GetNumberOfSideSets, 1,
   (char*)"V.GetNumberOfSideSets() -> int\nC++: int GetNumberOfSideSets()\n\nSet or get the number of side sets.  Set this value before\n  setting any of the other side set arrays.\n"},
  {(char*)"GetSumSidesPerSideSet", PyvtkModelMetadata_GetSumSidesPerSideSet, 1,
   (char*)"V.GetSumSidesPerSideSet() -> int\nC++: int GetSumSidesPerSideSet()\n\nGet the total number of sides in all side sets\n"},
  {(char*)"GetSumDistFactPerSideSet", PyvtkModelMetadata_GetSumDistFactPerSideSet, 1,
   (char*)"V.GetSumDistFactPerSideSet() -> int\nC++: int GetSumDistFactPerSideSet()\n\nGet the total number of distribution factors stored for all side\nsets\n"},
  {(char*)"GetNumberOfBlockProperties", PyvtkModelMetadata_GetNumberOfBlockProperties, 1,
   (char*)"V.GetNumberOfBlockProperties() -> int\nC++: int GetNumberOfBlockProperties()\n\nThe number of block properties (global variables)\n"},
  {(char*)"GetNumberOfNodeSetProperties", PyvtkModelMetadata_GetNumberOfNodeSetProperties, 1,
   (char*)"V.GetNumberOfNodeSetProperties() -> int\nC++: int GetNumberOfNodeSetProperties()\n\nThe number of node set properties (global variables)\n"},
  {(char*)"GetNumberOfSideSetProperties", PyvtkModelMetadata_GetNumberOfSideSetProperties, 1,
   (char*)"V.GetNumberOfSideSetProperties() -> int\nC++: int GetNumberOfSideSetProperties()\n\nThe number of side set properties (global variables)\n"},
  {(char*)"GetNumberOfGlobalVariables", PyvtkModelMetadata_GetNumberOfGlobalVariables, 1,
   (char*)"V.GetNumberOfGlobalVariables() -> int\nC++: int GetNumberOfGlobalVariables()\n\nGet the number of global variables per time step\n"},
  {(char*)"SetAllVariablesDefinedInAllBlocks", PyvtkModelMetadata_SetAllVariablesDefinedInAllBlocks, 1,
   (char*)"V.SetAllVariablesDefinedInAllBlocks(int)\nC++: void SetAllVariablesDefinedInAllBlocks(int a)\n\nInstead of a truth table of all \"1\"s, you can set this\n  instance variable to indicate that all variables are\n  defined in all blocks.\n"},
  {(char*)"AllVariablesDefinedInAllBlocksOn", PyvtkModelMetadata_AllVariablesDefinedInAllBlocksOn, 1,
   (char*)"V.AllVariablesDefinedInAllBlocksOn()\nC++: void AllVariablesDefinedInAllBlocksOn()\n\nInstead of a truth table of all \"1\"s, you can set this\n  instance variable to indicate that all variables are\n  defined in all blocks.\n"},
  {(char*)"AllVariablesDefinedInAllBlocksOff", PyvtkModelMetadata_AllVariablesDefinedInAllBlocksOff, 1,
   (char*)"V.AllVariablesDefinedInAllBlocksOff()\nC++: void AllVariablesDefinedInAllBlocksOff()\n\nInstead of a truth table of all \"1\"s, you can set this\n  instance variable to indicate that all variables are\n  defined in all blocks.\n"},
  {(char*)"GetAllVariablesDefinedInAllBlocks", PyvtkModelMetadata_GetAllVariablesDefinedInAllBlocks, 1,
   (char*)"V.GetAllVariablesDefinedInAllBlocks() -> int\nC++: int GetAllVariablesDefinedInAllBlocks()\n\nInstead of a truth table of all \"1\"s, you can set this\n  instance variable to indicate that all variables are\n  defined in all blocks.\n"},
  {(char*)"ElementVariableIsDefinedInBlock", PyvtkModelMetadata_ElementVariableIsDefinedInBlock, 1,
   (char*)"V.ElementVariableIsDefinedInBlock(string, int) -> int\nC++: int ElementVariableIsDefinedInBlock(char *varname,\n    int blockId)\n\nIf the element variable named is defined for the block Id\n  provided (in the element variable truth table) return a\n  1, otherwise return a 0.  If the variable name or block Id\n  are unrecognized, the default value of 1 is returned.\n  (This is an \"original\" variable name, from the file,\n  not a name created for the vtkUnstructuredGrid.  Use\n  FindOriginal*VariableName to map between the two.)\n"},
  {(char*)"GetOriginalNumberOfElementVariables", PyvtkModelMetadata_GetOriginalNumberOfElementVariables, 1,
   (char*)"V.GetOriginalNumberOfElementVariables() -> int\nC++: int GetOriginalNumberOfElementVariables()\n\nThe ModelMetadata object may contain these lists:\n   o  the variables in the original data file\n   o  the variables created in the u grid from those original\nvariables\n   o  a mapping from the grid variable names to the original\nnames\n   o  a list of the number of components each grid variable has\n\n\n  (Example: Variables in Exodus II files are all scalars.  Some\nare\n  combined by the ExodusReader into vector variables in the\ngrid.)\n\n\n  These methods return names of the original variables, the names\n  of the grid variables, a list of the number of components in\n  each grid variable, and a list of the index into the list of\n  original variable names where the original name of the first\n  component of a grid variable may be found.  The names of\nsubsequent\n  components would immediately follow the name of the the first\n  component.\n"},
  {(char*)"GetNumberOfElementVariables", PyvtkModelMetadata_GetNumberOfElementVariables, 1,
   (char*)"V.GetNumberOfElementVariables() -> int\nC++: int GetNumberOfElementVariables()\n\nThe ModelMetadata object may contain these lists:\n   o  the variables in the original data file\n   o  the variables created in the u grid from those original\nvariables\n   o  a mapping from the grid variable names to the original\nnames\n   o  a list of the number of components each grid variable has\n\n\n  (Example: Variables in Exodus II files are all scalars.  Some\nare\n  combined by the ExodusReader into vector variables in the\ngrid.)\n\n\n  These methods return names of the original variables, the names\n  of the grid variables, a list of the number of components in\n  each grid variable, and a list of the index into the list of\n  original variable names where the original name of the first\n  component of a grid variable may be found.  The names of\nsubsequent\n  components would immediately follow the name of the the first\n  component.\n"},
  {(char*)"GetOriginalNumberOfNodeVariables", PyvtkModelMetadata_GetOriginalNumberOfNodeVariables, 1,
   (char*)"V.GetOriginalNumberOfNodeVariables() -> int\nC++: int GetOriginalNumberOfNodeVariables()\n\n"},
  {(char*)"GetNumberOfNodeVariables", PyvtkModelMetadata_GetNumberOfNodeVariables, 1,
   (char*)"V.GetNumberOfNodeVariables() -> int\nC++: int GetNumberOfNodeVariables()\n\n"},
  {(char*)"FindOriginalElementVariableName", PyvtkModelMetadata_FindOriginalElementVariableName, 1,
   (char*)"V.FindOriginalElementVariableName(string, int) -> string\nC++: char *FindOriginalElementVariableName(const char *name,\n    int component)\n\nGiven the name of an element variable the vtkUnstructuredGrid\n  described by this ModelMetadata, and a component number, give\n  the name of the scalar array in the original\n  file that turned into that component when the file was\n  read into VTK.\n"},
  {(char*)"FindOriginalNodeVariableName", PyvtkModelMetadata_FindOriginalNodeVariableName, 1,
   (char*)"V.FindOriginalNodeVariableName(string, int) -> string\nC++: char *FindOriginalNodeVariableName(const char *name,\n    int component)\n\nGiven the name of an node variable the vtkUnstructuredGrid\n  described by this ModelMetadata, and a component number, give\n  the name of the scalar array in the original\n  file that turned into that component when the file was\n  read into VTK.\n"},
  {(char*)"HasMetadata", PyvtkModelMetadata_HasMetadata, 1,
   (char*)"V.HasMetadata(vtkDataSet) -> int\nC++: static int HasMetadata(vtkDataSet *grid)\n\nStatic function that returns 1 if the vtkUnstructuredGrid\n  has metadata packed into it's field arrays, and 0 otherwise.\n"},
  {(char*)"RemoveMetadata", PyvtkModelMetadata_RemoveMetadata, 1,
   (char*)"V.RemoveMetadata(vtkDataSet)\nC++: static void RemoveMetadata(vtkDataSet *grid)\n\nStatic function that removes the packed metadata arrays\n  from a dataset.\n"},
  {(char*)"Pack", PyvtkModelMetadata_Pack, 1,
   (char*)"V.Pack(vtkDataSet)\nC++: void Pack(vtkDataSet *ugrid)\n\nPack this object's metadata into a field array of a dataset.\n"},
  {(char*)"Unpack", PyvtkModelMetadata_Unpack, 1,
   (char*)"V.Unpack(vtkDataSet, int) -> int\nC++: int Unpack(vtkDataSet *ugrid, int deleteIt)\n\nUnpack the metadata stored in a dataset,\n  and initialize this object with it.  Return 1 if there's\n  no metadata packed into the grid, 0 if OK.\n  If deleteIt is ON, then delete the grid's packed data after\n  unpacking it into the object.\n"},
  {(char*)"AddUGridElementVariable", PyvtkModelMetadata_AddUGridElementVariable, 1,
   (char*)"V.AddUGridElementVariable(string, string, int) -> int\nC++: int AddUGridElementVariable(char *ugridVarName,\n    char *origName, int numComponents)\n\nIn order to write Exodus files from vtkUnstructuredGrid\n  objects that were read from Exodus files, we need to know\n  the mapping from variable names in the UGrid to variable\n  names in the Exodus file.  (The Exodus reader combines\n  scalar variables with similar names into vectors in the\n  UGrid.)  When building the UGrid to which this\n  ModelMetadata refers, add each element and node variable\n  name with this call, including the name of original variable\n  that yielded it's first component, and the number of\ncomponents.\n  If a variable is removed from the UGrid, remove it from\n  the ModelMetadata.  (If this information is missing or\n  incomplete, the ExodusIIWriter can still do something\n  sensible in creating names for variables.)\n"},
  {(char*)"RemoveUGridElementVariable", PyvtkModelMetadata_RemoveUGridElementVariable, 1,
   (char*)"V.RemoveUGridElementVariable(string) -> int\nC++: int RemoveUGridElementVariable(char *ugridVarName)\n\nIn order to write Exodus files from vtkUnstructuredGrid\n  objects that were read from Exodus files, we need to know\n  the mapping from variable names in the UGrid to variable\n  names in the Exodus file.  (The Exodus reader combines\n  scalar variables with similar names into vectors in the\n  UGrid.)  When building the UGrid to which this\n  ModelMetadata refers, add each element and node variable\n  name with this call, including the name of original variable\n  that yielded it's first component, and the number of\ncomponents.\n  If a variable is removed from the UGrid, remove it from\n  the ModelMetadata.  (If this information is missing or\n  incomplete, the ExodusIIWriter can still do something\n  sensible in creating names for variables.)\n"},
  {(char*)"AddUGridNodeVariable", PyvtkModelMetadata_AddUGridNodeVariable, 1,
   (char*)"V.AddUGridNodeVariable(string, string, int) -> int\nC++: int AddUGridNodeVariable(char *ugridVarName, char *origName,\n    int numComponents)\n\n"},
  {(char*)"RemoveUGridNodeVariable", PyvtkModelMetadata_RemoveUGridNodeVariable, 1,
   (char*)"V.RemoveUGridNodeVariable(string) -> int\nC++: int RemoveUGridNodeVariable(char *ugridVarName)\n\n"},
  {(char*)"MergeModelMetadata", PyvtkModelMetadata_MergeModelMetadata, 1,
   (char*)"V.MergeModelMetadata(vtkModelMetadata) -> int\nC++: int MergeModelMetadata(const vtkModelMetadata *em)\n\nIn VTK we take vtkUnstructuredGrids and perform\n  operations on them, including subsetting and merging\n  grids.  We need to modify the metadata object\n  when this happens.  MergeModelMetadata merges the supplied\n  model (both global and local metadata) into this model.\n  The models must be from the same file set.\n\n\n  MergeModelMetadata assumes that no element in one metadata\n  object appears in the other.  (It doesn't test for duplicate\n  elements when merging the two metadata objects.)\n"},
  {(char*)"MergeGlobalInformation", PyvtkModelMetadata_MergeGlobalInformation, 1,
   (char*)"V.MergeGlobalInformation(vtkModelMetadata) -> int\nC++: int MergeGlobalInformation(const vtkModelMetadata *em)\n\nThe metadata is divided into global metadata and local\n  metadata.  MergeGlobalInformation merges just the\n  global metadata of the supplied object into the\n  global metadata of this object.\n"},
  {(char*)"ExtractModelMetadata", PyvtkModelMetadata_ExtractModelMetadata, 1,
   (char*)"V.ExtractModelMetadata(vtkIdTypeArray, vtkDataSet)\n    -> vtkModelMetadata\nC++: vtkModelMetadata *ExtractModelMetadata(\n    vtkIdTypeArray *globalCellIdList, vtkDataSet *grid)\n\nCreate and return a new metadata object which contains\n  the information for the subset of global cell IDs provided.\n  We need the grid containing the cells so we can find point\n  Ids as well, and also the name of the global cell ID array\n  and the name of the global point ID array.\n"},
  {(char*)"ExtractGlobalMetadata", PyvtkModelMetadata_ExtractGlobalMetadata, 1,
   (char*)"V.ExtractGlobalMetadata() -> vtkModelMetadata\nC++: vtkModelMetadata *ExtractGlobalMetadata()\n\nCreate and return a new metadata object containing only the\n  global metadata of this metadata object.\n"},
  {(char*)"FreeAllGlobalData", PyvtkModelMetadata_FreeAllGlobalData, 1,
   (char*)"V.FreeAllGlobalData()\nC++: void FreeAllGlobalData()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"FreeAllLocalData", PyvtkModelMetadata_FreeAllLocalData, 1,
   (char*)"V.FreeAllLocalData()\nC++: void FreeAllLocalData()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"FreeBlockDependentData", PyvtkModelMetadata_FreeBlockDependentData, 1,
   (char*)"V.FreeBlockDependentData()\nC++: void FreeBlockDependentData()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"FreeOriginalElementVariableNames", PyvtkModelMetadata_FreeOriginalElementVariableNames, 1,
   (char*)"V.FreeOriginalElementVariableNames()\nC++: void FreeOriginalElementVariableNames()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"FreeOriginalNodeVariableNames", PyvtkModelMetadata_FreeOriginalNodeVariableNames, 1,
   (char*)"V.FreeOriginalNodeVariableNames()\nC++: void FreeOriginalNodeVariableNames()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"FreeUsedElementVariableNames", PyvtkModelMetadata_FreeUsedElementVariableNames, 1,
   (char*)"V.FreeUsedElementVariableNames()\nC++: void FreeUsedElementVariableNames()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"FreeUsedNodeVariableNames", PyvtkModelMetadata_FreeUsedNodeVariableNames, 1,
   (char*)"V.FreeUsedNodeVariableNames()\nC++: void FreeUsedNodeVariableNames()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"FreeUsedElementVariables", PyvtkModelMetadata_FreeUsedElementVariables, 1,
   (char*)"V.FreeUsedElementVariables()\nC++: void FreeUsedElementVariables()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"FreeUsedNodeVariables", PyvtkModelMetadata_FreeUsedNodeVariables, 1,
   (char*)"V.FreeUsedNodeVariables()\nC++: void FreeUsedNodeVariables()\n\nFree selected portions of the metadata when updating values\n  in the vtkModelMetadata object.  Resetting a particular field,\n  (i.e. SetNodeSetIds) frees the previous setting, but if you\n  are not setting every field, you may want to do a wholesale\n  \"Free\" first.\n\n\n  FreeAllGlobalData frees all the fields which don't depend on\n    which time step, which blocks, or which variables are in the\ninput.\n  FreeAllLocalData frees all the fields which do depend on which\n    time step, blocks or variables are in the input.\n  FreeBlockDependentData frees all metadata fields which depend\non\n    which blocks were read in.\n"},
  {(char*)"Reset", PyvtkModelMetadata_Reset, 1,
   (char*)"V.Reset()\nC++: void Reset()\n\nSet the object back to it's initial state\n"},
  {(char*)"GetBlockLocalIndex", PyvtkModelMetadata_GetBlockLocalIndex, 1,
   (char*)"V.GetBlockLocalIndex(int) -> int\nC++: int GetBlockLocalIndex(int id)\n\nBlock information is stored in arrays.  This method returns\n  the array index for a given block ID.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkModelMetadata_StaticNew()
{
  return vtkModelMetadata::New();
}

PyObject *PyVTKClass_vtkModelMetadataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkModelMetadata_StaticNew,
    PyvtkModelMetadata_Methods,
    "vtkModelMetadata", modulename,
    NULL, NULL,
    PyvtkModelMetadata_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkModelMetadata_Doc()
{
  static const char *docstring[] = {
    "vtkModelMetadata - This class encapsulates the metadata\n\n",
    "Superclass: vtkObject\n\n",
    "This class is inspired by the Exodus II file format, but\n  because this class does not depend on the Exodus library, it\n  should be possible to use it to represent metadata for other\n  dataset file formats.  Sandia Labs uses it in their Exodus II\n  reader, their Exodus II writer and their EnSight writer.\n  vtkDistributedDataFilter looks for metadata attached to\n  it's input and redistributes the m",
    "etadata with the grid.\n\n\n  The fields in this class are those described in the document\n  \"EXODUS II: A Finite Element Data Model\", SAND92-2137, November\n1995.\n\n\n  Element and node IDs stored in this object must be global IDs,\n  in the event that the original dataset was partitioned across\n  many files.\n\n\n  One way to initialize this object is by using vtkExodusModel\n  (a Sandia class used by the ",
    "Sandia Exodus reader).\n  That class will take an open Exodus II file and a\n  vtkUnstructuredGrid drawn from it and will set the required fields.\n\n\n  Alternatively, you can use all the Set*\n  methods to set the individual fields. This class does not\n  copy the data, it simply uses your pointer. This\n  class will free the storage associated with your pointer\n  when the class is deleted.  Most fields",
    " have sensible defaults.\n  The only requirement is that if you are using this ModelMetadata\n  to write out an Exodus or EnSight file in parallel, you must\n  SetBlockIds and SetBlockIdArrayName.  Your vtkUnstructuredGrid must\n  have a cell array giving the block ID for each cell.\n\nCaveats:\n\n\n  The Exodus II library supports an optimized element order map\n  (section 3.7 in the SAND document).  It co",
    "ntains all the element\n  IDs, listed in the order in which a solver should process them.\n  We don't include this, and won't unless there is a request.\n\n\n  There is an assumption in some classes that the name of the cell\n  array containing global element ids is \"GlobalElementId\" and the\n  name of the point array containing global node ids is\n\"GlobalNodeId\".\n  (element == cell) and (node == point).\n",
    "\nSee also:\n\n\n  vtkDistributedDataFilter vtkExtractCells\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkModelMetadata(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkModelMetadataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkModelMetadata", o) != 0)
    {
    Py_DECREF(o);
    }

}

