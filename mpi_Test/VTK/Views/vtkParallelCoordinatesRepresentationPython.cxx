// python wrapper for vtkParallelCoordinatesRepresentation
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
#include "vtkParallelCoordinatesRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkParallelCoordinatesRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkParallelCoordinatesRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkParallelCoordinatesRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkParallelCoordinatesRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderedRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkRenderedRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderedRepresentationNew
#endif

static const char **PyvtkParallelCoordinatesRepresentation_Doc();


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

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
      tempr = op->vtkParallelCoordinatesRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

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
      tempr = op->vtkParallelCoordinatesRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  vtkParallelCoordinatesRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::NewInstance();
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
PyvtkParallelCoordinatesRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkParallelCoordinatesRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkParallelCoordinatesRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  vtkViewTheme *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewTheme"))
    {
    if (ap.IsBound())
      {
      op->ApplyViewTheme(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::ApplyViewTheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetHoverText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoverText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  vtkView *temp0 = NULL;
  int temp1;
  int temp2;
  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHoverText(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::GetHoverText(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisTitles_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetAxisTitles(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::SetAxisTitles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisTitles_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetAxisTitles(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::SetAxisTitles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkParallelCoordinatesRepresentation_SetAxisTitles_Methods[] = {
  {NULL, PyvtkParallelCoordinatesRepresentation_SetAxisTitles_s1, 1,
   (char*)"@O *vtkStringArray"},
  {NULL, PyvtkParallelCoordinatesRepresentation_SetAxisTitles_s2, 1,
   (char*)"@O *vtkAlgorithmOutput"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisTitles(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkParallelCoordinatesRepresentation_SetAxisTitles_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisTitles");
  return NULL;
}



static PyObject *
PyvtkParallelCoordinatesRepresentation_SetPlotTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlotTitle(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::SetPlotTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfAxes();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::GetNumberOfAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfSamples();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::GetNumberOfSamples();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetNumberOfAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfAxisLabels(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::SetNumberOfAxisLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetNumberOfAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfAxisLabels();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::GetNumberOfAxisLabels();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SwapAxisPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapAxisPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  int temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->SwapAxisPositions(temp0, temp1);
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::SwapAxisPositions(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetXCoordinateOfPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCoordinateOfPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  double temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->SetXCoordinateOfPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::SetXCoordinateOfPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetXCoordinateOfPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCoordinateOfPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXCoordinateOfPosition(temp0);
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::GetXCoordinateOfPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetPositionNearXCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionNearXCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPositionNearXCoordinate(temp0);
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::GetPositionNearXCoordinate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetUseCurves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCurves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseCurves(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::SetUseCurves(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetUseCurves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCurves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseCurves();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::GetUseCurves();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_UseCurvesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCurvesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCurvesOn();
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::UseCurvesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_UseCurvesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCurvesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseCurvesOff();
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::UseCurvesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetCurveResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCurveResolution(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::SetCurveResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetCurveResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurveResolution();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::GetCurveResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetLineOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineOpacity();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::GetLineOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFontSize();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::GetFontSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineColor();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::GetLineColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisColor();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::GetAxisColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisLabelColor();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::GetAxisLabelColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetLineOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineOpacity(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::SetLineOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFontSize(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::SetFontSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetLineColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

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
      op->SetLineColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::SetLineColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesRepresentation_SetLineColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetLineColor(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::SetLineColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesRepresentation_SetLineColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkParallelCoordinatesRepresentation_SetLineColor_s1(self, args);
    case 1:
      return PyvtkParallelCoordinatesRepresentation_SetLineColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLineColor");
  return NULL;
}



static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

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
      op->SetAxisColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::SetAxisColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAxisColor(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::SetAxisColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkParallelCoordinatesRepresentation_SetAxisColor_s1(self, args);
    case 1:
      return PyvtkParallelCoordinatesRepresentation_SetAxisColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisColor");
  return NULL;
}



static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisLabelColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

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
      op->SetAxisLabelColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::SetAxisLabelColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisLabelColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetAxisLabelColor(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::SetAxisLabelColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisLabelColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkParallelCoordinatesRepresentation_SetAxisLabelColor_s1(self, args);
    case 1:
      return PyvtkParallelCoordinatesRepresentation_SetAxisLabelColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisLabelColor");
  return NULL;
}



static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAngleBrushThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleBrushThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAngleBrushThreshold(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::SetAngleBrushThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetAngleBrushThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleBrushThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAngleBrushThreshold();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::GetAngleBrushThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetFunctionBrushThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionBrushThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFunctionBrushThreshold(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::SetFunctionBrushThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetFunctionBrushThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunctionBrushThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFunctionBrushThreshold();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::GetFunctionBrushThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetRangeAtPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeAtPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetRangeAtPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::GetRangeAtPosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetRangeAtPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRangeAtPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->SetRangeAtPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkParallelCoordinatesRepresentation::SetRangeAtPosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_ResetAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetAxes();
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::ResetAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_LassoSelect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LassoSelect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  int temp1;
  vtkPoints *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->LassoSelect(temp0, temp1, temp2);
      }
    else
      {
      op->vtkParallelCoordinatesRepresentation::LassoSelect(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkParallelCoordinatesRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkParallelCoordinatesRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParallelCoordinatesRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParallelCoordinatesRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkParallelCoordinatesRepresentation\nC++: vtkParallelCoordinatesRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParallelCoordinatesRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParallelCoordinatesRepresentation\nC++: vtkParallelCoordinatesRepresentation *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"ApplyViewTheme", PyvtkParallelCoordinatesRepresentation_ApplyViewTheme, 1,
   (char*)"V.ApplyViewTheme(vtkViewTheme)\nC++: virtual void ApplyViewTheme(vtkViewTheme *theme)\n\nApply the theme to this view.  CellColor is used for line\ncoloring and titles.  EdgeLabelColor is used for axis color.\nCellOpacity is used for line opacity.\n"},
  {(char*)"GetHoverText", PyvtkParallelCoordinatesRepresentation_GetHoverText, 1,
   (char*)"V.GetHoverText(vtkView, int, int) -> string\nC++: virtual const char *GetHoverText(vtkView *view, int x, int y)\n\nReturns the hover text at an x,y location.\n"},
  {(char*)"SetAxisTitles", PyvtkParallelCoordinatesRepresentation_SetAxisTitles, 1,
   (char*)"V.SetAxisTitles(vtkStringArray)\nC++: void SetAxisTitles(vtkStringArray *)\nV.SetAxisTitles(vtkAlgorithmOutput)\nC++: void SetAxisTitles(vtkAlgorithmOutput *)\n\nSet/Get the axis titles\n"},
  {(char*)"SetPlotTitle", PyvtkParallelCoordinatesRepresentation_SetPlotTitle, 1,
   (char*)"V.SetPlotTitle(string)\nC++: void SetPlotTitle(const char *)\n\nSet the title for the entire plot\n"},
  {(char*)"GetNumberOfAxes", PyvtkParallelCoordinatesRepresentation_GetNumberOfAxes, 1,
   (char*)"V.GetNumberOfAxes() -> int\nC++: int GetNumberOfAxes()\n\nGet the number of axes in the plot\n"},
  {(char*)"GetNumberOfSamples", PyvtkParallelCoordinatesRepresentation_GetNumberOfSamples, 1,
   (char*)"V.GetNumberOfSamples() -> int\nC++: int GetNumberOfSamples()\n\n"},
  {(char*)"SetNumberOfAxisLabels", PyvtkParallelCoordinatesRepresentation_SetNumberOfAxisLabels, 1,
   (char*)"V.SetNumberOfAxisLabels(int)\nC++: void SetNumberOfAxisLabels(int num)\n\nSet/Get the number of labels to display on each axis\n"},
  {(char*)"GetNumberOfAxisLabels", PyvtkParallelCoordinatesRepresentation_GetNumberOfAxisLabels, 1,
   (char*)"V.GetNumberOfAxisLabels() -> int\nC++: int GetNumberOfAxisLabels()\n\nSet/Get the number of labels to display on each axis\n"},
  {(char*)"SwapAxisPositions", PyvtkParallelCoordinatesRepresentation_SwapAxisPositions, 1,
   (char*)"V.SwapAxisPositions(int, int) -> int\nC++: virtual int SwapAxisPositions(int position1, int position2)\n\nMove an axis to a particular screen position.  Using these\nmethods requires an Update() before they will work properly.\n"},
  {(char*)"SetXCoordinateOfPosition", PyvtkParallelCoordinatesRepresentation_SetXCoordinateOfPosition, 1,
   (char*)"V.SetXCoordinateOfPosition(int, float) -> int\nC++: int SetXCoordinateOfPosition(int position, double xcoord)\n\nMove an axis to a particular screen position.  Using these\nmethods requires an Update() before they will work properly.\n"},
  {(char*)"GetXCoordinateOfPosition", PyvtkParallelCoordinatesRepresentation_GetXCoordinateOfPosition, 1,
   (char*)"V.GetXCoordinateOfPosition(int) -> float\nC++: double GetXCoordinateOfPosition(int axis)\n\nMove an axis to a particular screen position.  Using these\nmethods requires an Update() before they will work properly.\n"},
  {(char*)"GetPositionNearXCoordinate", PyvtkParallelCoordinatesRepresentation_GetPositionNearXCoordinate, 1,
   (char*)"V.GetPositionNearXCoordinate(float) -> int\nC++: int GetPositionNearXCoordinate(double xcoord)\n\nMove an axis to a particular screen position.  Using these\nmethods requires an Update() before they will work properly.\n"},
  {(char*)"SetUseCurves", PyvtkParallelCoordinatesRepresentation_SetUseCurves, 1,
   (char*)"V.SetUseCurves(int)\nC++: void SetUseCurves(int a)\n\nWhether or not to display using curves\n"},
  {(char*)"GetUseCurves", PyvtkParallelCoordinatesRepresentation_GetUseCurves, 1,
   (char*)"V.GetUseCurves() -> int\nC++: int GetUseCurves()\n\nWhether or not to display using curves\n"},
  {(char*)"UseCurvesOn", PyvtkParallelCoordinatesRepresentation_UseCurvesOn, 1,
   (char*)"V.UseCurvesOn()\nC++: void UseCurvesOn()\n\nWhether or not to display using curves\n"},
  {(char*)"UseCurvesOff", PyvtkParallelCoordinatesRepresentation_UseCurvesOff, 1,
   (char*)"V.UseCurvesOff()\nC++: void UseCurvesOff()\n\nWhether or not to display using curves\n"},
  {(char*)"SetCurveResolution", PyvtkParallelCoordinatesRepresentation_SetCurveResolution, 1,
   (char*)"V.SetCurveResolution(int)\nC++: void SetCurveResolution(int a)\n\nResolution of the curves displayed, enabled by setting UseCurves\n"},
  {(char*)"GetCurveResolution", PyvtkParallelCoordinatesRepresentation_GetCurveResolution, 1,
   (char*)"V.GetCurveResolution() -> int\nC++: int GetCurveResolution()\n\nResolution of the curves displayed, enabled by setting UseCurves\n"},
  {(char*)"GetLineOpacity", PyvtkParallelCoordinatesRepresentation_GetLineOpacity, 1,
   (char*)"V.GetLineOpacity() -> float\nC++: double GetLineOpacity()\n\nAccess plot properties\n"},
  {(char*)"GetFontSize", PyvtkParallelCoordinatesRepresentation_GetFontSize, 1,
   (char*)"V.GetFontSize() -> float\nC++: double GetFontSize()\n\nAccess plot properties\n"},
  {(char*)"GetLineColor", PyvtkParallelCoordinatesRepresentation_GetLineColor, 1,
   (char*)"V.GetLineColor() -> (float, float, float)\nC++: double *GetLineColor()\n\n"},
  {(char*)"GetAxisColor", PyvtkParallelCoordinatesRepresentation_GetAxisColor, 1,
   (char*)"V.GetAxisColor() -> (float, float, float)\nC++: double *GetAxisColor()\n\n"},
  {(char*)"GetAxisLabelColor", PyvtkParallelCoordinatesRepresentation_GetAxisLabelColor, 1,
   (char*)"V.GetAxisLabelColor() -> (float, float, float)\nC++: double *GetAxisLabelColor()\n\n"},
  {(char*)"SetLineOpacity", PyvtkParallelCoordinatesRepresentation_SetLineOpacity, 1,
   (char*)"V.SetLineOpacity(float)\nC++: void SetLineOpacity(double a)\n\nAccess plot properties\n"},
  {(char*)"SetFontSize", PyvtkParallelCoordinatesRepresentation_SetFontSize, 1,
   (char*)"V.SetFontSize(float)\nC++: void SetFontSize(double a)\n\nAccess plot properties\n"},
  {(char*)"SetLineColor", PyvtkParallelCoordinatesRepresentation_SetLineColor, 1,
   (char*)"V.SetLineColor(float, float, float)\nC++: void SetLineColor(double, double, double)\nV.SetLineColor((float, float, float))\nC++: void SetLineColor(double a[3])\n\n"},
  {(char*)"SetAxisColor", PyvtkParallelCoordinatesRepresentation_SetAxisColor, 1,
   (char*)"V.SetAxisColor(float, float, float)\nC++: void SetAxisColor(double, double, double)\nV.SetAxisColor((float, float, float))\nC++: void SetAxisColor(double a[3])\n\n"},
  {(char*)"SetAxisLabelColor", PyvtkParallelCoordinatesRepresentation_SetAxisLabelColor, 1,
   (char*)"V.SetAxisLabelColor(float, float, float)\nC++: void SetAxisLabelColor(double, double, double)\nV.SetAxisLabelColor((float, float, float))\nC++: void SetAxisLabelColor(double a[3])\n\n"},
  {(char*)"SetAngleBrushThreshold", PyvtkParallelCoordinatesRepresentation_SetAngleBrushThreshold, 1,
   (char*)"V.SetAngleBrushThreshold(float)\nC++: void SetAngleBrushThreshold(double a)\n\nMaximum angle difference (in degrees) of selection using\nangle/function brushes\n"},
  {(char*)"GetAngleBrushThreshold", PyvtkParallelCoordinatesRepresentation_GetAngleBrushThreshold, 1,
   (char*)"V.GetAngleBrushThreshold() -> float\nC++: double GetAngleBrushThreshold()\n\nMaximum angle difference (in degrees) of selection using\nangle/function brushes\n"},
  {(char*)"SetFunctionBrushThreshold", PyvtkParallelCoordinatesRepresentation_SetFunctionBrushThreshold, 1,
   (char*)"V.SetFunctionBrushThreshold(float)\nC++: void SetFunctionBrushThreshold(double a)\n\nMaximum angle difference (in degrees) of selection using\nangle/function brushes\n"},
  {(char*)"GetFunctionBrushThreshold", PyvtkParallelCoordinatesRepresentation_GetFunctionBrushThreshold, 1,
   (char*)"V.GetFunctionBrushThreshold() -> float\nC++: double GetFunctionBrushThreshold()\n\nMaximum angle difference (in degrees) of selection using\nangle/function brushes\n"},
  {(char*)"GetRangeAtPosition", PyvtkParallelCoordinatesRepresentation_GetRangeAtPosition, 1,
   (char*)"V.GetRangeAtPosition(int, [float, float]) -> int\nC++: int GetRangeAtPosition(int position, double range[2])\n\nSet/get the value range of the axis at a particular screen\nposition\n"},
  {(char*)"SetRangeAtPosition", PyvtkParallelCoordinatesRepresentation_SetRangeAtPosition, 1,
   (char*)"V.SetRangeAtPosition(int, [float, float]) -> int\nC++: virtual int SetRangeAtPosition(int position, double range[2])\n\nSet/get the value range of the axis at a particular screen\nposition\n"},
  {(char*)"ResetAxes", PyvtkParallelCoordinatesRepresentation_ResetAxes, 1,
   (char*)"V.ResetAxes()\nC++: void ResetAxes()\n\nReset the axes to their default positions and orders\n"},
  {(char*)"LassoSelect", PyvtkParallelCoordinatesRepresentation_LassoSelect, 1,
   (char*)"V.LassoSelect(int, int, vtkPoints)\nC++: virtual void LassoSelect(int brushClass, int brushOperator,\n    vtkPoints *brushPoints)\n\nDo a selection of the lines.  See the main description for how to\nuse these functions. RangeSelect is currently stubbed out.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParallelCoordinatesRepresentation_StaticNew()
{
  return vtkParallelCoordinatesRepresentation::New();
}

PyObject *PyVTKClass_vtkParallelCoordinatesRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParallelCoordinatesRepresentation_StaticNew,
    PyvtkParallelCoordinatesRepresentation_Methods,
    "vtkParallelCoordinatesRepresentation", modulename,
    NULL, NULL,
    PyvtkParallelCoordinatesRepresentation_Doc(),
    PyVTKClass_vtkRenderedRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"INPUT_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"INPUT_TITLES", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"NUM_INPUT_PORTS", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkParallelCoordinatesRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkParallelCoordinatesRepresentation - Data representation that \n\n",
    "Superclass: vtkRenderedRepresentation\n\n",
    "A parallel coordinates plot represents each variable in a\nmultivariate\n data set as a separate axis.  Individual samples of that data set\nare\n represented as a polyline that pass through each variable axis at\n positions that correspond to data values. \nvtkParallelCoordinatesRepresentation\n generates this plot when added to a vtkParallelCoordinatesView,\nwhich handles\n interaction and highlighting. ",
    " Sample polylines can alternatively\n be represented as s-curves by enabling the UseCurves flag.\n\n\n There are three selection modes: lasso, angle, and function. Lasso\nselection\n picks sample lines that pass through a polyline.  Angle selection\npicks sample\n lines that have similar slope to a line segment.  Function selection\npicks\n sample lines that are near a linear function defined on two\nvariabl",
    "es.  This\n function specified by passing two (x,y) variable value pairs.\n\n\n All primitives are plotted in normalized view coordinates [0,1].\n\nSee Also:\n\n\n vtkParallelCoordinatesView\nvtkParallelCoordinatesHistogramRepresentation\n vtkSCurveSpline\n\nThanks:\n\n\n Developed by David Feng at Sandia National Laboratories\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParallelCoordinatesRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParallelCoordinatesRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParallelCoordinatesRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

