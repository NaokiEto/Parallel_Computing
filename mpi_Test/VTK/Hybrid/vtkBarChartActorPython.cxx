// python wrapper for vtkBarChartActor
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
#include "vtkBarChartActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBarChartActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBarChartActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBarChartActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBarChartActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkActor2DNew
extern "C" { PyObject *PyVTKClass_vtkActor2DNew(const char *); }
#define DECLARED_PyVTKClass_vtkActor2DNew
#endif

static const char **PyvtkBarChartActor_Doc();


static PyObject *
PyvtkBarChartActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

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
      tempr = op->vtkBarChartActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

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
      tempr = op->vtkBarChartActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  vtkBarChartActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBarChartActor::NewInstance();
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
PyvtkBarChartActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBarChartActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBarChartActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkBarChartActor::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkBarChartActor::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleVisibility(temp0);
      }
    else
      {
      op->vtkBarChartActor::SetTitleVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitleVisibility();
      }
    else
      {
      tempr = op->vtkBarChartActor::GetTitleVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_TitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TitleVisibilityOn();
      }
    else
      {
      op->vtkBarChartActor::TitleVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_TitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TitleVisibilityOff();
      }
    else
      {
      op->vtkBarChartActor::TitleVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitle(temp0);
      }
    else
      {
      op->vtkBarChartActor::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitle();
      }
    else
      {
      tempr = op->vtkBarChartActor::GetTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTitleTextProperty(temp0);
      }
    else
      {
      op->vtkBarChartActor::SetTitleTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTitleTextProperty();
      }
    else
      {
      tempr = op->vtkBarChartActor::GetTitleTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelVisibility(temp0);
      }
    else
      {
      op->vtkBarChartActor::SetLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelVisibility();
      }
    else
      {
      tempr = op->vtkBarChartActor::GetLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LabelVisibilityOn();
      }
    else
      {
      op->vtkBarChartActor::LabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LabelVisibilityOff();
      }
    else
      {
      op->vtkBarChartActor::LabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetLabelTextProperty(temp0);
      }
    else
      {
      op->vtkBarChartActor::SetLabelTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelTextProperty();
      }
    else
      {
      tempr = op->vtkBarChartActor::GetLabelTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetBarColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBarColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetBarColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkBarChartActor::SetBarColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBarChartActor_SetBarColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBarColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  int temp0;
  double temp1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    if (ap.IsBound())
      {
      op->SetBarColor(temp0, temp1);
      }
    else
      {
      op->vtkBarChartActor::SetBarColor(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBarChartActor_SetBarColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkBarChartActor_SetBarColor_s1(self, args);
    case 2:
      return PyvtkBarChartActor_SetBarColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBarColor");
  return NULL;
}



static PyObject *
PyvtkBarChartActor_SetBarLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBarLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  int temp0;
  char *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetBarLabel(temp0, temp1);
      }
    else
      {
      op->vtkBarChartActor::SetBarLabel(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetBarLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  int temp0;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBarLabel(temp0);
      }
    else
      {
      tempr = op->vtkBarChartActor::GetBarLabel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYTitle(temp0);
      }
    else
      {
      op->vtkBarChartActor::SetYTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYTitle();
      }
    else
      {
      tempr = op->vtkBarChartActor::GetYTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_SetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLegendVisibility(temp0);
      }
    else
      {
      op->vtkBarChartActor::SetLegendVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetLegendVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLegendVisibility();
      }
    else
      {
      tempr = op->vtkBarChartActor::GetLegendVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_LegendVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LegendVisibilityOn();
      }
    else
      {
      op->vtkBarChartActor::LegendVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_LegendVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LegendVisibilityOff();
      }
    else
      {
      op->vtkBarChartActor::LegendVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_GetLegendActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  vtkLegendBoxActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLegendActor();
      }
    else
      {
      tempr = op->vtkBarChartActor::GetLegendActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOverlay(temp0);
      }
    else
      {
      tempr = op->vtkBarChartActor::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOpaqueGeometry(temp0);
      }
    else
      {
      tempr = op->vtkBarChartActor::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderTranslucentPolygonalGeometry(temp0);
      }
    else
      {
      tempr = op->vtkBarChartActor::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasTranslucentPolygonalGeometry();
      }
    else
      {
      tempr = op->vtkBarChartActor::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBarChartActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBarChartActor *op = static_cast<vtkBarChartActor *>(vp);

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
      op->vtkBarChartActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBarChartActor_Methods[] = {
  {(char*)"GetClassName", PyvtkBarChartActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for type information and printing.\n"},
  {(char*)"IsA", PyvtkBarChartActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for type information and printing.\n"},
  {(char*)"NewInstance", PyvtkBarChartActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBarChartActor\nC++: vtkBarChartActor *NewInstance()\n\nStandard methods for type information and printing.\n"},
  {(char*)"SafeDownCast", PyvtkBarChartActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBarChartActor\nC++: vtkBarChartActor *SafeDownCast(vtkObject* o)\n\nStandard methods for type information and printing.\n"},
  {(char*)"SetInput", PyvtkBarChartActor_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: virtual void SetInput(vtkDataObject *)\n\nSet the input to the bar chart actor.\n"},
  {(char*)"GetInput", PyvtkBarChartActor_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nGet the input data object to this actor.\n"},
  {(char*)"SetTitleVisibility", PyvtkBarChartActor_SetTitleVisibility, 1,
   (char*)"V.SetTitleVisibility(int)\nC++: void SetTitleVisibility(int a)\n\nEnable/Disable the display of a plot title.\n"},
  {(char*)"GetTitleVisibility", PyvtkBarChartActor_GetTitleVisibility, 1,
   (char*)"V.GetTitleVisibility() -> int\nC++: int GetTitleVisibility()\n\nEnable/Disable the display of a plot title.\n"},
  {(char*)"TitleVisibilityOn", PyvtkBarChartActor_TitleVisibilityOn, 1,
   (char*)"V.TitleVisibilityOn()\nC++: void TitleVisibilityOn()\n\nEnable/Disable the display of a plot title.\n"},
  {(char*)"TitleVisibilityOff", PyvtkBarChartActor_TitleVisibilityOff, 1,
   (char*)"V.TitleVisibilityOff()\nC++: void TitleVisibilityOff()\n\nEnable/Disable the display of a plot title.\n"},
  {(char*)"SetTitle", PyvtkBarChartActor_SetTitle, 1,
   (char*)"V.SetTitle(string)\nC++: void SetTitle(char *)\n\nSet/Get the title of the bar chart.\n"},
  {(char*)"GetTitle", PyvtkBarChartActor_GetTitle, 1,
   (char*)"V.GetTitle() -> string\nC++: char *GetTitle()\n\nSet/Get the title of the bar chart.\n"},
  {(char*)"SetTitleTextProperty", PyvtkBarChartActor_SetTitleTextProperty, 1,
   (char*)"V.SetTitleTextProperty(vtkTextProperty)\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property. The property controls the\nappearance of the plot title.\n"},
  {(char*)"GetTitleTextProperty", PyvtkBarChartActor_GetTitleTextProperty, 1,
   (char*)"V.GetTitleTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty()\n\nSet/Get the title text property. The property controls the\nappearance of the plot title.\n"},
  {(char*)"SetLabelVisibility", PyvtkBarChartActor_SetLabelVisibility, 1,
   (char*)"V.SetLabelVisibility(int)\nC++: void SetLabelVisibility(int a)\n\nEnable/Disable the display of bar labels.\n"},
  {(char*)"GetLabelVisibility", PyvtkBarChartActor_GetLabelVisibility, 1,
   (char*)"V.GetLabelVisibility() -> int\nC++: int GetLabelVisibility()\n\nEnable/Disable the display of bar labels.\n"},
  {(char*)"LabelVisibilityOn", PyvtkBarChartActor_LabelVisibilityOn, 1,
   (char*)"V.LabelVisibilityOn()\nC++: void LabelVisibilityOn()\n\nEnable/Disable the display of bar labels.\n"},
  {(char*)"LabelVisibilityOff", PyvtkBarChartActor_LabelVisibilityOff, 1,
   (char*)"V.LabelVisibilityOff()\nC++: void LabelVisibilityOff()\n\nEnable/Disable the display of bar labels.\n"},
  {(char*)"SetLabelTextProperty", PyvtkBarChartActor_SetLabelTextProperty, 1,
   (char*)"V.SetLabelTextProperty(vtkTextProperty)\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property. This controls the appearance of\nall bar bar labels.\n"},
  {(char*)"GetLabelTextProperty", PyvtkBarChartActor_GetLabelTextProperty, 1,
   (char*)"V.GetLabelTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetLabelTextProperty()\n\nSet/Get the labels text property. This controls the appearance of\nall bar bar labels.\n"},
  {(char*)"SetBarColor", PyvtkBarChartActor_SetBarColor, 1,
   (char*)"V.SetBarColor(int, float, float, float)\nC++: void SetBarColor(int i, double r, double g, double b)\nV.SetBarColor(int, (float, float, float))\nC++: void SetBarColor(int i, const double color[3])\n\nSpecify colors for each bar. If not specified, they are\nautomatically generated.\n"},
  {(char*)"SetBarLabel", PyvtkBarChartActor_SetBarLabel, 1,
   (char*)"V.SetBarLabel(int, string)\nC++: void SetBarLabel(const int i, const char *)\n\nSpecify the names of each bar. If not specified, then an integer\nnumber is automatically generated.\n"},
  {(char*)"GetBarLabel", PyvtkBarChartActor_GetBarLabel, 1,
   (char*)"V.GetBarLabel(int) -> string\nC++: const char *GetBarLabel(int i)\n\nSpecify the names of each bar. If not specified, then an integer\nnumber is automatically generated.\n"},
  {(char*)"SetYTitle", PyvtkBarChartActor_SetYTitle, 1,
   (char*)"V.SetYTitle(string)\nC++: void SetYTitle(char *)\n\nSpecify the title of the y-axis.\n"},
  {(char*)"GetYTitle", PyvtkBarChartActor_GetYTitle, 1,
   (char*)"V.GetYTitle() -> string\nC++: char *GetYTitle()\n\nSpecify the title of the y-axis.\n"},
  {(char*)"SetLegendVisibility", PyvtkBarChartActor_SetLegendVisibility, 1,
   (char*)"V.SetLegendVisibility(int)\nC++: void SetLegendVisibility(int a)\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"GetLegendVisibility", PyvtkBarChartActor_GetLegendVisibility, 1,
   (char*)"V.GetLegendVisibility() -> int\nC++: int GetLegendVisibility()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"LegendVisibilityOn", PyvtkBarChartActor_LegendVisibilityOn, 1,
   (char*)"V.LegendVisibilityOn()\nC++: void LegendVisibilityOn()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"LegendVisibilityOff", PyvtkBarChartActor_LegendVisibilityOff, 1,
   (char*)"V.LegendVisibilityOff()\nC++: void LegendVisibilityOff()\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {(char*)"GetLegendActor", PyvtkBarChartActor_GetLegendActor, 1,
   (char*)"V.GetLegendActor() -> vtkLegendBoxActor\nC++: vtkLegendBoxActor *GetLegendActor()\n\nRetrieve handles to the legend box. This is useful if you would\nlike to manually control the legend appearance.\n"},
  {(char*)"RenderOverlay", PyvtkBarChartActor_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *)\n\nDraw the bar plot.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkBarChartActor_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *)\n\nDraw the bar plot.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkBarChartActor_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nDraw the bar plot.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkBarChartActor_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkBarChartActor_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBarChartActor_StaticNew()
{
  return vtkBarChartActor::New();
}

PyObject *PyVTKClass_vtkBarChartActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBarChartActor_StaticNew,
    PyvtkBarChartActor_Methods,
    "vtkBarChartActor", modulename,
    NULL, NULL,
    PyvtkBarChartActor_Doc(),
    PyVTKClass_vtkActor2DNew(modulename));
  return cls;
}

const char **PyvtkBarChartActor_Doc()
{
  static const char *docstring[] = {
    "vtkBarChartActor - create a bar chart from an array\n\n",
    "Superclass: vtkActor2D\n\n",
    "vtkBarChartActor generates a bar chart from an array of numbers\ndefined in field data (a vtkDataObject). To use this class, you must\nspecify an input data object. You'll probably also want to specify\nthe position of the plot be setting the Position and Position2\ninstance variables, which define a rectangle in which the plot lies. \nThere are also many other instance variables that control the look ",
    "of\nthe plot includes its title and legend.\n\nSet the text property/attributes of the title and the labels through\nthe vtkTextProperty objects associated with these components.\n\nSee Also:\n\nvtkParallelCoordinatesActor vtkXYPlotActor vtkSpiderPlotActor\nvtkPieChartActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBarChartActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBarChartActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBarChartActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

