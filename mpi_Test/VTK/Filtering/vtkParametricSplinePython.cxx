// python wrapper for vtkParametricSpline
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
#include "vtkParametricSpline.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkParametricSpline(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkParametricSpline(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkParametricSplineNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkParametricSplineNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkParametricFunctionNew
extern "C" { PyObject *PyVTKClass_vtkParametricFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkParametricFunctionNew
#endif

static const char **PyvtkParametricSpline_Doc();


static PyObject *
PyvtkParametricSpline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

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
      tempr = op->vtkParametricSpline::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

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
      tempr = op->vtkParametricSpline::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  vtkParametricSpline *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkParametricSpline::NewInstance();
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
PyvtkParametricSpline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkParametricSpline *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkParametricSpline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimension();
      }
    else
      {
      tempr = op->vtkParametricSpline::GetDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[9];
  double save2[9];
  const int size2 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->Evaluate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkParametricSpline::Evaluate(temp0, temp1, temp2);
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

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[9];
  double save2[9];
  const int size2 = 9;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      tempr = op->EvaluateScalar(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkParametricSpline::EvaluateScalar(temp0, temp1, temp2);
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

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetXSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  vtkSpline *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
    {
    if (ap.IsBound())
      {
      op->SetXSpline(temp0);
      }
    else
      {
      op->vtkParametricSpline::SetXSpline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetYSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  vtkSpline *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
    {
    if (ap.IsBound())
      {
      op->SetYSpline(temp0);
      }
    else
      {
      op->vtkParametricSpline::SetYSpline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetZSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  vtkSpline *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
    {
    if (ap.IsBound())
      {
      op->SetZSpline(temp0);
      }
    else
      {
      op->vtkParametricSpline::SetZSpline(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetXSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  vtkSpline *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXSpline();
      }
    else
      {
      tempr = op->vtkParametricSpline::GetXSpline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetYSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  vtkSpline *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYSpline();
      }
    else
      {
      tempr = op->vtkParametricSpline::GetYSpline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetZSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  vtkSpline *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZSpline();
      }
    else
      {
      tempr = op->vtkParametricSpline::GetZSpline();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetPoints(temp0);
      }
    else
      {
      op->vtkParametricSpline::SetPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  vtkPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoints();
      }
    else
      {
      tempr = op->vtkParametricSpline::GetPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPoints(temp0);
      }
    else
      {
      op->vtkParametricSpline::SetNumberOfPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  vtkIdType temp0;
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
      op->SetPoint(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkParametricSpline::SetPoint(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClosed(temp0);
      }
    else
      {
      op->vtkParametricSpline::SetClosed(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClosed();
      }
    else
      {
      tempr = op->vtkParametricSpline::GetClosed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_ClosedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedOn();
      }
    else
      {
      op->vtkParametricSpline::ClosedOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_ClosedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClosedOff();
      }
    else
      {
      op->vtkParametricSpline::ClosedOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetParameterizeByLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterizeByLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParameterizeByLength(temp0);
      }
    else
      {
      op->vtkParametricSpline::SetParameterizeByLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetParameterizeByLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterizeByLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParameterizeByLength();
      }
    else
      {
      tempr = op->vtkParametricSpline::GetParameterizeByLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_ParameterizeByLengthOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParameterizeByLengthOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParameterizeByLengthOn();
      }
    else
      {
      op->vtkParametricSpline::ParameterizeByLengthOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_ParameterizeByLengthOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParameterizeByLengthOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParameterizeByLengthOff();
      }
    else
      {
      op->vtkParametricSpline::ParameterizeByLengthOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetLeftConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLeftConstraint(temp0);
      }
    else
      {
      op->vtkParametricSpline::SetLeftConstraint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetLeftConstraintMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftConstraintMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeftConstraintMinValue();
      }
    else
      {
      tempr = op->vtkParametricSpline::GetLeftConstraintMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetLeftConstraintMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftConstraintMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeftConstraintMaxValue();
      }
    else
      {
      tempr = op->vtkParametricSpline::GetLeftConstraintMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetLeftConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeftConstraint();
      }
    else
      {
      tempr = op->vtkParametricSpline::GetLeftConstraint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetRightConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRightConstraint(temp0);
      }
    else
      {
      op->vtkParametricSpline::SetRightConstraint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetRightConstraintMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightConstraintMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRightConstraintMinValue();
      }
    else
      {
      tempr = op->vtkParametricSpline::GetRightConstraintMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetRightConstraintMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightConstraintMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRightConstraintMaxValue();
      }
    else
      {
      tempr = op->vtkParametricSpline::GetRightConstraintMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetRightConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRightConstraint();
      }
    else
      {
      tempr = op->vtkParametricSpline::GetRightConstraint();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetLeftValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLeftValue(temp0);
      }
    else
      {
      op->vtkParametricSpline::SetLeftValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetLeftValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeftValue();
      }
    else
      {
      tempr = op->vtkParametricSpline::GetLeftValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetRightValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRightValue(temp0);
      }
    else
      {
      op->vtkParametricSpline::SetRightValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetRightValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRightValue();
      }
    else
      {
      tempr = op->vtkParametricSpline::GetRightValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkParametricSpline_Methods[] = {
  {(char*)"GetClassName", PyvtkParametricSpline_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParametricSpline_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParametricSpline_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkParametricSpline\nC++: vtkParametricSpline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParametricSpline_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParametricSpline\nC++: vtkParametricSpline *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDimension", PyvtkParametricSpline_GetDimension, 1,
   (char*)"V.GetDimension() -> int\nC++: virtual int GetDimension()\n\n"},
  {(char*)"Evaluate", PyvtkParametricSpline_Evaluate, 1,
   (char*)"V.Evaluate([float, float, float], [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\nC++: virtual void Evaluate(double u[3], double Pt[3],\n    double Du[9])\n\nEvaluate the spline at parametric coordinate u[0] returning the\npoint coordinate Pt[3].\n"},
  {(char*)"EvaluateScalar", PyvtkParametricSpline_EvaluateScalar, 1,
   (char*)"V.EvaluateScalar([float, float, float], [float, float, float],\n    [float, float, float, float, float, float, float, float,\n    float]) -> float\nC++: virtual double EvaluateScalar(double u[3], double Pt[3],\n    double Du[9])\n\nEvaluate a scalar value at parametric coordinate u[0] and Pt[3].\nThe scalar value is just the parameter u[0].\n"},
  {(char*)"SetXSpline", PyvtkParametricSpline_SetXSpline, 1,
   (char*)"V.SetXSpline(vtkSpline)\nC++: void SetXSpline(vtkSpline *)\n\nBy default, this class is constructed with three instances of\nvtkCardinalSpline (for each of the x-y-z coordinate axes). The\nuser may choose to create and assign their own instances of\nvtkSpline.\n"},
  {(char*)"SetYSpline", PyvtkParametricSpline_SetYSpline, 1,
   (char*)"V.SetYSpline(vtkSpline)\nC++: void SetYSpline(vtkSpline *)\n\nBy default, this class is constructed with three instances of\nvtkCardinalSpline (for each of the x-y-z coordinate axes). The\nuser may choose to create and assign their own instances of\nvtkSpline.\n"},
  {(char*)"SetZSpline", PyvtkParametricSpline_SetZSpline, 1,
   (char*)"V.SetZSpline(vtkSpline)\nC++: void SetZSpline(vtkSpline *)\n\nBy default, this class is constructed with three instances of\nvtkCardinalSpline (for each of the x-y-z coordinate axes). The\nuser may choose to create and assign their own instances of\nvtkSpline.\n"},
  {(char*)"GetXSpline", PyvtkParametricSpline_GetXSpline, 1,
   (char*)"V.GetXSpline() -> vtkSpline\nC++: vtkSpline *GetXSpline()\n\nBy default, this class is constructed with three instances of\nvtkCardinalSpline (for each of the x-y-z coordinate axes). The\nuser may choose to create and assign their own instances of\nvtkSpline.\n"},
  {(char*)"GetYSpline", PyvtkParametricSpline_GetYSpline, 1,
   (char*)"V.GetYSpline() -> vtkSpline\nC++: vtkSpline *GetYSpline()\n\nBy default, this class is constructed with three instances of\nvtkCardinalSpline (for each of the x-y-z coordinate axes). The\nuser may choose to create and assign their own instances of\nvtkSpline.\n"},
  {(char*)"GetZSpline", PyvtkParametricSpline_GetZSpline, 1,
   (char*)"V.GetZSpline() -> vtkSpline\nC++: vtkSpline *GetZSpline()\n\nBy default, this class is constructed with three instances of\nvtkCardinalSpline (for each of the x-y-z coordinate axes). The\nuser may choose to create and assign their own instances of\nvtkSpline.\n"},
  {(char*)"SetPoints", PyvtkParametricSpline_SetPoints, 1,
   (char*)"V.SetPoints(vtkPoints)\nC++: void SetPoints(vtkPoints *)\n\nSpecify the list of points defining the spline. Do this by\nspecifying a vtkPoints array containing the points. Note that the\norder of the points in vtkPoints is the order that the splines\nwill be fit.\n"},
  {(char*)"GetPoints", PyvtkParametricSpline_GetPoints, 1,
   (char*)"V.GetPoints() -> vtkPoints\nC++: vtkPoints *GetPoints()\n\nSpecify the list of points defining the spline. Do this by\nspecifying a vtkPoints array containing the points. Note that the\norder of the points in vtkPoints is the order that the splines\nwill be fit.\n"},
  {(char*)"SetNumberOfPoints", PyvtkParametricSpline_SetNumberOfPoints, 1,
   (char*)"V.SetNumberOfPoints(int)\nC++: void SetNumberOfPoints(vtkIdType numPts)\n\nAnother API to set the points. Set the number of points and then\nset the individual point coordinates.\n"},
  {(char*)"SetPoint", PyvtkParametricSpline_SetPoint, 1,
   (char*)"V.SetPoint(int, float, float, float)\nC++: void SetPoint(vtkIdType index, double x, double y, double z)\n\nAnother API to set the points. Set the number of points and then\nset the individual point coordinates.\n"},
  {(char*)"SetClosed", PyvtkParametricSpline_SetClosed, 1,
   (char*)"V.SetClosed(int)\nC++: void SetClosed(int a)\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.\n"},
  {(char*)"GetClosed", PyvtkParametricSpline_GetClosed, 1,
   (char*)"V.GetClosed() -> int\nC++: int GetClosed()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.\n"},
  {(char*)"ClosedOn", PyvtkParametricSpline_ClosedOn, 1,
   (char*)"V.ClosedOn()\nC++: void ClosedOn()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.\n"},
  {(char*)"ClosedOff", PyvtkParametricSpline_ClosedOff, 1,
   (char*)"V.ClosedOff()\nC++: void ClosedOff()\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.\n"},
  {(char*)"SetParameterizeByLength", PyvtkParametricSpline_SetParameterizeByLength, 1,
   (char*)"V.SetParameterizeByLength(int)\nC++: void SetParameterizeByLength(int a)\n\nControl whether the spline is parameterized by length or by point\nindex. Default is by length.\n"},
  {(char*)"GetParameterizeByLength", PyvtkParametricSpline_GetParameterizeByLength, 1,
   (char*)"V.GetParameterizeByLength() -> int\nC++: int GetParameterizeByLength()\n\nControl whether the spline is parameterized by length or by point\nindex. Default is by length.\n"},
  {(char*)"ParameterizeByLengthOn", PyvtkParametricSpline_ParameterizeByLengthOn, 1,
   (char*)"V.ParameterizeByLengthOn()\nC++: void ParameterizeByLengthOn()\n\nControl whether the spline is parameterized by length or by point\nindex. Default is by length.\n"},
  {(char*)"ParameterizeByLengthOff", PyvtkParametricSpline_ParameterizeByLengthOff, 1,
   (char*)"V.ParameterizeByLengthOff()\nC++: void ParameterizeByLengthOff()\n\nControl whether the spline is parameterized by length or by point\nindex. Default is by length.\n"},
  {(char*)"SetLeftConstraint", PyvtkParametricSpline_SetLeftConstraint, 1,
   (char*)"V.SetLeftConstraint(int)\nC++: void SetLeftConstraint(int)\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n0: the first derivative at left(right) most point is determined\nfrom the line defined from the first(last) two points.\n\n1: the first derivative at left(right) most point is set to\nLeft(Right)Value.\n\n2: the second derivative at left(right) most point is set to\nLeft(Right)Value.\n\n3: the second derivative at left(right)most points is\nLeft(Right)Value times second derivative at first interior point.\n"},
  {(char*)"GetLeftConstraintMinValue", PyvtkParametricSpline_GetLeftConstraintMinValue, 1,
   (char*)"V.GetLeftConstraintMinValue() -> int\nC++: int GetLeftConstraintMinValue()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n0: the first derivative at left(right) most point is determined\nfrom the line defined from the first(last) two points.\n\n1: the first derivative at left(right) most point is set to\nLeft(Right)Value.\n\n2: the second derivative at left(right) most point is set to\nLeft(Right)Value.\n\n3: the second derivative at left(right)most points is\nLeft(Right)Value times second derivative at first interior point.\n"},
  {(char*)"GetLeftConstraintMaxValue", PyvtkParametricSpline_GetLeftConstraintMaxValue, 1,
   (char*)"V.GetLeftConstraintMaxValue() -> int\nC++: int GetLeftConstraintMaxValue()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n0: the first derivative at left(right) most point is determined\nfrom the line defined from the first(last) two points.\n\n1: the first derivative at left(right) most point is set to\nLeft(Right)Value.\n\n2: the second derivative at left(right) most point is set to\nLeft(Right)Value.\n\n3: the second derivative at left(right)most points is\nLeft(Right)Value times second derivative at first interior point.\n"},
  {(char*)"GetLeftConstraint", PyvtkParametricSpline_GetLeftConstraint, 1,
   (char*)"V.GetLeftConstraint() -> int\nC++: int GetLeftConstraint()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n0: the first derivative at left(right) most point is determined\nfrom the line defined from the first(last) two points.\n\n1: the first derivative at left(right) most point is set to\nLeft(Right)Value.\n\n2: the second derivative at left(right) most point is set to\nLeft(Right)Value.\n\n3: the second derivative at left(right)most points is\nLeft(Right)Value times second derivative at first interior point.\n"},
  {(char*)"SetRightConstraint", PyvtkParametricSpline_SetRightConstraint, 1,
   (char*)"V.SetRightConstraint(int)\nC++: void SetRightConstraint(int)\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n0: the first derivative at left(right) most point is determined\nfrom the line defined from the first(last) two points.\n\n1: the first derivative at left(right) most point is set to\nLeft(Right)Value.\n\n2: the second derivative at left(right) most point is set to\nLeft(Right)Value.\n\n3: the second derivative at left(right)most points is\nLeft(Right)Value times second derivative at first interior point.\n"},
  {(char*)"GetRightConstraintMinValue", PyvtkParametricSpline_GetRightConstraintMinValue, 1,
   (char*)"V.GetRightConstraintMinValue() -> int\nC++: int GetRightConstraintMinValue()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n0: the first derivative at left(right) most point is determined\nfrom the line defined from the first(last) two points.\n\n1: the first derivative at left(right) most point is set to\nLeft(Right)Value.\n\n2: the second derivative at left(right) most point is set to\nLeft(Right)Value.\n\n3: the second derivative at left(right)most points is\nLeft(Right)Value times second derivative at first interior point.\n"},
  {(char*)"GetRightConstraintMaxValue", PyvtkParametricSpline_GetRightConstraintMaxValue, 1,
   (char*)"V.GetRightConstraintMaxValue() -> int\nC++: int GetRightConstraintMaxValue()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n0: the first derivative at left(right) most point is determined\nfrom the line defined from the first(last) two points.\n\n1: the first derivative at left(right) most point is set to\nLeft(Right)Value.\n\n2: the second derivative at left(right) most point is set to\nLeft(Right)Value.\n\n3: the second derivative at left(right)most points is\nLeft(Right)Value times second derivative at first interior point.\n"},
  {(char*)"GetRightConstraint", PyvtkParametricSpline_GetRightConstraint, 1,
   (char*)"V.GetRightConstraint() -> int\nC++: int GetRightConstraint()\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n0: the first derivative at left(right) most point is determined\nfrom the line defined from the first(last) two points.\n\n1: the first derivative at left(right) most point is set to\nLeft(Right)Value.\n\n2: the second derivative at left(right) most point is set to\nLeft(Right)Value.\n\n3: the second derivative at left(right)most points is\nLeft(Right)Value times second derivative at first interior point.\n"},
  {(char*)"SetLeftValue", PyvtkParametricSpline_SetLeftValue, 1,
   (char*)"V.SetLeftValue(float)\nC++: void SetLeftValue(double a)\n\nThe values of the derivative on the left and right sides. The\nvalue is used only if the left(right) constraint is type 1-3.\n"},
  {(char*)"GetLeftValue", PyvtkParametricSpline_GetLeftValue, 1,
   (char*)"V.GetLeftValue() -> float\nC++: double GetLeftValue()\n\nThe values of the derivative on the left and right sides. The\nvalue is used only if the left(right) constraint is type 1-3.\n"},
  {(char*)"SetRightValue", PyvtkParametricSpline_SetRightValue, 1,
   (char*)"V.SetRightValue(float)\nC++: void SetRightValue(double a)\n\nThe values of the derivative on the left and right sides. The\nvalue is used only if the left(right) constraint is type 1-3.\n"},
  {(char*)"GetRightValue", PyvtkParametricSpline_GetRightValue, 1,
   (char*)"V.GetRightValue() -> float\nC++: double GetRightValue()\n\nThe values of the derivative on the left and right sides. The\nvalue is used only if the left(right) constraint is type 1-3.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParametricSpline_StaticNew()
{
  return vtkParametricSpline::New();
}

PyObject *PyVTKClass_vtkParametricSplineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParametricSpline_StaticNew,
    PyvtkParametricSpline_Methods,
    "vtkParametricSpline", modulename,
    NULL, NULL,
    PyvtkParametricSpline_Doc(),
    PyVTKClass_vtkParametricFunctionNew(modulename));
  return cls;
}

const char **PyvtkParametricSpline_Doc()
{
  static const char *docstring[] = {
    "vtkParametricSpline - parametric function for 1D interpolating splines\n\n",
    "Superclass: vtkParametricFunction\n\n",
    "vtkParametricSpline is a parametric function for 1D interpolating\nsplines. vtkParametricSpline maps the single parameter u into a 3D\npoint (x,y,z) using three instances of interpolating splines.  This\nfamily of 1D splines is quaranteed to be parameterized in the\ninterval [0,1].  Attempting to evaluate outside this interval will\ncause the parameter u to be clamped in the range [0,1].\n\nWhen construc",
    "ted, this class creates instances of vtkCardinalSpline\nfor each of the x-y-z coordinates. The user may choose to replace\nthese with their own instances of subclasses of vtkSpline.\n\nCaveats:\n\nIf you wish to tessellate the spline, use the class\nvtkParametricFunctionSource.\n\nSee Also:\n\nvtkSpline vtkKochanekSpline vtkCardinalSpline\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParametricSpline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParametricSplineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParametricSpline", o) != 0)
    {
    Py_DECREF(o);
    }

}
