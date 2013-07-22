// python wrapper for vtkSLACReader
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
#include "vtkSLACReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSLACReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSLACReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSLACReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSLACReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkSLACReader_Doc();


static PyObject *
PyvtkSLACReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

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
      tempr = op->vtkSLACReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

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
      tempr = op->vtkSLACReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  vtkSLACReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSLACReader::NewInstance();
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
PyvtkSLACReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSLACReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSLACReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetMeshFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMeshFileName();
      }
    else
      {
      tempr = op->vtkSLACReader::GetMeshFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_SetMeshFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMeshFileName(temp0);
      }
    else
      {
      op->vtkSLACReader::SetMeshFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_AddModeFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddModeFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddModeFileName(temp0);
      }
    else
      {
      op->vtkSLACReader::AddModeFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_RemoveAllModeFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllModeFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllModeFileNames();
      }
    else
      {
      op->vtkSLACReader::RemoveAllModeFileNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetNumberOfModeFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfModeFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfModeFileNames();
      }
    else
      {
      tempr = op->vtkSLACReader::GetNumberOfModeFileNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetModeFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  unsigned int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetModeFileName(temp0);
      }
    else
      {
      tempr = op->vtkSLACReader::GetModeFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetReadInternalVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadInternalVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadInternalVolume();
      }
    else
      {
      tempr = op->vtkSLACReader::GetReadInternalVolume();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_SetReadInternalVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadInternalVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadInternalVolume(temp0);
      }
    else
      {
      op->vtkSLACReader::SetReadInternalVolume(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadInternalVolumeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadInternalVolumeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadInternalVolumeOn();
      }
    else
      {
      op->vtkSLACReader::ReadInternalVolumeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadInternalVolumeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadInternalVolumeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadInternalVolumeOff();
      }
    else
      {
      op->vtkSLACReader::ReadInternalVolumeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetReadExternalSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadExternalSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadExternalSurface();
      }
    else
      {
      tempr = op->vtkSLACReader::GetReadExternalSurface();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_SetReadExternalSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadExternalSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadExternalSurface(temp0);
      }
    else
      {
      op->vtkSLACReader::SetReadExternalSurface(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadExternalSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadExternalSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadExternalSurfaceOn();
      }
    else
      {
      op->vtkSLACReader::ReadExternalSurfaceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadExternalSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadExternalSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadExternalSurfaceOff();
      }
    else
      {
      op->vtkSLACReader::ReadExternalSurfaceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetReadMidpoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadMidpoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadMidpoints();
      }
    else
      {
      tempr = op->vtkSLACReader::GetReadMidpoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_SetReadMidpoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadMidpoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadMidpoints(temp0);
      }
    else
      {
      op->vtkSLACReader::SetReadMidpoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadMidpointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMidpointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadMidpointsOn();
      }
    else
      {
      op->vtkSLACReader::ReadMidpointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadMidpointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMidpointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReadMidpointsOff();
      }
    else
      {
      op->vtkSLACReader::ReadMidpointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetNumberOfVariableArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariableArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

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
      tempr = op->vtkSLACReader::GetNumberOfVariableArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetVariableArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

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
      tempr = op->vtkSLACReader::GetVariableArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_GetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVariableArrayStatus(temp0);
      }
    else
      {
      tempr = op->vtkSLACReader::GetVariableArrayStatus(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_SetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetVariableArrayStatus(temp0, temp1);
      }
    else
      {
      op->vtkSLACReader::SetVariableArrayStatus(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkSLACReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_IS_INTERNAL_VOLUME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IS_INTERNAL_VOLUME");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSLACReader::IS_INTERNAL_VOLUME();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_IS_EXTERNAL_SURFACE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IS_EXTERNAL_SURFACE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSLACReader::IS_EXTERNAL_SURFACE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_POINTS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POINTS");

  vtkInformationObjectBaseKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSLACReader::POINTS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACReader_POINT_DATA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POINT_DATA");

  vtkInformationObjectBaseKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSLACReader::POINT_DATA();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSLACReader_Methods[] = {
  {(char*)"GetClassName", PyvtkSLACReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSLACReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSLACReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSLACReader\nC++: vtkSLACReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSLACReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSLACReader\nC++: vtkSLACReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetMeshFileName", PyvtkSLACReader_GetMeshFileName, 1,
   (char*)"V.GetMeshFileName() -> string\nC++: char *GetMeshFileName()\n\n"},
  {(char*)"SetMeshFileName", PyvtkSLACReader_SetMeshFileName, 1,
   (char*)"V.SetMeshFileName(string)\nC++: void SetMeshFileName(char *)\n\n"},
  {(char*)"AddModeFileName", PyvtkSLACReader_AddModeFileName, 1,
   (char*)"V.AddModeFileName(string)\nC++: virtual void AddModeFileName(const char *fname)\n\nThere may be one mode file (usually for actual modes) or multiple\nmode files (which usually actually represent time series).  These\nmethods set and clear the list of mode files (which can be a\nsingle mode file).\n"},
  {(char*)"RemoveAllModeFileNames", PyvtkSLACReader_RemoveAllModeFileNames, 1,
   (char*)"V.RemoveAllModeFileNames()\nC++: virtual void RemoveAllModeFileNames()\n\nThere may be one mode file (usually for actual modes) or multiple\nmode files (which usually actually represent time series).  These\nmethods set and clear the list of mode files (which can be a\nsingle mode file).\n"},
  {(char*)"GetNumberOfModeFileNames", PyvtkSLACReader_GetNumberOfModeFileNames, 1,
   (char*)"V.GetNumberOfModeFileNames() -> int\nC++: virtual unsigned int GetNumberOfModeFileNames()\n\nThere may be one mode file (usually for actual modes) or multiple\nmode files (which usually actually represent time series).  These\nmethods set and clear the list of mode files (which can be a\nsingle mode file).\n"},
  {(char*)"GetModeFileName", PyvtkSLACReader_GetModeFileName, 1,
   (char*)"V.GetModeFileName(int) -> string\nC++: virtual const char *GetModeFileName(unsigned int idx)\n\nThere may be one mode file (usually for actual modes) or multiple\nmode files (which usually actually represent time series).  These\nmethods set and clear the list of mode files (which can be a\nsingle mode file).\n"},
  {(char*)"GetReadInternalVolume", PyvtkSLACReader_GetReadInternalVolume, 1,
   (char*)"V.GetReadInternalVolume() -> int\nC++: int GetReadInternalVolume()\n\nIf on, reads the internal volume of the data set.  Set to off by\ndefault.\n"},
  {(char*)"SetReadInternalVolume", PyvtkSLACReader_SetReadInternalVolume, 1,
   (char*)"V.SetReadInternalVolume(int)\nC++: void SetReadInternalVolume(int a)\n\nIf on, reads the internal volume of the data set.  Set to off by\ndefault.\n"},
  {(char*)"ReadInternalVolumeOn", PyvtkSLACReader_ReadInternalVolumeOn, 1,
   (char*)"V.ReadInternalVolumeOn()\nC++: void ReadInternalVolumeOn()\n\nIf on, reads the internal volume of the data set.  Set to off by\ndefault.\n"},
  {(char*)"ReadInternalVolumeOff", PyvtkSLACReader_ReadInternalVolumeOff, 1,
   (char*)"V.ReadInternalVolumeOff()\nC++: void ReadInternalVolumeOff()\n\nIf on, reads the internal volume of the data set.  Set to off by\ndefault.\n"},
  {(char*)"GetReadExternalSurface", PyvtkSLACReader_GetReadExternalSurface, 1,
   (char*)"V.GetReadExternalSurface() -> int\nC++: int GetReadExternalSurface()\n\nIf on, reads the external surfaces of the data set.  Set to on by\ndefault.\n"},
  {(char*)"SetReadExternalSurface", PyvtkSLACReader_SetReadExternalSurface, 1,
   (char*)"V.SetReadExternalSurface(int)\nC++: void SetReadExternalSurface(int a)\n\nIf on, reads the external surfaces of the data set.  Set to on by\ndefault.\n"},
  {(char*)"ReadExternalSurfaceOn", PyvtkSLACReader_ReadExternalSurfaceOn, 1,
   (char*)"V.ReadExternalSurfaceOn()\nC++: void ReadExternalSurfaceOn()\n\nIf on, reads the external surfaces of the data set.  Set to on by\ndefault.\n"},
  {(char*)"ReadExternalSurfaceOff", PyvtkSLACReader_ReadExternalSurfaceOff, 1,
   (char*)"V.ReadExternalSurfaceOff()\nC++: void ReadExternalSurfaceOff()\n\nIf on, reads the external surfaces of the data set.  Set to on by\ndefault.\n"},
  {(char*)"GetReadMidpoints", PyvtkSLACReader_GetReadMidpoints, 1,
   (char*)"V.GetReadMidpoints() -> int\nC++: int GetReadMidpoints()\n\nIf on, reads midpoint information for external surfaces and\nbuilds quadratic surface triangles.  Set to on by default.\n"},
  {(char*)"SetReadMidpoints", PyvtkSLACReader_SetReadMidpoints, 1,
   (char*)"V.SetReadMidpoints(int)\nC++: void SetReadMidpoints(int a)\n\nIf on, reads midpoint information for external surfaces and\nbuilds quadratic surface triangles.  Set to on by default.\n"},
  {(char*)"ReadMidpointsOn", PyvtkSLACReader_ReadMidpointsOn, 1,
   (char*)"V.ReadMidpointsOn()\nC++: void ReadMidpointsOn()\n\nIf on, reads midpoint information for external surfaces and\nbuilds quadratic surface triangles.  Set to on by default.\n"},
  {(char*)"ReadMidpointsOff", PyvtkSLACReader_ReadMidpointsOff, 1,
   (char*)"V.ReadMidpointsOff()\nC++: void ReadMidpointsOff()\n\nIf on, reads midpoint information for external surfaces and\nbuilds quadratic surface triangles.  Set to on by default.\n"},
  {(char*)"GetNumberOfVariableArrays", PyvtkSLACReader_GetNumberOfVariableArrays, 1,
   (char*)"V.GetNumberOfVariableArrays() -> int\nC++: virtual int GetNumberOfVariableArrays()\n\nVariable array selection.\n"},
  {(char*)"GetVariableArrayName", PyvtkSLACReader_GetVariableArrayName, 1,
   (char*)"V.GetVariableArrayName(int) -> string\nC++: virtual const char *GetVariableArrayName(int idx)\n\nVariable array selection.\n"},
  {(char*)"GetVariableArrayStatus", PyvtkSLACReader_GetVariableArrayStatus, 1,
   (char*)"V.GetVariableArrayStatus(string) -> int\nC++: virtual int GetVariableArrayStatus(const char *name)\n\nVariable array selection.\n"},
  {(char*)"SetVariableArrayStatus", PyvtkSLACReader_SetVariableArrayStatus, 1,
   (char*)"V.SetVariableArrayStatus(string, int)\nC++: virtual void SetVariableArrayStatus(const char *name,\n    int status)\n\nVariable array selection.\n"},
  {(char*)"CanReadFile", PyvtkSLACReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\nReturns true if the given file can be read by this reader.\n"},
  {(char*)"IS_INTERNAL_VOLUME", PyvtkSLACReader_IS_INTERNAL_VOLUME, 1,
   (char*)"V.IS_INTERNAL_VOLUME() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *IS_INTERNAL_VOLUME()\n\nThis key is attached to the metadata information of all data sets\nin the output that are part of the internal volume.\n"},
  {(char*)"IS_EXTERNAL_SURFACE", PyvtkSLACReader_IS_EXTERNAL_SURFACE, 1,
   (char*)"V.IS_EXTERNAL_SURFACE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *IS_EXTERNAL_SURFACE()\n\nThis key is attached to the metadata information of all data sets\nin the output that are part of the external surface.\n"},
  {(char*)"POINTS", PyvtkSLACReader_POINTS, 1,
   (char*)"V.POINTS() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *POINTS()\n\nAll the data sets stored in the multiblock output share the same\npoint data.  For convienience, the point coordinates (vtkPoints)\nand point data (vtkPointData) are saved under these keys in the\nvtkInformation of the output data set.\n"},
  {(char*)"POINT_DATA", PyvtkSLACReader_POINT_DATA, 1,
   (char*)"V.POINT_DATA() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *POINT_DATA()\n\nAll the data sets stored in the multiblock output share the same\npoint data.  For convienience, the point coordinates (vtkPoints)\nand point data (vtkPointData) are saved under these keys in the\nvtkInformation of the output data set.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSLACReader_StaticNew()
{
  return vtkSLACReader::New();
}

PyObject *PyVTKClass_vtkSLACReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSLACReader_StaticNew,
    PyvtkSLACReader_Methods,
    "vtkSLACReader", modulename,
    NULL, NULL,
    PyvtkSLACReader_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"SURFACE_OUTPUT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"VOLUME_OUTPUT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"NUM_OUTPUTS", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkSLACReader_Doc()
{
  static const char *docstring[] = {
    "vtkSLACReader\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "A reader for a data format used by Omega3p, Tau3p, and several other\ntools used at the Standford Linear Accelerator Center (SLAC).  The\nunderlying format uses netCDF to store arrays, but also imposes\nseveral conventions to form an unstructured grid of elements.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSLACReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSLACReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSLACReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

