// python wrapper for vtkImageAnisotropicDiffusion2D
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
#include "vtkImageAnisotropicDiffusion2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageAnisotropicDiffusion2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageAnisotropicDiffusion2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageAnisotropicDiffusion2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageAnisotropicDiffusion2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageSpatialAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageSpatialAlgorithmNew
#endif

static const char **PyvtkImageAnisotropicDiffusion2D_Doc();


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      tempr = op->vtkImageAnisotropicDiffusion2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      tempr = op->vtkImageAnisotropicDiffusion2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  vtkImageAnisotropicDiffusion2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageAnisotropicDiffusion2D::NewInstance();
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
PyvtkImageAnisotropicDiffusion2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageAnisotropicDiffusion2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageAnisotropicDiffusion2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      op->vtkImageAnisotropicDiffusion2D::SetNumberOfIterations(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      tempr = op->vtkImageAnisotropicDiffusion2D::GetNumberOfIterations();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_SetDiffusionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffusionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      op->vtkImageAnisotropicDiffusion2D::SetDiffusionThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GetDiffusionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      tempr = op->vtkImageAnisotropicDiffusion2D::GetDiffusionThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_SetDiffusionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffusionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      op->vtkImageAnisotropicDiffusion2D::SetDiffusionFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GetDiffusionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      tempr = op->vtkImageAnisotropicDiffusion2D::GetDiffusionFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_SetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      op->vtkImageAnisotropicDiffusion2D::SetFaces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      tempr = op->vtkImageAnisotropicDiffusion2D::GetFaces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_FacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FacesOn();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion2D::FacesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_FacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FacesOff();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion2D::FacesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_SetEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      op->vtkImageAnisotropicDiffusion2D::SetEdges(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GetEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      tempr = op->vtkImageAnisotropicDiffusion2D::GetEdges();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_EdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgesOn();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion2D::EdgesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_EdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EdgesOff();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion2D::EdgesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_SetCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      op->vtkImageAnisotropicDiffusion2D::SetCorners(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GetCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      tempr = op->vtkImageAnisotropicDiffusion2D::GetCorners();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_CornersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CornersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CornersOn();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion2D::CornersOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_CornersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CornersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CornersOff();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion2D::CornersOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_SetGradientMagnitudeThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientMagnitudeThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      op->vtkImageAnisotropicDiffusion2D::SetGradientMagnitudeThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GetGradientMagnitudeThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      tempr = op->vtkImageAnisotropicDiffusion2D::GetGradientMagnitudeThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GradientMagnitudeThresholdOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientMagnitudeThresholdOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GradientMagnitudeThresholdOn();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion2D::GradientMagnitudeThresholdOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GradientMagnitudeThresholdOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientMagnitudeThresholdOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GradientMagnitudeThresholdOff();
      }
    else
      {
      op->vtkImageAnisotropicDiffusion2D::GradientMagnitudeThresholdOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageAnisotropicDiffusion2D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageAnisotropicDiffusion2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageAnisotropicDiffusion2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageAnisotropicDiffusion2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageAnisotropicDiffusion2D\nC++: vtkImageAnisotropicDiffusion2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageAnisotropicDiffusion2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageAnisotropicDiffusion2D\nC++: vtkImageAnisotropicDiffusion2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfIterations", PyvtkImageAnisotropicDiffusion2D_SetNumberOfIterations, 1,
   (char*)"V.SetNumberOfIterations(int)\nC++: void SetNumberOfIterations(int num)\n\nThis method sets the number of interations which also affects the\ninput neighborhood needed to compute one output pixel.  Each\niterations requires an extra pixel layer on the neighborhood. \nThis is only relavent when you are trying to stream or are\nrequesting a sub extent of the \"wholeExtent\".\n"},
  {(char*)"GetNumberOfIterations", PyvtkImageAnisotropicDiffusion2D_GetNumberOfIterations, 1,
   (char*)"V.GetNumberOfIterations() -> int\nC++: int GetNumberOfIterations()\n\nGet the number of iterations.\n"},
  {(char*)"SetDiffusionThreshold", PyvtkImageAnisotropicDiffusion2D_SetDiffusionThreshold, 1,
   (char*)"V.SetDiffusionThreshold(float)\nC++: void SetDiffusionThreshold(double a)\n\nSet/Get the difference threshold that stops diffusion. when the\ndifference between two pixel is greater than this threshold, the\npixels are not diffused.  This causes diffusion to avoid sharp\nedges. If the GradientMagnitudeThreshold is set, then gradient\nmagnitude is used for comparison instead of pixel differences.\n"},
  {(char*)"GetDiffusionThreshold", PyvtkImageAnisotropicDiffusion2D_GetDiffusionThreshold, 1,
   (char*)"V.GetDiffusionThreshold() -> float\nC++: double GetDiffusionThreshold()\n\nSet/Get the difference threshold that stops diffusion. when the\ndifference between two pixel is greater than this threshold, the\npixels are not diffused.  This causes diffusion to avoid sharp\nedges. If the GradientMagnitudeThreshold is set, then gradient\nmagnitude is used for comparison instead of pixel differences.\n"},
  {(char*)"SetDiffusionFactor", PyvtkImageAnisotropicDiffusion2D_SetDiffusionFactor, 1,
   (char*)"V.SetDiffusionFactor(float)\nC++: void SetDiffusionFactor(double a)\n\nThe diffusion factor specifies  how much neighboring pixels\neffect each other. No diffusion occurs with a factor of 0, and a\ndiffusion factor of 1 causes the pixel to become the average of\nall its neighbors.\n"},
  {(char*)"GetDiffusionFactor", PyvtkImageAnisotropicDiffusion2D_GetDiffusionFactor, 1,
   (char*)"V.GetDiffusionFactor() -> float\nC++: double GetDiffusionFactor()\n\nThe diffusion factor specifies  how much neighboring pixels\neffect each other. No diffusion occurs with a factor of 0, and a\ndiffusion factor of 1 causes the pixel to become the average of\nall its neighbors.\n"},
  {(char*)"SetFaces", PyvtkImageAnisotropicDiffusion2D_SetFaces, 1,
   (char*)"V.SetFaces(int)\nC++: void SetFaces(int a)\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"GetFaces", PyvtkImageAnisotropicDiffusion2D_GetFaces, 1,
   (char*)"V.GetFaces() -> int\nC++: int GetFaces()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"FacesOn", PyvtkImageAnisotropicDiffusion2D_FacesOn, 1,
   (char*)"V.FacesOn()\nC++: void FacesOn()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"FacesOff", PyvtkImageAnisotropicDiffusion2D_FacesOff, 1,
   (char*)"V.FacesOff()\nC++: void FacesOff()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"SetEdges", PyvtkImageAnisotropicDiffusion2D_SetEdges, 1,
   (char*)"V.SetEdges(int)\nC++: void SetEdges(int a)\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"GetEdges", PyvtkImageAnisotropicDiffusion2D_GetEdges, 1,
   (char*)"V.GetEdges() -> int\nC++: int GetEdges()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"EdgesOn", PyvtkImageAnisotropicDiffusion2D_EdgesOn, 1,
   (char*)"V.EdgesOn()\nC++: void EdgesOn()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"EdgesOff", PyvtkImageAnisotropicDiffusion2D_EdgesOff, 1,
   (char*)"V.EdgesOff()\nC++: void EdgesOff()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"SetCorners", PyvtkImageAnisotropicDiffusion2D_SetCorners, 1,
   (char*)"V.SetCorners(int)\nC++: void SetCorners(int a)\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"GetCorners", PyvtkImageAnisotropicDiffusion2D_GetCorners, 1,
   (char*)"V.GetCorners() -> int\nC++: int GetCorners()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"CornersOn", PyvtkImageAnisotropicDiffusion2D_CornersOn, 1,
   (char*)"V.CornersOn()\nC++: void CornersOn()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"CornersOff", PyvtkImageAnisotropicDiffusion2D_CornersOff, 1,
   (char*)"V.CornersOff()\nC++: void CornersOff()\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {(char*)"SetGradientMagnitudeThreshold", PyvtkImageAnisotropicDiffusion2D_SetGradientMagnitudeThreshold, 1,
   (char*)"V.SetGradientMagnitudeThreshold(int)\nC++: void SetGradientMagnitudeThreshold(int a)\n\nSwitch between gradient magnitude threshold and pixel gradient\nthreshold.\n"},
  {(char*)"GetGradientMagnitudeThreshold", PyvtkImageAnisotropicDiffusion2D_GetGradientMagnitudeThreshold, 1,
   (char*)"V.GetGradientMagnitudeThreshold() -> int\nC++: int GetGradientMagnitudeThreshold()\n\nSwitch between gradient magnitude threshold and pixel gradient\nthreshold.\n"},
  {(char*)"GradientMagnitudeThresholdOn", PyvtkImageAnisotropicDiffusion2D_GradientMagnitudeThresholdOn, 1,
   (char*)"V.GradientMagnitudeThresholdOn()\nC++: void GradientMagnitudeThresholdOn()\n\nSwitch between gradient magnitude threshold and pixel gradient\nthreshold.\n"},
  {(char*)"GradientMagnitudeThresholdOff", PyvtkImageAnisotropicDiffusion2D_GradientMagnitudeThresholdOff, 1,
   (char*)"V.GradientMagnitudeThresholdOff()\nC++: void GradientMagnitudeThresholdOff()\n\nSwitch between gradient magnitude threshold and pixel gradient\nthreshold.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageAnisotropicDiffusion2D_StaticNew()
{
  return vtkImageAnisotropicDiffusion2D::New();
}

PyObject *PyVTKClass_vtkImageAnisotropicDiffusion2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageAnisotropicDiffusion2D_StaticNew,
    PyvtkImageAnisotropicDiffusion2D_Methods,
    "vtkImageAnisotropicDiffusion2D", modulename,
    NULL, NULL,
    PyvtkImageAnisotropicDiffusion2D_Doc(),
    PyVTKClass_vtkImageSpatialAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageAnisotropicDiffusion2D_Doc()
{
  static const char *docstring[] = {
    "vtkImageAnisotropicDiffusion2D - edge preserving smoothing.\n\n",
    "Superclass: vtkImageSpatialAlgorithm\n\n",
    "vtkImageAnisotropicDiffusion2D  diffuses a 2d image iteratively. The\nneighborhood of the diffusion is determined by the instance flags. If\n\"Edges\" is on the 4 edge connected voxels are included, and if\n\"Corners\" is on, the 4 corner connected voxels are included. \n\"DiffusionFactor\" determines how far a pixel value moves toward its\nneighbors, and is insensitive to the number of neighbors chosen.  Th",
    "e\ndiffusion is anisotropic because it only occurs when a gradient\nmeasure is below \"GradientThreshold\".  Two gradient measures exist\nand are toggled by the \"GradientMagnitudeThreshold\" flag. When\n\"GradientMagnitudeThreshold\" is on, the magnitude of the gradient,\ncomputed by central differences, above \"DiffusionThreshold\" a voxel\nis not modified.  The alternative measure examines each neighbor\ninde",
    "pendently.  The gradient between the voxel and the neighbor must\nbe below the \"DiffusionThreshold\" for diffusion to occur with THAT\nneighbor.\n\nSee Also:\n\nvtkImageAnisotropicDiffusion3D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageAnisotropicDiffusion2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageAnisotropicDiffusion2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageAnisotropicDiffusion2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

