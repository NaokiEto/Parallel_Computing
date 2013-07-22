// python wrapper for vtkParallelCoordinatesHistogramRepresentation
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
#include "vtkParallelCoordinatesHistogramRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkParallelCoordinatesHistogramRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkParallelCoordinatesHistogramRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkParallelCoordinatesHistogramRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkParallelCoordinatesHistogramRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkParallelCoordinatesRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkParallelCoordinatesRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkParallelCoordinatesRepresentationNew
#endif

static const char **PyvtkParallelCoordinatesHistogramRepresentation_Doc();


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

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
      tempr = op->vtkParallelCoordinatesHistogramRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

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
      tempr = op->vtkParallelCoordinatesHistogramRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  vtkParallelCoordinatesHistogramRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesHistogramRepresentation::NewInstance();
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
PyvtkParallelCoordinatesHistogramRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkParallelCoordinatesHistogramRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkParallelCoordinatesHistogramRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

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
      op->vtkParallelCoordinatesHistogramRepresentation::ApplyViewTheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetUseHistograms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseHistograms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseHistograms(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesHistogramRepresentation::SetUseHistograms(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_GetUseHistograms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseHistograms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseHistograms();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesHistogramRepresentation::GetUseHistograms();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_UseHistogramsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHistogramsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseHistogramsOn();
      }
    else
      {
      op->vtkParallelCoordinatesHistogramRepresentation::UseHistogramsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_UseHistogramsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHistogramsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseHistogramsOff();
      }
    else
      {
      op->vtkParallelCoordinatesHistogramRepresentation::UseHistogramsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetShowOutliers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowOutliers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShowOutliers(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesHistogramRepresentation::SetShowOutliers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_GetShowOutliers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowOutliers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShowOutliers();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesHistogramRepresentation::GetShowOutliers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_ShowOutliersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowOutliersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowOutliersOn();
      }
    else
      {
      op->vtkParallelCoordinatesHistogramRepresentation::ShowOutliersOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_ShowOutliersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowOutliersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ShowOutliersOff();
      }
    else
      {
      op->vtkParallelCoordinatesHistogramRepresentation::ShowOutliersOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetHistogramLookupTableRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramLookupTableRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetHistogramLookupTableRange(temp0, temp1);
      }
    else
      {
      op->vtkParallelCoordinatesHistogramRepresentation::SetHistogramLookupTableRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetHistogramLookupTableRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramLookupTableRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetHistogramLookupTableRange(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesHistogramRepresentation::SetHistogramLookupTableRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetHistogramLookupTableRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkParallelCoordinatesHistogramRepresentation_SetHistogramLookupTableRange_s1(self, args);
    case 1:
      return PyvtkParallelCoordinatesHistogramRepresentation_SetHistogramLookupTableRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetHistogramLookupTableRange");
  return NULL;
}



static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_GetHistogramLookupTableRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistogramLookupTableRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHistogramLookupTableRange();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesHistogramRepresentation::GetHistogramLookupTableRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetNumberOfHistogramBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHistogramBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfHistogramBins(temp0, temp1);
      }
    else
      {
      op->vtkParallelCoordinatesHistogramRepresentation::SetNumberOfHistogramBins(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_GetNumberOfHistogramBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHistogramBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfHistogramBins();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesHistogramRepresentation::GetNumberOfHistogramBins();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetPreferredNumberOfOutliers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreferredNumberOfOutliers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreferredNumberOfOutliers(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesHistogramRepresentation::SetPreferredNumberOfOutliers(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_GetPreferredNumberOfOutliers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreferredNumberOfOutliers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPreferredNumberOfOutliers();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesHistogramRepresentation::GetPreferredNumberOfOutliers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SwapAxisPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapAxisPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

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
      tempr = op->vtkParallelCoordinatesHistogramRepresentation::SwapAxisPositions(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetRangeAtPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRangeAtPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

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
      tempr = op->vtkParallelCoordinatesHistogramRepresentation::SetRangeAtPosition(temp0, temp1);
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

static PyMethodDef PyvtkParallelCoordinatesHistogramRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkParallelCoordinatesHistogramRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParallelCoordinatesHistogramRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParallelCoordinatesHistogramRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkParallelCoordinatesHistogramRepresentation\nC++: vtkParallelCoordinatesHistogramRepresentation *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParallelCoordinatesHistogramRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject)\n    -> vtkParallelCoordinatesHistogramRepresentation\nC++: vtkParallelCoordinatesHistogramRepresentation *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"ApplyViewTheme", PyvtkParallelCoordinatesHistogramRepresentation_ApplyViewTheme, 1,
   (char*)"V.ApplyViewTheme(vtkViewTheme)\nC++: virtual void ApplyViewTheme(vtkViewTheme *theme)\n\nApply the theme to this view.\n"},
  {(char*)"SetUseHistograms", PyvtkParallelCoordinatesHistogramRepresentation_SetUseHistograms, 1,
   (char*)"V.SetUseHistograms(int)\nC++: virtual void SetUseHistograms(int)\n\nWhether to use the histogram rendering mode or the superclass's\nline rendering mode\n"},
  {(char*)"GetUseHistograms", PyvtkParallelCoordinatesHistogramRepresentation_GetUseHistograms, 1,
   (char*)"V.GetUseHistograms() -> int\nC++: int GetUseHistograms()\n\nWhether to use the histogram rendering mode or the superclass's\nline rendering mode\n"},
  {(char*)"UseHistogramsOn", PyvtkParallelCoordinatesHistogramRepresentation_UseHistogramsOn, 1,
   (char*)"V.UseHistogramsOn()\nC++: void UseHistogramsOn()\n\nWhether to use the histogram rendering mode or the superclass's\nline rendering mode\n"},
  {(char*)"UseHistogramsOff", PyvtkParallelCoordinatesHistogramRepresentation_UseHistogramsOff, 1,
   (char*)"V.UseHistogramsOff()\nC++: void UseHistogramsOff()\n\nWhether to use the histogram rendering mode or the superclass's\nline rendering mode\n"},
  {(char*)"SetShowOutliers", PyvtkParallelCoordinatesHistogramRepresentation_SetShowOutliers, 1,
   (char*)"V.SetShowOutliers(int)\nC++: virtual void SetShowOutliers(int)\n\nWhether to compute and show outlier lines\n"},
  {(char*)"GetShowOutliers", PyvtkParallelCoordinatesHistogramRepresentation_GetShowOutliers, 1,
   (char*)"V.GetShowOutliers() -> int\nC++: int GetShowOutliers()\n\nWhether to compute and show outlier lines\n"},
  {(char*)"ShowOutliersOn", PyvtkParallelCoordinatesHistogramRepresentation_ShowOutliersOn, 1,
   (char*)"V.ShowOutliersOn()\nC++: void ShowOutliersOn()\n\nWhether to compute and show outlier lines\n"},
  {(char*)"ShowOutliersOff", PyvtkParallelCoordinatesHistogramRepresentation_ShowOutliersOff, 1,
   (char*)"V.ShowOutliersOff()\nC++: void ShowOutliersOff()\n\nWhether to compute and show outlier lines\n"},
  {(char*)"SetHistogramLookupTableRange", PyvtkParallelCoordinatesHistogramRepresentation_SetHistogramLookupTableRange, 1,
   (char*)"V.SetHistogramLookupTableRange(float, float)\nC++: void SetHistogramLookupTableRange(double, double)\nV.SetHistogramLookupTableRange((float, float))\nC++: void SetHistogramLookupTableRange(double a[2])\n\n"},
  {(char*)"GetHistogramLookupTableRange", PyvtkParallelCoordinatesHistogramRepresentation_GetHistogramLookupTableRange, 1,
   (char*)"V.GetHistogramLookupTableRange() -> (float, float)\nC++: double *GetHistogramLookupTableRange()\n\n"},
  {(char*)"SetNumberOfHistogramBins", PyvtkParallelCoordinatesHistogramRepresentation_SetNumberOfHistogramBins, 1,
   (char*)"V.SetNumberOfHistogramBins(int, int)\nC++: void SetNumberOfHistogramBins(int, int)\n\nThe number of histogram bins on either side of each pair of axes.\n"},
  {(char*)"GetNumberOfHistogramBins", PyvtkParallelCoordinatesHistogramRepresentation_GetNumberOfHistogramBins, 1,
   (char*)"V.GetNumberOfHistogramBins() -> (int, int)\nC++: int *GetNumberOfHistogramBins()\n\n"},
  {(char*)"SetPreferredNumberOfOutliers", PyvtkParallelCoordinatesHistogramRepresentation_SetPreferredNumberOfOutliers, 1,
   (char*)"V.SetPreferredNumberOfOutliers(int)\nC++: void SetPreferredNumberOfOutliers(int)\n\nTarget maximum number of outliers to be drawn, although not\nguaranteed.\n"},
  {(char*)"GetPreferredNumberOfOutliers", PyvtkParallelCoordinatesHistogramRepresentation_GetPreferredNumberOfOutliers, 1,
   (char*)"V.GetPreferredNumberOfOutliers() -> int\nC++: int GetPreferredNumberOfOutliers()\n\nTarget maximum number of outliers to be drawn, although not\nguaranteed.\n"},
  {(char*)"SwapAxisPositions", PyvtkParallelCoordinatesHistogramRepresentation_SwapAxisPositions, 1,
   (char*)"V.SwapAxisPositions(int, int) -> int\nC++: virtual int SwapAxisPositions(int position1, int position2)\n\nCalls superclass swap, and assures that only histograms affected\nby the swap get recomputed.\n"},
  {(char*)"SetRangeAtPosition", PyvtkParallelCoordinatesHistogramRepresentation_SetRangeAtPosition, 1,
   (char*)"V.SetRangeAtPosition(int, [float, float]) -> int\nC++: virtual int SetRangeAtPosition(int position, double range[2])\n\nCalls the superclass method, and assures that only the two\nhistograms affect by this call get recomputed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParallelCoordinatesHistogramRepresentation_StaticNew()
{
  return vtkParallelCoordinatesHistogramRepresentation::New();
}

PyObject *PyVTKClass_vtkParallelCoordinatesHistogramRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParallelCoordinatesHistogramRepresentation_StaticNew,
    PyvtkParallelCoordinatesHistogramRepresentation_Methods,
    "vtkParallelCoordinatesHistogramRepresentation", modulename,
    NULL, NULL,
    PyvtkParallelCoordinatesHistogramRepresentation_Doc(),
    PyVTKClass_vtkParallelCoordinatesRepresentationNew(modulename));
  return cls;
}

const char **PyvtkParallelCoordinatesHistogramRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkParallelCoordinatesHistogramRepresentation - Data representation \n\n",
    "Superclass: vtkParallelCoordinatesRepresentation\n\n",
    "A parallel coordinates plot represents each variable in a\nmultivariate\n data set as a separate axis.  Individual samples of that data set\nare\n represented as a polyline that pass through each variable axis at\n positions that correspond to data values.  This class can generate\n parallel coordinates plots identical to its superclass\n (vtkParallelCoordinatesRepresentation) and has the same interactio",
    "n\n styles.\n\n\n In addition to the standard parallel coordinates plot, this class\nalso\n can draw a histogram summary of the parallel coordinates plot.\n Rather than draw every row in an input data set, first it computes\n a 2D histogram for all neighboring variable axes, then it draws\n bar (thickness corresponds to bin size) for each bin the histogram\n with opacity weighted by the number of rows conta",
    "ined in the bin.\n The result is essentially a density map.\n\n\n Because this emphasizes dense regions over sparse outliers, this\nclass\n also uses a vtkComputeHistogram2DOutliers instance to identify\noutlier\n table rows and draws those as standard parallel coordinates lines.\n\nSee Also:\n\n\n vtkParallelCoordinatesView vtkParallelCoordinatesRepresentation\n vtkExtractHistogram2D vtkComputeHistogram2DOutli",
    "ers\n\nThanks:\n\n\n Developed by David Feng at Sandia National Laboratories\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParallelCoordinatesHistogramRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParallelCoordinatesHistogramRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParallelCoordinatesHistogramRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

