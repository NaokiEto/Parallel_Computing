// python wrapper for vtkSuperquadric
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
#include "vtkSuperquadric.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSuperquadric(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSuperquadric(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSuperquadricNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSuperquadricNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImplicitFunctionNew
extern "C" { PyObject *PyVTKClass_vtkImplicitFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkImplicitFunctionNew
#endif

static const char **PyvtkSuperquadric_Doc();


static PyObject *
PyvtkSuperquadric_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

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
      tempr = op->vtkSuperquadric::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

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
      tempr = op->vtkSuperquadric::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  vtkSuperquadric *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSuperquadric::NewInstance();
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
PyvtkSuperquadric_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSuperquadric *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSuperquadric::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->EvaluateFunction(temp0);
      }
    else
      {
      tempr = op->vtkSuperquadric::EvaluateFunction(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSuperquadric_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->EvaluateFunction(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSuperquadric::EvaluateFunction(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSuperquadric_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSuperquadric_EvaluateFunction_s1(self, args);
    case 3:
      return PyvtkSuperquadric_EvaluateFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return NULL;
}



static PyObject *
PyvtkSuperquadric_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

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
      op->EvaluateGradient(temp0, temp1);
      }
    else
      {
      op->vtkSuperquadric::EvaluateGradient(temp0, temp1);
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
PyvtkSuperquadric_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSuperquadric::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSuperquadric_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkSuperquadric::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSuperquadric_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSuperquadric_SetCenter_s1(self, args);
    case 1:
      return PyvtkSuperquadric_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkSuperquadric_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCenter();
      }
    else
      {
      tempr = op->vtkSuperquadric::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSuperquadric::SetScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSuperquadric_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetScale(temp0);
      }
    else
      {
      op->vtkSuperquadric::SetScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSuperquadric_SetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSuperquadric_SetScale_s1(self, args);
    case 1:
      return PyvtkSuperquadric_SetScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return NULL;
}



static PyObject *
PyvtkSuperquadric_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScale();
      }
    else
      {
      tempr = op->vtkSuperquadric::GetScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_GetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThickness();
      }
    else
      {
      tempr = op->vtkSuperquadric::GetThickness();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_SetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThickness(temp0);
      }
    else
      {
      op->vtkSuperquadric::SetThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_GetThicknessMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThicknessMinValue();
      }
    else
      {
      tempr = op->vtkSuperquadric::GetThicknessMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_GetThicknessMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThicknessMaxValue();
      }
    else
      {
      tempr = op->vtkSuperquadric::GetThicknessMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_GetPhiRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPhiRoundness();
      }
    else
      {
      tempr = op->vtkSuperquadric::GetPhiRoundness();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_SetPhiRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPhiRoundness(temp0);
      }
    else
      {
      op->vtkSuperquadric::SetPhiRoundness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_GetThetaRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThetaRoundness();
      }
    else
      {
      tempr = op->vtkSuperquadric::GetThetaRoundness();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_SetThetaRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThetaRoundness(temp0);
      }
    else
      {
      op->vtkSuperquadric::SetThetaRoundness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSize(temp0);
      }
    else
      {
      op->vtkSuperquadric::SetSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSize();
      }
    else
      {
      tempr = op->vtkSuperquadric::GetSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_ToroidalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToroidalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ToroidalOn();
      }
    else
      {
      op->vtkSuperquadric::ToroidalOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_ToroidalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToroidalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ToroidalOff();
      }
    else
      {
      op->vtkSuperquadric::ToroidalOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_GetToroidal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToroidal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToroidal();
      }
    else
      {
      tempr = op->vtkSuperquadric::GetToroidal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadric_SetToroidal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToroidal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadric *op = static_cast<vtkSuperquadric *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetToroidal(temp0);
      }
    else
      {
      op->vtkSuperquadric::SetToroidal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSuperquadric_Methods[] = {
  {(char*)"GetClassName", PyvtkSuperquadric_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSuperquadric_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSuperquadric_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSuperquadric\nC++: vtkSuperquadric *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSuperquadric_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSuperquadric\nC++: vtkSuperquadric *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EvaluateFunction", PyvtkSuperquadric_EvaluateFunction, 1,
   (char*)"V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3])\nV.EvaluateFunction(float, float, float) -> float\nC++: double EvaluateFunction(double x, double y, double z)\n\n"},
  {(char*)"EvaluateGradient", PyvtkSuperquadric_EvaluateGradient, 1,
   (char*)"V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double g[3])\n\n"},
  {(char*)"SetCenter", PyvtkSuperquadric_SetCenter, 1,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkSuperquadric_GetCenter, 1,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet the center of the superquadric. Default is 0,0,0.\n"},
  {(char*)"SetScale", PyvtkSuperquadric_SetScale, 1,
   (char*)"V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\nV.SetScale((float, float, float))\nC++: void SetScale(double a[3])\n\n"},
  {(char*)"GetScale", PyvtkSuperquadric_GetScale, 1,
   (char*)"V.GetScale() -> (float, float, float)\nC++: double *GetScale()\n\nSet the scale factors of the superquadric. Default is 1,1,1.\n"},
  {(char*)"GetThickness", PyvtkSuperquadric_GetThickness, 1,
   (char*)"V.GetThickness() -> float\nC++: double GetThickness()\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid.\n"},
  {(char*)"SetThickness", PyvtkSuperquadric_SetThickness, 1,
   (char*)"V.SetThickness(float)\nC++: void SetThickness(double)\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid.\n"},
  {(char*)"GetThicknessMinValue", PyvtkSuperquadric_GetThicknessMinValue, 1,
   (char*)"V.GetThicknessMinValue() -> float\nC++: double GetThicknessMinValue()\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid.\n"},
  {(char*)"GetThicknessMaxValue", PyvtkSuperquadric_GetThicknessMaxValue, 1,
   (char*)"V.GetThicknessMaxValue() -> float\nC++: double GetThicknessMaxValue()\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid.\n"},
  {(char*)"GetPhiRoundness", PyvtkSuperquadric_GetPhiRoundness, 1,
   (char*)"V.GetPhiRoundness() -> float\nC++: double GetPhiRoundness()\n\nSet/Get Superquadric north/south roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders.\n"},
  {(char*)"SetPhiRoundness", PyvtkSuperquadric_SetPhiRoundness, 1,
   (char*)"V.SetPhiRoundness(float)\nC++: void SetPhiRoundness(double e)\n\nSet/Get Superquadric north/south roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders.\n"},
  {(char*)"GetThetaRoundness", PyvtkSuperquadric_GetThetaRoundness, 1,
   (char*)"V.GetThetaRoundness() -> float\nC++: double GetThetaRoundness()\n\nSet/Get Superquadric east/west roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders.\n"},
  {(char*)"SetThetaRoundness", PyvtkSuperquadric_SetThetaRoundness, 1,
   (char*)"V.SetThetaRoundness(float)\nC++: void SetThetaRoundness(double e)\n\nSet/Get Superquadric east/west roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders.\n"},
  {(char*)"SetSize", PyvtkSuperquadric_SetSize, 1,
   (char*)"V.SetSize(float)\nC++: void SetSize(double a)\n\nSet/Get Superquadric isotropic size.\n"},
  {(char*)"GetSize", PyvtkSuperquadric_GetSize, 1,
   (char*)"V.GetSize() -> float\nC++: double GetSize()\n\nSet/Get Superquadric isotropic size.\n"},
  {(char*)"ToroidalOn", PyvtkSuperquadric_ToroidalOn, 1,
   (char*)"V.ToroidalOn()\nC++: void ToroidalOn()\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0).\n"},
  {(char*)"ToroidalOff", PyvtkSuperquadric_ToroidalOff, 1,
   (char*)"V.ToroidalOff()\nC++: void ToroidalOff()\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0).\n"},
  {(char*)"GetToroidal", PyvtkSuperquadric_GetToroidal, 1,
   (char*)"V.GetToroidal() -> int\nC++: int GetToroidal()\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0).\n"},
  {(char*)"SetToroidal", PyvtkSuperquadric_SetToroidal, 1,
   (char*)"V.SetToroidal(int)\nC++: void SetToroidal(int a)\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSuperquadric_StaticNew()
{
  return vtkSuperquadric::New();
}

PyObject *PyVTKClass_vtkSuperquadricNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSuperquadric_StaticNew,
    PyvtkSuperquadric_Methods,
    "vtkSuperquadric", modulename,
    NULL, NULL,
    PyvtkSuperquadric_Doc(),
    PyVTKClass_vtkImplicitFunctionNew(modulename));
  return cls;
}

const char **PyvtkSuperquadric_Doc()
{
  static const char *docstring[] = {
    "vtkSuperquadric - implicit function for a Superquadric\n\n",
    "Superclass: vtkImplicitFunction\n\n",
    "vtkSuperquadric computes the implicit function and function gradient\nfor a superquadric. vtkSuperquadric is a concrete implementation of\nvtkImplicitFunction.  The superquadric is centered at Center and axes\nof rotation is along the y-axis. (Use the superclass'\nvtkImplicitFunction transformation matrix if necessary to\nreposition.) Roundness parameters (PhiRoundness and ThetaRoundness)\ncontrol the s",
    "hape of the superquadric.  The Toroidal boolean controls\nwhether a toroidal superquadric is produced.  If so, the Thickness\nparameter controls the thickness of the toroid:  0 is the thinnest\nallowable toroid, and 1 has a minimum sized hole.  The Scale\nparameters allow the superquadric to be scaled in x, y, and z (normal\nvectors are correctly generated in any case).  The Size parameter\ncontrols siz",
    "e of the superquadric.\n\nThis code is based on \"Rigid physically based superquadrics\", A. H.\nBarr, in \"Graphics Gems III\", David Kirk, ed., Academic Press, 1992.\n\nCaveats:\n\nThe Size and Thickness parameters control coefficients of\nsuperquadric generation, and may do not exactly describe the size of\nthe superquadric.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSuperquadric(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSuperquadricNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSuperquadric", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyFloat_FromDouble(1e-4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MIN_SUPERQUADRIC_THICKNESS", o) != 0)
    {
    Py_DECREF(o);
    }

}

