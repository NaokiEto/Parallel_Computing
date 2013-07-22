// python wrapper for vtkTextureMapToPlane
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
#include "vtkTextureMapToPlane.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTextureMapToPlane(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTextureMapToPlane(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTextureMapToPlaneNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTextureMapToPlaneNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkTextureMapToPlane_Doc();


static PyObject *
PyvtkTextureMapToPlane_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

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
      tempr = op->vtkTextureMapToPlane::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

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
      tempr = op->vtkTextureMapToPlane::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  vtkTextureMapToPlane *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTextureMapToPlane::NewInstance();
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
PyvtkTextureMapToPlane_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTextureMapToPlane *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTextureMapToPlane::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTextureMapToPlane::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkTextureMapToPlane::SetOrigin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTextureMapToPlane_SetOrigin_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkTextureMapToPlane_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrigin();
      }
    else
      {
      tempr = op->vtkTextureMapToPlane::GetOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTextureMapToPlane::SetPoint1(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPoint1(temp0);
      }
    else
      {
      op->vtkTextureMapToPlane::SetPoint1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTextureMapToPlane_SetPoint1_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return NULL;
}



static PyObject *
PyvtkTextureMapToPlane_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint1();
      }
    else
      {
      tempr = op->vtkTextureMapToPlane::GetPoint1();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTextureMapToPlane::SetPoint2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPoint2(temp0);
      }
    else
      {
      op->vtkTextureMapToPlane::SetPoint2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTextureMapToPlane_SetPoint2_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return NULL;
}



static PyObject *
PyvtkTextureMapToPlane_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint2();
      }
    else
      {
      tempr = op->vtkTextureMapToPlane::GetPoint2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTextureMapToPlane::SetNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetNormal(temp0);
      }
    else
      {
      op->vtkTextureMapToPlane::SetNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkTextureMapToPlane_SetNormal_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return NULL;
}



static PyObject *
PyvtkTextureMapToPlane_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormal();
      }
    else
      {
      tempr = op->vtkTextureMapToPlane::GetNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetSRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetSRange(temp0, temp1);
      }
    else
      {
      op->vtkTextureMapToPlane::SetSRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetSRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSRange(temp0);
      }
    else
      {
      op->vtkTextureMapToPlane::SetSRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetSRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTextureMapToPlane_SetSRange_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetSRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSRange");
  return NULL;
}



static PyObject *
PyvtkTextureMapToPlane_GetSRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSRange();
      }
    else
      {
      tempr = op->vtkTextureMapToPlane::GetSRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetTRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetTRange(temp0, temp1);
      }
    else
      {
      op->vtkTextureMapToPlane::SetTRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetTRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetTRange(temp0);
      }
    else
      {
      op->vtkTextureMapToPlane::SetTRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetTRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTextureMapToPlane_SetTRange_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetTRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetTRange");
  return NULL;
}



static PyObject *
PyvtkTextureMapToPlane_GetTRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTRange();
      }
    else
      {
      tempr = op->vtkTextureMapToPlane::GetTRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetAutomaticPlaneGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticPlaneGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAutomaticPlaneGeneration(temp0);
      }
    else
      {
      op->vtkTextureMapToPlane::SetAutomaticPlaneGeneration(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_GetAutomaticPlaneGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticPlaneGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAutomaticPlaneGeneration();
      }
    else
      {
      tempr = op->vtkTextureMapToPlane::GetAutomaticPlaneGeneration();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_AutomaticPlaneGenerationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticPlaneGenerationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticPlaneGenerationOn();
      }
    else
      {
      op->vtkTextureMapToPlane::AutomaticPlaneGenerationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_AutomaticPlaneGenerationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticPlaneGenerationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AutomaticPlaneGenerationOff();
      }
    else
      {
      op->vtkTextureMapToPlane::AutomaticPlaneGenerationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTextureMapToPlane_Methods[] = {
  {(char*)"GetClassName", PyvtkTextureMapToPlane_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTextureMapToPlane_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTextureMapToPlane_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTextureMapToPlane\nC++: vtkTextureMapToPlane *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTextureMapToPlane_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTextureMapToPlane\nC++: vtkTextureMapToPlane *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOrigin", PyvtkTextureMapToPlane_SetOrigin, 1,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\nV.SetOrigin((float, float, float))\nC++: void SetOrigin(double a[3])\n\n"},
  {(char*)"GetOrigin", PyvtkTextureMapToPlane_GetOrigin, 1,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\n\nSpecify a point defining the origin of the plane. Used in\nconjunction with the Point1 and Point2 ivars to specify a map\nplane.\n"},
  {(char*)"SetPoint1", PyvtkTextureMapToPlane_SetPoint1, 1,
   (char*)"V.SetPoint1(float, float, float)\nC++: void SetPoint1(double, double, double)\nV.SetPoint1((float, float, float))\nC++: void SetPoint1(double a[3])\n\n"},
  {(char*)"GetPoint1", PyvtkTextureMapToPlane_GetPoint1, 1,
   (char*)"V.GetPoint1() -> (float, float, float)\nC++: double *GetPoint1()\n\nSpecify a point defining the first axis of the plane.\n"},
  {(char*)"SetPoint2", PyvtkTextureMapToPlane_SetPoint2, 1,
   (char*)"V.SetPoint2(float, float, float)\nC++: void SetPoint2(double, double, double)\nV.SetPoint2((float, float, float))\nC++: void SetPoint2(double a[3])\n\n"},
  {(char*)"GetPoint2", PyvtkTextureMapToPlane_GetPoint2, 1,
   (char*)"V.GetPoint2() -> (float, float, float)\nC++: double *GetPoint2()\n\nSpecify a point defining the second axis of the plane.\n"},
  {(char*)"SetNormal", PyvtkTextureMapToPlane_SetNormal, 1,
   (char*)"V.SetNormal(float, float, float)\nC++: void SetNormal(double, double, double)\nV.SetNormal((float, float, float))\nC++: void SetNormal(double a[3])\n\n"},
  {(char*)"GetNormal", PyvtkTextureMapToPlane_GetNormal, 1,
   (char*)"V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\nSpecify plane normal. An alternative way to specify a map plane.\nUsing this method, the object will scale the resulting texture\ncoordinate between the SRange and TRange specified.\n"},
  {(char*)"SetSRange", PyvtkTextureMapToPlane_SetSRange, 1,
   (char*)"V.SetSRange(float, float)\nC++: void SetSRange(double, double)\nV.SetSRange((float, float))\nC++: void SetSRange(double a[2])\n\n"},
  {(char*)"GetSRange", PyvtkTextureMapToPlane_GetSRange, 1,
   (char*)"V.GetSRange() -> (float, float)\nC++: double *GetSRange()\n\nSpecify s-coordinate range for texture s-t coordinate pair.\n"},
  {(char*)"SetTRange", PyvtkTextureMapToPlane_SetTRange, 1,
   (char*)"V.SetTRange(float, float)\nC++: void SetTRange(double, double)\nV.SetTRange((float, float))\nC++: void SetTRange(double a[2])\n\n"},
  {(char*)"GetTRange", PyvtkTextureMapToPlane_GetTRange, 1,
   (char*)"V.GetTRange() -> (float, float)\nC++: double *GetTRange()\n\nSpecify t-coordinate range for texture s-t coordinate pair.\n"},
  {(char*)"SetAutomaticPlaneGeneration", PyvtkTextureMapToPlane_SetAutomaticPlaneGeneration, 1,
   (char*)"V.SetAutomaticPlaneGeneration(int)\nC++: void SetAutomaticPlaneGeneration(int a)\n\nTurn on/off automatic plane generation.\n"},
  {(char*)"GetAutomaticPlaneGeneration", PyvtkTextureMapToPlane_GetAutomaticPlaneGeneration, 1,
   (char*)"V.GetAutomaticPlaneGeneration() -> int\nC++: int GetAutomaticPlaneGeneration()\n\nTurn on/off automatic plane generation.\n"},
  {(char*)"AutomaticPlaneGenerationOn", PyvtkTextureMapToPlane_AutomaticPlaneGenerationOn, 1,
   (char*)"V.AutomaticPlaneGenerationOn()\nC++: void AutomaticPlaneGenerationOn()\n\nTurn on/off automatic plane generation.\n"},
  {(char*)"AutomaticPlaneGenerationOff", PyvtkTextureMapToPlane_AutomaticPlaneGenerationOff, 1,
   (char*)"V.AutomaticPlaneGenerationOff()\nC++: void AutomaticPlaneGenerationOff()\n\nTurn on/off automatic plane generation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextureMapToPlane_StaticNew()
{
  return vtkTextureMapToPlane::New();
}

PyObject *PyVTKClass_vtkTextureMapToPlaneNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextureMapToPlane_StaticNew,
    PyvtkTextureMapToPlane_Methods,
    "vtkTextureMapToPlane", modulename,
    NULL, NULL,
    PyvtkTextureMapToPlane_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTextureMapToPlane_Doc()
{
  static const char *docstring[] = {
    "vtkTextureMapToPlane - generate texture coordinates by mapping points\nto plane\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkTextureMapToPlane is a filter that generates 2D texture\ncoordinates by mapping input dataset points onto a plane. The plane\ncan either be user specified or generated automatically. (A least\nsquares method is used to generate the plane automatically.)\n\nThere are two ways you can specify the plane. The first is to provide\na plane normal. In this case the points are projected to a plane, and\nthe p",
    "oints are then mapped into the user specified s-t coordinate\nrange. For more control, you can specify a plane with three points:\nan origin and two points defining the two axes of the plane. (This is\ncompatible with the vtkPlaneSource.) Using the second method, the\nSRange and TRange vectors are ignored, since the presumption is that\nthe user does not want to scale the texture coordinates; and you c",
    "an\nadjust the origin and axes points to achieve the texture coordinate\nscaling you need. Note also that using the three point method the\naxes do not have to be orthogonal.\n\nSee Also:\n\n\n vtkPlaneSource vtkTextureMapToCylinder vtkTextureMapToSphere\nvtkThresholdTextureCoords\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextureMapToPlane(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextureMapToPlaneNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextureMapToPlane", o) != 0)
    {
    Py_DECREF(o);
    }

}

