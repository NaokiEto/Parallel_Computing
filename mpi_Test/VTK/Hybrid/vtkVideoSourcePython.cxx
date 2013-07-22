// python wrapper for vtkVideoSource
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
#include "vtkVideoSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkVideoSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkVideoSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkVideoSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkVideoSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkVideoSource_Doc();


static PyObject *
PyvtkVideoSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

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
      tempr = op->vtkVideoSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

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
      tempr = op->vtkVideoSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  vtkVideoSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkVideoSource::NewInstance();
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
PyvtkVideoSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkVideoSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkVideoSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_Record(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Record");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Record();
      }
    else
      {
      op->vtkVideoSource::Record();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_Play(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Play");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Play();
      }
    else
      {
      op->vtkVideoSource::Play();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Stop();
      }
    else
      {
      op->vtkVideoSource::Stop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_Rewind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rewind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Rewind();
      }
    else
      {
      op->vtkVideoSource::Rewind();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_FastForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FastForward();
      }
    else
      {
      op->vtkVideoSource::FastForward();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_Seek(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Seek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Seek(temp0);
      }
    else
      {
      op->vtkVideoSource::Seek(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_Grab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Grab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Grab();
      }
    else
      {
      op->vtkVideoSource::Grab();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_GetRecording(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecording");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRecording();
      }
    else
      {
      tempr = op->vtkVideoSource::GetRecording();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_GetPlaying(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaying");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlaying();
      }
    else
      {
      tempr = op->vtkVideoSource::GetPlaying();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_SetFrameSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

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
      op->SetFrameSize(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVideoSource::SetFrameSize(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVideoSource_SetFrameSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0[3];
  int save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetFrameSize(temp0);
      }
    else
      {
      op->vtkVideoSource::SetFrameSize(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVideoSource_SetFrameSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVideoSource_SetFrameSize_s1(self, args);
    case 1:
      return PyvtkVideoSource_SetFrameSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetFrameSize");
  return NULL;
}



static PyObject *
PyvtkVideoSource_GetFrameSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFrameSize();
      }
    else
      {
      tempr = op->vtkVideoSource::GetFrameSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_SetFrameRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrameRate(temp0);
      }
    else
      {
      op->vtkVideoSource::SetFrameRate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_GetFrameRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFrameRate();
      }
    else
      {
      tempr = op->vtkVideoSource::GetFrameRate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_SetOutputFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFormat(temp0);
      }
    else
      {
      op->vtkVideoSource::SetOutputFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_SetOutputFormatToLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFormatToLuminance();
      }
    else
      {
      op->vtkVideoSource::SetOutputFormatToLuminance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_SetOutputFormatToRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFormatToRGB();
      }
    else
      {
      op->vtkVideoSource::SetOutputFormatToRGB();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_SetOutputFormatToRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOutputFormatToRGBA();
      }
    else
      {
      op->vtkVideoSource::SetOutputFormatToRGBA();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_GetOutputFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputFormat();
      }
    else
      {
      tempr = op->vtkVideoSource::GetOutputFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_SetFrameBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrameBufferSize(temp0);
      }
    else
      {
      op->vtkVideoSource::SetFrameBufferSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_GetFrameBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFrameBufferSize();
      }
    else
      {
      tempr = op->vtkVideoSource::GetFrameBufferSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_SetNumberOfOutputFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfOutputFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfOutputFrames(temp0);
      }
    else
      {
      op->vtkVideoSource::SetNumberOfOutputFrames(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_GetNumberOfOutputFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfOutputFrames();
      }
    else
      {
      tempr = op->vtkVideoSource::GetNumberOfOutputFrames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_AutoAdvanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdvanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdvanceOn();
      }
    else
      {
      op->vtkVideoSource::AutoAdvanceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_AutoAdvanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdvanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutoAdvanceOff();
      }
    else
      {
      op->vtkVideoSource::AutoAdvanceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_SetAutoAdvance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdvance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutoAdvance(temp0);
      }
    else
      {
      op->vtkVideoSource::SetAutoAdvance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_GetAutoAdvance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdvance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutoAdvance();
      }
    else
      {
      tempr = op->vtkVideoSource::GetAutoAdvance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_SetClipRegion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0[6];
  int save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetClipRegion(temp0);
      }
    else
      {
      op->vtkVideoSource::SetClipRegion(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVideoSource_SetClipRegion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetClipRegion(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkVideoSource::SetClipRegion(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVideoSource_SetClipRegion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVideoSource_SetClipRegion_s1(self, args);
    case 6:
      return PyvtkVideoSource_SetClipRegion_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetClipRegion");
  return NULL;
}



static PyObject *
PyvtkVideoSource_GetClipRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClipRegion();
      }
    else
      {
      tempr = op->vtkVideoSource::GetClipRegion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_SetOutputWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetOutputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkVideoSource::SetOutputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVideoSource_SetOutputWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutputWholeExtent(temp0);
      }
    else
      {
      op->vtkVideoSource::SetOutputWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVideoSource_SetOutputWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkVideoSource_SetOutputWholeExtent_s1(self, args);
    case 1:
      return PyvtkVideoSource_SetOutputWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputWholeExtent");
  return NULL;
}



static PyObject *
PyvtkVideoSource_GetOutputWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputWholeExtent();
      }
    else
      {
      tempr = op->vtkVideoSource::GetOutputWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_SetDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

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
      op->SetDataSpacing(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVideoSource::SetDataSpacing(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVideoSource_SetDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDataSpacing(temp0);
      }
    else
      {
      op->vtkVideoSource::SetDataSpacing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVideoSource_SetDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVideoSource_SetDataSpacing_s1(self, args);
    case 1:
      return PyvtkVideoSource_SetDataSpacing_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSpacing");
  return NULL;
}



static PyObject *
PyvtkVideoSource_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataSpacing();
      }
    else
      {
      tempr = op->vtkVideoSource::GetDataSpacing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_SetDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

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
      op->SetDataOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkVideoSource::SetDataOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVideoSource_SetDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDataOrigin(temp0);
      }
    else
      {
      op->vtkVideoSource::SetDataOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkVideoSource_SetDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkVideoSource_SetDataOrigin_s1(self, args);
    case 1:
      return PyvtkVideoSource_SetDataOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDataOrigin");
  return NULL;
}



static PyObject *
PyvtkVideoSource_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataOrigin();
      }
    else
      {
      tempr = op->vtkVideoSource::GetDataOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOpacity(temp0);
      }
    else
      {
      op->vtkVideoSource::SetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOpacity();
      }
    else
      {
      tempr = op->vtkVideoSource::GetOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_GetFrameCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFrameCount();
      }
    else
      {
      tempr = op->vtkVideoSource::GetFrameCount();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_SetFrameCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFrameCount(temp0);
      }
    else
      {
      op->vtkVideoSource::SetFrameCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_GetFrameIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFrameIndex();
      }
    else
      {
      tempr = op->vtkVideoSource::GetFrameIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_GetFrameTimeStamp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameTimeStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFrameTimeStamp(temp0);
      }
    else
      {
      tempr = op->vtkVideoSource::GetFrameTimeStamp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVideoSource_GetFrameTimeStamp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameTimeStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFrameTimeStamp();
      }
    else
      {
      tempr = op->vtkVideoSource::GetFrameTimeStamp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkVideoSource_GetFrameTimeStamp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkVideoSource_GetFrameTimeStamp_s1(self, args);
    case 0:
      return PyvtkVideoSource_GetFrameTimeStamp_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetFrameTimeStamp");
  return NULL;
}



static PyObject *
PyvtkVideoSource_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkVideoSource::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_GetInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInitialized();
      }
    else
      {
      tempr = op->vtkVideoSource::GetInitialized();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_ReleaseSystemResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseSystemResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseSystemResources();
      }
    else
      {
      op->vtkVideoSource::ReleaseSystemResources();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_InternalGrab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalGrab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InternalGrab();
      }
    else
      {
      op->vtkVideoSource::InternalGrab();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_SetStartTimeStamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartTimeStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartTimeStamp(temp0);
      }
    else
      {
      op->vtkVideoSource::SetStartTimeStamp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkVideoSource_GetStartTimeStamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartTimeStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVideoSource *op = static_cast<vtkVideoSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartTimeStamp();
      }
    else
      {
      tempr = op->vtkVideoSource::GetStartTimeStamp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkVideoSource_Methods[] = {
  {(char*)"GetClassName", PyvtkVideoSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkVideoSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkVideoSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkVideoSource\nC++: vtkVideoSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkVideoSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkVideoSource\nC++: vtkVideoSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Record", PyvtkVideoSource_Record, 1,
   (char*)"V.Record()\nC++: virtual void Record()\n\nRecord incoming video at the specified FrameRate.  The recording\ncontinues indefinitely until Stop() is called.\n"},
  {(char*)"Play", PyvtkVideoSource_Play, 1,
   (char*)"V.Play()\nC++: virtual void Play()\n\nPlay through the 'tape' sequentially at the specified frame rate.\nIf you have just finished Recoding, you should call Rewind()\nfirst.\n"},
  {(char*)"Stop", PyvtkVideoSource_Stop, 1,
   (char*)"V.Stop()\nC++: virtual void Stop()\n\nStop recording or playing.\n"},
  {(char*)"Rewind", PyvtkVideoSource_Rewind, 1,
   (char*)"V.Rewind()\nC++: virtual void Rewind()\n\nRewind to the frame with the earliest timestamp.  Record\noperations will start on the following frame, therefore if you\nwant to re-record over this frame you must call Seek(-1) before\ncalling Grab() or Record().\n"},
  {(char*)"FastForward", PyvtkVideoSource_FastForward, 1,
   (char*)"V.FastForward()\nC++: virtual void FastForward()\n\nFastForward to the last frame that was recorded (i.e. to the\nframe that has the most recent timestamp).\n"},
  {(char*)"Seek", PyvtkVideoSource_Seek, 1,
   (char*)"V.Seek(int)\nC++: virtual void Seek(int n)\n\nSeek forwards or backwards by the specified number of frames\n(positive is forward, negative is backward).\n"},
  {(char*)"Grab", PyvtkVideoSource_Grab, 1,
   (char*)"V.Grab()\nC++: virtual void Grab()\n\nGrab a single video frame.\n"},
  {(char*)"GetRecording", PyvtkVideoSource_GetRecording, 1,
   (char*)"V.GetRecording() -> int\nC++: int GetRecording()\n\nAre we in record mode? (record mode and play mode are mutually\nexclusive).\n"},
  {(char*)"GetPlaying", PyvtkVideoSource_GetPlaying, 1,
   (char*)"V.GetPlaying() -> int\nC++: int GetPlaying()\n\nAre we in play mode? (record mode and play mode are mutually\nexclusive).\n"},
  {(char*)"SetFrameSize", PyvtkVideoSource_SetFrameSize, 1,
   (char*)"V.SetFrameSize(int, int, int)\nC++: virtual void SetFrameSize(int x, int y, int z)\nV.SetFrameSize([int, int, int])\nC++: virtual void SetFrameSize(int dim[3])\n\nSet the full-frame size.  This must be an allowed size for the\ndevice, the device may either refuse a request for an illegal\nframe size or automatically choose a new frame size. The default\nis usually 320x240x1, but can be device specific. The 'depth'\nshould always be 1 (unless you have a device that can handle 3D\nacquisition).\n"},
  {(char*)"GetFrameSize", PyvtkVideoSource_GetFrameSize, 1,
   (char*)"V.GetFrameSize() -> (int, int, int)\nC++: int *GetFrameSize()\n\n"},
  {(char*)"SetFrameRate", PyvtkVideoSource_SetFrameRate, 1,
   (char*)"V.SetFrameRate(float)\nC++: virtual void SetFrameRate(float rate)\n\nRequest a particular frame rate (default 30 frames per second).\n"},
  {(char*)"GetFrameRate", PyvtkVideoSource_GetFrameRate, 1,
   (char*)"V.GetFrameRate() -> float\nC++: float GetFrameRate()\n\nRequest a particular frame rate (default 30 frames per second).\n"},
  {(char*)"SetOutputFormat", PyvtkVideoSource_SetOutputFormat, 1,
   (char*)"V.SetOutputFormat(int)\nC++: virtual void SetOutputFormat(int format)\n\nSet the output format.  This must be appropriate for device,\nusually only VTK_LUMINANCE, VTK_RGB, and VTK_RGBA are supported.\n"},
  {(char*)"SetOutputFormatToLuminance", PyvtkVideoSource_SetOutputFormatToLuminance, 1,
   (char*)"V.SetOutputFormatToLuminance()\nC++: void SetOutputFormatToLuminance()\n\nSet the output format.  This must be appropriate for device,\nusually only VTK_LUMINANCE, VTK_RGB, and VTK_RGBA are supported.\n"},
  {(char*)"SetOutputFormatToRGB", PyvtkVideoSource_SetOutputFormatToRGB, 1,
   (char*)"V.SetOutputFormatToRGB()\nC++: void SetOutputFormatToRGB()\n\nSet the output format.  This must be appropriate for device,\nusually only VTK_LUMINANCE, VTK_RGB, and VTK_RGBA are supported.\n"},
  {(char*)"SetOutputFormatToRGBA", PyvtkVideoSource_SetOutputFormatToRGBA, 1,
   (char*)"V.SetOutputFormatToRGBA()\nC++: void SetOutputFormatToRGBA()\n\nSet the output format.  This must be appropriate for device,\nusually only VTK_LUMINANCE, VTK_RGB, and VTK_RGBA are supported.\n"},
  {(char*)"GetOutputFormat", PyvtkVideoSource_GetOutputFormat, 1,
   (char*)"V.GetOutputFormat() -> int\nC++: int GetOutputFormat()\n\nSet the output format.  This must be appropriate for device,\nusually only VTK_LUMINANCE, VTK_RGB, and VTK_RGBA are supported.\n"},
  {(char*)"SetFrameBufferSize", PyvtkVideoSource_SetFrameBufferSize, 1,
   (char*)"V.SetFrameBufferSize(int)\nC++: virtual void SetFrameBufferSize(int FrameBufferSize)\n\nSet size of the frame buffer, i.e. the number of frames that the\n'tape' can store.\n"},
  {(char*)"GetFrameBufferSize", PyvtkVideoSource_GetFrameBufferSize, 1,
   (char*)"V.GetFrameBufferSize() -> int\nC++: int GetFrameBufferSize()\n\nSet size of the frame buffer, i.e. the number of frames that the\n'tape' can store.\n"},
  {(char*)"SetNumberOfOutputFrames", PyvtkVideoSource_SetNumberOfOutputFrames, 1,
   (char*)"V.SetNumberOfOutputFrames(int)\nC++: void SetNumberOfOutputFrames(int a)\n\nSet the number of frames to copy to the output on each execute.\nThe frames will be concatenated along the Z dimension, with the\nmost recent frame first. Default: 1\n"},
  {(char*)"GetNumberOfOutputFrames", PyvtkVideoSource_GetNumberOfOutputFrames, 1,
   (char*)"V.GetNumberOfOutputFrames() -> int\nC++: int GetNumberOfOutputFrames()\n\nSet the number of frames to copy to the output on each execute.\nThe frames will be concatenated along the Z dimension, with the\nmost recent frame first. Default: 1\n"},
  {(char*)"AutoAdvanceOn", PyvtkVideoSource_AutoAdvanceOn, 1,
   (char*)"V.AutoAdvanceOn()\nC++: void AutoAdvanceOn()\n\nSet whether to automatically advance the buffer before each grab.\nDefault: on\n"},
  {(char*)"AutoAdvanceOff", PyvtkVideoSource_AutoAdvanceOff, 1,
   (char*)"V.AutoAdvanceOff()\nC++: void AutoAdvanceOff()\n\nSet whether to automatically advance the buffer before each grab.\nDefault: on\n"},
  {(char*)"SetAutoAdvance", PyvtkVideoSource_SetAutoAdvance, 1,
   (char*)"V.SetAutoAdvance(int)\nC++: void SetAutoAdvance(int a)\n\nSet whether to automatically advance the buffer before each grab.\nDefault: on\n"},
  {(char*)"GetAutoAdvance", PyvtkVideoSource_GetAutoAdvance, 1,
   (char*)"V.GetAutoAdvance() -> int\nC++: int GetAutoAdvance()\n\nSet whether to automatically advance the buffer before each grab.\nDefault: on\n"},
  {(char*)"SetClipRegion", PyvtkVideoSource_SetClipRegion, 1,
   (char*)"V.SetClipRegion([int, int, int, int, int, int])\nC++: virtual void SetClipRegion(int r[6])\nV.SetClipRegion(int, int, int, int, int, int)\nC++: virtual void SetClipRegion(int x0, int x1, int y0, int y1,\n    int z0, int z1)\n\nSet the clip rectangle for the frames.  The video will be clipped\nbefore it is copied into the framebuffer.  Changing the\nClipRegion will destroy the current contents of the framebuffer.\nThe default ClipRegion is\n(0,VTK_INT_MAX,0,VTK_INT_MAX,0,VTK_INT_MAX).\n"},
  {(char*)"GetClipRegion", PyvtkVideoSource_GetClipRegion, 1,
   (char*)"V.GetClipRegion() -> (int, int, int, int, int, int)\nC++: int *GetClipRegion()\n\n"},
  {(char*)"SetOutputWholeExtent", PyvtkVideoSource_SetOutputWholeExtent, 1,
   (char*)"V.SetOutputWholeExtent(int, int, int, int, int, int)\nC++: void SetOutputWholeExtent(int, int, int, int, int, int)\nV.SetOutputWholeExtent((int, int, int, int, int, int))\nC++: void SetOutputWholeExtent(int a[6])\n\n"},
  {(char*)"GetOutputWholeExtent", PyvtkVideoSource_GetOutputWholeExtent, 1,
   (char*)"V.GetOutputWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetOutputWholeExtent()\n\n"},
  {(char*)"SetDataSpacing", PyvtkVideoSource_SetDataSpacing, 1,
   (char*)"V.SetDataSpacing(float, float, float)\nC++: void SetDataSpacing(double, double, double)\nV.SetDataSpacing((float, float, float))\nC++: void SetDataSpacing(double a[3])\n\n"},
  {(char*)"GetDataSpacing", PyvtkVideoSource_GetDataSpacing, 1,
   (char*)"V.GetDataSpacing() -> (float, float, float)\nC++: double *GetDataSpacing()\n\n"},
  {(char*)"SetDataOrigin", PyvtkVideoSource_SetDataOrigin, 1,
   (char*)"V.SetDataOrigin(float, float, float)\nC++: void SetDataOrigin(double, double, double)\nV.SetDataOrigin((float, float, float))\nC++: void SetDataOrigin(double a[3])\n\n"},
  {(char*)"GetDataOrigin", PyvtkVideoSource_GetDataOrigin, 1,
   (char*)"V.GetDataOrigin() -> (float, float, float)\nC++: double *GetDataOrigin()\n\n"},
  {(char*)"SetOpacity", PyvtkVideoSource_SetOpacity, 1,
   (char*)"V.SetOpacity(float)\nC++: void SetOpacity(float a)\n\nFor RGBA output only (4 scalar components), set the opacity. \nThis will not modify the existing contents of the framebuffer,\nonly subsequently grabbed frames.\n"},
  {(char*)"GetOpacity", PyvtkVideoSource_GetOpacity, 1,
   (char*)"V.GetOpacity() -> float\nC++: float GetOpacity()\n\nFor RGBA output only (4 scalar components), set the opacity. \nThis will not modify the existing contents of the framebuffer,\nonly subsequently grabbed frames.\n"},
  {(char*)"GetFrameCount", PyvtkVideoSource_GetFrameCount, 1,
   (char*)"V.GetFrameCount() -> int\nC++: int GetFrameCount()\n\nThis value is incremented each time a frame is grabbed. reset it\nto zero (or any other value) at any time.\n"},
  {(char*)"SetFrameCount", PyvtkVideoSource_SetFrameCount, 1,
   (char*)"V.SetFrameCount(int)\nC++: void SetFrameCount(int a)\n\nThis value is incremented each time a frame is grabbed. reset it\nto zero (or any other value) at any time.\n"},
  {(char*)"GetFrameIndex", PyvtkVideoSource_GetFrameIndex, 1,
   (char*)"V.GetFrameIndex() -> int\nC++: int GetFrameIndex()\n\nGet the frame index relative to the 'beginning of the tape'. \nThis value wraps back to zero if it increases past the\nFrameBufferSize.\n"},
  {(char*)"GetFrameTimeStamp", PyvtkVideoSource_GetFrameTimeStamp, 1,
   (char*)"V.GetFrameTimeStamp(int) -> float\nC++: virtual double GetFrameTimeStamp(int frame)\nV.GetFrameTimeStamp() -> float\nC++: double GetFrameTimeStamp()\n\nGet a time stamp in seconds (resolution of milliseconds) for a\nvideo frame.   Time began on Jan 1, 1970.  You can specify a\nnumber (negative or positive) to specify the position of the\nvideo frame relative to the current frame.\n"},
  {(char*)"Initialize", PyvtkVideoSource_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nInitialize the hardware.  This is called automatically on the\nfirst Update or Grab.\n"},
  {(char*)"GetInitialized", PyvtkVideoSource_GetInitialized, 1,
   (char*)"V.GetInitialized() -> int\nC++: virtual int GetInitialized()\n\nInitialize the hardware.  This is called automatically on the\nfirst Update or Grab.\n"},
  {(char*)"ReleaseSystemResources", PyvtkVideoSource_ReleaseSystemResources, 1,
   (char*)"V.ReleaseSystemResources()\nC++: virtual void ReleaseSystemResources()\n\nRelease the video driver.  This method must be called before\napplication exit, or else the application might hang during exit.\n"},
  {(char*)"InternalGrab", PyvtkVideoSource_InternalGrab, 1,
   (char*)"V.InternalGrab()\nC++: virtual void InternalGrab()\n\nThe internal function which actually does the grab.  You will\ndefinitely want to override this if you develop a vtkVideoSource\nsubclass.\n"},
  {(char*)"SetStartTimeStamp", PyvtkVideoSource_SetStartTimeStamp, 1,
   (char*)"V.SetStartTimeStamp(float)\nC++: void SetStartTimeStamp(double t)\n\nAnd internal variable which marks the beginning of a Record\nsession. These methods are for internal use only.\n"},
  {(char*)"GetStartTimeStamp", PyvtkVideoSource_GetStartTimeStamp, 1,
   (char*)"V.GetStartTimeStamp() -> float\nC++: double GetStartTimeStamp()\n\nAnd internal variable which marks the beginning of a Record\nsession. These methods are for internal use only.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkVideoSource_StaticNew()
{
  return vtkVideoSource::New();
}

PyObject *PyVTKClass_vtkVideoSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkVideoSource_StaticNew,
    PyvtkVideoSource_Methods,
    "vtkVideoSource", modulename,
    NULL, NULL,
    PyvtkVideoSource_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkVideoSource_Doc()
{
  static const char *docstring[] = {
    "vtkVideoSource - Superclass of video input devices for VTK\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkVideoSource is a superclass for video input interfaces for VTK.\nThe goal is to provide an interface which is very similar to the\ninterface of a VCR, where the 'tape' is an internal frame buffer\ncapable of holding a preset number of video frames.  Specialized\nversions of this class record input from various video input sources.\nThis base class records input from a noise source.\n\nCaveats:\n\nYou mu",
    "st call the ReleaseSystemResources() method before the\napplication exits.  Otherwise the application might hang while trying\nto exit.\n\nSee Also:\n\nvtkWin32VideoSource vtkMILVideoSource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkVideoSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkVideoSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkVideoSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

