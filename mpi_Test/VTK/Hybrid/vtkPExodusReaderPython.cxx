// python wrapper for vtkPExodusReader
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
#include "vtkPExodusReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPExodusReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPExodusReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPExodusReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPExodusReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExodusReaderNew
extern "C" { PyObject *PyVTKClass_vtkExodusReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkExodusReaderNew
#endif

static const char **PyvtkPExodusReader_Doc();


static PyObject *
PyvtkPExodusReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

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
      tempr = op->vtkPExodusReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

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
      tempr = op->vtkPExodusReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

  vtkPExodusReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPExodusReader::NewInstance();
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
PyvtkPExodusReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPExodusReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPExodusReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_SetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePattern(temp0);
      }
    else
      {
      op->vtkPExodusReader::SetFilePattern(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_GetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFilePattern();
      }
    else
      {
      tempr = op->vtkPExodusReader::GetFilePattern();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_SetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFilePrefix(temp0);
      }
    else
      {
      op->vtkPExodusReader::SetFilePrefix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_GetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFilePrefix();
      }
    else
      {
      tempr = op->vtkPExodusReader::GetFilePrefix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_SetFileRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetFileRange(temp0, temp1);
      }
    else
      {
      op->vtkPExodusReader::SetFileRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_GetFileRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileRange();
      }
    else
      {
      tempr = op->vtkPExodusReader::GetFileRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

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
      op->vtkPExodusReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_GetNumberOfFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFileNames();
      }
    else
      {
      tempr = op->vtkPExodusReader::GetNumberOfFileNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_GetNumberOfFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfFiles();
      }
    else
      {
      tempr = op->vtkPExodusReader::GetNumberOfFiles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_SetGenerateFileIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFileIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

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
      op->vtkPExodusReader::SetGenerateFileIdArray(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_GetGenerateFileIdArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFileIdArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

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
      tempr = op->vtkPExodusReader::GetGenerateFileIdArray();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_GenerateFileIdArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFileIdArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateFileIdArrayOn();
      }
    else
      {
      op->vtkPExodusReader::GenerateFileIdArrayOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_GenerateFileIdArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFileIdArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateFileIdArrayOff();
      }
    else
      {
      op->vtkPExodusReader::GenerateFileIdArrayOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_GetTotalNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

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
      tempr = op->vtkPExodusReader::GetTotalNumberOfElements();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_GetTotalNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

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
      tempr = op->vtkPExodusReader::GetTotalNumberOfNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_GetNumberOfVariableArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariableArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

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
      tempr = op->vtkPExodusReader::GetNumberOfVariableArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_GetVariableArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

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
      tempr = op->vtkPExodusReader::GetVariableArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_EnableDSPFiltering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableDSPFiltering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableDSPFiltering();
      }
    else
      {
      op->vtkPExodusReader::EnableDSPFiltering();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_AddFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

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
      op->vtkPExodusReader::AddFilter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_StartAddingFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartAddingFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartAddingFilter();
      }
    else
      {
      op->vtkPExodusReader::StartAddingFilter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_AddFilterInputVar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFilterInputVar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

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
      op->vtkPExodusReader::AddFilterInputVar(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_AddFilterOutputVar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFilterOutputVar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

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
      op->vtkPExodusReader::AddFilterOutputVar(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_AddFilterNumeratorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFilterNumeratorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

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
      op->vtkPExodusReader::AddFilterNumeratorWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_AddFilterForwardNumeratorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFilterForwardNumeratorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

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
      op->vtkPExodusReader::AddFilterForwardNumeratorWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_AddFilterDenominatorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFilterDenominatorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

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
      op->vtkPExodusReader::AddFilterDenominatorWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_FinishAddingFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FinishAddingFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FinishAddingFilter();
      }
    else
      {
      op->vtkPExodusReader::FinishAddingFilter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExodusReader_RemoveFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExodusReader *op = static_cast<vtkPExodusReader *>(vp);

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
      op->vtkPExodusReader::RemoveFilter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPExodusReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPExodusReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPExodusReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPExodusReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPExodusReader\nC++: vtkPExodusReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPExodusReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPExodusReader\nC++: vtkPExodusReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFilePattern", PyvtkPExodusReader_SetFilePattern, 1,
   (char*)"V.SetFilePattern(string)\nC++: void SetFilePattern(char *)\n\nThese methods tell the reader that the data is ditributed across\nmultiple files. This is for distributed execution. It this case,\npieces are mapped to files. The pattern should have one %d to\nformat the file number. FileNumberRange is used to generate file\nnumbers. I was thinking of having an arbitrary list of file\nnumbers. This may happen in the future. (That is why there is no\nGetFileNumberRange method.\n"},
  {(char*)"GetFilePattern", PyvtkPExodusReader_GetFilePattern, 1,
   (char*)"V.GetFilePattern() -> string\nC++: char *GetFilePattern()\n\nThese methods tell the reader that the data is ditributed across\nmultiple files. This is for distributed execution. It this case,\npieces are mapped to files. The pattern should have one %d to\nformat the file number. FileNumberRange is used to generate file\nnumbers. I was thinking of having an arbitrary list of file\nnumbers. This may happen in the future. (That is why there is no\nGetFileNumberRange method.\n"},
  {(char*)"SetFilePrefix", PyvtkPExodusReader_SetFilePrefix, 1,
   (char*)"V.SetFilePrefix(string)\nC++: void SetFilePrefix(char *)\n\nThese methods tell the reader that the data is ditributed across\nmultiple files. This is for distributed execution. It this case,\npieces are mapped to files. The pattern should have one %d to\nformat the file number. FileNumberRange is used to generate file\nnumbers. I was thinking of having an arbitrary list of file\nnumbers. This may happen in the future. (That is why there is no\nGetFileNumberRange method.\n"},
  {(char*)"GetFilePrefix", PyvtkPExodusReader_GetFilePrefix, 1,
   (char*)"V.GetFilePrefix() -> string\nC++: char *GetFilePrefix()\n\nThese methods tell the reader that the data is ditributed across\nmultiple files. This is for distributed execution. It this case,\npieces are mapped to files. The pattern should have one %d to\nformat the file number. FileNumberRange is used to generate file\nnumbers. I was thinking of having an arbitrary list of file\nnumbers. This may happen in the future. (That is why there is no\nGetFileNumberRange method.\n"},
  {(char*)"SetFileRange", PyvtkPExodusReader_SetFileRange, 1,
   (char*)"V.SetFileRange(int, int)\nC++: void SetFileRange(int, int)\n\nSet the range of files that are being loaded. The range for\nsingle file should add to 0.\n"},
  {(char*)"GetFileRange", PyvtkPExodusReader_GetFileRange, 1,
   (char*)"V.GetFileRange() -> (int, int)\nC++: int *GetFileRange()\n\n"},
  {(char*)"SetFileName", PyvtkPExodusReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: virtual void SetFileName(const char *name)\n\n"},
  {(char*)"GetNumberOfFileNames", PyvtkPExodusReader_GetNumberOfFileNames, 1,
   (char*)"V.GetNumberOfFileNames() -> int\nC++: int GetNumberOfFileNames()\n\nReturn number of file names set in SetFileNames\n"},
  {(char*)"GetNumberOfFiles", PyvtkPExodusReader_GetNumberOfFiles, 1,
   (char*)"V.GetNumberOfFiles() -> int\nC++: int GetNumberOfFiles()\n\nReturn the number of files to be read.\n"},
  {(char*)"SetGenerateFileIdArray", PyvtkPExodusReader_SetGenerateFileIdArray, 1,
   (char*)"V.SetGenerateFileIdArray(int)\nC++: void SetGenerateFileIdArray(int flag)\n\nExtra cell data array that can be generated.  By default, this\narray is OFF.  The value of the array is the integer id which is\npart of the name of the file from which the cell was read. The\nname of the array is \"vtkFileId\".\n"},
  {(char*)"GetGenerateFileIdArray", PyvtkPExodusReader_GetGenerateFileIdArray, 1,
   (char*)"V.GetGenerateFileIdArray() -> int\nC++: int GetGenerateFileIdArray()\n\nExtra cell data array that can be generated.  By default, this\narray is OFF.  The value of the array is the integer id which is\npart of the name of the file from which the cell was read. The\nname of the array is \"vtkFileId\".\n"},
  {(char*)"GenerateFileIdArrayOn", PyvtkPExodusReader_GenerateFileIdArrayOn, 1,
   (char*)"V.GenerateFileIdArrayOn()\nC++: void GenerateFileIdArrayOn()\n\nExtra cell data array that can be generated.  By default, this\narray is OFF.  The value of the array is the integer id which is\npart of the name of the file from which the cell was read. The\nname of the array is \"vtkFileId\".\n"},
  {(char*)"GenerateFileIdArrayOff", PyvtkPExodusReader_GenerateFileIdArrayOff, 1,
   (char*)"V.GenerateFileIdArrayOff()\nC++: void GenerateFileIdArrayOff()\n\nExtra cell data array that can be generated.  By default, this\narray is OFF.  The value of the array is the integer id which is\npart of the name of the file from which the cell was read. The\nname of the array is \"vtkFileId\".\n"},
  {(char*)"GetTotalNumberOfElements", PyvtkPExodusReader_GetTotalNumberOfElements, 1,
   (char*)"V.GetTotalNumberOfElements() -> int\nC++: virtual int GetTotalNumberOfElements()\n\nExtra cell data array that can be generated.  By default, this\narray is OFF.  The value of the array is the integer id which is\npart of the name of the file from which the cell was read. The\nname of the array is \"vtkFileId\".\n"},
  {(char*)"GetTotalNumberOfNodes", PyvtkPExodusReader_GetTotalNumberOfNodes, 1,
   (char*)"V.GetTotalNumberOfNodes() -> int\nC++: virtual int GetTotalNumberOfNodes()\n\nExtra cell data array that can be generated.  By default, this\narray is OFF.  The value of the array is the integer id which is\npart of the name of the file from which the cell was read. The\nname of the array is \"vtkFileId\".\n"},
  {(char*)"GetNumberOfVariableArrays", PyvtkPExodusReader_GetNumberOfVariableArrays, 1,
   (char*)"V.GetNumberOfVariableArrays() -> int\nC++: int GetNumberOfVariableArrays()\n\n"},
  {(char*)"GetVariableArrayName", PyvtkPExodusReader_GetVariableArrayName, 1,
   (char*)"V.GetVariableArrayName(int) -> string\nC++: const char *GetVariableArrayName(int a_which)\n\n"},
  {(char*)"EnableDSPFiltering", PyvtkPExodusReader_EnableDSPFiltering, 1,
   (char*)"V.EnableDSPFiltering()\nC++: void EnableDSPFiltering()\n\n"},
  {(char*)"AddFilter", PyvtkPExodusReader_AddFilter, 1,
   (char*)"V.AddFilter(vtkDSPFilterDefinition)\nC++: void AddFilter(vtkDSPFilterDefinition *a_filter)\n\n"},
  {(char*)"StartAddingFilter", PyvtkPExodusReader_StartAddingFilter, 1,
   (char*)"V.StartAddingFilter()\nC++: void StartAddingFilter()\n\n"},
  {(char*)"AddFilterInputVar", PyvtkPExodusReader_AddFilterInputVar, 1,
   (char*)"V.AddFilterInputVar(string)\nC++: void AddFilterInputVar(char *name)\n\n"},
  {(char*)"AddFilterOutputVar", PyvtkPExodusReader_AddFilterOutputVar, 1,
   (char*)"V.AddFilterOutputVar(string)\nC++: void AddFilterOutputVar(char *name)\n\n"},
  {(char*)"AddFilterNumeratorWeight", PyvtkPExodusReader_AddFilterNumeratorWeight, 1,
   (char*)"V.AddFilterNumeratorWeight(float)\nC++: void AddFilterNumeratorWeight(double weight)\n\n"},
  {(char*)"AddFilterForwardNumeratorWeight", PyvtkPExodusReader_AddFilterForwardNumeratorWeight, 1,
   (char*)"V.AddFilterForwardNumeratorWeight(float)\nC++: void AddFilterForwardNumeratorWeight(double weight)\n\n"},
  {(char*)"AddFilterDenominatorWeight", PyvtkPExodusReader_AddFilterDenominatorWeight, 1,
   (char*)"V.AddFilterDenominatorWeight(float)\nC++: void AddFilterDenominatorWeight(double weight)\n\n"},
  {(char*)"FinishAddingFilter", PyvtkPExodusReader_FinishAddingFilter, 1,
   (char*)"V.FinishAddingFilter()\nC++: void FinishAddingFilter()\n\n"},
  {(char*)"RemoveFilter", PyvtkPExodusReader_RemoveFilter, 1,
   (char*)"V.RemoveFilter(string)\nC++: void RemoveFilter(char *a_outputVariableName)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPExodusReader_StaticNew()
{
  return vtkPExodusReader::New();
}

PyObject *PyVTKClass_vtkPExodusReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPExodusReader_StaticNew,
    PyvtkPExodusReader_Methods,
    "vtkPExodusReader", modulename,
    NULL, NULL,
    PyvtkPExodusReader_Doc(),
    PyVTKClass_vtkExodusReaderNew(modulename));
  return cls;
}

const char **PyvtkPExodusReader_Doc()
{
  static const char *docstring[] = {
    "vtkPExodusReader - Read exodus 2 files .ex2\n\n",
    "Superclass: vtkExodusReader\n\n",
    "vtkPExodusReader is a unstructured grid source object that reads\nPExodusReaderII files. Most of the meta data associated with the file\nis loaded when UpdateInformation is called. This includes information\nlike Title, number of blocks, number and names of arrays. This data\ncan be retrieved from methods in this reader. Separate arrays that\nare meant to be a single vector, are combined internally for",
    "\nconvenience. To be combined, the array names have to be identical\nexcept for a trailing X,Y and Z (or x,y,z). By default all cell and\npoint arrays are loaded. However, the user can flag arrays not to\nload with the methods \"SetPointDataArrayLoadFlag\" and\n\"SetCellDataArrayLoadFlag\". The reader responds to piece requests by\nloading only a range of the possible blocks. Unused points are\nfiltered out ",
    "internally.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPExodusReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPExodusReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPExodusReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

