// python wrapper for vtkBYUReader
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
#include "vtkBYUReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBYUReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBYUReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBYUReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBYUReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkBYUReader_Doc();


static PyObject *
PyvtkBYUReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

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
      tempr = op->vtkBYUReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

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
      tempr = op->vtkBYUReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  vtkBYUReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBYUReader::NewInstance();
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
PyvtkBYUReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBYUReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBYUReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_SetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeometryFileName(temp0);
      }
    else
      {
      op->vtkBYUReader::SetGeometryFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_GetGeometryFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

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
      tempr = op->vtkBYUReader::GetGeometryFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

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
      op->vtkBYUReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

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
      tempr = op->vtkBYUReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_SetDisplacementFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplacementFileName(temp0);
      }
    else
      {
      op->vtkBYUReader::SetDisplacementFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_GetDisplacementFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDisplacementFileName();
      }
    else
      {
      tempr = op->vtkBYUReader::GetDisplacementFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_SetScalarFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarFileName(temp0);
      }
    else
      {
      op->vtkBYUReader::SetScalarFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_GetScalarFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarFileName();
      }
    else
      {
      tempr = op->vtkBYUReader::GetScalarFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_SetTextureFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureFileName(temp0);
      }
    else
      {
      op->vtkBYUReader::SetTextureFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_GetTextureFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureFileName();
      }
    else
      {
      tempr = op->vtkBYUReader::GetTextureFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_SetReadDisplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadDisplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadDisplacement(temp0);
      }
    else
      {
      op->vtkBYUReader::SetReadDisplacement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_GetReadDisplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadDisplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadDisplacement();
      }
    else
      {
      tempr = op->vtkBYUReader::GetReadDisplacement();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadDisplacementOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadDisplacementOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadDisplacementOn();
      }
    else
      {
      op->vtkBYUReader::ReadDisplacementOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadDisplacementOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadDisplacementOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadDisplacementOff();
      }
    else
      {
      op->vtkBYUReader::ReadDisplacementOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_SetReadScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadScalar(temp0);
      }
    else
      {
      op->vtkBYUReader::SetReadScalar(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_GetReadScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadScalar();
      }
    else
      {
      tempr = op->vtkBYUReader::GetReadScalar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadScalarOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadScalarOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadScalarOn();
      }
    else
      {
      op->vtkBYUReader::ReadScalarOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadScalarOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadScalarOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadScalarOff();
      }
    else
      {
      op->vtkBYUReader::ReadScalarOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_SetReadTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadTexture(temp0);
      }
    else
      {
      op->vtkBYUReader::SetReadTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_GetReadTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadTexture();
      }
    else
      {
      tempr = op->vtkBYUReader::GetReadTexture();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadTextureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadTextureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadTextureOn();
      }
    else
      {
      op->vtkBYUReader::ReadTextureOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_ReadTextureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadTextureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadTextureOff();
      }
    else
      {
      op->vtkBYUReader::ReadTextureOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_SetPartNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPartNumber(temp0);
      }
    else
      {
      op->vtkBYUReader::SetPartNumber(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_GetPartNumberMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartNumberMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPartNumberMinValue();
      }
    else
      {
      tempr = op->vtkBYUReader::GetPartNumberMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_GetPartNumberMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartNumberMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPartNumberMaxValue();
      }
    else
      {
      tempr = op->vtkBYUReader::GetPartNumberMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_GetPartNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPartNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBYUReader *op = static_cast<vtkBYUReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPartNumber();
      }
    else
      {
      tempr = op->vtkBYUReader::GetPartNumber();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBYUReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkBYUReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBYUReader_Methods[] = {
  {(char*)"GetClassName", PyvtkBYUReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBYUReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBYUReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBYUReader\nC++: vtkBYUReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBYUReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBYUReader\nC++: vtkBYUReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGeometryFileName", PyvtkBYUReader_SetGeometryFileName, 1,
   (char*)"V.SetGeometryFileName(string)\nC++: void SetGeometryFileName(char *)\n\nSpecify name of geometry FileName.\n"},
  {(char*)"GetGeometryFileName", PyvtkBYUReader_GetGeometryFileName, 1,
   (char*)"V.GetGeometryFileName() -> string\nC++: char *GetGeometryFileName()\n\nSpecify name of geometry FileName.\n"},
  {(char*)"SetFileName", PyvtkBYUReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: virtual void SetFileName(const char *f)\n\nSpecify name of geometry FileName (alias).\n"},
  {(char*)"GetFileName", PyvtkBYUReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify name of geometry FileName (alias).\n"},
  {(char*)"SetDisplacementFileName", PyvtkBYUReader_SetDisplacementFileName, 1,
   (char*)"V.SetDisplacementFileName(string)\nC++: void SetDisplacementFileName(char *)\n\nSpecify name of displacement FileName.\n"},
  {(char*)"GetDisplacementFileName", PyvtkBYUReader_GetDisplacementFileName, 1,
   (char*)"V.GetDisplacementFileName() -> string\nC++: char *GetDisplacementFileName()\n\nSpecify name of displacement FileName.\n"},
  {(char*)"SetScalarFileName", PyvtkBYUReader_SetScalarFileName, 1,
   (char*)"V.SetScalarFileName(string)\nC++: void SetScalarFileName(char *)\n\nSpecify name of scalar FileName.\n"},
  {(char*)"GetScalarFileName", PyvtkBYUReader_GetScalarFileName, 1,
   (char*)"V.GetScalarFileName() -> string\nC++: char *GetScalarFileName()\n\nSpecify name of scalar FileName.\n"},
  {(char*)"SetTextureFileName", PyvtkBYUReader_SetTextureFileName, 1,
   (char*)"V.SetTextureFileName(string)\nC++: void SetTextureFileName(char *)\n\nSpecify name of texture coordinates FileName.\n"},
  {(char*)"GetTextureFileName", PyvtkBYUReader_GetTextureFileName, 1,
   (char*)"V.GetTextureFileName() -> string\nC++: char *GetTextureFileName()\n\nSpecify name of texture coordinates FileName.\n"},
  {(char*)"SetReadDisplacement", PyvtkBYUReader_SetReadDisplacement, 1,
   (char*)"V.SetReadDisplacement(int)\nC++: void SetReadDisplacement(int a)\n\nTurn on/off the reading of the displacement file.\n"},
  {(char*)"GetReadDisplacement", PyvtkBYUReader_GetReadDisplacement, 1,
   (char*)"V.GetReadDisplacement() -> int\nC++: int GetReadDisplacement()\n\nTurn on/off the reading of the displacement file.\n"},
  {(char*)"ReadDisplacementOn", PyvtkBYUReader_ReadDisplacementOn, 1,
   (char*)"V.ReadDisplacementOn()\nC++: void ReadDisplacementOn()\n\nTurn on/off the reading of the displacement file.\n"},
  {(char*)"ReadDisplacementOff", PyvtkBYUReader_ReadDisplacementOff, 1,
   (char*)"V.ReadDisplacementOff()\nC++: void ReadDisplacementOff()\n\nTurn on/off the reading of the displacement file.\n"},
  {(char*)"SetReadScalar", PyvtkBYUReader_SetReadScalar, 1,
   (char*)"V.SetReadScalar(int)\nC++: void SetReadScalar(int a)\n\nTurn on/off the reading of the scalar file.\n"},
  {(char*)"GetReadScalar", PyvtkBYUReader_GetReadScalar, 1,
   (char*)"V.GetReadScalar() -> int\nC++: int GetReadScalar()\n\nTurn on/off the reading of the scalar file.\n"},
  {(char*)"ReadScalarOn", PyvtkBYUReader_ReadScalarOn, 1,
   (char*)"V.ReadScalarOn()\nC++: void ReadScalarOn()\n\nTurn on/off the reading of the scalar file.\n"},
  {(char*)"ReadScalarOff", PyvtkBYUReader_ReadScalarOff, 1,
   (char*)"V.ReadScalarOff()\nC++: void ReadScalarOff()\n\nTurn on/off the reading of the scalar file.\n"},
  {(char*)"SetReadTexture", PyvtkBYUReader_SetReadTexture, 1,
   (char*)"V.SetReadTexture(int)\nC++: void SetReadTexture(int a)\n\nTurn on/off the reading of the texture coordinate file. Specify\nname of geometry FileName.\n"},
  {(char*)"GetReadTexture", PyvtkBYUReader_GetReadTexture, 1,
   (char*)"V.GetReadTexture() -> int\nC++: int GetReadTexture()\n\nTurn on/off the reading of the texture coordinate file. Specify\nname of geometry FileName.\n"},
  {(char*)"ReadTextureOn", PyvtkBYUReader_ReadTextureOn, 1,
   (char*)"V.ReadTextureOn()\nC++: void ReadTextureOn()\n\nTurn on/off the reading of the texture coordinate file. Specify\nname of geometry FileName.\n"},
  {(char*)"ReadTextureOff", PyvtkBYUReader_ReadTextureOff, 1,
   (char*)"V.ReadTextureOff()\nC++: void ReadTextureOff()\n\nTurn on/off the reading of the texture coordinate file. Specify\nname of geometry FileName.\n"},
  {(char*)"SetPartNumber", PyvtkBYUReader_SetPartNumber, 1,
   (char*)"V.SetPartNumber(int)\nC++: void SetPartNumber(int)\n\nSet/Get the part number to be read.\n"},
  {(char*)"GetPartNumberMinValue", PyvtkBYUReader_GetPartNumberMinValue, 1,
   (char*)"V.GetPartNumberMinValue() -> int\nC++: int GetPartNumberMinValue()\n\nSet/Get the part number to be read.\n"},
  {(char*)"GetPartNumberMaxValue", PyvtkBYUReader_GetPartNumberMaxValue, 1,
   (char*)"V.GetPartNumberMaxValue() -> int\nC++: int GetPartNumberMaxValue()\n\nSet/Get the part number to be read.\n"},
  {(char*)"GetPartNumber", PyvtkBYUReader_GetPartNumber, 1,
   (char*)"V.GetPartNumber() -> int\nC++: int GetPartNumber()\n\nSet/Get the part number to be read.\n"},
  {(char*)"CanReadFile", PyvtkBYUReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\nReturns 1 if this file can be read and 0 if the file cannot be\nread. Because BYU files do not have anything in the header\nspecifying the file type, the result is not definitive.  Invalid\nfiles may still return 1 although a valid file will never return\n0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBYUReader_StaticNew()
{
  return vtkBYUReader::New();
}

PyObject *PyVTKClass_vtkBYUReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBYUReader_StaticNew,
    PyvtkBYUReader_Methods,
    "vtkBYUReader", modulename,
    NULL, NULL,
    PyvtkBYUReader_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkBYUReader_Doc()
{
  static const char *docstring[] = {
    "vtkBYUReader - read MOVIE.BYU polygon files\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkBYUReader is a source object that reads MOVIE.BYU polygon files.\nThese files consist of a geometry file (.g), a scalar file (.s), a\ndisplacement or vector file (.d), and a 2D texture coordinate file\n(.t).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBYUReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBYUReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBYUReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

