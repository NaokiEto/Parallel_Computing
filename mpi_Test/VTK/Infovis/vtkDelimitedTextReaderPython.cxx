// python wrapper for vtkDelimitedTextReader
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
#include "vtkUnicodeString.h"
#include "vtkStdString.h"
#include "vtkDelimitedTextReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDelimitedTextReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDelimitedTextReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDelimitedTextReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDelimitedTextReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkDelimitedTextReader_Doc();


static PyObject *
PyvtkDelimitedTextReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

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
      tempr = op->vtkDelimitedTextReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

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
      tempr = op->vtkDelimitedTextReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkDelimitedTextReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::NewInstance();
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
PyvtkDelimitedTextReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDelimitedTextReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDelimitedTextReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

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
      tempr = op->vtkDelimitedTextReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

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
      op->vtkDelimitedTextReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUnicodeCharacterSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnicodeCharacterSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUnicodeCharacterSet();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetUnicodeCharacterSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUnicodeCharacterSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnicodeCharacterSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUnicodeCharacterSet(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetUnicodeCharacterSet(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUTF8RecordDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUTF8RecordDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUTF8RecordDelimiters(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetUTF8RecordDelimiters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUTF8RecordDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUTF8RecordDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUTF8RecordDelimiters();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetUTF8RecordDelimiters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUnicodeRecordDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnicodeRecordDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUnicodeRecordDelimiters(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetUnicodeRecordDelimiters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUnicodeRecordDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnicodeRecordDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkUnicodeString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUnicodeRecordDelimiters();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetUnicodeRecordDelimiters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetFieldDelimiterCharacters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDelimiterCharacters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldDelimiterCharacters(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetFieldDelimiterCharacters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetFieldDelimiterCharacters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDelimiterCharacters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldDelimiterCharacters();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetFieldDelimiterCharacters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUTF8FieldDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUTF8FieldDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUTF8FieldDelimiters(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetUTF8FieldDelimiters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUTF8FieldDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUTF8FieldDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUTF8FieldDelimiters();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetUTF8FieldDelimiters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUnicodeFieldDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnicodeFieldDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUnicodeFieldDelimiters(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetUnicodeFieldDelimiters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUnicodeFieldDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnicodeFieldDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkUnicodeString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUnicodeFieldDelimiters();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetUnicodeFieldDelimiters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStringDelimiter();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetStringDelimiter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStringDelimiter(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetStringDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUTF8StringDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUTF8StringDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUTF8StringDelimiters(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetUTF8StringDelimiters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUTF8StringDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUTF8StringDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUTF8StringDelimiters();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetUTF8StringDelimiters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUnicodeStringDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnicodeStringDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkUnicodeString temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUnicodeStringDelimiters(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetUnicodeStringDelimiters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUnicodeStringDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnicodeStringDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkUnicodeString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUnicodeStringDelimiters();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetUnicodeStringDelimiters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseStringDelimiter(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetUseStringDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseStringDelimiter();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetUseStringDelimiter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_UseStringDelimiterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStringDelimiterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseStringDelimiterOn();
      }
    else
      {
      op->vtkDelimitedTextReader::UseStringDelimiterOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_UseStringDelimiterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStringDelimiterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseStringDelimiterOff();
      }
    else
      {
      op->vtkDelimitedTextReader::UseStringDelimiterOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetHaveHeaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHaveHeaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHaveHeaders();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetHaveHeaders();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetHaveHeaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHaveHeaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHaveHeaders(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetHaveHeaders(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetMergeConsecutiveDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeConsecutiveDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMergeConsecutiveDelimiters(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetMergeConsecutiveDelimiters(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetMergeConsecutiveDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeConsecutiveDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMergeConsecutiveDelimiters();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetMergeConsecutiveDelimiters();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_MergeConsecutiveDelimitersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeConsecutiveDelimitersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergeConsecutiveDelimitersOn();
      }
    else
      {
      op->vtkDelimitedTextReader::MergeConsecutiveDelimitersOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_MergeConsecutiveDelimitersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeConsecutiveDelimitersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MergeConsecutiveDelimitersOff();
      }
    else
      {
      op->vtkDelimitedTextReader::MergeConsecutiveDelimitersOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxRecords();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetMaxRecords();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxRecords(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetMaxRecords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetDetectNumericColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDetectNumericColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDetectNumericColumns(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetDetectNumericColumns(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetDetectNumericColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDetectNumericColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDetectNumericColumns();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetDetectNumericColumns();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_DetectNumericColumnsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetectNumericColumnsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DetectNumericColumnsOn();
      }
    else
      {
      op->vtkDelimitedTextReader::DetectNumericColumnsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_DetectNumericColumnsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetectNumericColumnsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DetectNumericColumnsOff();
      }
    else
      {
      op->vtkDelimitedTextReader::DetectNumericColumnsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPedigreeIdArrayName(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetPedigreeIdArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPedigreeIdArrayName();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetPedigreeIdArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePedigreeIds(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetGeneratePedigreeIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGeneratePedigreeIds();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetGeneratePedigreeIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GeneratePedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePedigreeIdsOn();
      }
    else
      {
      op->vtkDelimitedTextReader::GeneratePedigreeIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GeneratePedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePedigreeIdsOff();
      }
    else
      {
      op->vtkDelimitedTextReader::GeneratePedigreeIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetOutputPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputPedigreeIds(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetOutputPedigreeIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetOutputPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputPedigreeIds();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetOutputPedigreeIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_OutputPedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputPedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputPedigreeIdsOn();
      }
    else
      {
      op->vtkDelimitedTextReader::OutputPedigreeIdsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_OutputPedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputPedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputPedigreeIdsOff();
      }
    else
      {
      op->vtkDelimitedTextReader::OutputPedigreeIdsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetLastError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkStdString tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastError();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetLastError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetReplacementCharacter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplacementCharacter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReplacementCharacter(temp0);
      }
    else
      {
      op->vtkDelimitedTextReader::SetReplacementCharacter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetReplacementCharacter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementCharacter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReplacementCharacter();
      }
    else
      {
      tempr = op->vtkDelimitedTextReader::GetReplacementCharacter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDelimitedTextReader_Methods[] = {
  {(char*)"GetClassName", PyvtkDelimitedTextReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDelimitedTextReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDelimitedTextReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDelimitedTextReader\nC++: vtkDelimitedTextReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDelimitedTextReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDelimitedTextReader\nC++: vtkDelimitedTextReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkDelimitedTextReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecifies the delimited text file to be loaded.\n"},
  {(char*)"SetFileName", PyvtkDelimitedTextReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecifies the delimited text file to be loaded.\n"},
  {(char*)"GetUnicodeCharacterSet", PyvtkDelimitedTextReader_GetUnicodeCharacterSet, 1,
   (char*)"V.GetUnicodeCharacterSet() -> string\nC++: char *GetUnicodeCharacterSet()\n\nSpecifies the character set used in the input file.  Valid\ncharacter set names will be drawn from the list maintained by the\nInternet Assigned Name Authority at\n\n\n  http://www.iana.org/assignments/character-sets\n\nWhere multiple aliases are provided for a character set, the\npreferred MIME name will be used.  vtkUnicodeDelimitedTextReader\ncurrently supports \"US-ASCII\", \"UTF-8\", \"UTF-16\", \"UTF-16BE\", and\n\"UTF-16LE\" character sets.\n"},
  {(char*)"SetUnicodeCharacterSet", PyvtkDelimitedTextReader_SetUnicodeCharacterSet, 1,
   (char*)"V.SetUnicodeCharacterSet(string)\nC++: void SetUnicodeCharacterSet(char *)\n\nSpecifies the character set used in the input file.  Valid\ncharacter set names will be drawn from the list maintained by the\nInternet Assigned Name Authority at\n\n\n  http://www.iana.org/assignments/character-sets\n\nWhere multiple aliases are provided for a character set, the\npreferred MIME name will be used.  vtkUnicodeDelimitedTextReader\ncurrently supports \"US-ASCII\", \"UTF-8\", \"UTF-16\", \"UTF-16BE\", and\n\"UTF-16LE\" character sets.\n"},
  {(char*)"SetUTF8RecordDelimiters", PyvtkDelimitedTextReader_SetUTF8RecordDelimiters, 1,
   (char*)"V.SetUTF8RecordDelimiters(string)\nC++: void SetUTF8RecordDelimiters(const char *delimiters)\n\nSpecify the character(s) that will be used to separate records.\nThe order of characters in the string does not matter.  Defaults\nto \"\\r\\n\".\n"},
  {(char*)"GetUTF8RecordDelimiters", PyvtkDelimitedTextReader_GetUTF8RecordDelimiters, 1,
   (char*)"V.GetUTF8RecordDelimiters() -> string\nC++: const char *GetUTF8RecordDelimiters()\n\nSpecify the character(s) that will be used to separate records.\nThe order of characters in the string does not matter.  Defaults\nto \"\\r\\n\".\n"},
  {(char*)"SetUnicodeRecordDelimiters", PyvtkDelimitedTextReader_SetUnicodeRecordDelimiters, 1,
   (char*)"V.SetUnicodeRecordDelimiters(unicode)\nC++: void SetUnicodeRecordDelimiters(\n    const vtkUnicodeString &delimiters)\n\nSpecify the character(s) that will be used to separate records.\nThe order of characters in the string does not matter.  Defaults\nto \"\\r\\n\".\n"},
  {(char*)"GetUnicodeRecordDelimiters", PyvtkDelimitedTextReader_GetUnicodeRecordDelimiters, 1,
   (char*)"V.GetUnicodeRecordDelimiters() -> unicode\nC++: vtkUnicodeString GetUnicodeRecordDelimiters()\n\nSpecify the character(s) that will be used to separate records.\nThe order of characters in the string does not matter.  Defaults\nto \"\\r\\n\".\n"},
  {(char*)"SetFieldDelimiterCharacters", PyvtkDelimitedTextReader_SetFieldDelimiterCharacters, 1,
   (char*)"V.SetFieldDelimiterCharacters(string)\nC++: void SetFieldDelimiterCharacters(char *)\n\nSpecify the character(s) that will be used to separate fields. \nFor example, set this to \",\" for a comma-separated value file. \nSet it to \".:;\" for a file where columns can be separated by a\nperiod, colon or semicolon.  The order of the characters in the\nstring does not matter.  Defaults to a comma.\n"},
  {(char*)"GetFieldDelimiterCharacters", PyvtkDelimitedTextReader_GetFieldDelimiterCharacters, 1,
   (char*)"V.GetFieldDelimiterCharacters() -> string\nC++: char *GetFieldDelimiterCharacters()\n\nSpecify the character(s) that will be used to separate fields. \nFor example, set this to \",\" for a comma-separated value file. \nSet it to \".:;\" for a file where columns can be separated by a\nperiod, colon or semicolon.  The order of the characters in the\nstring does not matter.  Defaults to a comma.\n"},
  {(char*)"SetUTF8FieldDelimiters", PyvtkDelimitedTextReader_SetUTF8FieldDelimiters, 1,
   (char*)"V.SetUTF8FieldDelimiters(string)\nC++: void SetUTF8FieldDelimiters(const char *delimiters)\n\n"},
  {(char*)"GetUTF8FieldDelimiters", PyvtkDelimitedTextReader_GetUTF8FieldDelimiters, 1,
   (char*)"V.GetUTF8FieldDelimiters() -> string\nC++: const char *GetUTF8FieldDelimiters()\n\n"},
  {(char*)"SetUnicodeFieldDelimiters", PyvtkDelimitedTextReader_SetUnicodeFieldDelimiters, 1,
   (char*)"V.SetUnicodeFieldDelimiters(unicode)\nC++: void SetUnicodeFieldDelimiters(\n    const vtkUnicodeString &delimiters)\n\n"},
  {(char*)"GetUnicodeFieldDelimiters", PyvtkDelimitedTextReader_GetUnicodeFieldDelimiters, 1,
   (char*)"V.GetUnicodeFieldDelimiters() -> unicode\nC++: vtkUnicodeString GetUnicodeFieldDelimiters()\n\n"},
  {(char*)"GetStringDelimiter", PyvtkDelimitedTextReader_GetStringDelimiter, 1,
   (char*)"V.GetStringDelimiter() -> char\nC++: char GetStringDelimiter()\n\nGet/set the character that will begin and end strings.  Microsoft\nExcel, for example, will export the following format:\n\n\"First Field\",\"Second Field\",\"Field, With, Commas\",\"Fourth Field\"\n\nThe third field has a comma in it.  By using a string delimiter,\nthis will be correctly read.  The delimiter defaults to '\"'.\n"},
  {(char*)"SetStringDelimiter", PyvtkDelimitedTextReader_SetStringDelimiter, 1,
   (char*)"V.SetStringDelimiter(char)\nC++: void SetStringDelimiter(char a)\n\nGet/set the character that will begin and end strings.  Microsoft\nExcel, for example, will export the following format:\n\n\"First Field\",\"Second Field\",\"Field, With, Commas\",\"Fourth Field\"\n\nThe third field has a comma in it.  By using a string delimiter,\nthis will be correctly read.  The delimiter defaults to '\"'.\n"},
  {(char*)"SetUTF8StringDelimiters", PyvtkDelimitedTextReader_SetUTF8StringDelimiters, 1,
   (char*)"V.SetUTF8StringDelimiters(string)\nC++: void SetUTF8StringDelimiters(const char *delimiters)\n\n"},
  {(char*)"GetUTF8StringDelimiters", PyvtkDelimitedTextReader_GetUTF8StringDelimiters, 1,
   (char*)"V.GetUTF8StringDelimiters() -> string\nC++: const char *GetUTF8StringDelimiters()\n\n"},
  {(char*)"SetUnicodeStringDelimiters", PyvtkDelimitedTextReader_SetUnicodeStringDelimiters, 1,
   (char*)"V.SetUnicodeStringDelimiters(unicode)\nC++: void SetUnicodeStringDelimiters(\n    const vtkUnicodeString &delimiters)\n\n"},
  {(char*)"GetUnicodeStringDelimiters", PyvtkDelimitedTextReader_GetUnicodeStringDelimiters, 1,
   (char*)"V.GetUnicodeStringDelimiters() -> unicode\nC++: vtkUnicodeString GetUnicodeStringDelimiters()\n\n"},
  {(char*)"SetUseStringDelimiter", PyvtkDelimitedTextReader_SetUseStringDelimiter, 1,
   (char*)"V.SetUseStringDelimiter(bool)\nC++: void SetUseStringDelimiter(bool a)\n\nSet/get whether to use the string delimiter.  Defaults to on.\n"},
  {(char*)"GetUseStringDelimiter", PyvtkDelimitedTextReader_GetUseStringDelimiter, 1,
   (char*)"V.GetUseStringDelimiter() -> bool\nC++: bool GetUseStringDelimiter()\n\nSet/get whether to use the string delimiter.  Defaults to on.\n"},
  {(char*)"UseStringDelimiterOn", PyvtkDelimitedTextReader_UseStringDelimiterOn, 1,
   (char*)"V.UseStringDelimiterOn()\nC++: void UseStringDelimiterOn()\n\nSet/get whether to use the string delimiter.  Defaults to on.\n"},
  {(char*)"UseStringDelimiterOff", PyvtkDelimitedTextReader_UseStringDelimiterOff, 1,
   (char*)"V.UseStringDelimiterOff()\nC++: void UseStringDelimiterOff()\n\nSet/get whether to use the string delimiter.  Defaults to on.\n"},
  {(char*)"GetHaveHeaders", PyvtkDelimitedTextReader_GetHaveHeaders, 1,
   (char*)"V.GetHaveHeaders() -> bool\nC++: bool GetHaveHeaders()\n\nSet/get whether to treat the first line of the file as headers.\n"},
  {(char*)"SetHaveHeaders", PyvtkDelimitedTextReader_SetHaveHeaders, 1,
   (char*)"V.SetHaveHeaders(bool)\nC++: void SetHaveHeaders(bool a)\n\nSet/get whether to treat the first line of the file as headers.\n"},
  {(char*)"SetMergeConsecutiveDelimiters", PyvtkDelimitedTextReader_SetMergeConsecutiveDelimiters, 1,
   (char*)"V.SetMergeConsecutiveDelimiters(bool)\nC++: void SetMergeConsecutiveDelimiters(bool a)\n\nSet/get whether to merge successive delimiters.  Use this if (for\nexample) your fields are separated by spaces but you don't know\nexactly how many.\n"},
  {(char*)"GetMergeConsecutiveDelimiters", PyvtkDelimitedTextReader_GetMergeConsecutiveDelimiters, 1,
   (char*)"V.GetMergeConsecutiveDelimiters() -> bool\nC++: bool GetMergeConsecutiveDelimiters()\n\nSet/get whether to merge successive delimiters.  Use this if (for\nexample) your fields are separated by spaces but you don't know\nexactly how many.\n"},
  {(char*)"MergeConsecutiveDelimitersOn", PyvtkDelimitedTextReader_MergeConsecutiveDelimitersOn, 1,
   (char*)"V.MergeConsecutiveDelimitersOn()\nC++: void MergeConsecutiveDelimitersOn()\n\nSet/get whether to merge successive delimiters.  Use this if (for\nexample) your fields are separated by spaces but you don't know\nexactly how many.\n"},
  {(char*)"MergeConsecutiveDelimitersOff", PyvtkDelimitedTextReader_MergeConsecutiveDelimitersOff, 1,
   (char*)"V.MergeConsecutiveDelimitersOff()\nC++: void MergeConsecutiveDelimitersOff()\n\nSet/get whether to merge successive delimiters.  Use this if (for\nexample) your fields are separated by spaces but you don't know\nexactly how many.\n"},
  {(char*)"GetMaxRecords", PyvtkDelimitedTextReader_GetMaxRecords, 1,
   (char*)"V.GetMaxRecords() -> int\nC++: vtkIdType GetMaxRecords()\n\nSpecifies the maximum number of records to read from the file. \nLimiting the number of records to read is useful for previewing\nthe contents of a file.\n"},
  {(char*)"SetMaxRecords", PyvtkDelimitedTextReader_SetMaxRecords, 1,
   (char*)"V.SetMaxRecords(int)\nC++: void SetMaxRecords(vtkIdType a)\n\nSpecifies the maximum number of records to read from the file. \nLimiting the number of records to read is useful for previewing\nthe contents of a file.\n"},
  {(char*)"SetDetectNumericColumns", PyvtkDelimitedTextReader_SetDetectNumericColumns, 1,
   (char*)"V.SetDetectNumericColumns(bool)\nC++: void SetDetectNumericColumns(bool a)\n\nWhen set to true, the reader will detect numeric columns and\ncreate vtkDoubleArray or vtkIntArray for those instead of\nvtkStringArray. Default is off.\n"},
  {(char*)"GetDetectNumericColumns", PyvtkDelimitedTextReader_GetDetectNumericColumns, 1,
   (char*)"V.GetDetectNumericColumns() -> bool\nC++: bool GetDetectNumericColumns()\n\nWhen set to true, the reader will detect numeric columns and\ncreate vtkDoubleArray or vtkIntArray for those instead of\nvtkStringArray. Default is off.\n"},
  {(char*)"DetectNumericColumnsOn", PyvtkDelimitedTextReader_DetectNumericColumnsOn, 1,
   (char*)"V.DetectNumericColumnsOn()\nC++: void DetectNumericColumnsOn()\n\nWhen set to true, the reader will detect numeric columns and\ncreate vtkDoubleArray or vtkIntArray for those instead of\nvtkStringArray. Default is off.\n"},
  {(char*)"DetectNumericColumnsOff", PyvtkDelimitedTextReader_DetectNumericColumnsOff, 1,
   (char*)"V.DetectNumericColumnsOff()\nC++: void DetectNumericColumnsOff()\n\nWhen set to true, the reader will detect numeric columns and\ncreate vtkDoubleArray or vtkIntArray for those instead of\nvtkStringArray. Default is off.\n"},
  {(char*)"SetPedigreeIdArrayName", PyvtkDelimitedTextReader_SetPedigreeIdArrayName, 1,
   (char*)"V.SetPedigreeIdArrayName(string)\nC++: void SetPedigreeIdArrayName(char *)\n\nThe name of the array for generating or assigning pedigree ids\n(default \"id\").\n"},
  {(char*)"GetPedigreeIdArrayName", PyvtkDelimitedTextReader_GetPedigreeIdArrayName, 1,
   (char*)"V.GetPedigreeIdArrayName() -> string\nC++: char *GetPedigreeIdArrayName()\n\nThe name of the array for generating or assigning pedigree ids\n(default \"id\").\n"},
  {(char*)"SetGeneratePedigreeIds", PyvtkDelimitedTextReader_SetGeneratePedigreeIds, 1,
   (char*)"V.SetGeneratePedigreeIds(bool)\nC++: void SetGeneratePedigreeIds(bool a)\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {(char*)"GetGeneratePedigreeIds", PyvtkDelimitedTextReader_GetGeneratePedigreeIds, 1,
   (char*)"V.GetGeneratePedigreeIds() -> bool\nC++: bool GetGeneratePedigreeIds()\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {(char*)"GeneratePedigreeIdsOn", PyvtkDelimitedTextReader_GeneratePedigreeIdsOn, 1,
   (char*)"V.GeneratePedigreeIdsOn()\nC++: void GeneratePedigreeIdsOn()\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {(char*)"GeneratePedigreeIdsOff", PyvtkDelimitedTextReader_GeneratePedigreeIdsOff, 1,
   (char*)"V.GeneratePedigreeIdsOff()\nC++: void GeneratePedigreeIdsOff()\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {(char*)"SetOutputPedigreeIds", PyvtkDelimitedTextReader_SetOutputPedigreeIds, 1,
   (char*)"V.SetOutputPedigreeIds(bool)\nC++: void SetOutputPedigreeIds(bool a)\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {(char*)"GetOutputPedigreeIds", PyvtkDelimitedTextReader_GetOutputPedigreeIds, 1,
   (char*)"V.GetOutputPedigreeIds() -> bool\nC++: bool GetOutputPedigreeIds()\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {(char*)"OutputPedigreeIdsOn", PyvtkDelimitedTextReader_OutputPedigreeIdsOn, 1,
   (char*)"V.OutputPedigreeIdsOn()\nC++: void OutputPedigreeIdsOn()\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {(char*)"OutputPedigreeIdsOff", PyvtkDelimitedTextReader_OutputPedigreeIdsOff, 1,
   (char*)"V.OutputPedigreeIdsOff()\nC++: void OutputPedigreeIdsOff()\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {(char*)"GetLastError", PyvtkDelimitedTextReader_GetLastError, 1,
   (char*)"V.GetLastError() -> string\nC++: vtkStdString GetLastError()\n\nReturns a human-readable description of the most recent error, if\nany. Otherwise, returns an empty string.  Note that the result is\nonly valid after calling Update().\n"},
  {(char*)"SetReplacementCharacter", PyvtkDelimitedTextReader_SetReplacementCharacter, 1,
   (char*)"V.SetReplacementCharacter(int)\nC++: void SetReplacementCharacter(vtkTypeUInt32 a)\n\nFallback character for use in the US-ASCII-WITH-FALLBACK\ncharacter set.  Any characters that have their 8th bit set will\nbe replaced with this code point.  Defaults to 'x'.\n"},
  {(char*)"GetReplacementCharacter", PyvtkDelimitedTextReader_GetReplacementCharacter, 1,
   (char*)"V.GetReplacementCharacter() -> int\nC++: vtkTypeUInt32 GetReplacementCharacter()\n\nFallback character for use in the US-ASCII-WITH-FALLBACK\ncharacter set.  Any characters that have their 8th bit set will\nbe replaced with this code point.  Defaults to 'x'.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDelimitedTextReader_StaticNew()
{
  return vtkDelimitedTextReader::New();
}

PyObject *PyVTKClass_vtkDelimitedTextReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDelimitedTextReader_StaticNew,
    PyvtkDelimitedTextReader_Methods,
    "vtkDelimitedTextReader", modulename,
    NULL, NULL,
    PyvtkDelimitedTextReader_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDelimitedTextReader_Doc()
{
  static const char *docstring[] = {
    "vtkDelimitedTextReader - reads in delimited ascii or unicode text\nfiles\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "vtkDelimitedTextReader is an interface for pulling in data from a\nflat, delimited ascii or unicode text file (delimiter can be any\ncharacter).\n\nThe behavior of the reader with respect to ascii or unicode input is\ncontrolled by the SetUnicodeCharacterSet() method.  By default\n(without calling SetUnicodeCharacterSet()), the reader will expect to\nread ascii text and will output vtkStdString columns. ",
    " Use the Set\nand Get methods to set delimiters that do not contain UTF8 in the\nname when operating the reader in default ascii mode.  If the\nSetUnicodeCharacterSet() method is called, the reader will output\nvtkUnicodeString columns in the output table.  In addition, it is\nnecessary to use the Set and Get methods that contain UTF8 in the\nname to specify delimiters when operating in unicode mode.\n\nT",
    "here is also a special character set US-ASCII-WITH-FALLBACK that\nwill treat the input text as ASCII no matter what.  If and when it\nencounters a character with its 8th bit set it will replace that\ncharacter with the code point ReplacementCharacter.  You may use this\nif you have text that belongs to a code page like LATIN9 or\nISO-8859-1 or friends: mostly ASCII but not entirely.  Eventually\nthis cl",
    "ass will acquire the ability to read gracefully text from any\ncode page, making this option obsolete.\n\nThis class emits ProgressEvent for every 100 lines it reads.\n\nThanks:\n\nThanks to Andy Wilson, Brian Wylie, Tim Shead, and Thomas Otahal from\nSandia National Laboratories for implementing this class.\n\nCaveats:\n\nThis reader assumes that the first line in the file (whether that's\nheaders or the firs",
    "t document) contains at least as many fields as\nany other line in the file.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDelimitedTextReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDelimitedTextReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDelimitedTextReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

