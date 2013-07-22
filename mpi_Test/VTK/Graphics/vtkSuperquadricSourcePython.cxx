// python wrapper for vtkSuperquadricSource
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
#include "vtkSuperquadricSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSuperquadricSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSuperquadricSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSuperquadricSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSuperquadricSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSuperquadricSource_Doc();


static PyObject *
PyvtkSuperquadricSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      tempr = op->vtkSuperquadricSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      tempr = op->vtkSuperquadricSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  vtkSuperquadricSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSuperquadricSource::NewInstance();
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
PyvtkSuperquadricSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSuperquadricSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSuperquadricSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSuperquadricSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSuperquadricSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSuperquadricSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkSuperquadricSource_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkSuperquadricSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      tempr = op->vtkSuperquadricSource::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSuperquadricSource_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSuperquadricSource_SetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSuperquadricSource_SetScale_s1(self, args);
    case 1:
      return PyvtkSuperquadricSource_SetScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return NULL;
}



static PyObject *
PyvtkSuperquadricSource_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      tempr = op->vtkSuperquadricSource::GetScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThetaResolution();
      }
    else
      {
      tempr = op->vtkSuperquadricSource::GetThetaResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThetaResolution(temp0);
      }
    else
      {
      op->vtkSuperquadricSource::SetThetaResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPhiResolution();
      }
    else
      {
      tempr = op->vtkSuperquadricSource::GetPhiResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPhiResolution(temp0);
      }
    else
      {
      op->vtkSuperquadricSource::SetPhiResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      tempr = op->vtkSuperquadricSource::GetThickness();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetThicknessMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      tempr = op->vtkSuperquadricSource::GetThicknessMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetThicknessMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      tempr = op->vtkSuperquadricSource::GetThicknessMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetPhiRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      tempr = op->vtkSuperquadricSource::GetPhiRoundness();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetPhiRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetPhiRoundness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetThetaRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      tempr = op->vtkSuperquadricSource::GetThetaRoundness();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetThetaRoundness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaRoundness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetThetaRoundness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      tempr = op->vtkSuperquadricSource::GetSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_ToroidalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToroidalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ToroidalOn();
      }
    else
      {
      op->vtkSuperquadricSource::ToroidalOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_ToroidalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToroidalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ToroidalOff();
      }
    else
      {
      op->vtkSuperquadricSource::ToroidalOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_GetToroidal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToroidal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      tempr = op->vtkSuperquadricSource::GetToroidal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSuperquadricSource_SetToroidal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToroidal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSuperquadricSource *op = static_cast<vtkSuperquadricSource *>(vp);

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
      op->vtkSuperquadricSource::SetToroidal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSuperquadricSource_Methods[] = {
  {(char*)"GetClassName", PyvtkSuperquadricSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSuperquadricSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSuperquadricSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSuperquadricSource\nC++: vtkSuperquadricSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSuperquadricSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSuperquadricSource\nC++: vtkSuperquadricSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCenter", PyvtkSuperquadricSource_SetCenter, 1,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkSuperquadricSource_GetCenter, 1,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet the center of the superquadric. Default is 0,0,0.\n"},
  {(char*)"SetScale", PyvtkSuperquadricSource_SetScale, 1,
   (char*)"V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\nV.SetScale((float, float, float))\nC++: void SetScale(double a[3])\n\n"},
  {(char*)"GetScale", PyvtkSuperquadricSource_GetScale, 1,
   (char*)"V.GetScale() -> (float, float, float)\nC++: double *GetScale()\n\nSet the scale factors of the superquadric. Default is 1,1,1.\n"},
  {(char*)"GetThetaResolution", PyvtkSuperquadricSource_GetThetaResolution, 1,
   (char*)"V.GetThetaResolution() -> int\nC++: int GetThetaResolution()\n\nSet the number of points in the longitude direction. Initial\nvalue is 16.\n"},
  {(char*)"SetThetaResolution", PyvtkSuperquadricSource_SetThetaResolution, 1,
   (char*)"V.SetThetaResolution(int)\nC++: void SetThetaResolution(int i)\n\nSet the number of points in the longitude direction. Initial\nvalue is 16.\n"},
  {(char*)"GetPhiResolution", PyvtkSuperquadricSource_GetPhiResolution, 1,
   (char*)"V.GetPhiResolution() -> int\nC++: int GetPhiResolution()\n\nSet the number of points in the latitude direction. Initial value\nis 16.\n"},
  {(char*)"SetPhiResolution", PyvtkSuperquadricSource_SetPhiResolution, 1,
   (char*)"V.SetPhiResolution(int)\nC++: void SetPhiResolution(int i)\n\nSet the number of points in the latitude direction. Initial value\nis 16.\n"},
  {(char*)"GetThickness", PyvtkSuperquadricSource_GetThickness, 1,
   (char*)"V.GetThickness() -> float\nC++: double GetThickness()\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid. Initial\nvalue is 0.3333.\n"},
  {(char*)"SetThickness", PyvtkSuperquadricSource_SetThickness, 1,
   (char*)"V.SetThickness(float)\nC++: void SetThickness(double)\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid. Initial\nvalue is 0.3333.\n"},
  {(char*)"GetThicknessMinValue", PyvtkSuperquadricSource_GetThicknessMinValue, 1,
   (char*)"V.GetThicknessMinValue() -> float\nC++: double GetThicknessMinValue()\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid. Initial\nvalue is 0.3333.\n"},
  {(char*)"GetThicknessMaxValue", PyvtkSuperquadricSource_GetThicknessMaxValue, 1,
   (char*)"V.GetThicknessMaxValue() -> float\nC++: double GetThicknessMaxValue()\n\nSet/Get Superquadric ring thickness (toroids only). Changing\nthickness maintains the outside diameter of the toroid. Initial\nvalue is 0.3333.\n"},
  {(char*)"GetPhiRoundness", PyvtkSuperquadricSource_GetPhiRoundness, 1,
   (char*)"V.GetPhiRoundness() -> float\nC++: double GetPhiRoundness()\n\nSet/Get Superquadric north/south roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders. Initial value is\n1.0.\n"},
  {(char*)"SetPhiRoundness", PyvtkSuperquadricSource_SetPhiRoundness, 1,
   (char*)"V.SetPhiRoundness(float)\nC++: void SetPhiRoundness(double e)\n\nSet/Get Superquadric north/south roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders. Initial value is\n1.0.\n"},
  {(char*)"GetThetaRoundness", PyvtkSuperquadricSource_GetThetaRoundness, 1,
   (char*)"V.GetThetaRoundness() -> float\nC++: double GetThetaRoundness()\n\nSet/Get Superquadric east/west roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders. Initial value is\n1.0.\n"},
  {(char*)"SetThetaRoundness", PyvtkSuperquadricSource_SetThetaRoundness, 1,
   (char*)"V.SetThetaRoundness(float)\nC++: void SetThetaRoundness(double e)\n\nSet/Get Superquadric east/west roundness. Values range from 0\n(rectangular) to 1 (circular) to higher orders. Initial value is\n1.0.\n"},
  {(char*)"SetSize", PyvtkSuperquadricSource_SetSize, 1,
   (char*)"V.SetSize(float)\nC++: void SetSize(double a)\n\nSet/Get Superquadric isotropic size. Initial value is 0.5;\n"},
  {(char*)"GetSize", PyvtkSuperquadricSource_GetSize, 1,
   (char*)"V.GetSize() -> float\nC++: double GetSize()\n\nSet/Get Superquadric isotropic size. Initial value is 0.5;\n"},
  {(char*)"ToroidalOn", PyvtkSuperquadricSource_ToroidalOn, 1,
   (char*)"V.ToroidalOn()\nC++: void ToroidalOn()\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0). Initial value is 0.\n"},
  {(char*)"ToroidalOff", PyvtkSuperquadricSource_ToroidalOff, 1,
   (char*)"V.ToroidalOff()\nC++: void ToroidalOff()\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0). Initial value is 0.\n"},
  {(char*)"GetToroidal", PyvtkSuperquadricSource_GetToroidal, 1,
   (char*)"V.GetToroidal() -> int\nC++: int GetToroidal()\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0). Initial value is 0.\n"},
  {(char*)"SetToroidal", PyvtkSuperquadricSource_SetToroidal, 1,
   (char*)"V.SetToroidal(int)\nC++: void SetToroidal(int a)\n\nSet/Get whether or not the superquadric is toroidal (1) or\nellipsoidal (0). Initial value is 0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSuperquadricSource_StaticNew()
{
  return vtkSuperquadricSource::New();
}

PyObject *PyVTKClass_vtkSuperquadricSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSuperquadricSource_StaticNew,
    PyvtkSuperquadricSource_Methods,
    "vtkSuperquadricSource", modulename,
    NULL, NULL,
    PyvtkSuperquadricSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSuperquadricSource_Doc()
{
  static const char *docstring[] = {
    "vtkSuperquadricSource - create a polygonal superquadric centered \n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkSuperquadricSource creates a superquadric (represented by\npolygons) of specified size centered at the origin. The resolution\n(polygonal discretization) in both the latitude (phi) and longitude\n(theta) directions can be specified. Roundness parameters\n(PhiRoundness and ThetaRoundness) control the shape of the\nsuperquadric.  The Toroidal boolean controls whether a toroidal\nsuperquadric is produce",
    "d.  If so, the Thickness parameter controls\nthe thickness of the toroid:  0 is the thinnest allowable toroid, and\n1 has a minimum sized hole.  The Scale parameters allow the\nsuperquadric to be scaled in x, y, and z (normal vectors are\ncorrectly generated in any case).  The Size parameter controls size\nof the superquadric.\n\nThis code is based on \"Rigid physically based superquadrics\", A. H.\nBarr, i",
    "n \"Graphics Gems III\", David Kirk, ed., Academic Press, 1992.\n\nCaveats:\n\nResolution means the number of latitude or longitude lines for a\ncomplete superquadric. The resolution parameters are rounded to the\nnearest 4 in phi and 8 in theta.\n\nTexture coordinates are not equally distributed around all\nsuperquadrics.\n\nThe Size and Thickness parameters control coefficients of\nsuperquadric generation, an",
    "d may do not exactly describe the size of\nthe superquadric.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSuperquadricSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSuperquadricSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSuperquadricSource", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1024);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MAX_SUPERQUADRIC_RESOLUTION", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyFloat_FromDouble(1e-4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MIN_SUPERQUADRIC_THICKNESS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyFloat_FromDouble(1e-24);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MIN_SUPERQUADRIC_ROUNDNESS", o) != 0)
    {
    Py_DECREF(o);
    }

}

