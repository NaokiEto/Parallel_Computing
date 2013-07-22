// python wrapper for vtkPCosmoHaloFinder
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
#include "vtkPCosmoHaloFinder.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPCosmoHaloFinder(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPCosmoHaloFinder(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPCosmoHaloFinderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPCosmoHaloFinderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkPCosmoHaloFinder_Doc();


static PyObject *
PyvtkPCosmoHaloFinder_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

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
      tempr = op->vtkPCosmoHaloFinder::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

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
      tempr = op->vtkPCosmoHaloFinder::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  vtkPCosmoHaloFinder *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPCosmoHaloFinder::NewInstance();
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
PyvtkPCosmoHaloFinder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPCosmoHaloFinder *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPCosmoHaloFinder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

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
      tempr = op->vtkPCosmoHaloFinder::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

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
      op->vtkPCosmoHaloFinder::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_SetNP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNP(temp0);
      }
    else
      {
      op->vtkPCosmoHaloFinder::SetNP(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_GetNP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNP();
      }
    else
      {
      tempr = op->vtkPCosmoHaloFinder::GetNP();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_SetRL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRL(temp0);
      }
    else
      {
      op->vtkPCosmoHaloFinder::SetRL(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_GetRL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRL();
      }
    else
      {
      tempr = op->vtkPCosmoHaloFinder::GetRL();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_SetOverlap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOverlap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOverlap(temp0);
      }
    else
      {
      op->vtkPCosmoHaloFinder::SetOverlap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_GetOverlap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverlap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOverlap();
      }
    else
      {
      tempr = op->vtkPCosmoHaloFinder::GetOverlap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_SetPMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPMin(temp0);
      }
    else
      {
      op->vtkPCosmoHaloFinder::SetPMin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_GetPMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPMin();
      }
    else
      {
      tempr = op->vtkPCosmoHaloFinder::GetPMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_SetBB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBB(temp0);
      }
    else
      {
      op->vtkPCosmoHaloFinder::SetBB(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_GetBB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBB();
      }
    else
      {
      tempr = op->vtkPCosmoHaloFinder::GetBB();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_SetCopyHaloDataToParticles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyHaloDataToParticles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCopyHaloDataToParticles(temp0);
      }
    else
      {
      op->vtkPCosmoHaloFinder::SetCopyHaloDataToParticles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_GetCopyHaloDataToParticles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyHaloDataToParticles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCopyHaloDataToParticles();
      }
    else
      {
      tempr = op->vtkPCosmoHaloFinder::GetCopyHaloDataToParticles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_SetComputeMostBoundParticle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeMostBoundParticle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeMostBoundParticle(temp0);
      }
    else
      {
      op->vtkPCosmoHaloFinder::SetComputeMostBoundParticle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_GetComputeMostBoundParticle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeMostBoundParticle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeMostBoundParticle();
      }
    else
      {
      tempr = op->vtkPCosmoHaloFinder::GetComputeMostBoundParticle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_SetComputeMostConnectedParticle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeMostConnectedParticle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeMostConnectedParticle(temp0);
      }
    else
      {
      op->vtkPCosmoHaloFinder::SetComputeMostConnectedParticle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_GetComputeMostConnectedParticle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeMostConnectedParticle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeMostConnectedParticle();
      }
    else
      {
      tempr = op->vtkPCosmoHaloFinder::GetComputeMostConnectedParticle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_SetComputeSOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeSOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeSOD(temp0);
      }
    else
      {
      op->vtkPCosmoHaloFinder::SetComputeSOD(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_GetComputeSOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeSOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeSOD();
      }
    else
      {
      tempr = op->vtkPCosmoHaloFinder::GetComputeSOD();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_SetSODCenterType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSODCenterType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSODCenterType(temp0);
      }
    else
      {
      op->vtkPCosmoHaloFinder::SetSODCenterType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_GetSODCenterType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSODCenterType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSODCenterType();
      }
    else
      {
      tempr = op->vtkPCosmoHaloFinder::GetSODCenterType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_SetRhoCScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRhoCScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRhoCScale(temp0);
      }
    else
      {
      op->vtkPCosmoHaloFinder::SetRhoCScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_GetRhoCScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRhoCScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRhoCScale();
      }
    else
      {
      tempr = op->vtkPCosmoHaloFinder::GetRhoCScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_SetSODMassScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSODMassScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSODMassScale(temp0);
      }
    else
      {
      op->vtkPCosmoHaloFinder::SetSODMassScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoHaloFinder_GetSODMassScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSODMassScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoHaloFinder *op = static_cast<vtkPCosmoHaloFinder *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSODMassScale();
      }
    else
      {
      tempr = op->vtkPCosmoHaloFinder::GetSODMassScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPCosmoHaloFinder_Methods[] = {
  {(char*)"GetClassName", PyvtkPCosmoHaloFinder_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPCosmoHaloFinder_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPCosmoHaloFinder_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPCosmoHaloFinder\nC++: vtkPCosmoHaloFinder *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPCosmoHaloFinder_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPCosmoHaloFinder\nC++: vtkPCosmoHaloFinder *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetController", PyvtkPCosmoHaloFinder_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet the communicator object for interprocess communication\n"},
  {(char*)"SetController", PyvtkPCosmoHaloFinder_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet the communicator object for interprocess communication\n"},
  {(char*)"SetNP", PyvtkPCosmoHaloFinder_SetNP, 1,
   (char*)"V.SetNP(int)\nC++: void SetNP(int a)\n\nSpecify the number of seeded particles in one dimension (total =\nnp^3) (default 256)\n"},
  {(char*)"GetNP", PyvtkPCosmoHaloFinder_GetNP, 1,
   (char*)"V.GetNP() -> int\nC++: int GetNP()\n\nSpecify the number of seeded particles in one dimension (total =\nnp^3) (default 256)\n"},
  {(char*)"SetRL", PyvtkPCosmoHaloFinder_SetRL, 1,
   (char*)"V.SetRL(float)\nC++: void SetRL(float a)\n\nSpecify the physical box dimensions size (rL) (default 100.0)\n"},
  {(char*)"GetRL", PyvtkPCosmoHaloFinder_GetRL, 1,
   (char*)"V.GetRL() -> float\nC++: float GetRL()\n\nSpecify the physical box dimensions size (rL) (default 100.0)\n"},
  {(char*)"SetOverlap", PyvtkPCosmoHaloFinder_SetOverlap, 1,
   (char*)"V.SetOverlap(float)\nC++: void SetOverlap(float a)\n\nSpecify the ghost cell spacing (in rL units) (edge boundary of\nprocessor box) (default 5)\n"},
  {(char*)"GetOverlap", PyvtkPCosmoHaloFinder_GetOverlap, 1,
   (char*)"V.GetOverlap() -> float\nC++: float GetOverlap()\n\nSpecify the ghost cell spacing (in rL units) (edge boundary of\nprocessor box) (default 5)\n"},
  {(char*)"SetPMin", PyvtkPCosmoHaloFinder_SetPMin, 1,
   (char*)"V.SetPMin(int)\nC++: void SetPMin(int a)\n\nSpecify the minimum number of particles for a halo (pmin)\n(default 100)\n"},
  {(char*)"GetPMin", PyvtkPCosmoHaloFinder_GetPMin, 1,
   (char*)"V.GetPMin() -> int\nC++: int GetPMin()\n\nSpecify the minimum number of particles for a halo (pmin)\n(default 100)\n"},
  {(char*)"SetBB", PyvtkPCosmoHaloFinder_SetBB, 1,
   (char*)"V.SetBB(float)\nC++: void SetBB(float a)\n\nSpecify the linking length (bb) (default .2)\n"},
  {(char*)"GetBB", PyvtkPCosmoHaloFinder_GetBB, 1,
   (char*)"V.GetBB() -> float\nC++: float GetBB()\n\nSpecify the linking length (bb) (default .2)\n"},
  {(char*)"SetCopyHaloDataToParticles", PyvtkPCosmoHaloFinder_SetCopyHaloDataToParticles, 1,
   (char*)"V.SetCopyHaloDataToParticles(int)\nC++: void SetCopyHaloDataToParticles(int a)\n\nCopy the halo information to the original particles (default off)\n"},
  {(char*)"GetCopyHaloDataToParticles", PyvtkPCosmoHaloFinder_GetCopyHaloDataToParticles, 1,
   (char*)"V.GetCopyHaloDataToParticles() -> int\nC++: int GetCopyHaloDataToParticles()\n\nCopy the halo information to the original particles (default off)\n"},
  {(char*)"SetComputeMostBoundParticle", PyvtkPCosmoHaloFinder_SetComputeMostBoundParticle, 1,
   (char*)"V.SetComputeMostBoundParticle(int)\nC++: void SetComputeMostBoundParticle(int a)\n\nTurn on calculation of the most bound particle (center finding)\n(default off)\n"},
  {(char*)"GetComputeMostBoundParticle", PyvtkPCosmoHaloFinder_GetComputeMostBoundParticle, 1,
   (char*)"V.GetComputeMostBoundParticle() -> int\nC++: int GetComputeMostBoundParticle()\n\nTurn on calculation of the most bound particle (center finding)\n(default off)\n"},
  {(char*)"SetComputeMostConnectedParticle", PyvtkPCosmoHaloFinder_SetComputeMostConnectedParticle, 1,
   (char*)"V.SetComputeMostConnectedParticle(int)\nC++: void SetComputeMostConnectedParticle(int a)\n\nTurn on calculation of the most connect particle (center finding)\n(default off)\n"},
  {(char*)"GetComputeMostConnectedParticle", PyvtkPCosmoHaloFinder_GetComputeMostConnectedParticle, 1,
   (char*)"V.GetComputeMostConnectedParticle() -> int\nC++: int GetComputeMostConnectedParticle()\n\nTurn on calculation of the most connect particle (center finding)\n(default off)\n"},
  {(char*)"SetComputeSOD", PyvtkPCosmoHaloFinder_SetComputeSOD, 1,
   (char*)"V.SetComputeSOD(int)\nC++: void SetComputeSOD(int a)\n\nTurn on calculation of SOD halos (default off)\n"},
  {(char*)"GetComputeSOD", PyvtkPCosmoHaloFinder_GetComputeSOD, 1,
   (char*)"V.GetComputeSOD() -> int\nC++: int GetComputeSOD()\n\nTurn on calculation of SOD halos (default off)\n"},
  {(char*)"SetSODCenterType", PyvtkPCosmoHaloFinder_SetSODCenterType, 1,
   (char*)"V.SetSODCenterType(int)\nC++: void SetSODCenterType(int a)\n\nSpecify the FOF center to use in SOD calculations (0 = default,\ncenter of mass, 1 = average, 2 = MBP, 3 = MCP)\n"},
  {(char*)"GetSODCenterType", PyvtkPCosmoHaloFinder_GetSODCenterType, 1,
   (char*)"V.GetSODCenterType() -> int\nC++: int GetSODCenterType()\n\nSpecify the FOF center to use in SOD calculations (0 = default,\ncenter of mass, 1 = average, 2 = MBP, 3 = MCP)\n"},
  {(char*)"SetRhoCScale", PyvtkPCosmoHaloFinder_SetRhoCScale, 1,
   (char*)"V.SetRhoCScale(float)\nC++: void SetRhoCScale(float a)\n\nSpecify the scale factor for rho_c (2.77536627e11) (critical\ndensity in (M_sun/h) / (Mpc/h)^3) (default 1.0)\n"},
  {(char*)"GetRhoCScale", PyvtkPCosmoHaloFinder_GetRhoCScale, 1,
   (char*)"V.GetRhoCScale() -> float\nC++: float GetRhoCScale()\n\nSpecify the scale factor for rho_c (2.77536627e11) (critical\ndensity in (M_sun/h) / (Mpc/h)^3) (default 1.0)\n"},
  {(char*)"SetSODMassScale", PyvtkPCosmoHaloFinder_SetSODMassScale, 1,
   (char*)"V.SetSODMassScale(float)\nC++: void SetSODMassScale(float a)\n\nSpecify the scale factor for initial SOD mass (1.0e14) (default\n1.0)\n"},
  {(char*)"GetSODMassScale", PyvtkPCosmoHaloFinder_GetSODMassScale, 1,
   (char*)"V.GetSODMassScale() -> float\nC++: float GetSODMassScale()\n\nSpecify the scale factor for initial SOD mass (1.0e14) (default\n1.0)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPCosmoHaloFinder_StaticNew()
{
  return vtkPCosmoHaloFinder::New();
}

PyObject *PyVTKClass_vtkPCosmoHaloFinderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPCosmoHaloFinder_StaticNew,
    PyvtkPCosmoHaloFinder_Methods,
    "vtkPCosmoHaloFinder", modulename,
    NULL, NULL,
    PyvtkPCosmoHaloFinder_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPCosmoHaloFinder_Doc()
{
  static const char *docstring[] = {
    "vtkPCosmoHaloFinder - find halos within a cosmology data file\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkPCosmoHaloFinder is a filter object that operates on the\nunstructured grid of all particles and assigns each particle a halo\nid.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPCosmoHaloFinder(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPCosmoHaloFinderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPCosmoHaloFinder", o) != 0)
    {
    Py_DECREF(o);
    }

}

