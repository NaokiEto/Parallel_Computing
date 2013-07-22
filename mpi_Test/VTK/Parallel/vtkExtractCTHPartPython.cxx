// python wrapper for vtkExtractCTHPart
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
#include "vtkExtractCTHPart.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractCTHPart(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractCTHPart(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractCTHPartNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractCTHPartNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkExtractCTHPart_Doc();


static PyObject *
PyvtkExtractCTHPart_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

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
      tempr = op->vtkExtractCTHPart::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

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
      tempr = op->vtkExtractCTHPart::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  vtkExtractCTHPart *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractCTHPart::NewInstance();
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
PyvtkExtractCTHPart_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractCTHPart *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractCTHPart::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_BOUNDS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BOUNDS");

  vtkInformationDoubleVectorKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExtractCTHPart::BOUNDS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_RemoveDoubleVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDoubleVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveDoubleVolumeArrayNames();
      }
    else
      {
      op->vtkExtractCTHPart::RemoveDoubleVolumeArrayNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_RemoveFloatVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFloatVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveFloatVolumeArrayNames();
      }
    else
      {
      op->vtkExtractCTHPart::RemoveFloatVolumeArrayNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_RemoveUnsignedCharVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUnsignedCharVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveUnsignedCharVolumeArrayNames();
      }
    else
      {
      op->vtkExtractCTHPart::RemoveUnsignedCharVolumeArrayNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetNumberOfVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVolumeArrayNames();
      }
    else
      {
      tempr = op->vtkExtractCTHPart::GetNumberOfVolumeArrayNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVolumeArrayName(temp0);
      }
    else
      {
      tempr = op->vtkExtractCTHPart::GetVolumeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_RemoveAllVolumeArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVolumeArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllVolumeArrayNames();
      }
    else
      {
      op->vtkExtractCTHPart::RemoveAllVolumeArrayNames();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_AddDoubleVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDoubleVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddDoubleVolumeArrayName(temp0);
      }
    else
      {
      op->vtkExtractCTHPart::AddDoubleVolumeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_AddFloatVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFloatVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddFloatVolumeArrayName(temp0);
      }
    else
      {
      op->vtkExtractCTHPart::AddFloatVolumeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_AddUnsignedCharVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUnsignedCharVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddUnsignedCharVolumeArrayName(temp0);
      }
    else
      {
      op->vtkExtractCTHPart::AddUnsignedCharVolumeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_AddVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->AddVolumeArrayName(temp0);
      }
    else
      {
      op->vtkExtractCTHPart::AddVolumeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SetClipPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->SetClipPlane(temp0);
      }
    else
      {
      op->vtkExtractCTHPart::SetClipPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetClipPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  vtkPlane *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClipPlane();
      }
    else
      {
      tempr = op->vtkExtractCTHPart::GetClipPlane();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

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
      tempr = op->vtkExtractCTHPart::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkExtractCTHPart::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkExtractCTHPart::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_SetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVolumeFractionSurfaceValue(temp0);
      }
    else
      {
      op->vtkExtractCTHPart::SetVolumeFractionSurfaceValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetVolumeFractionSurfaceValueMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValueMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVolumeFractionSurfaceValueMinValue();
      }
    else
      {
      tempr = op->vtkExtractCTHPart::GetVolumeFractionSurfaceValueMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetVolumeFractionSurfaceValueMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValueMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVolumeFractionSurfaceValueMaxValue();
      }
    else
      {
      tempr = op->vtkExtractCTHPart::GetVolumeFractionSurfaceValueMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCTHPart_GetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCTHPart *op = static_cast<vtkExtractCTHPart *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVolumeFractionSurfaceValue();
      }
    else
      {
      tempr = op->vtkExtractCTHPart::GetVolumeFractionSurfaceValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractCTHPart_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractCTHPart_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractCTHPart_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractCTHPart_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractCTHPart\nC++: vtkExtractCTHPart *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractCTHPart_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractCTHPart\nC++: vtkExtractCTHPart *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"BOUNDS", PyvtkExtractCTHPart_BOUNDS, 1,
   (char*)"V.BOUNDS() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *BOUNDS()\n\nkey to record the bounds of the hierarchical dataset.\n"},
  {(char*)"RemoveDoubleVolumeArrayNames", PyvtkExtractCTHPart_RemoveDoubleVolumeArrayNames, 1,
   (char*)"V.RemoveDoubleVolumeArrayNames()\nC++: void RemoveDoubleVolumeArrayNames()\n\nNames of cell volume fraction arrays to extract.\n"},
  {(char*)"RemoveFloatVolumeArrayNames", PyvtkExtractCTHPart_RemoveFloatVolumeArrayNames, 1,
   (char*)"V.RemoveFloatVolumeArrayNames()\nC++: void RemoveFloatVolumeArrayNames()\n\nNames of cell volume fraction arrays to extract.\n"},
  {(char*)"RemoveUnsignedCharVolumeArrayNames", PyvtkExtractCTHPart_RemoveUnsignedCharVolumeArrayNames, 1,
   (char*)"V.RemoveUnsignedCharVolumeArrayNames()\nC++: void RemoveUnsignedCharVolumeArrayNames()\n\nNames of cell volume fraction arrays to extract.\n"},
  {(char*)"GetNumberOfVolumeArrayNames", PyvtkExtractCTHPart_GetNumberOfVolumeArrayNames, 1,
   (char*)"V.GetNumberOfVolumeArrayNames() -> int\nC++: int GetNumberOfVolumeArrayNames()\n\nNames of cell volume fraction arrays to extract.\n"},
  {(char*)"GetVolumeArrayName", PyvtkExtractCTHPart_GetVolumeArrayName, 1,
   (char*)"V.GetVolumeArrayName(int) -> string\nC++: const char *GetVolumeArrayName(int idx)\n\nNames of cell volume fraction arrays to extract.\n"},
  {(char*)"RemoveAllVolumeArrayNames", PyvtkExtractCTHPart_RemoveAllVolumeArrayNames, 1,
   (char*)"V.RemoveAllVolumeArrayNames()\nC++: void RemoveAllVolumeArrayNames()\n\n"},
  {(char*)"AddDoubleVolumeArrayName", PyvtkExtractCTHPart_AddDoubleVolumeArrayName, 1,
   (char*)"V.AddDoubleVolumeArrayName(string)\nC++: void AddDoubleVolumeArrayName(char *arrayName)\n\n"},
  {(char*)"AddFloatVolumeArrayName", PyvtkExtractCTHPart_AddFloatVolumeArrayName, 1,
   (char*)"V.AddFloatVolumeArrayName(string)\nC++: void AddFloatVolumeArrayName(char *arrayName)\n\n"},
  {(char*)"AddUnsignedCharVolumeArrayName", PyvtkExtractCTHPart_AddUnsignedCharVolumeArrayName, 1,
   (char*)"V.AddUnsignedCharVolumeArrayName(string)\nC++: void AddUnsignedCharVolumeArrayName(char *arrayName)\n\n"},
  {(char*)"AddVolumeArrayName", PyvtkExtractCTHPart_AddVolumeArrayName, 1,
   (char*)"V.AddVolumeArrayName(string)\nC++: void AddVolumeArrayName(char *arrayName)\n\n"},
  {(char*)"SetClipPlane", PyvtkExtractCTHPart_SetClipPlane, 1,
   (char*)"V.SetClipPlane(vtkPlane)\nC++: void SetClipPlane(vtkPlane *clipPlane)\n\nSet, get or maninpulate the implicit clipping plane.\n"},
  {(char*)"GetClipPlane", PyvtkExtractCTHPart_GetClipPlane, 1,
   (char*)"V.GetClipPlane() -> vtkPlane\nC++: vtkPlane *GetClipPlane()\n\nSet, get or maninpulate the implicit clipping plane.\n"},
  {(char*)"GetMTime", PyvtkExtractCTHPart_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nLook at clip plane to compute MTime.\n"},
  {(char*)"SetController", PyvtkExtractCTHPart_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *controller)\n\nSet the controller used to coordinate parallel processing.\n"},
  {(char*)"GetController", PyvtkExtractCTHPart_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nReturn the controller used to coordinate parallel processing. By\ndefault, it is the global controller.\n"},
  {(char*)"SetVolumeFractionSurfaceValue", PyvtkExtractCTHPart_SetVolumeFractionSurfaceValue, 1,
   (char*)"V.SetVolumeFractionSurfaceValue(float)\nC++: void SetVolumeFractionSurfaceValue(double)\n\nSet and get the volume fraction surface value. This value should\nbe between 0 and 1\n"},
  {(char*)"GetVolumeFractionSurfaceValueMinValue", PyvtkExtractCTHPart_GetVolumeFractionSurfaceValueMinValue, 1,
   (char*)"V.GetVolumeFractionSurfaceValueMinValue() -> float\nC++: double GetVolumeFractionSurfaceValueMinValue()\n\nSet and get the volume fraction surface value. This value should\nbe between 0 and 1\n"},
  {(char*)"GetVolumeFractionSurfaceValueMaxValue", PyvtkExtractCTHPart_GetVolumeFractionSurfaceValueMaxValue, 1,
   (char*)"V.GetVolumeFractionSurfaceValueMaxValue() -> float\nC++: double GetVolumeFractionSurfaceValueMaxValue()\n\nSet and get the volume fraction surface value. This value should\nbe between 0 and 1\n"},
  {(char*)"GetVolumeFractionSurfaceValue", PyvtkExtractCTHPart_GetVolumeFractionSurfaceValue, 1,
   (char*)"V.GetVolumeFractionSurfaceValue() -> float\nC++: double GetVolumeFractionSurfaceValue()\n\nSet and get the volume fraction surface value. This value should\nbe between 0 and 1\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractCTHPart_StaticNew()
{
  return vtkExtractCTHPart::New();
}

PyObject *PyVTKClass_vtkExtractCTHPartNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractCTHPart_StaticNew,
    PyvtkExtractCTHPart_Methods,
    "vtkExtractCTHPart", modulename,
    NULL, NULL,
    PyvtkExtractCTHPart_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractCTHPart_Doc()
{
  static const char *docstring[] = {
    "vtkExtractCTHPart - Generates surface of an CTH volume fraction.\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkExtractCTHPart is a filter that is specialized for creating\nvisualization of a CTH simulation.  First it converts the cell data\nto point data.  It contours the selected volume fraction at a value\nof 0.5.  The user has the option of clipping the part with a plane.\nClipped surfaces of the part are generated.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractCTHPart(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractCTHPartNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractCTHPart", o) != 0)
    {
    Py_DECREF(o);
    }

}

