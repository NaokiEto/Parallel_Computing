// python wrapper for vtkCleanPolyData
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
#include "vtkCleanPolyData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCleanPolyData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCleanPolyData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCleanPolyDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCleanPolyDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkCleanPolyData_Doc();


static PyObject *
PyvtkCleanPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

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
      tempr = op->vtkCleanPolyData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

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
      tempr = op->vtkCleanPolyData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  vtkCleanPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCleanPolyData::NewInstance();
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
PyvtkCleanPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCleanPolyData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCleanPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetToleranceIsAbsolute(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetToleranceIsAbsolute(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ToleranceIsAbsoluteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ToleranceIsAbsoluteOn();
      }
    else
      {
      op->vtkCleanPolyData::ToleranceIsAbsoluteOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ToleranceIsAbsoluteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ToleranceIsAbsoluteOff();
      }
    else
      {
      op->vtkCleanPolyData::ToleranceIsAbsoluteOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceIsAbsolute();
      }
    else
      {
      tempr = op->vtkCleanPolyData::GetToleranceIsAbsolute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMinValue();
      }
    else
      {
      tempr = op->vtkCleanPolyData::GetToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkCleanPolyData::GetToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTolerance();
      }
    else
      {
      tempr = op->vtkCleanPolyData::GetTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetAbsoluteTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAbsoluteTolerance(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetAbsoluteTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetAbsoluteToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAbsoluteToleranceMinValue();
      }
    else
      {
      tempr = op->vtkCleanPolyData::GetAbsoluteToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetAbsoluteToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAbsoluteToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkCleanPolyData::GetAbsoluteToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetAbsoluteTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAbsoluteTolerance();
      }
    else
      {
      tempr = op->vtkCleanPolyData::GetAbsoluteTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetConvertLinesToPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertLinesToPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertLinesToPoints(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetConvertLinesToPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertLinesToPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertLinesToPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertLinesToPointsOn();
      }
    else
      {
      op->vtkCleanPolyData::ConvertLinesToPointsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertLinesToPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertLinesToPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertLinesToPointsOff();
      }
    else
      {
      op->vtkCleanPolyData::ConvertLinesToPointsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetConvertLinesToPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertLinesToPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConvertLinesToPoints();
      }
    else
      {
      tempr = op->vtkCleanPolyData::GetConvertLinesToPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetConvertPolysToLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertPolysToLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertPolysToLines(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetConvertPolysToLines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertPolysToLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertPolysToLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertPolysToLinesOn();
      }
    else
      {
      op->vtkCleanPolyData::ConvertPolysToLinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertPolysToLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertPolysToLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertPolysToLinesOff();
      }
    else
      {
      op->vtkCleanPolyData::ConvertPolysToLinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetConvertPolysToLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertPolysToLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConvertPolysToLines();
      }
    else
      {
      tempr = op->vtkCleanPolyData::GetConvertPolysToLines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetConvertStripsToPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertStripsToPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConvertStripsToPolys(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetConvertStripsToPolys(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertStripsToPolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertStripsToPolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertStripsToPolysOn();
      }
    else
      {
      op->vtkCleanPolyData::ConvertStripsToPolysOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ConvertStripsToPolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertStripsToPolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ConvertStripsToPolysOff();
      }
    else
      {
      op->vtkCleanPolyData::ConvertStripsToPolysOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetConvertStripsToPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertStripsToPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConvertStripsToPolys();
      }
    else
      {
      tempr = op->vtkCleanPolyData::GetConvertStripsToPolys();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetPointMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointMerging(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetPointMerging(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetPointMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointMerging();
      }
    else
      {
      tempr = op->vtkCleanPolyData::GetPointMerging();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_PointMergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointMergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointMergingOn();
      }
    else
      {
      op->vtkCleanPolyData::PointMergingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_PointMergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointMergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PointMergingOff();
      }
    else
      {
      op->vtkCleanPolyData::PointMergingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

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
      op->vtkCleanPolyData::SetLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

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
      tempr = op->vtkCleanPolyData::GetLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  vtkPolyData *temp0 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkPolyData")))
    {
    if (ap.IsBound())
      {
      op->CreateDefaultLocator(temp0);
      }
    else
      {
      op->vtkCleanPolyData::CreateDefaultLocator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_ReleaseLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseLocator();
      }
    else
      {
      op->vtkCleanPolyData::ReleaseLocator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

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
      tempr = op->vtkCleanPolyData::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_OperateOnPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OperateOnPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->OperateOnPoint(temp0, temp1);
      }
    else
      {
      op->vtkCleanPolyData::OperateOnPoint(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_OperateOnBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OperateOnBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->OperateOnBounds(temp0, temp1);
      }
    else
      {
      op->vtkCleanPolyData::OperateOnBounds(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPieceInvariant(temp0);
      }
    else
      {
      op->vtkCleanPolyData::SetPieceInvariant(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPieceInvariant();
      }
    else
      {
      tempr = op->vtkCleanPolyData::GetPieceInvariant();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_PieceInvariantOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PieceInvariantOn();
      }
    else
      {
      op->vtkCleanPolyData::PieceInvariantOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCleanPolyData_PieceInvariantOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanPolyData *op = static_cast<vtkCleanPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PieceInvariantOff();
      }
    else
      {
      op->vtkCleanPolyData::PieceInvariantOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCleanPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkCleanPolyData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCleanPolyData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCleanPolyData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCleanPolyData\nC++: vtkCleanPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCleanPolyData_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCleanPolyData\nC++: vtkCleanPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetToleranceIsAbsolute", PyvtkCleanPolyData_SetToleranceIsAbsolute, 1,
   (char*)"V.SetToleranceIsAbsolute(int)\nC++: void SetToleranceIsAbsolute(int a)\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {(char*)"ToleranceIsAbsoluteOn", PyvtkCleanPolyData_ToleranceIsAbsoluteOn, 1,
   (char*)"V.ToleranceIsAbsoluteOn()\nC++: void ToleranceIsAbsoluteOn()\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {(char*)"ToleranceIsAbsoluteOff", PyvtkCleanPolyData_ToleranceIsAbsoluteOff, 1,
   (char*)"V.ToleranceIsAbsoluteOff()\nC++: void ToleranceIsAbsoluteOff()\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {(char*)"GetToleranceIsAbsolute", PyvtkCleanPolyData_GetToleranceIsAbsolute, 1,
   (char*)"V.GetToleranceIsAbsolute() -> int\nC++: int GetToleranceIsAbsolute()\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {(char*)"SetTolerance", PyvtkCleanPolyData_SetTolerance, 1,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double)\n\nSpecify tolerance in terms of fraction of bounding box length.\nDefault is 0.0.\n"},
  {(char*)"GetToleranceMinValue", PyvtkCleanPolyData_GetToleranceMinValue, 1,
   (char*)"V.GetToleranceMinValue() -> float\nC++: double GetToleranceMinValue()\n\nSpecify tolerance in terms of fraction of bounding box length.\nDefault is 0.0.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkCleanPolyData_GetToleranceMaxValue, 1,
   (char*)"V.GetToleranceMaxValue() -> float\nC++: double GetToleranceMaxValue()\n\nSpecify tolerance in terms of fraction of bounding box length.\nDefault is 0.0.\n"},
  {(char*)"GetTolerance", PyvtkCleanPolyData_GetTolerance, 1,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nSpecify tolerance in terms of fraction of bounding box length.\nDefault is 0.0.\n"},
  {(char*)"SetAbsoluteTolerance", PyvtkCleanPolyData_SetAbsoluteTolerance, 1,
   (char*)"V.SetAbsoluteTolerance(float)\nC++: void SetAbsoluteTolerance(double)\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {(char*)"GetAbsoluteToleranceMinValue", PyvtkCleanPolyData_GetAbsoluteToleranceMinValue, 1,
   (char*)"V.GetAbsoluteToleranceMinValue() -> float\nC++: double GetAbsoluteToleranceMinValue()\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {(char*)"GetAbsoluteToleranceMaxValue", PyvtkCleanPolyData_GetAbsoluteToleranceMaxValue, 1,
   (char*)"V.GetAbsoluteToleranceMaxValue() -> float\nC++: double GetAbsoluteToleranceMaxValue()\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {(char*)"GetAbsoluteTolerance", PyvtkCleanPolyData_GetAbsoluteTolerance, 1,
   (char*)"V.GetAbsoluteTolerance() -> float\nC++: double GetAbsoluteTolerance()\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {(char*)"SetConvertLinesToPoints", PyvtkCleanPolyData_SetConvertLinesToPoints, 1,
   (char*)"V.SetConvertLinesToPoints(int)\nC++: void SetConvertLinesToPoints(int a)\n\nTurn on/off conversion of degenerate lines to points. Default is\nOn.\n"},
  {(char*)"ConvertLinesToPointsOn", PyvtkCleanPolyData_ConvertLinesToPointsOn, 1,
   (char*)"V.ConvertLinesToPointsOn()\nC++: void ConvertLinesToPointsOn()\n\nTurn on/off conversion of degenerate lines to points. Default is\nOn.\n"},
  {(char*)"ConvertLinesToPointsOff", PyvtkCleanPolyData_ConvertLinesToPointsOff, 1,
   (char*)"V.ConvertLinesToPointsOff()\nC++: void ConvertLinesToPointsOff()\n\nTurn on/off conversion of degenerate lines to points. Default is\nOn.\n"},
  {(char*)"GetConvertLinesToPoints", PyvtkCleanPolyData_GetConvertLinesToPoints, 1,
   (char*)"V.GetConvertLinesToPoints() -> int\nC++: int GetConvertLinesToPoints()\n\nTurn on/off conversion of degenerate lines to points. Default is\nOn.\n"},
  {(char*)"SetConvertPolysToLines", PyvtkCleanPolyData_SetConvertPolysToLines, 1,
   (char*)"V.SetConvertPolysToLines(int)\nC++: void SetConvertPolysToLines(int a)\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOn.\n"},
  {(char*)"ConvertPolysToLinesOn", PyvtkCleanPolyData_ConvertPolysToLinesOn, 1,
   (char*)"V.ConvertPolysToLinesOn()\nC++: void ConvertPolysToLinesOn()\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOn.\n"},
  {(char*)"ConvertPolysToLinesOff", PyvtkCleanPolyData_ConvertPolysToLinesOff, 1,
   (char*)"V.ConvertPolysToLinesOff()\nC++: void ConvertPolysToLinesOff()\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOn.\n"},
  {(char*)"GetConvertPolysToLines", PyvtkCleanPolyData_GetConvertPolysToLines, 1,
   (char*)"V.GetConvertPolysToLines() -> int\nC++: int GetConvertPolysToLines()\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOn.\n"},
  {(char*)"SetConvertStripsToPolys", PyvtkCleanPolyData_SetConvertStripsToPolys, 1,
   (char*)"V.SetConvertStripsToPolys(int)\nC++: void SetConvertStripsToPolys(int a)\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOn.\n"},
  {(char*)"ConvertStripsToPolysOn", PyvtkCleanPolyData_ConvertStripsToPolysOn, 1,
   (char*)"V.ConvertStripsToPolysOn()\nC++: void ConvertStripsToPolysOn()\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOn.\n"},
  {(char*)"ConvertStripsToPolysOff", PyvtkCleanPolyData_ConvertStripsToPolysOff, 1,
   (char*)"V.ConvertStripsToPolysOff()\nC++: void ConvertStripsToPolysOff()\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOn.\n"},
  {(char*)"GetConvertStripsToPolys", PyvtkCleanPolyData_GetConvertStripsToPolys, 1,
   (char*)"V.GetConvertStripsToPolys() -> int\nC++: int GetConvertStripsToPolys()\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOn.\n"},
  {(char*)"SetPointMerging", PyvtkCleanPolyData_SetPointMerging, 1,
   (char*)"V.SetPointMerging(int)\nC++: void SetPointMerging(int a)\n\nSet/Get a boolean value that controls whether point merging is\nperformed. If on, a locator will be used, and points laying\nwithin the appropriate tolerance may be merged. If off, points\nare never merged. By default, merging is on.\n"},
  {(char*)"GetPointMerging", PyvtkCleanPolyData_GetPointMerging, 1,
   (char*)"V.GetPointMerging() -> int\nC++: int GetPointMerging()\n\nSet/Get a boolean value that controls whether point merging is\nperformed. If on, a locator will be used, and points laying\nwithin the appropriate tolerance may be merged. If off, points\nare never merged. By default, merging is on.\n"},
  {(char*)"PointMergingOn", PyvtkCleanPolyData_PointMergingOn, 1,
   (char*)"V.PointMergingOn()\nC++: void PointMergingOn()\n\nSet/Get a boolean value that controls whether point merging is\nperformed. If on, a locator will be used, and points laying\nwithin the appropriate tolerance may be merged. If off, points\nare never merged. By default, merging is on.\n"},
  {(char*)"PointMergingOff", PyvtkCleanPolyData_PointMergingOff, 1,
   (char*)"V.PointMergingOff()\nC++: void PointMergingOff()\n\nSet/Get a boolean value that controls whether point merging is\nperformed. If on, a locator will be used, and points laying\nwithin the appropriate tolerance may be merged. If off, points\nare never merged. By default, merging is on.\n"},
  {(char*)"SetLocator", PyvtkCleanPolyData_SetLocator, 1,
   (char*)"V.SetLocator(vtkIncrementalPointLocator)\nC++: virtual void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet/Get a spatial locator for speeding the search process. By\ndefault an instance of vtkMergePoints is used.\n"},
  {(char*)"GetLocator", PyvtkCleanPolyData_GetLocator, 1,
   (char*)"V.GetLocator() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *GetLocator()\n\nSet/Get a spatial locator for speeding the search process. By\ndefault an instance of vtkMergePoints is used.\n"},
  {(char*)"CreateDefaultLocator", PyvtkCleanPolyData_CreateDefaultLocator, 1,
   (char*)"V.CreateDefaultLocator(vtkPolyData)\nC++: void CreateDefaultLocator(vtkPolyData *input=0)\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {(char*)"ReleaseLocator", PyvtkCleanPolyData_ReleaseLocator, 1,
   (char*)"V.ReleaseLocator()\nC++: void ReleaseLocator()\n\nRelease locator\n"},
  {(char*)"GetMTime", PyvtkCleanPolyData_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the MTime of this object also considering the locator.\n"},
  {(char*)"OperateOnPoint", PyvtkCleanPolyData_OperateOnPoint, 1,
   (char*)"V.OperateOnPoint([float, float, float], [float, float, float])\nC++: virtual void OperateOnPoint(double in[3], double out[3])\n\nPerform operation on a point\n"},
  {(char*)"OperateOnBounds", PyvtkCleanPolyData_OperateOnBounds, 1,
   (char*)"V.OperateOnBounds([float, float, float, float, float, float],\n    [float, float, float, float, float, float])\nC++: virtual void OperateOnBounds(double in[6], double out[6])\n\nPerform operation on bounds\n"},
  {(char*)"SetPieceInvariant", PyvtkCleanPolyData_SetPieceInvariant, 1,
   (char*)"V.SetPieceInvariant(int)\nC++: void SetPieceInvariant(int a)\n\n"},
  {(char*)"GetPieceInvariant", PyvtkCleanPolyData_GetPieceInvariant, 1,
   (char*)"V.GetPieceInvariant() -> int\nC++: int GetPieceInvariant()\n\n"},
  {(char*)"PieceInvariantOn", PyvtkCleanPolyData_PieceInvariantOn, 1,
   (char*)"V.PieceInvariantOn()\nC++: void PieceInvariantOn()\n\n"},
  {(char*)"PieceInvariantOff", PyvtkCleanPolyData_PieceInvariantOff, 1,
   (char*)"V.PieceInvariantOff()\nC++: void PieceInvariantOff()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCleanPolyData_StaticNew()
{
  return vtkCleanPolyData::New();
}

PyObject *PyVTKClass_vtkCleanPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCleanPolyData_StaticNew,
    PyvtkCleanPolyData_Methods,
    "vtkCleanPolyData", modulename,
    NULL, NULL,
    PyvtkCleanPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCleanPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkCleanPolyData - merge duplicate points, and/or remove unused\npoints and/or remove degenerate cells\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkCleanPolyData is a filter that takes polygonal data as input and\ngenerates polygonal data as output. vtkCleanPolyData can merge\nduplicate points (within specified tolerance and if enabled),\neliminate points that are not used, and if enabled, transform\ndegenerate cells into appropriate forms (for example, a triangle is\nconverted into a line if two points of triangle are merged).\n\nConversion of d",
    "egenerate cells is controlled by the flags\nConvertLinesToPoints, ConvertPolysToLines, ConvertStripsToPolys which\nact cumulatively such that a degenerate strip may become a poly. The\nfull set is Line with 1 points -> Vert (if ConvertLinesToPoints) Poly\nwith 2 points -> Line (if ConvertPolysToLines) Poly with 1 points ->\nVert (if ConvertPolysToLines && ConvertLinesToPoints) Strp with 3\npoints -> Pol",
    "y (if ConvertStripsToPolys) Strp with 2 points -> Line\n(if ConvertStripsToPolys && ConvertPolysToLines) Strp with 1 points\n-> Vert (if ConvertStripsToPolys && ConvertPolysToLines\n  && ConvertLinesToPoints)\n\nIf tolerance is specified precisely=0.0, then vtkCleanPolyData will\nuse the vtkMergePoints object to merge points (which is faster).\nOtherwise the slower vtkIncrementalPointLocator is used.  Be",
    "fore\ninserting points into the point locator, this class calls a function\nOperateOnPoint which can be used (in subclasses) to further refine\nthe cleaning process. See vtkQuantizePolyDataPoints.\n\nNote that merging of points can be disabled. In this case, a point\nlocator will not be used, and points that are not used by any cells\nwill be eliminated, but never merged.\n\nCaveats:\n\nMerging points can al",
    "ter topology, including introducing non-manifold\nforms. The tolerance should be chosen carefully to avoid these\nproblems. Subclasses should handle OperateOnBounds as well as\nOperateOnPoint to ensure that the locator is correctly initialized\n(i.e. all modified points must lie inside modified bounds).\n\nSee Also:\n\nvtkQuantizePolyDataPoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCleanPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCleanPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCleanPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

