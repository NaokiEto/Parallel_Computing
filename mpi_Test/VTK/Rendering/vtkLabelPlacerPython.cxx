// python wrapper for vtkLabelPlacer
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
#include "vtkLabelPlacer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLabelPlacer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLabelPlacer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLabelPlacerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLabelPlacerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkLabelPlacer_Doc();


static PyObject *
PyvtkLabelPlacer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      tempr = op->vtkLabelPlacer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      tempr = op->vtkLabelPlacer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  vtkLabelPlacer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLabelPlacer::NewInstance();
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
PyvtkLabelPlacer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLabelPlacer *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLabelPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  vtkRenderer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderer();
      }
    else
      {
      tempr = op->vtkLabelPlacer::GetRenderer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkLabelPlacer::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetAnchorTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnchorTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  vtkCoordinate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAnchorTransform();
      }
    else
      {
      tempr = op->vtkLabelPlacer::GetAnchorTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetGravity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGravity(temp0);
      }
    else
      {
      op->vtkLabelPlacer::SetGravity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetGravity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGravity();
      }
    else
      {
      tempr = op->vtkLabelPlacer::GetGravity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetMaximumLabelFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLabelFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumLabelFraction(temp0);
      }
    else
      {
      op->vtkLabelPlacer::SetMaximumLabelFraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetMaximumLabelFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumLabelFractionMinValue();
      }
    else
      {
      tempr = op->vtkLabelPlacer::GetMaximumLabelFractionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetMaximumLabelFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumLabelFractionMaxValue();
      }
    else
      {
      tempr = op->vtkLabelPlacer::GetMaximumLabelFractionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetMaximumLabelFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumLabelFraction();
      }
    else
      {
      tempr = op->vtkLabelPlacer::GetMaximumLabelFraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetIteratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIteratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIteratorType(temp0);
      }
    else
      {
      op->vtkLabelPlacer::SetIteratorType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetIteratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIteratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIteratorType();
      }
    else
      {
      tempr = op->vtkLabelPlacer::GetIteratorType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetUseUnicodeStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseUnicodeStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseUnicodeStrings(temp0);
      }
    else
      {
      op->vtkLabelPlacer::SetUseUnicodeStrings(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetUseUnicodeStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseUnicodeStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseUnicodeStrings();
      }
    else
      {
      tempr = op->vtkLabelPlacer::GetUseUnicodeStrings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_UseUnicodeStringsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUnicodeStringsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseUnicodeStringsOn();
      }
    else
      {
      op->vtkLabelPlacer::UseUnicodeStringsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_UseUnicodeStringsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUnicodeStringsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseUnicodeStringsOff();
      }
    else
      {
      op->vtkLabelPlacer::UseUnicodeStringsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      tempr = op->vtkLabelPlacer::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetPositionsAsNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionsAsNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPositionsAsNormals();
      }
    else
      {
      tempr = op->vtkLabelPlacer::GetPositionsAsNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetPositionsAsNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionsAsNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPositionsAsNormals(temp0);
      }
    else
      {
      op->vtkLabelPlacer::SetPositionsAsNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_PositionsAsNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsAsNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PositionsAsNormalsOn();
      }
    else
      {
      op->vtkLabelPlacer::PositionsAsNormalsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_PositionsAsNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsAsNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PositionsAsNormalsOff();
      }
    else
      {
      op->vtkLabelPlacer::PositionsAsNormalsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetGeneratePerturbedLabelSpokes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePerturbedLabelSpokes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGeneratePerturbedLabelSpokes();
      }
    else
      {
      tempr = op->vtkLabelPlacer::GetGeneratePerturbedLabelSpokes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetGeneratePerturbedLabelSpokes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePerturbedLabelSpokes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGeneratePerturbedLabelSpokes(temp0);
      }
    else
      {
      op->vtkLabelPlacer::SetGeneratePerturbedLabelSpokes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GeneratePerturbedLabelSpokesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePerturbedLabelSpokesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePerturbedLabelSpokesOn();
      }
    else
      {
      op->vtkLabelPlacer::GeneratePerturbedLabelSpokesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GeneratePerturbedLabelSpokesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePerturbedLabelSpokesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GeneratePerturbedLabelSpokesOff();
      }
    else
      {
      op->vtkLabelPlacer::GeneratePerturbedLabelSpokesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetUseDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseDepthBuffer();
      }
    else
      {
      tempr = op->vtkLabelPlacer::GetUseDepthBuffer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetUseDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseDepthBuffer(temp0);
      }
    else
      {
      op->vtkLabelPlacer::SetUseDepthBuffer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_UseDepthBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDepthBufferOn();
      }
    else
      {
      op->vtkLabelPlacer::UseDepthBufferOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_UseDepthBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseDepthBufferOff();
      }
    else
      {
      op->vtkLabelPlacer::UseDepthBufferOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetOutputTraversedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputTraversedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputTraversedBounds();
      }
    else
      {
      tempr = op->vtkLabelPlacer::GetOutputTraversedBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetOutputTraversedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTraversedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputTraversedBounds(temp0);
      }
    else
      {
      op->vtkLabelPlacer::SetOutputTraversedBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_OutputTraversedBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputTraversedBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputTraversedBoundsOn();
      }
    else
      {
      op->vtkLabelPlacer::OutputTraversedBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_OutputTraversedBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputTraversedBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputTraversedBoundsOff();
      }
    else
      {
      op->vtkLabelPlacer::OutputTraversedBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetOutputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputCoordinateSystem();
      }
    else
      {
      tempr = op->vtkLabelPlacer::GetOutputCoordinateSystem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetOutputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputCoordinateSystem(temp0);
      }
    else
      {
      op->vtkLabelPlacer::SetOutputCoordinateSystem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetOutputCoordinateSystemMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputCoordinateSystemMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputCoordinateSystemMinValue();
      }
    else
      {
      tempr = op->vtkLabelPlacer::GetOutputCoordinateSystemMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetOutputCoordinateSystemMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputCoordinateSystemMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputCoordinateSystemMaxValue();
      }
    else
      {
      tempr = op->vtkLabelPlacer::GetOutputCoordinateSystemMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_OutputCoordinateSystemWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputCoordinateSystemWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputCoordinateSystemWorld();
      }
    else
      {
      op->vtkLabelPlacer::OutputCoordinateSystemWorld();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelPlacer_OutputCoordinateSystemDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputCoordinateSystemDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutputCoordinateSystemDisplay();
      }
    else
      {
      op->vtkLabelPlacer::OutputCoordinateSystemDisplay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkLabelPlacer_Methods[] = {
  {(char*)"GetClassName", PyvtkLabelPlacer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLabelPlacer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLabelPlacer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLabelPlacer\nC++: vtkLabelPlacer *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLabelPlacer_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLabelPlacer\nC++: vtkLabelPlacer *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetRenderer", PyvtkLabelPlacer_GetRenderer, 1,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\n"},
  {(char*)"SetRenderer", PyvtkLabelPlacer_SetRenderer, 1,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *)\n\n"},
  {(char*)"GetAnchorTransform", PyvtkLabelPlacer_GetAnchorTransform, 1,
   (char*)"V.GetAnchorTransform() -> vtkCoordinate\nC++: vtkCoordinate *GetAnchorTransform()\n\n"},
  {(char*)"SetGravity", PyvtkLabelPlacer_SetGravity, 1,
   (char*)"V.SetGravity(int)\nC++: virtual void SetGravity(int gravity)\n\nThe placement of the label relative to the anchor point.\n"},
  {(char*)"GetGravity", PyvtkLabelPlacer_GetGravity, 1,
   (char*)"V.GetGravity() -> int\nC++: int GetGravity()\n\nThe placement of the label relative to the anchor point.\n"},
  {(char*)"SetMaximumLabelFraction", PyvtkLabelPlacer_SetMaximumLabelFraction, 1,
   (char*)"V.SetMaximumLabelFraction(float)\nC++: void SetMaximumLabelFraction(double)\n\nThe maximum amount of screen space labels can take up before\nplacement terminates.\n"},
  {(char*)"GetMaximumLabelFractionMinValue", PyvtkLabelPlacer_GetMaximumLabelFractionMinValue, 1,
   (char*)"V.GetMaximumLabelFractionMinValue() -> float\nC++: double GetMaximumLabelFractionMinValue()\n\nThe maximum amount of screen space labels can take up before\nplacement terminates.\n"},
  {(char*)"GetMaximumLabelFractionMaxValue", PyvtkLabelPlacer_GetMaximumLabelFractionMaxValue, 1,
   (char*)"V.GetMaximumLabelFractionMaxValue() -> float\nC++: double GetMaximumLabelFractionMaxValue()\n\nThe maximum amount of screen space labels can take up before\nplacement terminates.\n"},
  {(char*)"GetMaximumLabelFraction", PyvtkLabelPlacer_GetMaximumLabelFraction, 1,
   (char*)"V.GetMaximumLabelFraction() -> float\nC++: double GetMaximumLabelFraction()\n\nThe maximum amount of screen space labels can take up before\nplacement terminates.\n"},
  {(char*)"SetIteratorType", PyvtkLabelPlacer_SetIteratorType, 1,
   (char*)"V.SetIteratorType(int)\nC++: void SetIteratorType(int a)\n\nThe type of iterator used when traversing the labels. May be\nvtkLabelHierarchy::FRUSTUM or vtkLabelHierarchy::FULL_SORT.\n"},
  {(char*)"GetIteratorType", PyvtkLabelPlacer_GetIteratorType, 1,
   (char*)"V.GetIteratorType() -> int\nC++: int GetIteratorType()\n\nThe type of iterator used when traversing the labels. May be\nvtkLabelHierarchy::FRUSTUM or vtkLabelHierarchy::FULL_SORT.\n"},
  {(char*)"SetUseUnicodeStrings", PyvtkLabelPlacer_SetUseUnicodeStrings, 1,
   (char*)"V.SetUseUnicodeStrings(bool)\nC++: void SetUseUnicodeStrings(bool a)\n\nSet whether, or not, to use unicode strings.\n"},
  {(char*)"GetUseUnicodeStrings", PyvtkLabelPlacer_GetUseUnicodeStrings, 1,
   (char*)"V.GetUseUnicodeStrings() -> bool\nC++: bool GetUseUnicodeStrings()\n\nSet whether, or not, to use unicode strings.\n"},
  {(char*)"UseUnicodeStringsOn", PyvtkLabelPlacer_UseUnicodeStringsOn, 1,
   (char*)"V.UseUnicodeStringsOn()\nC++: void UseUnicodeStringsOn()\n\nSet whether, or not, to use unicode strings.\n"},
  {(char*)"UseUnicodeStringsOff", PyvtkLabelPlacer_UseUnicodeStringsOff, 1,
   (char*)"V.UseUnicodeStringsOff()\nC++: void UseUnicodeStringsOff()\n\nSet whether, or not, to use unicode strings.\n"},
  {(char*)"GetMTime", PyvtkLabelPlacer_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\n"},
  {(char*)"GetPositionsAsNormals", PyvtkLabelPlacer_GetPositionsAsNormals, 1,
   (char*)"V.GetPositionsAsNormals() -> bool\nC++: bool GetPositionsAsNormals()\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {(char*)"SetPositionsAsNormals", PyvtkLabelPlacer_SetPositionsAsNormals, 1,
   (char*)"V.SetPositionsAsNormals(bool)\nC++: void SetPositionsAsNormals(bool a)\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {(char*)"PositionsAsNormalsOn", PyvtkLabelPlacer_PositionsAsNormalsOn, 1,
   (char*)"V.PositionsAsNormalsOn()\nC++: void PositionsAsNormalsOn()\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {(char*)"PositionsAsNormalsOff", PyvtkLabelPlacer_PositionsAsNormalsOff, 1,
   (char*)"V.PositionsAsNormalsOff()\nC++: void PositionsAsNormalsOff()\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {(char*)"GetGeneratePerturbedLabelSpokes", PyvtkLabelPlacer_GetGeneratePerturbedLabelSpokes, 1,
   (char*)"V.GetGeneratePerturbedLabelSpokes() -> bool\nC++: bool GetGeneratePerturbedLabelSpokes()\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {(char*)"SetGeneratePerturbedLabelSpokes", PyvtkLabelPlacer_SetGeneratePerturbedLabelSpokes, 1,
   (char*)"V.SetGeneratePerturbedLabelSpokes(bool)\nC++: void SetGeneratePerturbedLabelSpokes(bool a)\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {(char*)"GeneratePerturbedLabelSpokesOn", PyvtkLabelPlacer_GeneratePerturbedLabelSpokesOn, 1,
   (char*)"V.GeneratePerturbedLabelSpokesOn()\nC++: void GeneratePerturbedLabelSpokesOn()\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {(char*)"GeneratePerturbedLabelSpokesOff", PyvtkLabelPlacer_GeneratePerturbedLabelSpokesOff, 1,
   (char*)"V.GeneratePerturbedLabelSpokesOff()\nC++: void GeneratePerturbedLabelSpokesOff()\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {(char*)"GetUseDepthBuffer", PyvtkLabelPlacer_GetUseDepthBuffer, 1,
   (char*)"V.GetUseDepthBuffer() -> bool\nC++: bool GetUseDepthBuffer()\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {(char*)"SetUseDepthBuffer", PyvtkLabelPlacer_SetUseDepthBuffer, 1,
   (char*)"V.SetUseDepthBuffer(bool)\nC++: void SetUseDepthBuffer(bool a)\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {(char*)"UseDepthBufferOn", PyvtkLabelPlacer_UseDepthBufferOn, 1,
   (char*)"V.UseDepthBufferOn()\nC++: void UseDepthBufferOn()\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {(char*)"UseDepthBufferOff", PyvtkLabelPlacer_UseDepthBufferOff, 1,
   (char*)"V.UseDepthBufferOff()\nC++: void UseDepthBufferOff()\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {(char*)"GetOutputTraversedBounds", PyvtkLabelPlacer_GetOutputTraversedBounds, 1,
   (char*)"V.GetOutputTraversedBounds() -> bool\nC++: bool GetOutputTraversedBounds()\n\nIn the second output, output the geometry of the traversed octree\nnodes.\n"},
  {(char*)"SetOutputTraversedBounds", PyvtkLabelPlacer_SetOutputTraversedBounds, 1,
   (char*)"V.SetOutputTraversedBounds(bool)\nC++: void SetOutputTraversedBounds(bool a)\n\nIn the second output, output the geometry of the traversed octree\nnodes.\n"},
  {(char*)"OutputTraversedBoundsOn", PyvtkLabelPlacer_OutputTraversedBoundsOn, 1,
   (char*)"V.OutputTraversedBoundsOn()\nC++: void OutputTraversedBoundsOn()\n\nIn the second output, output the geometry of the traversed octree\nnodes.\n"},
  {(char*)"OutputTraversedBoundsOff", PyvtkLabelPlacer_OutputTraversedBoundsOff, 1,
   (char*)"V.OutputTraversedBoundsOff()\nC++: void OutputTraversedBoundsOff()\n\nIn the second output, output the geometry of the traversed octree\nnodes.\n"},
  {(char*)"GetOutputCoordinateSystem", PyvtkLabelPlacer_GetOutputCoordinateSystem, 1,
   (char*)"V.GetOutputCoordinateSystem() -> int\nC++: int GetOutputCoordinateSystem()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {(char*)"SetOutputCoordinateSystem", PyvtkLabelPlacer_SetOutputCoordinateSystem, 1,
   (char*)"V.SetOutputCoordinateSystem(int)\nC++: void SetOutputCoordinateSystem(int)\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {(char*)"GetOutputCoordinateSystemMinValue", PyvtkLabelPlacer_GetOutputCoordinateSystemMinValue, 1,
   (char*)"V.GetOutputCoordinateSystemMinValue() -> int\nC++: int GetOutputCoordinateSystemMinValue()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {(char*)"GetOutputCoordinateSystemMaxValue", PyvtkLabelPlacer_GetOutputCoordinateSystemMaxValue, 1,
   (char*)"V.GetOutputCoordinateSystemMaxValue() -> int\nC++: int GetOutputCoordinateSystemMaxValue()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {(char*)"OutputCoordinateSystemWorld", PyvtkLabelPlacer_OutputCoordinateSystemWorld, 1,
   (char*)"V.OutputCoordinateSystemWorld()\nC++: void OutputCoordinateSystemWorld()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {(char*)"OutputCoordinateSystemDisplay", PyvtkLabelPlacer_OutputCoordinateSystemDisplay, 1,
   (char*)"V.OutputCoordinateSystemDisplay()\nC++: void OutputCoordinateSystemDisplay()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLabelPlacer_StaticNew()
{
  return vtkLabelPlacer::New();
}

PyObject *PyVTKClass_vtkLabelPlacerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLabelPlacer_StaticNew,
    PyvtkLabelPlacer_Methods,
    "vtkLabelPlacer", modulename,
    NULL, NULL,
    PyvtkLabelPlacer_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"VerticalBottomBit", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"VerticalBaselineBit", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"VerticalCenterBit", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"VerticalTopBit", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(16);
    if (o && PyDict_SetItemString(d, (char *)"HorizontalLeftBit", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(32);
    if (o && PyDict_SetItemString(d, (char *)"HorizontalCenterBit", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(64);
    if (o && PyDict_SetItemString(d, (char *)"HorizontalRightBit", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(15);
    if (o && PyDict_SetItemString(d, (char *)"VerticalBitMask", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(112);
    if (o && PyDict_SetItemString(d, (char *)"HorizontalBitMask", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(17);
    if (o && PyDict_SetItemString(d, (char *)"LowerLeft", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(33);
    if (o && PyDict_SetItemString(d, (char *)"LowerCenter", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(65);
    if (o && PyDict_SetItemString(d, (char *)"LowerRight", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(18);
    if (o && PyDict_SetItemString(d, (char *)"BaselineLeft", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(34);
    if (o && PyDict_SetItemString(d, (char *)"BaselineCenter", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(66);
    if (o && PyDict_SetItemString(d, (char *)"BaselineRight", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(20);
    if (o && PyDict_SetItemString(d, (char *)"CenterLeft", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(36);
    if (o && PyDict_SetItemString(d, (char *)"CenterCenter", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(68);
    if (o && PyDict_SetItemString(d, (char *)"CenterRight", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(24);
    if (o && PyDict_SetItemString(d, (char *)"UpperLeft", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(40);
    if (o && PyDict_SetItemString(d, (char *)"UpperCenter", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(72);
    if (o && PyDict_SetItemString(d, (char *)"UpperRight", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"WORLD", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"DISPLAY", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkLabelPlacer_Doc()
{
  static const char *docstring[] = {
    "vtkLabelPlacer - place a prioritized hierarchy of labels in screen\nspace\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "This class is deprecated and will be removed from VTK in a future\nrelease. Use vtkLabelPlacementMapper instead.\n\nThis should probably be a mapper unto itself (given that the polydata\noutput could be large and will realistically always be iterated over\nexactly once before being tossed for the next frame of the render).\n\nIn any event, it takes as input one (or more, eventually)\nvtkLabelHierarchies t",
    "hat represent prioritized lists of labels sorted\nby their placement in space. As output, it provides vtkPolyData\ncontaining only VTK_QUAD cells, each representing a single label from\nthe input. Each quadrilateral has cell data indicating what label in\nthe input it corresponds to (via an array named \"LabelId\").\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLabelPlacer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLabelPlacerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLabelPlacer", o) != 0)
    {
    Py_DECREF(o);
    }

}

