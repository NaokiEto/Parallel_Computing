// python wrapper for vtkGenericClip
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
#include "vtkGenericClip.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericClip(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericClip(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericClipNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericClipNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkGenericClip_Doc();


static PyObject *
PyvtkGenericClip_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

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
      tempr = op->vtkGenericClip::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

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
      tempr = op->vtkGenericClip::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  vtkGenericClip *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericClip::NewInstance();
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
PyvtkGenericClip_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGenericClip *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGenericClip::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0);
      }
    else
      {
      op->vtkGenericClip::SetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValue();
      }
    else
      {
      tempr = op->vtkGenericClip::GetValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInsideOut(temp0);
      }
    else
      {
      op->vtkGenericClip::SetInsideOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInsideOut();
      }
    else
      {
      tempr = op->vtkGenericClip::GetInsideOut();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOn();
      }
    else
      {
      op->vtkGenericClip::InsideOutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOff();
      }
    else
      {
      op->vtkGenericClip::InsideOutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_SetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->SetClipFunction(temp0);
      }
    else
      {
      op->vtkGenericClip::SetClipFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  vtkImplicitFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClipFunction();
      }
    else
      {
      tempr = op->vtkGenericClip::GetClipFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_SetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateClipScalars(temp0);
      }
    else
      {
      op->vtkGenericClip::SetGenerateClipScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateClipScalars();
      }
    else
      {
      tempr = op->vtkGenericClip::GetGenerateClipScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GenerateClipScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClipScalarsOn();
      }
    else
      {
      op->vtkGenericClip::GenerateClipScalarsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GenerateClipScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClipScalarsOff();
      }
    else
      {
      op->vtkGenericClip::GenerateClipScalarsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_SetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateClippedOutput(temp0);
      }
    else
      {
      op->vtkGenericClip::SetGenerateClippedOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateClippedOutput();
      }
    else
      {
      tempr = op->vtkGenericClip::GetGenerateClippedOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GenerateClippedOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClippedOutputOn();
      }
    else
      {
      op->vtkGenericClip::GenerateClippedOutputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GenerateClippedOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateClippedOutputOff();
      }
    else
      {
      op->vtkGenericClip::GenerateClippedOutputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_SetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMergeTolerance(temp0);
      }
    else
      {
      op->vtkGenericClip::SetMergeTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GetMergeToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMergeToleranceMinValue();
      }
    else
      {
      tempr = op->vtkGenericClip::GetMergeToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GetMergeToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMergeToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkGenericClip::GetMergeToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMergeTolerance();
      }
    else
      {
      tempr = op->vtkGenericClip::GetMergeTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GetClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClippedOutput();
      }
    else
      {
      tempr = op->vtkGenericClip::GetClippedOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GetNumberOfOutputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfOutputs();
      }
    else
      {
      tempr = op->vtkGenericClip::GetNumberOfOutputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  vtkIncrementalPointLocator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
    {
    if (ap.IsBound())
      {
      op->SetLocator(temp0);
      }
    else
      {
      op->vtkGenericClip::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  vtkIncrementalPointLocator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLocator();
      }
    else
      {
      tempr = op->vtkGenericClip::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator();
      }
    else
      {
      op->vtkGenericClip::CreateDefaultLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

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
      tempr = op->vtkGenericClip::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_GetInputScalarsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputScalarsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputScalarsSelection();
      }
    else
      {
      tempr = op->vtkGenericClip::GetInputScalarsSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericClip_SelectInputScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectInputScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericClip *op = static_cast<vtkGenericClip *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SelectInputScalars(temp0);
      }
    else
      {
      op->vtkGenericClip::SelectInputScalars(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericClip_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericClip_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericClip_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericClip_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericClip\nC++: vtkGenericClip *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericClip_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericClip\nC++: vtkGenericClip *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetValue", PyvtkGenericClip_SetValue, 1,
   (char*)"V.SetValue(float)\nC++: void SetValue(double a)\n\nSet the clipping value of the implicit function (if clipping with\nimplicit function) or scalar value (if clipping with scalars).\nThe default value is 0.0.\n"},
  {(char*)"GetValue", PyvtkGenericClip_GetValue, 1,
   (char*)"V.GetValue() -> float\nC++: double GetValue()\n\nSet the clipping value of the implicit function (if clipping with\nimplicit function) or scalar value (if clipping with scalars).\nThe default value is 0.0.\n"},
  {(char*)"SetInsideOut", PyvtkGenericClip_SetInsideOut, 1,
   (char*)"V.SetInsideOut(int)\nC++: void SetInsideOut(int a)\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {(char*)"GetInsideOut", PyvtkGenericClip_GetInsideOut, 1,
   (char*)"V.GetInsideOut() -> int\nC++: int GetInsideOut()\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {(char*)"InsideOutOn", PyvtkGenericClip_InsideOutOn, 1,
   (char*)"V.InsideOutOn()\nC++: void InsideOutOn()\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {(char*)"InsideOutOff", PyvtkGenericClip_InsideOutOff, 1,
   (char*)"V.InsideOutOff()\nC++: void InsideOutOff()\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {(char*)"SetClipFunction", PyvtkGenericClip_SetClipFunction, 1,
   (char*)"V.SetClipFunction(vtkImplicitFunction)\nC++: virtual void SetClipFunction(vtkImplicitFunction *)\n\n"},
  {(char*)"GetClipFunction", PyvtkGenericClip_GetClipFunction, 1,
   (char*)"V.GetClipFunction() -> vtkImplicitFunction\nC++: vtkImplicitFunction *GetClipFunction()\n\n"},
  {(char*)"SetGenerateClipScalars", PyvtkGenericClip_SetGenerateClipScalars, 1,
   (char*)"V.SetGenerateClipScalars(int)\nC++: void SetGenerateClipScalars(int a)\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {(char*)"GetGenerateClipScalars", PyvtkGenericClip_GetGenerateClipScalars, 1,
   (char*)"V.GetGenerateClipScalars() -> int\nC++: int GetGenerateClipScalars()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {(char*)"GenerateClipScalarsOn", PyvtkGenericClip_GenerateClipScalarsOn, 1,
   (char*)"V.GenerateClipScalarsOn()\nC++: void GenerateClipScalarsOn()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {(char*)"GenerateClipScalarsOff", PyvtkGenericClip_GenerateClipScalarsOff, 1,
   (char*)"V.GenerateClipScalarsOff()\nC++: void GenerateClipScalarsOff()\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {(char*)"SetGenerateClippedOutput", PyvtkGenericClip_SetGenerateClippedOutput, 1,
   (char*)"V.SetGenerateClippedOutput(int)\nC++: void SetGenerateClippedOutput(int a)\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GetGenerateClippedOutput", PyvtkGenericClip_GetGenerateClippedOutput, 1,
   (char*)"V.GetGenerateClippedOutput() -> int\nC++: int GetGenerateClippedOutput()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GenerateClippedOutputOn", PyvtkGenericClip_GenerateClippedOutputOn, 1,
   (char*)"V.GenerateClippedOutputOn()\nC++: void GenerateClippedOutputOn()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"GenerateClippedOutputOff", PyvtkGenericClip_GenerateClippedOutputOff, 1,
   (char*)"V.GenerateClippedOutputOff()\nC++: void GenerateClippedOutputOff()\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {(char*)"SetMergeTolerance", PyvtkGenericClip_SetMergeTolerance, 1,
   (char*)"V.SetMergeTolerance(float)\nC++: void SetMergeTolerance(double)\n\nSet the tolerance for merging clip intersection points that are\nnear the vertices of cells. This tolerance is used to prevent the\ngeneration of degenerate primitives. Note that only 3D cells\nactually use this instance variable.\n"},
  {(char*)"GetMergeToleranceMinValue", PyvtkGenericClip_GetMergeToleranceMinValue, 1,
   (char*)"V.GetMergeToleranceMinValue() -> float\nC++: double GetMergeToleranceMinValue()\n\nSet the tolerance for merging clip intersection points that are\nnear the vertices of cells. This tolerance is used to prevent the\ngeneration of degenerate primitives. Note that only 3D cells\nactually use this instance variable.\n"},
  {(char*)"GetMergeToleranceMaxValue", PyvtkGenericClip_GetMergeToleranceMaxValue, 1,
   (char*)"V.GetMergeToleranceMaxValue() -> float\nC++: double GetMergeToleranceMaxValue()\n\nSet the tolerance for merging clip intersection points that are\nnear the vertices of cells. This tolerance is used to prevent the\ngeneration of degenerate primitives. Note that only 3D cells\nactually use this instance variable.\n"},
  {(char*)"GetMergeTolerance", PyvtkGenericClip_GetMergeTolerance, 1,
   (char*)"V.GetMergeTolerance() -> float\nC++: double GetMergeTolerance()\n\nSet the tolerance for merging clip intersection points that are\nnear the vertices of cells. This tolerance is used to prevent the\ngeneration of degenerate primitives. Note that only 3D cells\nactually use this instance variable.\n"},
  {(char*)"GetClippedOutput", PyvtkGenericClip_GetClippedOutput, 1,
   (char*)"V.GetClippedOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetClippedOutput()\n\nReturn the Clipped output.\n"},
  {(char*)"GetNumberOfOutputs", PyvtkGenericClip_GetNumberOfOutputs, 1,
   (char*)"V.GetNumberOfOutputs() -> int\nC++: virtual int GetNumberOfOutputs()\n\nReturn the Clipped output.\n"},
  {(char*)"SetLocator", PyvtkGenericClip_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkGenericClip_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkGenericClip_CreateDefaultLocator, 1,
   (char*)"V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {(char*)"GetMTime", PyvtkGenericClip_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the mtime also considering the locator and clip function.\n"},
  {(char*)"GetInputScalarsSelection", PyvtkGenericClip_GetInputScalarsSelection, 1,
   (char*)"V.GetInputScalarsSelection() -> string\nC++: char *GetInputScalarsSelection()\n\nIf you want to clip by an arbitrary array, then set its name\nhere. By default this in NULL and the filter will use the active\nscalar array.\n"},
  {(char*)"SelectInputScalars", PyvtkGenericClip_SelectInputScalars, 1,
   (char*)"V.SelectInputScalars(string)\nC++: void SelectInputScalars(const char *fieldName)\n\nIf you want to clip by an arbitrary array, then set its name\nhere. By default this in NULL and the filter will use the active\nscalar array.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericClip_StaticNew()
{
  return vtkGenericClip::New();
}

PyObject *PyVTKClass_vtkGenericClipNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericClip_StaticNew,
    PyvtkGenericClip_Methods,
    "vtkGenericClip", modulename,
    NULL, NULL,
    PyvtkGenericClip_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGenericClip_Doc()
{
  static const char *docstring[] = {
    "vtkGenericClip - clip any dataset with an implicit function or scalar\ndata\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkGenericClip is a filter that any type of dataset using either any\nsubclass of vtkImplicitFunction, or the input scalar data. Clipping\nmeans that it actually \"cuts\" through the cells of the dataset,\nreturning everything inside of the specified implicit function (or\ngreater than the scalar value) including \"pieces\" of a cell. (Compare\nthis with vtkExtractGeometry, which pulls out entire, uncut ce",
    "lls.)\nThe output of this filter is an unstructured grid.\n\nTo use this filter, you must decide if you will be clipping with an\nimplicit function, or whether you will be using the input scalar\ndata.  If you want to clip with an implicit function, you must:\n1) define an implicit function\n2) set it with the SetClipFunction method\n3) apply the GenerateClipScalarsOn method If a ClipFunction is not\n   sp",
    "ecified, or GenerateClipScalars is off (the default), then the\n   input's scalar data will be used to clip the polydata.\n\nYou can also specify a scalar value, which is used to decide what is\ninside and outside of the implicit function. You can also reverse the\nsense of what inside/outside is by setting the InsideOut instance\nvariable. (The clipping algorithm proceeds by computing an implicit\nfunct",
    "ion value or using the input scalar data for each point in the\ndataset. This is compared to the scalar value to determine\ninside/outside.)\n\nThis filter can be configured to compute a second output. The second\noutput is the part of the cell that is clipped away. Set the\nGenerateClippedData boolean on if you wish to access this output\ndata.\n\nThis filter has been implemented to operate on generic dat",
    "asets,\nrather than the typical vtkDataSet (and subclasses).\nvtkGenericDataSet is a more complex cousin of vtkDataSet, typically\nconsisting of nonlinear, higher-order cells. To process this type of\ndata, generic cells are automatically tessellated into linear cells\nprior to isocontouring.\n\nSee Also:\n\nvtkClipDataSet vtkClipPolyData vtkClipVolume vtkImplicitFunction\nvtkGenericDataSet\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericClip(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericClipNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericClip", o) != 0)
    {
    Py_DECREF(o);
    }

}
