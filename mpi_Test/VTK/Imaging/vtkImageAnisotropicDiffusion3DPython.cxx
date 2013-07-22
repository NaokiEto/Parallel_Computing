// python wrapper for vtkImageAnisotropicDiffusion3D
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
#include "vtkImageAnisotropicDiffusion3D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageAnisotropicDiffusion3D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageAnisotropicDiffusion3D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageAnisotropicDiffusion3DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageAnisotropicDiffusion3DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageSpatialAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
#endif

static const char **PyvtkImageAnisotropicDiffusion3D_Doc();


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

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
      tempr = op->vtkImageAnisotropicDiffusion3D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

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
      tempr = op->vtkImageAnisotropicDiffusion3D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  vtkImageAnisotropicDiffusion3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageAnisotropicDiffusion3D::NewInstance();
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
PyvtkImageAnisotropicDiffusion3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageAnisotropicDiffusion3D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageAnisotropicDiffusion3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfIterations(temp0);
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::SetNumberOfIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfIterations();
      }
    else
      {
      tempr = op->vtkImageAnisotropicDiffusion3D::GetNumberOfIterations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetDiffusionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffusionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiffusionThreshold(temp0);
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::SetDiffusionThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetDiffusionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDiffusionThreshold();
      }
    else
      {
      tempr = op->vtkImageAnisotropicDiffusion3D::GetDiffusionThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetDiffusionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffusionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiffusionFactor(temp0);
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::SetDiffusionFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetDiffusionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDiffusionFactor();
      }
    else
      {
      tempr = op->vtkImageAnisotropicDiffusion3D::GetDiffusionFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFaces(temp0);
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::SetFaces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaces();
      }
    else
      {
      tempr = op->vtkImageAnisotropicDiffusion3D::GetFaces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_FacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FacesOn();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::FacesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_FacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FacesOff();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::FacesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEdges(temp0);
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::SetEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdges();
      }
    else
      {
      tempr = op->vtkImageAnisotropicDiffusion3D::GetEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_EdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgesOn();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::EdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_EdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgesOff();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::EdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCorners(temp0);
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::SetCorners(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCorners();
      }
    else
      {
      tempr = op->vtkImageAnisotropicDiffusion3D::GetCorners();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_CornersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CornersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CornersOn();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::CornersOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_CornersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CornersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CornersOff();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::CornersOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetGradientMagnitudeThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientMagnitudeThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGradientMagnitudeThreshold(temp0);
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::SetGradientMagnitudeThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetGradientMagnitudeThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGradientMagnitudeThreshold();
      }
    else
      {
      tempr = op->vtkImageAnisotropicDiffusion3D::GetGradientMagnitudeThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GradientMagnitudeThresholdOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientMagnitudeThresholdOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GradientMagnitudeThresholdOn();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::GradientMagnitudeThresholdOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GradientMagnitudeThresholdOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientMagnitudeThresholdOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GradientMagnitudeThresholdOff();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion3D::GradientMagnitudeThresholdOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageAnisotropicDiffusion3D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageAnisotropicDiffusion3D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageAnisotropicDiffusion3D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageAnisotropicDiffusion3D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageAnisotropicDiffusion3D\nC++: vtkImageAnisotropicDiffusion3D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageAnisotropicDiffusion3D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageAnisotropicDiffusion3D\nC++: vtkImageAnisotropicDiffusion3D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfIterations", PyvtkImageAnisotropicDiffusion3D_SetNumberOfIterations, 1,
   (char*)"V.SetNumberOfIterations(int)\nC++: void SetNumberOfIterations(int num)\n\nThis method sets the number of interations which also affects the\ninput neighborhood needed to compute one output pixel.  Each\niterations requires an extra pixel layer on the neighborhood. \nThis is only relavent when you are trying to stream or are\nrequesting a sub extent of the \"wholeExtent\".\n"},
  {(char*)"GetNumberOfIterations", PyvtkImageAnisotropicDiffusion3D_GetNumberOfIterations, 1,
   (char*)"V.GetNumberOfIterations() -> int\nC++: int GetNumberOfIterations()\n\nGet the number of iterations.\n"},
  {(char*)"SetDiffusionThreshold", PyvtkImageAnisotropicDiffusion3D_SetDiffusionThreshold, 1,
   (char*)"V.SetDiffusionThreshold(float)\nC++: void SetDiffusionThreshold(double a)\n\nSet/Get the difference threshold that stops diffusion. when the\ndifference between two pixel is greater than this threshold, the\npixels are not diffused.  This causes diffusion to avoid sharp\nedges. If the GradientMagnitudeThreshold is set, then gradient\nmagnitude is used for comparison instead of pixel differences.\n"},
  {(char*)"GetDiffusionThreshold", PyvtkImageAnisotropicDiffusion3D_GetDiffusionThreshold, 1,
   (char*)"V.GetDiffusionThreshold() -> float\nC++: double GetDiffusionThreshold()\n\nSet/Get the difference threshold that stops diffusion. when the\ndifference between two pixel is greater than this threshold, the\npixels are not diffused.  This causes diffusion to avoid sharp\nedges. If the GradientMagnitudeThreshold is set, then gradient\nmagnitude is used for comparison instead of pixel differences.\n"},
  {(char*)"SetDiffusionFactor", PyvtkImageAnisotropicDiffusion3D_SetDiffusionFactor, 1,
   (char*)"V.SetDiffusionFactor(float)\nC++: void SetDiffusionFactor(double a)\n\nSet/Get the difference factor\n"},
  {(char*)"GetDiffusionFactor", PyvtkImageAnisotropicDiffusion3D_GetDiffusionFactor, 1,
   (char*)"V.GetDiffusionFactor() -> float\nC++: double GetDiffusionFactor()\n\nSet/Get the difference factor\n"},
  {(char*)"SetFaces", PyvtkImageAnisotropicDiffusion3D_SetFaces, 1,
   (char*)"V.SetFaces(int)\nC++: void SetFaces(int a)\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"GetFaces", PyvtkImageAnisotropicDiffusion3D_GetFaces, 1,
   (char*)"V.GetFaces() -> int\nC++: int GetFaces()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"FacesOn", PyvtkImageAnisotropicDiffusion3D_FacesOn, 1,
   (char*)"V.FacesOn()\nC++: void FacesOn()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"FacesOff", PyvtkImageAnisotropicDiffusion3D_FacesOff, 1,
   (char*)"V.FacesOff()\nC++: void FacesOff()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"SetEdges", PyvtkImageAnisotropicDiffusion3D_SetEdges, 1,
   (char*)"V.SetEdges(int)\nC++: void SetEdges(int a)\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"GetEdges", PyvtkImageAnisotropicDiffusion3D_GetEdges, 1,
   (char*)"V.GetEdges() -> int\nC++: int GetEdges()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"EdgesOn", PyvtkImageAnisotropicDiffusion3D_EdgesOn, 1,
   (char*)"V.EdgesOn()\nC++: void EdgesOn()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"EdgesOff", PyvtkImageAnisotropicDiffusion3D_EdgesOff, 1,
   (char*)"V.EdgesOff()\nC++: void EdgesOff()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"SetCorners", PyvtkImageAnisotropicDiffusion3D_SetCorners, 1,
   (char*)"V.SetCorners(int)\nC++: void SetCorners(int a)\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"GetCorners", PyvtkImageAnisotropicDiffusion3D_GetCorners, 1,
   (char*)"V.GetCorners() -> int\nC++: int GetCorners()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"CornersOn", PyvtkImageAnisotropicDiffusion3D_CornersOn, 1,
   (char*)"V.CornersOn()\nC++: void CornersOn()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"CornersOff", PyvtkImageAnisotropicDiffusion3D_CornersOff, 1,
   (char*)"V.CornersOff()\nC++: void CornersOff()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"SetGradientMagnitudeThreshold", PyvtkImageAnisotropicDiffusion3D_SetGradientMagnitudeThreshold, 1,
   (char*)"V.SetGradientMagnitudeThreshold(int)\nC++: void SetGradientMagnitudeThreshold(int a)\n\nSwitch between gradient magnitude threshold and pixel gradient\nthreshold.\n"},
  {(char*)"GetGradientMagnitudeThreshold", PyvtkImageAnisotropicDiffusion3D_GetGradientMagnitudeThreshold, 1,
   (char*)"V.GetGradientMagnitudeThreshold() -> int\nC++: int GetGradientMagnitudeThreshold()\n\nSwitch between gradient magnitude threshold and pixel gradient\nthreshold.\n"},
  {(char*)"GradientMagnitudeThresholdOn", PyvtkImageAnisotropicDiffusion3D_GradientMagnitudeThresholdOn, 1,
   (char*)"V.GradientMagnitudeThresholdOn()\nC++: void GradientMagnitudeThresholdOn()\n\nSwitch between gradient magnitude threshold and pixel gradient\nthreshold.\n"},
  {(char*)"GradientMagnitudeThresholdOff", PyvtkImageAnisotropicDiffusion3D_GradientMagnitudeThresholdOff, 1,
   (char*)"V.GradientMagnitudeThresholdOff()\nC++: void GradientMagnitudeThresholdOff()\n\nSwitch between gradient magnitude threshold and pixel gradient\nthreshold.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageAnisotropicDiffusion3D_StaticNew()
{
  return vtkImageAnisotropicDiffusion3D::New();
}

PyObject *PyVTKClass_vtkImageAnisotropicDiffusion3DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageAnisotropicDiffusion3D_StaticNew,
    PyvtkImageAnisotropicDiffusion3D_Methods,
    "vtkImageAnisotropicDiffusion3D", modulename,
    NULL, NULL,
    PyvtkImageAnisotropicDiffusion3D_Doc(),
    PyVTKClass_vtkImageSpatialAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageAnisotropicDiffusion3D_Doc()
{
  static const char *docstring[] = {
    "vtkImageAnisotropicDiffusion3D - edge preserving smoothing.\n\n",
    "Superclass: vtkImageSpatialAlgorithm\n\n",
    "vtkImageAnisotropicDiffusion3D  diffuses an volume iteratively. The\nneighborhood of the diffusion is determined by the instance flags. if\n\"Faces\" is on, the 6 voxels adjoined by faces are included in the\nneighborhood.  If \"Edges\" is on the 12 edge connected voxels are\nincluded, and if \"Corners\" is on, the 8 corner connected voxels are\nincluded.  \"DiffusionFactor\" determines how far a pixel value m",
    "oves\ntoward its neighbors, and is insensitive to the number of neighbors\nchosen.  The diffusion is anisotropic because it only occurs when a\ngradient measure is below \"GradientThreshold\".  Two gradient measures\nexist and are toggled by the \"GradientMagnitudeThreshold\" flag. When\n\"GradientMagnitudeThreshold\" is on, the magnitude of the gradient,\ncomputed by central differences, above \"DiffusionThre",
    "shold\" a voxel\nis not modified.  The alternative measure examines each neighbor\nindependently.  The gradient between the voxel and the neighbor must\nbe below the \"DiffusionThreshold\" for diffusion to occur with THAT\nneighbor.\n\nSee Also:\n\nvtkImageAnisotropicDiffusion2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageAnisotropicDiffusion3D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageAnisotropicDiffusion3DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageAnisotropicDiffusion3D", o) != 0)
    {
    Py_DECREF(o);
    }

}

