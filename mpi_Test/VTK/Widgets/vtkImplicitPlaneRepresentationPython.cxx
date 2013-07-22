// python wrapper for vtkImplicitPlaneRepresentation
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
#include "vtkImplicitPlaneRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImplicitPlaneRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImplicitPlaneRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImplicitPlaneRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImplicitPlaneRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkImplicitPlaneRepresentation_Doc();


static PyObject *
PyvtkImplicitPlaneRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

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
      tempr = op->vtkImplicitPlaneRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

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
      tempr = op->vtkImplicitPlaneRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkImplicitPlaneRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::NewInstance();
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
PyvtkImplicitPlaneRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImplicitPlaneRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImplicitPlaneRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

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
      op->vtkImplicitPlaneRepresentation::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitPlaneRepresentation_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetOrigin(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::SetOrigin(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitPlaneRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImplicitPlaneRepresentation_SetOrigin_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneRepresentation_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkImplicitPlaneRepresentation_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

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
      tempr = op->vtkImplicitPlaneRepresentation::GetOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitPlaneRepresentation_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetOrigin(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::GetOrigin(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitPlaneRepresentation_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImplicitPlaneRepresentation_GetOrigin_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneRepresentation_GetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return NULL;
}



static PyObject *
PyvtkImplicitPlaneRepresentation_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

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
      op->vtkImplicitPlaneRepresentation::SetNormal(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitPlaneRepresentation_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetNormal(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::SetNormal(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitPlaneRepresentation_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImplicitPlaneRepresentation_SetNormal_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneRepresentation_SetNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return NULL;
}



static PyObject *
PyvtkImplicitPlaneRepresentation_GetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

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
      tempr = op->vtkImplicitPlaneRepresentation::GetNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitPlaneRepresentation_GetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetNormal(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::GetNormal(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitPlaneRepresentation_GetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImplicitPlaneRepresentation_GetNormal_s1(self, args);
    case 1:
      return PyvtkImplicitPlaneRepresentation_GetNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNormal");
  return NULL;
}



static PyObject *
PyvtkImplicitPlaneRepresentation_SetNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalToXAxis(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::SetNormalToXAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalToXAxis();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetNormalToXAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_NormalToXAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToXAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToXAxisOn();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::NormalToXAxisOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_NormalToXAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToXAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToXAxisOff();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::NormalToXAxisOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalToYAxis(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::SetNormalToYAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalToYAxis();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetNormalToYAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_NormalToYAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToYAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToYAxisOn();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::NormalToYAxisOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_NormalToYAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToYAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToYAxisOff();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::NormalToYAxisOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalToZAxis(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::SetNormalToZAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalToZAxis();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetNormalToZAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_NormalToZAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToZAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToZAxisOn();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::NormalToZAxisOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_NormalToZAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToZAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalToZAxisOff();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::NormalToZAxisOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTubing(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::SetTubing(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTubing();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetTubing();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_TubingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TubingOn();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::TubingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_TubingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TubingOff();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::TubingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetDrawPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawPlane(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::SetDrawPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetDrawPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDrawPlane();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetDrawPlane();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_DrawPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawPlaneOn();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::DrawPlaneOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_DrawPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawPlaneOff();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::DrawPlaneOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetOutlineTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutlineTranslation(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::SetOutlineTranslation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetOutlineTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutlineTranslation();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetOutlineTranslation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_OutlineTranslationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineTranslationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineTranslationOn();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::OutlineTranslationOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_OutlineTranslationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineTranslationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutlineTranslationOff();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::OutlineTranslationOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetOutsideBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutsideBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutsideBounds(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::SetOutsideBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetOutsideBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutsideBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutsideBounds();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetOutsideBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_OutsideBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutsideBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutsideBoundsOn();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::OutsideBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_OutsideBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutsideBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->OutsideBoundsOff();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::OutsideBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleEnabled(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::SetScaleEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleEnabled();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetScaleEnabled();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_ScaleEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaleEnabledOn();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::ScaleEnabledOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_ScaleEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaleEnabledOff();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::ScaleEnabledOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GetPolyData(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetPolyDataAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkPolyDataAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPolyDataAlgorithm();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetPolyDataAlgorithm();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->GetPlane(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::GetPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdatePlacement();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::UpdatePlacement();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetNormalProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalProperty();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetNormalProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetSelectedNormalProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedNormalProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedNormalProperty();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetSelectedNormalProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlaneProperty();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetPlaneProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetSelectedPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedPlaneProperty();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetSelectedPlaneProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutlineProperty();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetOutlineProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetSelectedOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedOutlineProperty();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetSelectedOutlineProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetEdgesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEdgesProperty();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetEdgesProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      tempr = op->ComputeInteractionState(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::ComputeInteractionState(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->PlaceWidget(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::PlaceWidget(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->StartWidgetInteraction(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::StartWidgetInteraction(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->WidgetInteraction(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::WidgetInteraction(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->EndWidgetInteraction(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::EndWidgetInteraction(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBounds();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

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
      op->vtkImplicitPlaneRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

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
      tempr = op->vtkImplicitPlaneRepresentation::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

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
      tempr = op->vtkImplicitPlaneRepresentation::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

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
      tempr = op->vtkImplicitPlaneRepresentation::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionState(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::SetInteractionState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteractionStateMinValue();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetInteractionStateMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteractionStateMaxValue();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetInteractionStateMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_SetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRepresentationState(temp0);
      }
    else
      {
      op->vtkImplicitPlaneRepresentation::SetRepresentationState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitPlaneRepresentation_GetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitPlaneRepresentation *op = static_cast<vtkImplicitPlaneRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRepresentationState();
      }
    else
      {
      tempr = op->vtkImplicitPlaneRepresentation::GetRepresentationState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitPlaneRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitPlaneRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for the class.\n"},
  {(char*)"IsA", PyvtkImplicitPlaneRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for the class.\n"},
  {(char*)"NewInstance", PyvtkImplicitPlaneRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImplicitPlaneRepresentation\nC++: vtkImplicitPlaneRepresentation *NewInstance()\n\nStandard methods for the class.\n"},
  {(char*)"SafeDownCast", PyvtkImplicitPlaneRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitPlaneRepresentation\nC++: vtkImplicitPlaneRepresentation *SafeDownCast(vtkObject* o)\n\nStandard methods for the class.\n"},
  {(char*)"SetOrigin", PyvtkImplicitPlaneRepresentation_SetOrigin, 1,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double x, double y, double z)\nV.SetOrigin([float, float, float])\nC++: void SetOrigin(double x[3])\n\nGet the origin of the plane.\n"},
  {(char*)"GetOrigin", PyvtkImplicitPlaneRepresentation_GetOrigin, 1,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\nV.GetOrigin([float, float, float])\nC++: void GetOrigin(double xyz[3])\n\nGet the origin of the plane.\n"},
  {(char*)"SetNormal", PyvtkImplicitPlaneRepresentation_SetNormal, 1,
   (char*)"V.SetNormal(float, float, float)\nC++: void SetNormal(double x, double y, double z)\nV.SetNormal([float, float, float])\nC++: void SetNormal(double x[3])\n\nGet the normal to the plane.\n"},
  {(char*)"GetNormal", PyvtkImplicitPlaneRepresentation_GetNormal, 1,
   (char*)"V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\nV.GetNormal([float, float, float])\nC++: void GetNormal(double xyz[3])\n\nGet the normal to the plane.\n"},
  {(char*)"SetNormalToXAxis", PyvtkImplicitPlaneRepresentation_SetNormalToXAxis, 1,
   (char*)"V.SetNormalToXAxis(int)\nC++: void SetNormalToXAxis(int)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is orginally not\naligned.\n"},
  {(char*)"GetNormalToXAxis", PyvtkImplicitPlaneRepresentation_GetNormalToXAxis, 1,
   (char*)"V.GetNormalToXAxis() -> int\nC++: int GetNormalToXAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is orginally not\naligned.\n"},
  {(char*)"NormalToXAxisOn", PyvtkImplicitPlaneRepresentation_NormalToXAxisOn, 1,
   (char*)"V.NormalToXAxisOn()\nC++: void NormalToXAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is orginally not\naligned.\n"},
  {(char*)"NormalToXAxisOff", PyvtkImplicitPlaneRepresentation_NormalToXAxisOff, 1,
   (char*)"V.NormalToXAxisOff()\nC++: void NormalToXAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is orginally not\naligned.\n"},
  {(char*)"SetNormalToYAxis", PyvtkImplicitPlaneRepresentation_SetNormalToYAxis, 1,
   (char*)"V.SetNormalToYAxis(int)\nC++: void SetNormalToYAxis(int)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is orginally not\naligned.\n"},
  {(char*)"GetNormalToYAxis", PyvtkImplicitPlaneRepresentation_GetNormalToYAxis, 1,
   (char*)"V.GetNormalToYAxis() -> int\nC++: int GetNormalToYAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is orginally not\naligned.\n"},
  {(char*)"NormalToYAxisOn", PyvtkImplicitPlaneRepresentation_NormalToYAxisOn, 1,
   (char*)"V.NormalToYAxisOn()\nC++: void NormalToYAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is orginally not\naligned.\n"},
  {(char*)"NormalToYAxisOff", PyvtkImplicitPlaneRepresentation_NormalToYAxisOff, 1,
   (char*)"V.NormalToYAxisOff()\nC++: void NormalToYAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is orginally not\naligned.\n"},
  {(char*)"SetNormalToZAxis", PyvtkImplicitPlaneRepresentation_SetNormalToZAxis, 1,
   (char*)"V.SetNormalToZAxis(int)\nC++: void SetNormalToZAxis(int)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is orginally not\naligned.\n"},
  {(char*)"GetNormalToZAxis", PyvtkImplicitPlaneRepresentation_GetNormalToZAxis, 1,
   (char*)"V.GetNormalToZAxis() -> int\nC++: int GetNormalToZAxis()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is orginally not\naligned.\n"},
  {(char*)"NormalToZAxisOn", PyvtkImplicitPlaneRepresentation_NormalToZAxisOn, 1,
   (char*)"V.NormalToZAxisOn()\nC++: void NormalToZAxisOn()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is orginally not\naligned.\n"},
  {(char*)"NormalToZAxisOff", PyvtkImplicitPlaneRepresentation_NormalToZAxisOff, 1,
   (char*)"V.NormalToZAxisOff()\nC++: void NormalToZAxisOff()\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is orginally not\naligned.\n"},
  {(char*)"SetTubing", PyvtkImplicitPlaneRepresentation_SetTubing, 1,
   (char*)"V.SetTubing(int)\nC++: void SetTubing(int a)\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {(char*)"GetTubing", PyvtkImplicitPlaneRepresentation_GetTubing, 1,
   (char*)"V.GetTubing() -> int\nC++: int GetTubing()\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {(char*)"TubingOn", PyvtkImplicitPlaneRepresentation_TubingOn, 1,
   (char*)"V.TubingOn()\nC++: void TubingOn()\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {(char*)"TubingOff", PyvtkImplicitPlaneRepresentation_TubingOff, 1,
   (char*)"V.TubingOff()\nC++: void TubingOff()\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {(char*)"SetDrawPlane", PyvtkImplicitPlaneRepresentation_SetDrawPlane, 1,
   (char*)"V.SetDrawPlane(int)\nC++: void SetDrawPlane(int plane)\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {(char*)"GetDrawPlane", PyvtkImplicitPlaneRepresentation_GetDrawPlane, 1,
   (char*)"V.GetDrawPlane() -> int\nC++: int GetDrawPlane()\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {(char*)"DrawPlaneOn", PyvtkImplicitPlaneRepresentation_DrawPlaneOn, 1,
   (char*)"V.DrawPlaneOn()\nC++: void DrawPlaneOn()\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {(char*)"DrawPlaneOff", PyvtkImplicitPlaneRepresentation_DrawPlaneOff, 1,
   (char*)"V.DrawPlaneOff()\nC++: void DrawPlaneOff()\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {(char*)"SetOutlineTranslation", PyvtkImplicitPlaneRepresentation_SetOutlineTranslation, 1,
   (char*)"V.SetOutlineTranslation(int)\nC++: void SetOutlineTranslation(int a)\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button.\n"},
  {(char*)"GetOutlineTranslation", PyvtkImplicitPlaneRepresentation_GetOutlineTranslation, 1,
   (char*)"V.GetOutlineTranslation() -> int\nC++: int GetOutlineTranslation()\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button.\n"},
  {(char*)"OutlineTranslationOn", PyvtkImplicitPlaneRepresentation_OutlineTranslationOn, 1,
   (char*)"V.OutlineTranslationOn()\nC++: void OutlineTranslationOn()\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button.\n"},
  {(char*)"OutlineTranslationOff", PyvtkImplicitPlaneRepresentation_OutlineTranslationOff, 1,
   (char*)"V.OutlineTranslationOff()\nC++: void OutlineTranslationOff()\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button.\n"},
  {(char*)"SetOutsideBounds", PyvtkImplicitPlaneRepresentation_SetOutsideBounds, 1,
   (char*)"V.SetOutsideBounds(int)\nC++: void SetOutsideBounds(int a)\n\nTurn on/off the ability to move the widget outside of the bounds\nspecified in the initial PlaceWidget() invocation.\n"},
  {(char*)"GetOutsideBounds", PyvtkImplicitPlaneRepresentation_GetOutsideBounds, 1,
   (char*)"V.GetOutsideBounds() -> int\nC++: int GetOutsideBounds()\n\nTurn on/off the ability to move the widget outside of the bounds\nspecified in the initial PlaceWidget() invocation.\n"},
  {(char*)"OutsideBoundsOn", PyvtkImplicitPlaneRepresentation_OutsideBoundsOn, 1,
   (char*)"V.OutsideBoundsOn()\nC++: void OutsideBoundsOn()\n\nTurn on/off the ability to move the widget outside of the bounds\nspecified in the initial PlaceWidget() invocation.\n"},
  {(char*)"OutsideBoundsOff", PyvtkImplicitPlaneRepresentation_OutsideBoundsOff, 1,
   (char*)"V.OutsideBoundsOff()\nC++: void OutsideBoundsOff()\n\nTurn on/off the ability to move the widget outside of the bounds\nspecified in the initial PlaceWidget() invocation.\n"},
  {(char*)"SetScaleEnabled", PyvtkImplicitPlaneRepresentation_SetScaleEnabled, 1,
   (char*)"V.SetScaleEnabled(int)\nC++: void SetScaleEnabled(int a)\n\nTurn on/off the ability to scale the widget with the mouse.\n"},
  {(char*)"GetScaleEnabled", PyvtkImplicitPlaneRepresentation_GetScaleEnabled, 1,
   (char*)"V.GetScaleEnabled() -> int\nC++: int GetScaleEnabled()\n\nTurn on/off the ability to scale the widget with the mouse.\n"},
  {(char*)"ScaleEnabledOn", PyvtkImplicitPlaneRepresentation_ScaleEnabledOn, 1,
   (char*)"V.ScaleEnabledOn()\nC++: void ScaleEnabledOn()\n\nTurn on/off the ability to scale the widget with the mouse.\n"},
  {(char*)"ScaleEnabledOff", PyvtkImplicitPlaneRepresentation_ScaleEnabledOff, 1,
   (char*)"V.ScaleEnabledOff()\nC++: void ScaleEnabledOff()\n\nTurn on/off the ability to scale the widget with the mouse.\n"},
  {(char*)"GetPolyData", PyvtkImplicitPlaneRepresentation_GetPolyData, 1,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata that defines the plane. The polydata contains a\nsingle polygon that is clipped by the bounding box.\n"},
  {(char*)"GetPolyDataAlgorithm", PyvtkImplicitPlaneRepresentation_GetPolyDataAlgorithm, 1,
   (char*)"V.GetPolyDataAlgorithm() -> vtkPolyDataAlgorithm\nC++: vtkPolyDataAlgorithm *GetPolyDataAlgorithm()\n\nSatisfies superclass API.  This returns a pointer to the\nunderlying PolyData (which represents the plane).\n"},
  {(char*)"GetPlane", PyvtkImplicitPlaneRepresentation_GetPlane, 1,
   (char*)"V.GetPlane(vtkPlane)\nC++: void GetPlane(vtkPlane *plane)\n\nGet the implicit function for the plane. The user must provide\nthe instance of the class vtkPlane. Note that vtkPlane is a\nsubclass of vtkImplicitFunction, meaning that it can be used by a\nvariety of filters to perform clipping, cutting, and selection of\ndata.\n"},
  {(char*)"UpdatePlacement", PyvtkImplicitPlaneRepresentation_UpdatePlacement, 1,
   (char*)"V.UpdatePlacement()\nC++: void UpdatePlacement(void)\n\nSatisfies the superclass API.  This will change the state of the\nwidget to match changes that have been made to the underlying\nPolyDataSource\n"},
  {(char*)"GetNormalProperty", PyvtkImplicitPlaneRepresentation_GetNormalProperty, 1,
   (char*)"V.GetNormalProperty() -> vtkProperty\nC++: vtkProperty *GetNormalProperty()\n\nGet the properties on the normal (line and cone).\n"},
  {(char*)"GetSelectedNormalProperty", PyvtkImplicitPlaneRepresentation_GetSelectedNormalProperty, 1,
   (char*)"V.GetSelectedNormalProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedNormalProperty()\n\nGet the properties on the normal (line and cone).\n"},
  {(char*)"GetPlaneProperty", PyvtkImplicitPlaneRepresentation_GetPlaneProperty, 1,
   (char*)"V.GetPlaneProperty() -> vtkProperty\nC++: vtkProperty *GetPlaneProperty()\n\nGet the plane properties. The properties of the plane when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetSelectedPlaneProperty", PyvtkImplicitPlaneRepresentation_GetSelectedPlaneProperty, 1,
   (char*)"V.GetSelectedPlaneProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedPlaneProperty()\n\nGet the plane properties. The properties of the plane when\nselected and unselected can be manipulated.\n"},
  {(char*)"GetOutlineProperty", PyvtkImplicitPlaneRepresentation_GetOutlineProperty, 1,
   (char*)"V.GetOutlineProperty() -> vtkProperty\nC++: vtkProperty *GetOutlineProperty()\n\nGet the property of the outline.\n"},
  {(char*)"GetSelectedOutlineProperty", PyvtkImplicitPlaneRepresentation_GetSelectedOutlineProperty, 1,
   (char*)"V.GetSelectedOutlineProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedOutlineProperty()\n\nGet the property of the outline.\n"},
  {(char*)"GetEdgesProperty", PyvtkImplicitPlaneRepresentation_GetEdgesProperty, 1,
   (char*)"V.GetEdgesProperty() -> vtkProperty\nC++: vtkProperty *GetEdgesProperty()\n\nGet the property of the intersection edges. (This property also\napplies to the edges when tubed.)\n"},
  {(char*)"ComputeInteractionState", PyvtkImplicitPlaneRepresentation_ComputeInteractionState, 1,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nMethods to interface with the vtkSliderWidget.\n"},
  {(char*)"PlaceWidget", PyvtkImplicitPlaneRepresentation_PlaceWidget, 1,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\n\nMethods to interface with the vtkSliderWidget.\n"},
  {(char*)"BuildRepresentation", PyvtkImplicitPlaneRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nMethods to interface with the vtkSliderWidget.\n"},
  {(char*)"StartWidgetInteraction", PyvtkImplicitPlaneRepresentation_StartWidgetInteraction, 1,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double eventPos[2])\n\nMethods to interface with the vtkSliderWidget.\n"},
  {(char*)"WidgetInteraction", PyvtkImplicitPlaneRepresentation_WidgetInteraction, 1,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double newEventPos[2])\n\nMethods to interface with the vtkSliderWidget.\n"},
  {(char*)"EndWidgetInteraction", PyvtkImplicitPlaneRepresentation_EndWidgetInteraction, 1,
   (char*)"V.EndWidgetInteraction([float, float])\nC++: virtual void EndWidgetInteraction(double newEventPos[2])\n\nMethods to interface with the vtkSliderWidget.\n"},
  {(char*)"GetBounds", PyvtkImplicitPlaneRepresentation_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\n\n"},
  {(char*)"GetActors", PyvtkImplicitPlaneRepresentation_GetActors, 1,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *pc)\n\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkImplicitPlaneRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkImplicitPlaneRepresentation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkImplicitPlaneRepresentation_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkImplicitPlaneRepresentation_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\n"},
  {(char*)"SetInteractionState", PyvtkImplicitPlaneRepresentation_SetInteractionState, 1,
   (char*)"V.SetInteractionState(int)\nC++: void SetInteractionState(int)\n\nThe interaction state may be set from a widget (e.g.,\nvtkImplicitPlaneWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"GetInteractionStateMinValue", PyvtkImplicitPlaneRepresentation_GetInteractionStateMinValue, 1,
   (char*)"V.GetInteractionStateMinValue() -> int\nC++: int GetInteractionStateMinValue()\n\nThe interaction state may be set from a widget (e.g.,\nvtkImplicitPlaneWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"GetInteractionStateMaxValue", PyvtkImplicitPlaneRepresentation_GetInteractionStateMaxValue, 1,
   (char*)"V.GetInteractionStateMaxValue() -> int\nC++: int GetInteractionStateMaxValue()\n\nThe interaction state may be set from a widget (e.g.,\nvtkImplicitPlaneWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"SetRepresentationState", PyvtkImplicitPlaneRepresentation_SetRepresentationState, 1,
   (char*)"V.SetRepresentationState(int)\nC++: virtual void SetRepresentationState(int)\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {(char*)"GetRepresentationState", PyvtkImplicitPlaneRepresentation_GetRepresentationState, 1,
   (char*)"V.GetRepresentationState() -> int\nC++: int GetRepresentationState()\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitPlaneRepresentation_StaticNew()
{
  return vtkImplicitPlaneRepresentation::New();
}

PyObject *PyVTKClass_vtkImplicitPlaneRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitPlaneRepresentation_StaticNew,
    PyvtkImplicitPlaneRepresentation_Methods,
    "vtkImplicitPlaneRepresentation", modulename,
    NULL, NULL,
    PyvtkImplicitPlaneRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"Outside", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"Moving", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"MovingOutline", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"MovingOrigin", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"Rotating", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"Pushing", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"MovingPlane", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"Scaling", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkImplicitPlaneRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitPlaneRepresentation - a class defining the representation\nfor a vtkImplicitPlaneWidget2\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This class is a concrete representation for the\nvtkImplicitPlaneWidget2. It represents an infinite plane defined by a\nnormal and point in the context of a bounding box. Through\ninteraction with the widget, the plane can be manipulated by\nadjusting the plane normal or moving the origin point.\n\nTo use this representation, you normally define a (plane) origin and\n(plane) normal. The PlaceWidget() met",
    "hod is also used to intially\nposition the representation.\n\nCaveats:\n\nThis class, and vtkImplicitPlaneWidget2, are next generation VTK\nwidgets. An earlier version of this functionality was defined in the\nclass vtkImplicitPlaneWidget.\n\nSee Also:\n\nvtkImplicitPlaneWidget2 vtkImplicitPlaneWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitPlaneRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitPlaneRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitPlaneRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

