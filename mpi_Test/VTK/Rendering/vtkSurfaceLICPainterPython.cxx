// python wrapper for vtkSurfaceLICPainter
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
#include "vtkSurfaceLICPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSurfaceLICPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSurfaceLICPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSurfaceLICPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSurfaceLICPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPainterNew
extern "C" { PyObject *PyVTKClass_vtkPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPainterNew
#endif

static const char **PyvtkSurfaceLICPainter_Doc();


static PyObject *
PyvtkSurfaceLICPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

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
      tempr = op->vtkSurfaceLICPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

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
      tempr = op->vtkSurfaceLICPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  vtkSurfaceLICPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSurfaceLICPainter::NewInstance();
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
PyvtkSurfaceLICPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSurfaceLICPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSurfaceLICPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkSurfaceLICPainter::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnable(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetEnable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnable();
      }
    else
      {
      tempr = op->vtkSurfaceLICPainter::GetEnable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_EnableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableOn();
      }
    else
      {
      op->vtkSurfaceLICPainter::EnableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_EnableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnableOff();
      }
    else
      {
      op->vtkSurfaceLICPainter::EnableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetInputArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSurfaceLICPainter_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetInputArrayToProcess(temp0, temp1);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetInputArrayToProcess(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSurfaceLICPainter_SetInputArrayToProcess_Methods[] = {
  {NULL, PyvtkSurfaceLICPainter_SetInputArrayToProcess_s1, 1,
   (char*)"@iz"},
  {NULL, PyvtkSurfaceLICPainter_SetInputArrayToProcess_s2, 1,
   (char*)"@ii"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSurfaceLICPainter_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSurfaceLICPainter_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return NULL;
}



static PyObject *
PyvtkSurfaceLICPainter_SetEnhancedLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnhancedLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnhancedLIC(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetEnhancedLIC(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetEnhancedLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnhancedLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEnhancedLIC();
      }
    else
      {
      tempr = op->vtkSurfaceLICPainter::GetEnhancedLIC();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_EnhancedLICOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnhancedLICOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnhancedLICOn();
      }
    else
      {
      op->vtkSurfaceLICPainter::EnhancedLICOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_EnhancedLICOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnhancedLICOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EnhancedLICOff();
      }
    else
      {
      op->vtkSurfaceLICPainter::EnhancedLICOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfSteps(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetNumberOfSteps(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSteps();
      }
    else
      {
      tempr = op->vtkSurfaceLICPainter::GetNumberOfSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStepSize(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetStepSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStepSize();
      }
    else
      {
      tempr = op->vtkSurfaceLICPainter::GetStepSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_SetLICIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLICIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLICIntensity(temp0);
      }
    else
      {
      op->vtkSurfaceLICPainter::SetLICIntensity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetLICIntensityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLICIntensityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLICIntensityMinValue();
      }
    else
      {
      tempr = op->vtkSurfaceLICPainter::GetLICIntensityMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetLICIntensityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLICIntensityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLICIntensityMaxValue();
      }
    else
      {
      tempr = op->vtkSurfaceLICPainter::GetLICIntensityMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetLICIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLICIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLICIntensity();
      }
    else
      {
      tempr = op->vtkSurfaceLICPainter::GetLICIntensity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetRenderingPreparationSuccess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderingPreparationSuccess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderingPreparationSuccess();
      }
    else
      {
      tempr = op->vtkSurfaceLICPainter::GetRenderingPreparationSuccess();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_GetLICSuccess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLICSuccess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICPainter *op = static_cast<vtkSurfaceLICPainter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLICSuccess();
      }
    else
      {
      tempr = op->vtkSurfaceLICPainter::GetLICSuccess();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSurfaceLICPainter_IsSupported(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
    {
    tempr = vtkSurfaceLICPainter::IsSupported(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSurfaceLICPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkSurfaceLICPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSurfaceLICPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSurfaceLICPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSurfaceLICPainter\nC++: vtkSurfaceLICPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSurfaceLICPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSurfaceLICPainter\nC++: vtkSurfaceLICPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkSurfaceLICPainter_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release. In this case, releases the display\nlists.\n"},
  {(char*)"GetOutput", PyvtkSurfaceLICPainter_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkDataObject\nC++: virtual vtkDataObject *GetOutput()\n\nGet the output data object from this painter. Overridden to pass\nthe input points (or cells) vectors as the tcoords to the\ndeletage painters. This is required by the internal GLSL shader\nprograms used for generating LIC.\n"},
  {(char*)"SetEnable", PyvtkSurfaceLICPainter_SetEnable, 1,
   (char*)"V.SetEnable(int)\nC++: void SetEnable(int a)\n\nEnable/Disable this painter.\n"},
  {(char*)"GetEnable", PyvtkSurfaceLICPainter_GetEnable, 1,
   (char*)"V.GetEnable() -> int\nC++: int GetEnable()\n\nEnable/Disable this painter.\n"},
  {(char*)"EnableOn", PyvtkSurfaceLICPainter_EnableOn, 1,
   (char*)"V.EnableOn()\nC++: void EnableOn()\n\nEnable/Disable this painter.\n"},
  {(char*)"EnableOff", PyvtkSurfaceLICPainter_EnableOff, 1,
   (char*)"V.EnableOff()\nC++: void EnableOff()\n\nEnable/Disable this painter.\n"},
  {(char*)"SetInputArrayToProcess", PyvtkSurfaceLICPainter_SetInputArrayToProcess, 1,
   (char*)"V.SetInputArrayToProcess(int, string)\nC++: void SetInputArrayToProcess(int fieldAssociation,\n    const char *name)\nV.SetInputArrayToProcess(int, int)\nC++: void SetInputArrayToProcess(int fieldAssociation,\n    int fieldAttributeType)\n\nSet the vectors to used for applying LIC. By default point\nvectors are used. Arguments are same as those passed to\nvtkAlgorithm::SetInputArrayToProcess except the first 3 arguments\ni.e. idx, port, connection.\n"},
  {(char*)"SetEnhancedLIC", PyvtkSurfaceLICPainter_SetEnhancedLIC, 1,
   (char*)"V.SetEnhancedLIC(int)\nC++: void SetEnhancedLIC(int a)\n\nEnable/Disable enhanced LIC that improves image quality by\nincreasing inter-streamline contrast while suppressing artifacts.\nEnhanced LIC performs two passes of LIC, with a 3x3 Laplacian\nhigh-pass filter in between that processes the output of pass #1\nLIC and forwards the result as the input 'noise' to pass #2 LIC.\nThis flag is automatically turned off during user interaction.\n"},
  {(char*)"GetEnhancedLIC", PyvtkSurfaceLICPainter_GetEnhancedLIC, 1,
   (char*)"V.GetEnhancedLIC() -> int\nC++: int GetEnhancedLIC()\n\nEnable/Disable enhanced LIC that improves image quality by\nincreasing inter-streamline contrast while suppressing artifacts.\nEnhanced LIC performs two passes of LIC, with a 3x3 Laplacian\nhigh-pass filter in between that processes the output of pass #1\nLIC and forwards the result as the input 'noise' to pass #2 LIC.\nThis flag is automatically turned off during user interaction.\n"},
  {(char*)"EnhancedLICOn", PyvtkSurfaceLICPainter_EnhancedLICOn, 1,
   (char*)"V.EnhancedLICOn()\nC++: void EnhancedLICOn()\n\nEnable/Disable enhanced LIC that improves image quality by\nincreasing inter-streamline contrast while suppressing artifacts.\nEnhanced LIC performs two passes of LIC, with a 3x3 Laplacian\nhigh-pass filter in between that processes the output of pass #1\nLIC and forwards the result as the input 'noise' to pass #2 LIC.\nThis flag is automatically turned off during user interaction.\n"},
  {(char*)"EnhancedLICOff", PyvtkSurfaceLICPainter_EnhancedLICOff, 1,
   (char*)"V.EnhancedLICOff()\nC++: void EnhancedLICOff()\n\nEnable/Disable enhanced LIC that improves image quality by\nincreasing inter-streamline contrast while suppressing artifacts.\nEnhanced LIC performs two passes of LIC, with a 3x3 Laplacian\nhigh-pass filter in between that processes the output of pass #1\nLIC and forwards the result as the input 'noise' to pass #2 LIC.\nThis flag is automatically turned off during user interaction.\n"},
  {(char*)"SetNumberOfSteps", PyvtkSurfaceLICPainter_SetNumberOfSteps, 1,
   (char*)"V.SetNumberOfSteps(int)\nC++: void SetNumberOfSteps(int a)\n\nGet/Set the number of integration steps in each direction.\n"},
  {(char*)"GetNumberOfSteps", PyvtkSurfaceLICPainter_GetNumberOfSteps, 1,
   (char*)"V.GetNumberOfSteps() -> int\nC++: int GetNumberOfSteps()\n\nGet/Set the number of integration steps in each direction.\n"},
  {(char*)"SetStepSize", PyvtkSurfaceLICPainter_SetStepSize, 1,
   (char*)"V.SetStepSize(float)\nC++: void SetStepSize(double a)\n\nGet/Set the step size (in pixels).\n"},
  {(char*)"GetStepSize", PyvtkSurfaceLICPainter_GetStepSize, 1,
   (char*)"V.GetStepSize() -> float\nC++: double GetStepSize()\n\nGet/Set the step size (in pixels).\n"},
  {(char*)"SetLICIntensity", PyvtkSurfaceLICPainter_SetLICIntensity, 1,
   (char*)"V.SetLICIntensity(float)\nC++: void SetLICIntensity(double)\n\nControl the contribution of the LIC in the final output image.\n0.0 produces same result as disabling LIC alltogether, while 1.0\nimplies show LIC result alone.\n"},
  {(char*)"GetLICIntensityMinValue", PyvtkSurfaceLICPainter_GetLICIntensityMinValue, 1,
   (char*)"V.GetLICIntensityMinValue() -> float\nC++: double GetLICIntensityMinValue()\n\nControl the contribution of the LIC in the final output image.\n0.0 produces same result as disabling LIC alltogether, while 1.0\nimplies show LIC result alone.\n"},
  {(char*)"GetLICIntensityMaxValue", PyvtkSurfaceLICPainter_GetLICIntensityMaxValue, 1,
   (char*)"V.GetLICIntensityMaxValue() -> float\nC++: double GetLICIntensityMaxValue()\n\nControl the contribution of the LIC in the final output image.\n0.0 produces same result as disabling LIC alltogether, while 1.0\nimplies show LIC result alone.\n"},
  {(char*)"GetLICIntensity", PyvtkSurfaceLICPainter_GetLICIntensity, 1,
   (char*)"V.GetLICIntensity() -> float\nC++: double GetLICIntensity()\n\nControl the contribution of the LIC in the final output image.\n0.0 produces same result as disabling LIC alltogether, while 1.0\nimplies show LIC result alone.\n"},
  {(char*)"GetRenderingPreparationSuccess", PyvtkSurfaceLICPainter_GetRenderingPreparationSuccess, 1,
   (char*)"V.GetRenderingPreparationSuccess() -> int\nC++: int GetRenderingPreparationSuccess()\n\nCheck if PrepareForRendering passes.\n"},
  {(char*)"GetLICSuccess", PyvtkSurfaceLICPainter_GetLICSuccess, 1,
   (char*)"V.GetLICSuccess() -> int\nC++: int GetLICSuccess()\n\nCheck if the LIC process runs properly.\n"},
  {(char*)"IsSupported", PyvtkSurfaceLICPainter_IsSupported, 1,
   (char*)"V.IsSupported(vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *)\n\nReturns true is the rendering context supports extensions needed\nby this painter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSurfaceLICPainter_StaticNew()
{
  return vtkSurfaceLICPainter::New();
}

PyObject *PyVTKClass_vtkSurfaceLICPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSurfaceLICPainter_StaticNew,
    PyvtkSurfaceLICPainter_Methods,
    "vtkSurfaceLICPainter", modulename,
    NULL, NULL,
    PyvtkSurfaceLICPainter_Doc(),
    PyVTKClass_vtkPainterNew(modulename));
  return cls;
}

const char **PyvtkSurfaceLICPainter_Doc()
{
  static const char *docstring[] = {
    "vtkSurfaceLICPainter - painter that performs LIC on the surface of\n\n",
    "Superclass: vtkPainter\n\n",
    "vtkSurfaceLICPainter painter performs LIC on the surface of arbitrary\n geometry. Point vectors are used as the vector field for generating\nthe LIC.\n The implementation is based on \"Image Space Based Visualization on\nUnsteady\n Flow on Surfaces\" by Laramee, Jobard and Hauser appeared in\nproceedings of\n IEEE Visualization '03, pages 131-138.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSurfaceLICPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSurfaceLICPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSurfaceLICPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}

